
#pragma pack(push, 8)

enum {
	SteamUserCallbacks = 100,
	SteamGameServerCallbacks = 200,
	SteamFriendsCallbacks = 300,
	SteamBillingCallbacks = 400,
	SteamMatchmakingCallbacks = 500,
	SteamContentServerCallbacks = 600,
	SteamUtilsCallbacks = 700,
	ClientFriendsCallbacks = 800,
	ClientUserCallbacks = 900,
	SteamAppsCallbacks = 1000,
	SteamUserStatsCallbacks = 1100,
	SteamNetworkingCallbacks = 1200,
	ClientRemoteStorageCallbacks = 1300,
	SteamUserItemsCallbacks = 1400,
	SteamGameServerItemsCallbacks = 1500,
	ClientUtilsCallbacks = 1600,
	SteamGameCoordinatorCallbacks = 1700,
	SteamGameServerStatsCallbacks = 1800,
	Steam2AsyncCallbacks = 1900,
	SteamGameStatsCallbacks = 2000,
	ClientHTTPCallbacks = 2100
};

struct SteamServersConnected {
	enum {
		mCallback = SteamUserCallbacks + 1
	};
};

struct SteamServerConnectFailure {
	enum {
		mCallback = SteamUserCallbacks + 2
	};

	Result mResult;
};

struct SteamServersDisconnected {
	enum {
		mCallback = SteamUserCallbacks + 3
	};

	Result mResult;
};

struct ClientGameServerDeny {
	enum {
		mCallback = SteamUserCallbacks + 13
	};

	uint32 mAppID;
	uint32 mGameServerIP;
	uint16 mGameServerPort;
	uint16 mSecure;
	uint32 mReason;
};

struct IPCFailure {
	enum {
		mCallback = SteamUserCallbacks + 17
	};

	enum FailureType {
		FailureFlushedCallbackQueue,
		FailurePipeFail,
	};
	uint8 mFailureType;
};

struct ValidateAuthTicketResponse {
	enum {
		mCallback = SteamUserCallbacks + 43
	};

	CSteamID mSteamID;
	AuthSessionResponse mAuthSessionResponse;
};

struct MicroTxnAuthorizationResponse {
	enum {
		mCallback = SteamUserCallbacks + 52
	};

	uint32 mAppID;
	uint64 mOrderID;
	uint8 mAuthorized;
};

struct GSClientApprove {
	enum {
		mCallback = SteamGameServerCallbacks + 1
	};

	CSteamID mSteamID;
};

struct GSClientDeny {
	enum {
		mCallback = SteamGameServerCallbacks + 2
	};

	CSteamID mSteamID;
	DenyReason mDenyReason;
	char mOptionalText[128];
};

struct GSClientKick {
	enum {
		mCallback = SteamGameServerCallbacks + 3
	};

	CSteamID mSteamID;
	DenyReason mDenyReason;
};

struct GSClientAchievementStatus {
	enum {
		mCallback = SteamGameServerCallbacks + 6
	};

	uint64 mSteamID;
	char mAchievement[128];
	bool mUnlocked;
};

struct GSPolicyResponse {
	enum {
		mCallback = SteamUserCallbacks + 15
	};

	uint8 mSecure;
};

struct GSGameplayStats {
	enum {
		mCallback = SteamGameServerCallbacks + 7
	};

	Result mResult;
	int32	mRank;
	uint32	mTotalConnects;
	uint32	mTotalMinutesPlayed;
};

struct GSClientGroupStatus {
	enum {
		mCallback = SteamGameServerCallbacks + 8
	};

	CSteamID mSteamIDUser;
	CSteamID mSteamIDGroup;
	bool mMember;
	bool mOfficer;
};

struct GSReputation {
	enum {
		mCallback = SteamGameServerCallbacks + 9
	};

	Result mResult;
	uint32 mReputationScore;
	bool mBanned;
	uint32 mBannedIP;
	uint16 mBannedPort;
	uint64 mBannedGameID;
	uint32 mBanExpires;
};

struct PersonaStateChange {
	enum {
		mCallback = SteamFriendsCallbacks + 4
	};

	uint64 mSteamID;
	int mChangeFlags;
};

struct GameOverlayActivated {
	enum {
		mCallback = SteamFriendsCallbacks + 31
	};

	uint8 mActive;
};

struct GameServerChangeRequested {
	enum {
		mCallback = SteamFriendsCallbacks + 32
	};

	char mServer[64];
	char mPassword[64];
};

struct GameLobbyJoinRequested {
	enum {
		mCallback = SteamFriendsCallbacks + 33
	};

	CSteamID mSteamIDLobby;
	CSteamID mSteamIDFriend;
};

struct FavoritesListChanged {
	enum {
		mCallback = SteamMatchmakingCallbacks + 2
	};

	uint32 mIP;
	uint32 mQueryPort;
	uint32 mConnPort;
	uint32 mAppID;
	uint32 mFlags;
	bool mAdd;
};

struct LobbyInvite {
	enum {
		mCallback = SteamMatchmakingCallbacks + 3
	};

	uint64 mSteamIDUser;
	uint64 mSteamIDLobby;
};

struct LobbyEnter {
	enum {
		mCallback = SteamMatchmakingCallbacks + 4
	};

	uint64 mSteamIDLobby;
	uint32 mChatPermissions;
	bool mLocked;
	uint32 mEChatRoomEnterResponse;
};


struct LobbyDataUpdate {
	enum {
		mCallback = SteamMatchmakingCallbacks + 5
	};

	uint64 mSteamIDLobby;
	uint64 mSteamIDMember;
};

struct LobbyChatUpdate {
	enum {
		mCallback = SteamMatchmakingCallbacks + 6
	};

	uint64 mSteamIDLobby;
	uint64 mSteamIDUserChanged;
	uint64 mSteamIDMakingChange;
	uint32 mChatMemberStateChange;
};

struct LobbyChatMsg {
	enum {
		mCallback = SteamMatchmakingCallbacks + 7
	};

	uint64 mSteamIDLobby;
	uint64 mSteamIDUser;
	uint8 mChatEntryType;
	uint32 mChatID;
};

struct LobbyGameCreated {
	enum {
		mCallback = SteamMatchmakingCallbacks + 9
	};

	uint64 mSteamIDLobby;
	uint64 mSteamIDGameServer;
	uint32 mIP;
	uint16 mPort;
};


struct LobbyMatchList {
	enum {
		mCallback = SteamMatchmakingCallbacks + 10
	};

	uint32 mLobbiesMatching;
};

struct LobbyKicked {
	enum {
		mCallback = SteamMatchmakingCallbacks + 12
	};

	uint64 mSteamIDLobby;
	uint64 mSteamIDAdmin;
	uint8 mKickedDueToDisconnect;
};


struct LobbyCreated {
	enum {
		mCallback = SteamMatchmakingCallbacks + 13
	};

	Result mResult;
	uint64 mSteamIDLobby;
};

struct IPCountry {
	enum {
		mCallback = SteamUtilsCallbacks + 1
	};
};

struct LowBatteryPower {
	enum {
		mCallback = SteamUtilsCallbacks + 2
	};

	uint8 mMinutesBatteryLeft;
};

struct SteamAPICallCompleted {
	enum {
		mCallback = SteamUtilsCallbacks + 3
	};

	SteamAPICall mAsyncCall;
};

struct SteamShutdown {
	enum {
		mCallback = SteamUtilsCallbacks + 4
	};
};

struct DlcInstalled {
	enum {
		mCallback = SteamAppsCallbacks + 5
	};
	AppId mAppID;
};

struct UserStatsReceived {
	enum {
		mCallback = SteamUserStatsCallbacks + 1
	};

	uint64 mGameID;
	Result mResult;
	CSteamID mSteamIDUser;
};

struct UserStatsStored {
	enum {
		mCallback = SteamUserStatsCallbacks + 2
	};

	uint64 mGameID;
	Result mResult;
};

struct UserAchievementStored {
	enum {
		mCallback = SteamUserStatsCallbacks + 3
	};

	uint64 mGameID;
	bool mGroupAchievement;
	char mAchievementName[128];
	uint32 mCurProgress;
	uint32 mMaxProgress;
};

struct LeaderboardFindResult
{
	enum {
		mCallback = SteamUserStatsCallbacks + 4
	};

	SteamLeaderboard mSteamLeaderboard;
	uint8 mLeaderboardFound;
};

struct LeaderboardScoresDownloaded {
	enum {
		mCallback = SteamUserStatsCallbacks + 5
	};

	SteamLeaderboard mSteamLeaderboard;
	SteamLeaderboardEntries mSteamLeaderboardEntries;
	int mEntryCount;
};

struct LeaderboardScoreUploaded {
	enum {
		mCallback = SteamUserStatsCallbacks + 6
	};

	uint8 mSuccess;
	SteamLeaderboard mSteamLeaderboard;
	int32 mScore;
	uint8 mScoreChanged;
	int mGlobalRankNew;
	int mGlobalRankPrevious;
};

struct NumberOfCurrentPlayers
{
	enum {
		mCallback = SteamUserStatsCallbacks + 7
	};

	uint8 mSuccess;
	int32 mPlayers;
};

struct UserStatsUnloaded {
	enum {
		mCallback = SteamUserStatsCallbacks + 8
	};
	CSteamID mSteamIDUser;
};

struct UserAchievementIconFetched {
	enum {
		mCallback = SteamUserStatsCallbacks + 9
	};

	CGameID mGameID;
	char mAchievementName[128];
	bool mAchieved;
	int mIconHandle;
};

struct P2PSessionRequest {
	enum {
		mCallback = SteamNetworkingCallbacks + 2
	};

	CSteamID mSteamIDRemote;
};

struct P2PSessionConnectFail {
	enum {
		mCallback = SteamNetworkingCallbacks + 3
	};

	CSteamID mSteamIDRemote;
	uint8 mP2PSessionError;
};

struct SocketStatusCallback {
	enum {
		mCallback = SteamNetworkingCallbacks + 1
	};

	NetSocket mSocket;
	NetListenSocket mListenSocket;
	CSteamID mSteamIDRemote;
	int mSNetSocketState;
};

struct GCMessageAvailable {
	enum {
		mCallback = SteamGameCoordinatorCallbacks + 1
	};

	uint32 mMessageSize;
};

struct GCMessageFailed {
	enum {
		mCallback = SteamGameCoordinatorCallbacks + 2
	};
};

struct GSStatsReceived {
	enum {
		mCallback = SteamGameServerStatsCallbacks
	};

	Result mResult;
	CSteamID mSteamIDUser;
};

struct GSStatsStored {
	enum {
		mCallback = SteamGameServerStatsCallbacks + 1
	};

	Result mResult;
	CSteamID mSteamIDUser;
};

struct GSStatsUnloaded {
	enum {
		mCallback = SteamUserStatsCallbacks + 8
	};

	CSteamID mSteamIDUser;
};

struct GameStatsSessionIssued {
	enum {
		mCallback = SteamGameStatsCallbacks + 1
	};

	uint64 mSessionID;
	Result mResult;
	bool mCollectingAny;
	bool mCollectingDetails;
};

struct GameStatsSessionClosed {
	enum {
		mCallback = SteamGameStatsCallbacks + 2
	};

	uint64 mSessionID;
	Result mResult;
};


#pragma pack(pop)

class CallbackBase {
public:
	CallbackBase() {
		mCallbackFlags = 0;
		mCallback = 0;
	}

	virtual void Run(void *param) = 0;
	virtual void Run(void *param, bool IOFailure, SteamAPICall steamAPICall) = 0;
	virtual int GetCallbackSizeBytes() = 0;
	int GetICallback() {
		return mCallback;
	}

protected:
	enum {
		CallbackFlagsRegistered = 1,
		CallbackFlagsGameServer = 2
	};
	uint8 mCallbackFlags;
	int mCallback;
	friend class CallbackMgr;
};

