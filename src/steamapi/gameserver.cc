#include "api.h"
#include "gameserver.h"


void CSteamGameServer::LogOn()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, LogOn);
}

void CSteamGameServer::LogOff()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, LogOff);
}

bool CSteamGameServer::BLoggedOn()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, BLoggedOn);
	return true;
}

bool CSteamGameServer::BSecure()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, BSecure);
	return true;
}

CSteamID CSteamGameServer::GetSteamID()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, GetSteamID);
	return CSteamID(static_cast<uint64>(0));
}

bool CSteamGameServer::SendUserConnectAndAuthenticate(uint32 IPClient,
						      const void *authBlob,
						      uint32 authBlobSize,
						      CSteamID *steamIDUser)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SendUserConnectAndAuthenticate,
					     IPClient, authBlob, authBlobSize, steamIDUser);
	return true;
}

CSteamID CSteamGameServer::CreateUnauthenticatedUserConnection()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, CreateUnauthenticatedUserConnection);
	return CSteamID(static_cast<uint64>(0));
}

void CSteamGameServer::SendUserDisconnect(CSteamID steamIDUser)
{
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SendUserDisconnect, steamIDUser);
	STUB();
}

bool CSteamGameServer::BUpdateUserData(CSteamID steamIDUser,
				       const char *playerName,
				       uint32 score)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, BUpdateUserData,
					     steamIDUser, playerName, score);
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
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, BSetServerType,
					     serverFlags, gameIP, gamePort,
					     spectatorPort, queryPort, gameDir,
					     version, LANMode);
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
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, UpdateServerStatus,
					     players, playersMax, botPlayers,
					     serverName, spectatorServerName,
					     mapName);
}

void CSteamGameServer::UpdateSpectatorPort(uint16 spectatorPort)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, UpdateSpectatorPort,
					     spectatorPort);
}

void CSteamGameServer::SetGameTags(const char *gameTags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetGameTags,
					     gameTags);
}

void CSteamGameServer::GetGameplayStats()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, GetGameplayStats);
}

SteamAPICall CSteamGameServer::GetServerReputation()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, GetServerReputation);
	return SteamAPICallInvalid;
}

bool CSteamGameServer::RequestUserGroupStatus(CSteamID steamIDUser,
					      CSteamID steamIDGroup)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, RequestUserGroupStatus,
					     steamIDUser, steamIDGroup);
	return true;
}

uint32 CSteamGameServer::GetPublicIP()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, GetPublicIP);
	return 0;
}

void CSteamGameServer::SetGameData(const char *gameData)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, SetGameData,
					     gameData);
}

UserHasLicenseForAppResult CSteamGameServer::UserHasLicenseForApp(CSteamID steamID,
								  AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServer, UserHasLicenseForApp,
					     steamID, appID);
	return UserHasLicenseResultHasLicense;
}

SteamAPICall CSteamGameServerStats::RequestUserStats(CSteamID steamIDUser)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, RequestUserStats,
					     steamIDUser);
	return SteamAPICallInvalid;
}

bool CSteamGameServerStats::GetUserStat(CSteamID steamIDUser,
					const char *name,
					int32 *data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, GetUserStat,
					     steamIDUser, name, data);
	*data = 0;
	return true;
}

bool CSteamGameServerStats::GetUserStat(CSteamID steamIDUser,
					const char *name,
					float *data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, GetUserStat,
					     steamIDUser, name, data);
	*data = 0;
	return true;
}

bool CSteamGameServerStats::GetUserAchievement(CSteamID steamIDUser,
					       const char *name,
					       bool *achieved)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, GetUserAchievement,
					     steamIDUser, name, achieved); 
	*achieved = true;
	return true;
}

bool CSteamGameServerStats::SetUserStat(CSteamID steamIDUser,
					const char *name,
					int32 data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, SetUserStat,
					     steamIDUser, name, data);
	return true;
}

bool CSteamGameServerStats::SetUserStat(CSteamID steamIDUser,
					const char *name,
					float data)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, SetUserStat,
					     steamIDUser, name, data); 
	return true;
}

bool CSteamGameServerStats::UpdateUserAvgRateStat(CSteamID steamIDUser,
						  const char *name,
						  float countThisSession,
						  double sessionLength)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, UpdateUserAvgRateStat,
					     steamIDUser, name, countThisSession,
					     sessionLength);
	return true;
}

bool CSteamGameServerStats::SetUserAchievement(CSteamID steamIDUser,
					       const char *name) {
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, SetUserAchievement,
					     steamIDUser, name);
	return true;
}

bool CSteamGameServerStats::ClearUserAchievement(CSteamID steamIDUser,
						 const char *name)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, ClearUserAchievement,
					     steamIDUser, name);
	return true;
}

SteamAPICall CSteamGameServerStats::StoreUserStats(CSteamID steamIDUser)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamGameServerStats, StoreUserStats,
					     steamIDUser);
	return SteamAPICallInvalid;
}
