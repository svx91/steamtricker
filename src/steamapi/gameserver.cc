
#include "gameserver.h"


void CSteamGameServer::LogOn()
{
	STUB();
}

void CSteamGameServer::LogOff()
{
	STUB();
}

bool CSteamGameServer::BLoggedOn()
{
	STUB();
	return true;
}

bool CSteamGameServer::BSecure()
{
	STUB();
	return true;
}

CSteamID CSteamGameServer::GetSteamID()
{
	STUB();
	return CSteamID(static_cast<uint64>(0));
}

bool CSteamGameServer::SendUserConnectAndAuthenticate(uint32 IPClient,
						      const void *authBlob,
						      uint32 authBlobSize,
						      CSteamID *steamIDUser)
{
	STUB();
	return true;
}

CSteamID CSteamGameServer::CreateUnauthenticatedUserConnection()
{
	STUB();
	return CSteamID(static_cast<uint64>(0));
}

void CSteamGameServer::SendUserDisconnect(CSteamID steamIDUser)
{
	STUB();
}

bool CSteamGameServer::BUpdateUserData(CSteamID steamIDUser,
				       const char *playerName,
				       uint32 score)
{
	STUB();
	return true;
}

bool CSteamGameServer::BSetServerType(uint32 serverFlags,
				      uint32 gameIP,
				      uint16 gamePort,
				      uint16 spectatorPort,
				      uint16 queryPort,
				      const char *gameDir,
				      const char *version,
				      bool LANMode)
{
	STUB();
	return true;
}

void CSteamGameServer::UpdateServerStatus(int players,
					  int playersMax,
					  int botPlayers,
					  const char *serverName,
					  const char *spectatorServerName,
					  const char *mapName)
{
	STUB();
}

void CSteamGameServer::UpdateSpectatorPort(uint16 spectatorPort)
{
	STUB();
}

void CSteamGameServer::SetGameTags(const char *gameTags)
{
	STUB();
}

void CSteamGameServer::GetGameplayStats()
{
	STUB();
}

SteamAPICall CSteamGameServer::GetServerReputation()
{
	STUB();
	return SteamAPICallInvalid;
}

bool CSteamGameServer::RequestUserGroupStatus(CSteamID steamIDUser,
					      CSteamID steamIDGroup)
{
	STUB();
	return true;
}

uint32 CSteamGameServer::GetPublicIP()
{
	STUB();
	return 0;
}

void CSteamGameServer::SetGameData(const char *gameData)
{
	STUB();
}

UserHasLicenseForAppResult CSteamGameServer::UserHasLicenseForApp(CSteamID steamID,
								  AppId appID)
{
	return UserHasLicenseResultHasLicense;
}

SteamAPICall CSteamGameServerStats::RequestUserStats(CSteamID steamIDUser)
{
	STUB();
	return SteamAPICallInvalid;
}

bool CSteamGameServerStats::GetUserStat(CSteamID steamIDUser,
					const char *name,
					int32 *data)
{
	STUB();
	return true;
}

bool CSteamGameServerStats::GetUserStat(CSteamID steamIDUser,
					const char *name,
					float *data)
{
	STUB();
	return true;
}

bool CSteamGameServerStats::GetUserAchievement(CSteamID steamIDUser,
					       const char *name,
					       bool *achieved)
{
	STUB();
	return true;
}

bool CSteamGameServerStats::SetUserStat(CSteamID steamIDUser,
					const char *name,
					int32 data)
{
	STUB();
	return true;
}

bool CSteamGameServerStats::SetUserStat(CSteamID steamIDUser,
					const char *name,
					float data)
{
	STUB();
	return true;
}

bool CSteamGameServerStats::UpdateUserAvgRateStat(CSteamID steamIDUser,
						  const char *name,
						  float countThisSession,
						  double sessionLength)
{
	STUB();
	return true;
}

bool CSteamGameServerStats::SetUserAchievement(CSteamID steamIDUser,
					       const char *name) {
	STUB();
	return true;
}

bool CSteamGameServerStats::ClearUserAchievement(CSteamID steamIDUser,
						 const char *name)
{
	STUB();
	return true;
}

SteamAPICall CSteamGameServerStats::StoreUserStats(CSteamID steamIDUser)
{
	STUB();
	return SteamAPICallInvalid;
}
