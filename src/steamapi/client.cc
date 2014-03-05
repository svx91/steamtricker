#include "user.h"
#include "userstats.h"
#include "friends.h"
#include "utils.h"
#include "matchmaking.h"
#include "apps.h"
#include "networking.h"
#include "remotestorage.h"
#include "gameserver.h"
#include "masterserverupdater.h"

#include "client.h"

SteamPipeId CSteamClient::CreateSteamPipe()
{
	STUB();
	return 0;
}

bool CSteamClient::BReleaseSteamPipe(SteamPipeId steamPipe)
{
	STUB();
	return true;
}

SteamUserId CSteamClient::ConnectToGlobalUser(SteamPipeId steamPipe)
{
	STUB();
	return 0;
}

SteamUserId CSteamClient::CreateLocalUser(SteamPipeId *steamPipe,
					AccountType accountType)
{
	STUB();
	return 0;
}

void CSteamClient::ReleaseUser(SteamPipeId steamPipe, SteamUserId user)
{
	STUB();
}

ISteamUser *CSteamClient::GetISteamUser(SteamUserId steamUser,
					SteamPipeId steamPipe,
					const char *version)
{
	STUB();
	return static_cast<ISteamUser*>(&CSteamUser::getInstance());
}

ISteamGameServer *CSteamClient::GetISteamGameServer(SteamUserId steamUser,
						    SteamPipeId steamPipe,
						    const char *version)
{
	STUB();
	return static_cast<ISteamGameServer*>(&CSteamGameServer::getInstance());
}

void CSteamClient::SetLocalIPBinding(uint32 ip, uint16 port)
{
	STUB();
}

ISteamFriends *CSteamClient::GetISteamFriends(SteamUserId steamUser,
					      SteamPipeId steamPipe,
					      const char *version)
{
	STUB();
	return static_cast<ISteamFriends*>(&CSteamFriends::getInstance());
}

ISteamUtils *CSteamClient::GetISteamUtils(SteamPipeId steamPipe, const char *version)
{
	STUB();
	return static_cast<ISteamUtils*>(&CSteamUtils::getInstance());
}

ISteamMatchmaking *CSteamClient::GetISteamMatchmaking(SteamUserId steamUser,
						      SteamPipeId steamPipe,
						      const char *version)
{
	STUB();
	return static_cast<ISteamMatchmaking*>(&CSteamMatchmaking::getInstance());
}

ISteamMasterServerUpdater *CSteamClient::GetISteamMasterServerUpdater(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamMasterServerUpdater*>(&CSteamMasterServerUpdater::getInstance());
}

ISteamMatchmakingServers *CSteamClient::GetISteamMatchmakingServers(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamMatchmakingServers*>(&CSteamMatchmakingServers::getInstance());
}

void *CSteamClient::GetISteamGenericInterface(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return NULL;
}

ISteamUserStats *CSteamClient::GetISteamUserStats(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamUserStats*>(&CSteamUserStats::getInstance());
}

ISteamGameServerStats *CSteamClient::GetISteamGameServerStats(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamGameServerStats*>(&CSteamGameServerStats::getInstance());
}

ISteamApps *CSteamClient::GetISteamApps(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamApps*>(&CSteamApps::getInstance());
}

ISteamNetworking *CSteamClient::GetISteamNetworking(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version)
{
	STUB();
	return static_cast<ISteamNetworking*>(&CSteamNetworking::getInstance());
}

ISteamRemoteStorage *CSteamClient::GetISteamRemoteStorage(
		SteamUserId steamUser,
		SteamPipeId steamPipe,
		const char *version )
{
	STUB();
	return static_cast<ISteamRemoteStorage*>(&CSteamRemoteStorage::getInstance());
}

void CSteamClient::RunFrame()
{
	STUB();
}

uint32 CSteamClient::GetIPCCallCount()
{
	STUB();
	return 0;
}

void CSteamClient::SetWarningMessageHook(SteamAPIWarningMessageHook function)
{
	STUB();
}

