
#include "matchmaking.h"


int CSteamMatchmaking::GetFavoriteGameCount()
{
	STUB();
	return 0;
}

bool CSteamMatchmaking::GetFavoriteGame(int game,
					AppId *appID,
					uint32 *ip,
					uint16 *connPort,
					uint16 *queryPort,
					uint32 *flags,
					uint32 *time32LastPlayedOnServer)
{
	STUB();
	return true;
}

int CSteamMatchmaking::AddFavoriteGame(AppId appID,
				       uint32 ip,
				       uint16 connPort,
				       uint16 queryPort,
				       uint32 flags,
				       uint32 time32LastPlayedOnServer)
{
	STUB();
	return 0;
}

bool CSteamMatchmaking::RemoveFavoriteGame(AppId appID,
					   uint32 ip,
					   uint16 connPort,
					   uint16 queryPort,
					   uint32 flags)
{
	STUB();
	return true;
}

SteamAPICall CSteamMatchmaking::RequestLobbyList()
{
	STUB();
	return SteamAPICallInvalid;
}

void CSteamMatchmaking::AddRequestLobbyListStringFilter(
		const char *keyToMatch,
		const char *valueToMatch,
		LobbyComparison comparisonType)
{
	STUB();
}

void CSteamMatchmaking::AddRequestLobbyListNumericalFilter(
		const char *keyToMatch,
		int valueToMatch,
		LobbyComparison eomparisonType)
{
	STUB();
}

void CSteamMatchmaking::AddRequestLobbyListNearValueFilter(
		const char *keyToMatch,
		int valueToBeCloseTo)
{
	STUB();
}

void CSteamMatchmaking::AddRequestLobbyListFilterSlotsAvailable(
		int slotsAvailable)
{
	STUB();
}

void CSteamMatchmaking::AddRequestLobbyListDistanceFilter(
		LobbyDistanceFilter lobbyDistanceFilter )
{
	STUB();
}

void CSteamMatchmaking::AddRequestLobbyListResultCountFilter(int maxResults)
{
	STUB();
}

CSteamID CSteamMatchmaking::GetLobbyByIndex(int lobby)
{
	STUB();
	return CSteamID(static_cast<uint64>(0));
}

SteamAPICall CSteamMatchmaking::CreateLobby(LobbyType lobbyType, int maxMembers)
{
	STUB();
	return SteamAPICallInvalid;
}

SteamAPICall CSteamMatchmaking::JoinLobby(CSteamID steamIDLobby)
{
	STUB();
	return SteamAPICallInvalid;
}

void CSteamMatchmaking::LeaveLobby(CSteamID steamIDLobby)
{
	STUB();
}

bool CSteamMatchmaking::InviteUserToLobby(CSteamID steamIDLobby,
					  CSteamID steamIDInvitee)
{
	STUB();
	return true;
}

int CSteamMatchmaking::GetNumLobbyMembers(CSteamID steamIDLobby)
{
	STUB();
	return 0;
}

CSteamID CSteamMatchmaking::GetLobbyMemberByIndex(CSteamID steamIDLobby,
						  int member)
{
	STUB();
	return CSteamID(static_cast<uint64>(0));
}

const char *CSteamMatchmaking::GetLobbyData(CSteamID steamIDLobby,
					    const char *key)
{
	STUB();
	return "LobbyData";
}

bool CSteamMatchmaking::SetLobbyData(CSteamID steamIDLobby,
				     const char *key,
				     const char *value)
{
	STUB();
	return true;
}

int CSteamMatchmaking::GetLobbyDataCount(CSteamID steamIDLobby)
{
	STUB();
	return 0;
}

bool CSteamMatchmaking::GetLobbyDataByIndex(CSteamID steamIDLobby,
					    int lobbyData,
					    char *key,
					    int keyBufferSize,
					    char *value,
					    int valueBufferSize)
{
	STUB();
	*value = 0;
	return true;
}

bool CSteamMatchmaking::DeleteLobbyData(CSteamID steamIDLobby,
					const char *key)
{
	STUB();
	return true;
}

const char *CSteamMatchmaking::GetLobbyMemberData(CSteamID steamIDLobby,
						  CSteamID steamIDUser,
						  const char *key)
{
	STUB();
	return "LobbyMemberData";
}

void CSteamMatchmaking::SetLobbyMemberData(CSteamID steamIDLobby,
					   const char *key,
					   const char *value)
{
	STUB();
	
}

bool CSteamMatchmaking::SendLobbyChatMsg(CSteamID steamIDLobby,
					 const void *msgBody,
					 int msgBodySize)
{
	STUB();
	return true;
}

int CSteamMatchmaking::GetLobbyChatEntry(CSteamID steamIDLobby,
					 int chatID,
					 CSteamID *steamIDUser,
					 void *data,
					 int dataSize,
					 ChatEntryType *chatEntryType)
{
	STUB();
	*chatEntryType = ChatEntryTypeInvalid;
	return 0;
}

bool CSteamMatchmaking::RequestLobbyData(CSteamID steamIDLobby)
{
	STUB();
	return true;
}

void CSteamMatchmaking::SetLobbyGameServer(CSteamID steamIDLobby,
					   uint32 gameServerIP,
					   uint16 gameServerPort,
					   CSteamID steamIDGameServer)
{
	STUB();
	
}

bool CSteamMatchmaking::GetLobbyGameServer(CSteamID steamIDLobby,
					   uint32 *gameServerIP,
					   uint16 *gameServerPort,
					   CSteamID *steamIDGameServer)
{
	STUB();
	*gameServerIP = 0;
	*gameServerPort = 0;
	*steamIDGameServer = CSteamID(static_cast<uint64>(0));
	return true;
}

bool CSteamMatchmaking::SetLobbyMemberLimit(CSteamID steamIDLobby,
					    int maxMembers)
{
	STUB();
	return true;
}

int CSteamMatchmaking::GetLobbyMemberLimit(CSteamID steamIDLobby)
{
	STUB();
	return 0;
}

bool CSteamMatchmaking::SetLobbyType(CSteamID steamIDLobby, LobbyType lobbyType)
{
	STUB();
	return true;
}

bool CSteamMatchmaking::SetLobbyJoinable(CSteamID steamIDLobby,
					 bool lobbyJoinable)
{
	STUB();
	return true;
}

CSteamID CSteamMatchmaking::GetLobbyOwner(CSteamID steamIDLobby)
{
	STUB();
	return CSteamID(static_cast<uint64>(0));
}

bool CSteamMatchmaking::SetLobbyOwner(CSteamID steamIDLobby,
				      CSteamID steamIDNewOwner)
{
	STUB();
	return true;
}


ServerListRequest CSteamMatchmakingServers::RequestInternetServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	return NULL;
}

ServerListRequest CSteamMatchmakingServers::RequestLANServerList(
		AppId app,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	return NULL;
}

ServerListRequest CSteamMatchmakingServers::RequestFriendsServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	return NULL;
}

ServerListRequest CSteamMatchmakingServers::RequestFavoritesServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	return NULL;
}

ServerListRequest CSteamMatchmakingServers::RequestHistoryServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	return NULL;
}

ServerListRequest CSteamMatchmakingServers::RequestSpectatorServerList(
		AppId app,
		MatchMakingKeyValuePair **filters,
		uint32 filtersSize,
		ISteamMatchmakingServerListResponse *requestServersResponse)
{
	STUB();
	return NULL;
}

void CSteamMatchmakingServers::ReleaseRequest(ServerListRequest serverListRequest)
{
	STUB();
}

GameServerItem *CSteamMatchmakingServers::GetServerDetails(
		ServerListRequest request,
		int server)
{
	STUB();
	return NULL;
}

void CSteamMatchmakingServers::CancelQuery(ServerListRequest request)
{
	STUB();
}

void CSteamMatchmakingServers::RefreshQuery(ServerListRequest request)
{
	STUB();
}

bool CSteamMatchmakingServers::IsRefreshing(ServerListRequest request)
{
	STUB();
	return true;
}

int CSteamMatchmakingServers::GetServerCount(ServerListRequest request)
{
	STUB();
	return 0;
}

void CSteamMatchmakingServers::RefreshServer(ServerListRequest request,
					     int server)
{
	STUB();
}

ServerQuery CSteamMatchmakingServers::PingServer(
		uint32 ip,
		uint16 port,
		ISteamMatchmakingPingResponse *requestServersResponse )
{
	STUB();
	return 0;
}

ServerQuery CSteamMatchmakingServers::PlayerDetails(
		uint32 ip,
		uint16 port,
		ISteamMatchmakingPlayersResponse *requestServersResponse)
{
	STUB();
	return 0;
}

ServerQuery CSteamMatchmakingServers::ServerRules(
		uint32 ip,
		uint16 port,
		ISteamMatchmakingRulesResponse *requestServersResponse)
{
	STUB();
	return 0;
}

void CSteamMatchmakingServers::CancelServerQuery(ServerQuery serverQuery)
{
	STUB();
}

