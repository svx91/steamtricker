#ifndef STEAMTRICKER_STEAMAPI_FRIENDS_H_
#define STEAMTRICKER_STEAMAPI_FRIENDS_H_

#include "types.h"

class ISteamFriends {
public:
	virtual const char *GetPersonaName() = 0;

	virtual void SetPersonaName(const char *personaName) = 0;

	virtual PersonaState GetPersonaState() = 0;

	virtual int GetFriendCount(int friendFlags) = 0;

	virtual CSteamID GetFriendByIndex(int iFriend, int friendFlags) = 0;

	virtual FriendRelationship GetFriendRelationship(CSteamID steamIDFriend) = 0;

	virtual PersonaState GetFriendPersonaState(CSteamID steamIDFriend) = 0;

	virtual const char *GetFriendPersonaName(CSteamID steamIDFriend) = 0;

	virtual int GetFriendAvatar(CSteamID steamIDFriend, int avatarSize) = 0;

	virtual bool GetFriendGamePlayed(CSteamID steamIDFriend,
				 FriendGameInfo *friendGameInfo) = 0;

	virtual const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend,
						int personaName) = 0;

	virtual bool HasFriend(CSteamID steamIDFriend, int friendFlags) = 0;

	virtual int GetClanCount() = 0;

	virtual CSteamID GetClanByIndex(int clan) = 0;

	virtual const char *GetClanName(CSteamID steamIDClan) = 0;

	virtual int GetFriendCountFromSource(CSteamID steamIDSource) = 0;

	virtual CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) = 0;

	virtual bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) = 0;

	virtual void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool speaking) = 0;

	virtual void ActivateGameOverlay(const char *dialog) = 0;

	virtual void ActivateGameOverlayToUser(const char *dialog, CSteamID steamID) = 0;

	virtual void ActivateGameOverlayToWebPage(const char *url) = 0;

	virtual void ActivateGameOverlayToStore(AppId appID) = 0;

	virtual void SetPlayedWith(CSteamID steamIDUserPlayedWith) = 0;
};

class CSteamFriends : public ISteamFriends {
public:
	static CSteamFriends& getInstance() {
		static CSteamFriends instance;
		return instance;
	}

	const char *GetPersonaName();

	void SetPersonaName(const char *personaName);

	PersonaState GetPersonaState();

	int GetFriendCount(int friendFlags);

	CSteamID GetFriendByIndex(int iFriend, int friendFlags);

	FriendRelationship GetFriendRelationship(CSteamID steamIDFriend);

	PersonaState GetFriendPersonaState(CSteamID steamIDFriend);

	const char *GetFriendPersonaName(CSteamID steamIDFriend);

	int GetFriendAvatar(CSteamID steamIDFriend, int avatarSize);

	bool GetFriendGamePlayed(CSteamID steamIDFriend,
				 FriendGameInfo *friendGameInfo);

	const char *GetFriendPersonaNameHistory(CSteamID steamIDFriend,
						int personaName);

	bool HasFriend(CSteamID steamIDFriend, int friendFlags);

	int GetClanCount();

	CSteamID GetClanByIndex(int clan);

	const char *GetClanName(CSteamID steamIDClan);

	int GetFriendCountFromSource(CSteamID steamIDSource);

	CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend);

	bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource);

	void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool speaking);

	void ActivateGameOverlay(const char *dialog);

	void ActivateGameOverlayToUser(const char *dialog, CSteamID steamID);

	void ActivateGameOverlayToWebPage(const char *url);

	void ActivateGameOverlayToStore(AppId appID);

	void SetPlayedWith(CSteamID steamIDUserPlayedWith);
};

#endif /* STEAMTRICKER_STEAMAPI_FRIENDS_H_ */