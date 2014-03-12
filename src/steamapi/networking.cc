
#include "networking.h"

bool CSteamNetworking::SendP2PPacket(CSteamID steamIDRemote,
				     const void *data,
				     uint32 dataSize,
				     P2PSendType sendType)
{
	STUB();
	return true;
}

bool CSteamNetworking::IsP2PPacketAvailable(uint32 *msgSize)
{
	STUB();
	*msgSize = 0;
	return false;
}

bool CSteamNetworking::ReadP2PPacket(void *dest,
				     uint32 destSize,
				     uint32 *msgSize,
				     CSteamID *steamIDRemote)
{
	STUB();
	*msgSize = 0;
	*steamIDRemote = CSteamID(static_cast<uint64>(0));
	return true;
}

bool CSteamNetworking::AcceptP2PSessionWithUser(CSteamID steamIDRemote)
{
	STUB();
	return true;
}

bool CSteamNetworking::CloseP2PSessionWithUser(CSteamID steamIDRemote)
{
	STUB();
	return true;
}

bool CSteamNetworking::GetP2PSessionState(CSteamID steamIDRemote,
					  P2PSessionState *connectionState)
{
	STUB();
	return false;
}

NetListenSocket CSteamNetworking::CreateListenSocket(int virtualP2PPort,
						     uint32 ip,
						     uint16 port,
						     bool allowUseOfPacketRelay)
{
	STUB();
	return 0;
}

NetSocket CSteamNetworking::CreateP2PConnectionSocket(CSteamID steamIDTarget,
						      int virtualPort,
						      int timeoutSec,
						      bool allowUseOfPacketRelay)
{
	STUB();
	return 0;
}

NetSocket CSteamNetworking::CreateConnectionSocket(uint32 ip,
						   uint16 port,
						   int timeoutSec)
{
	STUB();
	return 0;
}

bool CSteamNetworking::DestroySocket(NetSocket socket, bool notifyRemoteEnd)
{
	STUB();
	return true;
}

bool CSteamNetworking::DestroyListenSocket(NetListenSocket socket,
					   bool notifyRemoteEnd)
{
	STUB();
	return true;
}

bool CSteamNetworking::SendDataOnSocket(NetSocket socket,
					void *data,
					uint32 dataSize,
					bool reliable)
{ 
	STUB();
	return true;
}

bool CSteamNetworking::IsDataAvailableOnSocket(NetSocket socket,
					       uint32 *msgSize)
{
	STUB();
	*msgSize = 0;
	return false;
}

bool CSteamNetworking::RetrieveDataFromSocket(NetSocket socket,
					      void *dest,
					      uint32 destSize,
					      uint32 *msgSize)
{
	STUB();
	*msgSize = 0;
	return false;
}

bool CSteamNetworking::IsDataAvailable(NetListenSocket listenSocket,
				       uint32 *msgSize,
				       NetSocket *socket)
{
	STUB();
	*msgSize = 0;
	*socket = 0;
	return false;
}

bool CSteamNetworking::RetrieveData(NetListenSocket listenSocket,
				    void *dest,
				    uint32 destSize,
				    uint32 *msgSize,
				    NetSocket *socket)
{
	STUB();
	*msgSize = 0;
	*socket = 0;
	return false;
}

bool CSteamNetworking::GetSocketInfo(NetSocket socket,
				     CSteamID *steamIDRemote,
				     int *socketStatus,
				     uint32 *ipRemote,
				     uint16 *portRemote)
{
	STUB();
	*steamIDRemote = CSteamID(static_cast<uint64>(0));
	*socketStatus = 0;
	*ipRemote = 0;
	*portRemote = 0;
	return false;
}

bool CSteamNetworking::GetListenSocketInfo(NetListenSocket listenSocket,
					   uint32 *ip,
					   uint16 *port)
{
	STUB();
	*ip = 0;
	*port = 0;
	return false;
}

NetSocketConnectionType CSteamNetworking::GetSocketConnectionType(NetSocket socket)
{
	STUB();
	return NetSocketConnectionTypeNotConnected;
}

int CSteamNetworking::GetMaxPacketSize(NetSocket socket)
{
	STUB();
	return 0;
}
