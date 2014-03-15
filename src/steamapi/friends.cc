#include <string>

#include "api.h"
#include "friends.h"


const char *CSteamFriends::GetPersonaName()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetPersonaName);
	return "UserName";
}

void CSteamFriends::SetPersonaName(const char *personaName)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, SetPersonaName,
					     personaName);
}

PersonaState CSteamFriends::GetPersonaState()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetPersonaState);
	return PersonaStateOnline;
}

int CSteamFriends::GetFriendCount(int friendFlags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendCount,
					     friendFlags);
	return 0;
}

CSteamID CSteamFriends::GetFriendByIndex(int iFriend, int friendFlags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendByIndex,
					     iFriend, friendFlags);
	return CSteamID(static_cast<uint64>(0));
}

FriendRelationship CSteamFriends::GetFriendRelationship(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendRelationship,
					     steamIDFriend);
	return FriendRelationshipNone;
}

PersonaState CSteamFriends::GetFriendPersonaState(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendPersonaState,
					     steamIDFriend);
	return PersonaStateOnline;
}

const char *CSteamFriends::GetFriendPersonaName(CSteamID steamIDFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendPersonaName,
					     steamIDFriend);
	std::string friendName("FriendName ");
	friendName += steamIDFriend.GetAccountID();
	return friendName.c_str();
}

int CSteamFriends::GetFriendAvatar(CSteamID steamIDFriend, int avatarSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendAvatar,
					     steamIDFriend, avatarSize);
	return 0;
}

bool CSteamFriends::GetFriendGamePlayed(CSteamID steamIDFriend,
					FriendGameInfo *friendGameInfo)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendGamePlayed,
					     steamIDFriend, friendGameInfo);
	return true;
}

const char *CSteamFriends::GetFriendPersonaNameHistory(CSteamID steamIDFriend,
						       int personaName)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendPersonaNameHistory,
					     steamIDFriend, personaName);
	return "HistoryOfFriendPersonaName";
}

bool CSteamFriends::HasFriend(CSteamID steamIDFriend, int friendFlags)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, HasFriend,
					     steamIDFriend, friendFlags);
	return false;
}

int CSteamFriends::GetClanCount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanCount);
	return 0;
}

CSteamID CSteamFriends::GetClanByIndex(int clan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanByIndex,
					     clan);
	return CSteamID(static_cast<uint64>(0));
}

const char *CSteamFriends::GetClanName(CSteamID steamIDClan)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetClanName,
					     steamIDClan);
	return "ClanName";
}

int CSteamFriends::GetFriendCountFromSource(CSteamID steamIDSource)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendCountFromSource,
					     steamIDSource);
	return 0;
}

CSteamID CSteamFriends::GetFriendFromSourceByIndex(CSteamID steamIDSource,
						   int iFriend)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, GetFriendFromSourceByIndex,
					     steamIDSource, iFriend);
	return CSteamID(static_cast<uint64>(0));
}

bool CSteamFriends::IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, IsUserInSource,
					     steamIDUser, steamIDSource);
	return true;
}

void CSteamFriends::SetInGameVoiceSpeaking(CSteamID steamIDUser, bool speaking)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, SetInGameVoiceSpeaking,
					     steamIDUser, speaking);
}

void CSteamFriends::ActivateGameOverlay(const char *dialog)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ActivateGameOverlay,
					     dialog);
}

void CSteamFriends::ActivateGameOverlayToUser(const char *dialog,
					      CSteamID steamID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ActivateGameOverlayToUser,
					     dialog, steamID);
}

void CSteamFriends::ActivateGameOverlayToWebPage(const char *url)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ActivateGameOverlayToWebPage,
					     url);
}

void CSteamFriends::ActivateGameOverlayToStore(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, ActivateGameOverlayToStore,
					     appID);
}

void CSteamFriends::SetPlayedWith(CSteamID steamIDUserPlayedWith) {
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamFriends, SetPlayedWith,
					     steamIDUserPlayedWith);
}
