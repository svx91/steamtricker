
#include "masterserverupdater.h"


void CSteamMasterServerUpdater::SetActive(bool active)
{
	STUB();
}

void CSteamMasterServerUpdater::SetHeartbeatInterval(int heartbeatInterval)
{
	STUB();
}

bool CSteamMasterServerUpdater::HandleIncomingPacket(const void *data,
						     int cbData,
						     uint32 srcIP,
						     uint16 srcPort)
{
	STUB();
	return true;
}

int CSteamMasterServerUpdater::GetNextOutgoingPacket(void *out,
						     int maxOut,
						     uint32 *netAdr,
						     uint16 *port)
{
	STUB();
	return 0;
}

void CSteamMasterServerUpdater::SetBasicServerData(unsigned short protocolVersion,
						   bool dedicatedServer,
						   const char *regionName,
						   const char *productName,
						   unsigned short maxReportedClients,
						   bool passwordProtected,
						   const char *gameDescription)
{
	STUB();
}

void CSteamMasterServerUpdater::ClearAllKeyValues() {
	STUB();
}

void CSteamMasterServerUpdater::SetKeyValue(const char *key, const char *value)
{
	STUB();
}

void CSteamMasterServerUpdater::NotifyShutdown() {
	STUB();
}

bool CSteamMasterServerUpdater::WasRestartRequested() {
	STUB();
	return false;
}

void CSteamMasterServerUpdater::ForceHeartbeat() {
	STUB();
}

bool CSteamMasterServerUpdater::AddMasterServer(const char *serverAddress)
{
	STUB();
	return true;
}

bool CSteamMasterServerUpdater::RemoveMasterServer(const char *serverAddress)
{
	STUB();
	return true;
}

int CSteamMasterServerUpdater::GetNumMasterServers() {
	STUB();
	return 0;
}

int CSteamMasterServerUpdater::GetMasterServerAddress(int server,
						      char *out,
						      int outBufferSize)
{
	STUB();
	*out = 0;
	return 0;
}

