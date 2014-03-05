#ifndef STEAMTRICKER_STEAMAPI_UTILS_H_
#define STEAMTRICKER_STEAMAPI_UTILS_H_

#include "types.h"

class ISteamUtils {
public:
	virtual uint32 GetSecondsSinceAppActive() = 0;

	virtual uint32 GetSecondsSinceComputerActive() = 0;

	virtual Universe GetConnectedUniverse() = 0;

	virtual uint32 GetServerRealTime() = 0;

	virtual const char *GetIPCountry() = 0;

	virtual bool GetImageSize(int image, uint32 *width, uint32 *height) = 0;

	virtual bool GetImageRGBA(int image, uint8 *dest, int destBufferSize) = 0;

	virtual bool GetCSERIPPort(uint32 *ip, uint16 *port) = 0;

	virtual uint8 GetCurrentBatteryPower() = 0;

	virtual uint32 GetAppID() = 0;

	virtual void SetOverlayNotificationPosition(NotificationPosition notificationPosition) = 0;

	virtual bool IsAPICallCompleted(SteamAPICall steamAPICall, bool *failed) = 0;

	virtual SteamAPICallFailure GetAPICallFailureReason(SteamAPICall steamAPICall) = 0;

	virtual bool GetAPICallResult(SteamAPICall steamAPICall,
			      void *callback,
			      int iCallback,
			      int callbackExpected,
			      bool *failed) = 0;

	virtual void RunFrame() = 0;

	virtual uint32 GetIPCCallCount() = 0;

	virtual void SetWarningMessageHook(SteamAPIWarningMessageHook function) = 0;

	virtual bool IsOverlayEnabled() = 0;

	virtual bool BOverlayNeedsPresent() = 0;
};

class CSteamUtils : public ISteamUtils {
public:
	static CSteamUtils& getInstance() {
		static CSteamUtils instance;
		return instance;
	}

	uint32 GetSecondsSinceAppActive();

	uint32 GetSecondsSinceComputerActive();

	Universe GetConnectedUniverse();

	uint32 GetServerRealTime();

	const char *GetIPCountry();
	bool GetImageSize(int image, uint32 *width, uint32 *height);

	bool GetImageRGBA(int image, uint8 *dest, int destBufferSize);

	bool GetCSERIPPort(uint32 *ip, uint16 *port);

	uint8 GetCurrentBatteryPower();

	uint32 GetAppID();

	void SetOverlayNotificationPosition(NotificationPosition notificationPosition);

	bool IsAPICallCompleted(SteamAPICall steamAPICall, bool *failed);

	SteamAPICallFailure GetAPICallFailureReason(SteamAPICall steamAPICall);

	bool GetAPICallResult(SteamAPICall steamAPICall,
			      void *callback,
			      int iCallback,
			      int callbackExpected,
			      bool *failed);

	void RunFrame();

	uint32 GetIPCCallCount();

	void SetWarningMessageHook(SteamAPIWarningMessageHook function);

	bool IsOverlayEnabled();

	bool BOverlayNeedsPresent();
};

#endif /* STEAMTRICKER_STEAMAPI_UTILS_H_ */