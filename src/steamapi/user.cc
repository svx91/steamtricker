
#include "user.h"


SteamUserId CSteamUser::GetHSteamUser()
{
	STUB();
	return 0;
}

bool CSteamUser::BLoggedOn()
{
	STUB();
	return true;
}

CSteamID CSteamUser::GetSteamID() {
	STUB();
	return CSteamID(static_cast<uint64>(0));
}

int CSteamUser::InitiateGameConnection(void *authBlob,
				       int maxAuthBlob,
				       CSteamID steamIDGameServer,
				       uint32 ipServer,
				       uint16 portServer,
				       bool secure)
{
	STUB();
	return 0;
}

void CSteamUser::TerminateGameConnection(uint32 ipServer, uint16 portServer)
{
	STUB();
}

void CSteamUser::TrackAppUsageEvent(CGameID gameID,
				    int appUsageEvent,
				    const char *extraInfo)
{
	STUB();
}

bool CSteamUser::GetUserDataFolder(char *buffer, int bufferSize)
{
	STUB();
	*buffer = 0;
	return false;
}

void CSteamUser::StartVoiceRecording()
{
	STUB();
}

void CSteamUser::StopVoiceRecording()
{
	STUB();
}

VoiceResult CSteamUser::GetAvailableVoice(uint32 *compressed,
					  uint32 *uncompressed)
{
	STUB();
	return VoiceResultNoData;
}

VoiceResult CSteamUser::GetVoice(bool wantCompressed,
				 void *destBuffer,
				 uint32 destBufferSize,
				 uint32 *bytesWritten,
				 bool wantUncompressed,
				 void *uncompressedDestBuffer,
				 uint32 uncompressedDestBufferSize,
				 uint32 *uncompressBytesWritten)
{
	STUB();
	return VoiceResultNoData;
}

VoiceResult CSteamUser::DecompressVoice(const void *compressed,
					uint32 compressedSize,
					void *destBuffer,
					uint32 destBufferSize,
					uint32 *bytesWritten)
{
	STUB();
	return VoiceResultNoData;
}

AuthTicket CSteamUser::GetAuthSessionTicket(void *ticket,
					    int maxTicket,
					    uint32 *ticketCount)
{
	STUB();
	return 0;
}

BeginAuthSessionResult CSteamUser::BeginAuthSession(const void *authTicket,
						    int authTicketCount,
						    CSteamID steamID)
{
	STUB();
	return BeginAuthSessionResultOK;
}

void CSteamUser::EndAuthSession(CSteamID steamID)
{
	STUB();
}

void CSteamUser::CancelAuthTicket(AuthTicket authTicket)
{
	STUB();
}

UserHasLicenseForAppResult CSteamUser::UserHasLicenseForApp(CSteamID steamID,
							    AppId appID)
{
	STUB();
	return UserHasLicenseResultHasLicense;
}

