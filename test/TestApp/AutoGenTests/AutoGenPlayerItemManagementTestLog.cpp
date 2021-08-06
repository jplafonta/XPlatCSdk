#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenPlayerItemManagementTests.h"
#include "XAsyncHelper.h"

uint32_t g_PlayerItemManagementTestIndex = 1;

namespace PlayFabUnit
{

 

void AutoGenPlayerItemManagementTests::LogAdminAddUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::AdminAddUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementModifyUserVirtualCurrencyResult(PFPlayerItemManagementModifyUserVirtualCurrencyResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementModifyUserVirtualCurrencyResult
    ss << "  balance " << result->balance; Log(ss); // Class: int32_t 
    ss << "  balanceChange " << result->balanceChange; Log(ss); // Class: int32_t 
    if( result->playFabId ) { ss << "  playFabId " << result->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( result->virtualCurrency ) { ss << "  virtualCurrency " << result->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogCheckLimitedEditionItemAvailabilityRequest( PlayFab::PlayerItemManagementModels::CheckLimitedEditionItemAvailabilityRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemId ) { ss << "  itemId " << request->itemId; Log(ss); } else { ss << "  itemId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult(PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementCheckLimitedEditionItemAvailabilityResult
    ss << "  amount " << result->amount; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogAdminGetUserInventoryRequest( PlayFab::PlayerItemManagementModels::AdminGetUserInventoryRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementAdminGetUserInventoryResult(PFPlayerItemManagementAdminGetUserInventoryResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogGrantItemsToUsersRequest( PlayFab::PlayerItemManagementModels::GrantItemsToUsersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementGrantItemsToUsersRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    }     
    ss << "  itemGrantsCount " << request->itemGrantsCount; Log(ss);

    // PFPlayerItemManagementItemGrant
    for( uint32_t i=0; i<request->itemGrantsCount; i++ )
    {
            ss << "  request->itemGrants[" << i << "]:" << request->itemGrants[i]; Log(ss); // PFPlayerItemManagementItemGrant
    } 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementGrantItemsToUsersResult(PFPlayerItemManagementGrantItemsToUsersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementGrantItemsToUsersResult    
    ss << "  itemGrantResultsCount " << result->itemGrantResultsCount; Log(ss);

    // PFPlayerItemManagementGrantedItemInstance
    for( uint32_t i=0; i<result->itemGrantResultsCount; i++ )
    {
            ss << "  result->itemGrantResults[" << i << "]:" << result->itemGrantResults[i]; Log(ss); // PFPlayerItemManagementGrantedItemInstance
    } 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogIncrementLimitedEditionItemAvailabilityRequest( PlayFab::PlayerItemManagementModels::IncrementLimitedEditionItemAvailabilityRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest struct:
    // request->amount: int32_t
    ss << "  amount " << request->amount; Log(ss); // Class: int32_t 
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->itemId ) { ss << "  itemId " << request->itemId; Log(ss); } else { ss << "  itemId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenPlayerItemManagementTests::LogRevokeInventoryItemRequest( PlayFab::PlayerItemManagementModels::RevokeInventoryItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementRevokeInventoryItemRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenPlayerItemManagementTests::LogRevokeInventoryItemsRequest( PlayFab::PlayerItemManagementModels::RevokeInventoryItemsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementRevokeInventoryItemsRequest struct:
    // request->items: PFPlayerItemManagementRevokeInventoryItem const* const*
    // request->itemsCount: uint32_t    
    ss << "  itemsCount " << request->itemsCount; Log(ss);

    // PFPlayerItemManagementRevokeInventoryItem
    for( uint32_t i=0; i<request->itemsCount; i++ )
    {
            ss << "  request->items[" << i << "]:" << request->items[i]; Log(ss); // PFPlayerItemManagementRevokeInventoryItem
    } 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementRevokeInventoryItemsResult(PFPlayerItemManagementRevokeInventoryItemsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementRevokeInventoryItemsResult    
    ss << "  errorsCount " << result->errorsCount; Log(ss);

    // PFPlayerItemManagementRevokeItemError
    for( uint32_t i=0; i<result->errorsCount; i++ )
    {
            ss << "  result->errors[" << i << "]:" << result->errors[i]; Log(ss); // PFPlayerItemManagementRevokeItemError
    } 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogAdminSubtractUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::AdminSubtractUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerItemManagementTests::LogClientAddUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ClientAddUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerItemManagementTests::LogConfirmPurchaseRequest( PlayFab::PlayerItemManagementModels::ConfirmPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementConfirmPurchaseRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->orderId ) { ss << "  orderId " << request->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementConfirmPurchaseResult(PFPlayerItemManagementConfirmPurchaseResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementConfirmPurchaseResult    
    ss << "  itemsCount " << result->itemsCount; Log(ss);

    // PFItemInstance
    for( uint32_t i=0; i<result->itemsCount; i++ )
    {
            ss << "  result->items[" << i << "]:" << result->items[i]; Log(ss); // PFItemInstance
    } 
    if( result->orderId ) { ss << "  orderId " << result->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  purchaseDate " << result->purchaseDate; Log(ss); // Class: time_t 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogClientConsumeItemRequest( PlayFab::PlayerItemManagementModels::ClientConsumeItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementConsumeItemResult(PFPlayerItemManagementConsumeItemResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementConsumeItemResult
    if( result->itemInstanceId ) { ss << "  itemInstanceId " << result->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  remainingUses " << result->remainingUses; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogClientGetCharacterInventoryRequest( PlayFab::PlayerItemManagementModels::ClientGetCharacterInventoryRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementClientGetCharacterInventoryResult(PFPlayerItemManagementClientGetCharacterInventoryResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogGetPaymentTokenRequest( PlayFab::PlayerItemManagementModels::GetPaymentTokenRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementGetPaymentTokenRequest struct:
    // request->tokenProvider: const char*
    if( request->tokenProvider ) { ss << "  tokenProvider " << request->tokenProvider; Log(ss); } else { ss << "  tokenProvider = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementGetPaymentTokenResult(PFPlayerItemManagementGetPaymentTokenResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementGetPaymentTokenResult
    if( result->orderId ) { ss << "  orderId " << result->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    if( result->providerToken ) { ss << "  providerToken " << result->providerToken; Log(ss); } else { ss << "  providerToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogGetPurchaseRequest( PlayFab::PlayerItemManagementModels::GetPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementGetPurchaseRequest struct:
    // request->orderId: const char*
    if( request->orderId ) { ss << "  orderId " << request->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementGetPurchaseResult(PFPlayerItemManagementGetPurchaseResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementGetPurchaseResult
    if( result->orderId ) { ss << "  orderId " << result->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    if( result->paymentProvider ) { ss << "  paymentProvider " << result->paymentProvider; Log(ss); } else { ss << "  paymentProvider = nullptr"; Log(ss); } // Class: const char* 
    ss << "  purchaseDate " << result->purchaseDate; Log(ss); // Class: time_t 
    if( result->transactionId ) { ss << "  transactionId " << result->transactionId; Log(ss); } else { ss << "  transactionId = nullptr"; Log(ss); } // Class: const char* 
    if( result->transactionStatus ) { ss << "  transactionStatus " << result->transactionStatus; Log(ss); } else { ss << "  transactionStatus = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogClientGetUserInventoryRequest( PlayFab::PlayerItemManagementModels::ClientGetUserInventoryRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementClientGetUserInventoryResult(PFPlayerItemManagementClientGetUserInventoryResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogPayForPurchaseRequest( PlayFab::PlayerItemManagementModels::PayForPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementPayForPurchaseRequest struct:
    // request->currency: const char*
    if( request->currency ) { ss << "  currency " << request->currency; Log(ss); } else { ss << "  currency = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->orderId ) { ss << "  orderId " << request->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    if( request->providerName ) { ss << "  providerName " << request->providerName; Log(ss); } else { ss << "  providerName = nullptr"; Log(ss); } // Class: const char* 
    if( request->providerTransactionId ) { ss << "  providerTransactionId " << request->providerTransactionId; Log(ss); } else { ss << "  providerTransactionId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementPayForPurchaseResult(PFPlayerItemManagementPayForPurchaseResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementPayForPurchaseResult
    ss << "  creditApplied " << result->creditApplied; Log(ss); // Class: uint32_t 
    if( result->orderId ) { ss << "  orderId " << result->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char* 
    if( result->providerData ) { ss << "  providerData " << result->providerData; Log(ss); } else { ss << "  providerData = nullptr"; Log(ss); } // Class: const char* 
    if( result->providerToken ) { ss << "  providerToken " << result->providerToken; Log(ss); } else { ss << "  providerToken = nullptr"; Log(ss); } // Class: const char* 
    if( result->purchaseConfirmationPageURL ) { ss << "  purchaseConfirmationPageURL " << result->purchaseConfirmationPageURL; Log(ss); } else { ss << "  purchaseConfirmationPageURL = nullptr"; Log(ss); } // Class: const char* 
    if( result->purchaseCurrency ) { ss << "  purchaseCurrency " << result->purchaseCurrency; Log(ss); } else { ss << "  purchaseCurrency = nullptr"; Log(ss); } // Class: const char* 
    ss << "  purchasePrice " << result->purchasePrice; Log(ss); // Class: uint32_t 
    ss << "  status " << result->status; Log(ss); // Class: PFPlayerItemManagementTransactionStatus     
    ss << "  vCAmountCount " << result->vCAmountCount; Log(ss);

    // PFInt32DictionaryEntry
    for( uint32_t i=0; i<result->vCAmountCount; i++ )
    {
            ss << "  result->vCAmount[" << i << "]:" << result->vCAmount[i].key << "=" << result->vCAmount[i].value; Log(ss);
            
    }     
    ss << "  virtualCurrencyCount " << result->virtualCurrencyCount; Log(ss);

    // PFInt32DictionaryEntry
    for( uint32_t i=0; i<result->virtualCurrencyCount; i++ )
    {
            ss << "  result->virtualCurrency[" << i << "]:" << result->virtualCurrency[i].key << "=" << result->virtualCurrency[i].value; Log(ss);
            
    } 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogPurchaseItemRequest( PlayFab::PlayerItemManagementModels::PurchaseItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementPurchaseItemRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->itemId ) { ss << "  itemId " << request->itemId; Log(ss); } else { ss << "  itemId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  price " << request->price; Log(ss); // Class: int32_t 
    if( request->storeId ) { ss << "  storeId " << request->storeId; Log(ss); } else { ss << "  storeId = nullptr"; Log(ss); } // Class: const char* 
    if( request->virtualCurrency ) { ss << "  virtualCurrency " << request->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementPurchaseItemResult(PFPlayerItemManagementPurchaseItemResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementPurchaseItemResult    
    ss << "  itemsCount " << result->itemsCount; Log(ss);

    // PFItemInstance
    for( uint32_t i=0; i<result->itemsCount; i++ )
    {
            ss << "  result->items[" << i << "]:" << result->items[i]; Log(ss); // PFItemInstance
    } 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogClientRedeemCouponRequest( PlayFab::PlayerItemManagementModels::ClientRedeemCouponRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementRedeemCouponResult(PFPlayerItemManagementRedeemCouponResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementRedeemCouponResult    
    ss << "  grantedItemsCount " << result->grantedItemsCount; Log(ss);

    // PFItemInstance
    for( uint32_t i=0; i<result->grantedItemsCount; i++ )
    {
            ss << "  result->grantedItems[" << i << "]:" << result->grantedItems[i]; Log(ss); // PFItemInstance
    } 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogStartPurchaseRequest( PlayFab::PlayerItemManagementModels::StartPurchaseRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementStartPurchaseRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    }     
    ss << "  itemsCount " << request->itemsCount; Log(ss);

    // PFPlayerItemManagementItemPurchaseRequest
    for( uint32_t i=0; i<request->itemsCount; i++ )
    {
            ss << "  request->items[" << i << "]:" << request->items[i]; Log(ss); // PFPlayerItemManagementItemPurchaseRequest
    } 
    if( request->storeId ) { ss << "  storeId " << request->storeId; Log(ss); } else { ss << "  storeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementStartPurchaseResult(PFPlayerItemManagementStartPurchaseResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementStartPurchaseResult    
    ss << "  contentsCount " << result->contentsCount; Log(ss);

    // PFPlayerItemManagementCartItem
    for( uint32_t i=0; i<result->contentsCount; i++ )
    {
            ss << "  result->contents[" << i << "]:" << result->contents[i]; Log(ss); // PFPlayerItemManagementCartItem
    } 
    if( result->orderId ) { ss << "  orderId " << result->orderId; Log(ss); } else { ss << "  orderId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  paymentOptionsCount " << result->paymentOptionsCount; Log(ss);

    // PFPlayerItemManagementPaymentOption
    for( uint32_t i=0; i<result->paymentOptionsCount; i++ )
    {
            ss << "  result->paymentOptions[" << i << "]:" << result->paymentOptions[i]; Log(ss); // PFPlayerItemManagementPaymentOption
    }     
    ss << "  virtualCurrencyBalancesCount " << result->virtualCurrencyBalancesCount; Log(ss);

    // PFInt32DictionaryEntry
    for( uint32_t i=0; i<result->virtualCurrencyBalancesCount; i++ )
    {
            ss << "  result->virtualCurrencyBalances[" << i << "]:" << result->virtualCurrencyBalances[i].key << "=" << result->virtualCurrencyBalances[i].value; Log(ss);
            
    } 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogClientSubtractUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ClientSubtractUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerItemManagementTests::LogClientUnlockContainerInstanceRequest( PlayFab::PlayerItemManagementModels::ClientUnlockContainerInstanceRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementUnlockContainerItemResult(PFPlayerItemManagementUnlockContainerItemResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementUnlockContainerItemResult    
    ss << "  grantedItemsCount " << result->grantedItemsCount; Log(ss);

    // PFItemInstance
    for( uint32_t i=0; i<result->grantedItemsCount; i++ )
    {
            ss << "  result->grantedItems[" << i << "]:" << result->grantedItems[i]; Log(ss); // PFItemInstance
    } 
    if( result->unlockedItemInstanceId ) { ss << "  unlockedItemInstanceId " << result->unlockedItemInstanceId; Log(ss); } else { ss << "  unlockedItemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( result->unlockedWithItemInstanceId ) { ss << "  unlockedWithItemInstanceId " << result->unlockedWithItemInstanceId; Log(ss); } else { ss << "  unlockedWithItemInstanceId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  virtualCurrencyCount " << result->virtualCurrencyCount; Log(ss);

    // PFUint32DictionaryEntry
    for( uint32_t i=0; i<result->virtualCurrencyCount; i++ )
    {
            ss << "  result->virtualCurrency[" << i << "]:" << result->virtualCurrency[i].key << "=" << result->virtualCurrency[i].value; Log(ss);
            
    } 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogClientUnlockContainerItemRequest( PlayFab::PlayerItemManagementModels::ClientUnlockContainerItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerItemManagementTests::LogAddCharacterVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::AddCharacterVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementAddCharacterVirtualCurrencyRequest struct:
    // request->amount: int32_t
    ss << "  amount " << request->amount; Log(ss); // Class: int32_t 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->virtualCurrency ) { ss << "  virtualCurrency " << request->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementModifyCharacterVirtualCurrencyResult(PFPlayerItemManagementModifyCharacterVirtualCurrencyResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementModifyCharacterVirtualCurrencyResult
    ss << "  balance " << result->balance; Log(ss); // Class: int32_t 
    if( result->virtualCurrency ) { ss << "  virtualCurrency " << result->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogServerAddUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ServerAddUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerItemManagementTests::LogServerConsumeItemRequest( PlayFab::PlayerItemManagementModels::ServerConsumeItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerItemManagementTests::LogEvaluateRandomResultTableRequest( PlayFab::PlayerItemManagementModels::EvaluateRandomResultTableRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementEvaluateRandomResultTableRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->tableId ) { ss << "  tableId " << request->tableId; Log(ss); } else { ss << "  tableId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementEvaluateRandomResultTableResult(PFPlayerItemManagementEvaluateRandomResultTableResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementEvaluateRandomResultTableResult
    if( result->resultItemId ) { ss << "  resultItemId " << result->resultItemId; Log(ss); } else { ss << "  resultItemId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogServerGetCharacterInventoryRequest( PlayFab::PlayerItemManagementModels::ServerGetCharacterInventoryRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementServerGetCharacterInventoryResult(PFPlayerItemManagementServerGetCharacterInventoryResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogGetRandomResultTablesRequest( PlayFab::PlayerItemManagementModels::GetRandomResultTablesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementGetRandomResultTablesRequest struct:
    // request->catalogVersion: const char*
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  tableIDsCount " << request->tableIDsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->tableIDsCount; i++ )
    {
            ss << "  request->tableIDs[" << i << "]:" << request->tableIDs[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFGetRandomResultTablesResult(PFGetRandomResultTablesResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementGetRandomResultTablesResult    
    ss << "  tablesCount " << result->tablesCount; Log(ss);

    // PFRandomResultTableListingDictionaryEntry
    for( uint32_t i=0; i<result->tablesCount; i++ )
    {
            ss << "  result->tables[" << i << "]:" << result->tables[i].key << "=" << result->tables[i].value; Log(ss);
            
    } 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogServerGetUserInventoryRequest( PlayFab::PlayerItemManagementModels::ServerGetUserInventoryRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementServerGetUserInventoryResult(PFPlayerItemManagementServerGetUserInventoryResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogGrantItemsToCharacterRequest( PlayFab::PlayerItemManagementModels::GrantItemsToCharacterRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementGrantItemsToCharacterRequest struct:
    // request->annotation: const char*
    if( request->annotation ) { ss << "  annotation " << request->annotation; Log(ss); } else { ss << "  annotation = nullptr"; Log(ss); } // Class: const char* 
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char* 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
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

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementGrantItemsToCharacterResult(PFPlayerItemManagementGrantItemsToCharacterResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementGrantItemsToCharacterResult    
    ss << "  itemGrantResultsCount " << result->itemGrantResultsCount; Log(ss);

    // PFPlayerItemManagementGrantedItemInstance
    for( uint32_t i=0; i<result->itemGrantResultsCount; i++ )
    {
            ss << "  result->itemGrantResults[" << i << "]:" << result->itemGrantResults[i]; Log(ss); // PFPlayerItemManagementGrantedItemInstance
    } 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogGrantItemsToUserRequest( PlayFab::PlayerItemManagementModels::GrantItemsToUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementGrantItemsToUserRequest struct:
    // request->annotation: const char*
    if( request->annotation ) { ss << "  annotation " << request->annotation; Log(ss); } else { ss << "  annotation = nullptr"; Log(ss); } // Class: const char* 
    if( request->catalogVersion ) { ss << "  catalogVersion " << request->catalogVersion; Log(ss); } else { ss << "  catalogVersion = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
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

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementGrantItemsToUserResult(PFPlayerItemManagementGrantItemsToUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementGrantItemsToUserResult    
    ss << "  itemGrantResultsCount " << result->itemGrantResultsCount; Log(ss);

    // PFPlayerItemManagementGrantedItemInstance
    for( uint32_t i=0; i<result->itemGrantResultsCount; i++ )
    {
            ss << "  result->itemGrantResults[" << i << "]:" << result->itemGrantResults[i]; Log(ss); // PFPlayerItemManagementGrantedItemInstance
    } 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogModifyItemUsesRequest( PlayFab::PlayerItemManagementModels::ModifyItemUsesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementModifyItemUsesRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  usesToAdd " << request->usesToAdd; Log(ss); // Class: int32_t 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementModifyItemUsesResult(PFPlayerItemManagementModifyItemUsesResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementModifyItemUsesResult
    if( result->itemInstanceId ) { ss << "  itemInstanceId " << result->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  remainingUses " << result->remainingUses; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogMoveItemToCharacterFromCharacterRequest( PlayFab::PlayerItemManagementModels::MoveItemToCharacterFromCharacterRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementMoveItemToCharacterFromCharacterRequest struct:
    // request->givingCharacterId: const char*
    if( request->givingCharacterId ) { ss << "  givingCharacterId " << request->givingCharacterId; Log(ss); } else { ss << "  givingCharacterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->receivingCharacterId ) { ss << "  receivingCharacterId " << request->receivingCharacterId; Log(ss); } else { ss << "  receivingCharacterId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenPlayerItemManagementTests::LogMoveItemToCharacterFromUserRequest( PlayFab::PlayerItemManagementModels::MoveItemToCharacterFromUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementMoveItemToCharacterFromUserRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenPlayerItemManagementTests::LogMoveItemToUserFromCharacterRequest( PlayFab::PlayerItemManagementModels::MoveItemToUserFromCharacterRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementMoveItemToUserFromCharacterRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char* 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenPlayerItemManagementTests::LogServerRedeemCouponRequest( PlayFab::PlayerItemManagementModels::ServerRedeemCouponRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerItemManagementTests::LogReportPlayerServerRequest( PlayFab::PlayerItemManagementModels::ReportPlayerServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementReportPlayerServerRequest struct:
    // request->comment: const char*
    if( request->comment ) { ss << "  comment " << request->comment; Log(ss); } else { ss << "  comment = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->reporteeId ) { ss << "  reporteeId " << request->reporteeId; Log(ss); } else { ss << "  reporteeId = nullptr"; Log(ss); } // Class: const char* 
    if( request->reporterId ) { ss << "  reporterId " << request->reporterId; Log(ss); } else { ss << "  reporterId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenPlayerItemManagementTests::LogPFPlayerItemManagementReportPlayerServerResult(PFPlayerItemManagementReportPlayerServerResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabPlayerItemManagementReportPlayerServerResult
    ss << "  submissionsRemaining " << result->submissionsRemaining; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenPlayerItemManagementTests::LogSubtractCharacterVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::SubtractCharacterVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementSubtractCharacterVirtualCurrencyRequest struct:
    // request->amount: int32_t
    ss << "  amount " << request->amount; Log(ss); // Class: int32_t 
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    if( request->virtualCurrency ) { ss << "  virtualCurrency " << request->virtualCurrency; Log(ss); } else { ss << "  virtualCurrency = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenPlayerItemManagementTests::LogServerSubtractUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ServerSubtractUserVirtualCurrencyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerItemManagementTests::LogServerUnlockContainerInstanceRequest( PlayFab::PlayerItemManagementModels::ServerUnlockContainerInstanceRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerItemManagementTests::LogServerUnlockContainerItemRequest( PlayFab::PlayerItemManagementModels::ServerUnlockContainerItemRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenPlayerItemManagementTests::LogUpdateUserInventoryItemDataRequest( PlayFab::PlayerItemManagementModels::UpdateUserInventoryItemDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_PlayerItemManagementTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabPlayerItemManagementUpdateUserInventoryItemDataRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
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
    if( request->itemInstanceId ) { ss << "  itemInstanceId " << request->itemInstanceId; Log(ss); } else { ss << "  itemInstanceId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  keysToRemoveCount " << request->keysToRemoveCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysToRemoveCount; i++ )
    {
            ss << "  request->keysToRemove[" << i << "]:" << request->keysToRemove[i]; Log(ss); // const char*
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

 

}
