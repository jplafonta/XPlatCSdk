#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenClientTests.h"
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

void AutoGenClientTests::LogPlayFabClientAcceptTradeRequest( PlayFab::ClientModels::AcceptTradeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientAcceptTradeRequest struct:
    // request->acceptedInventoryInstanceIds: const char* const*
    // request->acceptedInventoryInstanceIdsCount: uint32_t    
    ss << "  acceptedInventoryInstanceIdsCount " << request->acceptedInventoryInstanceIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->acceptedInventoryInstanceIdsCount; i++ )
    {
        ss << "  request->acceptedInventoryInstanceIds[" << i << "]:" << request->acceptedInventoryInstanceIds[i]; Log(ss); // const char*
    } 
    if( request->offeringPlayerId ) { ss << "  offeringPlayerId " << request->offeringPlayerId; Log(ss); } else { ss << "  offeringPlayerId = nullptr"; Log(ss); } // Class: const char* 
    if( request->tradeId ) { ss << "  tradeId " << request->tradeId; Log(ss); } else { ss << "  tradeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientAcceptTradeResponse( PlayFabClientAcceptTradeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientAcceptTradeResponse
    ss << "  trade " << result->trade; Log(ss); // Class: PlayFabClientTradeInfo 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientAddFriendRequest( PlayFab::ClientModels::AddFriendRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientAddFriendRequest struct:
    // request->friendEmail: const char*
    if( request->friendEmail ) { ss << "  friendEmail " << request->friendEmail; Log(ss); } else { ss << "  friendEmail = nullptr"; Log(ss); } // Class: const char* 
    if( request->friendPlayFabId ) { ss << "  friendPlayFabId " << request->friendPlayFabId; Log(ss); } else { ss << "  friendPlayFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->friendTitleDisplayName ) { ss << "  friendTitleDisplayName " << request->friendTitleDisplayName; Log(ss); } else { ss << "  friendTitleDisplayName = nullptr"; Log(ss); } // Class: const char* 
    if( request->friendUsername ) { ss << "  friendUsername " << request->friendUsername; Log(ss); } else { ss << "  friendUsername = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientAddFriendResult( PlayFabClientAddFriendResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientAddFriendResult
    ss << "  created " << result->created; Log(ss); // Class: bool 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientAddGenericIDRequest( PlayFab::ClientModels::AddGenericIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientAddGenericIDRequest struct:
    // request->genericId: PlayFabClientGenericServiceId const*
    ss << "  genericId " << request->genericId; Log(ss); // Class: PlayFabClientGenericServiceId 

}

void AutoGenClientTests::LogPlayFabClientAddOrUpdateContactEmailRequest( PlayFab::ClientModels::AddOrUpdateContactEmailRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientAddOrUpdateContactEmailRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->emailAddress ) { ss << "  emailAddress " << request->emailAddress; Log(ss); } else { ss << "  emailAddress = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientAddSharedGroupMembersRequest( PlayFab::ClientModels::AddSharedGroupMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientAddSharedGroupMembersRequest struct:
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

void AutoGenClientTests::LogPlayFabClientAddUsernamePasswordRequest( PlayFab::ClientModels::AddUsernamePasswordRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientAddUsernamePasswordRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->email ) { ss << "  email " << request->email; Log(ss); } else { ss << "  email = nullptr"; Log(ss); } // Class: const char* 
    if( request->password ) { ss << "  password " << request->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientAddUsernamePasswordResult( PlayFabClientAddUsernamePasswordResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientAddUsernamePasswordResult
    if( result->username ) { ss << "  username " << result->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientAddUserVirtualCurrencyRequest( PlayFab::ClientModels::AddUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientAddUserVirtualCurrencyRequest struct:
    // request->amount: int32_t
    ss << "  amount " << request->amount; Log(ss); // Class: int32_t     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->virtualCurrency ) { ss << "  virtualCurrency " << request->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientModifyUserVirtualCurrencyResult( PlayFabClientModifyUserVirtualCurrencyResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientModifyUserVirtualCurrencyResult
    ss << "  balance " << result->balance; Log(ss); // Class: int32_t 
    ss << "  balanceChange " << result->balanceChange; Log(ss); // Class: int32_t 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( result->virtualCurrency ) { ss << "  virtualCurrency " << result->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientAndroidDevicePushNotificationRegistrationRequest( PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientAndroidDevicePushNotificationRegistrationRequest struct:
    // request->confirmationMessage: const char*
    if( request->confirmationMessage ) { ss << "  confirmationMessage " << request->confirmationMessage; Log(ss); } else { ss << "  confirmationMessage = nullptr"; Log(ss); } // Class: const char* 
    if( request->deviceToken ) { ss << "  deviceToken " << request->deviceToken; Log(ss); } else { ss << "  deviceToken = nullptr"; Log(ss); } // Class: const char* 
    ss << "  sendPushNotificationConfirmation " << request->sendPushNotificationConfirmation; Log(ss); // Class: bool 

}

void AutoGenClientTests::LogPlayFabClientAttributeInstallRequest( PlayFab::ClientModels::AttributeInstallRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientAttributeInstallRequest struct:
    // request->adid: const char*
    if( request->adid ) { ss << "  adid " << request->adid; Log(ss); } else { ss << "  adid = nullptr"; Log(ss); } // Class: const char* 
    if( request->idfa ) { ss << "  idfa " << request->idfa; Log(ss); } else { ss << "  idfa = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientCancelTradeRequest( PlayFab::ClientModels::CancelTradeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientCancelTradeRequest struct:
    // request->tradeId: const char*
    if( request->tradeId ) { ss << "  tradeId " << request->tradeId; Log(ss); } else { ss << "  tradeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientCancelTradeResponse( PlayFabClientCancelTradeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientCancelTradeResponse
    ss << "  trade " << result->trade; Log(ss); // Class: PlayFabClientTradeInfo 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientConfirmPurchaseRequest( PlayFab::ClientModels::ConfirmPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientConfirmPurchaseRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->orderId ) { ss << "  orderId " << request->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientConfirmPurchaseResult( PlayFabClientConfirmPurchaseResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientConfirmPurchaseResult    
    ss << "  itemsCount " << result->itemsCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->itemsCount; i++ )
    {
        ss << "  result->items[" << i << "]:" << result->items[i]; Log(ss); // PlayFabItemInstance
    } 
    if( result->orderId ) { ss << "  orderId " << result->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  purchaseDate " << result->purchaseDate; Log(ss); // Class: time_t 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientConsumeItemRequest( PlayFab::ClientModels::ConsumeItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientConsumeItemRequest struct:
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

}

HRESULT AutoGenClientTests::LogPlayFabClientConsumeItemResult( PlayFabClientConsumeItemResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientConsumeItemResult
    if( result->itemInstanceId ) { ss << "  itemInstanceId " << result->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  remainingUses " << result->remainingUses; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientConsumeMicrosoftStoreEntitlementsRequest( PlayFab::ClientModels::ConsumeMicrosoftStoreEntitlementsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientConsumeMicrosoftStoreEntitlementsRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  marketplaceSpecificData " << request->marketplaceSpecificData; Log(ss); // Class: PlayFabClientMicrosoftStorePayload 

}

HRESULT AutoGenClientTests::LogPlayFabClientConsumeMicrosoftStoreEntitlementsResponse( PlayFabClientConsumeMicrosoftStoreEntitlementsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientConsumeMicrosoftStoreEntitlementsResponse    
    ss << "  itemsCount " << result->itemsCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->itemsCount; i++ )
    {
        ss << "  result->items[" << i << "]:" << result->items[i]; Log(ss); // PlayFabItemInstance
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientConsumePS5EntitlementsRequest( PlayFab::ClientModels::ConsumePS5EntitlementsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientConsumePS5EntitlementsRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  marketplaceSpecificData " << request->marketplaceSpecificData; Log(ss); // Class: PlayFabClientPlayStation5Payload 

}

HRESULT AutoGenClientTests::LogPlayFabClientConsumePS5EntitlementsResult( PlayFabClientConsumePS5EntitlementsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientConsumePS5EntitlementsResult    
    ss << "  itemsCount " << result->itemsCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->itemsCount; i++ )
    {
        ss << "  result->items[" << i << "]:" << result->items[i]; Log(ss); // PlayFabItemInstance
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientConsumePSNEntitlementsRequest( PlayFab::ClientModels::ConsumePSNEntitlementsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientConsumePSNEntitlementsRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  serviceLabel " << request->serviceLabel; Log(ss); // Class: int32_t 

}

HRESULT AutoGenClientTests::LogPlayFabClientConsumePSNEntitlementsResult( PlayFabClientConsumePSNEntitlementsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientConsumePSNEntitlementsResult    
    ss << "  itemsGrantedCount " << result->itemsGrantedCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->itemsGrantedCount; i++ )
    {
        ss << "  result->itemsGranted[" << i << "]:" << result->itemsGranted[i]; Log(ss); // PlayFabItemInstance
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientConsumeXboxEntitlementsRequest( PlayFab::ClientModels::ConsumeXboxEntitlementsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientConsumeXboxEntitlementsRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->xboxToken ) { ss << "  xboxToken " << request->xboxToken; Log(ss); } else { ss << "  xboxToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientConsumeXboxEntitlementsResult( PlayFabClientConsumeXboxEntitlementsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientConsumeXboxEntitlementsResult    
    ss << "  itemsCount " << result->itemsCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->itemsCount; i++ )
    {
        ss << "  result->items[" << i << "]:" << result->items[i]; Log(ss); // PlayFabItemInstance
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientCreateSharedGroupRequest( PlayFab::ClientModels::CreateSharedGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientCreateSharedGroupRequest struct:
    // request->sharedGroupId: const char*
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientCreateSharedGroupResult( PlayFabClientCreateSharedGroupResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientCreateSharedGroupResult
    if( result->sharedGroupId ) { ss << "  sharedGroupId " << result->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientExecuteCloudScriptRequest( PlayFab::ClientModels::ExecuteCloudScriptRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientExecuteCloudScriptRequest struct:
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
    ss << "  revisionSelection " << request->revisionSelection; Log(ss); // Class: PlayFabClientCloudScriptRevisionOption 
    ss << "  specificRevision " << request->specificRevision; Log(ss); // Class: int32_t 

}

HRESULT AutoGenClientTests::LogPlayFabClientExecuteCloudScriptResult( PlayFabClientExecuteCloudScriptResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientExecuteCloudScriptResult
    ss << "  aPIRequestsIssued " << result->aPIRequestsIssued; Log(ss); // Class: int32_t 
    ss << "  error " << result->error; Log(ss); // Class: PlayFabClientScriptExecutionError 
    ss << "  executionTimeSeconds " << result->executionTimeSeconds; Log(ss); // Class: double 
    if( result->functionName ) { ss << "  functionName " << result->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( result->functionResult.stringValue ) { ss << "  functionResult " << result->functionResult.stringValue; Log(ss); } else { ss << "  functionResult = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
    ss << "  functionResultTooLarge " << result->functionResultTooLarge; Log(ss); // Class: bool 
    ss << "  httpRequestsIssued " << result->httpRequestsIssued; Log(ss); // Class: int32_t     
    ss << "  logsCount " << result->logsCount; Log(ss);

    // PlayFabClientLogStatement
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

void AutoGenClientTests::LogPlayFabClientGetAccountInfoRequest( PlayFab::ClientModels::GetAccountInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetAccountInfoRequest struct:
    // request->email: const char*
    if( request->email ) { ss << "  email " << request->email; Log(ss); } else { ss << "  email = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->titleDisplayName ) { ss << "  titleDisplayName " << request->titleDisplayName; Log(ss); } else { ss << "  titleDisplayName = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetAccountInfoResult( PlayFabClientGetAccountInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetAccountInfoResult
    ss << "  accountInfo " << result->accountInfo; Log(ss); // Class: PlayFabUserAccountInfo 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetAdPlacementsRequest( PlayFab::ClientModels::GetAdPlacementsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetAdPlacementsRequest struct:
    // request->appId: const char*
    if( request->appId ) { ss << "  appId " << request->appId; Log(ss); } else { ss << "  appId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  identifier " << request->identifier; Log(ss); // Class: PlayFabClientNameIdentifier 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetAdPlacementsResult( PlayFabClientGetAdPlacementsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetAdPlacementsResult    
    ss << "  adPlacementsCount " << result->adPlacementsCount; Log(ss);

    // PlayFabClientAdPlacementDetails
    for( uint32_t i=0; i<result->adPlacementsCount; i++ )
    {
        if( result->adPlacements[i]->placementId ) { ss << "  adPlacements["<<i<<"]->placementId " << result->adPlacements[i]->placementId; Log(ss); } else { ss << "  adPlacements["<<i<<"]->placementId = nullptr"; Log(ss); } // Class: const char* 
        if( result->adPlacements[i]->placementName ) { ss << "  adPlacements["<<i<<"]->placementName " << result->adPlacements[i]->placementName; Log(ss); } else { ss << "  adPlacements["<<i<<"]->placementName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  adPlacements["<<i<<"]->placementViewsRemaining " << result->adPlacements[i]->placementViewsRemaining; Log(ss); // Class: int32_t 
        ss << "  adPlacements["<<i<<"]->placementViewsResetMinutes " << result->adPlacements[i]->placementViewsResetMinutes; Log(ss); // Class: double 
        if( result->adPlacements[i]->rewardAssetUrl ) { ss << "  adPlacements["<<i<<"]->rewardAssetUrl " << result->adPlacements[i]->rewardAssetUrl; Log(ss); } else { ss << "  adPlacements["<<i<<"]->rewardAssetUrl = nullptr"; Log(ss); } // Class: const char* 
        if( result->adPlacements[i]->rewardDescription ) { ss << "  adPlacements["<<i<<"]->rewardDescription " << result->adPlacements[i]->rewardDescription; Log(ss); } else { ss << "  adPlacements["<<i<<"]->rewardDescription = nullptr"; Log(ss); } // Class: const char* 
        if( result->adPlacements[i]->rewardId ) { ss << "  adPlacements["<<i<<"]->rewardId " << result->adPlacements[i]->rewardId; Log(ss); } else { ss << "  adPlacements["<<i<<"]->rewardId = nullptr"; Log(ss); } // Class: const char* 
        if( result->adPlacements[i]->rewardName ) { ss << "  adPlacements["<<i<<"]->rewardName " << result->adPlacements[i]->rewardName; Log(ss); } else { ss << "  adPlacements["<<i<<"]->rewardName = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientListUsersCharactersRequest( PlayFab::ClientModels::ListUsersCharactersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientListUsersCharactersRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientListUsersCharactersResult( PlayFabClientListUsersCharactersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientListUsersCharactersResult    
    ss << "  charactersCount " << result->charactersCount; Log(ss);

    // PlayFabCharacterResult
    for( uint32_t i=0; i<result->charactersCount; i++ )
    {
        ss << "  result->characters[" << i << "]:" << result->characters[i]; Log(ss); // PlayFabCharacterResult
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetCatalogItemsRequest( PlayFab::ClientModels::GetCatalogItemsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetCatalogItemsRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetCatalogItemsResult( PlayFabClientGetCatalogItemsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetCatalogItemsResult    
    ss << "  catalogCount " << result->catalogCount; Log(ss);

    // PlayFabClientCatalogItem
    for( uint32_t i=0; i<result->catalogCount; i++ )
    {
        ss << "  catalog["<<i<<"]->bundle " << result->catalog[i]->bundle; Log(ss); // Class: PlayFabClientCatalogItemBundleInfo 
        ss << "  catalog["<<i<<"]->canBecomeCharacter " << result->catalog[i]->canBecomeCharacter; Log(ss); // Class: bool 
        if( result->catalog[i]->catalogVersion ) { ss << "  catalog["<<i<<"]->catalogVersion " << result->catalog[i]->catalogVersion; Log(ss); } else { ss << "  catalog["<<i<<"]->catalogVersion = nullptr"; Log(ss); } // Class: const char* 
        ss << "  catalog["<<i<<"]->consumable " << result->catalog[i]->consumable; Log(ss); // Class: PlayFabClientCatalogItemConsumableInfo 
        ss << "  catalog["<<i<<"]->container " << result->catalog[i]->container; Log(ss); // Class: PlayFabClientCatalogItemContainerInfo 
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

void AutoGenClientTests::LogPlayFabClientGetCharacterDataRequest( PlayFab::ClientModels::GetCharacterDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetCharacterDataRequest struct:
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

HRESULT AutoGenClientTests::LogPlayFabClientGetCharacterDataResult( PlayFabClientGetCharacterDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetCharacterDataResult
    if( result->characterId ) { ss << "  characterId " << result->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabUserDataRecordDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
        
    } 
    ss << "  dataVersion " << result->dataVersion; Log(ss); // Class: uint32_t 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetCharacterInventoryRequest( PlayFab::ClientModels::GetCharacterInventoryRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetCharacterInventoryRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetCharacterInventoryResult( PlayFabClientGetCharacterInventoryResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetCharacterInventoryResult
    if( result->characterId ) { ss << "  characterId " << result->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  inventoryCount " << result->inventoryCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->inventoryCount; i++ )
    {
        ss << "  result->inventory[" << i << "]:" << result->inventory[i]; Log(ss); // PlayFabItemInstance
    }     
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

void AutoGenClientTests::LogPlayFabClientGetCharacterLeaderboardRequest( PlayFab::ClientModels::GetCharacterLeaderboardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetCharacterLeaderboardRequest struct:
    // request->characterType: const char*
    if( request->characterType ) { ss << "  characterType " << request->characterType; Log(ss); } else { ss << "  characterType = nullptr"; Log(ss); } // Class: const char* 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    ss << "  startPosition " << request->startPosition; Log(ss); // Class: int32_t 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetCharacterLeaderboardResult( PlayFabClientGetCharacterLeaderboardResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetCharacterLeaderboardResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabClientCharacterLeaderboardEntry
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

void AutoGenClientTests::LogPlayFabClientGetCharacterStatisticsRequest( PlayFab::ClientModels::GetCharacterStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetCharacterStatisticsRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetCharacterStatisticsResult( PlayFabClientGetCharacterStatisticsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetCharacterStatisticsResult    
    ss << "  characterStatisticsCount " << result->characterStatisticsCount; Log(ss);

    // PlayFabInt32DictionaryEntry
    for( uint32_t i=0; i<result->characterStatisticsCount; i++ )
    {
        ss << "  result->characterStatistics[" << i << "]:" << result->characterStatistics[i].key << "=" << result->characterStatistics[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetContentDownloadUrlRequest( PlayFab::ClientModels::GetContentDownloadUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetContentDownloadUrlRequest struct:
    // request->httpMethod: const char*
    if( request->httpMethod ) { ss << "  httpMethod " << request->httpMethod; Log(ss); } else { ss << "  httpMethod = nullptr"; Log(ss); } // Class: const char* 
    if( request->key ) { ss << "  key " << request->key; Log(ss); } else { ss << "  key = nullptr"; Log(ss); } // Class: const char* 
    ss << "  thruCDN " << request->thruCDN; Log(ss); // Class: bool 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetContentDownloadUrlResult( PlayFabClientGetContentDownloadUrlResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetContentDownloadUrlResult
    if( result->uRL ) { ss << "  uRL " << result->uRL; Log(ss); } else { ss << "  uRL = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientCurrentGamesRequest( PlayFab::ClientModels::CurrentGamesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientCurrentGamesRequest struct:
    // request->buildVersion: const char*
    if( request->buildVersion ) { ss << "  buildVersion " << request->buildVersion; Log(ss); } else { ss << "  buildVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->gameMode ) { ss << "  gameMode " << request->gameMode; Log(ss); } else { ss << "  gameMode = nullptr"; Log(ss); } // Class: const char* 
    if( request->region ) { ss << "  region " << (int)*request->region; Log(ss); } // Class: PlayFabClientRegion 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  tagFilter " << request->tagFilter; Log(ss); // Class: PlayFabClientCollectionFilter 

}

HRESULT AutoGenClientTests::LogPlayFabClientCurrentGamesResult( PlayFabClientCurrentGamesResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientCurrentGamesResult
    ss << "  gameCount " << result->gameCount; Log(ss); // Class: int32_t     
    ss << "  gamesCount " << result->gamesCount; Log(ss);

    // PlayFabClientGameInfo
    for( uint32_t i=0; i<result->gamesCount; i++ )
    {
        if( result->games[i]->buildVersion ) { ss << "  games["<<i<<"]->buildVersion " << result->games[i]->buildVersion; Log(ss); } else { ss << "  games["<<i<<"]->buildVersion = nullptr"; Log(ss); } // Class: const char* 
        if( result->games[i]->gameMode ) { ss << "  games["<<i<<"]->gameMode " << result->games[i]->gameMode; Log(ss); } else { ss << "  games["<<i<<"]->gameMode = nullptr"; Log(ss); } // Class: const char* 
        if( result->games[i]->gameServerData ) { ss << "  games["<<i<<"]->gameServerData " << result->games[i]->gameServerData; Log(ss); } else { ss << "  games["<<i<<"]->gameServerData = nullptr"; Log(ss); } // Class: const char* 
        ss << "  games["<<i<<"]->gameServerStateEnum " << result->games[i]->gameServerStateEnum; Log(ss); // Class: PlayFabClientGameInstanceState 
        ss << "  games["<<i<<"]->lastHeartbeat " << result->games[i]->lastHeartbeat; Log(ss); // Class: time_t 
        if( result->games[i]->lobbyID ) { ss << "  games["<<i<<"]->lobbyID " << result->games[i]->lobbyID; Log(ss); } else { ss << "  games["<<i<<"]->lobbyID = nullptr"; Log(ss); } // Class: const char* 
        ss << "  games["<<i<<"]->maxPlayers " << result->games[i]->maxPlayers; Log(ss); // Class: int32_t 
        if( result->games[i]->playerUserIds ) { ss << "  games["<<i<<"]->playerUserIds " << result->games[i]->playerUserIds; Log(ss); } else { ss << "  games["<<i<<"]->playerUserIds = nullptr"; Log(ss); } // Class: const char* 
        if( result->games[i]->region ) { ss << "  games["<<i<<"]->region " << (int)*result->games[i]->region; Log(ss); } // Class: PlayFabClientRegion 
        ss << "  games["<<i<<"]->runTime " << result->games[i]->runTime; Log(ss); // Class: uint32_t 
        if( result->games[i]->serverIPV4Address ) { ss << "  games["<<i<<"]->serverIPV4Address " << result->games[i]->serverIPV4Address; Log(ss); } else { ss << "  games["<<i<<"]->serverIPV4Address = nullptr"; Log(ss); } // Class: const char* 
        if( result->games[i]->serverIPV6Address ) { ss << "  games["<<i<<"]->serverIPV6Address " << result->games[i]->serverIPV6Address; Log(ss); } else { ss << "  games["<<i<<"]->serverIPV6Address = nullptr"; Log(ss); } // Class: const char* 
        ss << "  games["<<i<<"]->serverPort " << result->games[i]->serverPort; Log(ss); // Class: int32_t 
        if( result->games[i]->serverPublicDNSName ) { ss << "  games["<<i<<"]->serverPublicDNSName " << result->games[i]->serverPublicDNSName; Log(ss); } else { ss << "  games["<<i<<"]->serverPublicDNSName = nullptr"; Log(ss); } // Class: const char* 
        if( result->games[i]->statisticName ) { ss << "  games["<<i<<"]->statisticName " << result->games[i]->statisticName; Log(ss); } else { ss << "  games["<<i<<"]->statisticName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  games["<<i<<"]->tags " << result->games[i]->tags; Log(ss); // Class: PlayFabStringDictionaryEntry 
    } 
    ss << "  playerCount " << result->playerCount; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetFriendLeaderboardRequest( PlayFab::ClientModels::GetFriendLeaderboardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetFriendLeaderboardRequest struct:
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
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabClientPlayerProfileViewConstraints 
    ss << "  startPosition " << request->startPosition; Log(ss); // Class: int32_t 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 
    if( request->xboxToken ) { ss << "  xboxToken " << request->xboxToken; Log(ss); } else { ss << "  xboxToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetLeaderboardResult( PlayFabClientGetLeaderboardResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetLeaderboardResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabClientPlayerLeaderboardEntry
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

void AutoGenClientTests::LogPlayFabClientGetFriendLeaderboardAroundPlayerRequest( PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetFriendLeaderboardAroundPlayerRequest struct:
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
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabClientPlayerProfileViewConstraints 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 
    if( request->xboxToken ) { ss << "  xboxToken " << request->xboxToken; Log(ss); } else { ss << "  xboxToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetFriendLeaderboardAroundPlayerResult( PlayFabClientGetFriendLeaderboardAroundPlayerResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetFriendLeaderboardAroundPlayerResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabClientPlayerLeaderboardEntry
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

void AutoGenClientTests::LogPlayFabClientGetFriendsListRequest( PlayFab::ClientModels::GetFriendsListRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetFriendsListRequest struct:
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
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabClientPlayerProfileViewConstraints 
    if( request->xboxToken ) { ss << "  xboxToken " << request->xboxToken; Log(ss); } else { ss << "  xboxToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetFriendsListResult( PlayFabClientGetFriendsListResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetFriendsListResult    
    ss << "  friendsCount " << result->friendsCount; Log(ss);

    // PlayFabClientFriendInfo
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

void AutoGenClientTests::LogPlayFabClientGameServerRegionsRequest( PlayFab::ClientModels::GameServerRegionsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGameServerRegionsRequest struct:
    // request->buildVersion: const char*
    if( request->buildVersion ) { ss << "  buildVersion " << request->buildVersion; Log(ss); } else { ss << "  buildVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->titleId ) { ss << "  titleId " << request->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGameServerRegionsResult( PlayFabClientGameServerRegionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGameServerRegionsResult    
    ss << "  regionsCount " << result->regionsCount; Log(ss);

    // PlayFabClientRegionInfo
    for( uint32_t i=0; i<result->regionsCount; i++ )
    {
        ss << "  regions["<<i<<"]->available " << result->regions[i]->available; Log(ss); // Class: bool 
        if( result->regions[i]->name ) { ss << "  regions["<<i<<"]->name " << result->regions[i]->name; Log(ss); } else { ss << "  regions["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        if( result->regions[i]->pingUrl ) { ss << "  regions["<<i<<"]->pingUrl " << result->regions[i]->pingUrl; Log(ss); } else { ss << "  regions["<<i<<"]->pingUrl = nullptr"; Log(ss); } // Class: const char* 
        if( result->regions[i]->region ) { ss << "  regions["<<i<<"]->region " << (int)*result->regions[i]->region; Log(ss); } // Class: PlayFabClientRegion 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetLeaderboardRequest( PlayFab::ClientModels::GetLeaderboardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetLeaderboardRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabClientPlayerProfileViewConstraints 
    ss << "  startPosition " << request->startPosition; Log(ss); // Class: int32_t 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

void AutoGenClientTests::LogPlayFabClientGetLeaderboardAroundCharacterRequest( PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetLeaderboardAroundCharacterRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterType ) { ss << "  characterType " << request->characterType; Log(ss); } else { ss << "  characterType = nullptr"; Log(ss); } // Class: const char* 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetLeaderboardAroundCharacterResult( PlayFabClientGetLeaderboardAroundCharacterResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetLeaderboardAroundCharacterResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabClientCharacterLeaderboardEntry
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

void AutoGenClientTests::LogPlayFabClientGetLeaderboardAroundPlayerRequest( PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetLeaderboardAroundPlayerRequest struct:
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
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabClientPlayerProfileViewConstraints 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetLeaderboardAroundPlayerResult( PlayFabClientGetLeaderboardAroundPlayerResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetLeaderboardAroundPlayerResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabClientPlayerLeaderboardEntry
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

void AutoGenClientTests::LogPlayFabClientGetLeaderboardForUsersCharactersRequest( PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetLeaderboardForUsersCharactersRequest struct:
    // request->maxResultsCount: int32_t
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetLeaderboardForUsersCharactersResult( PlayFabClientGetLeaderboardForUsersCharactersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetLeaderboardForUsersCharactersResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PlayFabClientCharacterLeaderboardEntry
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

void AutoGenClientTests::LogPlayFabClientGetPaymentTokenRequest( PlayFab::ClientModels::GetPaymentTokenRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPaymentTokenRequest struct:
    // request->tokenProvider: const char*
    if( request->tokenProvider ) { ss << "  tokenProvider " << request->tokenProvider; Log(ss); } else { ss << "  tokenProvider = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPaymentTokenResult( PlayFabClientGetPaymentTokenResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPaymentTokenResult
    if( result->orderId ) { ss << "  orderId " << result->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    if( result->providerToken ) { ss << "  providerToken " << result->providerToken; Log(ss); } else { ss << "  providerToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPhotonAuthenticationTokenRequest( PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPhotonAuthenticationTokenRequest struct:
    // request->photonApplicationId: const char*
    if( request->photonApplicationId ) { ss << "  photonApplicationId " << request->photonApplicationId; Log(ss); } else { ss << "  photonApplicationId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPhotonAuthenticationTokenResult( PlayFabClientGetPhotonAuthenticationTokenResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPhotonAuthenticationTokenResult
    if( result->photonCustomAuthenticationToken ) { ss << "  photonCustomAuthenticationToken " << result->photonCustomAuthenticationToken; Log(ss); } else { ss << "  photonCustomAuthenticationToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayerCombinedInfoRequest( PlayFab::ClientModels::GetPlayerCombinedInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayerCombinedInfoRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  infoRequestParameters " << request->infoRequestParameters; Log(ss); // Class: PlayFabClientGetPlayerCombinedInfoRequestParams 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayerCombinedInfoResult( PlayFabClientGetPlayerCombinedInfoResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayerCombinedInfoResult
    ss << "  infoResultPayload " << result->infoResultPayload; Log(ss); // Class: PlayFabGetPlayerCombinedInfoResultPayload 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayerProfileRequest( PlayFab::ClientModels::GetPlayerProfileRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayerProfileRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileConstraints " << request->profileConstraints; Log(ss); // Class: PlayFabClientPlayerProfileViewConstraints 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayerProfileResult( PlayFabClientGetPlayerProfileResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayerProfileResult
    ss << "  playerProfile " << result->playerProfile; Log(ss); // Class: PlayFabPlayerProfileModel 
    return S_OK;
}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayerSegmentsResult( PlayFabClientGetPlayerSegmentsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayerSegmentsResult    
    ss << "  segmentsCount " << result->segmentsCount; Log(ss);

    // PlayFabClientGetSegmentResult
    for( uint32_t i=0; i<result->segmentsCount; i++ )
    {
        if( result->segments[i]->aBTestParent ) { ss << "  segments["<<i<<"]->aBTestParent " << result->segments[i]->aBTestParent; Log(ss); } else { ss << "  segments["<<i<<"]->aBTestParent = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->id ) { ss << "  segments["<<i<<"]->id " << result->segments[i]->id; Log(ss); } else { ss << "  segments["<<i<<"]->id = nullptr"; Log(ss); } // Class: const char* 
        if( result->segments[i]->name ) { ss << "  segments["<<i<<"]->name " << result->segments[i]->name; Log(ss); } else { ss << "  segments["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayerStatisticsRequest( PlayFab::ClientModels::GetPlayerStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayerStatisticsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  statisticNamesCount " << request->statisticNamesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->statisticNamesCount; i++ )
    {
        ss << "  request->statisticNames[" << i << "]:" << request->statisticNames[i]; Log(ss); // const char*
    }     
    ss << "  statisticNameVersionsCount " << request->statisticNameVersionsCount; Log(ss);

    // PlayFabClientStatisticNameVersion
    for( uint32_t i=0; i<request->statisticNameVersionsCount; i++ )
    {
        if( request->statisticNameVersions[i]->statisticName ) { ss << "  statisticNameVersions["<<i<<"]->statisticName " << request->statisticNameVersions[i]->statisticName; Log(ss); } else { ss << "  statisticNameVersions["<<i<<"]->statisticName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statisticNameVersions["<<i<<"]->version " << request->statisticNameVersions[i]->version; Log(ss); // Class: uint32_t 
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayerStatisticsResult( PlayFabClientGetPlayerStatisticsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayerStatisticsResult    
    ss << "  statisticsCount " << result->statisticsCount; Log(ss);

    // PlayFabStatisticValue
    for( uint32_t i=0; i<result->statisticsCount; i++ )
    {
        ss << "  result->statistics[" << i << "]:" << result->statistics[i]; Log(ss); // PlayFabStatisticValue
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayerStatisticVersionsRequest( PlayFab::ClientModels::GetPlayerStatisticVersionsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayerStatisticVersionsRequest struct:
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

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayerStatisticVersionsResult( PlayFabClientGetPlayerStatisticVersionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayerStatisticVersionsResult    
    ss << "  statisticVersionsCount " << result->statisticVersionsCount; Log(ss);

    // PlayFabClientPlayerStatisticVersion
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

void AutoGenClientTests::LogPlayFabClientGetPlayerTagsRequest( PlayFab::ClientModels::GetPlayerTagsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayerTagsRequest struct:
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

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayerTagsResult( PlayFabClientGetPlayerTagsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayerTagsResult
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  tagsCount " << result->tagsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->tagsCount; i++ )
    {
        ss << "  result->tags[" << i << "]:" << result->tags[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayerTradesRequest( PlayFab::ClientModels::GetPlayerTradesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayerTradesRequest struct:
    // request->statusFilter: PlayFabClientTradeStatus const*
    ss << "  statusFilter " << request->statusFilter; Log(ss); // Class: PlayFabClientTradeStatus 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayerTradesResponse( PlayFabClientGetPlayerTradesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayerTradesResponse    
    ss << "  acceptedTradesCount " << result->acceptedTradesCount; Log(ss);

    // PlayFabClientTradeInfo
    for( uint32_t i=0; i<result->acceptedTradesCount; i++ )
    {
        if( result->acceptedTrades[i]->acceptedInventoryInstanceIds ) { ss << "  acceptedTrades["<<i<<"]->acceptedInventoryInstanceIds " << result->acceptedTrades[i]->acceptedInventoryInstanceIds; Log(ss); } else { ss << "  acceptedTrades["<<i<<"]->acceptedInventoryInstanceIds = nullptr"; Log(ss); } // Class: const char* 
        if( result->acceptedTrades[i]->acceptedPlayerId ) { ss << "  acceptedTrades["<<i<<"]->acceptedPlayerId " << result->acceptedTrades[i]->acceptedPlayerId; Log(ss); } else { ss << "  acceptedTrades["<<i<<"]->acceptedPlayerId = nullptr"; Log(ss); } // Class: const char* 
        if( result->acceptedTrades[i]->allowedPlayerIds ) { ss << "  acceptedTrades["<<i<<"]->allowedPlayerIds " << result->acceptedTrades[i]->allowedPlayerIds; Log(ss); } else { ss << "  acceptedTrades["<<i<<"]->allowedPlayerIds = nullptr"; Log(ss); } // Class: const char* 
        ss << "  acceptedTrades["<<i<<"]->cancelledAt " << result->acceptedTrades[i]->cancelledAt; Log(ss); // Class: time_t 
        ss << "  acceptedTrades["<<i<<"]->filledAt " << result->acceptedTrades[i]->filledAt; Log(ss); // Class: time_t 
        ss << "  acceptedTrades["<<i<<"]->invalidatedAt " << result->acceptedTrades[i]->invalidatedAt; Log(ss); // Class: time_t 
        if( result->acceptedTrades[i]->offeredCatalogItemIds ) { ss << "  acceptedTrades["<<i<<"]->offeredCatalogItemIds " << result->acceptedTrades[i]->offeredCatalogItemIds; Log(ss); } else { ss << "  acceptedTrades["<<i<<"]->offeredCatalogItemIds = nullptr"; Log(ss); } // Class: const char* 
        if( result->acceptedTrades[i]->offeredInventoryInstanceIds ) { ss << "  acceptedTrades["<<i<<"]->offeredInventoryInstanceIds " << result->acceptedTrades[i]->offeredInventoryInstanceIds; Log(ss); } else { ss << "  acceptedTrades["<<i<<"]->offeredInventoryInstanceIds = nullptr"; Log(ss); } // Class: const char* 
        if( result->acceptedTrades[i]->offeringPlayerId ) { ss << "  acceptedTrades["<<i<<"]->offeringPlayerId " << result->acceptedTrades[i]->offeringPlayerId; Log(ss); } else { ss << "  acceptedTrades["<<i<<"]->offeringPlayerId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  acceptedTrades["<<i<<"]->openedAt " << result->acceptedTrades[i]->openedAt; Log(ss); // Class: time_t 
        if( result->acceptedTrades[i]->requestedCatalogItemIds ) { ss << "  acceptedTrades["<<i<<"]->requestedCatalogItemIds " << result->acceptedTrades[i]->requestedCatalogItemIds; Log(ss); } else { ss << "  acceptedTrades["<<i<<"]->requestedCatalogItemIds = nullptr"; Log(ss); } // Class: const char* 
        ss << "  acceptedTrades["<<i<<"]->status " << result->acceptedTrades[i]->status; Log(ss); // Class: PlayFabClientTradeStatus 
        if( result->acceptedTrades[i]->tradeId ) { ss << "  acceptedTrades["<<i<<"]->tradeId " << result->acceptedTrades[i]->tradeId; Log(ss); } else { ss << "  acceptedTrades["<<i<<"]->tradeId = nullptr"; Log(ss); } // Class: const char* 
    }     
    ss << "  openedTradesCount " << result->openedTradesCount; Log(ss);

    // PlayFabClientTradeInfo
    for( uint32_t i=0; i<result->openedTradesCount; i++ )
    {
        if( result->openedTrades[i]->acceptedInventoryInstanceIds ) { ss << "  openedTrades["<<i<<"]->acceptedInventoryInstanceIds " << result->openedTrades[i]->acceptedInventoryInstanceIds; Log(ss); } else { ss << "  openedTrades["<<i<<"]->acceptedInventoryInstanceIds = nullptr"; Log(ss); } // Class: const char* 
        if( result->openedTrades[i]->acceptedPlayerId ) { ss << "  openedTrades["<<i<<"]->acceptedPlayerId " << result->openedTrades[i]->acceptedPlayerId; Log(ss); } else { ss << "  openedTrades["<<i<<"]->acceptedPlayerId = nullptr"; Log(ss); } // Class: const char* 
        if( result->openedTrades[i]->allowedPlayerIds ) { ss << "  openedTrades["<<i<<"]->allowedPlayerIds " << result->openedTrades[i]->allowedPlayerIds; Log(ss); } else { ss << "  openedTrades["<<i<<"]->allowedPlayerIds = nullptr"; Log(ss); } // Class: const char* 
        ss << "  openedTrades["<<i<<"]->cancelledAt " << result->openedTrades[i]->cancelledAt; Log(ss); // Class: time_t 
        ss << "  openedTrades["<<i<<"]->filledAt " << result->openedTrades[i]->filledAt; Log(ss); // Class: time_t 
        ss << "  openedTrades["<<i<<"]->invalidatedAt " << result->openedTrades[i]->invalidatedAt; Log(ss); // Class: time_t 
        if( result->openedTrades[i]->offeredCatalogItemIds ) { ss << "  openedTrades["<<i<<"]->offeredCatalogItemIds " << result->openedTrades[i]->offeredCatalogItemIds; Log(ss); } else { ss << "  openedTrades["<<i<<"]->offeredCatalogItemIds = nullptr"; Log(ss); } // Class: const char* 
        if( result->openedTrades[i]->offeredInventoryInstanceIds ) { ss << "  openedTrades["<<i<<"]->offeredInventoryInstanceIds " << result->openedTrades[i]->offeredInventoryInstanceIds; Log(ss); } else { ss << "  openedTrades["<<i<<"]->offeredInventoryInstanceIds = nullptr"; Log(ss); } // Class: const char* 
        if( result->openedTrades[i]->offeringPlayerId ) { ss << "  openedTrades["<<i<<"]->offeringPlayerId " << result->openedTrades[i]->offeringPlayerId; Log(ss); } else { ss << "  openedTrades["<<i<<"]->offeringPlayerId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  openedTrades["<<i<<"]->openedAt " << result->openedTrades[i]->openedAt; Log(ss); // Class: time_t 
        if( result->openedTrades[i]->requestedCatalogItemIds ) { ss << "  openedTrades["<<i<<"]->requestedCatalogItemIds " << result->openedTrades[i]->requestedCatalogItemIds; Log(ss); } else { ss << "  openedTrades["<<i<<"]->requestedCatalogItemIds = nullptr"; Log(ss); } // Class: const char* 
        ss << "  openedTrades["<<i<<"]->status " << result->openedTrades[i]->status; Log(ss); // Class: PlayFabClientTradeStatus 
        if( result->openedTrades[i]->tradeId ) { ss << "  openedTrades["<<i<<"]->tradeId " << result->openedTrades[i]->tradeId; Log(ss); } else { ss << "  openedTrades["<<i<<"]->tradeId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromFacebookIDsRequest( PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromFacebookIDsRequest struct:
    // request->facebookIDs: const char* const*
    // request->facebookIDsCount: uint32_t    
    ss << "  facebookIDsCount " << request->facebookIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->facebookIDsCount; i++ )
    {
        ss << "  request->facebookIDs[" << i << "]:" << request->facebookIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromFacebookIDsResult( PlayFabClientGetPlayFabIDsFromFacebookIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromFacebookIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientFacebookPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->facebookId ) { ss << "  data["<<i<<"]->facebookId " << result->data[i]->facebookId; Log(ss); } else { ss << "  data["<<i<<"]->facebookId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest( PlayFab::ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest struct:
    // request->facebookInstantGamesIds: const char* const*
    // request->facebookInstantGamesIdsCount: uint32_t    
    ss << "  facebookInstantGamesIdsCount " << request->facebookInstantGamesIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->facebookInstantGamesIdsCount; i++ )
    {
        ss << "  request->facebookInstantGamesIds[" << i << "]:" << request->facebookInstantGamesIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult( PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientFacebookInstantGamesPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->facebookInstantGamesId ) { ss << "  data["<<i<<"]->facebookInstantGamesId " << result->data[i]->facebookInstantGamesId; Log(ss); } else { ss << "  data["<<i<<"]->facebookInstantGamesId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromGameCenterIDsRequest( PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest struct:
    // request->gameCenterIDs: const char* const*
    // request->gameCenterIDsCount: uint32_t    
    ss << "  gameCenterIDsCount " << request->gameCenterIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->gameCenterIDsCount; i++ )
    {
        ss << "  request->gameCenterIDs[" << i << "]:" << request->gameCenterIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromGameCenterIDsResult( PlayFabClientGetPlayFabIDsFromGameCenterIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromGameCenterIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientGameCenterPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->gameCenterId ) { ss << "  data["<<i<<"]->gameCenterId " << result->data[i]->gameCenterId; Log(ss); } else { ss << "  data["<<i<<"]->gameCenterId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromGenericIDsRequest( PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromGenericIDsRequest struct:
    // request->genericIDs: PlayFabClientGenericServiceId const* const*
    // request->genericIDsCount: uint32_t    
    ss << "  genericIDsCount " << request->genericIDsCount; Log(ss);

    // PlayFabClientGenericServiceId
    for( uint32_t i=0; i<request->genericIDsCount; i++ )
    {
        if( request->genericIDs[i]->serviceName ) { ss << "  genericIDs["<<i<<"]->serviceName " << request->genericIDs[i]->serviceName; Log(ss); } else { ss << "  genericIDs["<<i<<"]->serviceName = nullptr"; Log(ss); } // Class: const char* 
        if( request->genericIDs[i]->userId ) { ss << "  genericIDs["<<i<<"]->userId " << request->genericIDs[i]->userId; Log(ss); } else { ss << "  genericIDs["<<i<<"]->userId = nullptr"; Log(ss); } // Class: const char* 
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromGenericIDsResult( PlayFabClientGetPlayFabIDsFromGenericIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromGenericIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientGenericPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  data["<<i<<"]->genericId " << result->data[i]->genericId; Log(ss); // Class: PlayFabClientGenericServiceId 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromGoogleIDsRequest( PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromGoogleIDsRequest struct:
    // request->googleIDs: const char* const*
    // request->googleIDsCount: uint32_t    
    ss << "  googleIDsCount " << request->googleIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->googleIDsCount; i++ )
    {
        ss << "  request->googleIDs[" << i << "]:" << request->googleIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromGoogleIDsResult( PlayFabClientGetPlayFabIDsFromGoogleIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromGoogleIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientGooglePlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->googleId ) { ss << "  data["<<i<<"]->googleId " << result->data[i]->googleId; Log(ss); } else { ss << "  data["<<i<<"]->googleId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromKongregateIDsRequest( PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromKongregateIDsRequest struct:
    // request->kongregateIDs: const char* const*
    // request->kongregateIDsCount: uint32_t    
    ss << "  kongregateIDsCount " << request->kongregateIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->kongregateIDsCount; i++ )
    {
        ss << "  request->kongregateIDs[" << i << "]:" << request->kongregateIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromKongregateIDsResult( PlayFabClientGetPlayFabIDsFromKongregateIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromKongregateIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientKongregatePlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->kongregateId ) { ss << "  data["<<i<<"]->kongregateId " << result->data[i]->kongregateId; Log(ss); } else { ss << "  data["<<i<<"]->kongregateId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest struct:
    // request->nintendoSwitchDeviceIds: const char* const*
    // request->nintendoSwitchDeviceIdsCount: uint32_t    
    ss << "  nintendoSwitchDeviceIdsCount " << request->nintendoSwitchDeviceIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->nintendoSwitchDeviceIdsCount; i++ )
    {
        ss << "  request->nintendoSwitchDeviceIds[" << i << "]:" << request->nintendoSwitchDeviceIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientNintendoSwitchPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->nintendoSwitchDeviceId ) { ss << "  data["<<i<<"]->nintendoSwitchDeviceId " << result->data[i]->nintendoSwitchDeviceId; Log(ss); } else { ss << "  data["<<i<<"]->nintendoSwitchDeviceId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest( PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest struct:
    // request->issuerId: int32_t const*
    ss << "  issuerId " << request->issuerId; Log(ss); // Class: int32_t     
    ss << "  PSNAccountIDsCount " << request->PSNAccountIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->PSNAccountIDsCount; i++ )
    {
        ss << "  request->PSNAccountIDs[" << i << "]:" << request->PSNAccountIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromPSNAccountIDsResult( PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientPSNAccountPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->PSNAccountId ) { ss << "  data["<<i<<"]->PSNAccountId " << result->data[i]->PSNAccountId; Log(ss); } else { ss << "  data["<<i<<"]->PSNAccountId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromSteamIDsRequest( PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromSteamIDsRequest struct:
    // request->steamStringIDs: const char* const*
    // request->steamStringIDsCount: uint32_t    
    ss << "  steamStringIDsCount " << request->steamStringIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->steamStringIDsCount; i++ )
    {
        ss << "  request->steamStringIDs[" << i << "]:" << request->steamStringIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromSteamIDsResult( PlayFabClientGetPlayFabIDsFromSteamIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromSteamIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientSteamPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->steamStringId ) { ss << "  data["<<i<<"]->steamStringId " << result->data[i]->steamStringId; Log(ss); } else { ss << "  data["<<i<<"]->steamStringId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromTwitchIDsRequest( PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromTwitchIDsRequest struct:
    // request->twitchIds: const char* const*
    // request->twitchIdsCount: uint32_t    
    ss << "  twitchIdsCount " << request->twitchIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->twitchIdsCount; i++ )
    {
        ss << "  request->twitchIds[" << i << "]:" << request->twitchIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromTwitchIDsResult( PlayFabClientGetPlayFabIDsFromTwitchIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromTwitchIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientTwitchPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->twitchId ) { ss << "  data["<<i<<"]->twitchId " << result->data[i]->twitchId; Log(ss); } else { ss << "  data["<<i<<"]->twitchId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest( PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest struct:
    // request->sandbox: const char*
    if( request->sandbox ) { ss << "  sandbox " << request->sandbox; Log(ss); } else { ss << "  sandbox = nullptr"; Log(ss); } // Class: const char*     
    ss << "  xboxLiveAccountIDsCount " << request->xboxLiveAccountIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->xboxLiveAccountIDsCount; i++ )
    {
        ss << "  request->xboxLiveAccountIDs[" << i << "]:" << request->xboxLiveAccountIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPlayFabIDsFromXboxLiveIDsResult( PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientXboxLiveAccountPlayFabIdPair
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        if( result->data[i]->playFabId ) { ss << "  data["<<i<<"]->playFabId " << result->data[i]->playFabId; Log(ss); } else { ss << "  data["<<i<<"]->playFabId = nullptr"; Log(ss); } // Class: const char* 
        if( result->data[i]->xboxLiveAccountId ) { ss << "  data["<<i<<"]->xboxLiveAccountId " << result->data[i]->xboxLiveAccountId; Log(ss); } else { ss << "  data["<<i<<"]->xboxLiveAccountId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPublisherDataRequest( PlayFab::ClientModels::GetPublisherDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPublisherDataRequest struct:
    // request->keys: const char* const*
    // request->keysCount: uint32_t    
    ss << "  keysCount " << request->keysCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysCount; i++ )
    {
        ss << "  request->keys[" << i << "]:" << request->keys[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPublisherDataResult( PlayFabClientGetPublisherDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPublisherDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetPurchaseRequest( PlayFab::ClientModels::GetPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetPurchaseRequest struct:
    // request->orderId: const char*
    if( request->orderId ) { ss << "  orderId " << request->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetPurchaseResult( PlayFabClientGetPurchaseResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetPurchaseResult
    if( result->orderId ) { ss << "  orderId " << result->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    if( result->paymentProvider ) { ss << "  paymentProvider " << result->paymentProvider; Log(ss); } else { ss << "  paymentProvider = nullptr"; Log(ss); } // Class: const char* 
    ss << "  purchaseDate " << result->purchaseDate; Log(ss); // Class: time_t 
    if( result->transactionId ) { ss << "  transactionId " << result->transactionId; Log(ss); } else { ss << "  transactionId = nullptr"; Log(ss); } // Class: const char* 
    if( result->transactionStatus ) { ss << "  transactionStatus " << result->transactionStatus; Log(ss); } else { ss << "  transactionStatus = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetSharedGroupDataRequest( PlayFab::ClientModels::GetSharedGroupDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetSharedGroupDataRequest struct:
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

HRESULT AutoGenClientTests::LogPlayFabClientGetSharedGroupDataResult( PlayFabClientGetSharedGroupDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetSharedGroupDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabClientSharedGroupDataRecordDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
        
    }     
    ss << "  membersCount " << result->membersCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->membersCount; i++ )
    {
        ss << "  result->members[" << i << "]:" << result->members[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetStoreItemsRequest( PlayFab::ClientModels::GetStoreItemsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetStoreItemsRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->storeId ) { ss << "  storeId " << request->storeId; Log(ss); } else { ss << "  storeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetStoreItemsResult( PlayFabClientGetStoreItemsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetStoreItemsResult
    if( result->catalogVersion ) { ss << "  catalogVersion " << result->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    ss << "  marketingData " << result->marketingData; Log(ss); // Class: PlayFabClientStoreMarketingModel 
    ss << "  source " << result->source; Log(ss); // Class: PlayFabClientSourceType     
    ss << "  storeCount " << result->storeCount; Log(ss);

    // PlayFabClientStoreItem
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

HRESULT AutoGenClientTests::LogPlayFabClientGetTimeResult( PlayFabClientGetTimeResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetTimeResult
    ss << "  time " << result->time; Log(ss); // Class: time_t 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetTitleDataRequest( PlayFab::ClientModels::GetTitleDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetTitleDataRequest struct:
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

HRESULT AutoGenClientTests::LogPlayFabClientGetTitleDataResult( PlayFabClientGetTitleDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetTitleDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetTitleNewsRequest( PlayFab::ClientModels::GetTitleNewsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetTitleNewsRequest struct:
    // request->count: int32_t const*
    ss << "  count " << request->count; Log(ss); // Class: int32_t 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetTitleNewsResult( PlayFabClientGetTitleNewsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetTitleNewsResult    
    ss << "  newsCount " << result->newsCount; Log(ss);

    // PlayFabClientTitleNewsItem
    for( uint32_t i=0; i<result->newsCount; i++ )
    {
        if( result->news[i]->body ) { ss << "  news["<<i<<"]->body " << result->news[i]->body; Log(ss); } else { ss << "  news["<<i<<"]->body = nullptr"; Log(ss); } // Class: const char* 
        if( result->news[i]->newsId ) { ss << "  news["<<i<<"]->newsId " << result->news[i]->newsId; Log(ss); } else { ss << "  news["<<i<<"]->newsId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  news["<<i<<"]->timestamp " << result->news[i]->timestamp; Log(ss); // Class: time_t 
        if( result->news[i]->title ) { ss << "  news["<<i<<"]->title " << result->news[i]->title; Log(ss); } else { ss << "  news["<<i<<"]->title = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetTitlePublicKeyRequest( PlayFab::ClientModels::GetTitlePublicKeyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetTitlePublicKeyRequest struct:
    // request->titleId: const char*
    if( request->titleId ) { ss << "  titleId " << request->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char* 
    if( request->titleSharedSecret ) { ss << "  titleSharedSecret " << request->titleSharedSecret; Log(ss); } else { ss << "  titleSharedSecret = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetTitlePublicKeyResult( PlayFabClientGetTitlePublicKeyResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetTitlePublicKeyResult
    if( result->rSAPublicKey ) { ss << "  rSAPublicKey " << result->rSAPublicKey; Log(ss); } else { ss << "  rSAPublicKey = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetTradeStatusRequest( PlayFab::ClientModels::GetTradeStatusRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetTradeStatusRequest struct:
    // request->offeringPlayerId: const char*
    if( request->offeringPlayerId ) { ss << "  offeringPlayerId " << request->offeringPlayerId; Log(ss); } else { ss << "  offeringPlayerId = nullptr"; Log(ss); } // Class: const char* 
    if( request->tradeId ) { ss << "  tradeId " << request->tradeId; Log(ss); } else { ss << "  tradeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetTradeStatusResponse( PlayFabClientGetTradeStatusResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetTradeStatusResponse
    ss << "  trade " << result->trade; Log(ss); // Class: PlayFabClientTradeInfo 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetUserDataRequest( PlayFab::ClientModels::GetUserDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetUserDataRequest struct:
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

HRESULT AutoGenClientTests::LogPlayFabClientGetUserDataResult( PlayFabClientGetUserDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetUserDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PlayFabUserDataRecordDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
        ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
        
    } 
    ss << "  dataVersion " << result->dataVersion; Log(ss); // Class: uint32_t 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientGetUserInventoryRequest( PlayFab::ClientModels::GetUserInventoryRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGetUserInventoryRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientGetUserInventoryResult( PlayFabClientGetUserInventoryResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGetUserInventoryResult    
    ss << "  inventoryCount " << result->inventoryCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->inventoryCount; i++ )
    {
        ss << "  result->inventory[" << i << "]:" << result->inventory[i]; Log(ss); // PlayFabItemInstance
    }     
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

void AutoGenClientTests::LogPlayFabClientGrantCharacterToUserRequest( PlayFab::ClientModels::GrantCharacterToUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientGrantCharacterToUserRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterName ) { ss << "  characterName " << request->characterName; Log(ss); } else { ss << "  characterName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->itemId ) { ss << "  itemId " << request->itemId; Log(ss); } else { ss << "  itemId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientGrantCharacterToUserResult( PlayFabClientGrantCharacterToUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientGrantCharacterToUserResult
    if( result->characterId ) { ss << "  characterId " << result->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( result->characterType ) { ss << "  characterType " << result->characterType; Log(ss); } else { ss << "  characterType = nullptr"; Log(ss); } // Class: const char* 
    ss << "  result " << result->result; Log(ss); // Class: bool 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientLinkAndroidDeviceIDRequest( PlayFab::ClientModels::LinkAndroidDeviceIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkAndroidDeviceIDRequest struct:
    // request->androidDevice: const char*
    if( request->androidDevice ) { ss << "  androidDevice " << request->androidDevice; Log(ss); } else { ss << "  androidDevice = nullptr"; Log(ss); } // Class: const char* 
    if( request->androidDeviceId ) { ss << "  androidDeviceId " << request->androidDeviceId; Log(ss); } else { ss << "  androidDeviceId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->OS ) { ss << "  OS " << request->OS; Log(ss); } else { ss << "  OS = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkAppleRequest( PlayFab::ClientModels::LinkAppleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkAppleRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->identityToken ) { ss << "  identityToken " << request->identityToken; Log(ss); } else { ss << "  identityToken = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkCustomIDRequest( PlayFab::ClientModels::LinkCustomIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkCustomIDRequest struct:
    // request->customId: const char*
    if( request->customId ) { ss << "  customId " << request->customId; Log(ss); } else { ss << "  customId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 

}

void AutoGenClientTests::LogPlayFabClientLinkFacebookAccountRequest( PlayFab::ClientModels::LinkFacebookAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkFacebookAccountRequest struct:
    // request->accessToken: const char*
    if( request->accessToken ) { ss << "  accessToken " << request->accessToken; Log(ss); } else { ss << "  accessToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 

}

void AutoGenClientTests::LogPlayFabClientLinkFacebookInstantGamesIdRequest( PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkFacebookInstantGamesIdRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->facebookInstantGamesSignature ) { ss << "  facebookInstantGamesSignature " << request->facebookInstantGamesSignature; Log(ss); } else { ss << "  facebookInstantGamesSignature = nullptr"; Log(ss); } // Class: const char* 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 

}

void AutoGenClientTests::LogPlayFabClientLinkGameCenterAccountRequest( PlayFab::ClientModels::LinkGameCenterAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkGameCenterAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->gameCenterId ) { ss << "  gameCenterId " << request->gameCenterId; Log(ss); } else { ss << "  gameCenterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->publicKeyUrl ) { ss << "  publicKeyUrl " << request->publicKeyUrl; Log(ss); } else { ss << "  publicKeyUrl = nullptr"; Log(ss); } // Class: const char* 
    if( request->salt ) { ss << "  salt " << request->salt; Log(ss); } else { ss << "  salt = nullptr"; Log(ss); } // Class: const char* 
    if( request->signature ) { ss << "  signature " << request->signature; Log(ss); } else { ss << "  signature = nullptr"; Log(ss); } // Class: const char* 
    if( request->timestamp ) { ss << "  timestamp " << request->timestamp; Log(ss); } else { ss << "  timestamp = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkGoogleAccountRequest( PlayFab::ClientModels::LinkGoogleAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkGoogleAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->serverAuthCode ) { ss << "  serverAuthCode " << request->serverAuthCode; Log(ss); } else { ss << "  serverAuthCode = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkIOSDeviceIDRequest( PlayFab::ClientModels::LinkIOSDeviceIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkIOSDeviceIDRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->deviceId ) { ss << "  deviceId " << request->deviceId; Log(ss); } else { ss << "  deviceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->deviceModel ) { ss << "  deviceModel " << request->deviceModel; Log(ss); } else { ss << "  deviceModel = nullptr"; Log(ss); } // Class: const char* 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->OS ) { ss << "  OS " << request->OS; Log(ss); } else { ss << "  OS = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkKongregateAccountRequest( PlayFab::ClientModels::LinkKongregateAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkKongregateAccountRequest struct:
    // request->authTicket: const char*
    if( request->authTicket ) { ss << "  authTicket " << request->authTicket; Log(ss); } else { ss << "  authTicket = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->kongregateId ) { ss << "  kongregateId " << request->kongregateId; Log(ss); } else { ss << "  kongregateId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkNintendoServiceAccountRequest( PlayFab::ClientModels::LinkNintendoServiceAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkNintendoServiceAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->identityToken ) { ss << "  identityToken " << request->identityToken; Log(ss); } else { ss << "  identityToken = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkNintendoSwitchDeviceIdRequest( PlayFab::ClientModels::LinkNintendoSwitchDeviceIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkNintendoSwitchDeviceIdRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->nintendoSwitchDeviceId ) { ss << "  nintendoSwitchDeviceId " << request->nintendoSwitchDeviceId; Log(ss); } else { ss << "  nintendoSwitchDeviceId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkOpenIdConnectRequest( PlayFab::ClientModels::LinkOpenIdConnectRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkOpenIdConnectRequest struct:
    // request->connectionId: const char*
    if( request->connectionId ) { ss << "  connectionId " << request->connectionId; Log(ss); } else { ss << "  connectionId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->idToken ) { ss << "  idToken " << request->idToken; Log(ss); } else { ss << "  idToken = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkPSNAccountRequest( PlayFab::ClientModels::LinkPSNAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkPSNAccountRequest struct:
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
    if( request->redirectUri ) { ss << "  redirectUri " << request->redirectUri; Log(ss); } else { ss << "  redirectUri = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkSteamAccountRequest( PlayFab::ClientModels::LinkSteamAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkSteamAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->steamTicket ) { ss << "  steamTicket " << request->steamTicket; Log(ss); } else { ss << "  steamTicket = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientLinkTwitchAccountRequest( PlayFab::ClientModels::LinkTwitchAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkTwitchAccountRequest struct:
    // request->accessToken: const char*
    if( request->accessToken ) { ss << "  accessToken " << request->accessToken; Log(ss); } else { ss << "  accessToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 

}

void AutoGenClientTests::LogPlayFabClientLinkXboxAccountRequest( PlayFab::ClientModels::LinkXboxAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientLinkXboxAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  forceLink " << request->forceLink; Log(ss); // Class: bool 
    if( request->xboxToken ) { ss << "  xboxToken " << request->xboxToken; Log(ss); } else { ss << "  xboxToken = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientMatchmakeRequest( PlayFab::ClientModels::MatchmakeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientMatchmakeRequest struct:
    // request->buildVersion: const char*
    if( request->buildVersion ) { ss << "  buildVersion " << request->buildVersion; Log(ss); } else { ss << "  buildVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->gameMode ) { ss << "  gameMode " << request->gameMode; Log(ss); } else { ss << "  gameMode = nullptr"; Log(ss); } // Class: const char* 
    if( request->lobbyId ) { ss << "  lobbyId " << request->lobbyId; Log(ss); } else { ss << "  lobbyId = nullptr"; Log(ss); } // Class: const char* 
    if( request->region ) { ss << "  region " << (int)*request->region; Log(ss); } // Class: PlayFabClientRegion 
    ss << "  startNewIfNoneFound " << request->startNewIfNoneFound; Log(ss); // Class: bool 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  tagFilter " << request->tagFilter; Log(ss); // Class: PlayFabClientCollectionFilter 

}

HRESULT AutoGenClientTests::LogPlayFabClientMatchmakeResult( PlayFabClientMatchmakeResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientMatchmakeResult
    if( result->expires ) { ss << "  expires " << result->expires; Log(ss); } else { ss << "  expires = nullptr"; Log(ss); } // Class: const char* 
    if( result->lobbyID ) { ss << "  lobbyID " << result->lobbyID; Log(ss); } else { ss << "  lobbyID = nullptr"; Log(ss); } // Class: const char* 
    ss << "  pollWaitTimeMS " << result->pollWaitTimeMS; Log(ss); // Class: int32_t 
    if( result->serverIPV4Address ) { ss << "  serverIPV4Address " << result->serverIPV4Address; Log(ss); } else { ss << "  serverIPV4Address = nullptr"; Log(ss); } // Class: const char* 
    if( result->serverIPV6Address ) { ss << "  serverIPV6Address " << result->serverIPV6Address; Log(ss); } else { ss << "  serverIPV6Address = nullptr"; Log(ss); } // Class: const char* 
    ss << "  serverPort " << result->serverPort; Log(ss); // Class: int32_t 
    if( result->serverPublicDNSName ) { ss << "  serverPublicDNSName " << result->serverPublicDNSName; Log(ss); } else { ss << "  serverPublicDNSName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  status " << result->status; Log(ss); // Class: PlayFabClientMatchmakeStatus 
    if( result->ticket ) { ss << "  ticket " << result->ticket; Log(ss); } else { ss << "  ticket = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientOpenTradeRequest( PlayFab::ClientModels::OpenTradeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientOpenTradeRequest struct:
    // request->allowedPlayerIds: const char* const*
    // request->allowedPlayerIdsCount: uint32_t    
    ss << "  allowedPlayerIdsCount " << request->allowedPlayerIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->allowedPlayerIdsCount; i++ )
    {
        ss << "  request->allowedPlayerIds[" << i << "]:" << request->allowedPlayerIds[i]; Log(ss); // const char*
    }     
    ss << "  offeredInventoryInstanceIdsCount " << request->offeredInventoryInstanceIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->offeredInventoryInstanceIdsCount; i++ )
    {
        ss << "  request->offeredInventoryInstanceIds[" << i << "]:" << request->offeredInventoryInstanceIds[i]; Log(ss); // const char*
    }     
    ss << "  requestedCatalogItemIdsCount " << request->requestedCatalogItemIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->requestedCatalogItemIdsCount; i++ )
    {
        ss << "  request->requestedCatalogItemIds[" << i << "]:" << request->requestedCatalogItemIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenClientTests::LogPlayFabClientOpenTradeResponse( PlayFabClientOpenTradeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientOpenTradeResponse
    ss << "  trade " << result->trade; Log(ss); // Class: PlayFabClientTradeInfo 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientPayForPurchaseRequest( PlayFab::ClientModels::PayForPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientPayForPurchaseRequest struct:
    // request->currency: const char*
    if( request->currency ) { ss << "  currency " << request->currency; Log(ss); } else { ss << "  currency = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->orderId ) { ss << "  orderId " << request->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    if( request->providerName ) { ss << "  providerName " << request->providerName; Log(ss); } else { ss << "  providerName = nullptr"; Log(ss); } // Class: const char* 
    if( request->providerTransactionId ) { ss << "  providerTransactionId " << request->providerTransactionId; Log(ss); } else { ss << "  providerTransactionId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientPayForPurchaseResult( PlayFabClientPayForPurchaseResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientPayForPurchaseResult
    ss << "  creditApplied " << result->creditApplied; Log(ss); // Class: uint32_t 
    if( result->orderId ) { ss << "  orderId " << result->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    if( result->providerData ) { ss << "  providerData " << result->providerData; Log(ss); } else { ss << "  providerData = nullptr"; Log(ss); } // Class: const char* 
    if( result->providerToken ) { ss << "  providerToken " << result->providerToken; Log(ss); } else { ss << "  providerToken = nullptr"; Log(ss); } // Class: const char* 
    if( result->purchaseConfirmationPageURL ) { ss << "  purchaseConfirmationPageURL " << result->purchaseConfirmationPageURL; Log(ss); } else { ss << "  purchaseConfirmationPageURL = nullptr"; Log(ss); } // Class: const char* 
    if( result->purchaseCurrency ) { ss << "  purchaseCurrency " << result->purchaseCurrency; Log(ss); } else { ss << "  purchaseCurrency = nullptr"; Log(ss); } // Class: const char* 
    ss << "  purchasePrice " << result->purchasePrice; Log(ss); // Class: uint32_t 
    ss << "  status " << result->status; Log(ss); // Class: PlayFabClientTransactionStatus     
    ss << "  vCAmountCount " << result->vCAmountCount; Log(ss);

    // PlayFabInt32DictionaryEntry
    for( uint32_t i=0; i<result->vCAmountCount; i++ )
    {
        ss << "  result->vCAmount[" << i << "]:" << result->vCAmount[i].key << "=" << result->vCAmount[i].value; Log(ss);
        
    }     
    ss << "  virtualCurrencyCount " << result->virtualCurrencyCount; Log(ss);

    // PlayFabInt32DictionaryEntry
    for( uint32_t i=0; i<result->virtualCurrencyCount; i++ )
    {
        ss << "  result->virtualCurrency[" << i << "]:" << result->virtualCurrency[i].key << "=" << result->virtualCurrency[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientPurchaseItemRequest( PlayFab::ClientModels::PurchaseItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientPurchaseItemRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->itemId ) { ss << "  itemId " << request->itemId; Log(ss); } else { ss << "  itemId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  price " << request->price; Log(ss); // Class: int32_t 
    if( request->storeId ) { ss << "  storeId " << request->storeId; Log(ss); } else { ss << "  storeId = nullptr"; Log(ss); } // Class: const char* 
    if( request->virtualCurrency ) { ss << "  virtualCurrency " << request->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientPurchaseItemResult( PlayFabClientPurchaseItemResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientPurchaseItemResult    
    ss << "  itemsCount " << result->itemsCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->itemsCount; i++ )
    {
        ss << "  result->items[" << i << "]:" << result->items[i]; Log(ss); // PlayFabItemInstance
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientRedeemCouponRequest( PlayFab::ClientModels::RedeemCouponRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientRedeemCouponRequest struct:
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

}

HRESULT AutoGenClientTests::LogPlayFabClientRedeemCouponResult( PlayFabClientRedeemCouponResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientRedeemCouponResult    
    ss << "  grantedItemsCount " << result->grantedItemsCount; Log(ss);

    // PlayFabItemInstance
    for( uint32_t i=0; i<result->grantedItemsCount; i++ )
    {
        ss << "  result->grantedItems[" << i << "]:" << result->grantedItems[i]; Log(ss); // PlayFabItemInstance
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientRefreshPSNAuthTokenRequest( PlayFab::ClientModels::RefreshPSNAuthTokenRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientRefreshPSNAuthTokenRequest struct:
    // request->authCode: const char*
    if( request->authCode ) { ss << "  authCode " << request->authCode; Log(ss); } else { ss << "  authCode = nullptr"; Log(ss); } // Class: const char* 
    ss << "  issuerId " << request->issuerId; Log(ss); // Class: int32_t 
    if( request->redirectUri ) { ss << "  redirectUri " << request->redirectUri; Log(ss); } else { ss << "  redirectUri = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientRegisterForIOSPushNotificationRequest( PlayFab::ClientModels::RegisterForIOSPushNotificationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientRegisterForIOSPushNotificationRequest struct:
    // request->confirmationMessage: const char*
    if( request->confirmationMessage ) { ss << "  confirmationMessage " << request->confirmationMessage; Log(ss); } else { ss << "  confirmationMessage = nullptr"; Log(ss); } // Class: const char* 
    if( request->deviceToken ) { ss << "  deviceToken " << request->deviceToken; Log(ss); } else { ss << "  deviceToken = nullptr"; Log(ss); } // Class: const char* 
    ss << "  sendPushNotificationConfirmation " << request->sendPushNotificationConfirmation; Log(ss); // Class: bool 

}

void AutoGenClientTests::LogPlayFabClientRemoveContactEmailRequest( PlayFab::ClientModels::RemoveContactEmailRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientRemoveContactEmailRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientRemoveFriendRequest( PlayFab::ClientModels::RemoveFriendRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientRemoveFriendRequest struct:
    // request->friendPlayFabId: const char*
    if( request->friendPlayFabId ) { ss << "  friendPlayFabId " << request->friendPlayFabId; Log(ss); } else { ss << "  friendPlayFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientRemoveGenericIDRequest( PlayFab::ClientModels::RemoveGenericIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientRemoveGenericIDRequest struct:
    // request->genericId: PlayFabClientGenericServiceId const*
    ss << "  genericId " << request->genericId; Log(ss); // Class: PlayFabClientGenericServiceId 

}

void AutoGenClientTests::LogPlayFabClientRemoveSharedGroupMembersRequest( PlayFab::ClientModels::RemoveSharedGroupMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientRemoveSharedGroupMembersRequest struct:
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

void AutoGenClientTests::LogPlayFabClientReportAdActivityRequest( PlayFab::ClientModels::ReportAdActivityRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientReportAdActivityRequest struct:
    // request->activity: PlayFabClientAdActivity
    ss << "  activity " << (int)request->activity; Log(ss); // Class: PlayFabClientAdActivity     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->placementId ) { ss << "  placementId " << request->placementId; Log(ss); } else { ss << "  placementId = nullptr"; Log(ss); } // Class: const char* 
    if( request->rewardId ) { ss << "  rewardId " << request->rewardId; Log(ss); } else { ss << "  rewardId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientDeviceInfoRequest( PlayFab::ClientModels::DeviceInfoRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientDeviceInfoRequest struct:
    // request->info: PlayFabJsonObject
    if( request->info.stringValue ) { ss << "  info " << request->info.stringValue; Log(ss); } else { ss << "  info = nullptr"; Log(ss); } // Class: PlayFabJsonObject 

}

void AutoGenClientTests::LogPlayFabClientReportPlayerClientRequest( PlayFab::ClientModels::ReportPlayerClientRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientReportPlayerClientRequest struct:
    // request->comment: const char*
    if( request->comment ) { ss << "  comment " << request->comment; Log(ss); } else { ss << "  comment = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->reporteeId ) { ss << "  reporteeId " << request->reporteeId; Log(ss); } else { ss << "  reporteeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientReportPlayerClientResult( PlayFabClientReportPlayerClientResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientReportPlayerClientResult
    ss << "  submissionsRemaining " << result->submissionsRemaining; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientRestoreIOSPurchasesRequest( PlayFab::ClientModels::RestoreIOSPurchasesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientRestoreIOSPurchasesRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->receiptData ) { ss << "  receiptData " << request->receiptData; Log(ss); } else { ss << "  receiptData = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientRestoreIOSPurchasesResult( PlayFabClientRestoreIOSPurchasesResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientRestoreIOSPurchasesResult    
    ss << "  fulfillmentsCount " << result->fulfillmentsCount; Log(ss);

    // PlayFabClientPurchaseReceiptFulfillment
    for( uint32_t i=0; i<result->fulfillmentsCount; i++ )
    {
        ss << "  fulfillments["<<i<<"]->fulfilledItems " << result->fulfillments[i]->fulfilledItems; Log(ss); // Class: PlayFabItemInstance 
        if( result->fulfillments[i]->recordedPriceSource ) { ss << "  fulfillments["<<i<<"]->recordedPriceSource " << result->fulfillments[i]->recordedPriceSource; Log(ss); } else { ss << "  fulfillments["<<i<<"]->recordedPriceSource = nullptr"; Log(ss); } // Class: const char* 
        if( result->fulfillments[i]->recordedTransactionCurrency ) { ss << "  fulfillments["<<i<<"]->recordedTransactionCurrency " << result->fulfillments[i]->recordedTransactionCurrency; Log(ss); } else { ss << "  fulfillments["<<i<<"]->recordedTransactionCurrency = nullptr"; Log(ss); } // Class: const char* 
        ss << "  fulfillments["<<i<<"]->recordedTransactionTotal " << result->fulfillments[i]->recordedTransactionTotal; Log(ss); // Class: uint32_t 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientRewardAdActivityRequest( PlayFab::ClientModels::RewardAdActivityRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientRewardAdActivityRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->placementId ) { ss << "  placementId " << request->placementId; Log(ss); } else { ss << "  placementId = nullptr"; Log(ss); } // Class: const char* 
    if( request->rewardId ) { ss << "  rewardId " << request->rewardId; Log(ss); } else { ss << "  rewardId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientRewardAdActivityResult( PlayFabClientRewardAdActivityResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientRewardAdActivityResult
    if( result->adActivityEventId ) { ss << "  adActivityEventId " << result->adActivityEventId; Log(ss); } else { ss << "  adActivityEventId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  debugResultsCount " << result->debugResultsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->debugResultsCount; i++ )
    {
        ss << "  result->debugResults[" << i << "]:" << result->debugResults[i]; Log(ss); // const char*
    } 
    if( result->placementId ) { ss << "  placementId " << result->placementId; Log(ss); } else { ss << "  placementId = nullptr"; Log(ss); } // Class: const char* 
    if( result->placementName ) { ss << "  placementName " << result->placementName; Log(ss); } else { ss << "  placementName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  placementViewsRemaining " << result->placementViewsRemaining; Log(ss); // Class: int32_t 
    ss << "  placementViewsResetMinutes " << result->placementViewsResetMinutes; Log(ss); // Class: double 
    ss << "  rewardResults " << result->rewardResults; Log(ss); // Class: PlayFabClientAdRewardResults 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientSendAccountRecoveryEmailRequest( PlayFab::ClientModels::SendAccountRecoveryEmailRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientSendAccountRecoveryEmailRequest struct:
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
    if( request->titleId ) { ss << "  titleId " << request->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientSetFriendTagsRequest( PlayFab::ClientModels::SetFriendTagsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientSetFriendTagsRequest struct:
    // request->friendPlayFabId: const char*
    if( request->friendPlayFabId ) { ss << "  friendPlayFabId " << request->friendPlayFabId; Log(ss); } else { ss << "  friendPlayFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  tagsCount " << request->tagsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->tagsCount; i++ )
    {
        ss << "  request->tags[" << i << "]:" << request->tags[i]; Log(ss); // const char*
    } 

}

void AutoGenClientTests::LogPlayFabClientSetPlayerSecretRequest( PlayFab::ClientModels::SetPlayerSecretRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientSetPlayerSecretRequest struct:
    // request->encryptedRequest: const char*
    if( request->encryptedRequest ) { ss << "  encryptedRequest " << request->encryptedRequest; Log(ss); } else { ss << "  encryptedRequest = nullptr"; Log(ss); } // Class: const char* 
    if( request->playerSecret ) { ss << "  playerSecret " << request->playerSecret; Log(ss); } else { ss << "  playerSecret = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientStartGameRequest( PlayFab::ClientModels::StartGameRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientStartGameRequest struct:
    // request->buildVersion: const char*
    if( request->buildVersion ) { ss << "  buildVersion " << request->buildVersion; Log(ss); } else { ss << "  buildVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->customCommandLineData ) { ss << "  customCommandLineData " << request->customCommandLineData; Log(ss); } else { ss << "  customCommandLineData = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->gameMode ) { ss << "  gameMode " << request->gameMode; Log(ss); } else { ss << "  gameMode = nullptr"; Log(ss); } // Class: const char* 
    ss << "  region " << (int)request->region; Log(ss); // Class: PlayFabClientRegion 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientStartGameResult( PlayFabClientStartGameResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientStartGameResult
    if( result->expires ) { ss << "  expires " << result->expires; Log(ss); } else { ss << "  expires = nullptr"; Log(ss); } // Class: const char* 
    if( result->lobbyID ) { ss << "  lobbyID " << result->lobbyID; Log(ss); } else { ss << "  lobbyID = nullptr"; Log(ss); } // Class: const char* 
    if( result->password ) { ss << "  password " << result->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( result->serverIPV4Address ) { ss << "  serverIPV4Address " << result->serverIPV4Address; Log(ss); } else { ss << "  serverIPV4Address = nullptr"; Log(ss); } // Class: const char* 
    if( result->serverIPV6Address ) { ss << "  serverIPV6Address " << result->serverIPV6Address; Log(ss); } else { ss << "  serverIPV6Address = nullptr"; Log(ss); } // Class: const char* 
    ss << "  serverPort " << result->serverPort; Log(ss); // Class: int32_t 
    if( result->serverPublicDNSName ) { ss << "  serverPublicDNSName " << result->serverPublicDNSName; Log(ss); } else { ss << "  serverPublicDNSName = nullptr"; Log(ss); } // Class: const char* 
    if( result->ticket ) { ss << "  ticket " << result->ticket; Log(ss); } else { ss << "  ticket = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientStartPurchaseRequest( PlayFab::ClientModels::StartPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientStartPurchaseRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  itemsCount " << request->itemsCount; Log(ss);

    // PlayFabClientItemPurchaseRequest
    for( uint32_t i=0; i<request->itemsCount; i++ )
    {
        if( request->items[i]->annotation ) { ss << "  items["<<i<<"]->annotation " << request->items[i]->annotation; Log(ss); } else { ss << "  items["<<i<<"]->annotation = nullptr"; Log(ss); } // Class: const char* 
        if( request->items[i]->itemId ) { ss << "  items["<<i<<"]->itemId " << request->items[i]->itemId; Log(ss); } else { ss << "  items["<<i<<"]->itemId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  items["<<i<<"]->quantity " << request->items[i]->quantity; Log(ss); // Class: uint32_t 
        if( request->items[i]->upgradeFromItems ) { ss << "  items["<<i<<"]->upgradeFromItems " << request->items[i]->upgradeFromItems; Log(ss); } else { ss << "  items["<<i<<"]->upgradeFromItems = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( request->storeId ) { ss << "  storeId " << request->storeId; Log(ss); } else { ss << "  storeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientStartPurchaseResult( PlayFabClientStartPurchaseResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientStartPurchaseResult    
    ss << "  contentsCount " << result->contentsCount; Log(ss);

    // PlayFabClientCartItem
    for( uint32_t i=0; i<result->contentsCount; i++ )
    {
        if( result->contents[i]->description ) { ss << "  contents["<<i<<"]->description " << result->contents[i]->description; Log(ss); } else { ss << "  contents["<<i<<"]->description = nullptr"; Log(ss); } // Class: const char* 
        if( result->contents[i]->displayName ) { ss << "  contents["<<i<<"]->displayName " << result->contents[i]->displayName; Log(ss); } else { ss << "  contents["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        if( result->contents[i]->itemClass ) { ss << "  contents["<<i<<"]->itemClass " << result->contents[i]->itemClass; Log(ss); } else { ss << "  contents["<<i<<"]->itemClass = nullptr"; Log(ss); } // Class: const char* 
        if( result->contents[i]->itemId ) { ss << "  contents["<<i<<"]->itemId " << result->contents[i]->itemId; Log(ss); } else { ss << "  contents["<<i<<"]->itemId = nullptr"; Log(ss); } // Class: const char* 
        if( result->contents[i]->itemInstanceId ) { ss << "  contents["<<i<<"]->itemInstanceId " << result->contents[i]->itemInstanceId; Log(ss); } else { ss << "  contents["<<i<<"]->itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  contents["<<i<<"]->realCurrencyPrices " << result->contents[i]->realCurrencyPrices; Log(ss); // Class: PlayFabUint32DictionaryEntry 
        ss << "  contents["<<i<<"]->vCAmount " << result->contents[i]->vCAmount; Log(ss); // Class: PlayFabUint32DictionaryEntry 
        ss << "  contents["<<i<<"]->virtualCurrencyPrices " << result->contents[i]->virtualCurrencyPrices; Log(ss); // Class: PlayFabUint32DictionaryEntry 
    } 
    if( result->orderId ) { ss << "  orderId " << result->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  paymentOptionsCount " << result->paymentOptionsCount; Log(ss);

    // PlayFabClientPaymentOption
    for( uint32_t i=0; i<result->paymentOptionsCount; i++ )
    {
        if( result->paymentOptions[i]->currency ) { ss << "  paymentOptions["<<i<<"]->currency " << result->paymentOptions[i]->currency; Log(ss); } else { ss << "  paymentOptions["<<i<<"]->currency = nullptr"; Log(ss); } // Class: const char* 
        ss << "  paymentOptions["<<i<<"]->price " << result->paymentOptions[i]->price; Log(ss); // Class: uint32_t 
        if( result->paymentOptions[i]->providerName ) { ss << "  paymentOptions["<<i<<"]->providerName " << result->paymentOptions[i]->providerName; Log(ss); } else { ss << "  paymentOptions["<<i<<"]->providerName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  paymentOptions["<<i<<"]->storeCredit " << result->paymentOptions[i]->storeCredit; Log(ss); // Class: uint32_t 
    }     
    ss << "  virtualCurrencyBalancesCount " << result->virtualCurrencyBalancesCount; Log(ss);

    // PlayFabInt32DictionaryEntry
    for( uint32_t i=0; i<result->virtualCurrencyBalancesCount; i++ )
    {
        ss << "  result->virtualCurrencyBalances[" << i << "]:" << result->virtualCurrencyBalances[i].key << "=" << result->virtualCurrencyBalances[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientSubtractUserVirtualCurrencyRequest( PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientSubtractUserVirtualCurrencyRequest struct:
    // request->amount: int32_t
    ss << "  amount " << request->amount; Log(ss); // Class: int32_t     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->virtualCurrency ) { ss << "  virtualCurrency " << request->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientUnlinkAndroidDeviceIDRequest( PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkAndroidDeviceIDRequest struct:
    // request->androidDeviceId: const char*
    if( request->androidDeviceId ) { ss << "  androidDeviceId " << request->androidDeviceId; Log(ss); } else { ss << "  androidDeviceId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkAppleRequest( PlayFab::ClientModels::UnlinkAppleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkAppleRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkCustomIDRequest( PlayFab::ClientModels::UnlinkCustomIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkCustomIDRequest struct:
    // request->customId: const char*
    if( request->customId ) { ss << "  customId " << request->customId; Log(ss); } else { ss << "  customId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkFacebookAccountRequest( PlayFab::ClientModels::UnlinkFacebookAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkFacebookAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkFacebookInstantGamesIdRequest( PlayFab::ClientModels::UnlinkFacebookInstantGamesIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkFacebookInstantGamesIdRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->facebookInstantGamesId ) { ss << "  facebookInstantGamesId " << request->facebookInstantGamesId; Log(ss); } else { ss << "  facebookInstantGamesId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientUnlinkGameCenterAccountRequest( PlayFab::ClientModels::UnlinkGameCenterAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkGameCenterAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkGoogleAccountRequest( PlayFab::ClientModels::UnlinkGoogleAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkGoogleAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkIOSDeviceIDRequest( PlayFab::ClientModels::UnlinkIOSDeviceIDRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkIOSDeviceIDRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->deviceId ) { ss << "  deviceId " << request->deviceId; Log(ss); } else { ss << "  deviceId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientUnlinkKongregateAccountRequest( PlayFab::ClientModels::UnlinkKongregateAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkKongregateAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkNintendoServiceAccountRequest( PlayFab::ClientModels::UnlinkNintendoServiceAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkNintendoServiceAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkNintendoSwitchDeviceIdRequest( PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkNintendoSwitchDeviceIdRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->nintendoSwitchDeviceId ) { ss << "  nintendoSwitchDeviceId " << request->nintendoSwitchDeviceId; Log(ss); } else { ss << "  nintendoSwitchDeviceId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientUnlinkOpenIdConnectRequest( PlayFab::ClientModels::UnlinkOpenIdConnectRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkOpenIdConnectRequest struct:
    // request->connectionId: const char*
    if( request->connectionId ) { ss << "  connectionId " << request->connectionId; Log(ss); } else { ss << "  connectionId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkPSNAccountRequest( PlayFab::ClientModels::UnlinkPSNAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkPSNAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkSteamAccountRequest( PlayFab::ClientModels::UnlinkSteamAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkSteamAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkTwitchAccountRequest( PlayFab::ClientModels::UnlinkTwitchAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkTwitchAccountRequest struct:
    // request->accessToken: const char*
    if( request->accessToken ) { ss << "  accessToken " << request->accessToken; Log(ss); } else { ss << "  accessToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlinkXboxAccountRequest( PlayFab::ClientModels::UnlinkXboxAccountRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlinkXboxAccountRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenClientTests::LogPlayFabClientUnlockContainerInstanceRequest( PlayFab::ClientModels::UnlockContainerInstanceRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlockContainerInstanceRequest struct:
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

}

HRESULT AutoGenClientTests::LogPlayFabClientUnlockContainerItemResult( PlayFabClientUnlockContainerItemResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientUnlockContainerItemResult    
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

void AutoGenClientTests::LogPlayFabClientUnlockContainerItemRequest( PlayFab::ClientModels::UnlockContainerItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUnlockContainerItemRequest struct:
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

}

void AutoGenClientTests::LogPlayFabClientUpdateAvatarUrlRequest( PlayFab::ClientModels::UpdateAvatarUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUpdateAvatarUrlRequest struct:
    // request->imageUrl: const char*
    if( request->imageUrl ) { ss << "  imageUrl " << request->imageUrl; Log(ss); } else { ss << "  imageUrl = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenClientTests::LogPlayFabClientUpdateCharacterDataRequest( PlayFab::ClientModels::UpdateCharacterDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUpdateCharacterDataRequest struct:
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

}

HRESULT AutoGenClientTests::LogPlayFabClientUpdateCharacterDataResult( PlayFabClientUpdateCharacterDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientUpdateCharacterDataResult
    ss << "  dataVersion " << result->dataVersion; Log(ss); // Class: uint32_t 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientUpdateCharacterStatisticsRequest( PlayFab::ClientModels::UpdateCharacterStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUpdateCharacterStatisticsRequest struct:
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

}

void AutoGenClientTests::LogPlayFabClientUpdatePlayerStatisticsRequest( PlayFab::ClientModels::UpdatePlayerStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUpdatePlayerStatisticsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  statisticsCount " << request->statisticsCount; Log(ss);

    // PlayFabClientStatisticUpdate
    for( uint32_t i=0; i<request->statisticsCount; i++ )
    {
        if( request->statistics[i]->statisticName ) { ss << "  statistics["<<i<<"]->statisticName " << request->statistics[i]->statisticName; Log(ss); } else { ss << "  statistics["<<i<<"]->statisticName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  statistics["<<i<<"]->value " << request->statistics[i]->value; Log(ss); // Class: int32_t 
        ss << "  statistics["<<i<<"]->version " << request->statistics[i]->version; Log(ss); // Class: uint32_t 
    } 

}

void AutoGenClientTests::LogPlayFabClientUpdateSharedGroupDataRequest( PlayFab::ClientModels::UpdateSharedGroupDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUpdateSharedGroupDataRequest struct:
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

void AutoGenClientTests::LogPlayFabClientUpdateUserDataRequest( PlayFab::ClientModels::UpdateUserDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUpdateUserDataRequest struct:
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

}

HRESULT AutoGenClientTests::LogPlayFabClientUpdateUserDataResult( PlayFabClientUpdateUserDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientUpdateUserDataResult
    ss << "  dataVersion " << result->dataVersion; Log(ss); // Class: uint32_t 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientUpdateUserTitleDisplayNameRequest( PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientUpdateUserTitleDisplayNameRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->displayName ) { ss << "  displayName " << request->displayName; Log(ss); } else { ss << "  displayName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientUpdateUserTitleDisplayNameResult( PlayFabClientUpdateUserTitleDisplayNameResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientUpdateUserTitleDisplayNameResult
    if( result->displayName ) { ss << "  displayName " << result->displayName; Log(ss); } else { ss << "  displayName = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientValidateAmazonReceiptRequest( PlayFab::ClientModels::ValidateAmazonReceiptRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientValidateAmazonReceiptRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->currencyCode ) { ss << "  currencyCode " << request->currencyCode; Log(ss); } else { ss << "  currencyCode = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  purchasePrice " << request->purchasePrice; Log(ss); // Class: int32_t 
    if( request->receiptId ) { ss << "  receiptId " << request->receiptId; Log(ss); } else { ss << "  receiptId = nullptr"; Log(ss); } // Class: const char* 
    if( request->userId ) { ss << "  userId " << request->userId; Log(ss); } else { ss << "  userId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientValidateAmazonReceiptResult( PlayFabClientValidateAmazonReceiptResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientValidateAmazonReceiptResult    
    ss << "  fulfillmentsCount " << result->fulfillmentsCount; Log(ss);

    // PlayFabClientPurchaseReceiptFulfillment
    for( uint32_t i=0; i<result->fulfillmentsCount; i++ )
    {
        ss << "  fulfillments["<<i<<"]->fulfilledItems " << result->fulfillments[i]->fulfilledItems; Log(ss); // Class: PlayFabItemInstance 
        if( result->fulfillments[i]->recordedPriceSource ) { ss << "  fulfillments["<<i<<"]->recordedPriceSource " << result->fulfillments[i]->recordedPriceSource; Log(ss); } else { ss << "  fulfillments["<<i<<"]->recordedPriceSource = nullptr"; Log(ss); } // Class: const char* 
        if( result->fulfillments[i]->recordedTransactionCurrency ) { ss << "  fulfillments["<<i<<"]->recordedTransactionCurrency " << result->fulfillments[i]->recordedTransactionCurrency; Log(ss); } else { ss << "  fulfillments["<<i<<"]->recordedTransactionCurrency = nullptr"; Log(ss); } // Class: const char* 
        ss << "  fulfillments["<<i<<"]->recordedTransactionTotal " << result->fulfillments[i]->recordedTransactionTotal; Log(ss); // Class: uint32_t 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientValidateGooglePlayPurchaseRequest( PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientValidateGooglePlayPurchaseRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->currencyCode ) { ss << "  currencyCode " << request->currencyCode; Log(ss); } else { ss << "  currencyCode = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  purchasePrice " << request->purchasePrice; Log(ss); // Class: uint32_t 
    if( request->receiptJson ) { ss << "  receiptJson " << request->receiptJson; Log(ss); } else { ss << "  receiptJson = nullptr"; Log(ss); } // Class: const char* 
    if( request->signature ) { ss << "  signature " << request->signature; Log(ss); } else { ss << "  signature = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientValidateGooglePlayPurchaseResult( PlayFabClientValidateGooglePlayPurchaseResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientValidateGooglePlayPurchaseResult    
    ss << "  fulfillmentsCount " << result->fulfillmentsCount; Log(ss);

    // PlayFabClientPurchaseReceiptFulfillment
    for( uint32_t i=0; i<result->fulfillmentsCount; i++ )
    {
        ss << "  fulfillments["<<i<<"]->fulfilledItems " << result->fulfillments[i]->fulfilledItems; Log(ss); // Class: PlayFabItemInstance 
        if( result->fulfillments[i]->recordedPriceSource ) { ss << "  fulfillments["<<i<<"]->recordedPriceSource " << result->fulfillments[i]->recordedPriceSource; Log(ss); } else { ss << "  fulfillments["<<i<<"]->recordedPriceSource = nullptr"; Log(ss); } // Class: const char* 
        if( result->fulfillments[i]->recordedTransactionCurrency ) { ss << "  fulfillments["<<i<<"]->recordedTransactionCurrency " << result->fulfillments[i]->recordedTransactionCurrency; Log(ss); } else { ss << "  fulfillments["<<i<<"]->recordedTransactionCurrency = nullptr"; Log(ss); } // Class: const char* 
        ss << "  fulfillments["<<i<<"]->recordedTransactionTotal " << result->fulfillments[i]->recordedTransactionTotal; Log(ss); // Class: uint32_t 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientValidateIOSReceiptRequest( PlayFab::ClientModels::ValidateIOSReceiptRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientValidateIOSReceiptRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->currencyCode ) { ss << "  currencyCode " << request->currencyCode; Log(ss); } else { ss << "  currencyCode = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  purchasePrice " << request->purchasePrice; Log(ss); // Class: int32_t 
    if( request->receiptData ) { ss << "  receiptData " << request->receiptData; Log(ss); } else { ss << "  receiptData = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientValidateIOSReceiptResult( PlayFabClientValidateIOSReceiptResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientValidateIOSReceiptResult    
    ss << "  fulfillmentsCount " << result->fulfillmentsCount; Log(ss);

    // PlayFabClientPurchaseReceiptFulfillment
    for( uint32_t i=0; i<result->fulfillmentsCount; i++ )
    {
        ss << "  fulfillments["<<i<<"]->fulfilledItems " << result->fulfillments[i]->fulfilledItems; Log(ss); // Class: PlayFabItemInstance 
        if( result->fulfillments[i]->recordedPriceSource ) { ss << "  fulfillments["<<i<<"]->recordedPriceSource " << result->fulfillments[i]->recordedPriceSource; Log(ss); } else { ss << "  fulfillments["<<i<<"]->recordedPriceSource = nullptr"; Log(ss); } // Class: const char* 
        if( result->fulfillments[i]->recordedTransactionCurrency ) { ss << "  fulfillments["<<i<<"]->recordedTransactionCurrency " << result->fulfillments[i]->recordedTransactionCurrency; Log(ss); } else { ss << "  fulfillments["<<i<<"]->recordedTransactionCurrency = nullptr"; Log(ss); } // Class: const char* 
        ss << "  fulfillments["<<i<<"]->recordedTransactionTotal " << result->fulfillments[i]->recordedTransactionTotal; Log(ss); // Class: uint32_t 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientValidateWindowsReceiptRequest( PlayFab::ClientModels::ValidateWindowsReceiptRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientValidateWindowsReceiptRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->currencyCode ) { ss << "  currencyCode " << request->currencyCode; Log(ss); } else { ss << "  currencyCode = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  purchasePrice " << request->purchasePrice; Log(ss); // Class: uint32_t 
    if( request->receipt ) { ss << "  receipt " << request->receipt; Log(ss); } else { ss << "  receipt = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenClientTests::LogPlayFabClientValidateWindowsReceiptResult( PlayFabClientValidateWindowsReceiptResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientValidateWindowsReceiptResult    
    ss << "  fulfillmentsCount " << result->fulfillmentsCount; Log(ss);

    // PlayFabClientPurchaseReceiptFulfillment
    for( uint32_t i=0; i<result->fulfillmentsCount; i++ )
    {
        ss << "  fulfillments["<<i<<"]->fulfilledItems " << result->fulfillments[i]->fulfilledItems; Log(ss); // Class: PlayFabItemInstance 
        if( result->fulfillments[i]->recordedPriceSource ) { ss << "  fulfillments["<<i<<"]->recordedPriceSource " << result->fulfillments[i]->recordedPriceSource; Log(ss); } else { ss << "  fulfillments["<<i<<"]->recordedPriceSource = nullptr"; Log(ss); } // Class: const char* 
        if( result->fulfillments[i]->recordedTransactionCurrency ) { ss << "  fulfillments["<<i<<"]->recordedTransactionCurrency " << result->fulfillments[i]->recordedTransactionCurrency; Log(ss); } else { ss << "  fulfillments["<<i<<"]->recordedTransactionCurrency = nullptr"; Log(ss); } // Class: const char* 
        ss << "  fulfillments["<<i<<"]->recordedTransactionTotal " << result->fulfillments[i]->recordedTransactionTotal; Log(ss); // Class: uint32_t 
    } 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientWriteClientCharacterEventRequest( PlayFab::ClientModels::WriteClientCharacterEventRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientWriteClientCharacterEventRequest struct:
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
    ss << "  timestamp " << request->timestamp; Log(ss); // Class: time_t 

}

HRESULT AutoGenClientTests::LogPlayFabClientWriteEventResponse( PlayFabClientWriteEventResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabClientWriteEventResponse
    if( result->eventId ) { ss << "  eventId " << result->eventId; Log(ss); } else { ss << "  eventId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenClientTests::LogPlayFabClientWriteClientPlayerEventRequest( PlayFab::ClientModels::WriteClientPlayerEventRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientWriteClientPlayerEventRequest struct:
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

void AutoGenClientTests::LogPlayFabClientWriteTitleEventRequest( PlayFab::ClientModels::WriteTitleEventRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabClientWriteTitleEventRequest struct:
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
