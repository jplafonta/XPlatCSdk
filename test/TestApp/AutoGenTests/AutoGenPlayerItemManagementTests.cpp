#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenPlayerItemManagementTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenPlayerItemManagementTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenPlayerItemManagementTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenPlayerItemManagementTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestPlayerItemManagementAdminAddUserVirtualCurrency", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminAddUserVirtualCurrency);
    AddTest("TestPlayerItemManagementAdminCheckLimitedEditionItemAvailability", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminCheckLimitedEditionItemAvailability);
    AddTest("TestPlayerItemManagementAdminGetUserInventory", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminGetUserInventory);
    AddTest("TestPlayerItemManagementAdminGrantItemsToUsers", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminGrantItemsToUsers);
    AddTest("TestPlayerItemManagementAdminIncrementLimitedEditionItemAvailability", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminIncrementLimitedEditionItemAvailability);
    AddTest("TestPlayerItemManagementAdminRevokeInventoryItem", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminRevokeInventoryItem);
    AddTest("TestPlayerItemManagementAdminRevokeInventoryItems", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminRevokeInventoryItems);
    AddTest("TestPlayerItemManagementAdminSubtractUserVirtualCurrency", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminSubtractUserVirtualCurrency);
    AddTest("TestPlayerItemManagementClientAddUserVirtualCurrency", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientAddUserVirtualCurrency);
    AddTest("TestPlayerItemManagementClientConfirmPurchase", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientConfirmPurchase);
    AddTest("TestPlayerItemManagementClientConsumeItem", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientConsumeItem);
    AddTest("TestPlayerItemManagementClientGetCharacterInventory", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientGetCharacterInventory);
    AddTest("TestPlayerItemManagementClientGetPaymentToken", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientGetPaymentToken);
    AddTest("TestPlayerItemManagementClientGetPurchase", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientGetPurchase);
    AddTest("TestPlayerItemManagementClientGetUserInventory", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientGetUserInventory);
    AddTest("TestPlayerItemManagementClientPayForPurchase", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientPayForPurchase);
    AddTest("TestPlayerItemManagementClientPurchaseItem", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientPurchaseItem);
    AddTest("TestPlayerItemManagementClientRedeemCoupon", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientRedeemCoupon);
    AddTest("TestPlayerItemManagementClientStartPurchase", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientStartPurchase);
    AddTest("TestPlayerItemManagementClientSubtractUserVirtualCurrency", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientSubtractUserVirtualCurrency);
    AddTest("TestPlayerItemManagementClientUnlockContainerInstance", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientUnlockContainerInstance);
    AddTest("TestPlayerItemManagementClientUnlockContainerItem", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientUnlockContainerItem);
    AddTest("TestPlayerItemManagementServerAddCharacterVirtualCurrency", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerAddCharacterVirtualCurrency);
    AddTest("TestPlayerItemManagementServerAddUserVirtualCurrency", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerAddUserVirtualCurrency);
    AddTest("TestPlayerItemManagementServerConsumeItem", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerConsumeItem);
    AddTest("TestPlayerItemManagementServerEvaluateRandomResultTable", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerEvaluateRandomResultTable);
    AddTest("TestPlayerItemManagementServerGetCharacterInventory", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGetCharacterInventory);
    AddTest("TestPlayerItemManagementServerGetRandomResultTables", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGetRandomResultTables);
    AddTest("TestPlayerItemManagementServerGetUserInventory", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGetUserInventory);
    AddTest("TestPlayerItemManagementServerGrantItemsToCharacter", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGrantItemsToCharacter);
    AddTest("TestPlayerItemManagementServerGrantItemsToUser", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGrantItemsToUser);
    AddTest("TestPlayerItemManagementServerGrantItemsToUsers", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGrantItemsToUsers);
    AddTest("TestPlayerItemManagementServerModifyItemUses", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerModifyItemUses);
    AddTest("TestPlayerItemManagementServerMoveItemToCharacterFromCharacter", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerMoveItemToCharacterFromCharacter);
    AddTest("TestPlayerItemManagementServerMoveItemToCharacterFromUser", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerMoveItemToCharacterFromUser);
    AddTest("TestPlayerItemManagementServerMoveItemToUserFromCharacter", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerMoveItemToUserFromCharacter);
    AddTest("TestPlayerItemManagementServerRedeemCoupon", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerRedeemCoupon);
    AddTest("TestPlayerItemManagementServerReportPlayer", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerReportPlayer);
    AddTest("TestPlayerItemManagementServerRevokeInventoryItem", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerRevokeInventoryItem);
    AddTest("TestPlayerItemManagementServerRevokeInventoryItems", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerRevokeInventoryItems);
    AddTest("TestPlayerItemManagementServerSubtractCharacterVirtualCurrency", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerSubtractCharacterVirtualCurrency);
    AddTest("TestPlayerItemManagementServerSubtractUserVirtualCurrency", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerSubtractUserVirtualCurrency);
    AddTest("TestPlayerItemManagementServerUnlockContainerInstance", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerUnlockContainerInstance);
    AddTest("TestPlayerItemManagementServerUnlockContainerItem", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerUnlockContainerItem);
    AddTest("TestPlayerItemManagementServerUpdateUserInventoryItemCustomData", &AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerUpdateUserInventoryItemCustomData);
}

void AutoGenPlayerItemManagementTests::ClassSetUp()
{
    HRESULT hr = PFAdminInitialize(testTitleData.titleId.data(), testTitleData.developerSecretKey.data(), nullptr, &stateHandle);
    assert(SUCCEEDED(hr));
    if (SUCCEEDED(hr))
    {
        PFAuthenticationLoginWithCustomIDRequest request{};
        request.customId = "CustomId";
        bool createAccount = true;
        request.createAccount = &createAccount;
        request.titleId = testTitleData.titleId.data();

        PFGetPlayerCombinedInfoRequestParams combinedInfoRequestParams{};
        combinedInfoRequestParams.getCharacterInventories = true;
        combinedInfoRequestParams.getCharacterList = true;
        combinedInfoRequestParams.getPlayerProfile = true;
        combinedInfoRequestParams.getPlayerStatistics = true;
        combinedInfoRequestParams.getTitleData = true;
        combinedInfoRequestParams.getUserAccountInfo = true;
        combinedInfoRequestParams.getUserData = true;
        combinedInfoRequestParams.getUserInventory = true;
        combinedInfoRequestParams.getUserReadOnlyData = true;
        combinedInfoRequestParams.getUserVirtualCurrency = true;
        request.infoRequestParameters = &combinedInfoRequestParams;

        XAsyncBlock async{};
        hr = PFAuthenticationClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PFGetAuthResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PFEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenPlayerItemManagementTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenPlayerItemManagementTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


void AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminAddUserVirtualCurrency(TestContext& testContext)
{
    struct AdminAddUserVirtualCurrencyResult : public XAsyncResult
    {
        PFPlayerItemManagementModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementAdminAddUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementAdminAddUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
            return ValidatePFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminAddUserVirtualCurrencyResult>>(testContext);

    PlayFab::PlayerItemManagementModels::AdminAddUserVirtualCurrencyRequest request;
    FillAdminAddUserVirtualCurrencyRequest( &request );
    LogAdminAddUserVirtualCurrencyRequest( &request, "TestPlayerItemManagementAdminAddUserVirtualCurrency" );
    HRESULT hr = PFPlayerItemManagementAdminAddUserVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementAdminAddUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminCheckLimitedEditionItemAvailability(TestContext& testContext)
{
    struct AdminCheckLimitedEditionItemAvailabilityResult : public XAsyncResult
    {
        PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementAdminCheckLimitedEditionItemAvailabilityGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult( &result );
            return ValidatePFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminCheckLimitedEditionItemAvailabilityResult>>(testContext);

    PlayFab::PlayerItemManagementModels::CheckLimitedEditionItemAvailabilityRequest request;
    FillCheckLimitedEditionItemAvailabilityRequest( &request );
    LogCheckLimitedEditionItemAvailabilityRequest( &request, "TestPlayerItemManagementAdminCheckLimitedEditionItemAvailability" );
    HRESULT hr = PFPlayerItemManagementAdminCheckLimitedEditionItemAvailabilityAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementAdminCheckLimitedEditionItemAvailabilityAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminGetUserInventory(TestContext& testContext)
{
    struct AdminGetUserInventoryResult : public XAsyncResult
    {
        PFPlayerItemManagementAdminGetUserInventoryResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementAdminGetUserInventoryGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementAdminGetUserInventoryResult( result );
            return ValidatePFPlayerItemManagementAdminGetUserInventoryResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetUserInventoryResult>>(testContext);

    PlayFab::PlayerItemManagementModels::AdminGetUserInventoryRequest request;
    FillAdminGetUserInventoryRequest( &request );
    LogAdminGetUserInventoryRequest( &request, "TestPlayerItemManagementAdminGetUserInventory" );
    HRESULT hr = PFPlayerItemManagementAdminGetUserInventoryAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementAdminGetUserInventoryAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminGrantItemsToUsers(TestContext& testContext)
{
    struct AdminGrantItemsToUsersResult : public XAsyncResult
    {
        PFPlayerItemManagementGrantItemsToUsersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementAdminGrantItemsToUsersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementGrantItemsToUsersResult( result );
            return ValidatePFPlayerItemManagementGrantItemsToUsersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGrantItemsToUsersResult>>(testContext);

    PlayFab::PlayerItemManagementModels::GrantItemsToUsersRequest request;
    FillGrantItemsToUsersRequest( &request );
    LogGrantItemsToUsersRequest( &request, "TestPlayerItemManagementAdminGrantItemsToUsers" );
    HRESULT hr = PFPlayerItemManagementAdminGrantItemsToUsersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementAdminGrantItemsToUsersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminIncrementLimitedEditionItemAvailability(TestContext& testContext)
{
    struct AdminIncrementLimitedEditionItemAvailabilityResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminIncrementLimitedEditionItemAvailabilityResult>>(testContext);

    PlayFab::PlayerItemManagementModels::IncrementLimitedEditionItemAvailabilityRequest request;
    FillIncrementLimitedEditionItemAvailabilityRequest( &request );
    LogIncrementLimitedEditionItemAvailabilityRequest( &request, "TestPlayerItemManagementAdminIncrementLimitedEditionItemAvailability" );
    HRESULT hr = PFPlayerItemManagementAdminIncrementLimitedEditionItemAvailabilityAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementAdminIncrementLimitedEditionItemAvailabilityAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminRevokeInventoryItem(TestContext& testContext)
{
    struct AdminRevokeInventoryItemResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminRevokeInventoryItemResult>>(testContext);

    PlayFab::PlayerItemManagementModels::RevokeInventoryItemRequest request;
    FillRevokeInventoryItemRequest( &request );
    LogRevokeInventoryItemRequest( &request, "TestPlayerItemManagementAdminRevokeInventoryItem" );
    HRESULT hr = PFPlayerItemManagementAdminRevokeInventoryItemAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementAdminRevokeInventoryItemAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminRevokeInventoryItems(TestContext& testContext)
{
    struct AdminRevokeInventoryItemsResult : public XAsyncResult
    {
        PFPlayerItemManagementRevokeInventoryItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementAdminRevokeInventoryItemsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementRevokeInventoryItemsResult( result );
            return ValidatePFPlayerItemManagementRevokeInventoryItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminRevokeInventoryItemsResult>>(testContext);

    PlayFab::PlayerItemManagementModels::RevokeInventoryItemsRequest request;
    FillRevokeInventoryItemsRequest( &request );
    LogRevokeInventoryItemsRequest( &request, "TestPlayerItemManagementAdminRevokeInventoryItems" );
    HRESULT hr = PFPlayerItemManagementAdminRevokeInventoryItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementAdminRevokeInventoryItemsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementAdminSubtractUserVirtualCurrency(TestContext& testContext)
{
    struct AdminSubtractUserVirtualCurrencyResult : public XAsyncResult
    {
        PFPlayerItemManagementModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementAdminSubtractUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementAdminSubtractUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
            return ValidatePFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminSubtractUserVirtualCurrencyResult>>(testContext);

    PlayFab::PlayerItemManagementModels::AdminSubtractUserVirtualCurrencyRequest request;
    FillAdminSubtractUserVirtualCurrencyRequest( &request );
    LogAdminSubtractUserVirtualCurrencyRequest( &request, "TestPlayerItemManagementAdminSubtractUserVirtualCurrency" );
    HRESULT hr = PFPlayerItemManagementAdminSubtractUserVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementAdminSubtractUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientAddUserVirtualCurrency(TestContext& testContext)
{
    struct ClientAddUserVirtualCurrencyResult : public XAsyncResult
    {
        PFPlayerItemManagementModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementClientAddUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementClientAddUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
            return ValidatePFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientAddUserVirtualCurrencyResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ClientAddUserVirtualCurrencyRequest request;
    FillClientAddUserVirtualCurrencyRequest( &request );
    LogClientAddUserVirtualCurrencyRequest( &request, "TestPlayerItemManagementClientAddUserVirtualCurrency" );
    HRESULT hr = PFPlayerItemManagementClientAddUserVirtualCurrencyAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientAddUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientConfirmPurchase(TestContext& testContext)
{
    struct ClientConfirmPurchaseResult : public XAsyncResult
    {
        PFPlayerItemManagementConfirmPurchaseResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementClientConfirmPurchaseGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementConfirmPurchaseResult( result );
            return ValidatePFPlayerItemManagementConfirmPurchaseResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientConfirmPurchaseResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ConfirmPurchaseRequest request;
    FillConfirmPurchaseRequest( &request );
    LogConfirmPurchaseRequest( &request, "TestPlayerItemManagementClientConfirmPurchase" );
    HRESULT hr = PFPlayerItemManagementClientConfirmPurchaseAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientConfirmPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientConsumeItem(TestContext& testContext)
{
    struct ClientConsumeItemResult : public XAsyncResult
    {
        PFPlayerItemManagementConsumeItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementClientConsumeItemGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementClientConsumeItemGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementConsumeItemResult( result );
            return ValidatePFPlayerItemManagementConsumeItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientConsumeItemResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ClientConsumeItemRequest request;
    FillClientConsumeItemRequest( &request );
    LogClientConsumeItemRequest( &request, "TestPlayerItemManagementClientConsumeItem" );
    HRESULT hr = PFPlayerItemManagementClientConsumeItemAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientConsumeItemAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientGetCharacterInventory(TestContext& testContext)
{
    struct ClientGetCharacterInventoryResult : public XAsyncResult
    {
        PFPlayerItemManagementClientGetCharacterInventoryResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementClientGetCharacterInventoryGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementClientGetCharacterInventoryResult( result );
            return ValidatePFPlayerItemManagementClientGetCharacterInventoryResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetCharacterInventoryResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ClientGetCharacterInventoryRequest request;
    FillClientGetCharacterInventoryRequest( &request );
    LogClientGetCharacterInventoryRequest( &request, "TestPlayerItemManagementClientGetCharacterInventory" );
    HRESULT hr = PFPlayerItemManagementClientGetCharacterInventoryAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientGetCharacterInventoryAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientGetPaymentToken(TestContext& testContext)
{
    struct ClientGetPaymentTokenResult : public XAsyncResult
    {
        PFPlayerItemManagementGetPaymentTokenResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementClientGetPaymentTokenGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementClientGetPaymentTokenGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementGetPaymentTokenResult( result );
            return ValidatePFPlayerItemManagementGetPaymentTokenResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPaymentTokenResult>>(testContext);

    PlayFab::PlayerItemManagementModels::GetPaymentTokenRequest request;
    FillGetPaymentTokenRequest( &request );
    LogGetPaymentTokenRequest( &request, "TestPlayerItemManagementClientGetPaymentToken" );
    HRESULT hr = PFPlayerItemManagementClientGetPaymentTokenAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientGetPaymentTokenAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientGetPurchase(TestContext& testContext)
{
    struct ClientGetPurchaseResult : public XAsyncResult
    {
        PFPlayerItemManagementGetPurchaseResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementClientGetPurchaseGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementClientGetPurchaseGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementGetPurchaseResult( result );
            return ValidatePFPlayerItemManagementGetPurchaseResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPurchaseResult>>(testContext);

    PlayFab::PlayerItemManagementModels::GetPurchaseRequest request;
    FillGetPurchaseRequest( &request );
    LogGetPurchaseRequest( &request, "TestPlayerItemManagementClientGetPurchase" );
    HRESULT hr = PFPlayerItemManagementClientGetPurchaseAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientGetPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientGetUserInventory(TestContext& testContext)
{
    struct ClientGetUserInventoryResult : public XAsyncResult
    {
        PFPlayerItemManagementClientGetUserInventoryResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementClientGetUserInventoryGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementClientGetUserInventoryResult( result );
            return ValidatePFPlayerItemManagementClientGetUserInventoryResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetUserInventoryResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ClientGetUserInventoryRequest request;
    FillClientGetUserInventoryRequest( &request );
    LogClientGetUserInventoryRequest( &request, "TestPlayerItemManagementClientGetUserInventory" );
    HRESULT hr = PFPlayerItemManagementClientGetUserInventoryAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientGetUserInventoryAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientPayForPurchase(TestContext& testContext)
{
    struct ClientPayForPurchaseResult : public XAsyncResult
    {
        PFPlayerItemManagementPayForPurchaseResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementClientPayForPurchaseGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementPayForPurchaseResult( result );
            return ValidatePFPlayerItemManagementPayForPurchaseResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientPayForPurchaseResult>>(testContext);

    PlayFab::PlayerItemManagementModels::PayForPurchaseRequest request;
    FillPayForPurchaseRequest( &request );
    LogPayForPurchaseRequest( &request, "TestPlayerItemManagementClientPayForPurchase" );
    HRESULT hr = PFPlayerItemManagementClientPayForPurchaseAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientPayForPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientPurchaseItem(TestContext& testContext)
{
    struct ClientPurchaseItemResult : public XAsyncResult
    {
        PFPlayerItemManagementPurchaseItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementClientPurchaseItemGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementPurchaseItemResult( result );
            return ValidatePFPlayerItemManagementPurchaseItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientPurchaseItemResult>>(testContext);

    PlayFab::PlayerItemManagementModels::PurchaseItemRequest request;
    FillPurchaseItemRequest( &request );
    LogPurchaseItemRequest( &request, "TestPlayerItemManagementClientPurchaseItem" );
    HRESULT hr = PFPlayerItemManagementClientPurchaseItemAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientPurchaseItemAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientRedeemCoupon(TestContext& testContext)
{
    struct ClientRedeemCouponResult : public XAsyncResult
    {
        PFPlayerItemManagementRedeemCouponResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementClientRedeemCouponGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementRedeemCouponResult( result );
            return ValidatePFPlayerItemManagementRedeemCouponResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientRedeemCouponResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ClientRedeemCouponRequest request;
    FillClientRedeemCouponRequest( &request );
    LogClientRedeemCouponRequest( &request, "TestPlayerItemManagementClientRedeemCoupon" );
    HRESULT hr = PFPlayerItemManagementClientRedeemCouponAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientRedeemCouponAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientStartPurchase(TestContext& testContext)
{
    struct ClientStartPurchaseResult : public XAsyncResult
    {
        PFPlayerItemManagementStartPurchaseResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementClientStartPurchaseGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementStartPurchaseResult( result );
            return ValidatePFPlayerItemManagementStartPurchaseResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientStartPurchaseResult>>(testContext);

    PlayFab::PlayerItemManagementModels::StartPurchaseRequest request;
    FillStartPurchaseRequest( &request );
    LogStartPurchaseRequest( &request, "TestPlayerItemManagementClientStartPurchase" );
    HRESULT hr = PFPlayerItemManagementClientStartPurchaseAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientStartPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientSubtractUserVirtualCurrency(TestContext& testContext)
{
    struct ClientSubtractUserVirtualCurrencyResult : public XAsyncResult
    {
        PFPlayerItemManagementModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementClientSubtractUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementClientSubtractUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
            return ValidatePFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientSubtractUserVirtualCurrencyResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ClientSubtractUserVirtualCurrencyRequest request;
    FillClientSubtractUserVirtualCurrencyRequest( &request );
    LogClientSubtractUserVirtualCurrencyRequest( &request, "TestPlayerItemManagementClientSubtractUserVirtualCurrency" );
    HRESULT hr = PFPlayerItemManagementClientSubtractUserVirtualCurrencyAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientSubtractUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientUnlockContainerInstance(TestContext& testContext)
{
    struct ClientUnlockContainerInstanceResult : public XAsyncResult
    {
        PFPlayerItemManagementUnlockContainerItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementClientUnlockContainerInstanceGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementUnlockContainerItemResult( result );
            return ValidatePFPlayerItemManagementUnlockContainerItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientUnlockContainerInstanceResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ClientUnlockContainerInstanceRequest request;
    FillClientUnlockContainerInstanceRequest( &request );
    LogClientUnlockContainerInstanceRequest( &request, "TestPlayerItemManagementClientUnlockContainerInstance" );
    HRESULT hr = PFPlayerItemManagementClientUnlockContainerInstanceAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientUnlockContainerInstanceAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementClientUnlockContainerItem(TestContext& testContext)
{
    struct ClientUnlockContainerItemResult : public XAsyncResult
    {
        PFPlayerItemManagementUnlockContainerItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementClientUnlockContainerItemGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementUnlockContainerItemResult( result );
            return ValidatePFPlayerItemManagementUnlockContainerItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientUnlockContainerItemResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ClientUnlockContainerItemRequest request;
    FillClientUnlockContainerItemRequest( &request );
    LogClientUnlockContainerItemRequest( &request, "TestPlayerItemManagementClientUnlockContainerItem" );
    HRESULT hr = PFPlayerItemManagementClientUnlockContainerItemAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementClientUnlockContainerItemAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerAddCharacterVirtualCurrency(TestContext& testContext)
{
    struct ServerAddCharacterVirtualCurrencyResult : public XAsyncResult
    {
        PFPlayerItemManagementModifyCharacterVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementServerAddCharacterVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementServerAddCharacterVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementModifyCharacterVirtualCurrencyResult( result );
            return ValidatePFPlayerItemManagementModifyCharacterVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerAddCharacterVirtualCurrencyResult>>(testContext);

    PlayFab::PlayerItemManagementModels::AddCharacterVirtualCurrencyRequest request;
    FillAddCharacterVirtualCurrencyRequest( &request );
    LogAddCharacterVirtualCurrencyRequest( &request, "TestPlayerItemManagementServerAddCharacterVirtualCurrency" );
    HRESULT hr = PFPlayerItemManagementServerAddCharacterVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerAddCharacterVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerAddUserVirtualCurrency(TestContext& testContext)
{
    struct ServerAddUserVirtualCurrencyResult : public XAsyncResult
    {
        PFPlayerItemManagementModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementServerAddUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementServerAddUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
            return ValidatePFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerAddUserVirtualCurrencyResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ServerAddUserVirtualCurrencyRequest request;
    FillServerAddUserVirtualCurrencyRequest( &request );
    LogServerAddUserVirtualCurrencyRequest( &request, "TestPlayerItemManagementServerAddUserVirtualCurrency" );
    HRESULT hr = PFPlayerItemManagementServerAddUserVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerAddUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerConsumeItem(TestContext& testContext)
{
    struct ServerConsumeItemResult : public XAsyncResult
    {
        PFPlayerItemManagementConsumeItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementServerConsumeItemGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementServerConsumeItemGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementConsumeItemResult( result );
            return ValidatePFPlayerItemManagementConsumeItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerConsumeItemResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ServerConsumeItemRequest request;
    FillServerConsumeItemRequest( &request );
    LogServerConsumeItemRequest( &request, "TestPlayerItemManagementServerConsumeItem" );
    HRESULT hr = PFPlayerItemManagementServerConsumeItemAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerConsumeItemAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerEvaluateRandomResultTable(TestContext& testContext)
{
    struct ServerEvaluateRandomResultTableResult : public XAsyncResult
    {
        PFPlayerItemManagementEvaluateRandomResultTableResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementServerEvaluateRandomResultTableGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementServerEvaluateRandomResultTableGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementEvaluateRandomResultTableResult( result );
            return ValidatePFPlayerItemManagementEvaluateRandomResultTableResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerEvaluateRandomResultTableResult>>(testContext);

    PlayFab::PlayerItemManagementModels::EvaluateRandomResultTableRequest request;
    FillEvaluateRandomResultTableRequest( &request );
    LogEvaluateRandomResultTableRequest( &request, "TestPlayerItemManagementServerEvaluateRandomResultTable" );
    HRESULT hr = PFPlayerItemManagementServerEvaluateRandomResultTableAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerEvaluateRandomResultTableAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGetCharacterInventory(TestContext& testContext)
{
    struct ServerGetCharacterInventoryResult : public XAsyncResult
    {
        PFPlayerItemManagementServerGetCharacterInventoryResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerGetCharacterInventoryGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementServerGetCharacterInventoryResult( result );
            return ValidatePFPlayerItemManagementServerGetCharacterInventoryResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetCharacterInventoryResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ServerGetCharacterInventoryRequest request;
    FillServerGetCharacterInventoryRequest( &request );
    LogServerGetCharacterInventoryRequest( &request, "TestPlayerItemManagementServerGetCharacterInventory" );
    HRESULT hr = PFPlayerItemManagementServerGetCharacterInventoryAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerGetCharacterInventoryAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGetRandomResultTables(TestContext& testContext)
{
    struct ServerGetRandomResultTablesResult : public XAsyncResult
    {
        PFGetRandomResultTablesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerGetRandomResultTablesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGetRandomResultTablesResult( result );
            return ValidatePFGetRandomResultTablesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetRandomResultTablesResult>>(testContext);

    PlayFab::PlayerItemManagementModels::GetRandomResultTablesRequest request;
    FillGetRandomResultTablesRequest( &request );
    LogGetRandomResultTablesRequest( &request, "TestPlayerItemManagementServerGetRandomResultTables" );
    HRESULT hr = PFPlayerItemManagementServerGetRandomResultTablesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerGetRandomResultTablesAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGetUserInventory(TestContext& testContext)
{
    struct ServerGetUserInventoryResult : public XAsyncResult
    {
        PFPlayerItemManagementServerGetUserInventoryResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerGetUserInventoryGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementServerGetUserInventoryResult( result );
            return ValidatePFPlayerItemManagementServerGetUserInventoryResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetUserInventoryResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ServerGetUserInventoryRequest request;
    FillServerGetUserInventoryRequest( &request );
    LogServerGetUserInventoryRequest( &request, "TestPlayerItemManagementServerGetUserInventory" );
    HRESULT hr = PFPlayerItemManagementServerGetUserInventoryAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerGetUserInventoryAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGrantItemsToCharacter(TestContext& testContext)
{
    struct ServerGrantItemsToCharacterResult : public XAsyncResult
    {
        PFPlayerItemManagementGrantItemsToCharacterResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerGrantItemsToCharacterGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementGrantItemsToCharacterResult( result );
            return ValidatePFPlayerItemManagementGrantItemsToCharacterResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGrantItemsToCharacterResult>>(testContext);

    PlayFab::PlayerItemManagementModels::GrantItemsToCharacterRequest request;
    FillGrantItemsToCharacterRequest( &request );
    LogGrantItemsToCharacterRequest( &request, "TestPlayerItemManagementServerGrantItemsToCharacter" );
    HRESULT hr = PFPlayerItemManagementServerGrantItemsToCharacterAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerGrantItemsToCharacterAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGrantItemsToUser(TestContext& testContext)
{
    struct ServerGrantItemsToUserResult : public XAsyncResult
    {
        PFPlayerItemManagementGrantItemsToUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerGrantItemsToUserGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementGrantItemsToUserResult( result );
            return ValidatePFPlayerItemManagementGrantItemsToUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGrantItemsToUserResult>>(testContext);

    PlayFab::PlayerItemManagementModels::GrantItemsToUserRequest request;
    FillGrantItemsToUserRequest( &request );
    LogGrantItemsToUserRequest( &request, "TestPlayerItemManagementServerGrantItemsToUser" );
    HRESULT hr = PFPlayerItemManagementServerGrantItemsToUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerGrantItemsToUserAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerGrantItemsToUsers(TestContext& testContext)
{
    struct ServerGrantItemsToUsersResult : public XAsyncResult
    {
        PFPlayerItemManagementGrantItemsToUsersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerGrantItemsToUsersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementGrantItemsToUsersResult( result );
            return ValidatePFPlayerItemManagementGrantItemsToUsersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGrantItemsToUsersResult>>(testContext);

    PlayFab::PlayerItemManagementModels::GrantItemsToUsersRequest request;
    FillGrantItemsToUsersRequest( &request );
    LogGrantItemsToUsersRequest( &request, "TestPlayerItemManagementServerGrantItemsToUsers" );
    HRESULT hr = PFPlayerItemManagementServerGrantItemsToUsersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerGrantItemsToUsersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerModifyItemUses(TestContext& testContext)
{
    struct ServerModifyItemUsesResult : public XAsyncResult
    {
        PFPlayerItemManagementModifyItemUsesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementServerModifyItemUsesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementServerModifyItemUsesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementModifyItemUsesResult( result );
            return ValidatePFPlayerItemManagementModifyItemUsesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerModifyItemUsesResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ModifyItemUsesRequest request;
    FillModifyItemUsesRequest( &request );
    LogModifyItemUsesRequest( &request, "TestPlayerItemManagementServerModifyItemUses" );
    HRESULT hr = PFPlayerItemManagementServerModifyItemUsesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerModifyItemUsesAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerMoveItemToCharacterFromCharacter(TestContext& testContext)
{
    struct ServerMoveItemToCharacterFromCharacterResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerMoveItemToCharacterFromCharacterResult>>(testContext);

    PlayFab::PlayerItemManagementModels::MoveItemToCharacterFromCharacterRequest request;
    FillMoveItemToCharacterFromCharacterRequest( &request );
    LogMoveItemToCharacterFromCharacterRequest( &request, "TestPlayerItemManagementServerMoveItemToCharacterFromCharacter" );
    HRESULT hr = PFPlayerItemManagementServerMoveItemToCharacterFromCharacterAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerMoveItemToCharacterFromCharacterAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerMoveItemToCharacterFromUser(TestContext& testContext)
{
    struct ServerMoveItemToCharacterFromUserResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerMoveItemToCharacterFromUserResult>>(testContext);

    PlayFab::PlayerItemManagementModels::MoveItemToCharacterFromUserRequest request;
    FillMoveItemToCharacterFromUserRequest( &request );
    LogMoveItemToCharacterFromUserRequest( &request, "TestPlayerItemManagementServerMoveItemToCharacterFromUser" );
    HRESULT hr = PFPlayerItemManagementServerMoveItemToCharacterFromUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerMoveItemToCharacterFromUserAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerMoveItemToUserFromCharacter(TestContext& testContext)
{
    struct ServerMoveItemToUserFromCharacterResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerMoveItemToUserFromCharacterResult>>(testContext);

    PlayFab::PlayerItemManagementModels::MoveItemToUserFromCharacterRequest request;
    FillMoveItemToUserFromCharacterRequest( &request );
    LogMoveItemToUserFromCharacterRequest( &request, "TestPlayerItemManagementServerMoveItemToUserFromCharacter" );
    HRESULT hr = PFPlayerItemManagementServerMoveItemToUserFromCharacterAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerMoveItemToUserFromCharacterAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerRedeemCoupon(TestContext& testContext)
{
    struct ServerRedeemCouponResult : public XAsyncResult
    {
        PFPlayerItemManagementRedeemCouponResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerRedeemCouponGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementRedeemCouponResult( result );
            return ValidatePFPlayerItemManagementRedeemCouponResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerRedeemCouponResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ServerRedeemCouponRequest request;
    FillServerRedeemCouponRequest( &request );
    LogServerRedeemCouponRequest( &request, "TestPlayerItemManagementServerRedeemCoupon" );
    HRESULT hr = PFPlayerItemManagementServerRedeemCouponAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerRedeemCouponAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerReportPlayer(TestContext& testContext)
{
    struct ServerReportPlayerResult : public XAsyncResult
    {
        PFPlayerItemManagementReportPlayerServerResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerReportPlayerGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementReportPlayerServerResult( &result );
            return ValidatePFPlayerItemManagementReportPlayerServerResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerReportPlayerResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ReportPlayerServerRequest request;
    FillReportPlayerServerRequest( &request );
    LogReportPlayerServerRequest( &request, "TestPlayerItemManagementServerReportPlayer" );
    HRESULT hr = PFPlayerItemManagementServerReportPlayerAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerReportPlayerAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerRevokeInventoryItem(TestContext& testContext)
{
    struct ServerRevokeInventoryItemResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerRevokeInventoryItemResult>>(testContext);

    PlayFab::PlayerItemManagementModels::RevokeInventoryItemRequest request;
    FillRevokeInventoryItemRequest( &request );
    LogRevokeInventoryItemRequest( &request, "TestPlayerItemManagementServerRevokeInventoryItem" );
    HRESULT hr = PFPlayerItemManagementServerRevokeInventoryItemAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerRevokeInventoryItemAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerRevokeInventoryItems(TestContext& testContext)
{
    struct ServerRevokeInventoryItemsResult : public XAsyncResult
    {
        PFPlayerItemManagementRevokeInventoryItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerRevokeInventoryItemsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementRevokeInventoryItemsResult( result );
            return ValidatePFPlayerItemManagementRevokeInventoryItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerRevokeInventoryItemsResult>>(testContext);

    PlayFab::PlayerItemManagementModels::RevokeInventoryItemsRequest request;
    FillRevokeInventoryItemsRequest( &request );
    LogRevokeInventoryItemsRequest( &request, "TestPlayerItemManagementServerRevokeInventoryItems" );
    HRESULT hr = PFPlayerItemManagementServerRevokeInventoryItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerRevokeInventoryItemsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerSubtractCharacterVirtualCurrency(TestContext& testContext)
{
    struct ServerSubtractCharacterVirtualCurrencyResult : public XAsyncResult
    {
        PFPlayerItemManagementModifyCharacterVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementServerSubtractCharacterVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementServerSubtractCharacterVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementModifyCharacterVirtualCurrencyResult( result );
            return ValidatePFPlayerItemManagementModifyCharacterVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerSubtractCharacterVirtualCurrencyResult>>(testContext);

    PlayFab::PlayerItemManagementModels::SubtractCharacterVirtualCurrencyRequest request;
    FillSubtractCharacterVirtualCurrencyRequest( &request );
    LogSubtractCharacterVirtualCurrencyRequest( &request, "TestPlayerItemManagementServerSubtractCharacterVirtualCurrency" );
    HRESULT hr = PFPlayerItemManagementServerSubtractCharacterVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerSubtractCharacterVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerSubtractUserVirtualCurrency(TestContext& testContext)
{
    struct ServerSubtractUserVirtualCurrencyResult : public XAsyncResult
    {
        PFPlayerItemManagementModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerItemManagementServerSubtractUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerItemManagementServerSubtractUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
            return ValidatePFPlayerItemManagementModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerSubtractUserVirtualCurrencyResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ServerSubtractUserVirtualCurrencyRequest request;
    FillServerSubtractUserVirtualCurrencyRequest( &request );
    LogServerSubtractUserVirtualCurrencyRequest( &request, "TestPlayerItemManagementServerSubtractUserVirtualCurrency" );
    HRESULT hr = PFPlayerItemManagementServerSubtractUserVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerSubtractUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerUnlockContainerInstance(TestContext& testContext)
{
    struct ServerUnlockContainerInstanceResult : public XAsyncResult
    {
        PFPlayerItemManagementUnlockContainerItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerUnlockContainerInstanceGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementUnlockContainerItemResult( result );
            return ValidatePFPlayerItemManagementUnlockContainerItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUnlockContainerInstanceResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ServerUnlockContainerInstanceRequest request;
    FillServerUnlockContainerInstanceRequest( &request );
    LogServerUnlockContainerInstanceRequest( &request, "TestPlayerItemManagementServerUnlockContainerInstance" );
    HRESULT hr = PFPlayerItemManagementServerUnlockContainerInstanceAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerUnlockContainerInstanceAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerUnlockContainerItem(TestContext& testContext)
{
    struct ServerUnlockContainerItemResult : public XAsyncResult
    {
        PFPlayerItemManagementUnlockContainerItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerItemManagementServerUnlockContainerItemGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerItemManagementUnlockContainerItemResult( result );
            return ValidatePFPlayerItemManagementUnlockContainerItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUnlockContainerItemResult>>(testContext);

    PlayFab::PlayerItemManagementModels::ServerUnlockContainerItemRequest request;
    FillServerUnlockContainerItemRequest( &request );
    LogServerUnlockContainerItemRequest( &request, "TestPlayerItemManagementServerUnlockContainerItem" );
    HRESULT hr = PFPlayerItemManagementServerUnlockContainerItemAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerUnlockContainerItemAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerItemManagementTests::TestPlayerItemManagementServerUpdateUserInventoryItemCustomData(TestContext& testContext)
{
    struct ServerUpdateUserInventoryItemCustomDataResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateUserInventoryItemCustomDataResult>>(testContext);

    PlayFab::PlayerItemManagementModels::UpdateUserInventoryItemDataRequest request;
    FillUpdateUserInventoryItemDataRequest( &request );
    LogUpdateUserInventoryItemDataRequest( &request, "TestPlayerItemManagementServerUpdateUserInventoryItemCustomData" );
    HRESULT hr = PFPlayerItemManagementServerUpdateUserInventoryItemCustomDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerItemManagementPlayerItemManagementServerUpdateUserInventoryItemCustomDataAsync", hr);
        return;
    }
    async.release(); 
} 

}
