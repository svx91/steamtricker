
#include "userstats.h"

bool CSteamUserStats::RequestCurrentStats()
{
	STUB();
	return true;
}

bool CSteamUserStats::GetStat(const char *name, int32 *data )
{
	STUB();
	*data = 0;
	return true;
};

bool CSteamUserStats::GetStat(const char *name, float *data)
{
	STUB();
	*data = 0;
	return true;
}

bool CSteamUserStats::SetStat(const char *name, int32 data)
{
	STUB();
	return true;
}

bool CSteamUserStats::SetStat(const char *name, float data)
{
	STUB();
	return true;
}

bool CSteamUserStats::UpdateAvgRateStat(const char *name,
					float countThisSession,
					double sessionLength)
{
	STUB();
	return true;
}

bool CSteamUserStats::GetAchievement(const char *name, bool *achieved)
{
	STUB();
	*achieved = true;
	return true;
}

bool CSteamUserStats::SetAchievement(const char *name)
{
	STUB();
	return true;
}

bool CSteamUserStats::ClearAchievement(const char *name)
{
	STUB();
	return true;
}

bool CSteamUserStats::GetAchievementAndUnlockTime(const char *name,
						  bool *achieved,
						  uint32 *unlockTime)
{
	STUB();
	*achieved = true;
	*unlockTime = 0;
	return true;
}

bool CSteamUserStats::StoreStats()
{
	STUB();
	return true;
}

int CSteamUserStats::GetAchievementIcon(const char *name)
{
	STUB();
	return 0;
}

const char *CSteamUserStats::GetAchievementDisplayAttribute(const char *name,
							    const char *key)
{
	STUB();
	return "AchievementDisplayAttribute";
}

bool CSteamUserStats::IndicateAchievementProgress(const char *name,
						  uint32 curProgress,
						  uint32 maxProgress)
{
	STUB();
	return true;
}

SteamAPICall CSteamUserStats::RequestUserStats(CSteamID steamIDUser)
{
	STUB();
	return SteamAPICallInvalid;
}

bool CSteamUserStats::GetUserStat(CSteamID steamIDUser,
				  const char *name,
				  int32 *data)
{
	STUB();
	*data = 0;
	return true;
}

bool CSteamUserStats::GetUserStat(CSteamID steamIDUser,
				  const char *name,
				  float *data)
{
	STUB();
	*data = 0;
	return true;
}

bool CSteamUserStats::GetUserAchievement(CSteamID steamIDUser,
					 const char *name,
					 bool *achieved)
{
	STUB();
	*achieved = true;
	return true;
}

bool CSteamUserStats::GetUserAchievementAndUnlockTime(CSteamID steamIDUser,
						      const char *name,
						      bool *achieved,
						      uint32 *unlockTime)
{
	STUB();
	*achieved = true;
	*unlockTime = 0;
	return true;
}

bool CSteamUserStats::ResetAllStats(bool achievementsToo)
{
	STUB();
	return true;
}

SteamAPICall CSteamUserStats::FindOrCreateLeaderboard(
		const char *leaderboardName,
		LeaderboardSortMethod leaderboardSortMethod,
		LeaderboardDisplayType leaderboardDisplayType)
{
	STUB();
	return SteamAPICallInvalid;
}

SteamAPICall CSteamUserStats::FindLeaderboard(const char *leaderboardName)
{
	STUB();
	return SteamAPICallInvalid;
}

const char *CSteamUserStats::GetLeaderboardName(SteamLeaderboard steamLeaderboard)
{
	STUB();
	return "LeaderboardName";
}
int CSteamUserStats::GetLeaderboardEntryCount(SteamLeaderboard steamLeaderboard)
{
	STUB();
	return 0;
}

LeaderboardSortMethod CSteamUserStats::GetLeaderboardSortMethod(
		SteamLeaderboard steamLeaderboard)
{
	STUB();
	return LeaderboardSortMethodDescending;
}

LeaderboardDisplayType CSteamUserStats::GetLeaderboardDisplayType(
		SteamLeaderboard steamLeaderboard)
{
	STUB();
	return LeaderboardDisplayTypeNumeric;
}

SteamAPICall CSteamUserStats::DownloadLeaderboardEntries(
		SteamLeaderboard steamLeaderboard,
		LeaderboardDataRequest leaderboardDataRequest,
		int rangeStart,
		int rangeEnd)
{
	STUB();
	return SteamAPICallInvalid;
}

bool CSteamUserStats::GetDownloadedLeaderboardEntry(
		SteamLeaderboardEntries steamLeaderboardEntries,
		int index,
		LeaderboardEntry *leaderboardEntry,
		int32 *details,
		int detailsMax)
{
	STUB();
	*details = 0;
	return false;
}

SteamAPICall CSteamUserStats::UploadLeaderboardScore(
		SteamLeaderboard steamLeaderboard,
		LeaderboardUploadScoreMethod leaderboardUploadScoreMethod,
		int32 score,
		const int32 *scoreDetails,
		int scoreDetailsCount)
{
	STUB();
	return SteamAPICallInvalid;
}

SteamAPICall CSteamUserStats::GetNumberOfCurrentPlayers()
{
	STUB();
	return SteamAPICallInvalid;
}

