#ifndef STEAMTRICKER_STEAMAPI_USERSTATS_H_
#define STEAMTRICKER_STEAMAPI_USERSTATS_H_

#include "types.h"

class ISteamUserStats {
public:
	virtual bool RequestCurrentStats() = 0;

	virtual bool GetStat(const char *name, int32 *data) = 0;

	virtual bool GetStat(const char *name, float *data) = 0;

	virtual bool SetStat(const char *name, int32 data) = 0;

	virtual bool SetStat(const char *name, float data) = 0;

	virtual bool UpdateAvgRateStat(const char *name,
				       float countThisSession,
				       double sessionLength) = 0;

	virtual bool GetAchievement(const char *name, bool *achieved) = 0;

	virtual bool SetAchievement(const char *name) = 0;

	virtual bool ClearAchievement(const char *name) = 0;

	virtual bool GetAchievementAndUnlockTime(const char *name,
						 bool *achieved,
						 uint32 *unlockTime) = 0;

	virtual bool StoreStats() = 0;

	virtual int GetAchievementIcon(const char *name) = 0;

	virtual const char *GetAchievementDisplayAttribute(const char *name,
							   const char *key) = 0;

	virtual bool IndicateAchievementProgress(const char *name,
						 uint32 curProgress,
						 uint32 maxProgress) = 0;

	virtual SteamAPICall RequestUserStats(CSteamID steamIDUser) = 0;

	virtual bool GetUserStat(CSteamID steamIDUser,
				 const char *name,
				 int32 *data) = 0;

	virtual bool GetUserStat(CSteamID steamIDUser,
				 const char *name,
				 float *data) = 0;

	virtual bool GetUserAchievement(CSteamID steamIDUser,
					const char *name,
					bool *achieved) = 0;

	virtual bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser,
						     const char *name,
						     bool *achieved,
						     uint32 *unlockTime) = 0;

	virtual bool ResetAllStats(bool achievementsToo) = 0;

	virtual SteamAPICall FindOrCreateLeaderboard(
		const char *leaderboardName,
		LeaderboardSortMethod leaderboardSortMethod,
		LeaderboardDisplayType leaderboardDisplayType) = 0;

	virtual SteamAPICall FindLeaderboard(const char *leaderboardName) = 0;

	virtual const char *GetLeaderboardName(SteamLeaderboard steamLeaderboard) = 0;

	virtual int GetLeaderboardEntryCount(SteamLeaderboard steamLeaderboard) = 0;

	virtual LeaderboardSortMethod GetLeaderboardSortMethod(
		SteamLeaderboard steamLeaderboard) = 0;

	virtual LeaderboardDisplayType GetLeaderboardDisplayType(
		SteamLeaderboard steamLeaderboard) = 0;

	virtual SteamAPICall DownloadLeaderboardEntries(
		SteamLeaderboard steamLeaderboard,
		LeaderboardDataRequest leaderboardDataRequest,
		int rangeStart,
		int rangeEnd) = 0;

	virtual bool GetDownloadedLeaderboardEntry(
		SteamLeaderboardEntries steamLeaderboardEntries,
		int index,
		LeaderboardEntry *leaderboardEntry,
		int32 *details,
		int detailsMax) = 0;

	virtual SteamAPICall UploadLeaderboardScore(
		SteamLeaderboard steamLeaderboard,
		LeaderboardUploadScoreMethod leaderboardUploadScoreMethod,
		int32 score,
		const int32 *scoreDetails,
		int scoreDetailsCount) = 0;

	virtual SteamAPICall GetNumberOfCurrentPlayers() = 0;
};

class CSteamUserStats : public ISteamUserStats {
public:
	static CSteamUserStats& getInstance() {
		static CSteamUserStats instance;
		return instance;
	}

	bool RequestCurrentStats();

	bool GetStat(const char *name, int32 *data);

	bool GetStat(const char *name, float *data);

	bool SetStat(const char *name, int32 data);

	bool SetStat(const char *name, float data);

	bool UpdateAvgRateStat(const char *name,
			       float countThisSession,
			       double sessionLength);

	bool GetAchievement(const char *name, bool *achieved);

	bool SetAchievement(const char *name);

	bool ClearAchievement(const char *name);

	bool GetAchievementAndUnlockTime(const char *name,
					 bool *achieved,
					 uint32 *unlockTime);

	bool StoreStats();

	int GetAchievementIcon(const char *name);

	const char *GetAchievementDisplayAttribute(const char *name,
						   const char *key);

	bool IndicateAchievementProgress(const char *name,
					 uint32 curProgress,
					 uint32 maxProgress);

	SteamAPICall RequestUserStats(CSteamID steamIDUser);

	bool GetUserStat(CSteamID steamIDUser, const char *name, int32 *data);

	bool GetUserStat(CSteamID steamIDUser, const char *name, float *data);

	bool GetUserAchievement(CSteamID steamIDUser,
				const char *name,
				bool *achieved);

	bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser,
					     const char *name,
					     bool *achieved,
					     uint32 *unlockTime);

	bool ResetAllStats(bool achievementsToo);

	SteamAPICall FindOrCreateLeaderboard(
		const char *leaderboardName,
		LeaderboardSortMethod leaderboardSortMethod,
		LeaderboardDisplayType leaderboardDisplayType);

	SteamAPICall FindLeaderboard(const char *leaderboardName);

	const char *GetLeaderboardName(SteamLeaderboard steamLeaderboard);

	int GetLeaderboardEntryCount(SteamLeaderboard steamLeaderboard);

	LeaderboardSortMethod GetLeaderboardSortMethod(
		SteamLeaderboard steamLeaderboard);

	LeaderboardDisplayType GetLeaderboardDisplayType(
		SteamLeaderboard steamLeaderboard);

	SteamAPICall DownloadLeaderboardEntries(
		SteamLeaderboard steamLeaderboard,
		LeaderboardDataRequest leaderboardDataRequest,
		int rangeStart,
		int rangeEnd);

	bool GetDownloadedLeaderboardEntry(
		SteamLeaderboardEntries steamLeaderboardEntries,
		int index,
		LeaderboardEntry *leaderboardEntry,
		int32 *details,
		int detailsMax);

	SteamAPICall UploadLeaderboardScore(
		SteamLeaderboard steamLeaderboard,
		LeaderboardUploadScoreMethod leaderboardUploadScoreMethod,
		int32 score,
		const int32 *scoreDetails,
		int scoreDetailsCount);

	SteamAPICall GetNumberOfCurrentPlayers();

	static SteamLeaderboard mLastLeaderboard;
};

#endif /* STEAMTRICKER_STEAMAPI_USERSTATS_H_ */