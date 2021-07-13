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
/// PlayFabInsightsInsightsEmptyRequest data model. Request object for PlayFabInsightsGetDetailsAsync
/// and PlayFabInsightsGetLimitsAsync.
/// </summary>
typedef struct PlayFabInsightsInsightsEmptyRequest
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

} PlayFabInsightsInsightsEmptyRequest;

/// <summary>
/// PlayFabInsightsInsightsPerformanceLevel data model.
/// </summary>
typedef struct PlayFabInsightsInsightsPerformanceLevel
{
    /// <summary>
    /// Number of allowed active event exports.
    /// </summary>
    int32_t activeEventExports;

    /// <summary>
    /// Maximum cache size.
    /// </summary>
    int32_t cacheSizeMB;

    /// <summary>
    /// Maximum number of concurrent queries.
    /// </summary>
    int32_t concurrency;

    /// <summary>
    /// Number of Insights credits consumed per minute.
    /// </summary>
    double creditsPerMinute;

    /// <summary>
    /// Maximum events per second.
    /// </summary>
    int32_t eventsPerSecond;

    /// <summary>
    /// Performance level.
    /// </summary>
    int32_t level;

    /// <summary>
    /// Maximum amount of memory allowed per query.
    /// </summary>
    int32_t maxMemoryPerQueryMB;

    /// <summary>
    /// Amount of compute power allocated for queries and operations.
    /// </summary>
    int32_t virtualCpuCores;

} PlayFabInsightsInsightsPerformanceLevel;

/// <summary>
/// PlayFabInsightsInsightsGetLimitsResponse data model. Result payload for PlayFabInsightsGetLimitsAsync.
/// </summary>
typedef struct PlayFabInsightsInsightsGetLimitsResponse
{
    /// <summary>
    /// Default Insights performance level.
    /// </summary>
    int32_t defaultPerformanceLevel;

    /// <summary>
    /// Default Insights data storage retention days.
    /// </summary>
    int32_t defaultStorageRetentionDays;

    /// <summary>
    /// Maximum allowed data storage retention days.
    /// </summary>
    int32_t storageMaxRetentionDays;

    /// <summary>
    /// Minimum allowed data storage retention days.
    /// </summary>
    int32_t storageMinRetentionDays;

    /// <summary>
    /// (Optional) List of Insights submeter limits for the allowed performance levels.
    /// </summary>
    PlayFabInsightsInsightsPerformanceLevel const* const* subMeters;

    /// <summary>
    /// Count of subMeters
    /// </summary>
    uint32_t subMetersCount;

} PlayFabInsightsInsightsGetLimitsResponse;

/// <summary>
/// PlayFabInsightsInsightsGetOperationStatusResponse data model. Result payload for PlayFabInsightsGetOperationStatusAsync.
/// </summary>
typedef struct PlayFabInsightsInsightsGetOperationStatusResponse
{
    /// <summary>
    /// (Optional) Optional message related to the operation details.
    /// </summary>
    const char* message;

    /// <summary>
    /// Time the operation was completed.
    /// </summary>
    time_t operationCompletedTime;

    /// <summary>
    /// (Optional) Id of the Insights operation.
    /// </summary>
    const char* operationId;

    /// <summary>
    /// Time the operation status was last updated.
    /// </summary>
    time_t operationLastUpdated;

    /// <summary>
    /// Time the operation started.
    /// </summary>
    time_t operationStartedTime;

    /// <summary>
    /// (Optional) The type of operation, SetPerformance or SetStorageRetention.
    /// </summary>
    const char* operationType;

    /// <summary>
    /// The value requested for the operation.
    /// </summary>
    int32_t operationValue;

    /// <summary>
    /// (Optional) Current status of the operation.
    /// </summary>
    const char* status;

} PlayFabInsightsInsightsGetOperationStatusResponse;

/// <summary>
/// PlayFabInsightsInsightsGetDetailsResponse data model. Result payload for PlayFabInsightsGetDetailsAsync.
/// </summary>
typedef struct PlayFabInsightsInsightsGetDetailsResponse
{
    /// <summary>
    /// Amount of data (in MB) currently used by Insights.
    /// </summary>
    uint32_t dataUsageMb;

    /// <summary>
    /// (Optional) Details of any error that occurred while retrieving Insights details.
    /// </summary>
    const char* errorMessage;

    /// <summary>
    /// (Optional) Allowed range of values for performance level and data storage retention.
    /// </summary>
    PlayFabInsightsInsightsGetLimitsResponse const* limits;

    /// <summary>
    /// (Optional) List of pending Insights operations for the title.
    /// </summary>
    PlayFabInsightsInsightsGetOperationStatusResponse const* const* pendingOperations;

    /// <summary>
    /// Count of pendingOperations
    /// </summary>
    uint32_t pendingOperationsCount;

    /// <summary>
    /// Current Insights performance level setting.
    /// </summary>
    int32_t performanceLevel;

    /// <summary>
    /// Current Insights data storage retention value in days.
    /// </summary>
    int32_t retentionDays;

} PlayFabInsightsInsightsGetDetailsResponse;

/// <summary>
/// PlayFabInsightsInsightsGetOperationStatusRequest data model. Returns the current status for the requested
/// operation id. Request object for PlayFabInsightsGetOperationStatusAsync.
/// </summary>
typedef struct PlayFabInsightsInsightsGetOperationStatusRequest
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
    /// (Optional) Id of the Insights operation.
    /// </summary>
    const char* operationId;

} PlayFabInsightsInsightsGetOperationStatusRequest;

/// <summary>
/// PlayFabInsightsInsightsGetPendingOperationsRequest data model. Returns a list of operations that
/// are in the pending state for the requested operation type. Request object for PlayFabInsightsGetPendingOperationsAsync.
/// </summary>
typedef struct PlayFabInsightsInsightsGetPendingOperationsRequest
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
    /// (Optional) The type of pending operations requested, or blank for all operation types.
    /// </summary>
    const char* operationType;

} PlayFabInsightsInsightsGetPendingOperationsRequest;

/// <summary>
/// PlayFabInsightsInsightsGetPendingOperationsResponse data model. Result payload for PlayFabInsightsGetPendingOperationsAsync.
/// </summary>
typedef struct PlayFabInsightsInsightsGetPendingOperationsResponse
{
    /// <summary>
    /// (Optional) List of pending Insights operations.
    /// </summary>
    PlayFabInsightsInsightsGetOperationStatusResponse const* const* pendingOperations;

    /// <summary>
    /// Count of pendingOperations
    /// </summary>
    uint32_t pendingOperationsCount;

} PlayFabInsightsInsightsGetPendingOperationsResponse;

/// <summary>
/// PlayFabInsightsInsightsOperationResponse data model. Result payload for PlayFabInsightsSetPerformanceAsync
/// and PlayFabInsightsSetStorageRetentionAsync.
/// </summary>
typedef struct PlayFabInsightsInsightsOperationResponse
{
    /// <summary>
    /// (Optional) Optional message related to the operation details.
    /// </summary>
    const char* message;

    /// <summary>
    /// (Optional) Id of the Insights operation.
    /// </summary>
    const char* operationId;

    /// <summary>
    /// (Optional) The type of operation, SetPerformance or SetStorageRetention.
    /// </summary>
    const char* operationType;

} PlayFabInsightsInsightsOperationResponse;

/// <summary>
/// PlayFabInsightsInsightsSetPerformanceRequest data model. Sets the performance level to the requested
/// value. Use the GetLimits method to get the allowed values. Request object for PlayFabInsightsSetPerformanceAsync.
/// </summary>
typedef struct PlayFabInsightsInsightsSetPerformanceRequest
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
    /// The Insights performance level to apply to the title.
    /// </summary>
    int32_t performanceLevel;

} PlayFabInsightsInsightsSetPerformanceRequest;

/// <summary>
/// PlayFabInsightsInsightsSetStorageRetentionRequest data model. Sets the data storage retention to
/// the requested value. Use the GetLimits method to get the range of allowed values. Request object
/// for PlayFabInsightsSetStorageRetentionAsync.
/// </summary>
typedef struct PlayFabInsightsInsightsSetStorageRetentionRequest
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
    /// The Insights data storage retention value (in days) to apply to the title.
    /// </summary>
    int32_t retentionDays;

} PlayFabInsightsInsightsSetStorageRetentionRequest;

#pragma pop_macro("IN")

}
