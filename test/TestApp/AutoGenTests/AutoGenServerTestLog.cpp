#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenServerTests.h"
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

void AutoGenServerTests::LogPlayFabServerAddCharacterVirtualCurrencyRequest( PlayFab::ServerModels::AddCharacterVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerAddCharacterVirtualCurrencyRequest struct:
    // request->amount: int32_t
    ss << "  amount " << request->amount; Log(ss); // Class: int32_t 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->virtualCurrency ) { ss << "  virtualCurrency " << request->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerModifyCharacterVirtualCurrencyResult( PlayFabServerModifyCharacterVirtualCurrencyResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerModifyCharacterVirtualCurrencyResult
    ss << "  balance " << result->balance; Log(ss); // Class: int32_t 
    if( result->virtualCurrency ) { ss << "  virtualCurrency " << result->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerAddFriendRequest( PlayFab::ServerModels::AddFriendRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerAddFriendRequest struct:
    // request->friendEmail: const char*
    if( request->friendEmail ) { ss << "  friendEmail " << request->friendEmail; Log(ss); } else { ss << "  friendEmail = nullptr"; Log(ss); } // Class: const char* 
    if( request->friendPlayFabId ) { ss << "  friendPlayFabId " << request->friendPlayFabId; Log(ss); } else { ss << "  friendPlayFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->friendTitleDisplayName ) { ss << "  friendTitleDisplayName " << request->friendTitleDisplayName; Log(ss); } else { ss << "  friendTitleDisplayName = nullptr"; Log(ss); } // Class: const char* 
    if( request->friendUsername ) { ss << "  friendUsername " << request->friendUsername; Log(ss); } else { ss << "  friendUsername = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerAddGenericIDRequest( PlayFab::ServerModels::AddGenericIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerAddGenericIDRequest struct:
    // request->genericId: PlayFabServerGenericServiceId const*
    ss << "  genericId " << request->genericId; Log(ss); // Class: PlayFabServerGenericServiceId 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerAddPlayerTagRequest( PlayFab::ServerModels::AddPlayerTagRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerAddPlayerTagRequest struct:
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

void AutoGenServerTests::LogPlayFabServerAddSharedGroupMembersRequest( PlayFab::ServerModels::AddSharedGroupMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerAddSharedGroupMembersRequest struct:
    // request->playFabIds: const char* const*
    // request->playFabIdsCount: uint32_t    
    ss << "  playFabIdsCount " << request->playFabIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->playFabIdsCount; i++ )
    {
        ss << "  request->playFabIds[" << i << "]:" << request->playFabIds[i]; Log(ss); // const char*
    } 
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerAddUserVirtualCurrencyRequest( PlayFab::ServerModels::AddUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerAddUserVirtualCurrencyRequest struct:
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

HRESULT AutoGenServerTests::LogPlayFabServerModifyUserVirtualCurrencyResult( PlayFabServerModifyUserVirtualCurrencyResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerModifyUserVirtualCurrencyResult
    ss << "  balance " << result->balance; Log(ss); // Class: int32_t 
    ss << "  balanceChange " << result->balanceChange; Log(ss); // Class: int32_t 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( result->virtualCurrency ) { ss << "  virtualCurrency " << result->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerAuthenticateSessionTicketRequest( PlayFab::ServerModels::AuthenticateSessionTicketRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerAuthenticateSessionTicketRequest struct:
    // request->sessionTicket: const char*
    if( request->sessionTicket ) { ss << "  sessionTicket " << request->sessionTicket; Log(ss); } else { ss << "  sessionTicket = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerAuthenticateSessionTicketResult( PlayFabServerAuthenticateSessionTicketResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerAuthenticateSessionTicketResult
    ss << "  isSessionTicketExpired " << result->isSessionTicketExpired; Log(ss); // Class: bool 
    ss << "  userInfo " << result->userInfo; Log(ss); // Class: PlayFabUserAccountInfo 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerAwardSteamAchievementRequest( PlayFab::ServerModels::AwardSteamAchievementRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerAwardSteamAchievementRequest struct:
    // request->achievements: PlayFabServerAwardSteamAchievementItem const* const*
    // request->achievementsCount: uint32_t    
    ss << "  achievementsCount " << request->achievementsCount; Log(ss);

    // PlayFabServerAwardSteamAchievementItem
    for( uint32_t i=0; i<request->achievementsCount; i++ )
    {
        if( request->achievements[i]->achievementName ) { ss << "  achievements["<<i<<"]->achievementName " << request->achievements[i]->achievementName; Log(ss); } else { ss << "  achievements["<<i<<"]->achievementName = nullptr"; Log(ss); } // Class: const char* 
        if( request->achievements[i]->playFabId ) { ss << "  achievements["<<i<<"]->playFabId " << request->achievements[i]->playFabId; Log(ss); } else { ss << "  achievements["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  achievements["<<i<<"]->result " << request->achievements[i]->result; Log(ss); // Class: bool 
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerAwardSteamAchievementResult( PlayFabServerAwardSteamAchievementResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerAwardSteamAchievementResult    
    ss << "  achievementResultsCount " << result->achievementResultsCount; Log(ss);

    // PlayFabServerAwardSteamAchievementItem
    for( uint32_t i=0; i<result->achievementResultsCount; i++ )
    {
        if( result->achievementResults[i]->achievementName ) { ss << "  achievementResults["<<i<<"]->achievementName " << result->achievementResults[i]->achievementName; Log(ss); } else { ss << "  achievementResults["<<i<<"]->achievementName = nullptr"; Log(ss); } // Class: const char* 
        if( result->achievementResults[i]->playFabId ) { ss << "  achievementResults["<<i<<"]->playFabId " << result->achievementResults[i]->playFabId; Log(ss); } else { ss << "  achievementResults["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  achievementResults["<<i<<"]->result " << result->achievementResults[i]->result; Log(ss); // Class: bool 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerBanUsersRequest( PlayFab::ServerModels::BanUsersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerBanUsersRequest struct:
    // request->bans: PlayFabServerBanRequest const* const*
    // request->bansCount: uint32_t    
    ss << "  bansCount " << request->bansCount; Log(ss);

    // PlayFabServerBanRequest
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

HRESULT AutoGenServerTests::LogPlayFabServerBanUsersResult( PlayFabServerBanUsersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerBanUsersResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PlayFabServerBanInfo
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

void AutoGenServerTests::LogPlayFabServerConsumeItemRequest( PlayFab::ServerModels::ConsumeItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerConsumeItemRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  consumeCount " << request->consumeCount; Log(ss); // Class: int32_t     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerConsumeItemResult( PlayFabServerConsumeItemResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerConsumeItemResult
    if( result->itemInstanceId ) { ss << "  itemInstanceId " << result->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  remainingUses " << result->remainingUses; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerCreateSharedGroupRequest( PlayFab::ServerModels::CreateSharedGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerCreateSharedGroupRequest struct:
    // request->sharedGroupId: const char*
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerCreateSharedGroupResult( PlayFabServerCreateSharedGroupResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerCreateSharedGroupResult
    if( result->sharedGroupId ) { ss << "  sharedGroupId " << result->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerDeleteCharacterFromUserRequest( PlayFab::ServerModels::DeleteCharacterFromUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerDeleteCharacterFromUserRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  saveCharacterInventory " << request->saveCharacterInventory; Log(ss); // Class: bool 

}

void AutoGenServerTests::LogPlayFabServerDeletePlayerRequest( PlayFab::ServerModels::DeletePlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerDeletePlayerRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerDeletePushNotificationTemplateRequest( PlayFab::ServerModels::DeletePushNotificationTemplateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerDeletePushNotificationTemplateRequest struct:
    // request->pushNotificationTemplateId: const char*
    if( request->pushNotificationTemplateId ) { ss << "  pushNotificationTemplateId " << request->pushNotificationTemplateId; Log(ss); } else { ss << "  pushNotificationTemplateId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerDeleteSharedGroupRequest( PlayFab::ServerModels::DeleteSharedGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerDeleteSharedGroupRequest struct:
    // request->sharedGroupId: const char*
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerDeregisterGameRequest( PlayFab::ServerModels::DeregisterGameRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerDeregisterGameRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->lobbyId ) { ss << "  lobbyId " << request->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerEvaluateRandomResultTableRequest( PlayFab::ServerModels::EvaluateRandomResultTableRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerEvaluateRandomResultTableRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->tableId ) { ss << "  tableId " << request->tableId; Log(ss); } else { ss << "  tableId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerEvaluateRandomResultTableResult( PlayFabServerEvaluateRandomResultTableResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerEvaluateRandomResultTableResult
    if( result->resultItemId ) { ss << "  resultItemId " << result->resultItemId; Log(ss); } else { ss << "  resultItemId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerExecuteCloudScriptServerRequest( PlayFab::ServerModels::ExecuteCloudScriptServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerExecuteCloudScriptServerRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->functionParameter.stringValue ) { ss << "  functionParameter " << request->functionParameter.stringValue; Log(ss); } else { ss << "  functionParameter = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
    ss << "  generatePlayStreamEvent " << request->generatePlayStreamEvent; Log(ss); // Class: bool 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  revisionSelection " << request->revisionSelection; Log(ss); // Class: PlayFabServerCloudScriptRevisionOption 
    ss << "  specificRevision " << request->specificRevision; Log(ss); // Class: int32_t 

}

HRESULT AutoGenServerTests::LogPlayFabServerExecuteCloudScriptResult( PlayFabServerExecuteCloudScriptResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerExecuteCloudScriptResult
    ss << "  aPIRequestsIssued " << result->aPIRequestsIssued; Log(ss); // Class: int32_t 
    ss << "  error " << result->error; Log(ss); // Class: PlayFabServerScriptExecutionError 
    ss << "  executionTimeSeconds " << result->executionTimeSeconds; Log(ss); // Class: double 
    if( result->functionName ) { ss << "  functionName " << result->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( result->functionResult.stringValue ) { ss << "  functionResult " << result->functionResult.stringValue; Log(ss); } else { ss << "  functionResult = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
    ss << "  functionResultTooLarge " << result->functionResultTooLarge; Log(ss); // Class: bool 
    ss << "  httpRequestsIssued " << result->httpRequestsIssued; Log(ss); // Class: int32_t     
    ss << "  logsCount " << result->logsCount; Log(ss);

    // PlayFabServerLogStatement
    for( uint32_t i=0; i<result->logsCount; i++ )
    {
        if( result->logs[i]->data.stringValue ) { ss << "  logs["<<i<<"]->data " << result->logs[i]->data.stringValue; Log(ss); } else { ss << "  logs[i]->data = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        if( result->logs[i]->level ) { ss << "  logs["<<i<<"]->level " << result->logs[i]->level; Log(ss); } else { ss << "  logs["<<i<<"]->level = nullptr"; Log(ss); } // Class: const char* 
        if( result->logs[i]->message ) { ss << "  logs["<<i<<"]->message " << result->logs[i]->message; Log(ss); } else { ss << "  logs["<<i<<"]->message = nullptr"; Log(ss); } // Class: const char* 
    } 
    ss << "  logsTooLarge " << result->logsTooLarge; Log(ss); // Class: bool 
    ss << "  memoryConsumedBytes " << result->memoryConsumedBytes; Log(ss); // Class: uint32_t 
    ss << "  processorTimeSeconds " << result->processorTimeSeconds; Log(ss); // Class: double 
    ss << "  revision " << result->revision; Log(ss); // Class: int32_t 
    return S_OK;
}

HRESULT AutoGenServerTests::LogPlayFabServerGetAllSegmentsResult( PlayFabServerGetAllSegmentsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetAllSegmentsResult    
    ss << "  segmentsCount " << result->segmentsCount; Log(ss);

    // PlayFabServerGetSegmentResult
    for( uint32_t i=0; i<result->segmentsCount; i++ )
    {
        if( result->segments[i]->aBTestParent ) { ss << "  segments["<<i<<"]->aBTestParent " << result->segments[i]->aBTestParent; Log(ss); } else { ss << "  segments["<<i<<"]->aBTestParent = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->id ) { ss << "  segments["<<i<<"]->id " << result->segments[i]->id; Log(ss); } else { ss << "  segments["<<i<<"]->id = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->name ) { ss << "  segments["<<i<<"]->name " << result->segments[i]->name; Log(ss); } else { ss << "  segments["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerListUsersCharactersRequest( PlayFab::ServerModels::ListUsersCharactersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerListUsersCharactersRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerListUsersCharactersResult( PlayFabServerListUsersCharactersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerListUsersCharactersResult    
    ss << "  charactersCount " << result->charactersCount; Log(ss);

    // PlayFabCharacterResult
    for( uint32_t i=0; i<result->charactersCount; i++ )
    {
        ss << "  result->characters[" << i << "]:" << result->characters[i]; Log(ss); // PlayFabCharacterResult
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetCatalogItemsRequest( PlayFab::ServerModels::GetCatalogItemsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetCatalogItemsRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetCatalogItemsResult( PlayFabServerGetCatalogItemsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetCatalogItemsResult    
    ss << "  catalogCount " << result->catalogCount; Log(ss);

    // PlayFabServerCatalogItem
    for( uint32_t i=0; i<result->catalogCount; i++ )
    {
        ss << "  catalog["<<i<<"]->bundle " << result->catalog[i]->bundle; Log(ss); // Class: PlayFabServerCatalogItemBundleInfo 
        ss << "  catalog["<<i<<"]->canBecomeCharacter " << result->catalog[i]->canBecomeCharacter; Log(ss); // Class: bool 
        if( result->catalog[i]->catalogVersion ) { ss << "  catalog["<<i<<"]->catalogVersion " << result->catalog[i]->catalogVersion; Log(ss); } else { ss << "  catalog["<<i<<"]->catalogVersion = nullptr"; Log(ss); } // Class: const char* 
        ss << "  catalog["<<i<<"]->consumable " << result->catalog[i]->consumable; Log(ss); // Class: PlayFabServerCatalogItemConsumableInfo 
        ss << "  catalog["<<i<<"]->container " << result->catalog[i]->container; Log(ss); // Class: PlayFabServerCatalogItemContainerInfo 
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

void AutoGenServerTests::LogPlayFabServerGetCharacterDataRequest( PlayFab::ServerModels::GetCharacterDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetCharacterDataRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  ifChangedFromDataVersion " << request->ifChangedFromDataVersion; Log(ss); // Class: uint32_t     
    ss << "  keysCount " << request->keysCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysCount; i++ )
    {
        ss << "  request->keys[" << i << "]:" << request->keys[i]; Log(ss); // const char*
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetCharacterDataResult( PlayFabServerGetCharacterDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetCharacterDataResult
    if( result->characterId ) { ss << "  characterId " << result->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
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

void AutoGenServerTests::LogPlayFabServerGetCharacterInventoryRequest( PlayFab::ServerModels::GetCharacterInventoryRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetCharacterInventoryRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetCharacterInventoryResult( PlayFabServerGetCharacterInventoryResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetCharacterInventoryResult
    if( result->characterId ) { ss << "  characterId " << result->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
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

void AutoGenServerTests::LogPlayFabServerGetCharacterLeaderboardRequest( PlayFab::ServerModels::GetCharacterLeaderboardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetCharacterLeaderboardRequest struct:
    // request->characterType: const char*
    if( request->characterType ) { ss << "  characterType " << request->characterType; Log(ss); } else { ss << "  characterType = nullptr"; Log(ss); } // Class: const char* 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    ss << "  startPosition " << request->startPosition; Log(ss); // Class: int32_t 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetCharacterLeaderboardResult( PlayFabServerGetCharacterLeaderboardResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetCharacterLeaderboardResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabServerCharacterLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
        if( result->leaderboard[i]->characterId ) { ss << "  leaderboard["<<i<<"]->characterId " << result->leaderboard[i]->characterId; Log(ss); } else { ss << "  leaderboard["<<i<<"]->characterId = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->characterName ) { ss << "  leaderboard["<<i<<"]->characterName " << result->leaderboard[i]->characterName; Log(ss); } else { ss << "  leaderboard["<<i<<"]->characterName = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->characterType ) { ss << "  leaderboard["<<i<<"]->characterType " << result->leaderboard[i]->characterType; Log(ss); } else { ss << "  leaderboard["<<i<<"]->characterType = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->displayName ) { ss << "  leaderboard["<<i<<"]->displayName " << result->leaderboard[i]->displayName; Log(ss); } else { ss << "  leaderboard["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->playFabId ) { ss << "  leaderboard["<<i<<"]->playFabId " << result->leaderboard[i]->playFabId; Log(ss); } else { ss << "  leaderboard["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  leaderboard["<<i<<"]->position " << result->leaderboard[i]->position; Log(ss); // Class: int32_t 
        ss << "  leaderboard["<<i<<"]->statValue " << result->leaderboard[i]->statValue; Log(ss); // Class: int32_t 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetCharacterStatisticsRequest( PlayFab::ServerModels::GetCharacterStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetCharacterStatisticsRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetCharacterStatisticsResult( PlayFabServerGetCharacterStatisticsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetCharacterStatisticsResult
    if( result->characterId ) { ss << "  characterId " << result->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  characterStatisticsCount " << result->characterStatisticsCount; Log(ss);

    // PlayFabInt32DictionaryEntry
    for( uint32_t i=0; i<result->characterStatisticsCount; i++ )
    {
        ss << "  result->characterStatistics[" << i << "]:" << result->characterStatistics[i].key << "=" << result->characterStatistics[i].value; Log(ss);
        
    } 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetContentDownloadUrlRequest( PlayFab::ServerModels::GetContentDownloadUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetContentDownloadUrlRequest struct:
    // request->httpMethod: const char*
    if( request->httpMethod ) { ss << "  httpMethod " << request->httpMethod; Log(ss); } else { ss << "  httpMethod = nullptr"; Log(ss); } // Class: const char* 
    if( request->key ) { ss << "  key " << request->key; Log(ss); } else { ss << "  key = nullptr"; Log(ss); } // Class: const char* 
    ss << "  thruCDN " << request->thruCDN; Log(ss); // Class: bool 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetContentDownloadUrlResult( PlayFabServerGetContentDownloadUrlResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetContentDownloadUrlResult
    if( result->uRL ) { ss << "  uRL " << result->uRL; Log(ss); } else { ss << "  uRL = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetFriendLeaderboardRequest( PlayFab::ServerModels::GetFriendLeaderboardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetFriendLeaderboardRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  includeFacebookFriends " << request->includeFacebookFriends; Log(ss); // Class: bool 
    ss << "  includeSteamFriends " << request->includeSteamFriends; Log(ss); // Class: bool 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabServerPlayerProfileViewConstraints 
    ss << "  startPosition " << request->startPosition; Log(ss); // Class: int32_t 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 
    if( request->xboxToken ) { ss << "  xboxToken " << request->xboxToken; Log(ss); } else { ss << "  xboxToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetLeaderboardResult( PlayFabServerGetLeaderboardResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetLeaderboardResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabServerPlayerLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
        if( result->leaderboard[i]->displayName ) { ss << "  leaderboard["<<i<<"]->displayName " << result->leaderboard[i]->displayName; Log(ss); } else { ss << "  leaderboard["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->playFabId ) { ss << "  leaderboard["<<i<<"]->playFabId " << result->leaderboard[i]->playFabId; Log(ss); } else { ss << "  leaderboard["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  leaderboard["<<i<<"]->position " << result->leaderboard[i]->position; Log(ss); // Class: int32_t 
        ss << "  leaderboard["<<i<<"]->profile " << result->leaderboard[i]->profile; Log(ss); // Class: PlayFabPlayerProfileModel 
        ss << "  leaderboard["<<i<<"]->statValue " << result->leaderboard[i]->statValue; Log(ss); // Class: int32_t 
    } 
    ss << "  nextReset " << result->nextReset; Log(ss); // Class: time_t 
    ss << "  version " << result->version; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetFriendsListRequest( PlayFab::ServerModels::GetFriendsListRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetFriendsListRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  includeFacebookFriends " << request->includeFacebookFriends; Log(ss); // Class: bool 
    ss << "  includeSteamFriends " << request->includeSteamFriends; Log(ss); // Class: bool 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabServerPlayerProfileViewConstraints 
    if( request->xboxToken ) { ss << "  xboxToken " << request->xboxToken; Log(ss); } else { ss << "  xboxToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetFriendsListResult( PlayFabServerGetFriendsListResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetFriendsListResult    
    ss << "  friendsCount " << result->friendsCount; Log(ss);

    // PlayFabServerFriendInfo
    for( uint32_t i=0; i<result->friendsCount; i++ )
    {
        ss << "  friends["<<i<<"]->facebookInfo " << result->friends[i]->facebookInfo; Log(ss); // Class: PlayFabUserFacebookInfo 
        if( result->friends[i]->friendPlayFabId ) { ss << "  friends["<<i<<"]->friendPlayFabId " << result->friends[i]->friendPlayFabId; Log(ss); } else { ss << "  friends["<<i<<"]->friendPlayFabId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  friends["<<i<<"]->gameCenterInfo " << result->friends[i]->gameCenterInfo; Log(ss); // Class: PlayFabUserGameCenterInfo 
        ss << "  friends["<<i<<"]->profile " << result->friends[i]->profile; Log(ss); // Class: PlayFabPlayerProfileModel 
        ss << "  friends["<<i<<"]->PSNInfo " << result->friends[i]->PSNInfo; Log(ss); // Class: PlayFabUserPsnInfo 
        ss << "  friends["<<i<<"]->steamInfo " << result->friends[i]->steamInfo; Log(ss); // Class: PlayFabUserSteamInfo 
        if( result->friends[i]->tags ) { ss << "  friends["<<i<<"]->tags " << result->friends[i]->tags; Log(ss); } else { ss << "  friends["<<i<<"]->tags = nullptr"; Log(ss); } // Class: const char* 
        if( result->friends[i]->titleDisplayName ) { ss << "  friends["<<i<<"]->titleDisplayName " << result->friends[i]->titleDisplayName; Log(ss); } else { ss << "  friends["<<i<<"]->titleDisplayName = nullptr"; Log(ss); } // Class: const char* 
        if( result->friends[i]->username ) { ss << "  friends["<<i<<"]->username " << result->friends[i]->username; Log(ss); } else { ss << "  friends["<<i<<"]->username = nullptr"; Log(ss); } // Class: const char* 
        ss << "  friends["<<i<<"]->xboxInfo " << result->friends[i]->xboxInfo; Log(ss); // Class: PlayFabUserXboxInfo 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetLeaderboardRequest( PlayFab::ServerModels::GetLeaderboardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetLeaderboardRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabServerPlayerProfileViewConstraints 
    ss << "  startPosition " << request->startPosition; Log(ss); // Class: int32_t 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

void AutoGenServerTests::LogPlayFabServerGetLeaderboardAroundCharacterRequest( PlayFab::ServerModels::GetLeaderboardAroundCharacterRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetLeaderboardAroundCharacterRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterType ) { ss << "  characterType " << request->characterType; Log(ss); } else { ss << "  characterType = nullptr"; Log(ss); } // Class: const char* 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetLeaderboardAroundCharacterResult( PlayFabServerGetLeaderboardAroundCharacterResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetLeaderboardAroundCharacterResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabServerCharacterLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
        if( result->leaderboard[i]->characterId ) { ss << "  leaderboard["<<i<<"]->characterId " << result->leaderboard[i]->characterId; Log(ss); } else { ss << "  leaderboard["<<i<<"]->characterId = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->characterName ) { ss << "  leaderboard["<<i<<"]->characterName " << result->leaderboard[i]->characterName; Log(ss); } else { ss << "  leaderboard["<<i<<"]->characterName = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->characterType ) { ss << "  leaderboard["<<i<<"]->characterType " << result->leaderboard[i]->characterType; Log(ss); } else { ss << "  leaderboard["<<i<<"]->characterType = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->displayName ) { ss << "  leaderboard["<<i<<"]->displayName " << result->leaderboard[i]->displayName; Log(ss); } else { ss << "  leaderboard["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->playFabId ) { ss << "  leaderboard["<<i<<"]->playFabId " << result->leaderboard[i]->playFabId; Log(ss); } else { ss << "  leaderboard["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  leaderboard["<<i<<"]->position " << result->leaderboard[i]->position; Log(ss); // Class: int32_t 
        ss << "  leaderboard["<<i<<"]->statValue " << result->leaderboard[i]->statValue; Log(ss); // Class: int32_t 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetLeaderboardAroundUserRequest( PlayFab::ServerModels::GetLeaderboardAroundUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetLeaderboardAroundUserRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabServerPlayerProfileViewConstraints 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetLeaderboardAroundUserResult( PlayFabServerGetLeaderboardAroundUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetLeaderboardAroundUserResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabServerPlayerLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
        if( result->leaderboard[i]->displayName ) { ss << "  leaderboard["<<i<<"]->displayName " << result->leaderboard[i]->displayName; Log(ss); } else { ss << "  leaderboard["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->playFabId ) { ss << "  leaderboard["<<i<<"]->playFabId " << result->leaderboard[i]->playFabId; Log(ss); } else { ss << "  leaderboard["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  leaderboard["<<i<<"]->position " << result->leaderboard[i]->position; Log(ss); // Class: int32_t 
        ss << "  leaderboard["<<i<<"]->profile " << result->leaderboard[i]->profile; Log(ss); // Class: PlayFabPlayerProfileModel 
        ss << "  leaderboard["<<i<<"]->statValue " << result->leaderboard[i]->statValue; Log(ss); // Class: int32_t 
    } 
    ss << "  nextReset " << result->nextReset; Log(ss); // Class: time_t 
    ss << "  version " << result->version; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetLeaderboardForUsersCharactersRequest( PlayFab::ServerModels::GetLeaderboardForUsersCharactersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetLeaderboardForUsersCharactersRequest struct:
    // request->maxResultsCount: int32_t
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetLeaderboardForUsersCharactersResult( PlayFabServerGetLeaderboardForUsersCharactersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetLeaderboardForUsersCharactersResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabServerCharacterLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
        if( result->leaderboard[i]->characterId ) { ss << "  leaderboard["<<i<<"]->characterId " << result->leaderboard[i]->characterId; Log(ss); } else { ss << "  leaderboard["<<i<<"]->characterId = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->characterName ) { ss << "  leaderboard["<<i<<"]->characterName " << result->leaderboard[i]->characterName; Log(ss); } else { ss << "  leaderboard["<<i<<"]->characterName = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->characterType ) { ss << "  leaderboard["<<i<<"]->characterType " << result->leaderboard[i]->characterType; Log(ss); } else { ss << "  leaderboard["<<i<<"]->characterType = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->displayName ) { ss << "  leaderboard["<<i<<"]->displayName " << result->leaderboard[i]->displayName; Log(ss); } else { ss << "  leaderboard["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        if( result->leaderboard[i]->playFabId ) { ss << "  leaderboard["<<i<<"]->playFabId " << result->leaderboard[i]->playFabId; Log(ss); } else { ss << "  leaderboard["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  leaderboard["<<i<<"]->position " << result->leaderboard[i]->position; Log(ss); // Class: int32_t 
        ss << "  leaderboard["<<i<<"]->statValue " << result->leaderboard[i]->statValue; Log(ss); // Class: int32_t 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayerCombinedInfoRequest( PlayFab::ServerModels::GetPlayerCombinedInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayerCombinedInfoRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  infoRequestParameters " << request->infoRequestParameters; Log(ss); // Class: PlayFabServerGetPlayerCombinedInfoRequestParams 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayerCombinedInfoResult( PlayFabServerGetPlayerCombinedInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayerCombinedInfoResult
    ss << "  infoResultPayload " << result->infoResultPayload; Log(ss); // Class: PlayFabGetPlayerCombinedInfoResultPayload 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayerProfileRequest( PlayFab::ServerModels::GetPlayerProfileRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayerProfileRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabServerPlayerProfileViewConstraints 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayerProfileResult( PlayFabServerGetPlayerProfileResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayerProfileResult
    ss << "  playerProfile " << result->playerProfile; Log(ss); // Class: PlayFabPlayerProfileModel 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayersSegmentsRequest( PlayFab::ServerModels::GetPlayersSegmentsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayersSegmentsRequest struct:
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

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayerSegmentsResult( PlayFabServerGetPlayerSegmentsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayerSegmentsResult    
    ss << "  segmentsCount " << result->segmentsCount; Log(ss);

    // PlayFabServerGetSegmentResult
    for( uint32_t i=0; i<result->segmentsCount; i++ )
    {
        if( result->segments[i]->aBTestParent ) { ss << "  segments["<<i<<"]->aBTestParent " << result->segments[i]->aBTestParent; Log(ss); } else { ss << "  segments["<<i<<"]->aBTestParent = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->id ) { ss << "  segments["<<i<<"]->id " << result->segments[i]->id; Log(ss); } else { ss << "  segments["<<i<<"]->id = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->name ) { ss << "  segments["<<i<<"]->name " << result->segments[i]->name; Log(ss); } else { ss << "  segments["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayersInSegmentRequest( PlayFab::ServerModels::GetPlayersInSegmentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayersInSegmentRequest struct:
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

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayersInSegmentResult( PlayFabServerGetPlayersInSegmentResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayersInSegmentResult
    if( result->continuationToken ) { ss << "  continuationToken " << result->continuationToken; Log(ss); } else { ss << "  continuationToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  playerProfilesCount " << result->playerProfilesCount; Log(ss);

    // PlayFabServerPlayerProfile
    for( uint32_t i=0; i<result->playerProfilesCount; i++ )
    {
        ss << "  playerProfiles["<<i<<"]->adCampaignAttributions " << result->playerProfiles[i]->adCampaignAttributions; Log(ss); // Class: PlayFabServerAdCampaignAttribution 
        if( result->playerProfiles[i]->avatarUrl ) { ss << "  playerProfiles["<<i<<"]->avatarUrl " << result->playerProfiles[i]->avatarUrl; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->avatarUrl = nullptr"; Log(ss); } // Class: const char* 
        ss << "  playerProfiles["<<i<<"]->bannedUntil " << result->playerProfiles[i]->bannedUntil; Log(ss); // Class: time_t 
        ss << "  playerProfiles["<<i<<"]->contactEmailAddresses " << result->playerProfiles[i]->contactEmailAddresses; Log(ss); // Class: PlayFabServerContactEmailInfo 
        ss << "  playerProfiles["<<i<<"]->created " << result->playerProfiles[i]->created; Log(ss); // Class: time_t 
        if( result->playerProfiles[i]->displayName ) { ss << "  playerProfiles["<<i<<"]->displayName " << result->playerProfiles[i]->displayName; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  playerProfiles["<<i<<"]->lastLogin " << result->playerProfiles[i]->lastLogin; Log(ss); // Class: time_t 
        ss << "  playerProfiles["<<i<<"]->linkedAccounts " << result->playerProfiles[i]->linkedAccounts; Log(ss); // Class: PlayFabServerPlayerLinkedAccount 
        ss << "  playerProfiles["<<i<<"]->locations " << result->playerProfiles[i]->locations; Log(ss); // Class: PlayFabServerPlayerLocationDictionaryEntry 
        ss << "  playerProfiles["<<i<<"]->origination " << result->playerProfiles[i]->origination; Log(ss); // Class: PlayFabLoginIdentityProvider 
        if( result->playerProfiles[i]->playerExperimentVariants ) { ss << "  playerProfiles["<<i<<"]->playerExperimentVariants " << result->playerProfiles[i]->playerExperimentVariants; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->playerExperimentVariants = nullptr"; Log(ss); } // Class: const char* 
        if( result->playerProfiles[i]->playerId ) { ss << "  playerProfiles["<<i<<"]->playerId " << result->playerProfiles[i]->playerId; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->playerId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  playerProfiles["<<i<<"]->playerStatistics " << result->playerProfiles[i]->playerStatistics; Log(ss); // Class: PlayFabServerPlayerStatistic 
        if( result->playerProfiles[i]->publisherId ) { ss << "  playerProfiles["<<i<<"]->publisherId " << result->playerProfiles[i]->publisherId; Log(ss); } else { ss << "  playerProfiles["<<i<<"]->publisherId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  playerProfiles["<<i<<"]->pushNotificationRegistrations " << result->playerProfiles[i]->pushNotificationRegistrations; Log(ss); // Class: PlayFabServerPushNotificationRegistration 
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

void AutoGenServerTests::LogPlayFabServerGetPlayerStatisticsRequest( PlayFab::ServerModels::GetPlayerStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayerStatisticsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  statisticNamesCount " << request->statisticNamesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->statisticNamesCount; i++ )
    {
        ss << "  request->statisticNames[" << i << "]:" << request->statisticNames[i]; Log(ss); // const char*
    }     
    ss << "  statisticNameVersionsCount " << request->statisticNameVersionsCount; Log(ss);

    // PlayFabServerStatisticNameVersion
    for( uint32_t i=0; i<request->statisticNameVersionsCount; i++ )
    {
        if( request->statisticNameVersions[i]->statisticName ) { ss << "  statisticNameVersions["<<i<<"]->statisticName " << request->statisticNameVersions[i]->statisticName; Log(ss); } else { ss << "  statisticNameVersions["<<i<<"]->statisticName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statisticNameVersions["<<i<<"]->version " << request->statisticNameVersions[i]->version; Log(ss); // Class: uint32_t 
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayerStatisticsResult( PlayFabServerGetPlayerStatisticsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayerStatisticsResult
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  statisticsCount " << result->statisticsCount; Log(ss);

    // PlayFabStatisticValue
    for( uint32_t i=0; i<result->statisticsCount; i++ )
    {
        ss << "  result->statistics[" << i << "]:" << result->statistics[i]; Log(ss); // PlayFabStatisticValue
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayerStatisticVersionsRequest( PlayFab::ServerModels::GetPlayerStatisticVersionsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayerStatisticVersionsRequest struct:
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

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayerStatisticVersionsResult( PlayFabServerGetPlayerStatisticVersionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayerStatisticVersionsResult    
    ss << "  statisticVersionsCount " << result->statisticVersionsCount; Log(ss);

    // PlayFabServerPlayerStatisticVersion
    for( uint32_t i=0; i<result->statisticVersionsCount; i++ )
    {
        ss << "  statisticVersions["<<i<<"]->activationTime " << result->statisticVersions[i]->activationTime; Log(ss); // Class: time_t 
        ss << "  statisticVersions["<<i<<"]->deactivationTime " << result->statisticVersions[i]->deactivationTime; Log(ss); // Class: time_t 
        ss << "  statisticVersions["<<i<<"]->scheduledActivationTime " << result->statisticVersions[i]->scheduledActivationTime; Log(ss); // Class: time_t 
        ss << "  statisticVersions["<<i<<"]->scheduledDeactivationTime " << result->statisticVersions[i]->scheduledDeactivationTime; Log(ss); // Class: time_t 
        if( result->statisticVersions[i]->statisticName ) { ss << "  statisticVersions["<<i<<"]->statisticName " << result->statisticVersions[i]->statisticName; Log(ss); } else { ss << "  statisticVersions["<<i<<"]->statisticName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statisticVersions["<<i<<"]->version " << result->statisticVersions[i]->version; Log(ss); // Class: uint32_t 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayerTagsRequest( PlayFab::ServerModels::GetPlayerTagsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayerTagsRequest struct:
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

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayerTagsResult( PlayFabServerGetPlayerTagsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayerTagsResult
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  tagsCount " << result->tagsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->tagsCount; i++ )
    {
        ss << "  result->tags[" << i << "]:" << result->tags[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromFacebookIDsRequest( PlayFab::ServerModels::GetPlayFabIDsFromFacebookIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayFabIDsFromFacebookIDsRequest struct:
    // request->facebookIDs: const char* const*
    // request->facebookIDsCount: uint32_t    
    ss << "  facebookIDsCount " << request->facebookIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->facebookIDsCount; i++ )
    {
        ss << "  request->facebookIDs[" << i << "]:" << request->facebookIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromFacebookIDsResult( PlayFabServerGetPlayFabIDsFromFacebookIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayFabIDsFromFacebookIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabServerFacebookPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->facebookId ) { ss << "  data["<<i<<"]->facebookId " << result->data[i]->facebookId; Log(ss); } else { ss << "  data["<<i<<"]->facebookId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest( PlayFab::ServerModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest struct:
    // request->facebookInstantGamesIds: const char* const*
    // request->facebookInstantGamesIdsCount: uint32_t    
    ss << "  facebookInstantGamesIdsCount " << request->facebookInstantGamesIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->facebookInstantGamesIdsCount; i++ )
    {
        ss << "  request->facebookInstantGamesIds[" << i << "]:" << request->facebookInstantGamesIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult( PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabServerFacebookInstantGamesPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->facebookInstantGamesId ) { ss << "  data["<<i<<"]->facebookInstantGamesId " << result->data[i]->facebookInstantGamesId; Log(ss); } else { ss << "  data["<<i<<"]->facebookInstantGamesId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromGenericIDsRequest( PlayFab::ServerModels::GetPlayFabIDsFromGenericIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayFabIDsFromGenericIDsRequest struct:
    // request->genericIDs: PlayFabServerGenericServiceId const* const*
    // request->genericIDsCount: uint32_t    
    ss << "  genericIDsCount " << request->genericIDsCount; Log(ss);

    // PlayFabServerGenericServiceId
    for( uint32_t i=0; i<request->genericIDsCount; i++ )
    {
        if( request->genericIDs[i]->serviceName ) { ss << "  genericIDs["<<i<<"]->serviceName " << request->genericIDs[i]->serviceName; Log(ss); } else { ss << "  genericIDs["<<i<<"]->serviceName = nullptr"; Log(ss); } // Class: const char* 
        if( request->genericIDs[i]->userId ) { ss << "  genericIDs["<<i<<"]->userId " << request->genericIDs[i]->userId; Log(ss); } else { ss << "  genericIDs["<<i<<"]->userId = nullptr"; Log(ss); } // Class: const char* 
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromGenericIDsResult( PlayFabServerGetPlayFabIDsFromGenericIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayFabIDsFromGenericIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabServerGenericPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  data["<<i<<"]->genericId " << result->data[i]->genericId; Log(ss); // Class: PlayFabServerGenericServiceId 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( PlayFab::ServerModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest struct:
    // request->nintendoSwitchDeviceIds: const char* const*
    // request->nintendoSwitchDeviceIdsCount: uint32_t    
    ss << "  nintendoSwitchDeviceIdsCount " << request->nintendoSwitchDeviceIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->nintendoSwitchDeviceIdsCount; i++ )
    {
        ss << "  request->nintendoSwitchDeviceIds[" << i << "]:" << request->nintendoSwitchDeviceIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabServerNintendoSwitchPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->nintendoSwitchDeviceId ) { ss << "  data["<<i<<"]->nintendoSwitchDeviceId " << result->data[i]->nintendoSwitchDeviceId; Log(ss); } else { ss << "  data["<<i<<"]->nintendoSwitchDeviceId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest( PlayFab::ServerModels::GetPlayFabIDsFromPSNAccountIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest struct:
    // request->issuerId: int32_t const*
    ss << "  issuerId " << request->issuerId; Log(ss); // Class: int32_t     
    ss << "  PSNAccountIDsCount " << request->PSNAccountIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->PSNAccountIDsCount; i++ )
    {
        ss << "  request->PSNAccountIDs[" << i << "]:" << request->PSNAccountIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromPSNAccountIDsResult( PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabServerPSNAccountPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->PSNAccountId ) { ss << "  data["<<i<<"]->PSNAccountId " << result->data[i]->PSNAccountId; Log(ss); } else { ss << "  data["<<i<<"]->PSNAccountId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromSteamIDsRequest( PlayFab::ServerModels::GetPlayFabIDsFromSteamIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayFabIDsFromSteamIDsRequest struct:
    // request->steamStringIDs: const char* const*
    // request->steamStringIDsCount: uint32_t    
    ss << "  steamStringIDsCount " << request->steamStringIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->steamStringIDsCount; i++ )
    {
        ss << "  request->steamStringIDs[" << i << "]:" << request->steamStringIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromSteamIDsResult( PlayFabServerGetPlayFabIDsFromSteamIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayFabIDsFromSteamIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabServerSteamPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->steamStringId ) { ss << "  data["<<i<<"]->steamStringId " << result->data[i]->steamStringId; Log(ss); } else { ss << "  data["<<i<<"]->steamStringId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest( PlayFab::ServerModels::GetPlayFabIDsFromXboxLiveIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest struct:
    // request->sandbox: const char*
    if( request->sandbox ) { ss << "  sandbox " << request->sandbox; Log(ss); } else { ss << "  sandbox = nullptr"; Log(ss); } // Class: const char*     
    ss << "  xboxLiveAccountIDsCount " << request->xboxLiveAccountIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->xboxLiveAccountIDsCount; i++ )
    {
        ss << "  request->xboxLiveAccountIDs[" << i << "]:" << request->xboxLiveAccountIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPlayFabIDsFromXboxLiveIDsResult( PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabServerXboxLiveAccountPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->xboxLiveAccountId ) { ss << "  data["<<i<<"]->xboxLiveAccountId " << result->data[i]->xboxLiveAccountId; Log(ss); } else { ss << "  data["<<i<<"]->xboxLiveAccountId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetPublisherDataRequest( PlayFab::ServerModels::GetPublisherDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetPublisherDataRequest struct:
    // request->keys: const char* const*
    // request->keysCount: uint32_t    
    ss << "  keysCount " << request->keysCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysCount; i++ )
    {
        ss << "  request->keys[" << i << "]:" << request->keys[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetPublisherDataResult( PlayFabServerGetPublisherDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetPublisherDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetRandomResultTablesRequest( PlayFab::ServerModels::GetRandomResultTablesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetRandomResultTablesRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  tableIDsCount " << request->tableIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->tableIDsCount; i++ )
    {
        ss << "  request->tableIDs[" << i << "]:" << request->tableIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetRandomResultTablesResult( PlayFabServerGetRandomResultTablesResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetRandomResultTablesResult    
    ss << "  tablesCount " << result->tablesCount; Log(ss);

    // PlayFabServerRandomResultTableListingDictionaryEntry
    for( uint32_t i=0; i<result->tablesCount; i++ )
    {
        ss << "  result->tables[" << i << "]:" << result->tables[i]; Log(ss); // PlayFabServerRandomResultTableListingDictionaryEntry
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetServerCustomIDsFromPlayFabIDsRequest( PlayFab::ServerModels::GetServerCustomIDsFromPlayFabIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest struct:
    // request->playFabIDs: const char* const*
    // request->playFabIDsCount: uint32_t    
    ss << "  playFabIDsCount " << request->playFabIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->playFabIDsCount; i++ )
    {
        ss << "  request->playFabIDs[" << i << "]:" << request->playFabIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetServerCustomIDsFromPlayFabIDsResult( PlayFabServerGetServerCustomIDsFromPlayFabIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetServerCustomIDsFromPlayFabIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabServerServerCustomIDPlayFabIDPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->serverCustomId ) { ss << "  data["<<i<<"]->serverCustomId " << result->data[i]->serverCustomId; Log(ss); } else { ss << "  data["<<i<<"]->serverCustomId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetSharedGroupDataRequest( PlayFab::ServerModels::GetSharedGroupDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetSharedGroupDataRequest struct:
    // request->getMembers: bool const*
    ss << "  getMembers " << request->getMembers; Log(ss); // Class: bool     
    ss << "  keysCount " << request->keysCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysCount; i++ )
    {
        ss << "  request->keys[" << i << "]:" << request->keys[i]; Log(ss); // const char*
    } 
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetSharedGroupDataResult( PlayFabServerGetSharedGroupDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetSharedGroupDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabServerSharedGroupDataRecordDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i]; Log(ss); // PlayFabServerSharedGroupDataRecordDictionaryEntry
    }     
    ss << "  membersCount " << result->membersCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->membersCount; i++ )
    {
        ss << "  result->members[" << i << "]:" << result->members[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetStoreItemsServerRequest( PlayFab::ServerModels::GetStoreItemsServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetStoreItemsServerRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->storeId ) { ss << "  storeId " << request->storeId; Log(ss); } else { ss << "  storeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetStoreItemsResult( PlayFabServerGetStoreItemsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetStoreItemsResult
    if( result->catalogVersion ) { ss << "  catalogVersion " << result->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    ss << "  marketingData " << result->marketingData; Log(ss); // Class: PlayFabServerStoreMarketingModel 
    ss << "  source " << result->source; Log(ss); // Class: PlayFabServerSourceType     
    ss << "  storeCount " << result->storeCount; Log(ss);

    // PlayFabServerStoreItem
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

HRESULT AutoGenServerTests::LogPlayFabServerGetTimeResult( PlayFabServerGetTimeResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetTimeResult
    ss << "  time " << result->time; Log(ss); // Class: time_t 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetTitleDataRequest( PlayFab::ServerModels::GetTitleDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetTitleDataRequest struct:
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

HRESULT AutoGenServerTests::LogPlayFabServerGetTitleDataResult( PlayFabServerGetTitleDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetTitleDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetTitleNewsRequest( PlayFab::ServerModels::GetTitleNewsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetTitleNewsRequest struct:
    // request->count: int32_t const*
    ss << "  count " << request->count; Log(ss); // Class: int32_t 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetTitleNewsResult( PlayFabServerGetTitleNewsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetTitleNewsResult    
    ss << "  newsCount " << result->newsCount; Log(ss);

    // PlayFabServerTitleNewsItem
    for( uint32_t i=0; i<result->newsCount; i++ )
    {
        if( result->news[i]->body ) { ss << "  news["<<i<<"]->body " << result->news[i]->body; Log(ss); } else { ss << "  news["<<i<<"]->body = nullptr"; Log(ss); } // Class: const char* 
        if( result->news[i]->newsId ) { ss << "  news["<<i<<"]->newsId " << result->news[i]->newsId; Log(ss); } else { ss << "  news["<<i<<"]->newsId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  news["<<i<<"]->timestamp " << result->news[i]->timestamp; Log(ss); // Class: time_t 
        if( result->news[i]->title ) { ss << "  news["<<i<<"]->title " << result->news[i]->title; Log(ss); } else { ss << "  news["<<i<<"]->title = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetUserAccountInfoRequest( PlayFab::ServerModels::GetUserAccountInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetUserAccountInfoRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetUserAccountInfoResult( PlayFabServerGetUserAccountInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetUserAccountInfoResult
    ss << "  userInfo " << result->userInfo; Log(ss); // Class: PlayFabUserAccountInfo 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGetUserBansRequest( PlayFab::ServerModels::GetUserBansRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetUserBansRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGetUserBansResult( PlayFabServerGetUserBansResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetUserBansResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PlayFabServerBanInfo
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

void AutoGenServerTests::LogPlayFabServerGetUserDataRequest( PlayFab::ServerModels::GetUserDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetUserDataRequest struct:
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

HRESULT AutoGenServerTests::LogPlayFabServerGetUserDataResult( PlayFabServerGetUserDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetUserDataResult    
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

void AutoGenServerTests::LogPlayFabServerGetUserInventoryRequest( PlayFab::ServerModels::GetUserInventoryRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGetUserInventoryRequest struct:
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

HRESULT AutoGenServerTests::LogPlayFabServerGetUserInventoryResult( PlayFabServerGetUserInventoryResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGetUserInventoryResult    
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

void AutoGenServerTests::LogPlayFabServerGrantCharacterToUserRequest( PlayFab::ServerModels::GrantCharacterToUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGrantCharacterToUserRequest struct:
    // request->characterName: const char*
    if( request->characterName ) { ss << "  characterName " << request->characterName; Log(ss); } else { ss << "  characterName = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterType ) { ss << "  characterType " << request->characterType; Log(ss); } else { ss << "  characterType = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGrantCharacterToUserResult( PlayFabServerGrantCharacterToUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGrantCharacterToUserResult
    if( result->characterId ) { ss << "  characterId " << result->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerGrantItemsToCharacterRequest( PlayFab::ServerModels::GrantItemsToCharacterRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGrantItemsToCharacterRequest struct:
    // request->annotation: const char*
    if( request->annotation ) { ss << "  annotation " << request->annotation; Log(ss); } else { ss << "  annotation = nullptr"; Log(ss); } // Class: const char* 
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  itemIdsCount " << request->itemIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->itemIdsCount; i++ )
    {
        ss << "  request->itemIds[" << i << "]:" << request->itemIds[i]; Log(ss); // const char*
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGrantItemsToCharacterResult( PlayFabServerGrantItemsToCharacterResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGrantItemsToCharacterResult    
    ss << "  itemGrantResultsCount " << result->itemGrantResultsCount; Log(ss);

    // PlayFabServerGrantedItemInstance
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

void AutoGenServerTests::LogPlayFabServerGrantItemsToUserRequest( PlayFab::ServerModels::GrantItemsToUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGrantItemsToUserRequest struct:
    // request->annotation: const char*
    if( request->annotation ) { ss << "  annotation " << request->annotation; Log(ss); } else { ss << "  annotation = nullptr"; Log(ss); } // Class: const char* 
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  itemIdsCount " << request->itemIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->itemIdsCount; i++ )
    {
        ss << "  request->itemIds[" << i << "]:" << request->itemIds[i]; Log(ss); // const char*
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerGrantItemsToUserResult( PlayFabServerGrantItemsToUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGrantItemsToUserResult    
    ss << "  itemGrantResultsCount " << result->itemGrantResultsCount; Log(ss);

    // PlayFabServerGrantedItemInstance
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

void AutoGenServerTests::LogPlayFabServerGrantItemsToUsersRequest( PlayFab::ServerModels::GrantItemsToUsersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerGrantItemsToUsersRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  itemGrantsCount " << request->itemGrantsCount; Log(ss);

    // PlayFabServerItemGrant
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

HRESULT AutoGenServerTests::LogPlayFabServerGrantItemsToUsersResult( PlayFabServerGrantItemsToUsersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerGrantItemsToUsersResult    
    ss << "  itemGrantResultsCount " << result->itemGrantResultsCount; Log(ss);

    // PlayFabServerGrantedItemInstance
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

void AutoGenServerTests::LogPlayFabServerLinkPSNAccountRequest( PlayFab::ServerModels::LinkPSNAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerLinkPSNAccountRequest struct:
    // request->authCode: const char*
    if( request->authCode ) { ss << "  authCode " << request->authCode; Log(ss); } else { ss << "  authCode = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    ss << "  issuerId " << request->issuerId; Log(ss); // Class: int32_t 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->redirectUri ) { ss << "  redirectUri " << request->redirectUri; Log(ss); } else { ss << "  redirectUri = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerLinkServerCustomIdRequest( PlayFab::ServerModels::LinkServerCustomIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerLinkServerCustomIdRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->serverCustomId ) { ss << "  serverCustomId " << request->serverCustomId; Log(ss); } else { ss << "  serverCustomId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerLinkXboxAccountRequest( PlayFab::ServerModels::LinkXboxAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerLinkXboxAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->xboxToken ) { ss << "  xboxToken " << request->xboxToken; Log(ss); } else { ss << "  xboxToken = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerModifyItemUsesRequest( PlayFab::ServerModels::ModifyItemUsesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerModifyItemUsesRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  usesToAdd " << request->usesToAdd; Log(ss); // Class: int32_t 

}

HRESULT AutoGenServerTests::LogPlayFabServerModifyItemUsesResult( PlayFabServerModifyItemUsesResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerModifyItemUsesResult
    if( result->itemInstanceId ) { ss << "  itemInstanceId " << result->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  remainingUses " << result->remainingUses; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerMoveItemToCharacterFromCharacterRequest( PlayFab::ServerModels::MoveItemToCharacterFromCharacterRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerMoveItemToCharacterFromCharacterRequest struct:
    // request->givingCharacterId: const char*
    if( request->givingCharacterId ) { ss << "  givingCharacterId " << request->givingCharacterId; Log(ss); } else { ss << "  givingCharacterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->receivingCharacterId ) { ss << "  receivingCharacterId " << request->receivingCharacterId; Log(ss); } else { ss << "  receivingCharacterId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerMoveItemToCharacterFromUserRequest( PlayFab::ServerModels::MoveItemToCharacterFromUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerMoveItemToCharacterFromUserRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerMoveItemToUserFromCharacterRequest( PlayFab::ServerModels::MoveItemToUserFromCharacterRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerMoveItemToUserFromCharacterRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerNotifyMatchmakerPlayerLeftRequest( PlayFab::ServerModels::NotifyMatchmakerPlayerLeftRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerNotifyMatchmakerPlayerLeftRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->lobbyId ) { ss << "  lobbyId " << request->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerNotifyMatchmakerPlayerLeftResult( PlayFabServerNotifyMatchmakerPlayerLeftResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerNotifyMatchmakerPlayerLeftResult
    ss << "  playerState " << result->playerState; Log(ss); // Class: PlayFabServerPlayerConnectionState 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerRedeemCouponRequest( PlayFab::ServerModels::RedeemCouponRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRedeemCouponRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->couponCode ) { ss << "  couponCode " << request->couponCode; Log(ss); } else { ss << "  couponCode = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerRedeemCouponResult( PlayFabServerRedeemCouponResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerRedeemCouponResult    
    ss << "  grantedItemsCount " << result->grantedItemsCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->grantedItemsCount; i++ )
    {
        ss << "  result->grantedItems[" << i << "]:" << result->grantedItems[i]; Log(ss); // PlayFabItemInstance
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerRedeemMatchmakerTicketRequest( PlayFab::ServerModels::RedeemMatchmakerTicketRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRedeemMatchmakerTicketRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->lobbyId ) { ss << "  lobbyId " << request->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 
    if( request->ticket ) { ss << "  ticket " << request->ticket; Log(ss); } else { ss << "  ticket = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerRedeemMatchmakerTicketResult( PlayFabServerRedeemMatchmakerTicketResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerRedeemMatchmakerTicketResult
    if( result->error ) { ss << "  error " << result->error; Log(ss); } else { ss << "  error = nullptr"; Log(ss); } // Class: const char* 
    ss << "  ticketIsValid " << result->ticketIsValid; Log(ss); // Class: bool 
    ss << "  userInfo " << result->userInfo; Log(ss); // Class: PlayFabUserAccountInfo 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerRefreshGameServerInstanceHeartbeatRequest( PlayFab::ServerModels::RefreshGameServerInstanceHeartbeatRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRefreshGameServerInstanceHeartbeatRequest struct:
    // request->lobbyId: const char*
    if( request->lobbyId ) { ss << "  lobbyId " << request->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerRegisterGameRequest( PlayFab::ServerModels::RegisterGameRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRegisterGameRequest struct:
    // request->build: const char*
    if( request->build ) { ss << "  build " << request->build; Log(ss); } else { ss << "  build = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->gameMode ) { ss << "  gameMode " << request->gameMode; Log(ss); } else { ss << "  gameMode = nullptr"; Log(ss); } // Class: const char* 
    if( request->lobbyId ) { ss << "  lobbyId " << request->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  region " << request->region; Log(ss); // Class: PlayFabServerRegion 
    if( request->serverIPV4Address ) { ss << "  serverIPV4Address " << request->serverIPV4Address; Log(ss); } else { ss << "  serverIPV4Address = nullptr"; Log(ss); } // Class: const char* 
    if( request->serverIPV6Address ) { ss << "  serverIPV6Address " << request->serverIPV6Address; Log(ss); } else { ss << "  serverIPV6Address = nullptr"; Log(ss); } // Class: const char* 
    if( request->serverPort ) { ss << "  serverPort " << request->serverPort; Log(ss); } else { ss << "  serverPort = nullptr"; Log(ss); } // Class: const char* 
    if( request->serverPublicDNSName ) { ss << "  serverPublicDNSName " << request->serverPublicDNSName; Log(ss); } else { ss << "  serverPublicDNSName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  tagsCount " << request->tagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->tagsCount; i++ )
    {
        ss << "  request->tags[" << i << "]:" << request->tags[i].key << "=" << request->tags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerRegisterGameResponse( PlayFabServerRegisterGameResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerRegisterGameResponse
    if( result->lobbyId ) { ss << "  lobbyId " << result->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerRemoveFriendRequest( PlayFab::ServerModels::RemoveFriendRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRemoveFriendRequest struct:
    // request->friendPlayFabId: const char*
    if( request->friendPlayFabId ) { ss << "  friendPlayFabId " << request->friendPlayFabId; Log(ss); } else { ss << "  friendPlayFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerRemoveGenericIDRequest( PlayFab::ServerModels::RemoveGenericIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRemoveGenericIDRequest struct:
    // request->genericId: PlayFabServerGenericServiceId const*
    ss << "  genericId " << request->genericId; Log(ss); // Class: PlayFabServerGenericServiceId 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerRemovePlayerTagRequest( PlayFab::ServerModels::RemovePlayerTagRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRemovePlayerTagRequest struct:
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

void AutoGenServerTests::LogPlayFabServerRemoveSharedGroupMembersRequest( PlayFab::ServerModels::RemoveSharedGroupMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRemoveSharedGroupMembersRequest struct:
    // request->playFabIds: const char* const*
    // request->playFabIdsCount: uint32_t    
    ss << "  playFabIdsCount " << request->playFabIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->playFabIdsCount; i++ )
    {
        ss << "  request->playFabIds[" << i << "]:" << request->playFabIds[i]; Log(ss); // const char*
    } 
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerReportPlayerServerRequest( PlayFab::ServerModels::ReportPlayerServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerReportPlayerServerRequest struct:
    // request->comment: const char*
    if( request->comment ) { ss << "  comment " << request->comment; Log(ss); } else { ss << "  comment = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->reporteeId ) { ss << "  reporteeId " << request->reporteeId; Log(ss); } else { ss << "  reporteeId = nullptr"; Log(ss); } // Class: const char* 
    if( request->reporterId ) { ss << "  reporterId " << request->reporterId; Log(ss); } else { ss << "  reporterId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerReportPlayerServerResult( PlayFabServerReportPlayerServerResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerReportPlayerServerResult
    ss << "  submissionsRemaining " << result->submissionsRemaining; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerRevokeAllBansForUserRequest( PlayFab::ServerModels::RevokeAllBansForUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRevokeAllBansForUserRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerRevokeAllBansForUserResult( PlayFabServerRevokeAllBansForUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerRevokeAllBansForUserResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PlayFabServerBanInfo
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

void AutoGenServerTests::LogPlayFabServerRevokeBansRequest( PlayFab::ServerModels::RevokeBansRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRevokeBansRequest struct:
    // request->banIds: const char* const*
    // request->banIdsCount: uint32_t    
    ss << "  banIdsCount " << request->banIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->banIdsCount; i++ )
    {
        ss << "  request->banIds[" << i << "]:" << request->banIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerRevokeBansResult( PlayFabServerRevokeBansResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerRevokeBansResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PlayFabServerBanInfo
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

void AutoGenServerTests::LogPlayFabServerRevokeInventoryItemRequest( PlayFab::ServerModels::RevokeInventoryItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRevokeInventoryItemRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerRevokeInventoryItemsRequest( PlayFab::ServerModels::RevokeInventoryItemsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerRevokeInventoryItemsRequest struct:
    // request->items: PlayFabServerRevokeInventoryItem const* const*
    // request->itemsCount: uint32_t    
    ss << "  itemsCount " << request->itemsCount; Log(ss);

    // PlayFabServerRevokeInventoryItem
    for( uint32_t i=0; i<request->itemsCount; i++ )
    {
        if( request->items[i]->characterId ) { ss << "  items["<<i<<"]->characterId " << request->items[i]->characterId; Log(ss); } else { ss << "  items["<<i<<"]->characterId = nullptr"; Log(ss); } // Class: const char* 
        if( request->items[i]->itemInstanceId ) { ss << "  items["<<i<<"]->itemInstanceId " << request->items[i]->itemInstanceId; Log(ss); } else { ss << "  items["<<i<<"]->itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
        if( request->items[i]->playFabId ) { ss << "  items["<<i<<"]->playFabId " << request->items[i]->playFabId; Log(ss); } else { ss << "  items["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 

}

HRESULT AutoGenServerTests::LogPlayFabServerRevokeInventoryItemsResult( PlayFabServerRevokeInventoryItemsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerRevokeInventoryItemsResult    
    ss << "  errorsCount " << result->errorsCount; Log(ss);

    // PlayFabServerRevokeItemError
    for( uint32_t i=0; i<result->errorsCount; i++ )
    {
        ss << "  errors["<<i<<"]->error " << result->errors[i]->error; Log(ss); // Class: PlayFabServerGenericErrorCodes 
        ss << "  errors["<<i<<"]->item " << result->errors[i]->item; Log(ss); // Class: PlayFabServerRevokeInventoryItem 
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerSavePushNotificationTemplateRequest( PlayFab::ServerModels::SavePushNotificationTemplateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSavePushNotificationTemplateRequest struct:
    // request->androidPayload: const char*
    if( request->androidPayload ) { ss << "  androidPayload " << request->androidPayload; Log(ss); } else { ss << "  androidPayload = nullptr"; Log(ss); } // Class: const char* 
    if( request->id ) { ss << "  id " << request->id; Log(ss); } else { ss << "  id = nullptr"; Log(ss); } // Class: const char* 
    if( request->iOSPayload ) { ss << "  iOSPayload " << request->iOSPayload; Log(ss); } else { ss << "  iOSPayload = nullptr"; Log(ss); } // Class: const char*     
    ss << "  localizedPushNotificationTemplatesCount " << request->localizedPushNotificationTemplatesCount; Log(ss);

    // PlayFabServerLocalizedPushNotificationPropertiesDictionaryEntry
    for( uint32_t i=0; i<request->localizedPushNotificationTemplatesCount; i++ )
    {
        ss << "  request->localizedPushNotificationTemplates[" << i << "]:" << request->localizedPushNotificationTemplates[i]; Log(ss); // PlayFabServerLocalizedPushNotificationPropertiesDictionaryEntry
    } 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerSavePushNotificationTemplateResult( PlayFabServerSavePushNotificationTemplateResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerSavePushNotificationTemplateResult
    if( result->pushNotificationTemplateId ) { ss << "  pushNotificationTemplateId " << result->pushNotificationTemplateId; Log(ss); } else { ss << "  pushNotificationTemplateId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerSendCustomAccountRecoveryEmailRequest( PlayFab::ServerModels::SendCustomAccountRecoveryEmailRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSendCustomAccountRecoveryEmailRequest struct:
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
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerSendEmailFromTemplateRequest( PlayFab::ServerModels::SendEmailFromTemplateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSendEmailFromTemplateRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->emailTemplateId ) { ss << "  emailTemplateId " << request->emailTemplateId; Log(ss); } else { ss << "  emailTemplateId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerSendPushNotificationRequest( PlayFab::ServerModels::SendPushNotificationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSendPushNotificationRequest struct:
    // request->advancedPlatformDelivery: PlayFabServerAdvancedPushPlatformMsg const* const*
    // request->advancedPlatformDeliveryCount: uint32_t    
    ss << "  advancedPlatformDeliveryCount " << request->advancedPlatformDeliveryCount; Log(ss);

    // PlayFabServerAdvancedPushPlatformMsg
    for( uint32_t i=0; i<request->advancedPlatformDeliveryCount; i++ )
    {
        ss << "  advancedPlatformDelivery["<<i<<"]->gCMDataOnly " << request->advancedPlatformDelivery[i]->gCMDataOnly; Log(ss); // Class: bool 
        if( request->advancedPlatformDelivery[i]->json ) { ss << "  advancedPlatformDelivery["<<i<<"]->json " << request->advancedPlatformDelivery[i]->json; Log(ss); } else { ss << "  advancedPlatformDelivery["<<i<<"]->json = nullptr"; Log(ss); } // Class: const char* 
        ss << "  advancedPlatformDelivery["<<i<<"]->platform " << request->advancedPlatformDelivery[i]->platform; Log(ss); // Class: PlayFabPushNotificationPlatform 
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->message ) { ss << "  message " << request->message; Log(ss); } else { ss << "  message = nullptr"; Log(ss); } // Class: const char* 
    ss << "  package " << request->package; Log(ss); // Class: PlayFabServerPushNotificationPackage 
    if( request->recipient ) { ss << "  recipient " << request->recipient; Log(ss); } else { ss << "  recipient = nullptr"; Log(ss); } // Class: const char* 
    if( request->subject ) { ss << "  subject " << request->subject; Log(ss); } else { ss << "  subject = nullptr"; Log(ss); } // Class: const char*     
    ss << "  targetPlatformsCount " << request->targetPlatformsCount; Log(ss);

    // PlayFabPushNotificationPlatform
    for( uint32_t i=0; i<request->targetPlatformsCount; i++ )
    {
        ss << "  request->targetPlatforms[" << i << "]:" << request->targetPlatforms[i]; Log(ss); // PlayFabPushNotificationPlatform
    } 

}

void AutoGenServerTests::LogPlayFabServerSendPushNotificationFromTemplateRequest( PlayFab::ServerModels::SendPushNotificationFromTemplateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSendPushNotificationFromTemplateRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->pushNotificationTemplateId ) { ss << "  pushNotificationTemplateId " << request->pushNotificationTemplateId; Log(ss); } else { ss << "  pushNotificationTemplateId = nullptr"; Log(ss); } // Class: const char* 
    if( request->recipient ) { ss << "  recipient " << request->recipient; Log(ss); } else { ss << "  recipient = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerSetFriendTagsRequest( PlayFab::ServerModels::SetFriendTagsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSetFriendTagsRequest struct:
    // request->friendPlayFabId: const char*
    if( request->friendPlayFabId ) { ss << "  friendPlayFabId " << request->friendPlayFabId; Log(ss); } else { ss << "  friendPlayFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  tagsCount " << request->tagsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->tagsCount; i++ )
    {
        ss << "  request->tags[" << i << "]:" << request->tags[i]; Log(ss); // const char*
    } 

}

void AutoGenServerTests::LogPlayFabServerSetGameServerInstanceDataRequest( PlayFab::ServerModels::SetGameServerInstanceDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSetGameServerInstanceDataRequest struct:
    // request->gameServerData: const char*
    if( request->gameServerData ) { ss << "  gameServerData " << request->gameServerData; Log(ss); } else { ss << "  gameServerData = nullptr"; Log(ss); } // Class: const char* 
    if( request->lobbyId ) { ss << "  lobbyId " << request->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerSetGameServerInstanceStateRequest( PlayFab::ServerModels::SetGameServerInstanceStateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSetGameServerInstanceStateRequest struct:
    // request->lobbyId: const char*
    if( request->lobbyId ) { ss << "  lobbyId " << request->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  state " << request->state; Log(ss); // Class: PlayFabServerGameInstanceState 

}

void AutoGenServerTests::LogPlayFabServerSetGameServerInstanceTagsRequest( PlayFab::ServerModels::SetGameServerInstanceTagsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSetGameServerInstanceTagsRequest struct:
    // request->lobbyId: const char*
    if( request->lobbyId ) { ss << "  lobbyId " << request->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  tagsCount " << request->tagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->tagsCount; i++ )
    {
        ss << "  request->tags[" << i << "]:" << request->tags[i].key << "=" << request->tags[i].value; Log(ss);
        
    } 

}

void AutoGenServerTests::LogPlayFabServerSetPlayerSecretRequest( PlayFab::ServerModels::SetPlayerSecretRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSetPlayerSecretRequest struct:
    // request->playerSecret: const char*
    if( request->playerSecret ) { ss << "  playerSecret " << request->playerSecret; Log(ss); } else { ss << "  playerSecret = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerSetPublisherDataRequest( PlayFab::ServerModels::SetPublisherDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSetPublisherDataRequest struct:
    // request->key: const char*
    if( request->key ) { ss << "  key " << request->key; Log(ss); } else { ss << "  key = nullptr"; Log(ss); } // Class: const char* 
    if( request->value ) { ss << "  value " << request->value; Log(ss); } else { ss << "  value = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerSetTitleDataRequest( PlayFab::ServerModels::SetTitleDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSetTitleDataRequest struct:
    // request->key: const char*
    if( request->key ) { ss << "  key " << request->key; Log(ss); } else { ss << "  key = nullptr"; Log(ss); } // Class: const char* 
    if( request->value ) { ss << "  value " << request->value; Log(ss); } else { ss << "  value = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerSubtractCharacterVirtualCurrencyRequest( PlayFab::ServerModels::SubtractCharacterVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSubtractCharacterVirtualCurrencyRequest struct:
    // request->amount: int32_t
    ss << "  amount " << request->amount; Log(ss); // Class: int32_t 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->virtualCurrency ) { ss << "  virtualCurrency " << request->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerSubtractUserVirtualCurrencyRequest( PlayFab::ServerModels::SubtractUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerSubtractUserVirtualCurrencyRequest struct:
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

void AutoGenServerTests::LogPlayFabServerUnlinkPSNAccountRequest( PlayFab::ServerModels::UnlinkPSNAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUnlinkPSNAccountRequest struct:
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

void AutoGenServerTests::LogPlayFabServerUnlinkServerCustomIdRequest( PlayFab::ServerModels::UnlinkServerCustomIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUnlinkServerCustomIdRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->serverCustomId ) { ss << "  serverCustomId " << request->serverCustomId; Log(ss); } else { ss << "  serverCustomId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerUnlinkXboxAccountRequest( PlayFab::ServerModels::UnlinkXboxAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUnlinkXboxAccountRequest struct:
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

void AutoGenServerTests::LogPlayFabServerUnlockContainerInstanceRequest( PlayFab::ServerModels::UnlockContainerInstanceRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUnlockContainerInstanceRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->containerItemInstanceId ) { ss << "  containerItemInstanceId " << request->containerItemInstanceId; Log(ss); } else { ss << "  containerItemInstanceId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->keyItemInstanceId ) { ss << "  keyItemInstanceId " << request->keyItemInstanceId; Log(ss); } else { ss << "  keyItemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenServerTests::LogPlayFabServerUnlockContainerItemResult( PlayFabServerUnlockContainerItemResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerUnlockContainerItemResult    
    ss << "  grantedItemsCount " << result->grantedItemsCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->grantedItemsCount; i++ )
    {
        ss << "  result->grantedItems[" << i << "]:" << result->grantedItems[i]; Log(ss); // PlayFabItemInstance
    } 
    if( result->unlockedItemInstanceId ) { ss << "  unlockedItemInstanceId " << result->unlockedItemInstanceId; Log(ss); } else { ss << "  unlockedItemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( result->unlockedWithItemInstanceId ) { ss << "  unlockedWithItemInstanceId " << result->unlockedWithItemInstanceId; Log(ss); } else { ss << "  unlockedWithItemInstanceId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  virtualCurrencyCount " << result->virtualCurrencyCount; Log(ss);

    // PlayFabUint32DictionaryEntry
    for( uint32_t i=0; i<result->virtualCurrencyCount; i++ )
    {
        ss << "  result->virtualCurrency[" << i << "]:" << result->virtualCurrency[i].key << "=" << result->virtualCurrency[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerUnlockContainerItemRequest( PlayFab::ServerModels::UnlockContainerItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUnlockContainerItemRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->containerItemId ) { ss << "  containerItemId " << request->containerItemId; Log(ss); } else { ss << "  containerItemId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerUpdateAvatarUrlRequest( PlayFab::ServerModels::UpdateAvatarUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUpdateAvatarUrlRequest struct:
    // request->imageUrl: const char*
    if( request->imageUrl ) { ss << "  imageUrl " << request->imageUrl; Log(ss); } else { ss << "  imageUrl = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerUpdateBansRequest( PlayFab::ServerModels::UpdateBansRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUpdateBansRequest struct:
    // request->bans: PlayFabServerUpdateBanRequest const* const*
    // request->bansCount: uint32_t    
    ss << "  bansCount " << request->bansCount; Log(ss);

    // PlayFabServerUpdateBanRequest
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

HRESULT AutoGenServerTests::LogPlayFabServerUpdateBansResult( PlayFabServerUpdateBansResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerUpdateBansResult    
    ss << "  banDataCount " << result->banDataCount; Log(ss);

    // PlayFabServerBanInfo
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

void AutoGenServerTests::LogPlayFabServerUpdateCharacterDataRequest( PlayFab::ServerModels::UpdateCharacterDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUpdateCharacterDataRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
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

HRESULT AutoGenServerTests::LogPlayFabServerUpdateCharacterDataResult( PlayFabServerUpdateCharacterDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerUpdateCharacterDataResult
    ss << "  dataVersion " << result->dataVersion; Log(ss); // Class: uint32_t 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerUpdateCharacterStatisticsRequest( PlayFab::ServerModels::UpdateCharacterStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUpdateCharacterStatisticsRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  characterStatisticsCount " << request->characterStatisticsCount; Log(ss);

    // PlayFabInt32DictionaryEntry
    for( uint32_t i=0; i<request->characterStatisticsCount; i++ )
    {
        ss << "  request->characterStatistics[" << i << "]:" << request->characterStatistics[i].key << "=" << request->characterStatistics[i].value; Log(ss);
        
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerUpdatePlayerStatisticsRequest( PlayFab::ServerModels::UpdatePlayerStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUpdatePlayerStatisticsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceUpdate " << request->forceUpdate; Log(ss); // Class: bool 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  statisticsCount " << request->statisticsCount; Log(ss);

    // PlayFabServerStatisticUpdate
    for( uint32_t i=0; i<request->statisticsCount; i++ )
    {
        if( request->statistics[i]->statisticName ) { ss << "  statistics["<<i<<"]->statisticName " << request->statistics[i]->statisticName; Log(ss); } else { ss << "  statistics["<<i<<"]->statisticName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statistics["<<i<<"]->value " << request->statistics[i]->value; Log(ss); // Class: int32_t 
        ss << "  statistics["<<i<<"]->version " << request->statistics[i]->version; Log(ss); // Class: uint32_t 
    } 

}

void AutoGenServerTests::LogPlayFabServerUpdateSharedGroupDataRequest( PlayFab::ServerModels::UpdateSharedGroupDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUpdateSharedGroupDataRequest struct:
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
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerUpdateUserDataRequest( PlayFab::ServerModels::UpdateUserDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUpdateUserDataRequest struct:
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

HRESULT AutoGenServerTests::LogPlayFabServerUpdateUserDataResult( PlayFabServerUpdateUserDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerUpdateUserDataResult
    ss << "  dataVersion " << result->dataVersion; Log(ss); // Class: uint32_t 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerUpdateUserInternalDataRequest( PlayFab::ServerModels::UpdateUserInternalDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUpdateUserInternalDataRequest struct:
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

void AutoGenServerTests::LogPlayFabServerUpdateUserInventoryItemDataRequest( PlayFab::ServerModels::UpdateUserInventoryItemDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerUpdateUserInventoryItemDataRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
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
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  keysToRemoveCount " << request->keysToRemoveCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysToRemoveCount; i++ )
    {
        ss << "  request->keysToRemove[" << i << "]:" << request->keysToRemove[i]; Log(ss); // const char*
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenServerTests::LogPlayFabServerWriteServerCharacterEventRequest( PlayFab::ServerModels::WriteServerCharacterEventRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerWriteServerCharacterEventRequest struct:
    // request->body: PlayFabJsonObject
    if( request->body.stringValue ) { ss << "  body " << request->body.stringValue; Log(ss); } else { ss << "  body = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->eventName ) { ss << "  eventName " << request->eventName; Log(ss); } else { ss << "  eventName = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  timestamp " << request->timestamp; Log(ss); // Class: time_t 

}

HRESULT AutoGenServerTests::LogPlayFabServerWriteEventResponse( PlayFabServerWriteEventResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabServerWriteEventResponse
    if( result->eventId ) { ss << "  eventId " << result->eventId; Log(ss); } else { ss << "  eventId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenServerTests::LogPlayFabServerWriteServerPlayerEventRequest( PlayFab::ServerModels::WriteServerPlayerEventRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerWriteServerPlayerEventRequest struct:
    // request->body: PlayFabJsonObject
    if( request->body.stringValue ) { ss << "  body " << request->body.stringValue; Log(ss); } else { ss << "  body = nullptr"; Log(ss); } // Class: PlayFabJsonObject     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->eventName ) { ss << "  eventName " << request->eventName; Log(ss); } else { ss << "  eventName = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  timestamp " << request->timestamp; Log(ss); // Class: time_t 

}

void AutoGenServerTests::LogPlayFabServerWriteTitleEventRequest( PlayFab::ServerModels::WriteTitleEventRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabServerWriteTitleEventRequest struct:
    // request->body: PlayFabJsonObject
    if( request->body.stringValue ) { ss << "  body " << request->body.stringValue; Log(ss); } else { ss << "  body = nullptr"; Log(ss); } // Class: PlayFabJsonObject     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->eventName ) { ss << "  eventName " << request->eventName; Log(ss); } else { ss << "  eventName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  timestamp " << request->timestamp; Log(ss); // Class: time_t 

}

 

}
