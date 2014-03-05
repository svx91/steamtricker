#ifndef STEAMTRICKER_STEAMAPI_GAMESERVER_H_
#define STEAMTRICKER_STEAMAPI_GAMESERVER_H_

#include "types.h"

class ISteamGameServer {
public:
	virtual void LogOn() = 0;

	virtual void LogOff() = 0;

	virtual bool BLoggedOn() = 0;

	virtual bool BSecure() = 0;

	virtual CSteamID GetSteamID() = 0;

	virtual bool SendUserConnectAndAuthenticate(uint32 IPClient,
					    const void *authBlob,
					    uint32 authBlobSize,
					    CSteamID *steamIDUser) = 0;

	virtual CSteamID CreateUnauthenticatedUserConnection() = 0;

	virtual void SendUserDisconnect(CSteamID steamIDUser) = 0;

	virtual bool BUpdateUserData(CSteamID steamIDUser,
			     const char *playerName,
			     uint32 score) = 0;

	virtual bool BSetServerType(uint32 serverFlags,
			    uint32 gameIP,
			    uint16 gamePort,
			    uint16 spectatorPort,
			    uint16 queryPort,
			    const char *gameDir,
			    const char *version,
			    bool LANMode) = 0;

	virtual void UpdateServerStatus(int players,
				int playersMax,
				int botPlayers,
				const char *serverName,
				const char *spectatorServerName,
				const char *mapName) = 0;

	virtual void UpdateSpectatorPort(uint16 spectatorPort) = 0;

	virtual void SetGameTags(const char *gameTags) = 0;

	virtual void GetGameplayStats() = 0;

	virtual SteamAPICall GetServerReputation() = 0;

	virtual bool RequestUserGroupStatus(CSteamID steamIDUser,
				    CSteamID steamIDGroup) = 0;

	virtual uint32 GetPublicIP() = 0;

	virtual void SetGameData(const char *gameData) = 0; 

	virtual UserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID,
							AppId appID) = 0;
};

class ISteamGameServerStats {
public:
	virtual SteamAPICall RequestUserStats(CSteamID steamIDUser) = 0;

	virtual bool GetUserStat(CSteamID steamIDUser, const char *name, int32 *data) = 0;

	virtual bool GetUserStat(CSteamID steamIDUser, const char *name, float *data) = 0;

	virtual bool GetUserAchievement(CSteamID steamIDUser,
				const char *name,
				bool *achieved) = 0;

	virtual bool SetUserStat(CSteamID steamIDUser, const char *name, int32 data) = 0;

	virtual bool SetUserStat(CSteamID steamIDUser, const char *name, float data) = 0;

	virtual bool UpdateUserAvgRateStat(CSteamID steamIDUser, 
				   const char *name, 
				   float countThisSession, 
				   double sessionLength) = 0;

	virtual bool SetUserAchievement(CSteamID steamIDUser, const char *name) = 0;

	virtual bool ClearUserAchievement(CSteamID steamIDUser, const char *name) = 0;

	virtual SteamAPICall StoreUserStats(CSteamID steamIDUser) = 0;
};

class CSteamGameServer : public ISteamGameServer {
public:
	static CSteamGameServer& getInstance() {
		static CSteamGameServer instance;
		return instance;
	}

	void LogOn();

	void LogOff();

	bool BLoggedOn();

	bool BSecure();

	CSteamID GetSteamID();

	bool SendUserConnectAndAuthenticate(uint32 IPClient,
					    const void *authBlob,
					    uint32 authBlobSize,
					    CSteamID *steamIDUser);

	CSteamID CreateUnauthenticatedUserConnection();

	void SendUserDisconnect(CSteamID steamIDUser);

	bool BUpdateUserData(CSteamID steamIDUser,
			     const char *playerName,
			     uint32 score);

	bool BSetServerType(uint32 serverFlags,
			    uint32 gameIP,
			    uint16 gamePort,
			    uint16 spectatorPort,
			    uint16 queryPort,
			    const char *gameDir,
			    const char *version,
			    bool LANMode);

	void UpdateServerStatus(int players,
				int playersMax,
				int botPlayers,
				const char *serverName,
				const char *spectatorServerName,
				const char *mapName);

	void UpdateSpectatorPort(uint16 spectatorPort);

	void SetGameTags(const char *gameTags);

	void GetGameplayStats();

	SteamAPICall GetServerReputation();

	bool RequestUserGroupStatus(CSteamID steamIDUser,
				    CSteamID steamIDGroup);

	uint32 GetPublicIP();

	void SetGameData(const char *gameData); 

	UserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID,
							AppId appID);
};

class CSteamGameServerStats : public ISteamGameServerStats {
public:
	static CSteamGameServerStats& getInstance() {
		static CSteamGameServerStats instance;
		return instance;
	}

	SteamAPICall RequestUserStats(CSteamID steamIDUser);

	bool GetUserStat(CSteamID steamIDUser, const char *name, int32 *data);

	bool GetUserStat(CSteamID steamIDUser, const char *name, float *data);

	bool GetUserAchievement(CSteamID steamIDUser,
				const char *name,
				bool *achieved);

	bool SetUserStat(CSteamID steamIDUser, const char *name, int32 data);

	bool SetUserStat(CSteamID steamIDUser, const char *name, float data);

	bool UpdateUserAvgRateStat(CSteamID steamIDUser, 
				   const char *name, 
				   float countThisSession, 
				   double sessionLength);

	bool SetUserAchievement(CSteamID steamIDUser, const char *name);

	bool ClearUserAchievement(CSteamID steamIDUser, const char *name);

	SteamAPICall StoreUserStats(CSteamID steamIDUser);
};

#endif /* STEAMTRICKER_STEAMAPI_GAMESERVER_H_ */