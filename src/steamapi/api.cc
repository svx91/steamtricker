#include <hook/hook.h>
#include "api.h"

__STEAMAPI bool
SteamAPI_Init()
{
	STUB();
	return SteamAPI::Init();
}

__STEAMAPI bool
SteamAPI_InitSafe()
{
	STUB();
	return SteamAPI::InitSafe();
}

__STEAMAPI void
SteamAPI_Shutdown()
{
	STUB();
	SteamAPI::Shutdown();
}

__STEAMAPI bool
SteamAPI_IsSteamRunning()
{
	STUB();
	return SteamAPI::IsSteamRunning();
}

__STEAMAPI bool
SteamAPI_RestartAppIfNecessary(uint32 appId)
{
	STUB();
	return false;
}

__STEAMAPI void
SteamAPI_WriteMiniDump(uint32 exceptionCode,
		       void *exceptionInfo,
		       uint32 buildId)
{
	STUB();
}

__STEAMAPI void
SteamAPI_SetMiniDumpComment(const char *msg)
{
	STUB();
}

__STEAMAPI void
SteamAPI_UseBreakpadCrashHandler(char const *version,
				 char const *date,
				 char const *time)
{
	STUB();
}

__STEAMAPI ISteamClient *
SteamClient()
{
	STUB();
	return SteamAPI::SteamClient();
}

__STEAMAPI ISteamUser *
SteamUser()
{
	STUB();
	return SteamAPI::SteamUser();
}

__STEAMAPI ISteamFriends *
SteamFriends()
{
	STUB();
	return SteamAPI::SteamFriends();
}

__STEAMAPI ISteamUtils *
SteamUtils()
{
	STUB();
	return SteamAPI::SteamUtils();
}

__STEAMAPI ISteamMatchmaking *
SteamMatchmaking()
{
	STUB();
	return SteamAPI::SteamMatchmaking();
}

__STEAMAPI ISteamUserStats *
SteamUserStats()
{
	STUB();
	return SteamAPI::SteamUserStats();
}

__STEAMAPI ISteamApps *
SteamApps()
{
	STUB();
	return SteamAPI::SteamApps();
}

__STEAMAPI ISteamNetworking *
SteamNetworking()
{
	STUB();
	return SteamAPI::SteamNetworking();
}

__STEAMAPI ISteamMatchmakingServers *
SteamMatchmakingServers()
{
	STUB();
	return SteamAPI::SteamMatchmakingServers();
}

__STEAMAPI ISteamRemoteStorage *
SteamRemoteStorage()
{
	STUB();
	return SteamAPI::SteamRemoteStorage();
}

__STEAMAPI void
SteamAPI_RunCallbacks()
{
	STUB();
}

__STEAMAPI void
SteamAPI_RegisterCallback(class CallbackBase *callback, int iCallback)
{
	STUB();
}

__STEAMAPI void
SteamAPI_UnregisterCallback(class CallbackBase *callback)
{
	STUB();
}

__STEAMAPI void
SteamAPI_RegisterCallResult(class CallbackBase *callback,
			    SteamAPICall apiCall)
{
	STUB();
}

__STEAMAPI void
SteamAPI_UnregisterCallResult(class CallbackBase *callback,
			      SteamAPICall apiCall)
{
	STUB();
}

__STEAMAPI void
Steam_RunCallbacks(SteamPipeId steamPipe, bool gameServerCallbacks)
{
	STUB();
}

__STEAMAPI void
Steam_RegisterInterfaceFuncs(void *module)
{
	STUB();
}

__STEAMAPI SteamUserId
Steam_GetHSteamUserCurrent()
{
	STUB();
	return 0;
}

__STEAMAPI const char *
SteamAPI_GetSteamInstallPath()
{
	STUB();
	return NULL;
}

__STEAMAPI SteamPipeId
SteamAPI_GetHSteamPipe()
{
	STUB();
	return 0;
}

__STEAMAPI void
SteamAPI_SetTryCatchCallbacks(bool tryCatchCallbacks)
{
	STUB();
}

__STEAMAPI SteamPipeId
GetHSteamPipe()
{
	STUB();
	return 0;
}

__STEAMAPI SteamUserId
GetHSteamUser()
{
	STUB();
	return 0;
}

__STEAMAPI SteamUserId
SteamAPI_GetHSteamUser()
{
	STUB();
	return 0;
}

__STEAMAPI bool
SteamGameServer_InitSafe(uint32 ip,
			 uint16 port,
			 uint16 gamePort,
			 uint16 spectatorPort,
			 uint16 queryPort,
			 ServerMode serverMode,
			 const char *gameDir,
			 const char *versionString)
{
	STUB();
	return true;
}

__STEAMAPI bool
SteamGameServer_Init(uint32 ip,
		     uint16 port,
		     uint16 gamePort,
		     uint16 spectatorPort,
		     uint16 queryPort,
		     ServerMode serverMode,
		     const char *gameDir,
		     const char *versionString)
{
	STUB();
	return true;
}

__STEAMAPI ISteamGameServer *
SteamGameServer() {
	STUB();
	return NULL;
}

__STEAMAPI ISteamUtils *
SteamGameServerUtils() {
	STUB();
	return NULL;
}

__STEAMAPI ISteamMasterServerUpdater *
SteamMasterServerUpdater() {
	STUB();
	return NULL;
}

__STEAMAPI ISteamNetworking *
SteamGameServerNetworking() {
	STUB();
	return NULL;
}

__STEAMAPI ISteamGameServerStats *
SteamGameServerStats() {
	STUB();
	return NULL;
}

__STEAMAPI void
SteamGameServer_Shutdown() {
	STUB();
}

__STEAMAPI void
SteamGameServer_RunCallbacks()
{
	STUB();
}

__STEAMAPI bool
SteamGameServer_BSecure() {
	STUB();
	return true;
}

__STEAMAPI uint64
SteamGameServer_GetSteamID()
{
	STUB();
	return 0;
}

__STEAMAPI SteamPipeId
SteamGameServer_GetHSteamPipe()
{
	STUB();
	return 0;
}

__STEAMAPI SteamUserId
SteamGameServer_GetHSteamUser()
{
	STUB();
	return 0;
}

__STEAMAPI ISteamClient *
g_pSteamClientGameServer; // FIXME

void
SteamAPI::hookInit()
{
	
	
	struct hook SteamAPI_Init_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_Init",
		.hook_handle = (void*)SteamAPI_Init,
		.version = -1
	};

	struct hook SteamAPI_Shutdown_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_Shutdown",
		.hook_handle = (void*)SteamAPI_Shutdown,
		.version = -1
	};

	struct hook SteamAPI_InitSafe_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_InitSafe",
		.hook_handle = (void*)SteamAPI_InitSafe,
		.version = -1
	};

	struct hook SteamAPI_IsSteamRunning_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_IsSteamRunning",
		.hook_handle = (void*)SteamAPI_IsSteamRunning,
		.version = -1
	};

	struct hook SteamAPI_RestartAppIfNecessary_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_RestartAppIfNecessary",
		.hook_handle = (void*)SteamAPI_RestartAppIfNecessary,
		.version = -1
	};

	struct hook SteamAPI_WriteMiniDump_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_WriteMiniDump",
		.hook_handle = (void*)SteamAPI_WriteMiniDump,
		.version = -1
	};

	struct hook SteamAPI_SetMiniDumpComment_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_SetMiniDumpComment",
		.hook_handle = (void*)SteamAPI_SetMiniDumpComment,
		.version = -1
	};

	struct hook SteamAPI_UseBreakpadCrashHandler_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_UseBreakpadCrashHandler",
		.hook_handle = (void*)SteamAPI_UseBreakpadCrashHandler,
		.version = -1
	};

	struct hook SteamClient_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamClient",
		.hook_handle = (void*)SteamClient,
		.version = -1
	};

	struct hook SteamUser_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamUser",
		.hook_handle = (void*)SteamUser,
		.version = -1
	};

	struct hook SteamFriends_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamFriends",
		.hook_handle = (void*)SteamFriends,
		.version = -1
	};

	struct hook SteamUtils_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamUtils",
		.hook_handle = (void*)SteamUtils,
		.version = -1
	};

	struct hook SteamMatchmaking_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamMatchmaking",
		.hook_handle = (void*)SteamMatchmaking,
		.version = -1
	};

	struct hook SteamUserStats_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamUserStats",
		.hook_handle = (void*)SteamUserStats,
		.version = -1
	};

	struct hook SteamApps_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamApps",
		.hook_handle = (void*)SteamApps,
		.version = -1
	};

	struct hook SteamNetworking_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamNetworking",
		.hook_handle = (void*)SteamNetworking,
		.version = -1
	};

	struct hook SteamMatchmakingServers_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamMatchmakingServers",
		.hook_handle = (void*)SteamMatchmakingServers,
		.version = -1
	};

	struct hook SteamRemoteStorage_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamRemoteStorage",
		.hook_handle = (void*)SteamRemoteStorage,
		.version = -1
	};

	struct hook SteamAPI_RunCallbacks_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_RunCallbacks",
		.hook_handle = (void*)SteamAPI_RunCallbacks,
		.version = -1
	};

	struct hook SteamAPI_RegisterCallback_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_RegisterCallback",
		.hook_handle = (void*)SteamAPI_RegisterCallback,
		.version = -1
	};

	struct hook SteamAPI_UnregisterCallback_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_UnregisterCallback",
		.hook_handle = (void*)SteamAPI_UnregisterCallback,
		.version = -1
	};

	struct hook SteamAPI_RegisterCallResult_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_RegisterCallResult",
		.hook_handle = (void*)SteamAPI_RegisterCallResult,
		.version = -1
	};

	struct hook SteamAPI_UnregisterCallResult_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_UnregisterCallResult",
		.hook_handle = (void*)SteamAPI_UnregisterCallResult,
		.version = -1
	};

	struct hook Steam_RunCallbacks_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "Steam_RunCallbacks",
		.hook_handle = (void*)Steam_RunCallbacks,
		.version = -1
	};

	struct hook Steam_RegisterInterfaceFuncs_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "Steam_RegisterInterfaceFuncs",
		.hook_handle = (void*)Steam_RegisterInterfaceFuncs,
		.version = -1
	};

	struct hook Steam_GetHSteamUserCurrent_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "Steam_GetHSteamUserCurrent",
		.hook_handle = (void*)Steam_GetHSteamUserCurrent,
		.version = -1
	};

	struct hook SteamAPI_GetSteamInstallPath_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_GetSteamInstallPath",
		.hook_handle = (void*)SteamAPI_GetSteamInstallPath,
		.version = -1
	};

	struct hook SteamAPI_GetHSteamPipe_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_GetHSteamPipe",
		.hook_handle = (void*)SteamAPI_GetHSteamPipe,
		.version = -1
	};

	struct hook SteamAPI_SetTryCatchCallbacks_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_SetTryCatchCallbacks",
		.hook_handle = (void*)SteamAPI_SetTryCatchCallbacks,
		.version = -1
	};

	struct hook GetHSteamPipe_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "GetHSteamPipe",
		.hook_handle = (void*)GetHSteamPipe,
		.version = -1
	};

	struct hook GetHSteamUser_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "GetHSteamUser",
		.hook_handle = (void*)GetHSteamUser,
		.version = -1
	};

	struct hook SteamAPI_GetHSteamUser_hook = {
		.lib_name = "libsteam_api.so",
		.symbol_name = "SteamAPI_GetHSteamUser",
		.hook_handle = (void*)SteamAPI_GetHSteamUser,
		.version = -1
	};

	register_hook(&SteamAPI_Init_hook);
	register_hook(&SteamAPI_Shutdown_hook);
	register_hook(&SteamAPI_InitSafe_hook);
	register_hook(&SteamAPI_IsSteamRunning_hook);
	register_hook(&SteamAPI_RestartAppIfNecessary_hook);
	register_hook(&SteamAPI_WriteMiniDump_hook);
	register_hook(&SteamAPI_SetMiniDumpComment_hook);
	register_hook(&SteamAPI_UseBreakpadCrashHandler_hook);
	register_hook(&SteamClient_hook);
	register_hook(&SteamUser_hook);
	register_hook(&SteamFriends_hook);
	register_hook(&SteamUtils_hook);
	register_hook(&SteamMatchmaking_hook);
	register_hook(&SteamUserStats_hook);
	register_hook(&SteamApps_hook);
	register_hook(&SteamNetworking_hook);
	register_hook(&SteamMatchmakingServers_hook);
	register_hook(&SteamRemoteStorage_hook);
	register_hook(&SteamAPI_RunCallbacks_hook);
	register_hook(&SteamAPI_RegisterCallback_hook);
	register_hook(&SteamAPI_UnregisterCallback_hook);
	register_hook(&SteamAPI_RegisterCallResult_hook);
	register_hook(&SteamAPI_UnregisterCallResult_hook);
	register_hook(&Steam_RunCallbacks_hook);
	register_hook(&Steam_RegisterInterfaceFuncs_hook);
	register_hook(&Steam_GetHSteamUserCurrent_hook);
	register_hook(&SteamAPI_GetSteamInstallPath_hook);
	register_hook(&SteamAPI_GetHSteamPipe_hook);
	register_hook(&SteamAPI_SetTryCatchCallbacks_hook);
	register_hook(&GetHSteamPipe_hook);
	register_hook(&GetHSteamUser_hook);
	register_hook(&SteamAPI_GetHSteamUser_hook);
}

void
SteamAPI::hookShutdown()
{
	/* nop */
}

bool
SteamAPI::Init()
{
	return true;
}

bool
SteamAPI::InitSafe()
{
	return true;
}

void
SteamAPI::Shutdown()
{
}

bool
SteamAPI::IsSteamRunning()
{
	return true;
}

ISteamClient *
SteamAPI::SteamClient()
{
	return static_cast<ISteamClient*>(&CSteamClient::getInstance());
}

ISteamUser *
SteamAPI::SteamUser()
{
	return static_cast<ISteamUser*>(&CSteamUser::getInstance());
}

ISteamFriends *
SteamAPI::SteamFriends()
{
	return static_cast<ISteamFriends*>(&CSteamFriends::getInstance());
}

ISteamUtils *
SteamAPI::SteamUtils()
{
	return static_cast<ISteamUtils*>(&CSteamUtils::getInstance());
}

ISteamMatchmaking *
SteamAPI::SteamMatchmaking()
{
	return static_cast<ISteamMatchmaking*>(
		&CSteamMatchmaking::getInstance());
}

ISteamUserStats *
SteamAPI::SteamUserStats()
{
	return static_cast<ISteamUserStats*>(&CSteamUserStats::getInstance());
}

ISteamApps *
SteamAPI::SteamApps()
{
	return static_cast<ISteamApps*>(&CSteamApps::getInstance());
}

ISteamNetworking *
SteamAPI::SteamNetworking()
{
	return static_cast<ISteamNetworking*>(&CSteamNetworking::getInstance());
}

ISteamMatchmakingServers *
SteamAPI::SteamMatchmakingServers()
{
	return static_cast<ISteamMatchmakingServers*>(
		&CSteamMatchmakingServers::getInstance());
}

ISteamRemoteStorage *
SteamAPI::SteamRemoteStorage()
{
	return static_cast<ISteamRemoteStorage*>(
		&CSteamRemoteStorage::getInstance());
}
