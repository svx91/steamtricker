#include "api.h"
#include "remotestorage.h"


bool CSteamRemoteStorage::FileWrite(const char *file,
				    const void *data,
				    int32 dataSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileWrite,
					     file, data, dataSize);
	return true;
}

int32 CSteamRemoteStorage::GetFileSize(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetFileSize,
					     file);
	return 0;
}

int32 CSteamRemoteStorage::FileRead(const char *file,
				    void *data,
				    int32 dataSize)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileRead,
					     file, data, dataSize);
	return 0;
}

bool CSteamRemoteStorage::FileExists(const char *file)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, FileExists,
					     file);
	return false;
}

int32 CSteamRemoteStorage::GetFileCount()
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetFileCount);
	return 0;
}

const char *CSteamRemoteStorage::GetFileNameAndSize(int file,
						    int32 *fileSizeInBytes)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetFileNameAndSize,
					     file, fileSizeInBytes);
	*fileSizeInBytes = 0;
	return "FileName";
}

bool CSteamRemoteStorage::GetQuota(int32 *totalBytes, int32 *availableBytes)
{
	STUB();
	METHOD_FORWARD_AND_FINISH_IF_ENABLED(SteamRemoteStorage, GetQuota,
					     totalBytes, availableBytes);
	*totalBytes = 1000000000;
	*availableBytes = 1000000000;
	return true;
}

