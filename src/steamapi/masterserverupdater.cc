#include "api.h"
#include "masterserverupdater.h"


void CSteamMasterServerUpdater::SetActive(bool active)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, SetActive,
					     active);
}

void CSteamMasterServerUpdater::SetHeartbeatInterval(int heartbeatInterval)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, SetHeartbeatInterval,
					     heartbeatInterval);
}

bool CSteamMasterServerUpdater::HandleIncomingPacket(const void *data,
						     int cbData,
						     uint32 srcIP,
						     uint16 srcPort)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, HandleIncomingPacket,
					     data, cbData, srcIP, srcPort);
	return true;
}

int CSteamMasterServerUpdater::GetNextOutgoingPacket(void *out,
						     int maxOut,
						     uint32 *netAdr,
						     uint16 *port)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, GetNextOutgoingPacket,
					     out, maxOut, netAdr, port);
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
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, SetBasicServerData,
					     protocolVersion, dedicatedServer,
					     regionName, productName,
					     maxReportedClients,
					     passwordProtected,
					     gameDescription);
}

void CSteamMasterServerUpdater::ClearAllKeyValues() {
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, ClearAllKeyValues);
}

void CSteamMasterServerUpdater::SetKeyValue(const char *key, const char *value)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, SetKeyValue,
					     key, value);
}

void CSteamMasterServerUpdater::NotifyShutdown() {
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, NotifyShutdown);
}

bool CSteamMasterServerUpdater::WasRestartRequested() {
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, WasRestartRequested);
	return false;
}

void CSteamMasterServerUpdater::ForceHeartbeat() {
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, ForceHeartbeat);
}

bool CSteamMasterServerUpdater::AddMasterServer(const char *serverAddress)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, AddMasterServer,
					     serverAddress);
	return true;
}

bool CSteamMasterServerUpdater::RemoveMasterServer(const char *serverAddress)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, RemoveMasterServer,
					     serverAddress);
	return true;
}

int CSteamMasterServerUpdater::GetNumMasterServers() {
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, GetNumMasterServers);
	return 0;
}

int CSteamMasterServerUpdater::GetMasterServerAddress(int server,
						      char *out,
						      int outBufferSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamMasterServerUpdater, GetMasterServerAddress,
					     server, out, outBufferSize);
	*out = 0;
	return 0;
}

