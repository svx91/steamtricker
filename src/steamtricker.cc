#include "hook/hook.h"
#include "steamapi/api.h"

#define __PUBLIC __attribute__ ((visibility ("default")))
#define __CONSTRUCTOR __attribute__((constructor))
#define __DESTRUCTOR __attribute__((destructor))

__CONSTRUCTOR
static void
steamtricker_init()
{
	// WARNING you may not use std c++ functions until the constructor has
	// finished executing completely

	init_hooking();
	SteamAPI::hookInit();
}

__DESTRUCTOR
static void
steamtricker_shutdown()
{
	SteamAPI::hookShutdown();
}
