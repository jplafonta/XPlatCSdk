#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenPlayerDataManagementTests.h"
#include "XAsyncHelper.h"

uint32_t g_PlayerDataManagementTestIndex = 1;

namespace PlayFabUnit
{

void AutoGenPlayerDataManagementTests::LogCreatePlayerStatisticDefinitionRequest( PlayFab::PlayerDataManagementModels::CreatePlayerStatisticDefinitionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementCreatePlayerStatisticDefinitionRequest struct:
    // request->aggregationMethod: PFPlayerDataManagementStatisticAggregationMethod const*
    ss << "  aggregationMethod " << request->aggregationMethod; Log(ss); // Class: PFPlayerDataManagementStatisticAggregationMethod     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  versionChangeInterval " << request->versionChangeInterval; Log(ss); // Class: PFPlayerDataManagementStatisticResetIntervalOption 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementCreatePlayerStatisticDefinitionResult(PFPlayerDataManagementCreatePlayerStatisticDefinitionResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementCreatePlayerStatisticDefinitionResult
    ss << "  statistic " << result->statistic; Log(ss); // Class: PFPlayerDataManagementPlayerStatisticDefinition 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogGetDataReportRequest( PlayFab::PlayerDataManagementModels::GetDataReportRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementGetDataReportRequest struct:
    // request->day: int32_t
    ss << "  day " << request->day; Log(ss); // Class: int32_t 
    ss << "  month " << request->month; Log(ss); // Class: int32_t 
    if( request->reportName ) { ss << "  reportName " << request->reportName; Log(ss); } else { ss << "  reportName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  year " << request->year; Log(ss); // Class: int32_t 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementGetDataReportResult(PFPlayerDataManagementGetDataReportResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementGetDataReportResult
    if( result->downloadUrl ) { ss << "  downloadUrl " << result->downloadUrl; Log(ss); } else { ss << "  downloadUrl = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementGetPlayerStatisticDefinitionsResult(PFPlayerDataManagementGetPlayerStatisticDefinitionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementGetPlayerStatisticDefinitionsResult    
    ss << "  statisticsCount " << result->statisticsCount; Log(ss);

    // PFPlayerDataManagementPlayerStatisticDefinition
    for( uint32_t i=0; i<result->statisticsCount; i++ )
    {
            ss << "  result->statistics[" << i << "]:" << result->statistics[i]; Log(ss); // PFPlayerDataManagementPlayerStatisticDefinition
    } 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogGetPlayerStatisticVersionsRequest( PlayFab::PlayerDataManagementModels::GetPlayerStatisticVersionsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementGetPlayerStatisticVersionsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementGetPlayerStatisticVersionsResult(PFPlayerDataManagementGetPlayerStatisticVersionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementGetPlayerStatisticVersionsResult    
    ss << "  statisticVersionsCount " << result->statisticVersionsCount; Log(ss);

    // PFPlayerDataManagementPlayerStatisticVersion
    for( uint32_t i=0; i<result->statisticVersionsCount; i++ )
    {
            ss << "  result->statisticVersions[" << i << "]:" << result->statisticVersions[i]; Log(ss); // PFPlayerDataManagementPlayerStatisticVersion
    } 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogGetUserDataRequest( PlayFab::PlayerDataManagementModels::GetUserDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementGetUserDataRequest struct:
    // request->ifChangedFromDataVersion: uint32_t const*
    ss << "  ifChangedFromDataVersion " << request->ifChangedFromDataVersion; Log(ss); // Class: uint32_t     
    ss << "  keysCount " << request->keysCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysCount; i++ )
    {
            ss << "  request->keys[" << i << "]:" << request->keys[i]; Log(ss); // const char*
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementAdminGetUserDataResult(PFPlayerDataManagementAdminGetUserDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogIncrementPlayerStatisticVersionRequest( PlayFab::PlayerDataManagementModels::IncrementPlayerStatisticVersionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementIncrementPlayerStatisticVersionRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementIncrementPlayerStatisticVersionResult(PFPlayerDataManagementIncrementPlayerStatisticVersionResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementIncrementPlayerStatisticVersionResult
    ss << "  statisticVersion " << result->statisticVersion; Log(ss); // Class: PFPlayerDataManagementPlayerStatisticVersion 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogRefundPurchaseRequest( PlayFab::PlayerDataManagementModels::RefundPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementRefundPurchaseRequest struct:
    // request->orderId: const char*
    if( request->orderId ) { ss << "  orderId " << request->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->reason ) { ss << "  reason " << request->reason; Log(ss); } else { ss << "  reason = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementRefundPurchaseResponse(PFPlayerDataManagementRefundPurchaseResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementRefundPurchaseResponse
    if( result->purchaseStatus ) { ss << "  purchaseStatus " << result->purchaseStatus; Log(ss); } else { ss << "  purchaseStatus = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogResetUserStatisticsRequest( PlayFab::PlayerDataManagementModels::ResetUserStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementResetUserStatisticsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenPlayerDataManagementTests::LogResolvePurchaseDisputeRequest( PlayFab::PlayerDataManagementModels::ResolvePurchaseDisputeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementResolvePurchaseDisputeRequest struct:
    // request->orderId: const char*
    if( request->orderId ) { ss << "  orderId " << request->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  outcome " << request->outcome; Log(ss); // Class: PFPlayerDataManagementResolutionOutcome 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->reason ) { ss << "  reason " << request->reason; Log(ss); } else { ss << "  reason = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementResolvePurchaseDisputeResponse(PFPlayerDataManagementResolvePurchaseDisputeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementResolvePurchaseDisputeResponse
    if( result->purchaseStatus ) { ss << "  purchaseStatus " << result->purchaseStatus; Log(ss); } else { ss << "  purchaseStatus = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogUpdatePlayerStatisticDefinitionRequest( PlayFab::PlayerDataManagementModels::UpdatePlayerStatisticDefinitionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementUpdatePlayerStatisticDefinitionRequest struct:
    // request->aggregationMethod: PFPlayerDataManagementStatisticAggregationMethod const*
    ss << "  aggregationMethod " << request->aggregationMethod; Log(ss); // Class: PFPlayerDataManagementStatisticAggregationMethod 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  versionChangeInterval " << request->versionChangeInterval; Log(ss); // Class: PFPlayerDataManagementStatisticResetIntervalOption 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementUpdatePlayerStatisticDefinitionResult(PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementUpdatePlayerStatisticDefinitionResult
    ss << "  statistic " << result->statistic; Log(ss); // Class: PFPlayerDataManagementPlayerStatisticDefinition 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogAdminUpdateUserDataRequest( PlayFab::PlayerDataManagementModels::AdminUpdateUserDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementUpdateUserDataResult(PFPlayerDataManagementUpdateUserDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementUpdateUserDataResult
    ss << "  dataVersion " << result->dataVersion; Log(ss); // Class: uint32_t 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogUpdateUserInternalDataRequest( PlayFab::PlayerDataManagementModels::UpdateUserInternalDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementUpdateUserInternalDataRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    }     
    ss << "  dataCount " << request->dataCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->dataCount; i++ )
    {
            ss << "  request->data[" << i << "]:" << request->data[i].key << "=" << request->data[i].value; Log(ss);
            
    }     
    ss << "  keysToRemoveCount " << request->keysToRemoveCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysToRemoveCount; i++ )
    {
            ss << "  request->keysToRemove[" << i << "]:" << request->keysToRemove[i]; Log(ss); // const char*
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenPlayerDataManagementTests::LogClientGetFriendLeaderboardRequest( PlayFab::PlayerDataManagementModels::ClientGetFriendLeaderboardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementGetLeaderboardResult(PFPlayerDataManagementGetLeaderboardResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementGetLeaderboardResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PFPlayerDataManagementPlayerLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
            ss << "  result->leaderboard[" << i << "]:" << result->leaderboard[i]; Log(ss); // PFPlayerDataManagementPlayerLeaderboardEntry
    } 
    ss << "  nextReset " << result->nextReset; Log(ss); // Class: time_t 
    ss << "  version " << result->version; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogGetFriendLeaderboardAroundPlayerRequest( PlayFab::PlayerDataManagementModels::GetFriendLeaderboardAroundPlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  includeFacebookFriends " << request->includeFacebookFriends; Log(ss); // Class: bool 
    ss << "  includeSteamFriends " << request->includeSteamFriends; Log(ss); // Class: bool 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PFPlayerProfileViewConstraints 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 
    if( request->xboxToken ) { ss << "  xboxToken " << request->xboxToken; Log(ss); } else { ss << "  xboxToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult(PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementGetFriendLeaderboardAroundPlayerResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PFPlayerDataManagementPlayerLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
            ss << "  result->leaderboard[" << i << "]:" << result->leaderboard[i]; Log(ss); // PFPlayerDataManagementPlayerLeaderboardEntry
    } 
    ss << "  nextReset " << result->nextReset; Log(ss); // Class: time_t 
    ss << "  version " << result->version; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogGetLeaderboardRequest( PlayFab::PlayerDataManagementModels::GetLeaderboardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementGetLeaderboardRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PFPlayerProfileViewConstraints 
    ss << "  startPosition " << request->startPosition; Log(ss); // Class: int32_t 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

void AutoGenPlayerDataManagementTests::LogGetLeaderboardAroundPlayerRequest( PlayFab::PlayerDataManagementModels::GetLeaderboardAroundPlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementGetLeaderboardAroundPlayerRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PFPlayerProfileViewConstraints 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementGetLeaderboardAroundPlayerResult(PFPlayerDataManagementGetLeaderboardAroundPlayerResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementGetLeaderboardAroundPlayerResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PFPlayerDataManagementPlayerLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
            ss << "  result->leaderboard[" << i << "]:" << result->leaderboard[i]; Log(ss); // PFPlayerDataManagementPlayerLeaderboardEntry
    } 
    ss << "  nextReset " << result->nextReset; Log(ss); // Class: time_t 
    ss << "  version " << result->version; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogClientGetPlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ClientGetPlayerStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementClientGetPlayerStatisticsResult(PFPlayerDataManagementClientGetPlayerStatisticsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementClientGetUserDataResult(PFPlayerDataManagementClientGetUserDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogClientUpdatePlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ClientUpdatePlayerStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerDataManagementTests::LogClientUpdateUserDataRequest( PlayFab::PlayerDataManagementModels::ClientUpdateUserDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerDataManagementTests::LogServerGetFriendLeaderboardRequest( PlayFab::PlayerDataManagementModels::ServerGetFriendLeaderboardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerDataManagementTests::LogGetLeaderboardAroundUserRequest( PlayFab::PlayerDataManagementModels::GetLeaderboardAroundUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementGetLeaderboardAroundUserRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PFPlayerProfileViewConstraints 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementGetLeaderboardAroundUserResult(PFPlayerDataManagementGetLeaderboardAroundUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementGetLeaderboardAroundUserResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PFPlayerDataManagementPlayerLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
            ss << "  result->leaderboard[" << i << "]:" << result->leaderboard[i]; Log(ss); // PFPlayerDataManagementPlayerLeaderboardEntry
    } 
    ss << "  nextReset " << result->nextReset; Log(ss); // Class: time_t 
    ss << "  version " << result->version; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogGetPlayerCombinedInfoRequest( PlayFab::GetPlayerCombinedInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerDataManagementGetPlayerCombinedInfoRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  infoRequestParameters " << request->infoRequestParameters; Log(ss); // Class: PFGetPlayerCombinedInfoRequestParams 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerDataManagementTests::LogPFGetPlayerCombinedInfoResult(PFGetPlayerCombinedInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerDataManagementGetPlayerCombinedInfoResult
    ss << "  infoResultPayload " << result->infoResultPayload; Log(ss); // Class: PFGetPlayerCombinedInfoResultPayload 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogServerGetPlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ServerGetPlayerStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementServerGetPlayerStatisticsResult(PFPlayerDataManagementServerGetPlayerStatisticsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

HRESULT AutoGenPlayerDataManagementTests::LogPFPlayerDataManagementServerGetUserDataResult(PFPlayerDataManagementServerGetUserDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenPlayerDataManagementTests::LogServerUpdatePlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ServerUpdatePlayerStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerDataManagementTests::LogServerUpdateUserDataRequest( PlayFab::PlayerDataManagementModels::ServerUpdateUserDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerDataManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

 

}
