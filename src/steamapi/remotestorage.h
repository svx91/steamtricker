#ifndef STEAMTRICKER_STEAMAPI_REMOTESTORAGE_H_
#define STEAMTRICKER_STEAMAPI_REMOTESTORAGE_H_

#include "types.h"

class ISteamRemoteStorage {
public:
	virtual bool FileWrite(const char *file, const void *data, int32 dataSize) = 0;

	virtual int32 GetFileSize(const char *file) = 0;

	virtual int32 FileRead(const char *file, void *data, int32 dataSize) = 0;

	virtual bool FileExists(const char *file) = 0;

	virtual int32 GetFileCount() = 0;

	virtual const char *GetFileNameAndSize(int file, int32 *fileSizeInBytes) = 0;

	virtual bool GetQuota(int32 *totalBytes, int32 *availableBytes) = 0;
};

class CSteamRemoteStorage : public ISteamRemoteStorage {
public:
	static CSteamRemoteStorage& getInstance() {
		static CSteamRemoteStorage instance;
		return instance;
	}

	bool FileWrite(const char *file, const void *data, int32 dataSize);

	int32 GetFileSize(const char *file);

	int32 FileRead(const char *file, void *data, int32 dataSize);

	bool FileExists(const char *file);

	int32 GetFileCount();

	const char *GetFileNameAndSize(int file, int32 *fileSizeInBytes);

	bool GetQuota(int32 *totalBytes, int32 *availableBytes);
};

#endif /* STEAMTRICKER_STEAMAPI_REMOTESTORAGE_H_ */