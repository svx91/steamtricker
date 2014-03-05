#include "utils.h"


uint32 CSteamUtils::GetSecondsSinceAppActive()
{
	STUB();
	return 0;
}

uint32 CSteamUtils::GetSecondsSinceComputerActive()
{
	STUB();
	return 0;
}

Universe CSteamUtils::GetConnectedUniverse()
{
	STUB();
	return UniversePublic;
}

uint32 CSteamUtils::GetServerRealTime()
{
	STUB();
	return 0;
}

const char *CSteamUtils::GetIPCountry()
{
	STUB();
	return NULL;
}

bool CSteamUtils::GetImageSize(int image, uint32 *width, uint32 *height)
{
	STUB();
	return true;
}

bool CSteamUtils::GetImageRGBA(int image, uint8 *dest, int destBufferSize)
{
	STUB();
	return true;
}

bool CSteamUtils::GetCSERIPPort(uint32 *ip, uint16 *port)
{
	STUB();
	return true;
}

uint8 CSteamUtils::GetCurrentBatteryPower()
{
	STUB();
	return 0;
}

uint32 CSteamUtils::GetAppID()
{
	STUB();
	return 0;
}

void CSteamUtils::SetOverlayNotificationPosition(NotificationPosition notificationPosition)
{
	STUB();
}

bool CSteamUtils::IsAPICallCompleted(SteamAPICall steamAPICall, bool *failed)
{
	STUB();
	return false;
}

SteamAPICallFailure CSteamUtils::GetAPICallFailureReason(SteamAPICall steamAPICall)
{
	STUB();
	return SteamAPICallFailureNone;
}

bool CSteamUtils::GetAPICallResult(SteamAPICall steamAPICall,
				   void *callback,
				   int iCallback,
				   int callbackExpected,
				   bool *failed)
{
	STUB();
	return false;
}

void CSteamUtils::RunFrame()
{
	STUB();
}

uint32 CSteamUtils::GetIPCCallCount()
{
	STUB();
	return 0;
}

void CSteamUtils::SetWarningMessageHook(SteamAPIWarningMessageHook function)
{
	STUB();
}

bool CSteamUtils::IsOverlayEnabled()
{
	STUB();
	return false;
}

bool CSteamUtils::BOverlayNeedsPresent()
{
	STUB();
	return false;
}
