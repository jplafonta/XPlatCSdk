#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenAdminTests.h"
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

void AutoGenAdminTests::LogPlayFabAdminAbortTaskInstanceRequest( PlayFab::AdminModels::AbortTaskInstanceRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminAbortTaskInstanceRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->taskInstanceId ) { ss << "  taskInstanceId " << request->taskInstanceId; Log(ss); } else { ss << "  taskInstanceId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminAddLocalizedNewsRequest( PlayFab::AdminModels::AddLocalizedNewsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminAddLocalizedNewsRequest struct:
    // request->body: const char*
    if( request->body ) { ss << "  body " << request->body; Log(ss); } else { ss << "  body = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->language ) { ss << "  language " << request->language; Log(ss); } else { ss << "  language = nullptr"; Log(ss); } // Class: const char* 
    if( request->newsId ) { ss << "  newsId " << request->newsId; Log(ss); } else { ss << "  newsId = nullptr"; Log(ss); } // Class: const char* 
    if( request->title ) { ss << "  title " << request->title; Log(ss); } else { ss << "  title = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminAddNewsRequest( PlayFab::AdminModels::AddNewsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminAddNewsRequest struct:
    // request->body: const char*
    if( request->body ) { ss << "  body " << request->body; Log(ss); } else { ss << "  body = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  timestamp " << request->timestamp; Log(ss); // Class: time_t 
    if( request->title ) { ss << "  title " << request->title; Log(ss); } else { ss << "  title = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminAddNewsResult( PlayFabAdminAddNewsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminAddNewsResult
    if( result->newsId ) { ss << "  newsId " << result->newsId; Log(ss); } else { ss << "  newsId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminAddPlayerTagRequest( PlayFab::AdminModels::AddPlayerTagRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminAddPlayerTagRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->tagName ) { ss << "  tagName " << request->tagName; Log(ss); } else { ss << "  tagName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminAddServerBuildRequest( PlayFab::AdminModels::AddServerBuildRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminAddServerBuildRequest struct:
    // request->activeRegions: PlayFabAdminRegion const*
    // request->activeRegionsCount: uint32_t    
    ss << "  activeRegionsCount " << request->activeRegionsCount; Log(ss);

    // PlayFabAdminRegion
    for( uint32_t i=0; i<request->activeRegionsCount; i++ )
    {
        ss << "  request->activeRegions[" << i << "]:" << request->activeRegions[i]; Log(ss); // PlayFabAdminRegion
    } 
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( request->commandLineTemplate ) { ss << "  commandLineTemplate " << request->commandLineTemplate; Log(ss); } else { ss << "  commandLineTemplate = nullptr"; Log(ss); } // Class: const char* 
    if( request->comment ) { ss << "  comment " << request->comment; Log(ss); } else { ss << "  comment = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->executablePath ) { ss << "  executablePath " << request->executablePath; Log(ss); } else { ss << "  executablePath = nullptr"; Log(ss); } // Class: const char* 
    ss << "  maxGamesPerHost " << request->maxGamesPerHost; Log(ss); // Class: int32_t 
    ss << "  minFreeGameSlots " << request->minFreeGameSlots; Log(ss); // Class: int32_t 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminAddServerBuildResult( PlayFabAdminAddServerBuildResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminAddServerBuildResult    
    ss << "  activeRegionsCount " << result->activeRegionsCount; Log(ss);

    // PlayFabAdminRegion
    for( uint32_t i=0; i<result->activeRegionsCount; i++ )
    {
        ss << "  result->activeRegions[" << i << "]:" << result->activeRegions[i]; Log(ss); // PlayFabAdminRegion
    } 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->commandLineTemplate ) { ss << "  commandLineTemplate " << result->commandLineTemplate; Log(ss); } else { ss << "  commandLineTemplate = nullptr"; Log(ss); } // Class: const char* 
    if( result->comment ) { ss << "  comment " << result->comment; Log(ss); } else { ss << "  comment = nullptr"; Log(ss); } // Class: const char* 
    if( result->executablePath ) { ss << "  executablePath " << result->executablePath; Log(ss); } else { ss << "  executablePath = nullptr"; Log(ss); } // Class: const char* 
    ss << "  maxGamesPerHost " << result->maxGamesPerHost; Log(ss); // Class: int32_t 
    ss << "  minFreeGameSlots " << result->minFreeGameSlots; Log(ss); // Class: int32_t 
    ss << "  status " << result->status; Log(ss); // Class: PlayFabAdminGameBuildStatus 
    ss << "  timestamp " << result->timestamp; Log(ss); // Class: time_t 
    if( result->titleId ) { ss << "  titleId " << result->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminAddUserVirtualCurrencyRequest( PlayFab::AdminModels::AddUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminAddUserVirtualCurrencyRequest struct:
    // request->amount: int32_t
    ss << "  amount " << request->amount; Log(ss); // Class: int32_t     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->virtualCurrency ) { ss << "  virtualCurrency " << request->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminModifyUserVirtualCurrencyResult( PlayFabAdminModifyUserVirtualCurrencyResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminModifyUserVirtualCurrencyResult
    ss << "  balance " << result->balance; Log(ss); // Class: int32_t 
    ss << "  balanceChange " << result->balanceChange; Log(ss); // Class: int32_t 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( result->virtualCurrency ) { ss << "  virtualCurrency " << result->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminAddVirtualCurrencyTypesRequest( PlayFab::AdminModels::AddVirtualCurrencyTypesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminAddVirtualCurrencyTypesRequest struct:
    // request->virtualCurrencies: PlayFabAdminVirtualCurrencyData const* const*
    // request->virtualCurrenciesCount: uint32_t    
    ss << "  virtualCurrenciesCount " << request->virtualCurrenciesCount; Log(ss);

    // PlayFabAdminVirtualCurrencyData
    for( uint32_t i=0; i<request->virtualCurrenciesCount; i++ )
    {
        if( request->virtualCurrencies[i]->currencyCode ) { ss << "  virtualCurrencies["<<i<<"]->currencyCode " << request->virtualCurrencies[i]->currencyCode; Log(ss); } else { ss << "  virtualCurrencies["<<i<<"]->currencyCode = nullptr"; Log(ss); } // Class: const char* 
        if( request->virtualCurrencies[i]->displayName ) { ss << "  virtualCurrencies["<<i<<"]->displayName " << request->virtualCurrencies[i]->displayName; Log(ss); } else { ss << "  virtualCurrencies["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  virtualCurrencies["<<i<<"]->initialDeposit " << request->virtualCurrencies[i]->initialDeposit; Log(ss); // Class: int32_t 
        ss << "  virtualCurrencies["<<i<<"]->rechargeMax " << request->virtualCurrencies[i]->rechargeMax; Log(ss); // Class: int32_t 
        ss << "  virtualCurrencies["<<i<<"]->rechargeRate " << request->virtualCurrencies[i]->rechargeRate; Log(ss); // Class: int32_t 
    } 

}

void AutoGenAdminTests::LogPlayFabAdminBanUsersRequest( PlayFab::AdminModels::BanUsersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminBanUsersRequest struct:
    // request->bans: PlayFabAdminBanRequest const* const*
    // request->bansCount: uint32_t    
    ss << "  bansCount " << request->bansCount; Log(ss);

    // PlayFabAdminBanRequest
    for( uint32_t i=0; i<request->bansCount; i++ )
    {
        ss << "  bans["<<i<<"]->durationInHours " << request->bans[i]->durationInHours; Log(ss); // Class: uint32_t 
        if( request->bans[i]->IPAddress ) { ss << "  bans["<<i<<"]->IPAddress " << request->bans[i]->IPAddress; Log(ss); } else { ss << "  bans["<<i<<"]->IPAddress = nullptr"; Log(ss); } // Class: const char* 
        if( request->bans[i]->MACAddress ) { ss << "  bans["<<i<<"]->MACAddress " << request->bans[i]->MACAddress; Log(ss); } else { ss << "  bans["<<i<<"]->MACAddress = nullptr"; Log(ss); } // Class: const char* 
        if( request->bans[i]->playFabId ) { ss << "  bans["<<i<<"]->playFabId " << request->bans[i]->playFabId; Log(ss); } else { ss << "  bans["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( request->bans[i]->reason ) { ss << "  bans["<<i<<"]->reason " << request->bans[i]->reason; Log(ss); } else { ss << "  bans["<<i<<"]->reason = nullptr"; Log(ss); } // Class: const char* 
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminBanUsersResult( PlayFabAdminBanUsersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminBanUsersResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PlayFabAdminBanInfo
    for( uint32_t i=0; i<result->banDataCount; i++ )
    {
        ss << "  banData["<<i<<"]->active " << result->banData[i]->active; Log(ss); // Class: bool 
        if( result->banData[i]->banId ) { ss << "  banData["<<i<<"]->banId " << result->banData[i]->banId; Log(ss); } else { ss << "  banData["<<i<<"]->banId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  banData["<<i<<"]->created " << result->banData[i]->created; Log(ss); // Class: time_t 
        ss << "  banData["<<i<<"]->expires " << result->banData[i]->expires; Log(ss); // Class: time_t 
        if( result->banData[i]->IPAddress ) { ss << "  banData["<<i<<"]->IPAddress " << result->banData[i]->IPAddress; Log(ss); } else { ss << "  banData["<<i<<"]->IPAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->MACAddress ) { ss << "  banData["<<i<<"]->MACAddress " << result->banData[i]->MACAddress; Log(ss); } else { ss << "  banData["<<i<<"]->MACAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->playFabId ) { ss << "  banData["<<i<<"]->playFabId " << result->banData[i]->playFabId; Log(ss); } else { ss << "  banData["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->reason ) { ss << "  banData["<<i<<"]->reason " << result->banData[i]->reason; Log(ss); } else { ss << "  banData["<<i<<"]->reason = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminCheckLimitedEditionItemAvailabilityRequest( PlayFab::AdminModels::CheckLimitedEditionItemAvailabilityRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminCheckLimitedEditionItemAvailabilityRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemId ) { ss << "  itemId " << request->itemId; Log(ss); } else { ss << "  itemId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminCheckLimitedEditionItemAvailabilityResult( PlayFabAdminCheckLimitedEditionItemAvailabilityResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminCheckLimitedEditionItemAvailabilityResult
    ss << "  amount " << result->amount; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminCreateActionsOnPlayerSegmentTaskRequest( PlayFab::AdminModels::CreateActionsOnPlayerSegmentTaskRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->description ) { ss << "  description " << request->description; Log(ss); } else { ss << "  description = nullptr"; Log(ss); } // Class: const char* 
    ss << "  isActive " << request->isActive; Log(ss); // Class: bool 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 
    ss << "  parameter " << request->parameter; Log(ss); // Class: PlayFabAdminActionsOnPlayersInSegmentTaskParameter 
    if( request->schedule ) { ss << "  schedule " << request->schedule; Log(ss); } else { ss << "  schedule = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminCreateTaskResult( PlayFabAdminCreateTaskResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminCreateTaskResult
    if( result->taskId ) { ss << "  taskId " << result->taskId; Log(ss); } else { ss << "  taskId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminCreateCloudScriptTaskRequest( PlayFab::AdminModels::CreateCloudScriptTaskRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminCreateCloudScriptTaskRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->description ) { ss << "  description " << request->description; Log(ss); } else { ss << "  description = nullptr"; Log(ss); } // Class: const char* 
    ss << "  isActive " << request->isActive; Log(ss); // Class: bool 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 
    ss << "  parameter " << request->parameter; Log(ss); // Class: PlayFabAdminCloudScriptTaskParameter 
    if( request->schedule ) { ss << "  schedule " << request->schedule; Log(ss); } else { ss << "  schedule = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminCreateInsightsScheduledScalingTaskRequest( PlayFab::AdminModels::CreateInsightsScheduledScalingTaskRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminCreateInsightsScheduledScalingTaskRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->description ) { ss << "  description " << request->description; Log(ss); } else { ss << "  description = nullptr"; Log(ss); } // Class: const char* 
    ss << "  isActive " << request->isActive; Log(ss); // Class: bool 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 
    ss << "  parameter " << request->parameter; Log(ss); // Class: PlayFabAdminInsightsScalingTaskParameter 
    if( request->schedule ) { ss << "  schedule " << request->schedule; Log(ss); } else { ss << "  schedule = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminCreateOpenIdConnectionRequest( PlayFab::AdminModels::CreateOpenIdConnectionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminCreateOpenIdConnectionRequest struct:
    // request->clientId: const char*
    if( request->clientId ) { ss << "  clientId " << request->clientId; Log(ss); } else { ss << "  clientId = nullptr"; Log(ss); } // Class: const char* 
    if( request->clientSecret ) { ss << "  clientSecret " << request->clientSecret; Log(ss); } else { ss << "  clientSecret = nullptr"; Log(ss); } // Class: const char* 
    if( request->connectionId ) { ss << "  connectionId " << request->connectionId; Log(ss); } else { ss << "  connectionId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  ignoreNonce " << request->ignoreNonce; Log(ss); // Class: bool 
    if( request->issuerDiscoveryUrl ) { ss << "  issuerDiscoveryUrl " << request->issuerDiscoveryUrl; Log(ss); } else { ss << "  issuerDiscoveryUrl = nullptr"; Log(ss); } // Class: const char* 
    ss << "  issuerInformation " << request->issuerInformation; Log(ss); // Class: PlayFabAdminOpenIdIssuerInformation 

}

void AutoGenAdminTests::LogPlayFabAdminCreatePlayerSharedSecretRequest( PlayFab::AdminModels::CreatePlayerSharedSecretRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminCreatePlayerSharedSecretRequest struct:
    // request->friendlyName: const char*
    if( request->friendlyName ) { ss << "  friendlyName " << request->friendlyName; Log(ss); } else { ss << "  friendlyName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminCreatePlayerSharedSecretResult( PlayFabAdminCreatePlayerSharedSecretResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminCreatePlayerSharedSecretResult
    if( result->secretKey ) { ss << "  secretKey " << result->secretKey; Log(ss); } else { ss << "  secretKey = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminCreatePlayerStatisticDefinitionRequest( PlayFab::AdminModels::CreatePlayerStatisticDefinitionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminCreatePlayerStatisticDefinitionRequest struct:
    // request->aggregationMethod: PlayFabAdminStatisticAggregationMethod const*
    ss << "  aggregationMethod " << request->aggregationMethod; Log(ss); // Class: PlayFabAdminStatisticAggregationMethod     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  versionChangeInterval " << request->versionChangeInterval; Log(ss); // Class: PlayFabAdminStatisticResetIntervalOption 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminCreatePlayerStatisticDefinitionResult( PlayFabAdminCreatePlayerStatisticDefinitionResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminCreatePlayerStatisticDefinitionResult
    ss << "  statistic " << result->statistic; Log(ss); // Class: PlayFabAdminPlayerStatisticDefinition 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminCreateSegmentRequest( PlayFab::AdminModels::CreateSegmentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminCreateSegmentRequest struct:
    // request->segmentModel: PlayFabAdminSegmentModel const*
    ss << "  segmentModel " << request->segmentModel; Log(ss); // Class: PlayFabAdminSegmentModel 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminCreateSegmentResponse( PlayFabAdminCreateSegmentResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminCreateSegmentResponse
    if( result->errorMessage ) { ss << "  errorMessage " << result->errorMessage; Log(ss); } else { ss << "  errorMessage = nullptr"; Log(ss); } // Class: const char* 
    if( result->segmentId ) { ss << "  segmentId " << result->segmentId; Log(ss); } else { ss << "  segmentId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminDeleteContentRequest( PlayFab::AdminModels::DeleteContentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminDeleteContentRequest struct:
    // request->key: const char*
    if( request->key ) { ss << "  key " << request->key; Log(ss); } else { ss << "  key = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminDeleteMasterPlayerAccountRequest( PlayFab::AdminModels::DeleteMasterPlayerAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminDeleteMasterPlayerAccountRequest struct:
    // request->metaData: const char*
    if( request->metaData ) { ss << "  metaData " << request->metaData; Log(ss); } else { ss << "  metaData = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminDeleteMasterPlayerAccountResult( PlayFabAdminDeleteMasterPlayerAccountResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminDeleteMasterPlayerAccountResult
    if( result->jobReceiptId ) { ss << "  jobReceiptId " << result->jobReceiptId; Log(ss); } else { ss << "  jobReceiptId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  titleIdsCount " << result->titleIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->titleIdsCount; i++ )
    {
        ss << "  result->titleIds[" << i << "]:" << result->titleIds[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminDeleteOpenIdConnectionRequest( PlayFab::AdminModels::DeleteOpenIdConnectionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminDeleteOpenIdConnectionRequest struct:
    // request->connectionId: const char*
    if( request->connectionId ) { ss << "  connectionId " << request->connectionId; Log(ss); } else { ss << "  connectionId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminDeletePlayerRequest( PlayFab::AdminModels::DeletePlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminDeletePlayerRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminDeletePlayerSharedSecretRequest( PlayFab::AdminModels::DeletePlayerSharedSecretRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminDeletePlayerSharedSecretRequest struct:
    // request->secretKey: const char*
    if( request->secretKey ) { ss << "  secretKey " << request->secretKey; Log(ss); } else { ss << "  secretKey = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminDeleteSegmentRequest( PlayFab::AdminModels::DeleteSegmentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminDeleteSegmentRequest struct:
    // request->segmentId: const char*
    if( request->segmentId ) { ss << "  segmentId " << request->segmentId; Log(ss); } else { ss << "  segmentId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminDeleteSegmentsResponse( PlayFabAdminDeleteSegmentsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminDeleteSegmentsResponse
    if( result->errorMessage ) { ss << "  errorMessage " << result->errorMessage; Log(ss); } else { ss << "  errorMessage = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminDeleteStoreRequest( PlayFab::AdminModels::DeleteStoreRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminDeleteStoreRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->storeId ) { ss << "  storeId " << request->storeId; Log(ss); } else { ss << "  storeId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminDeleteTaskRequest( PlayFab::AdminModels::DeleteTaskRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminDeleteTaskRequest struct:
    // request->identifier: PlayFabAdminNameIdentifier const*
    ss << "  identifier " << request->identifier; Log(ss); // Class: PlayFabAdminNameIdentifier 

}

void AutoGenAdminTests::LogPlayFabAdminDeleteTitleDataOverrideRequest( PlayFab::AdminModels::DeleteTitleDataOverrideRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminDeleteTitleDataOverrideRequest struct:
    // request->overrideLabel: const char*
    if( request->overrideLabel ) { ss << "  overrideLabel " << request->overrideLabel; Log(ss); } else { ss << "  overrideLabel = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminExportMasterPlayerDataRequest( PlayFab::AdminModels::ExportMasterPlayerDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminExportMasterPlayerDataRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminExportMasterPlayerDataResult( PlayFabAdminExportMasterPlayerDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminExportMasterPlayerDataResult
    if( result->jobReceiptId ) { ss << "  jobReceiptId " << result->jobReceiptId; Log(ss); } else { ss << "  jobReceiptId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetTaskInstanceRequest( PlayFab::AdminModels::GetTaskInstanceRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetTaskInstanceRequest struct:
    // request->taskInstanceId: const char*
    if( request->taskInstanceId ) { ss << "  taskInstanceId " << request->taskInstanceId; Log(ss); } else { ss << "  taskInstanceId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult( PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult
    ss << "  parameter " << result->parameter; Log(ss); // Class: PlayFabAdminActionsOnPlayersInSegmentTaskParameter 
    ss << "  summary " << result->summary; Log(ss); // Class: PlayFabAdminActionsOnPlayersInSegmentTaskSummary 
    return S_OK;
}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetAllSegmentsResult( PlayFabAdminGetAllSegmentsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetAllSegmentsResult    
    ss << "  segmentsCount " << result->segmentsCount; Log(ss);

    // PlayFabAdminGetSegmentResult
    for( uint32_t i=0; i<result->segmentsCount; i++ )
    {
        if( result->segments[i]->aBTestParent ) { ss << "  segments["<<i<<"]->aBTestParent " << result->segments[i]->aBTestParent; Log(ss); } else { ss << "  segments["<<i<<"]->aBTestParent = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->id ) { ss << "  segments["<<i<<"]->id " << result->segments[i]->id; Log(ss); } else { ss << "  segments["<<i<<"]->id = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->name ) { ss << "  segments["<<i<<"]->name " << result->segments[i]->name; Log(ss); } else { ss << "  segments["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetCatalogItemsRequest( PlayFab::AdminModels::GetCatalogItemsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetCatalogItemsRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetCatalogItemsResult( PlayFabAdminGetCatalogItemsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetCatalogItemsResult    
    ss << "  catalogCount " << result->catalogCount; Log(ss);

    // PlayFabAdminCatalogItem
    for( uint32_t i=0; i<result->catalogCount; i++ )
    {
        ss << "  catalog["<<i<<"]->bundle " << result->catalog[i]->bundle; Log(ss); // Class: PlayFabAdminCatalogItemBundleInfo 
        ss << "  catalog["<<i<<"]->canBecomeCharacter " << result->catalog[i]->canBecomeCharacter; Log(ss); // Class: bool 
        if( result->catalog[i]->catalogVersion ) { ss << "  catalog["<<i<<"]->catalogVersion " << result->catalog[i]->catalogVersion; Log(ss); } else { ss << "  catalog["<<i<<"]->catalogVersion = nullptr"; Log(ss); } // Class: const char* 
        ss << "  catalog["<<i<<"]->consumable " << result->catalog[i]->consumable; Log(ss); // Class: PlayFabAdminCatalogItemConsumableInfo 
        ss << "  catalog["<<i<<"]->container " << result->catalog[i]->container; Log(ss); // Class: PlayFabAdminCatalogItemContainerInfo 
        if( result->catalog[i]->customData ) { ss << "  catalog["<<i<<"]->customData " << result->catalog[i]->customData; Log(ss); } else { ss << "  catalog["<<i<<"]->customData = nullptr"; Log(ss); } // Class: const char* 
        if( result->catalog[i]->description ) { ss << "  catalog["<<i<<"]->description " << result->catalog[i]->description; Log(ss); } else { ss << "  catalog["<<i<<"]->description = nullptr"; Log(ss); } // Class: const char* 
        if( result->catalog[i]->displayName ) { ss << "  catalog["<<i<<"]->displayName " << result->catalog[i]->displayName; Log(ss); } else { ss << "  catalog["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  catalog["<<i<<"]->initialLimitedEditionCount " << result->catalog[i]->initialLimitedEditionCount; Log(ss); // Class: int32_t 
        ss << "  catalog["<<i<<"]->isLimitedEdition " << result->catalog[i]->isLimitedEdition; Log(ss); // Class: bool 
        ss << "  catalog["<<i<<"]->isStackable " << result->catalog[i]->isStackable; Log(ss); // Class: bool 
        ss << "  catalog["<<i<<"]->isTradable " << result->catalog[i]->isTradable; Log(ss); // Class: bool 
        if( result->catalog[i]->itemClass ) { ss << "  catalog["<<i<<"]->itemClass " << result->catalog[i]->itemClass; Log(ss); } else { ss << "  catalog["<<i<<"]->itemClass = nullptr"; Log(ss); } // Class: const char* 
        if( result->catalog[i]->itemId ) { ss << "  catalog["<<i<<"]->itemId " << result->catalog[i]->itemId; Log(ss); } else { ss << "  catalog["<<i<<"]->itemId = nullptr"; Log(ss); } // Class: const char* 
        if( result->catalog[i]->itemImageUrl ) { ss << "  catalog["<<i<<"]->itemImageUrl " << result->catalog[i]->itemImageUrl; Log(ss); } else { ss << "  catalog["<<i<<"]->itemImageUrl = nullptr"; Log(ss); } // Class: const char* 
        ss << "  catalog["<<i<<"]->realCurrencyPrices " << result->catalog[i]->realCurrencyPrices; Log(ss); // Class: PlayFabUint32DictionaryEntry 
        if( result->catalog[i]->tags ) { ss << "  catalog["<<i<<"]->tags " << result->catalog[i]->tags; Log(ss); } else { ss << "  catalog["<<i<<"]->tags = nullptr"; Log(ss); } // Class: const char* 
        ss << "  catalog["<<i<<"]->virtualCurrencyPrices " << result->catalog[i]->virtualCurrencyPrices; Log(ss); // Class: PlayFabUint32DictionaryEntry 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetCloudScriptRevisionRequest( PlayFab::AdminModels::GetCloudScriptRevisionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetCloudScriptRevisionRequest struct:
    // request->revision: int32_t const*
    ss << "  revision " << request->revision; Log(ss); // Class: int32_t 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetCloudScriptRevisionResult( PlayFabAdminGetCloudScriptRevisionResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetCloudScriptRevisionResult
    ss << "  createdAt " << result->createdAt; Log(ss); // Class: time_t     
    ss << "  filesCount " << result->filesCount; Log(ss);

    // PlayFabAdminCloudScriptFile
    for( uint32_t i=0; i<result->filesCount; i++ )
    {
        if( result->files[i]->fileContents ) { ss << "  files["<<i<<"]->fileContents " << result->files[i]->fileContents; Log(ss); } else { ss << "  files["<<i<<"]->fileContents = nullptr"; Log(ss); } // Class: const char* 
        if( result->files[i]->filename ) { ss << "  files["<<i<<"]->filename " << result->files[i]->filename; Log(ss); } else { ss << "  files["<<i<<"]->filename = nullptr"; Log(ss); } // Class: const char* 
    } 
    ss << "  isPublished " << result->isPublished; Log(ss); // Class: bool 
    ss << "  revision " << result->revision; Log(ss); // Class: int32_t 
    ss << "  version " << result->version; Log(ss); // Class: int32_t 
    return S_OK;
}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetCloudScriptTaskInstanceResult( PlayFabAdminGetCloudScriptTaskInstanceResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetCloudScriptTaskInstanceResult
    ss << "  parameter " << result->parameter; Log(ss); // Class: PlayFabAdminCloudScriptTaskParameter 
    ss << "  summary " << result->summary; Log(ss); // Class: PlayFabAdminCloudScriptTaskSummary 
    return S_OK;
}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetCloudScriptVersionsResult( PlayFabAdminGetCloudScriptVersionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetCloudScriptVersionsResult    
    ss << "  versionsCount " << result->versionsCount; Log(ss);

    // PlayFabAdminCloudScriptVersionStatus
    for( uint32_t i=0; i<result->versionsCount; i++ )
    {
        ss << "  versions["<<i<<"]->latestRevision " << result->versions[i]->latestRevision; Log(ss); // Class: int32_t 
        ss << "  versions["<<i<<"]->publishedRevision " << result->versions[i]->publishedRevision; Log(ss); // Class: int32_t 
        ss << "  versions["<<i<<"]->version " << result->versions[i]->version; Log(ss); // Class: int32_t 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetContentListRequest( PlayFab::AdminModels::GetContentListRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetContentListRequest struct:
    // request->prefix: const char*
    if( request->prefix ) { ss << "  prefix " << request->prefix; Log(ss); } else { ss << "  prefix = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetContentListResult( PlayFabAdminGetContentListResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetContentListResult    
    ss << "  contentsCount " << result->contentsCount; Log(ss);

    // PlayFabAdminContentInfo
    for( uint32_t i=0; i<result->contentsCount; i++ )
    {
        if( result->contents[i]->key ) { ss << "  contents["<<i<<"]->key " << result->contents[i]->key; Log(ss); } else { ss << "  contents["<<i<<"]->key = nullptr"; Log(ss); } // Class: const char* 
        ss << "  contents["<<i<<"]->lastModified " << result->contents[i]->lastModified; Log(ss); // Class: time_t 
        ss << "  contents["<<i<<"]->size " << result->contents[i]->size; Log(ss); // Class: double 
    } 
    ss << "  itemCount " << result->itemCount; Log(ss); // Class: int32_t 
    ss << "  totalSize " << result->totalSize; Log(ss); // Class: uint32_t 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetContentUploadUrlRequest( PlayFab::AdminModels::GetContentUploadUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetContentUploadUrlRequest struct:
    // request->contentType: const char*
    if( request->contentType ) { ss << "  contentType " << request->contentType; Log(ss); } else { ss << "  contentType = nullptr"; Log(ss); } // Class: const char* 
    if( request->key ) { ss << "  key " << request->key; Log(ss); } else { ss << "  key = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetContentUploadUrlResult( PlayFabAdminGetContentUploadUrlResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetContentUploadUrlResult
    if( result->uRL ) { ss << "  uRL " << result->uRL; Log(ss); } else { ss << "  uRL = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetDataReportRequest( PlayFab::AdminModels::GetDataReportRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetDataReportRequest struct:
    // request->day: int32_t
    ss << "  day " << request->day; Log(ss); // Class: int32_t 
    ss << "  month " << request->month; Log(ss); // Class: int32_t 
    if( request->reportName ) { ss << "  reportName " << request->reportName; Log(ss); } else { ss << "  reportName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  year " << request->year; Log(ss); // Class: int32_t 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetDataReportResult( PlayFabAdminGetDataReportResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetDataReportResult
    if( result->downloadUrl ) { ss << "  downloadUrl " << result->downloadUrl; Log(ss); } else { ss << "  downloadUrl = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetMatchmakerGameInfoRequest( PlayFab::AdminModels::GetMatchmakerGameInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetMatchmakerGameInfoRequest struct:
    // request->lobbyId: const char*
    if( request->lobbyId ) { ss << "  lobbyId " << request->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetMatchmakerGameInfoResult( PlayFabAdminGetMatchmakerGameInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetMatchmakerGameInfoResult
    if( result->buildVersion ) { ss << "  buildVersion " << result->buildVersion; Log(ss); } else { ss << "  buildVersion = nullptr"; Log(ss); } // Class: const char* 
    ss << "  endTime " << result->endTime; Log(ss); // Class: time_t 
    if( result->lobbyId ) { ss << "  lobbyId " << result->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 
    if( result->mode ) { ss << "  mode " << result->mode; Log(ss); } else { ss << "  mode = nullptr"; Log(ss); } // Class: const char*     
    ss << "  playersCount " << result->playersCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->playersCount; i++ )
    {
        ss << "  result->players[" << i << "]:" << result->players[i]; Log(ss); // const char*
    } 
    ss << "  region " << result->region; Log(ss); // Class: PlayFabAdminRegion 
    if( result->serverIPV4Address ) { ss << "  serverIPV4Address " << result->serverIPV4Address; Log(ss); } else { ss << "  serverIPV4Address = nullptr"; Log(ss); } // Class: const char* 
    if( result->serverIPV6Address ) { ss << "  serverIPV6Address " << result->serverIPV6Address; Log(ss); } else { ss << "  serverIPV6Address = nullptr"; Log(ss); } // Class: const char* 
    ss << "  serverPort " << result->serverPort; Log(ss); // Class: uint32_t 
    if( result->serverPublicDNSName ) { ss << "  serverPublicDNSName " << result->serverPublicDNSName; Log(ss); } else { ss << "  serverPublicDNSName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  startTime " << result->startTime; Log(ss); // Class: time_t 
    if( result->titleId ) { ss << "  titleId " << result->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetMatchmakerGameModesRequest( PlayFab::AdminModels::GetMatchmakerGameModesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetMatchmakerGameModesRequest struct:
    // request->buildVersion: const char*
    if( request->buildVersion ) { ss << "  buildVersion " << request->buildVersion; Log(ss); } else { ss << "  buildVersion = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetMatchmakerGameModesResult( PlayFabAdminGetMatchmakerGameModesResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetMatchmakerGameModesResult    
    ss << "  gameModesCount " << result->gameModesCount; Log(ss);

    // PlayFabAdminGameModeInfo
    for( uint32_t i=0; i<result->gameModesCount; i++ )
    {
        if( result->gameModes[i]->gamemode ) { ss << "  gameModes["<<i<<"]->gamemode " << result->gameModes[i]->gamemode; Log(ss); } else { ss << "  gameModes["<<i<<"]->gamemode = nullptr"; Log(ss); } // Class: const char* 
        ss << "  gameModes["<<i<<"]->maxPlayerCount " << result->gameModes[i]->maxPlayerCount; Log(ss); // Class: uint32_t 
        ss << "  gameModes["<<i<<"]->minPlayerCount " << result->gameModes[i]->minPlayerCount; Log(ss); // Class: uint32_t 
        ss << "  gameModes["<<i<<"]->startOpen " << result->gameModes[i]->startOpen; Log(ss); // Class: bool 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetPlayedTitleListRequest( PlayFab::AdminModels::GetPlayedTitleListRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetPlayedTitleListRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPlayedTitleListResult( PlayFabAdminGetPlayedTitleListResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPlayedTitleListResult    
    ss << "  titleIdsCount " << result->titleIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->titleIdsCount; i++ )
    {
        ss << "  result->titleIds[" << i << "]:" << result->titleIds[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetPlayerIdFromAuthTokenRequest( PlayFab::AdminModels::GetPlayerIdFromAuthTokenRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetPlayerIdFromAuthTokenRequest struct:
    // request->token: const char*
    if( request->token ) { ss << "  token " << request->token; Log(ss); } else { ss << "  token = nullptr"; Log(ss); } // Class: const char* 
    ss << "  tokenType " << request->tokenType; Log(ss); // Class: PlayFabAdminAuthTokenType 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPlayerIdFromAuthTokenResult( PlayFabAdminGetPlayerIdFromAuthTokenResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPlayerIdFromAuthTokenResult
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetPlayerProfileRequest( PlayFab::AdminModels::GetPlayerProfileRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetPlayerProfileRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabAdminPlayerProfileViewConstraints 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPlayerProfileResult( PlayFabAdminGetPlayerProfileResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPlayerProfileResult
    ss << "  playerProfile " << result->playerProfile; Log(ss); // Class: PlayFabPlayerProfileModel 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetPlayersSegmentsRequest( PlayFab::AdminModels::GetPlayersSegmentsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetPlayersSegmentsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPlayerSegmentsResult( PlayFabAdminGetPlayerSegmentsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPlayerSegmentsResult    
    ss << "  segmentsCount " << result->segmentsCount; Log(ss);

    // PlayFabAdminGetSegmentResult
    for( uint32_t i=0; i<result->segmentsCount; i++ )
    {
        if( result->segments[i]->aBTestParent ) { ss << "  segments["<<i<<"]->aBTestParent " << result->segments[i]->aBTestParent; Log(ss); } else { ss << "  segments["<<i<<"]->aBTestParent = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->id ) { ss << "  segments["<<i<<"]->id " << result->segments[i]->id; Log(ss); } else { ss << "  segments["<<i<<"]->id = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->name ) { ss << "  segments["<<i<<"]->name " << result->segments[i]->name; Log(ss); } else { ss << "  segments["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPlayerSharedSecretsResult( PlayFabAdminGetPlayerSharedSecretsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPlayerSharedSecretsResult    
    ss << "  sharedSecretsCount " << result->sharedSecretsCount; Log(ss);

    // PlayFabAdminSharedSecret
    for( uint32_t i=0; i<result->sharedSecretsCount; i++ )
    {
        ss << "  sharedSecrets["<<i<<"]->disabled " << result->sharedSecrets[i]->disabled; Log(ss); // Class: bool 
        if( result->sharedSecrets[i]->friendlyName ) { ss << "  sharedSecrets["<<i<<"]->friendlyName " << result->sharedSecrets[i]->friendlyName; Log(ss); } else { ss << "  sharedSecrets["<<i<<"]->friendlyName = nullptr"; Log(ss); } // Class: const char* 
        if( result->sharedSecrets[i]->secretKey ) { ss << "  sharedSecrets["<<i<<"]->secretKey " << result->sharedSecrets[i]->secretKey; Log(ss); } else { ss << "  sharedSecrets["<<i<<"]->secretKey = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetPlayersInSegmentRequest( PlayFab::AdminModels::GetPlayersInSegmentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetPlayersInSegmentRequest struct:
    // request->continuationToken: const char*
    if( request->continuationToken ) { ss << "  continuationToken " << request->continuationToken; Log(ss); } else { ss << "  continuationToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  maxBatchSize " << request->maxBatchSize; Log(ss); // Class: uint32_t 
    ss << "  secondsToLive " << request->secondsToLive; Log(ss); // Class: uint32_t 
    if( request->segmentId ) { ss << "  segmentId " << request->segmentId; Log(ss); } else { ss << "  segmentId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPlayersInSegmentResult( PlayFabAdminGetPlayersInSegmentResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPlayersInSegmentResult
    if( result->continuationToken ) { ss << "  continuationToken " << result->continuationToken; Log(ss); } else { ss << "  continuationToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  playerProfilesCount " << result->playerProfilesCount; Log(ss);

    // PlayFabAdminPlayerProfile
    for( uint32_t i=0; i<result->playerProfilesCount; i++ )
    {
        ss << "  playerProfiles["<<i<<"]->adCampaignAttributions " << result->playerProfiles[i]->adCampaignAttributions; Log(ss); // Class: PlayFabAdminAdCampaignAttribution 
        if( result->playerProfiles[i]->avatarUrl ) { ss << "  playerProfiles["<<i<<"]->avatarUrl " << result->playerProfiles[i]->avatarUrl; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->avatarUrl = nullptr"; Log(ss); } // Class: const char* 
        ss << "  playerProfiles["<<i<<"]->bannedUntil " << result->playerProfiles[i]->bannedUntil; Log(ss); // Class: time_t 
        ss << "  playerProfiles["<<i<<"]->contactEmailAddresses " << result->playerProfiles[i]->contactEmailAddresses; Log(ss); // Class: PlayFabAdminContactEmailInfo 
        ss << "  playerProfiles["<<i<<"]->created " << result->playerProfiles[i]->created; Log(ss); // Class: time_t 
        if( result->playerProfiles[i]->displayName ) { ss << "  playerProfiles["<<i<<"]->displayName " << result->playerProfiles[i]->displayName; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  playerProfiles["<<i<<"]->lastLogin " << result->playerProfiles[i]->lastLogin; Log(ss); // Class: time_t 
        ss << "  playerProfiles["<<i<<"]->linkedAccounts " << result->playerProfiles[i]->linkedAccounts; Log(ss); // Class: PlayFabAdminPlayerLinkedAccount 
        ss << "  playerProfiles["<<i<<"]->locations " << result->playerProfiles[i]->locations; Log(ss); // Class: PlayFabAdminPlayerLocationDictionaryEntry 
        ss << "  playerProfiles["<<i<<"]->origination " << result->playerProfiles[i]->origination; Log(ss); // Class: PlayFabLoginIdentityProvider 
        if( result->playerProfiles[i]->playerExperimentVariants ) { ss << "  playerProfiles["<<i<<"]->playerExperimentVariants " << result->playerProfiles[i]->playerExperimentVariants; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->playerExperimentVariants = nullptr"; Log(ss); } // Class: const char* 
        if( result->playerProfiles[i]->playerId ) { ss << "  playerProfiles["<<i<<"]->playerId " << result->playerProfiles[i]->playerId; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->playerId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  playerProfiles["<<i<<"]->playerStatistics " << result->playerProfiles[i]->playerStatistics; Log(ss); // Class: PlayFabAdminPlayerStatistic 
        if( result->playerProfiles[i]->publisherId ) { ss << "  playerProfiles["<<i<<"]->publisherId " << result->playerProfiles[i]->publisherId; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->publisherId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  playerProfiles["<<i<<"]->pushNotificationRegistrations " << result->playerProfiles[i]->pushNotificationRegistrations; Log(ss); // Class: PlayFabAdminPushNotificationRegistration 
        ss << "  playerProfiles["<<i<<"]->statistics " << result->playerProfiles[i]->statistics; Log(ss); // Class: PlayFabInt32DictionaryEntry 
        if( result->playerProfiles[i]->tags ) { ss << "  playerProfiles["<<i<<"]->tags " << result->playerProfiles[i]->tags; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->tags = nullptr"; Log(ss); } // Class: const char* 
        if( result->playerProfiles[i]->titleId ) { ss << "  playerProfiles["<<i<<"]->titleId " << result->playerProfiles[i]->titleId; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->titleId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  playerProfiles["<<i<<"]->totalValueToDateInUSD " << result->playerProfiles[i]->totalValueToDateInUSD; Log(ss); // Class: uint32_t 
        ss << "  playerProfiles["<<i<<"]->valuesToDate " << result->playerProfiles[i]->valuesToDate; Log(ss); // Class: PlayFabUint32DictionaryEntry 
        ss << "  playerProfiles["<<i<<"]->virtualCurrencyBalances " << result->playerProfiles[i]->virtualCurrencyBalances; Log(ss); // Class: PlayFabInt32DictionaryEntry 
    } 
    ss << "  profilesInSegment " << result->profilesInSegment; Log(ss); // Class: int32_t 
    return S_OK;
}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPlayerStatisticDefinitionsResult( PlayFabAdminGetPlayerStatisticDefinitionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPlayerStatisticDefinitionsResult    
    ss << "  statisticsCount " << result->statisticsCount; Log(ss);

    // PlayFabAdminPlayerStatisticDefinition
    for( uint32_t i=0; i<result->statisticsCount; i++ )
    {
        ss << "  statistics["<<i<<"]->aggregationMethod " << result->statistics[i]->aggregationMethod; Log(ss); // Class: PlayFabAdminStatisticAggregationMethod 
        ss << "  statistics["<<i<<"]->currentVersion " << result->statistics[i]->currentVersion; Log(ss); // Class: uint32_t 
        if( result->statistics[i]->statisticName ) { ss << "  statistics["<<i<<"]->statisticName " << result->statistics[i]->statisticName; Log(ss); } else { ss << "  statistics["<<i<<"]->statisticName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statistics["<<i<<"]->versionChangeInterval " << result->statistics[i]->versionChangeInterval; Log(ss); // Class: PlayFabAdminStatisticResetIntervalOption 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetPlayerStatisticVersionsRequest( PlayFab::AdminModels::GetPlayerStatisticVersionsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetPlayerStatisticVersionsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPlayerStatisticVersionsResult( PlayFabAdminGetPlayerStatisticVersionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPlayerStatisticVersionsResult    
    ss << "  statisticVersionsCount " << result->statisticVersionsCount; Log(ss);

    // PlayFabAdminPlayerStatisticVersion
    for( uint32_t i=0; i<result->statisticVersionsCount; i++ )
    {
        ss << "  statisticVersions["<<i<<"]->activationTime " << result->statisticVersions[i]->activationTime; Log(ss); // Class: time_t 
        if( result->statisticVersions[i]->archiveDownloadUrl ) { ss << "  statisticVersions["<<i<<"]->archiveDownloadUrl " << result->statisticVersions[i]->archiveDownloadUrl; Log(ss); } else { ss << "  statisticVersions["<<i<<"]->archiveDownloadUrl = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statisticVersions["<<i<<"]->deactivationTime " << result->statisticVersions[i]->deactivationTime; Log(ss); // Class: time_t 
        ss << "  statisticVersions["<<i<<"]->scheduledActivationTime " << result->statisticVersions[i]->scheduledActivationTime; Log(ss); // Class: time_t 
        ss << "  statisticVersions["<<i<<"]->scheduledDeactivationTime " << result->statisticVersions[i]->scheduledDeactivationTime; Log(ss); // Class: time_t 
        if( result->statisticVersions[i]->statisticName ) { ss << "  statisticVersions["<<i<<"]->statisticName " << result->statisticVersions[i]->statisticName; Log(ss); } else { ss << "  statisticVersions["<<i<<"]->statisticName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statisticVersions["<<i<<"]->status " << result->statisticVersions[i]->status; Log(ss); // Class: PlayFabAdminStatisticVersionStatus 
        ss << "  statisticVersions["<<i<<"]->version " << result->statisticVersions[i]->version; Log(ss); // Class: uint32_t 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetPlayerTagsRequest( PlayFab::AdminModels::GetPlayerTagsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetPlayerTagsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playfabNamespace ) { ss << "  playfabNamespace " << request->playfabNamespace; Log(ss); } else { ss << "  playfabNamespace = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPlayerTagsResult( PlayFabAdminGetPlayerTagsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPlayerTagsResult
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  tagsCount " << result->tagsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->tagsCount; i++ )
    {
        ss << "  result->tags[" << i << "]:" << result->tags[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetPolicyRequest( PlayFab::AdminModels::GetPolicyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetPolicyRequest struct:
    // request->policyName: const char*
    if( request->policyName ) { ss << "  policyName " << request->policyName; Log(ss); } else { ss << "  policyName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPolicyResponse( PlayFabAdminGetPolicyResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPolicyResponse
    if( result->policyName ) { ss << "  policyName " << result->policyName; Log(ss); } else { ss << "  policyName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  policyVersion " << result->policyVersion; Log(ss); // Class: int32_t     
    ss << "  statementsCount " << result->statementsCount; Log(ss);

    // PlayFabAdminPermissionStatement
    for( uint32_t i=0; i<result->statementsCount; i++ )
    {
        if( result->statements[i]->action ) { ss << "  statements["<<i<<"]->action " << result->statements[i]->action; Log(ss); } else { ss << "  statements["<<i<<"]->action = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statements["<<i<<"]->apiConditions " << result->statements[i]->apiConditions; Log(ss); // Class: PlayFabAdminApiCondition 
        if( result->statements[i]->comment ) { ss << "  statements["<<i<<"]->comment " << result->statements[i]->comment; Log(ss); } else { ss << "  statements["<<i<<"]->comment = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statements["<<i<<"]->effect " << result->statements[i]->effect; Log(ss); // Class: PlayFabAdminEffectType 
        if( result->statements[i]->principal ) { ss << "  statements["<<i<<"]->principal " << result->statements[i]->principal; Log(ss); } else { ss << "  statements["<<i<<"]->principal = nullptr"; Log(ss); } // Class: const char* 
        if( result->statements[i]->resource ) { ss << "  statements["<<i<<"]->resource " << result->statements[i]->resource; Log(ss); } else { ss << "  statements["<<i<<"]->resource = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetPublisherDataRequest( PlayFab::AdminModels::GetPublisherDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetPublisherDataRequest struct:
    // request->keys: const char* const*
    // request->keysCount: uint32_t    
    ss << "  keysCount " << request->keysCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysCount; i++ )
    {
        ss << "  request->keys[" << i << "]:" << request->keys[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetPublisherDataResult( PlayFabAdminGetPublisherDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetPublisherDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetRandomResultTablesRequest( PlayFab::AdminModels::GetRandomResultTablesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetRandomResultTablesRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetRandomResultTablesResult( PlayFabAdminGetRandomResultTablesResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetRandomResultTablesResult    
    ss << "  tablesCount " << result->tablesCount; Log(ss);

    // PlayFabAdminRandomResultTableListingDictionaryEntry
    for( uint32_t i=0; i<result->tablesCount; i++ )
    {
        ss << "  result->tables[" << i << "]:" << result->tables[i]; Log(ss); // PlayFabAdminRandomResultTableListingDictionaryEntry
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetSegmentsRequest( PlayFab::AdminModels::GetSegmentsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetSegmentsRequest struct:
    // request->segmentIds: const char* const*
    // request->segmentIdsCount: uint32_t    
    ss << "  segmentIdsCount " << request->segmentIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->segmentIdsCount; i++ )
    {
        ss << "  request->segmentIds[" << i << "]:" << request->segmentIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetSegmentsResponse( PlayFabAdminGetSegmentsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetSegmentsResponse
    if( result->errorMessage ) { ss << "  errorMessage " << result->errorMessage; Log(ss); } else { ss << "  errorMessage = nullptr"; Log(ss); } // Class: const char*     
    ss << "  segmentsCount " << result->segmentsCount; Log(ss);

    // PlayFabAdminSegmentModel
    for( uint32_t i=0; i<result->segmentsCount; i++ )
    {
        if( result->segments[i]->description ) { ss << "  segments["<<i<<"]->description " << result->segments[i]->description; Log(ss); } else { ss << "  segments["<<i<<"]->description = nullptr"; Log(ss); } // Class: const char* 
        ss << "  segments["<<i<<"]->enteredSegmentActions " << result->segments[i]->enteredSegmentActions; Log(ss); // Class: PlayFabAdminSegmentTrigger 
        ss << "  segments["<<i<<"]->lastUpdateTime " << result->segments[i]->lastUpdateTime; Log(ss); // Class: time_t 
        ss << "  segments["<<i<<"]->leftSegmentActions " << result->segments[i]->leftSegmentActions; Log(ss); // Class: PlayFabAdminSegmentTrigger 
        if( result->segments[i]->name ) { ss << "  segments["<<i<<"]->name " << result->segments[i]->name; Log(ss); } else { ss << "  segments["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->segmentId ) { ss << "  segments["<<i<<"]->segmentId " << result->segments[i]->segmentId; Log(ss); } else { ss << "  segments["<<i<<"]->segmentId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  segments["<<i<<"]->segmentOrDefinitions " << result->segments[i]->segmentOrDefinitions; Log(ss); // Class: PlayFabAdminSegmentOrDefinition 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetServerBuildInfoRequest( PlayFab::AdminModels::GetServerBuildInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetServerBuildInfoRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetServerBuildInfoResult( PlayFabAdminGetServerBuildInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetServerBuildInfoResult    
    ss << "  activeRegionsCount " << result->activeRegionsCount; Log(ss);

    // PlayFabAdminRegion
    for( uint32_t i=0; i<result->activeRegionsCount; i++ )
    {
        ss << "  result->activeRegions[" << i << "]:" << result->activeRegions[i]; Log(ss); // PlayFabAdminRegion
    } 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->comment ) { ss << "  comment " << result->comment; Log(ss); } else { ss << "  comment = nullptr"; Log(ss); } // Class: const char* 
    if( result->errorMessage ) { ss << "  errorMessage " << result->errorMessage; Log(ss); } else { ss << "  errorMessage = nullptr"; Log(ss); } // Class: const char* 
    ss << "  maxGamesPerHost " << result->maxGamesPerHost; Log(ss); // Class: int32_t 
    ss << "  minFreeGameSlots " << result->minFreeGameSlots; Log(ss); // Class: int32_t 
    ss << "  status " << result->status; Log(ss); // Class: PlayFabAdminGameBuildStatus 
    ss << "  timestamp " << result->timestamp; Log(ss); // Class: time_t 
    if( result->titleId ) { ss << "  titleId " << result->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetServerBuildUploadURLRequest( PlayFab::AdminModels::GetServerBuildUploadURLRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetServerBuildUploadURLRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetServerBuildUploadURLResult( PlayFabAdminGetServerBuildUploadURLResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetServerBuildUploadURLResult
    if( result->uRL ) { ss << "  uRL " << result->uRL; Log(ss); } else { ss << "  uRL = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetStoreItemsRequest( PlayFab::AdminModels::GetStoreItemsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetStoreItemsRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->storeId ) { ss << "  storeId " << request->storeId; Log(ss); } else { ss << "  storeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetStoreItemsResult( PlayFabAdminGetStoreItemsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetStoreItemsResult
    if( result->catalogVersion ) { ss << "  catalogVersion " << result->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    ss << "  marketingData " << result->marketingData; Log(ss); // Class: PlayFabAdminStoreMarketingModel 
    ss << "  source " << result->source; Log(ss); // Class: PlayFabAdminSourceType     
    ss << "  storeCount " << result->storeCount; Log(ss);

    // PlayFabAdminStoreItem
    for( uint32_t i=0; i<result->storeCount; i++ )
    {
        if( result->store[i]->customData.stringValue ) { ss << "  store["<<i<<"]->customData " << result->store[i]->customData.stringValue; Log(ss); } else { ss << "  store[i]->customData = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        ss << "  store["<<i<<"]->displayPosition " << result->store[i]->displayPosition; Log(ss); // Class: uint32_t 
        if( result->store[i]->itemId ) { ss << "  store["<<i<<"]->itemId " << result->store[i]->itemId; Log(ss); } else { ss << "  store["<<i<<"]->itemId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  store["<<i<<"]->realCurrencyPrices " << result->store[i]->realCurrencyPrices; Log(ss); // Class: PlayFabUint32DictionaryEntry 
        ss << "  store["<<i<<"]->virtualCurrencyPrices " << result->store[i]->virtualCurrencyPrices; Log(ss); // Class: PlayFabUint32DictionaryEntry 
    } 
    if( result->storeId ) { ss << "  storeId " << result->storeId; Log(ss); } else { ss << "  storeId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetTaskInstancesRequest( PlayFab::AdminModels::GetTaskInstancesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetTaskInstancesRequest struct:
    // request->startedAtRangeFrom: time_t const*
    ss << "  startedAtRangeFrom " << request->startedAtRangeFrom; Log(ss); // Class: time_t 
    ss << "  startedAtRangeTo " << request->startedAtRangeTo; Log(ss); // Class: time_t 
    ss << "  statusFilter " << request->statusFilter; Log(ss); // Class: PlayFabAdminTaskInstanceStatus 
    ss << "  taskIdentifier " << request->taskIdentifier; Log(ss); // Class: PlayFabAdminNameIdentifier 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetTaskInstancesResult( PlayFabAdminGetTaskInstancesResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetTaskInstancesResult    
    ss << "  summariesCount " << result->summariesCount; Log(ss);

    // PlayFabAdminTaskInstanceBasicSummary
    for( uint32_t i=0; i<result->summariesCount; i++ )
    {
        ss << "  summaries["<<i<<"]->completedAt " << result->summaries[i]->completedAt; Log(ss); // Class: time_t 
        if( result->summaries[i]->errorMessage ) { ss << "  summaries["<<i<<"]->errorMessage " << result->summaries[i]->errorMessage; Log(ss); } else { ss << "  summaries["<<i<<"]->errorMessage = nullptr"; Log(ss); } // Class: const char* 
        ss << "  summaries["<<i<<"]->estimatedSecondsRemaining " << result->summaries[i]->estimatedSecondsRemaining; Log(ss); // Class: double 
        ss << "  summaries["<<i<<"]->percentComplete " << result->summaries[i]->percentComplete; Log(ss); // Class: double 
        if( result->summaries[i]->scheduledByUserId ) { ss << "  summaries["<<i<<"]->scheduledByUserId " << result->summaries[i]->scheduledByUserId; Log(ss); } else { ss << "  summaries["<<i<<"]->scheduledByUserId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  summaries["<<i<<"]->startedAt " << result->summaries[i]->startedAt; Log(ss); // Class: time_t 
        ss << "  summaries["<<i<<"]->status " << result->summaries[i]->status; Log(ss); // Class: PlayFabAdminTaskInstanceStatus 
        ss << "  summaries["<<i<<"]->taskIdentifier " << result->summaries[i]->taskIdentifier; Log(ss); // Class: PlayFabAdminNameIdentifier 
        if( result->summaries[i]->taskInstanceId ) { ss << "  summaries["<<i<<"]->taskInstanceId " << result->summaries[i]->taskInstanceId; Log(ss); } else { ss << "  summaries["<<i<<"]->taskInstanceId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  summaries["<<i<<"]->type " << result->summaries[i]->type; Log(ss); // Class: PlayFabAdminScheduledTaskType 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetTasksRequest( PlayFab::AdminModels::GetTasksRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetTasksRequest struct:
    // request->identifier: PlayFabAdminNameIdentifier const*
    ss << "  identifier " << request->identifier; Log(ss); // Class: PlayFabAdminNameIdentifier 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetTasksResult( PlayFabAdminGetTasksResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetTasksResult    
    ss << "  tasksCount " << result->tasksCount; Log(ss);

    // PlayFabAdminScheduledTask
    for( uint32_t i=0; i<result->tasksCount; i++ )
    {
        if( result->tasks[i]->description ) { ss << "  tasks["<<i<<"]->description " << result->tasks[i]->description; Log(ss); } else { ss << "  tasks["<<i<<"]->description = nullptr"; Log(ss); } // Class: const char* 
        ss << "  tasks["<<i<<"]->isActive " << result->tasks[i]->isActive; Log(ss); // Class: bool 
        ss << "  tasks["<<i<<"]->lastRunTime " << result->tasks[i]->lastRunTime; Log(ss); // Class: time_t 
        if( result->tasks[i]->name ) { ss << "  tasks["<<i<<"]->name " << result->tasks[i]->name; Log(ss); } else { ss << "  tasks["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        ss << "  tasks["<<i<<"]->nextRunTime " << result->tasks[i]->nextRunTime; Log(ss); // Class: time_t 
        if( result->tasks[i]->parameter.stringValue ) { ss << "  tasks["<<i<<"]->parameter " << result->tasks[i]->parameter.stringValue; Log(ss); } else { ss << "  tasks[i]->parameter = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        if( result->tasks[i]->schedule ) { ss << "  tasks["<<i<<"]->schedule " << result->tasks[i]->schedule; Log(ss); } else { ss << "  tasks["<<i<<"]->schedule = nullptr"; Log(ss); } // Class: const char* 
        if( result->tasks[i]->taskId ) { ss << "  tasks["<<i<<"]->taskId " << result->tasks[i]->taskId; Log(ss); } else { ss << "  tasks["<<i<<"]->taskId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  tasks["<<i<<"]->type " << result->tasks[i]->type; Log(ss); // Class: PlayFabAdminScheduledTaskType 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetTitleDataRequest( PlayFab::AdminModels::GetTitleDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetTitleDataRequest struct:
    // request->keys: const char* const*
    // request->keysCount: uint32_t    
    ss << "  keysCount " << request->keysCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysCount; i++ )
    {
        ss << "  request->keys[" << i << "]:" << request->keys[i]; Log(ss); // const char*
    } 
    if( request->overrideLabel ) { ss << "  overrideLabel " << request->overrideLabel; Log(ss); } else { ss << "  overrideLabel = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetTitleDataResult( PlayFabAdminGetTitleDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetTitleDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminLookupUserAccountInfoRequest( PlayFab::AdminModels::LookupUserAccountInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminLookupUserAccountInfoRequest struct:
    // request->email: const char*
    if( request->email ) { ss << "  email " << request->email; Log(ss); } else { ss << "  email = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->titleDisplayName ) { ss << "  titleDisplayName " << request->titleDisplayName; Log(ss); } else { ss << "  titleDisplayName = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminLookupUserAccountInfoResult( PlayFabAdminLookupUserAccountInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminLookupUserAccountInfoResult
    ss << "  userInfo " << result->userInfo; Log(ss); // Class: PlayFabUserAccountInfo 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetUserBansRequest( PlayFab::AdminModels::GetUserBansRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetUserBansRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetUserBansResult( PlayFabAdminGetUserBansResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetUserBansResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PlayFabAdminBanInfo
    for( uint32_t i=0; i<result->banDataCount; i++ )
    {
        ss << "  banData["<<i<<"]->active " << result->banData[i]->active; Log(ss); // Class: bool 
        if( result->banData[i]->banId ) { ss << "  banData["<<i<<"]->banId " << result->banData[i]->banId; Log(ss); } else { ss << "  banData["<<i<<"]->banId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  banData["<<i<<"]->created " << result->banData[i]->created; Log(ss); // Class: time_t 
        ss << "  banData["<<i<<"]->expires " << result->banData[i]->expires; Log(ss); // Class: time_t 
        if( result->banData[i]->IPAddress ) { ss << "  banData["<<i<<"]->IPAddress " << result->banData[i]->IPAddress; Log(ss); } else { ss << "  banData["<<i<<"]->IPAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->MACAddress ) { ss << "  banData["<<i<<"]->MACAddress " << result->banData[i]->MACAddress; Log(ss); } else { ss << "  banData["<<i<<"]->MACAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->playFabId ) { ss << "  banData["<<i<<"]->playFabId " << result->banData[i]->playFabId; Log(ss); } else { ss << "  banData["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->reason ) { ss << "  banData["<<i<<"]->reason " << result->banData[i]->reason; Log(ss); } else { ss << "  banData["<<i<<"]->reason = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetUserDataRequest( PlayFab::AdminModels::GetUserDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetUserDataRequest struct:
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

HRESULT AutoGenAdminTests::LogPlayFabAdminGetUserDataResult( PlayFabAdminGetUserDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetUserDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabUserDataRecordDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
        
    } 
    ss << "  dataVersion " << result->dataVersion; Log(ss); // Class: uint32_t 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGetUserInventoryRequest( PlayFab::AdminModels::GetUserInventoryRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGetUserInventoryRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGetUserInventoryResult( PlayFabAdminGetUserInventoryResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGetUserInventoryResult    
    ss << "  inventoryCount " << result->inventoryCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->inventoryCount; i++ )
    {
        ss << "  result->inventory[" << i << "]:" << result->inventory[i]; Log(ss); // PlayFabItemInstance
    } 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  virtualCurrencyCount " << result->virtualCurrencyCount; Log(ss);

    // PlayFabInt32DictionaryEntry
    for( uint32_t i=0; i<result->virtualCurrencyCount; i++ )
    {
        ss << "  result->virtualCurrency[" << i << "]:" << result->virtualCurrency[i].key << "=" << result->virtualCurrency[i].value; Log(ss);
        
    }     
    ss << "  virtualCurrencyRechargeTimesCount " << result->virtualCurrencyRechargeTimesCount; Log(ss);

    // PlayFabVirtualCurrencyRechargeTimeDictionaryEntry
    for( uint32_t i=0; i<result->virtualCurrencyRechargeTimesCount; i++ )
    {
        ss << "  result->virtualCurrencyRechargeTimes[" << i << "]:" << result->virtualCurrencyRechargeTimes[i].key << "=" << result->virtualCurrencyRechargeTimes[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminGrantItemsToUsersRequest( PlayFab::AdminModels::GrantItemsToUsersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminGrantItemsToUsersRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  itemGrantsCount " << request->itemGrantsCount; Log(ss);

    // PlayFabAdminItemGrant
    for( uint32_t i=0; i<request->itemGrantsCount; i++ )
    {
        if( request->itemGrants[i]->annotation ) { ss << "  itemGrants["<<i<<"]->annotation " << request->itemGrants[i]->annotation; Log(ss); } else { ss << "  itemGrants["<<i<<"]->annotation = nullptr"; Log(ss); } // Class: const char* 
        if( request->itemGrants[i]->characterId ) { ss << "  itemGrants["<<i<<"]->characterId " << request->itemGrants[i]->characterId; Log(ss); } else { ss << "  itemGrants["<<i<<"]->characterId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  itemGrants["<<i<<"]->data " << request->itemGrants[i]->data; Log(ss); // Class: PlayFabStringDictionaryEntry 
        if( request->itemGrants[i]->itemId ) { ss << "  itemGrants["<<i<<"]->itemId " << request->itemGrants[i]->itemId; Log(ss); } else { ss << "  itemGrants["<<i<<"]->itemId = nullptr"; Log(ss); } // Class: const char* 
        if( request->itemGrants[i]->keysToRemove ) { ss << "  itemGrants["<<i<<"]->keysToRemove " << request->itemGrants[i]->keysToRemove; Log(ss); } else { ss << "  itemGrants["<<i<<"]->keysToRemove = nullptr"; Log(ss); } // Class: const char* 
        if( request->itemGrants[i]->playFabId ) { ss << "  itemGrants["<<i<<"]->playFabId " << request->itemGrants[i]->playFabId; Log(ss); } else { ss << "  itemGrants["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminGrantItemsToUsersResult( PlayFabAdminGrantItemsToUsersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminGrantItemsToUsersResult    
    ss << "  itemGrantResultsCount " << result->itemGrantResultsCount; Log(ss);

    // PlayFabAdminGrantedItemInstance
    for( uint32_t i=0; i<result->itemGrantResultsCount; i++ )
    {
        if( result->itemGrantResults[i]->annotation ) { ss << "  itemGrantResults["<<i<<"]->annotation " << result->itemGrantResults[i]->annotation; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->annotation = nullptr"; Log(ss); } // Class: const char* 
        if( result->itemGrantResults[i]->bundleContents ) { ss << "  itemGrantResults["<<i<<"]->bundleContents " << result->itemGrantResults[i]->bundleContents; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->bundleContents = nullptr"; Log(ss); } // Class: const char* 
        if( result->itemGrantResults[i]->bundleParent ) { ss << "  itemGrantResults["<<i<<"]->bundleParent " << result->itemGrantResults[i]->bundleParent; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->bundleParent = nullptr"; Log(ss); } // Class: const char* 
        if( result->itemGrantResults[i]->catalogVersion ) { ss << "  itemGrantResults["<<i<<"]->catalogVersion " << result->itemGrantResults[i]->catalogVersion; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->catalogVersion = nullptr"; Log(ss); } // Class: const char* 
        if( result->itemGrantResults[i]->characterId ) { ss << "  itemGrantResults["<<i<<"]->characterId " << result->itemGrantResults[i]->characterId; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->characterId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  itemGrantResults["<<i<<"]->customData " << result->itemGrantResults[i]->customData; Log(ss); // Class: PlayFabStringDictionaryEntry 
        if( result->itemGrantResults[i]->displayName ) { ss << "  itemGrantResults["<<i<<"]->displayName " << result->itemGrantResults[i]->displayName; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  itemGrantResults["<<i<<"]->expiration " << result->itemGrantResults[i]->expiration; Log(ss); // Class: time_t 
        if( result->itemGrantResults[i]->itemClass ) { ss << "  itemGrantResults["<<i<<"]->itemClass " << result->itemGrantResults[i]->itemClass; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->itemClass = nullptr"; Log(ss); } // Class: const char* 
        if( result->itemGrantResults[i]->itemId ) { ss << "  itemGrantResults["<<i<<"]->itemId " << result->itemGrantResults[i]->itemId; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->itemId = nullptr"; Log(ss); } // Class: const char* 
        if( result->itemGrantResults[i]->itemInstanceId ) { ss << "  itemGrantResults["<<i<<"]->itemInstanceId " << result->itemGrantResults[i]->itemInstanceId; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
        if( result->itemGrantResults[i]->playFabId ) { ss << "  itemGrantResults["<<i<<"]->playFabId " << result->itemGrantResults[i]->playFabId; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  itemGrantResults["<<i<<"]->purchaseDate " << result->itemGrantResults[i]->purchaseDate; Log(ss); // Class: time_t 
        ss << "  itemGrantResults["<<i<<"]->remainingUses " << result->itemGrantResults[i]->remainingUses; Log(ss); // Class: int32_t 
        ss << "  itemGrantResults["<<i<<"]->result " << result->itemGrantResults[i]->result; Log(ss); // Class: bool 
        if( result->itemGrantResults[i]->unitCurrency ) { ss << "  itemGrantResults["<<i<<"]->unitCurrency " << result->itemGrantResults[i]->unitCurrency; Log(ss); } else { ss << "  itemGrantResults["<<i<<"]->unitCurrency = nullptr"; Log(ss); } // Class: const char* 
        ss << "  itemGrantResults["<<i<<"]->unitPrice " << result->itemGrantResults[i]->unitPrice; Log(ss); // Class: uint32_t 
        ss << "  itemGrantResults["<<i<<"]->usesIncrementedBy " << result->itemGrantResults[i]->usesIncrementedBy; Log(ss); // Class: int32_t 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminIncrementLimitedEditionItemAvailabilityRequest( PlayFab::AdminModels::IncrementLimitedEditionItemAvailabilityRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest struct:
    // request->amount: int32_t
    ss << "  amount " << request->amount; Log(ss); // Class: int32_t 
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->itemId ) { ss << "  itemId " << request->itemId; Log(ss); } else { ss << "  itemId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminIncrementPlayerStatisticVersionRequest( PlayFab::AdminModels::IncrementPlayerStatisticVersionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminIncrementPlayerStatisticVersionRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminIncrementPlayerStatisticVersionResult( PlayFabAdminIncrementPlayerStatisticVersionResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminIncrementPlayerStatisticVersionResult
    ss << "  statisticVersion " << result->statisticVersion; Log(ss); // Class: PlayFabAdminPlayerStatisticVersion 
    return S_OK;
}

HRESULT AutoGenAdminTests::LogPlayFabAdminListOpenIdConnectionResponse( PlayFabAdminListOpenIdConnectionResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminListOpenIdConnectionResponse    
    ss << "  connectionsCount " << result->connectionsCount; Log(ss);

    // PlayFabAdminOpenIdConnection
    for( uint32_t i=0; i<result->connectionsCount; i++ )
    {
        if( result->connections[i]->clientId ) { ss << "  connections["<<i<<"]->clientId " << result->connections[i]->clientId; Log(ss); } else { ss << "  connections["<<i<<"]->clientId = nullptr"; Log(ss); } // Class: const char* 
        if( result->connections[i]->clientSecret ) { ss << "  connections["<<i<<"]->clientSecret " << result->connections[i]->clientSecret; Log(ss); } else { ss << "  connections["<<i<<"]->clientSecret = nullptr"; Log(ss); } // Class: const char* 
        if( result->connections[i]->connectionId ) { ss << "  connections["<<i<<"]->connectionId " << result->connections[i]->connectionId; Log(ss); } else { ss << "  connections["<<i<<"]->connectionId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  connections["<<i<<"]->discoverConfiguration " << result->connections[i]->discoverConfiguration; Log(ss); // Class: bool 
        ss << "  connections["<<i<<"]->issuerInformation " << result->connections[i]->issuerInformation; Log(ss); // Class: PlayFabAdminOpenIdIssuerInformation 
    } 
    return S_OK;
}

HRESULT AutoGenAdminTests::LogPlayFabAdminListBuildsResult( PlayFabAdminListBuildsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminListBuildsResult    
    ss << "  buildsCount " << result->buildsCount; Log(ss);

    // PlayFabAdminGetServerBuildInfoResult
    for( uint32_t i=0; i<result->buildsCount; i++ )
    {
        ss << "  builds["<<i<<"]->activeRegions " << result->builds[i]->activeRegions; Log(ss); // Class: PlayFabAdminRegion 
        if( result->builds[i]->buildId ) { ss << "  builds["<<i<<"]->buildId " << result->builds[i]->buildId; Log(ss); } else { ss << "  builds["<<i<<"]->buildId = nullptr"; Log(ss); } // Class: const char* 
        if( result->builds[i]->comment ) { ss << "  builds["<<i<<"]->comment " << result->builds[i]->comment; Log(ss); } else { ss << "  builds["<<i<<"]->comment = nullptr"; Log(ss); } // Class: const char* 
        if( result->builds[i]->errorMessage ) { ss << "  builds["<<i<<"]->errorMessage " << result->builds[i]->errorMessage; Log(ss); } else { ss << "  builds["<<i<<"]->errorMessage = nullptr"; Log(ss); } // Class: const char* 
        ss << "  builds["<<i<<"]->maxGamesPerHost " << result->builds[i]->maxGamesPerHost; Log(ss); // Class: int32_t 
        ss << "  builds["<<i<<"]->minFreeGameSlots " << result->builds[i]->minFreeGameSlots; Log(ss); // Class: int32_t 
        ss << "  builds["<<i<<"]->status " << result->builds[i]->status; Log(ss); // Class: PlayFabAdminGameBuildStatus 
        ss << "  builds["<<i<<"]->timestamp " << result->builds[i]->timestamp; Log(ss); // Class: time_t 
        if( result->builds[i]->titleId ) { ss << "  builds["<<i<<"]->titleId " << result->builds[i]->titleId; Log(ss); } else { ss << "  builds["<<i<<"]->titleId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

HRESULT AutoGenAdminTests::LogPlayFabAdminListVirtualCurrencyTypesResult( PlayFabAdminListVirtualCurrencyTypesResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminListVirtualCurrencyTypesResult    
    ss << "  virtualCurrenciesCount " << result->virtualCurrenciesCount; Log(ss);

    // PlayFabAdminVirtualCurrencyData
    for( uint32_t i=0; i<result->virtualCurrenciesCount; i++ )
    {
        if( result->virtualCurrencies[i]->currencyCode ) { ss << "  virtualCurrencies["<<i<<"]->currencyCode " << result->virtualCurrencies[i]->currencyCode; Log(ss); } else { ss << "  virtualCurrencies["<<i<<"]->currencyCode = nullptr"; Log(ss); } // Class: const char* 
        if( result->virtualCurrencies[i]->displayName ) { ss << "  virtualCurrencies["<<i<<"]->displayName " << result->virtualCurrencies[i]->displayName; Log(ss); } else { ss << "  virtualCurrencies["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  virtualCurrencies["<<i<<"]->initialDeposit " << result->virtualCurrencies[i]->initialDeposit; Log(ss); // Class: int32_t 
        ss << "  virtualCurrencies["<<i<<"]->rechargeMax " << result->virtualCurrencies[i]->rechargeMax; Log(ss); // Class: int32_t 
        ss << "  virtualCurrencies["<<i<<"]->rechargeRate " << result->virtualCurrencies[i]->rechargeRate; Log(ss); // Class: int32_t 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminModifyMatchmakerGameModesRequest( PlayFab::AdminModels::ModifyMatchmakerGameModesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminModifyMatchmakerGameModesRequest struct:
    // request->buildVersion: const char*
    if( request->buildVersion ) { ss << "  buildVersion " << request->buildVersion; Log(ss); } else { ss << "  buildVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  gameModesCount " << request->gameModesCount; Log(ss);

    // PlayFabAdminGameModeInfo
    for( uint32_t i=0; i<request->gameModesCount; i++ )
    {
        if( request->gameModes[i]->gamemode ) { ss << "  gameModes["<<i<<"]->gamemode " << request->gameModes[i]->gamemode; Log(ss); } else { ss << "  gameModes["<<i<<"]->gamemode = nullptr"; Log(ss); } // Class: const char* 
        ss << "  gameModes["<<i<<"]->maxPlayerCount " << request->gameModes[i]->maxPlayerCount; Log(ss); // Class: uint32_t 
        ss << "  gameModes["<<i<<"]->minPlayerCount " << request->gameModes[i]->minPlayerCount; Log(ss); // Class: uint32_t 
        ss << "  gameModes["<<i<<"]->startOpen " << request->gameModes[i]->startOpen; Log(ss); // Class: bool 
    } 

}

void AutoGenAdminTests::LogPlayFabAdminModifyServerBuildRequest( PlayFab::AdminModels::ModifyServerBuildRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminModifyServerBuildRequest struct:
    // request->activeRegions: PlayFabAdminRegion const*
    // request->activeRegionsCount: uint32_t    
    ss << "  activeRegionsCount " << request->activeRegionsCount; Log(ss);

    // PlayFabAdminRegion
    for( uint32_t i=0; i<request->activeRegionsCount; i++ )
    {
        ss << "  request->activeRegions[" << i << "]:" << request->activeRegions[i]; Log(ss); // PlayFabAdminRegion
    } 
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( request->commandLineTemplate ) { ss << "  commandLineTemplate " << request->commandLineTemplate; Log(ss); } else { ss << "  commandLineTemplate = nullptr"; Log(ss); } // Class: const char* 
    if( request->comment ) { ss << "  comment " << request->comment; Log(ss); } else { ss << "  comment = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->executablePath ) { ss << "  executablePath " << request->executablePath; Log(ss); } else { ss << "  executablePath = nullptr"; Log(ss); } // Class: const char* 
    ss << "  maxGamesPerHost " << request->maxGamesPerHost; Log(ss); // Class: int32_t 
    ss << "  minFreeGameSlots " << request->minFreeGameSlots; Log(ss); // Class: int32_t 
    ss << "  timestamp " << request->timestamp; Log(ss); // Class: time_t 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminModifyServerBuildResult( PlayFabAdminModifyServerBuildResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminModifyServerBuildResult    
    ss << "  activeRegionsCount " << result->activeRegionsCount; Log(ss);

    // PlayFabAdminRegion
    for( uint32_t i=0; i<result->activeRegionsCount; i++ )
    {
        ss << "  result->activeRegions[" << i << "]:" << result->activeRegions[i]; Log(ss); // PlayFabAdminRegion
    } 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->commandLineTemplate ) { ss << "  commandLineTemplate " << result->commandLineTemplate; Log(ss); } else { ss << "  commandLineTemplate = nullptr"; Log(ss); } // Class: const char* 
    if( result->comment ) { ss << "  comment " << result->comment; Log(ss); } else { ss << "  comment = nullptr"; Log(ss); } // Class: const char* 
    if( result->executablePath ) { ss << "  executablePath " << result->executablePath; Log(ss); } else { ss << "  executablePath = nullptr"; Log(ss); } // Class: const char* 
    ss << "  maxGamesPerHost " << result->maxGamesPerHost; Log(ss); // Class: int32_t 
    ss << "  minFreeGameSlots " << result->minFreeGameSlots; Log(ss); // Class: int32_t 
    ss << "  status " << result->status; Log(ss); // Class: PlayFabAdminGameBuildStatus 
    ss << "  timestamp " << result->timestamp; Log(ss); // Class: time_t 
    if( result->titleId ) { ss << "  titleId " << result->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminRefundPurchaseRequest( PlayFab::AdminModels::RefundPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminRefundPurchaseRequest struct:
    // request->orderId: const char*
    if( request->orderId ) { ss << "  orderId " << request->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->reason ) { ss << "  reason " << request->reason; Log(ss); } else { ss << "  reason = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminRefundPurchaseResponse( PlayFabAdminRefundPurchaseResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminRefundPurchaseResponse
    if( result->purchaseStatus ) { ss << "  purchaseStatus " << result->purchaseStatus; Log(ss); } else { ss << "  purchaseStatus = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminRemovePlayerTagRequest( PlayFab::AdminModels::RemovePlayerTagRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminRemovePlayerTagRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->tagName ) { ss << "  tagName " << request->tagName; Log(ss); } else { ss << "  tagName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminRemoveServerBuildRequest( PlayFab::AdminModels::RemoveServerBuildRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminRemoveServerBuildRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminRemoveVirtualCurrencyTypesRequest( PlayFab::AdminModels::RemoveVirtualCurrencyTypesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminRemoveVirtualCurrencyTypesRequest struct:
    // request->virtualCurrencies: PlayFabAdminVirtualCurrencyData const* const*
    // request->virtualCurrenciesCount: uint32_t    
    ss << "  virtualCurrenciesCount " << request->virtualCurrenciesCount; Log(ss);

    // PlayFabAdminVirtualCurrencyData
    for( uint32_t i=0; i<request->virtualCurrenciesCount; i++ )
    {
        if( request->virtualCurrencies[i]->currencyCode ) { ss << "  virtualCurrencies["<<i<<"]->currencyCode " << request->virtualCurrencies[i]->currencyCode; Log(ss); } else { ss << "  virtualCurrencies["<<i<<"]->currencyCode = nullptr"; Log(ss); } // Class: const char* 
        if( request->virtualCurrencies[i]->displayName ) { ss << "  virtualCurrencies["<<i<<"]->displayName " << request->virtualCurrencies[i]->displayName; Log(ss); } else { ss << "  virtualCurrencies["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  virtualCurrencies["<<i<<"]->initialDeposit " << request->virtualCurrencies[i]->initialDeposit; Log(ss); // Class: int32_t 
        ss << "  virtualCurrencies["<<i<<"]->rechargeMax " << request->virtualCurrencies[i]->rechargeMax; Log(ss); // Class: int32_t 
        ss << "  virtualCurrencies["<<i<<"]->rechargeRate " << request->virtualCurrencies[i]->rechargeRate; Log(ss); // Class: int32_t 
    } 

}

void AutoGenAdminTests::LogPlayFabAdminResetCharacterStatisticsRequest( PlayFab::AdminModels::ResetCharacterStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminResetCharacterStatisticsRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminResetPasswordRequest( PlayFab::AdminModels::ResetPasswordRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminResetPasswordRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->password ) { ss << "  password " << request->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( request->token ) { ss << "  token " << request->token; Log(ss); } else { ss << "  token = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminResetUserStatisticsRequest( PlayFab::AdminModels::ResetUserStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminResetUserStatisticsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminResolvePurchaseDisputeRequest( PlayFab::AdminModels::ResolvePurchaseDisputeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminResolvePurchaseDisputeRequest struct:
    // request->orderId: const char*
    if( request->orderId ) { ss << "  orderId " << request->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  outcome " << request->outcome; Log(ss); // Class: PlayFabAdminResolutionOutcome 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->reason ) { ss << "  reason " << request->reason; Log(ss); } else { ss << "  reason = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminResolvePurchaseDisputeResponse( PlayFabAdminResolvePurchaseDisputeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminResolvePurchaseDisputeResponse
    if( result->purchaseStatus ) { ss << "  purchaseStatus " << result->purchaseStatus; Log(ss); } else { ss << "  purchaseStatus = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminRevokeAllBansForUserRequest( PlayFab::AdminModels::RevokeAllBansForUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminRevokeAllBansForUserRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminRevokeAllBansForUserResult( PlayFabAdminRevokeAllBansForUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminRevokeAllBansForUserResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PlayFabAdminBanInfo
    for( uint32_t i=0; i<result->banDataCount; i++ )
    {
        ss << "  banData["<<i<<"]->active " << result->banData[i]->active; Log(ss); // Class: bool 
        if( result->banData[i]->banId ) { ss << "  banData["<<i<<"]->banId " << result->banData[i]->banId; Log(ss); } else { ss << "  banData["<<i<<"]->banId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  banData["<<i<<"]->created " << result->banData[i]->created; Log(ss); // Class: time_t 
        ss << "  banData["<<i<<"]->expires " << result->banData[i]->expires; Log(ss); // Class: time_t 
        if( result->banData[i]->IPAddress ) { ss << "  banData["<<i<<"]->IPAddress " << result->banData[i]->IPAddress; Log(ss); } else { ss << "  banData["<<i<<"]->IPAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->MACAddress ) { ss << "  banData["<<i<<"]->MACAddress " << result->banData[i]->MACAddress; Log(ss); } else { ss << "  banData["<<i<<"]->MACAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->playFabId ) { ss << "  banData["<<i<<"]->playFabId " << result->banData[i]->playFabId; Log(ss); } else { ss << "  banData["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->reason ) { ss << "  banData["<<i<<"]->reason " << result->banData[i]->reason; Log(ss); } else { ss << "  banData["<<i<<"]->reason = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminRevokeBansRequest( PlayFab::AdminModels::RevokeBansRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminRevokeBansRequest struct:
    // request->banIds: const char* const*
    // request->banIdsCount: uint32_t    
    ss << "  banIdsCount " << request->banIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->banIdsCount; i++ )
    {
        ss << "  request->banIds[" << i << "]:" << request->banIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminRevokeBansResult( PlayFabAdminRevokeBansResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminRevokeBansResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PlayFabAdminBanInfo
    for( uint32_t i=0; i<result->banDataCount; i++ )
    {
        ss << "  banData["<<i<<"]->active " << result->banData[i]->active; Log(ss); // Class: bool 
        if( result->banData[i]->banId ) { ss << "  banData["<<i<<"]->banId " << result->banData[i]->banId; Log(ss); } else { ss << "  banData["<<i<<"]->banId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  banData["<<i<<"]->created " << result->banData[i]->created; Log(ss); // Class: time_t 
        ss << "  banData["<<i<<"]->expires " << result->banData[i]->expires; Log(ss); // Class: time_t 
        if( result->banData[i]->IPAddress ) { ss << "  banData["<<i<<"]->IPAddress " << result->banData[i]->IPAddress; Log(ss); } else { ss << "  banData["<<i<<"]->IPAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->MACAddress ) { ss << "  banData["<<i<<"]->MACAddress " << result->banData[i]->MACAddress; Log(ss); } else { ss << "  banData["<<i<<"]->MACAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->playFabId ) { ss << "  banData["<<i<<"]->playFabId " << result->banData[i]->playFabId; Log(ss); } else { ss << "  banData["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->reason ) { ss << "  banData["<<i<<"]->reason " << result->banData[i]->reason; Log(ss); } else { ss << "  banData["<<i<<"]->reason = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminRevokeInventoryItemRequest( PlayFab::AdminModels::RevokeInventoryItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminRevokeInventoryItemRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminRevokeInventoryItemsRequest( PlayFab::AdminModels::RevokeInventoryItemsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminRevokeInventoryItemsRequest struct:
    // request->items: PlayFabAdminRevokeInventoryItem const* const*
    // request->itemsCount: uint32_t    
    ss << "  itemsCount " << request->itemsCount; Log(ss);

    // PlayFabAdminRevokeInventoryItem
    for( uint32_t i=0; i<request->itemsCount; i++ )
    {
        if( request->items[i]->characterId ) { ss << "  items["<<i<<"]->characterId " << request->items[i]->characterId; Log(ss); } else { ss << "  items["<<i<<"]->characterId = nullptr"; Log(ss); } // Class: const char* 
        if( request->items[i]->itemInstanceId ) { ss << "  items["<<i<<"]->itemInstanceId " << request->items[i]->itemInstanceId; Log(ss); } else { ss << "  items["<<i<<"]->itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
        if( request->items[i]->playFabId ) { ss << "  items["<<i<<"]->playFabId " << request->items[i]->playFabId; Log(ss); } else { ss << "  items["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminRevokeInventoryItemsResult( PlayFabAdminRevokeInventoryItemsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminRevokeInventoryItemsResult    
    ss << "  errorsCount " << result->errorsCount; Log(ss);

    // PlayFabAdminRevokeItemError
    for( uint32_t i=0; i<result->errorsCount; i++ )
    {
        ss << "  errors["<<i<<"]->error " << result->errors[i]->error; Log(ss); // Class: PlayFabAdminGenericErrorCodes 
        ss << "  errors["<<i<<"]->item " << result->errors[i]->item; Log(ss); // Class: PlayFabAdminRevokeInventoryItem 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminRunTaskRequest( PlayFab::AdminModels::RunTaskRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminRunTaskRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  identifier " << request->identifier; Log(ss); // Class: PlayFabAdminNameIdentifier 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminRunTaskResult( PlayFabAdminRunTaskResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminRunTaskResult
    if( result->taskInstanceId ) { ss << "  taskInstanceId " << result->taskInstanceId; Log(ss); } else { ss << "  taskInstanceId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminSendAccountRecoveryEmailRequest( PlayFab::AdminModels::SendAccountRecoveryEmailRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminSendAccountRecoveryEmailRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->email ) { ss << "  email " << request->email; Log(ss); } else { ss << "  email = nullptr"; Log(ss); } // Class: const char* 
    if( request->emailTemplateId ) { ss << "  emailTemplateId " << request->emailTemplateId; Log(ss); } else { ss << "  emailTemplateId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminUpdateCatalogItemsRequest( PlayFab::AdminModels::UpdateCatalogItemsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateCatalogItemsRequest struct:
    // request->catalog: PlayFabAdminCatalogItem const* const*
    // request->catalogCount: uint32_t    
    ss << "  catalogCount " << request->catalogCount; Log(ss);

    // PlayFabAdminCatalogItem
    for( uint32_t i=0; i<request->catalogCount; i++ )
    {
        ss << "  catalog["<<i<<"]->bundle " << request->catalog[i]->bundle; Log(ss); // Class: PlayFabAdminCatalogItemBundleInfo 
        ss << "  catalog["<<i<<"]->canBecomeCharacter " << request->catalog[i]->canBecomeCharacter; Log(ss); // Class: bool 
        if( request->catalog[i]->catalogVersion ) { ss << "  catalog["<<i<<"]->catalogVersion " << request->catalog[i]->catalogVersion; Log(ss); } else { ss << "  catalog["<<i<<"]->catalogVersion = nullptr"; Log(ss); } // Class: const char* 
        ss << "  catalog["<<i<<"]->consumable " << request->catalog[i]->consumable; Log(ss); // Class: PlayFabAdminCatalogItemConsumableInfo 
        ss << "  catalog["<<i<<"]->container " << request->catalog[i]->container; Log(ss); // Class: PlayFabAdminCatalogItemContainerInfo 
        if( request->catalog[i]->customData ) { ss << "  catalog["<<i<<"]->customData " << request->catalog[i]->customData; Log(ss); } else { ss << "  catalog["<<i<<"]->customData = nullptr"; Log(ss); } // Class: const char* 
        if( request->catalog[i]->description ) { ss << "  catalog["<<i<<"]->description " << request->catalog[i]->description; Log(ss); } else { ss << "  catalog["<<i<<"]->description = nullptr"; Log(ss); } // Class: const char* 
        if( request->catalog[i]->displayName ) { ss << "  catalog["<<i<<"]->displayName " << request->catalog[i]->displayName; Log(ss); } else { ss << "  catalog["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  catalog["<<i<<"]->initialLimitedEditionCount " << request->catalog[i]->initialLimitedEditionCount; Log(ss); // Class: int32_t 
        ss << "  catalog["<<i<<"]->isLimitedEdition " << request->catalog[i]->isLimitedEdition; Log(ss); // Class: bool 
        ss << "  catalog["<<i<<"]->isStackable " << request->catalog[i]->isStackable; Log(ss); // Class: bool 
        ss << "  catalog["<<i<<"]->isTradable " << request->catalog[i]->isTradable; Log(ss); // Class: bool 
        if( request->catalog[i]->itemClass ) { ss << "  catalog["<<i<<"]->itemClass " << request->catalog[i]->itemClass; Log(ss); } else { ss << "  catalog["<<i<<"]->itemClass = nullptr"; Log(ss); } // Class: const char* 
        if( request->catalog[i]->itemId ) { ss << "  catalog["<<i<<"]->itemId " << request->catalog[i]->itemId; Log(ss); } else { ss << "  catalog["<<i<<"]->itemId = nullptr"; Log(ss); } // Class: const char* 
        if( request->catalog[i]->itemImageUrl ) { ss << "  catalog["<<i<<"]->itemImageUrl " << request->catalog[i]->itemImageUrl; Log(ss); } else { ss << "  catalog["<<i<<"]->itemImageUrl = nullptr"; Log(ss); } // Class: const char* 
        ss << "  catalog["<<i<<"]->realCurrencyPrices " << request->catalog[i]->realCurrencyPrices; Log(ss); // Class: PlayFabUint32DictionaryEntry 
        if( request->catalog[i]->tags ) { ss << "  catalog["<<i<<"]->tags " << request->catalog[i]->tags; Log(ss); } else { ss << "  catalog["<<i<<"]->tags = nullptr"; Log(ss); } // Class: const char* 
        ss << "  catalog["<<i<<"]->virtualCurrencyPrices " << request->catalog[i]->virtualCurrencyPrices; Log(ss); // Class: PlayFabUint32DictionaryEntry 
    } 
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  setAsDefaultCatalog " << request->setAsDefaultCatalog; Log(ss); // Class: bool 

}

void AutoGenAdminTests::LogPlayFabAdminSetPlayerSecretRequest( PlayFab::AdminModels::SetPlayerSecretRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminSetPlayerSecretRequest struct:
    // request->playerSecret: const char*
    if( request->playerSecret ) { ss << "  playerSecret " << request->playerSecret; Log(ss); } else { ss << "  playerSecret = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminSetPublishedRevisionRequest( PlayFab::AdminModels::SetPublishedRevisionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminSetPublishedRevisionRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  revision " << request->revision; Log(ss); // Class: int32_t 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

void AutoGenAdminTests::LogPlayFabAdminSetPublisherDataRequest( PlayFab::AdminModels::SetPublisherDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminSetPublisherDataRequest struct:
    // request->key: const char*
    if( request->key ) { ss << "  key " << request->key; Log(ss); } else { ss << "  key = nullptr"; Log(ss); } // Class: const char* 
    if( request->value ) { ss << "  value " << request->value; Log(ss); } else { ss << "  value = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminUpdateStoreItemsRequest( PlayFab::AdminModels::UpdateStoreItemsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateStoreItemsRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  marketingData " << request->marketingData; Log(ss); // Class: PlayFabAdminStoreMarketingModel     
    ss << "  storeCount " << request->storeCount; Log(ss);

    // PlayFabAdminStoreItem
    for( uint32_t i=0; i<request->storeCount; i++ )
    {
        if( request->store[i]->customData.stringValue ) { ss << "  store["<<i<<"]->customData " << request->store[i]->customData.stringValue; Log(ss); } else { ss << "  store[i]->customData = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        ss << "  store["<<i<<"]->displayPosition " << request->store[i]->displayPosition; Log(ss); // Class: uint32_t 
        if( request->store[i]->itemId ) { ss << "  store["<<i<<"]->itemId " << request->store[i]->itemId; Log(ss); } else { ss << "  store["<<i<<"]->itemId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  store["<<i<<"]->realCurrencyPrices " << request->store[i]->realCurrencyPrices; Log(ss); // Class: PlayFabUint32DictionaryEntry 
        ss << "  store["<<i<<"]->virtualCurrencyPrices " << request->store[i]->virtualCurrencyPrices; Log(ss); // Class: PlayFabUint32DictionaryEntry 
    } 
    if( request->storeId ) { ss << "  storeId " << request->storeId; Log(ss); } else { ss << "  storeId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminSetTitleDataRequest( PlayFab::AdminModels::SetTitleDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminSetTitleDataRequest struct:
    // request->key: const char*
    if( request->key ) { ss << "  key " << request->key; Log(ss); } else { ss << "  key = nullptr"; Log(ss); } // Class: const char* 
    if( request->value ) { ss << "  value " << request->value; Log(ss); } else { ss << "  value = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminSetTitleDataAndOverridesRequest( PlayFab::AdminModels::SetTitleDataAndOverridesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminSetTitleDataAndOverridesRequest struct:
    // request->keyValues: PlayFabAdminTitleDataKeyValue const* const*
    // request->keyValuesCount: uint32_t    
    ss << "  keyValuesCount " << request->keyValuesCount; Log(ss);

    // PlayFabAdminTitleDataKeyValue
    for( uint32_t i=0; i<request->keyValuesCount; i++ )
    {
        if( request->keyValues[i]->key ) { ss << "  keyValues["<<i<<"]->key " << request->keyValues[i]->key; Log(ss); } else { ss << "  keyValues["<<i<<"]->key = nullptr"; Log(ss); } // Class: const char* 
        if( request->keyValues[i]->value ) { ss << "  keyValues["<<i<<"]->value " << request->keyValues[i]->value; Log(ss); } else { ss << "  keyValues["<<i<<"]->value = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( request->overrideLabel ) { ss << "  overrideLabel " << request->overrideLabel; Log(ss); } else { ss << "  overrideLabel = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminSetupPushNotificationRequest( PlayFab::AdminModels::SetupPushNotificationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminSetupPushNotificationRequest struct:
    // request->credential: const char*
    if( request->credential ) { ss << "  credential " << request->credential; Log(ss); } else { ss << "  credential = nullptr"; Log(ss); } // Class: const char* 
    if( request->key ) { ss << "  key " << request->key; Log(ss); } else { ss << "  key = nullptr"; Log(ss); } // Class: const char* 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 
    ss << "  overwriteOldARN " << request->overwriteOldARN; Log(ss); // Class: bool 
    ss << "  platform " << request->platform; Log(ss); // Class: PlayFabAdminPushSetupPlatform 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminSetupPushNotificationResult( PlayFabAdminSetupPushNotificationResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminSetupPushNotificationResult
    if( result->aRN ) { ss << "  aRN " << result->aRN; Log(ss); } else { ss << "  aRN = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminSubtractUserVirtualCurrencyRequest( PlayFab::AdminModels::SubtractUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminSubtractUserVirtualCurrencyRequest struct:
    // request->amount: int32_t
    ss << "  amount " << request->amount; Log(ss); // Class: int32_t     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->virtualCurrency ) { ss << "  virtualCurrency " << request->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminUpdateBansRequest( PlayFab::AdminModels::UpdateBansRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateBansRequest struct:
    // request->bans: PlayFabAdminUpdateBanRequest const* const*
    // request->bansCount: uint32_t    
    ss << "  bansCount " << request->bansCount; Log(ss);

    // PlayFabAdminUpdateBanRequest
    for( uint32_t i=0; i<request->bansCount; i++ )
    {
        ss << "  bans["<<i<<"]->active " << request->bans[i]->active; Log(ss); // Class: bool 
        if( request->bans[i]->banId ) { ss << "  bans["<<i<<"]->banId " << request->bans[i]->banId; Log(ss); } else { ss << "  bans["<<i<<"]->banId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  bans["<<i<<"]->expires " << request->bans[i]->expires; Log(ss); // Class: time_t 
        if( request->bans[i]->IPAddress ) { ss << "  bans["<<i<<"]->IPAddress " << request->bans[i]->IPAddress; Log(ss); } else { ss << "  bans["<<i<<"]->IPAddress = nullptr"; Log(ss); } // Class: const char* 
        if( request->bans[i]->MACAddress ) { ss << "  bans["<<i<<"]->MACAddress " << request->bans[i]->MACAddress; Log(ss); } else { ss << "  bans["<<i<<"]->MACAddress = nullptr"; Log(ss); } // Class: const char* 
        ss << "  bans["<<i<<"]->permanent " << request->bans[i]->permanent; Log(ss); // Class: bool 
        if( request->bans[i]->reason ) { ss << "  bans["<<i<<"]->reason " << request->bans[i]->reason; Log(ss); } else { ss << "  bans["<<i<<"]->reason = nullptr"; Log(ss); } // Class: const char* 
    } 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminUpdateBansResult( PlayFabAdminUpdateBansResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminUpdateBansResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PlayFabAdminBanInfo
    for( uint32_t i=0; i<result->banDataCount; i++ )
    {
        ss << "  banData["<<i<<"]->active " << result->banData[i]->active; Log(ss); // Class: bool 
        if( result->banData[i]->banId ) { ss << "  banData["<<i<<"]->banId " << result->banData[i]->banId; Log(ss); } else { ss << "  banData["<<i<<"]->banId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  banData["<<i<<"]->created " << result->banData[i]->created; Log(ss); // Class: time_t 
        ss << "  banData["<<i<<"]->expires " << result->banData[i]->expires; Log(ss); // Class: time_t 
        if( result->banData[i]->IPAddress ) { ss << "  banData["<<i<<"]->IPAddress " << result->banData[i]->IPAddress; Log(ss); } else { ss << "  banData["<<i<<"]->IPAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->MACAddress ) { ss << "  banData["<<i<<"]->MACAddress " << result->banData[i]->MACAddress; Log(ss); } else { ss << "  banData["<<i<<"]->MACAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->playFabId ) { ss << "  banData["<<i<<"]->playFabId " << result->banData[i]->playFabId; Log(ss); } else { ss << "  banData["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->banData[i]->reason ) { ss << "  banData["<<i<<"]->reason " << result->banData[i]->reason; Log(ss); } else { ss << "  banData["<<i<<"]->reason = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminUpdateCloudScriptRequest( PlayFab::AdminModels::UpdateCloudScriptRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateCloudScriptRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->developerPlayFabId ) { ss << "  developerPlayFabId " << request->developerPlayFabId; Log(ss); } else { ss << "  developerPlayFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  filesCount " << request->filesCount; Log(ss);

    // PlayFabAdminCloudScriptFile
    for( uint32_t i=0; i<request->filesCount; i++ )
    {
        if( request->files[i]->fileContents ) { ss << "  files["<<i<<"]->fileContents " << request->files[i]->fileContents; Log(ss); } else { ss << "  files["<<i<<"]->fileContents = nullptr"; Log(ss); } // Class: const char* 
        if( request->files[i]->filename ) { ss << "  files["<<i<<"]->filename " << request->files[i]->filename; Log(ss); } else { ss << "  files["<<i<<"]->filename = nullptr"; Log(ss); } // Class: const char* 
    } 
    ss << "  publish " << request->publish; Log(ss); // Class: bool 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminUpdateCloudScriptResult( PlayFabAdminUpdateCloudScriptResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminUpdateCloudScriptResult
    ss << "  revision " << result->revision; Log(ss); // Class: int32_t 
    ss << "  version " << result->version; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminUpdateOpenIdConnectionRequest( PlayFab::AdminModels::UpdateOpenIdConnectionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateOpenIdConnectionRequest struct:
    // request->clientId: const char*
    if( request->clientId ) { ss << "  clientId " << request->clientId; Log(ss); } else { ss << "  clientId = nullptr"; Log(ss); } // Class: const char* 
    if( request->clientSecret ) { ss << "  clientSecret " << request->clientSecret; Log(ss); } else { ss << "  clientSecret = nullptr"; Log(ss); } // Class: const char* 
    if( request->connectionId ) { ss << "  connectionId " << request->connectionId; Log(ss); } else { ss << "  connectionId = nullptr"; Log(ss); } // Class: const char* 
    if( request->issuerDiscoveryUrl ) { ss << "  issuerDiscoveryUrl " << request->issuerDiscoveryUrl; Log(ss); } else { ss << "  issuerDiscoveryUrl = nullptr"; Log(ss); } // Class: const char* 
    ss << "  issuerInformation " << request->issuerInformation; Log(ss); // Class: PlayFabAdminOpenIdIssuerInformation 

}

void AutoGenAdminTests::LogPlayFabAdminUpdatePlayerSharedSecretRequest( PlayFab::AdminModels::UpdatePlayerSharedSecretRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdatePlayerSharedSecretRequest struct:
    // request->disabled: bool
    ss << "  disabled " << request->disabled; Log(ss); // Class: bool 
    if( request->friendlyName ) { ss << "  friendlyName " << request->friendlyName; Log(ss); } else { ss << "  friendlyName = nullptr"; Log(ss); } // Class: const char* 
    if( request->secretKey ) { ss << "  secretKey " << request->secretKey; Log(ss); } else { ss << "  secretKey = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenAdminTests::LogPlayFabAdminUpdatePlayerStatisticDefinitionRequest( PlayFab::AdminModels::UpdatePlayerStatisticDefinitionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdatePlayerStatisticDefinitionRequest struct:
    // request->aggregationMethod: PlayFabAdminStatisticAggregationMethod const*
    ss << "  aggregationMethod " << request->aggregationMethod; Log(ss); // Class: PlayFabAdminStatisticAggregationMethod 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  versionChangeInterval " << request->versionChangeInterval; Log(ss); // Class: PlayFabAdminStatisticResetIntervalOption 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminUpdatePlayerStatisticDefinitionResult( PlayFabAdminUpdatePlayerStatisticDefinitionResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminUpdatePlayerStatisticDefinitionResult
    ss << "  statistic " << result->statistic; Log(ss); // Class: PlayFabAdminPlayerStatisticDefinition 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminUpdatePolicyRequest( PlayFab::AdminModels::UpdatePolicyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdatePolicyRequest struct:
    // request->overwritePolicy: bool
    ss << "  overwritePolicy " << request->overwritePolicy; Log(ss); // Class: bool 
    if( request->policyName ) { ss << "  policyName " << request->policyName; Log(ss); } else { ss << "  policyName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  policyVersion " << request->policyVersion; Log(ss); // Class: int32_t     
    ss << "  statementsCount " << request->statementsCount; Log(ss);

    // PlayFabAdminPermissionStatement
    for( uint32_t i=0; i<request->statementsCount; i++ )
    {
        if( request->statements[i]->action ) { ss << "  statements["<<i<<"]->action " << request->statements[i]->action; Log(ss); } else { ss << "  statements["<<i<<"]->action = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statements["<<i<<"]->apiConditions " << request->statements[i]->apiConditions; Log(ss); // Class: PlayFabAdminApiCondition 
        if( request->statements[i]->comment ) { ss << "  statements["<<i<<"]->comment " << request->statements[i]->comment; Log(ss); } else { ss << "  statements["<<i<<"]->comment = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statements["<<i<<"]->effect " << request->statements[i]->effect; Log(ss); // Class: PlayFabAdminEffectType 
        if( request->statements[i]->principal ) { ss << "  statements["<<i<<"]->principal " << request->statements[i]->principal; Log(ss); } else { ss << "  statements["<<i<<"]->principal = nullptr"; Log(ss); } // Class: const char* 
        if( request->statements[i]->resource ) { ss << "  statements["<<i<<"]->resource " << request->statements[i]->resource; Log(ss); } else { ss << "  statements["<<i<<"]->resource = nullptr"; Log(ss); } // Class: const char* 
    } 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminUpdatePolicyResponse( PlayFabAdminUpdatePolicyResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminUpdatePolicyResponse
    if( result->policyName ) { ss << "  policyName " << result->policyName; Log(ss); } else { ss << "  policyName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  statementsCount " << result->statementsCount; Log(ss);

    // PlayFabAdminPermissionStatement
    for( uint32_t i=0; i<result->statementsCount; i++ )
    {
        if( result->statements[i]->action ) { ss << "  statements["<<i<<"]->action " << result->statements[i]->action; Log(ss); } else { ss << "  statements["<<i<<"]->action = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statements["<<i<<"]->apiConditions " << result->statements[i]->apiConditions; Log(ss); // Class: PlayFabAdminApiCondition 
        if( result->statements[i]->comment ) { ss << "  statements["<<i<<"]->comment " << result->statements[i]->comment; Log(ss); } else { ss << "  statements["<<i<<"]->comment = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statements["<<i<<"]->effect " << result->statements[i]->effect; Log(ss); // Class: PlayFabAdminEffectType 
        if( result->statements[i]->principal ) { ss << "  statements["<<i<<"]->principal " << result->statements[i]->principal; Log(ss); } else { ss << "  statements["<<i<<"]->principal = nullptr"; Log(ss); } // Class: const char* 
        if( result->statements[i]->resource ) { ss << "  statements["<<i<<"]->resource " << result->statements[i]->resource; Log(ss); } else { ss << "  statements["<<i<<"]->resource = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminUpdateRandomResultTablesRequest( PlayFab::AdminModels::UpdateRandomResultTablesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateRandomResultTablesRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  tablesCount " << request->tablesCount; Log(ss);

    // PlayFabAdminRandomResultTable
    for( uint32_t i=0; i<request->tablesCount; i++ )
    {
        ss << "  tables["<<i<<"]->nodes " << request->tables[i]->nodes; Log(ss); // Class: PlayFabAdminResultTableNode 
        if( request->tables[i]->tableId ) { ss << "  tables["<<i<<"]->tableId " << request->tables[i]->tableId; Log(ss); } else { ss << "  tables["<<i<<"]->tableId = nullptr"; Log(ss); } // Class: const char* 
    } 

}

void AutoGenAdminTests::LogPlayFabAdminUpdateSegmentRequest( PlayFab::AdminModels::UpdateSegmentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateSegmentRequest struct:
    // request->segmentModel: PlayFabAdminSegmentModel const*
    ss << "  segmentModel " << request->segmentModel; Log(ss); // Class: PlayFabAdminSegmentModel 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminUpdateSegmentResponse( PlayFabAdminUpdateSegmentResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminUpdateSegmentResponse
    if( result->errorMessage ) { ss << "  errorMessage " << result->errorMessage; Log(ss); } else { ss << "  errorMessage = nullptr"; Log(ss); } // Class: const char* 
    if( result->segmentId ) { ss << "  segmentId " << result->segmentId; Log(ss); } else { ss << "  segmentId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminUpdateTaskRequest( PlayFab::AdminModels::UpdateTaskRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateTaskRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->description ) { ss << "  description " << request->description; Log(ss); } else { ss << "  description = nullptr"; Log(ss); } // Class: const char* 
    ss << "  identifier " << request->identifier; Log(ss); // Class: PlayFabAdminNameIdentifier 
    ss << "  isActive " << request->isActive; Log(ss); // Class: bool 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 
    if( request->parameter.stringValue ) { ss << "  parameter " << request->parameter.stringValue; Log(ss); } else { ss << "  parameter = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
    if( request->schedule ) { ss << "  schedule " << request->schedule; Log(ss); } else { ss << "  schedule = nullptr"; Log(ss); } // Class: const char* 
    ss << "  type " << request->type; Log(ss); // Class: PlayFabAdminScheduledTaskType 

}

void AutoGenAdminTests::LogPlayFabAdminUpdateUserDataRequest( PlayFab::AdminModels::UpdateUserDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateUserDataRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  dataCount " << request->dataCount; Log(ss);

    // PlayFabStringDictionaryEntry
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
    ss << "  permission " << request->permission; Log(ss); // Class: PlayFabUserDataPermission 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminUpdateUserDataResult( PlayFabAdminUpdateUserDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminUpdateUserDataResult
    ss << "  dataVersion " << result->dataVersion; Log(ss); // Class: uint32_t 
    return S_OK;
}

void AutoGenAdminTests::LogPlayFabAdminUpdateUserInternalDataRequest( PlayFab::AdminModels::UpdateUserInternalDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateUserInternalDataRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  dataCount " << request->dataCount; Log(ss);

    // PlayFabStringDictionaryEntry
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

void AutoGenAdminTests::LogPlayFabAdminUpdateUserTitleDisplayNameRequest( PlayFab::AdminModels::UpdateUserTitleDisplayNameRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAdminUpdateUserTitleDisplayNameRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->displayName ) { ss << "  displayName " << request->displayName; Log(ss); } else { ss << "  displayName = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAdminTests::LogPlayFabAdminUpdateUserTitleDisplayNameResult( PlayFabAdminUpdateUserTitleDisplayNameResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAdminUpdateUserTitleDisplayNameResult
    if( result->displayName ) { ss << "  displayName " << result->displayName; Log(ss); } else { ss << "  displayName = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

 

}
