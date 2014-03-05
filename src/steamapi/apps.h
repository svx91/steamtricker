#ifndef STEAMTRICKER_STEAMAPI_APPS_H_
#define STEAMTRICKER_STEAMAPI_APPS_H_

#include "types.h"

class ISteamApps {
public:
	virtual bool BIsSubscribed() = 0;

	virtual bool BIsLowViolence() = 0;

	virtual bool BIsCybercafe() = 0;

	virtual bool BIsVACBanned() = 0;

	virtual const char *GetCurrentGameLanguage() = 0;

	virtual const char *GetAvailableGameLanguages() = 0;

	virtual bool BIsSubscribedApp(AppId appID) = 0;

	virtual bool BIsDlcInstalled(AppId appID) = 0;
};

class CSteamApps : public ISteamApps {
public:
	static CSteamApps& getInstance() {
		static CSteamApps instance;
		return instance;
	}

	bool BIsSubscribed();

	bool BIsLowViolence();

	bool BIsCybercafe();

	bool BIsVACBanned();

	const char *GetCurrentGameLanguage();

	const char *GetAvailableGameLanguages();

	bool BIsSubscribedApp(AppId appID);

	bool BIsDlcInstalled(AppId appID);
};

#endif /* STEAMTRICKER_STEAMAPI_APPS_H_ */