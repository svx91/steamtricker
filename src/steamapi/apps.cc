#include "api.h"
#include "apps.h"

bool CSteamApps::BIsSubscribed()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsSubscribed);
	return true;
}

bool CSteamApps::BIsLowViolence()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsLowViolence);
	return false;
}

bool CSteamApps::BIsCybercafe()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsCybercafe);
	return false;
}

bool CSteamApps::BIsVACBanned()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsVACBanned);
	return false;
}

const char *CSteamApps::GetCurrentGameLanguage()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetCurrentGameLanguage);
	return "German";
}

const char *CSteamApps::GetAvailableGameLanguages()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, GetAvailableGameLanguages);
	return "German";
}

bool CSteamApps::BIsSubscribedApp(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsSubscribedApp, appID);
	return true;
}

bool CSteamApps::BIsDlcInstalled(AppId appID)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamApps, BIsDlcInstalled, appID);
	return true;
}

