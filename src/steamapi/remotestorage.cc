#include "remotestorage.h"


bool CSteamRemoteStorage::FileWrite(const char *file,
				    const void *data,
				    int32 dataSize)
{
	STUB();
	return true;
}

int32 CSteamRemoteStorage::GetFileSize(const char *file)
{
	STUB();
	return 0;
}

int32 CSteamRemoteStorage::FileRead(const char *file,
				    void *data,
				    int32 dataSize)
{
	STUB();
	return 0;
}

bool CSteamRemoteStorage::FileExists(const char *file)
{
	STUB();
	return false;
}

int32 CSteamRemoteStorage::GetFileCount()
{
	STUB();
	return 0;
}

const char *CSteamRemoteStorage::GetFileNameAndSize(int file,
						    int32 *fileSizeInBytes)
{
	STUB();
	*fileSizeInBytes = 0;
	return "FileName";
}

bool CSteamRemoteStorage::GetQuota(int32 *totalBytes, int32 *availableBytes)
{
	STUB();
	*totalBytes = 1000000000;
	*availableBytes = 1000000000;
	return true;
}

