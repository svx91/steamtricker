#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <dlfcn.h>

#include "elfhacks.h"
#include "hook.h"

#define log(str, ...) fprintf(stderr, "[hook] " str "\n", ##__VA_ARGS__)

struct {
    void *(*dlopen)(const char *filename, int flag);
    void *(*dlsym)(void *handle, const char *symbol);
    void *(*dlvsym)(void *handle, const char *symbol, const char *version);
    void *(*__libc_dlsym)(void *handle, const char *symbol);
} lib = {0};

struct hooked_symbol *hooked_symbols = NULL;


void
init_hooking()
{
	int err;
	eh_obj_t libdl;
	eh_obj_t libc;

	if((err = eh_find_obj(&libdl, "*libdl.so*"))) {
		log("libdl.so not found in memory");
		exit(0);
	}

	if((err = eh_find_sym(&libdl, "dlopen", (void **) &lib.dlopen))) {
		log("dlopen not found");
		exit(0);
	}

	if((err = eh_find_sym(&libdl, "dlsym", (void **) &lib.dlsym))) {
		log("dlsym not found");
		exit(0);
	}

	if((err = eh_find_sym(&libdl, "dlvsym", (void **) &lib.dlvsym))) {
		log("dlopen not found");
		exit(0);
	}

	if((err = eh_find_obj(&libc, "*libc.so*"))) {
		log("libc.so not found in memory");
		exit(0);
	}

	if((err = eh_find_sym(&libc, "__libc_dlsym", (void **) &lib.__libc_dlsym))) {
		log("__libc_dlsym not found");
		exit(0);
	}

	eh_destroy_obj(&libdl);
	eh_destroy_obj(&libc);
}

struct hooked_symbol *
register_hook(struct hook *hook)
{
	void *lib_handle = lib.dlopen(hook->lib_name, RTLD_LAZY);
	if(!lib_handle) {
		log("cannot open library %s", hook->lib_name);
		return NULL;
	}

	void *symbol_handle = lib.dlsym(lib_handle, hook->symbol_name);
	if(!symbol_handle) {
		log("cannot find %s in %s", hook->symbol_name, hook->lib_name);
		return NULL;
	}

	struct hooked_symbol *hooked = malloc(sizeof(*hooked));
	if(!hooked) {
		log("out of memory");
		return NULL;
	}

	hooked->lib_name = strdup(hook->lib_name);
	hooked->lib_handle = lib_handle;
	hooked->symbol_name = strdup(hook->symbol_name);
	hooked->symbol_handle = symbol_handle;
	hooked->hook_handle = hook->hook_handle;
	hooked->next = hooked_symbols;
	hooked_symbols = hooked;

	return hooked;
}

void
unregister_hook(struct hooked_symbol *hooked)
{
	struct hooked_symbol **sym = &hooked_symbols;
	while(*sym) {
		if((*sym) == hooked) {
			*sym = (*sym)->next;
			return;
		}
		sym = &(*sym)->next;
	}
}

static void *
fake_dlsym(void *handle, const char *symbol, const char *version)
{
	(void)(version);
	struct hooked_symbol *sym = hooked_symbols;
	while(sym) {
		if((sym->lib_handle == handle) &&
		   strcmp(sym->symbol_name, symbol) == 0)
			return sym->hook_handle;
		sym = sym->next;
	}
	return NULL;
}



__PUBLIC void *dlopen(const char *filename, int flag);
__PUBLIC void *dlsym(void *handle, const char *symbol);
__PUBLIC void *dlvsym(void *handle, const char *symbol, const char *version);
__PUBLIC void *__libc_dlsym(void *handle, const char *symbol);

void *dlopen(const char *filename, int flag) {
	return lib.dlopen(filename, flag);
}

void *dlsym(void *handle, const char *symbol) {
    void *ret = fake_dlsym(handle, symbol, NULL);
    if (ret)
        return ret;

    return lib.dlsym(handle, symbol);
}

void *dlvsym(void *handle, const char *symbol, const char *version) {
    void *ret = fake_dlsym(handle, symbol, version);
    if (ret)
        return ret;

    return lib.dlvsym(handle, symbol, version);
}

void *__libc_dlsym(void *handle, const char *symbol) {
    void *ret = fake_dlsym(handle, symbol, NULL);
    if (ret)
        return ret;

    return lib.__libc_dlsym(handle, symbol);
}