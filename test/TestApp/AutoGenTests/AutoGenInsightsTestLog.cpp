#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenInsightsTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

uint32_t g_testIndex = 1;

namespace PlayFabUnit
{

void AutoGenInsightsTests::LogPlayFabInsightsInsightsEmptyRequest( PlayFab::InsightsModels::InsightsEmptyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabInsightsInsightsEmptyRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenInsightsTests::LogPlayFabInsightsInsightsGetDetailsResponse( PlayFabInsightsInsightsGetDetailsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabInsightsInsightsGetDetailsResponse
    ss << "  dataUsageMb " << result->dataUsageMb; Log(ss); // Class: uint32_t 
    if( result->errorMessage ) { ss << "  errorMessage " << result->errorMessage; Log(ss); } else { ss << "  errorMessage = nullptr"; Log(ss); } // Class: const char* 
    ss << "  limits " << result->limits; Log(ss); // Class: PlayFabInsightsInsightsGetLimitsResponse     
    ss << "  pendingOperationsCount " << result->pendingOperationsCount; Log(ss);

    // PlayFabInsightsInsightsGetOperationStatusResponse
    for( uint32_t i=0; i<result->pendingOperationsCount; i++ )
    {
        if( result->pendingOperations[i]->message ) { ss << "  pendingOperations["<<i<<"]->message " << result->pendingOperations[i]->message; Log(ss); } else { ss << "  pendingOperations["<<i<<"]->message = nullptr"; Log(ss); } // Class: const char* 
        ss << "  pendingOperations["<<i<<"]->operationCompletedTime " << result->pendingOperations[i]->operationCompletedTime; Log(ss); // Class: time_t 
        if( result->pendingOperations[i]->operationId ) { ss << "  pendingOperations["<<i<<"]->operationId " << result->pendingOperations[i]->operationId; Log(ss); } else { ss << "  pendingOperations["<<i<<"]->operationId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  pendingOperations["<<i<<"]->operationLastUpdated " << result->pendingOperations[i]->operationLastUpdated; Log(ss); // Class: time_t 
        ss << "  pendingOperations["<<i<<"]->operationStartedTime " << result->pendingOperations[i]->operationStartedTime; Log(ss); // Class: time_t 
        if( result->pendingOperations[i]->operationType ) { ss << "  pendingOperations["<<i<<"]->operationType " << result->pendingOperations[i]->operationType; Log(ss); } else { ss << "  pendingOperations["<<i<<"]->operationType = nullptr"; Log(ss); } // Class: const char* 
        ss << "  pendingOperations["<<i<<"]->operationValue " << result->pendingOperations[i]->operationValue; Log(ss); // Class: int32_t 
        if( result->pendingOperations[i]->status ) { ss << "  pendingOperations["<<i<<"]->status " << result->pendingOperations[i]->status; Log(ss); } else { ss << "  pendingOperations["<<i<<"]->status = nullptr"; Log(ss); } // Class: const char* 
    } 
    ss << "  performanceLevel " << result->performanceLevel; Log(ss); // Class: int32_t 
    ss << "  retentionDays " << result->retentionDays; Log(ss); // Class: int32_t 
    return S_OK;
}

HRESULT AutoGenInsightsTests::LogPlayFabInsightsInsightsGetLimitsResponse( PlayFabInsightsInsightsGetLimitsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabInsightsInsightsGetLimitsResponse
    ss << "  defaultPerformanceLevel " << result->defaultPerformanceLevel; Log(ss); // Class: int32_t 
    ss << "  defaultStorageRetentionDays " << result->defaultStorageRetentionDays; Log(ss); // Class: int32_t 
    ss << "  storageMaxRetentionDays " << result->storageMaxRetentionDays; Log(ss); // Class: int32_t 
    ss << "  storageMinRetentionDays " << result->storageMinRetentionDays; Log(ss); // Class: int32_t     
    ss << "  subMetersCount " << result->subMetersCount; Log(ss);

    // PlayFabInsightsInsightsPerformanceLevel
    for( uint32_t i=0; i<result->subMetersCount; i++ )
    {
        ss << "  subMeters["<<i<<"]->activeEventExports " << result->subMeters[i]->activeEventExports; Log(ss); // Class: int32_t 
        ss << "  subMeters["<<i<<"]->cacheSizeMB " << result->subMeters[i]->cacheSizeMB; Log(ss); // Class: int32_t 
        ss << "  subMeters["<<i<<"]->concurrency " << result->subMeters[i]->concurrency; Log(ss); // Class: int32_t 
        ss << "  subMeters["<<i<<"]->creditsPerMinute " << result->subMeters[i]->creditsPerMinute; Log(ss); // Class: double 
        ss << "  subMeters["<<i<<"]->eventsPerSecond " << result->subMeters[i]->eventsPerSecond; Log(ss); // Class: int32_t 
        ss << "  subMeters["<<i<<"]->level " << result->subMeters[i]->level; Log(ss); // Class: int32_t 
        ss << "  subMeters["<<i<<"]->maxMemoryPerQueryMB " << result->subMeters[i]->maxMemoryPerQueryMB; Log(ss); // Class: int32_t 
        ss << "  subMeters["<<i<<"]->virtualCpuCores " << result->subMeters[i]->virtualCpuCores; Log(ss); // Class: int32_t 
    } 
    return S_OK;
}

void AutoGenInsightsTests::LogPlayFabInsightsInsightsGetOperationStatusRequest( PlayFab::InsightsModels::InsightsGetOperationStatusRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabInsightsInsightsGetOperationStatusRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->operationId ) { ss << "  operationId " << request->operationId; Log(ss); } else { ss << "  operationId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenInsightsTests::LogPlayFabInsightsInsightsGetOperationStatusResponse( PlayFabInsightsInsightsGetOperationStatusResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabInsightsInsightsGetOperationStatusResponse
    if( result->message ) { ss << "  message " << result->message; Log(ss); } else { ss << "  message = nullptr"; Log(ss); } // Class: const char* 
    ss << "  operationCompletedTime " << result->operationCompletedTime; Log(ss); // Class: time_t 
    if( result->operationId ) { ss << "  operationId " << result->operationId; Log(ss); } else { ss << "  operationId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  operationLastUpdated " << result->operationLastUpdated; Log(ss); // Class: time_t 
    ss << "  operationStartedTime " << result->operationStartedTime; Log(ss); // Class: time_t 
    if( result->operationType ) { ss << "  operationType " << result->operationType; Log(ss); } else { ss << "  operationType = nullptr"; Log(ss); } // Class: const char* 
    ss << "  operationValue " << result->operationValue; Log(ss); // Class: int32_t 
    if( result->status ) { ss << "  status " << result->status; Log(ss); } else { ss << "  status = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenInsightsTests::LogPlayFabInsightsInsightsGetPendingOperationsRequest( PlayFab::InsightsModels::InsightsGetPendingOperationsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabInsightsInsightsGetPendingOperationsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->operationType ) { ss << "  operationType " << request->operationType; Log(ss); } else { ss << "  operationType = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenInsightsTests::LogPlayFabInsightsInsightsGetPendingOperationsResponse( PlayFabInsightsInsightsGetPendingOperationsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabInsightsInsightsGetPendingOperationsResponse    
    ss << "  pendingOperationsCount " << result->pendingOperationsCount; Log(ss);

    // PlayFabInsightsInsightsGetOperationStatusResponse
    for( uint32_t i=0; i<result->pendingOperationsCount; i++ )
    {
        if( result->pendingOperations[i]->message ) { ss << "  pendingOperations["<<i<<"]->message " << result->pendingOperations[i]->message; Log(ss); } else { ss << "  pendingOperations["<<i<<"]->message = nullptr"; Log(ss); } // Class: const char* 
        ss << "  pendingOperations["<<i<<"]->operationCompletedTime " << result->pendingOperations[i]->operationCompletedTime; Log(ss); // Class: time_t 
        if( result->pendingOperations[i]->operationId ) { ss << "  pendingOperations["<<i<<"]->operationId " << result->pendingOperations[i]->operationId; Log(ss); } else { ss << "  pendingOperations["<<i<<"]->operationId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  pendingOperations["<<i<<"]->operationLastUpdated " << result->pendingOperations[i]->operationLastUpdated; Log(ss); // Class: time_t 
        ss << "  pendingOperations["<<i<<"]->operationStartedTime " << result->pendingOperations[i]->operationStartedTime; Log(ss); // Class: time_t 
        if( result->pendingOperations[i]->operationType ) { ss << "  pendingOperations["<<i<<"]->operationType " << result->pendingOperations[i]->operationType; Log(ss); } else { ss << "  pendingOperations["<<i<<"]->operationType = nullptr"; Log(ss); } // Class: const char* 
        ss << "  pendingOperations["<<i<<"]->operationValue " << result->pendingOperations[i]->operationValue; Log(ss); // Class: int32_t 
        if( result->pendingOperations[i]->status ) { ss << "  pendingOperations["<<i<<"]->status " << result->pendingOperations[i]->status; Log(ss); } else { ss << "  pendingOperations["<<i<<"]->status = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenInsightsTests::LogPlayFabInsightsInsightsSetPerformanceRequest( PlayFab::InsightsModels::InsightsSetPerformanceRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabInsightsInsightsSetPerformanceRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  performanceLevel " << request->performanceLevel; Log(ss); // Class: int32_t 

}

HRESULT AutoGenInsightsTests::LogPlayFabInsightsInsightsOperationResponse( PlayFabInsightsInsightsOperationResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabInsightsInsightsOperationResponse
    if( result->message ) { ss << "  message " << result->message; Log(ss); } else { ss << "  message = nullptr"; Log(ss); } // Class: const char* 
    if( result->operationId ) { ss << "  operationId " << result->operationId; Log(ss); } else { ss << "  operationId = nullptr"; Log(ss); } // Class: const char* 
    if( result->operationType ) { ss << "  operationType " << result->operationType; Log(ss); } else { ss << "  operationType = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenInsightsTests::LogPlayFabInsightsInsightsSetStorageRetentionRequest( PlayFab::InsightsModels::InsightsSetStorageRetentionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabInsightsInsightsSetStorageRetentionRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  retentionDays " << request->retentionDays; Log(ss); // Class: int32_t 

}

 

}
