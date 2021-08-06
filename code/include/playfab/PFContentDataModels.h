// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFSharedDataModels.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// PFContentDeleteContentRequest data model.
/// </summary>
typedef struct PFContentDeleteContentRequest
{
    /// <summary>
    /// Key of the content item to be deleted.
    /// </summary>
    const char* key;

} PFContentDeleteContentRequest;

/// <summary>
/// PFContentGetContentListRequest data model.
/// </summary>
typedef struct PFContentGetContentListRequest
{
    /// <summary>
    /// (Optional) Limits the response to keys that begin with the specified prefix. You can use prefixes
    /// to list contents under a folder, or for a specified version, etc.
    /// </summary>
    const char* prefix;

} PFContentGetContentListRequest;

/// <summary>
/// PFContentContentInfo data model.
/// </summary>
typedef struct PFContentContentInfo
{
    /// <summary>
    /// (Optional) Key of the content.
    /// </summary>
    const char* key;

    /// <summary>
    /// Last modified time.
    /// </summary>
    time_t lastModified;

    /// <summary>
    /// Size of the content in bytes.
    /// </summary>
    double size;

} PFContentContentInfo;

/// <summary>
/// PFContentGetContentListResult data model.
/// </summary>
typedef struct PFContentGetContentListResult
{
    /// <summary>
    /// (Optional) List of content items.
    /// </summary>
    PFContentContentInfo const* const* contents;

    /// <summary>
    /// Count of contents
    /// </summary>
    uint32_t contentsCount;

    /// <summary>
    /// Number of content items returned. We currently have a maximum of 1000 items limit.
    /// </summary>
    int32_t itemCount;

    /// <summary>
    /// The total size of listed contents in bytes.
    /// </summary>
    uint32_t totalSize;

} PFContentGetContentListResult;

/// <summary>
/// PFContentGetContentUploadUrlRequest data model.
/// </summary>
typedef struct PFContentGetContentUploadUrlRequest
{
    /// <summary>
    /// (Optional) A standard MIME type describing the format of the contents. The same MIME type has
    /// to be set in the header when uploading the content. If not specified, the MIME type is 'binary/octet-stream'
    /// by default.
    /// </summary>
    const char* contentType;

    /// <summary>
    /// Key of the content item to upload, usually formatted as a path, e.g. images/a.png.
    /// </summary>
    const char* key;

} PFContentGetContentUploadUrlRequest;

/// <summary>
/// PFContentGetContentUploadUrlResult data model.
/// </summary>
typedef struct PFContentGetContentUploadUrlResult
{
    /// <summary>
    /// (Optional) URL for uploading content via HTTP PUT method. The URL requires the 'x-ms-blob-type'
    /// header to have the value 'BlockBlob'. The URL will expire in approximately one hour.
    /// </summary>
    const char* uRL;

} PFContentGetContentUploadUrlResult;

/// <summary>
/// PFContentGetContentDownloadUrlRequest data model.
/// </summary>
typedef struct PFContentGetContentDownloadUrlRequest
{
    /// <summary>
    /// (Optional) HTTP method to fetch item - GET or HEAD. Use HEAD when only fetching metadata. Default
    /// is GET.
    /// </summary>
    const char* httpMethod;

    /// <summary>
    /// Key of the content item to fetch, usually formatted as a path, e.g. images/a.png.
    /// </summary>
    const char* key;

    /// <summary>
    /// (Optional) True to download through CDN. CDN provides higher download bandwidth and lower latency.
    /// However, if you want the latest, non-cached version of the content during development, set this
    /// to false. Default is true.
    /// </summary>
    bool const* thruCDN;

} PFContentGetContentDownloadUrlRequest;

/// <summary>
/// PFContentGetContentDownloadUrlResult data model.
/// </summary>
typedef struct PFContentGetContentDownloadUrlResult
{
    /// <summary>
    /// (Optional) URL for downloading content via HTTP GET or HEAD method. The URL will expire in approximately
    /// one hour.
    /// </summary>
    const char* uRL;

} PFContentGetContentDownloadUrlResult;

#pragma pop_macro("IN")

}
