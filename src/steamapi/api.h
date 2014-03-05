#ifndef STEAMTRICKER_STEAMAPI_API_H_
#define STEAMTRICKER_STEAMAPI_API_H_

#include "types.h"

#include "client.h"
#include "user.h"
#include "utils.h"
#include "apps.h"
#include "remotestorage.h"
#include "friends.h"
#include "matchmaking.h"
#include "networking.h"
#include "userstats.h"

class SteamAPI {
public:
	static void hookInit();
	static void hookShutdown();

	static bool Init();

	static bool InitSafe();

	static void Shutdown();

	static bool IsSteamRunning();

	static ISteamClient * SteamClient();

	static ISteamUser * SteamUser();

	static ISteamFriends * SteamFriends();

	static ISteamUtils * SteamUtils();

	static ISteamMatchmaking * SteamMatchmaking();

	static ISteamUserStats * SteamUserStats();

	static ISteamApps * SteamApps();

	static ISteamNetworking * SteamNetworking();

	static ISteamMatchmakingServers * SteamMatchmakingServers();

	static ISteamRemoteStorage * SteamRemoteStorage();
};

#endif /* STEAMTRICKER_STEAMAPI_API_H_ */