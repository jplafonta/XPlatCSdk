#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenMatchmakerTests.h"
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

void AutoGenMatchmakerTests::LogPlayFabMatchmakerAuthUserRequest( PlayFab::MatchmakerModels::AuthUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMatchmakerAuthUserRequest struct:
    // request->authorizationTicket: const char*
    if( request->authorizationTicket ) { ss << "  authorizationTicket " << request->authorizationTicket; Log(ss); } else { ss << "  authorizationTicket = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMatchmakerTests::LogPlayFabMatchmakerAuthUserResponse( PlayFabMatchmakerAuthUserResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMatchmakerAuthUserResponse
    ss << "  authorized " << result->authorized; Log(ss); // Class: bool 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMatchmakerTests::LogPlayFabMatchmakerPlayerJoinedRequest( PlayFab::MatchmakerModels::PlayerJoinedRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMatchmakerPlayerJoinedRequest struct:
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

void AutoGenMatchmakerTests::LogPlayFabMatchmakerPlayerLeftRequest( PlayFab::MatchmakerModels::PlayerLeftRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMatchmakerPlayerLeftRequest struct:
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

void AutoGenMatchmakerTests::LogPlayFabMatchmakerStartGameRequest( PlayFab::MatchmakerModels::StartGameRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMatchmakerStartGameRequest struct:
    // request->build: const char*
    if( request->build ) { ss << "  build " << request->build; Log(ss); } else { ss << "  build = nullptr"; Log(ss); } // Class: const char* 
    if( request->customCommandLineData ) { ss << "  customCommandLineData " << request->customCommandLineData; Log(ss); } else { ss << "  customCommandLineData = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->externalMatchmakerEventEndpoint ) { ss << "  externalMatchmakerEventEndpoint " << request->externalMatchmakerEventEndpoint; Log(ss); } else { ss << "  externalMatchmakerEventEndpoint = nullptr"; Log(ss); } // Class: const char* 
    if( request->gameMode ) { ss << "  gameMode " << request->gameMode; Log(ss); } else { ss << "  gameMode = nullptr"; Log(ss); } // Class: const char* 
    ss << "  region " << request->region; Log(ss); // Class: PlayFabMatchmakerRegion 

}

HRESULT AutoGenMatchmakerTests::LogPlayFabMatchmakerStartGameResponse( PlayFabMatchmakerStartGameResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMatchmakerStartGameResponse
    if( result->gameID ) { ss << "  gameID " << result->gameID; Log(ss); } else { ss << "  gameID = nullptr"; Log(ss); } // Class: const char* 
    if( result->serverIPV4Address ) { ss << "  serverIPV4Address " << result->serverIPV4Address; Log(ss); } else { ss << "  serverIPV4Address = nullptr"; Log(ss); } // Class: const char* 
    if( result->serverIPV6Address ) { ss << "  serverIPV6Address " << result->serverIPV6Address; Log(ss); } else { ss << "  serverIPV6Address = nullptr"; Log(ss); } // Class: const char* 
    ss << "  serverPort " << result->serverPort; Log(ss); // Class: uint32_t 
    if( result->serverPublicDNSName ) { ss << "  serverPublicDNSName " << result->serverPublicDNSName; Log(ss); } else { ss << "  serverPublicDNSName = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMatchmakerTests::LogPlayFabMatchmakerUserInfoRequest( PlayFab::MatchmakerModels::UserInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMatchmakerUserInfoRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  minCatalogVersion " << request->minCatalogVersion; Log(ss); // Class: int32_t 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMatchmakerTests::LogPlayFabMatchmakerUserInfoResponse( PlayFabMatchmakerUserInfoResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMatchmakerUserInfoResponse    
    ss << "  inventoryCount " << result->inventoryCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->inventoryCount; i++ )
    {
        ss << "  result->inventory[" << i << "]:" << result->inventory[i]; Log(ss); // PlayFabItemInstance
    } 
    ss << "  isDeveloper " << result->isDeveloper; Log(ss); // Class: bool 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( result->steamId ) { ss << "  steamId " << result->steamId; Log(ss); } else { ss << "  steamId = nullptr"; Log(ss); } // Class: const char* 
    if( result->titleDisplayName ) { ss << "  titleDisplayName " << result->titleDisplayName; Log(ss); } else { ss << "  titleDisplayName = nullptr"; Log(ss); } // Class: const char* 
    if( result->username ) { ss << "  username " << result->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char*     
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

 

}
