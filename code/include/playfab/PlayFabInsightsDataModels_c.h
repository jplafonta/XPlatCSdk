#pragma once

#include <playfab/PlayFabBaseModel_c.h>

#pragma push_macro("IN")
#undef IN

// Insights enums

// Insights structs
typedef struct PlayFabInsightsInsightsEmptyRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;

} PlayFabInsightsInsightsEmptyRequest;

typedef struct PlayFabInsightsInsightsPerformanceLevel
{
    int32_t activeEventExports;
    int32_t cacheSizeMB;
    int32_t concurrency;
    double creditsPerMinute;
    int32_t eventsPerSecond;
    int32_t level;
    int32_t maxMemoryPerQueryMB;
    int32_t virtualCpuCores;

} PlayFabInsightsInsightsPerformanceLevel;

typedef struct PlayFabInsightsInsightsGetLimitsResponse
{
    int32_t defaultPerformanceLevel;
    int32_t defaultStorageRetentionDays;
    int32_t storageMaxRetentionDays;
    int32_t storageMinRetentionDays;
    PF_ARRAY PlayFabInsightsInsightsPerformanceLevel** subMeters;
    PF_COLLECTION_COUNT uint32_t subMetersCount;

} PlayFabInsightsInsightsGetLimitsResponse;

typedef struct PlayFabInsightsInsightsGetOperationStatusResponse
{
    const char* message;
    time_t operationCompletedTime;
    const char* operationId;
    time_t operationLastUpdated;
    time_t operationStartedTime;
    const char* operationType;
    int32_t operationValue;
    const char* status;

} PlayFabInsightsInsightsGetOperationStatusResponse;

typedef struct PlayFabInsightsInsightsGetDetailsResponse
{
    uint32_t dataUsageMb;
    const char* errorMessage;
    PF_OPTIONAL PlayFabInsightsInsightsGetLimitsResponse* limits;
    PF_ARRAY PlayFabInsightsInsightsGetOperationStatusResponse** pendingOperations;
    PF_COLLECTION_COUNT uint32_t pendingOperationsCount;
    int32_t performanceLevel;
    int32_t retentionDays;

} PlayFabInsightsInsightsGetDetailsResponse;

typedef struct PlayFabInsightsInsightsGetOperationStatusRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* operationId;

} PlayFabInsightsInsightsGetOperationStatusRequest;

typedef struct PlayFabInsightsInsightsGetPendingOperationsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* operationType;

} PlayFabInsightsInsightsGetPendingOperationsRequest;

typedef struct PlayFabInsightsInsightsGetPendingOperationsResponse
{
    PF_ARRAY PlayFabInsightsInsightsGetOperationStatusResponse** pendingOperations;
    PF_COLLECTION_COUNT uint32_t pendingOperationsCount;

} PlayFabInsightsInsightsGetPendingOperationsResponse;

typedef struct PlayFabInsightsInsightsOperationResponse
{
    const char* message;
    const char* operationId;
    const char* operationType;

} PlayFabInsightsInsightsOperationResponse;

typedef struct PlayFabInsightsInsightsSetPerformanceRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t performanceLevel;

} PlayFabInsightsInsightsSetPerformanceRequest;

typedef struct PlayFabInsightsInsightsSetStorageRetentionRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t retentionDays;

} PlayFabInsightsInsightsSetStorageRetentionRequest;


// Insights dictionary entry structs

#pragma pop_macro("IN")
