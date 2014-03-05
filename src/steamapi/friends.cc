
#include "friends.h"


const char *CSteamFriends::GetPersonaName()
{
	return NULL;
}

void CSteamFriends::SetPersonaName(const char *personaName)
{
	STUB();
}

PersonaState CSteamFriends::GetPersonaState()
{
	STUB();
	return PersonaStateOnline;
}

int CSteamFriends::GetFriendCount(int friendFlags)
{
	STUB();
	return 0;
}

CSteamID CSteamFriends::GetFriendByIndex(int iFriend, int friendFlags)
{
	STUB();
	return CSteamID(static_cast<uint64>(0));
}

FriendRelationship CSteamFriends::GetFriendRelationship(CSteamID steamIDFriend)
{
	STUB();
	return FriendRelationshipNone;
}

PersonaState CSteamFriends::GetFriendPersonaState(CSteamID steamIDFriend)
{
	STUB();
	return PersonaStateOnline;
}

const char *CSteamFriends::GetFriendPersonaName(CSteamID steamIDFriend)
{
	STUB();
	return NULL;
}

int CSteamFriends::GetFriendAvatar(CSteamID steamIDFriend, int avatarSize)
{
	STUB();
	return 0;
}

bool CSteamFriends::GetFriendGamePlayed(CSteamID steamIDFriend,
					FriendGameInfo *friendGameInfo)
{
	STUB();
	return true;
}

const char *CSteamFriends::GetFriendPersonaNameHistory(CSteamID steamIDFriend,
						       int personaName)
{
	STUB();
	return NULL;
}

bool CSteamFriends::HasFriend(CSteamID steamIDFriend, int friendFlags)
{
	STUB();
	return true;
}

int CSteamFriends::GetClanCount()
{
	STUB();
	return 0;
}

CSteamID CSteamFriends::GetClanByIndex(int clan)
{
	STUB();
	return CSteamID(static_cast<uint64>(0));
}

const char *CSteamFriends::GetClanName(CSteamID steamIDClan)
{
	STUB();
	return NULL;
}

int CSteamFriends::GetFriendCountFromSource(CSteamID steamIDSource)
{
	STUB();
	return 0;
}

CSteamID CSteamFriends::GetFriendFromSourceByIndex(CSteamID steamIDSource,
						   int iFriend)
{
	STUB();
	return CSteamID(static_cast<uint64>(0));
}

bool CSteamFriends::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)
{
	STUB();
	return true;
}

void CSteamFriends::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool speaking)
{
	STUB();
}

void CSteamFriends::ActivateGameOverlay(const char *dialog)
{
	STUB();
}

void CSteamFriends::ActivateGameOverlayToUser(const char *dialog,
					      CSteamID steamID)
{
	STUB();
}

void CSteamFriends::ActivateGameOverlayToWebPage(const char *url)
{
	STUB();
}

void CSteamFriends::ActivateGameOverlayToStore(AppId appID)
{
	STUB();
}

void CSteamFriends::SetPlayedWith(CSteamID steamIDUserPlayedWith) {
	STUB();
}
