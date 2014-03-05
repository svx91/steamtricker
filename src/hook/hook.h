#ifndef STEAMTRICKER_SRC_HOOK_H_
#define STEAMTRICKER_SRC_HOOK_H_

#ifdef __cplusplus
extern "C" {
#endif

#define __STEAMAPI extern "C" __attribute__ ((visibility ("default")))

struct hook {
	/* name of library; gets dlopen'd */
	const char *lib_name;
	/* name of the symbol */
	const char *symbol_name;
	/* address of the hook */
	void *hook_handle;
	/* version; unused */
	int version;
};

struct hooked_symbol {
	/* lin name */
	char *lib_name;
	/* library handle */
	void *lib_handle;
	/* name of the symbol */
	char *symbol_name;
	/* original address of the hooked function */
	void *symbol_handle;
	/* address of the hook */
	void *hook_handle;
	/* unused */
	int version;
	/* next */
	struct hooked_symbol *next;
};

void
init_hooking();

struct hooked_symbol *
register_hook(struct hook *hook);

void
unregister_hook(struct hooked_symbol *hooked);

#ifdef __cplusplus
}
#endif

#endif /* STEAMTRICKER_SRC_HOOK_H_ */