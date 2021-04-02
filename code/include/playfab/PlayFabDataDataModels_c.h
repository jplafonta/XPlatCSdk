// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabBaseModel_c.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

// Data enums
enum class PlayFabDataOperationTypes : uint32_t
{
    Created,
    Updated,
    Deleted,
    None
};


// Data structs
typedef struct PlayFabDataEntityKey
{
    const char* id;
    const char* type;
} PlayFabDataEntityKey;

typedef struct PlayFabDataAbortFileUploadsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabDataEntityKey* entity;
    PF_ARRAY const char** fileNames;
    PF_COLLECTION_COUNT uint32_t fileNamesCount;
    PF_OPTIONAL int32_t* profileVersion;
} PlayFabDataAbortFileUploadsRequest;

typedef struct PlayFabDataAbortFileUploadsResponse
{
    PF_OPTIONAL PlayFabDataEntityKey* entity;
    int32_t profileVersion;
} PlayFabDataAbortFileUploadsResponse;

typedef struct PlayFabDataDeleteFilesRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabDataEntityKey* entity;
    PF_ARRAY const char** fileNames;
    PF_COLLECTION_COUNT uint32_t fileNamesCount;
    PF_OPTIONAL int32_t* profileVersion;
} PlayFabDataDeleteFilesRequest;

typedef struct PlayFabDataDeleteFilesResponse
{
    PF_OPTIONAL PlayFabDataEntityKey* entity;
    int32_t profileVersion;
} PlayFabDataDeleteFilesResponse;

typedef struct PlayFabDataFinalizeFileUploadsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabDataEntityKey* entity;
    PF_ARRAY const char** fileNames;
    PF_COLLECTION_COUNT uint32_t fileNamesCount;
    int32_t profileVersion;
} PlayFabDataFinalizeFileUploadsRequest;

typedef struct PlayFabDataGetFileMetadata
{
    const char* checksum;
    const char* downloadUrl;
    const char* fileName;
    time_t lastModified;
    int32_t size;
} PlayFabDataGetFileMetadata;

typedef struct PlayFabDataFinalizeFileUploadsResponse
{
    PF_OPTIONAL PlayFabDataEntityKey* entity;
    PF_MAP struct PlayFabDataGetFileMetadataDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
    int32_t profileVersion;
} PlayFabDataFinalizeFileUploadsResponse;

typedef struct PlayFabDataGetFilesRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabDataEntityKey* entity;
} PlayFabDataGetFilesRequest;

typedef struct PlayFabDataGetFilesResponse
{
    PF_OPTIONAL PlayFabDataEntityKey* entity;
    PF_MAP struct PlayFabDataGetFileMetadataDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
    int32_t profileVersion;
} PlayFabDataGetFilesResponse;

typedef struct PlayFabDataGetObjectsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabDataEntityKey* entity;
    PF_OPTIONAL bool* escapeObject;
} PlayFabDataGetObjectsRequest;

typedef struct PlayFabDataObjectResult
{
    PlayFabJsonObject dataObject;
    const char* escapedDataObject;
    const char* objectName;
} PlayFabDataObjectResult;

typedef struct PlayFabDataGetObjectsResponse
{
    PF_OPTIONAL PlayFabDataEntityKey* entity;
    PF_MAP struct PlayFabDataObjectResultDictionaryEntry* objects;
    PF_COLLECTION_COUNT uint32_t objectsCount;
    int32_t profileVersion;
} PlayFabDataGetObjectsResponse;

typedef struct PlayFabDataInitiateFileUploadMetadata
{
    const char* fileName;
    const char* uploadUrl;
} PlayFabDataInitiateFileUploadMetadata;

typedef struct PlayFabDataInitiateFileUploadsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabDataEntityKey* entity;
    PF_ARRAY const char** fileNames;
    PF_COLLECTION_COUNT uint32_t fileNamesCount;
    PF_OPTIONAL int32_t* profileVersion;
} PlayFabDataInitiateFileUploadsRequest;

typedef struct PlayFabDataInitiateFileUploadsResponse
{
    PF_OPTIONAL PlayFabDataEntityKey* entity;
    int32_t profileVersion;
    PF_ARRAY PlayFabDataInitiateFileUploadMetadata** uploadDetails;
    PF_COLLECTION_COUNT uint32_t uploadDetailsCount;
} PlayFabDataInitiateFileUploadsResponse;

typedef struct PlayFabDataSetObject
{
    PlayFabJsonObject dataObject;
    PF_OPTIONAL bool* deleteObject;
    const char* escapedDataObject;
    const char* objectName;
} PlayFabDataSetObject;

typedef struct PlayFabDataSetObjectInfo
{
    const char* objectName;
    const char* operationReason;
    PF_OPTIONAL PlayFabDataOperationTypes* setResult;
} PlayFabDataSetObjectInfo;

typedef struct PlayFabDataSetObjectsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabDataEntityKey* entity;
    PF_OPTIONAL int32_t* expectedProfileVersion;
    PF_ARRAY PlayFabDataSetObject** objects;
    PF_COLLECTION_COUNT uint32_t objectsCount;
} PlayFabDataSetObjectsRequest;

typedef struct PlayFabDataSetObjectsResponse
{
    int32_t profileVersion;
    PF_ARRAY PlayFabDataSetObjectInfo** setResults;
    PF_COLLECTION_COUNT uint32_t setResultsCount;
} PlayFabDataSetObjectsResponse;


// Data dictionary entry structs
typedef struct PlayFabDataGetFileMetadataDictionaryEntry
{
    const char* key;
    PlayFabDataGetFileMetadata* value;
} PlayFabDataGetFileMetadataDictionaryEntry;

typedef struct PlayFabDataObjectResultDictionaryEntry
{
    const char* key;
    PlayFabDataObjectResult* value;
} PlayFabDataObjectResultDictionaryEntry;


#pragma pop_macro("IN")

}
