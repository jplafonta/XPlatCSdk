// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabSharedDataModels.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// OperationTypes enum.
/// </summary>
enum class PlayFabDataOperationTypes : uint32_t
{
    Created,
    Updated,
    Deleted,
    None
};

/// <summary>
/// PlayFabDataAbortFileUploadsRequest data model. Aborts the pending upload of the requested files.
/// Request object for PlayFabDataAbortFileUploadsAsync.
/// </summary>
typedef struct PlayFabDataAbortFileUploadsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// Names of the files to have their pending uploads aborted.
    /// </summary>
    const char* const* fileNames;

    /// <summary>
    /// Count of fileNames
    /// </summary>
    uint32_t fileNamesCount;

    /// <summary>
    /// (Optional) The expected version of the profile, if set and doesn't match the current version
    /// of the profile the operation will not be performed.
    /// </summary>
    int32_t const* profileVersion;

} PlayFabDataAbortFileUploadsRequest;

/// <summary>
/// PlayFabDataAbortFileUploadsResponse data model. Result payload for PlayFabDataAbortFileUploadsAsync.
/// </summary>
typedef struct PlayFabDataAbortFileUploadsResponse
{
    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The current version of the profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

} PlayFabDataAbortFileUploadsResponse;

/// <summary>
/// PlayFabDataDeleteFilesRequest data model. Deletes the requested files from the entity's profile.
/// Request object for PlayFabDataDeleteFilesAsync.
/// </summary>
typedef struct PlayFabDataDeleteFilesRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// Names of the files to be deleted.
    /// </summary>
    const char* const* fileNames;

    /// <summary>
    /// Count of fileNames
    /// </summary>
    uint32_t fileNamesCount;

    /// <summary>
    /// (Optional) The expected version of the profile, if set and doesn't match the current version
    /// of the profile the operation will not be performed.
    /// </summary>
    int32_t const* profileVersion;

} PlayFabDataDeleteFilesRequest;

/// <summary>
/// PlayFabDataDeleteFilesResponse data model. Result payload for PlayFabDataDeleteFilesAsync.
/// </summary>
typedef struct PlayFabDataDeleteFilesResponse
{
    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The current version of the profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

} PlayFabDataDeleteFilesResponse;

/// <summary>
/// PlayFabDataFinalizeFileUploadsRequest data model. Finalizes the upload of the requested files. Verifies
/// that the files have been successfully uploaded and moves the file pointers from pending to live.
/// Request object for PlayFabDataFinalizeFileUploadsAsync.
/// </summary>
typedef struct PlayFabDataFinalizeFileUploadsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// Names of the files to be finalized. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'.
    /// </summary>
    const char* const* fileNames;

    /// <summary>
    /// Count of fileNames
    /// </summary>
    uint32_t fileNamesCount;

    /// <summary>
    /// The current version of the profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

} PlayFabDataFinalizeFileUploadsRequest;

/// <summary>
/// PlayFabDataGetFileMetadata data model.
/// </summary>
typedef struct PlayFabDataGetFileMetadata
{
    /// <summary>
    /// (Optional) Checksum value for the file, can be used to check if the file on the server has changed.
    /// </summary>
    const char* checksum;

    /// <summary>
    /// (Optional) Download URL where the file can be retrieved.
    /// </summary>
    const char* downloadUrl;

    /// <summary>
    /// (Optional) Name of the file.
    /// </summary>
    const char* fileName;

    /// <summary>
    /// Last UTC time the file was modified.
    /// </summary>
    time_t lastModified;

    /// <summary>
    /// Storage service's reported byte count.
    /// </summary>
    int32_t size;

} PlayFabDataGetFileMetadata;

/// <summary>
/// PlayFabDataFinalizeFileUploadsResponse data model. Result payload for PlayFabDataFinalizeFileUploadsAsync.
/// </summary>
typedef struct PlayFabDataFinalizeFileUploadsResponse
{
    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) Collection of metadata for the entity's files.
    /// </summary>
    struct PlayFabDataGetFileMetadataDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

    /// <summary>
    /// The current version of the profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

} PlayFabDataFinalizeFileUploadsResponse;

/// <summary>
/// PlayFabDataGetFilesRequest data model. Returns URLs that may be used to download the files for a
/// profile for a limited length of time. Only returns files that have been successfully uploaded, files
/// that are still pending will either return the old value, if it exists, or nothing. Request object
/// for PlayFabDataGetFilesAsync.
/// </summary>
typedef struct PlayFabDataGetFilesRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

} PlayFabDataGetFilesRequest;

/// <summary>
/// PlayFabDataGetFilesResponse data model. Result payload for PlayFabDataGetFilesAsync.
/// </summary>
typedef struct PlayFabDataGetFilesResponse
{
    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) Collection of metadata for the entity's files.
    /// </summary>
    struct PlayFabDataGetFileMetadataDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

    /// <summary>
    /// The current version of the profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

} PlayFabDataGetFilesResponse;

/// <summary>
/// PlayFabDataGetObjectsRequest data model. Gets JSON objects from an entity profile and returns it.
/// . Request object for PlayFabDataGetObjectsAsync.
/// </summary>
typedef struct PlayFabDataGetObjectsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) Determines whether the object will be returned as an escaped JSON string or as a un-escaped
    /// JSON object. Default is JSON object.
    /// </summary>
    bool const* escapeObject;

} PlayFabDataGetObjectsRequest;

/// <summary>
/// PlayFabDataObjectResult data model.
/// </summary>
typedef struct PlayFabDataObjectResult
{
    /// <summary>
    /// (Optional) Un-escaped JSON object, if EscapeObject false or default.
    /// </summary>
    PlayFabJsonObject dataObject;

    /// <summary>
    /// (Optional) Escaped string JSON body of the object, if EscapeObject is true.
    /// </summary>
    const char* escapedDataObject;

    /// <summary>
    /// (Optional) Name of the object. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'.
    /// </summary>
    const char* objectName;

} PlayFabDataObjectResult;

/// <summary>
/// PlayFabDataGetObjectsResponse data model. Result payload for PlayFabDataGetObjectsAsync.
/// </summary>
typedef struct PlayFabDataGetObjectsResponse
{
    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) Requested objects that the calling entity has access to.
    /// </summary>
    struct PlayFabDataObjectResultDictionaryEntry const* objects;

    /// <summary>
    /// Count of objects
    /// </summary>
    uint32_t objectsCount;

    /// <summary>
    /// The current version of the profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

} PlayFabDataGetObjectsResponse;

/// <summary>
/// PlayFabDataInitiateFileUploadMetadata data model.
/// </summary>
typedef struct PlayFabDataInitiateFileUploadMetadata
{
    /// <summary>
    /// (Optional) Name of the file.
    /// </summary>
    const char* fileName;

    /// <summary>
    /// (Optional) Location the data should be sent to via an HTTP PUT operation.
    /// </summary>
    const char* uploadUrl;

} PlayFabDataInitiateFileUploadMetadata;

/// <summary>
/// PlayFabDataInitiateFileUploadsRequest data model. Returns URLs that may be used to upload the files
/// for a profile 5 minutes. After using the upload calls FinalizeFileUploads must be called to move the
/// file status from pending to live. Request object for PlayFabDataInitiateFileUploadsAsync.
/// </summary>
typedef struct PlayFabDataInitiateFileUploadsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// Names of the files to be set. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'.
    /// </summary>
    const char* const* fileNames;

    /// <summary>
    /// Count of fileNames
    /// </summary>
    uint32_t fileNamesCount;

    /// <summary>
    /// (Optional) The expected version of the profile, if set and doesn't match the current version
    /// of the profile the operation will not be performed.
    /// </summary>
    int32_t const* profileVersion;

} PlayFabDataInitiateFileUploadsRequest;

/// <summary>
/// PlayFabDataInitiateFileUploadsResponse data model. Result payload for PlayFabDataInitiateFileUploadsAsync.
/// </summary>
typedef struct PlayFabDataInitiateFileUploadsResponse
{
    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The current version of the profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

    /// <summary>
    /// (Optional) Collection of file names and upload urls.
    /// </summary>
    PlayFabDataInitiateFileUploadMetadata const* const* uploadDetails;

    /// <summary>
    /// Count of uploadDetails
    /// </summary>
    uint32_t uploadDetailsCount;

} PlayFabDataInitiateFileUploadsResponse;

/// <summary>
/// PlayFabDataSetObject data model.
/// </summary>
typedef struct PlayFabDataSetObject
{
    /// <summary>
    /// (Optional) Body of the object to be saved. If empty and DeleteObject is true object will be deleted
    /// if it exists, or no operation will occur if it does not exist. Only one of Object or EscapedDataObject
    /// fields may be used.
    /// </summary>
    PlayFabJsonObject dataObject;

    /// <summary>
    /// (Optional) Flag to indicate that this object should be deleted. Both DataObject and EscapedDataObject
    /// must not be set as well.
    /// </summary>
    bool const* deleteObject;

    /// <summary>
    /// (Optional) Body of the object to be saved as an escaped JSON string. If empty and DeleteObject
    /// is true object will be deleted if it exists, or no operation will occur if it does not exist.
    /// Only one of DataObject or EscapedDataObject fields may be used.
    /// </summary>
    const char* escapedDataObject;

    /// <summary>
    /// Name of object. Restricted to a-Z, 0-9, '(', ')', '_', '-' and '.'.
    /// </summary>
    const char* objectName;

} PlayFabDataSetObject;

/// <summary>
/// PlayFabDataSetObjectInfo data model.
/// </summary>
typedef struct PlayFabDataSetObjectInfo
{
    /// <summary>
    /// (Optional) Name of the object.
    /// </summary>
    const char* objectName;

    /// <summary>
    /// (Optional) Optional reason to explain why the operation was the result that it was.
    /// </summary>
    const char* operationReason;

    /// <summary>
    /// (Optional) Indicates which operation was completed, either Created, Updated, Deleted or None.
    /// </summary>
    PlayFabDataOperationTypes const* setResult;

} PlayFabDataSetObjectInfo;

/// <summary>
/// PlayFabDataSetObjectsRequest data model. Sets JSON objects on the requested entity profile. May include
/// a version number to be used to perform optimistic concurrency operations during update. If the current
/// version differs from the version in the request the request will be ignored. If no version is set
/// on the request then the value will always be updated if the values differ. Using the version value
/// does not guarantee a write though, ConcurrentEditError may still occur if multiple clients are attempting
/// to update the same profile. . Request object for PlayFabDataSetObjectsAsync.
/// </summary>
typedef struct PlayFabDataSetObjectsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) Optional field used for concurrency control. By specifying the previously returned
    /// value of ProfileVersion from GetProfile API, you can ensure that the object set will only be performed
    /// if the profile has not been updated by any other clients since the version you last loaded.
    /// </summary>
    int32_t const* expectedProfileVersion;

    /// <summary>
    /// Collection of objects to set on the profile.
    /// </summary>
    PlayFabDataSetObject const* const* objects;

    /// <summary>
    /// Count of objects
    /// </summary>
    uint32_t objectsCount;

} PlayFabDataSetObjectsRequest;

/// <summary>
/// PlayFabDataSetObjectsResponse data model. Result payload for PlayFabDataSetObjectsAsync.
/// </summary>
typedef struct PlayFabDataSetObjectsResponse
{
    /// <summary>
    /// New version of the entity profile.
    /// </summary>
    int32_t profileVersion;

    /// <summary>
    /// (Optional) New version of the entity profile.
    /// </summary>
    PlayFabDataSetObjectInfo const* const* setResults;

    /// <summary>
    /// Count of setResults
    /// </summary>
    uint32_t setResultsCount;

} PlayFabDataSetObjectsResponse;

/// <summary>
/// Dictionary entry for an associative array with PlayFabDataGetFileMetadata values.
/// </summary>
typedef struct PlayFabDataGetFileMetadataDictionaryEntry
{
    const char* key;
    PlayFabDataGetFileMetadata* value;
} PlayFabDataGetFileMetadataDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabDataObjectResult values.
/// </summary>
typedef struct PlayFabDataObjectResultDictionaryEntry
{
    const char* key;
    PlayFabDataObjectResult* value;
} PlayFabDataObjectResultDictionaryEntry;

#pragma pop_macro("IN")

}
