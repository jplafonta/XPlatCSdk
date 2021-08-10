#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenPlayerDataManagementTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenPlayerDataManagementTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenPlayerDataManagementTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenPlayerDataManagementTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestPlayerDataManagementAdminCreatePlayerStatisticDefinition", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminCreatePlayerStatisticDefinition);
    AddTest("TestPlayerDataManagementAdminGetDataReport", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetDataReport);
    AddTest("TestPlayerDataManagementAdminGetPlayerStatisticDefinitions", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetPlayerStatisticDefinitions);
    AddTest("TestPlayerDataManagementAdminGetPlayerStatisticVersions", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetPlayerStatisticVersions);
    AddTest("TestPlayerDataManagementAdminGetUserData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserData);
    AddTest("TestPlayerDataManagementAdminGetUserInternalData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserInternalData);
    AddTest("TestPlayerDataManagementAdminGetUserPublisherData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserPublisherData);
    AddTest("TestPlayerDataManagementAdminGetUserPublisherInternalData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserPublisherInternalData);
    AddTest("TestPlayerDataManagementAdminGetUserPublisherReadOnlyData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserPublisherReadOnlyData);
    AddTest("TestPlayerDataManagementAdminGetUserReadOnlyData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserReadOnlyData);
    AddTest("TestPlayerDataManagementAdminIncrementPlayerStatisticVersion", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminIncrementPlayerStatisticVersion);
    AddTest("TestPlayerDataManagementAdminRefundPurchase", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminRefundPurchase);
    AddTest("TestPlayerDataManagementAdminResetUserStatistics", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminResetUserStatistics);
    AddTest("TestPlayerDataManagementAdminResolvePurchaseDispute", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminResolvePurchaseDispute);
    AddTest("TestPlayerDataManagementAdminUpdatePlayerStatisticDefinition", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdatePlayerStatisticDefinition);
    AddTest("TestPlayerDataManagementAdminUpdateUserData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserData);
    AddTest("TestPlayerDataManagementAdminUpdateUserInternalData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserInternalData);
    AddTest("TestPlayerDataManagementAdminUpdateUserPublisherData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserPublisherData);
    AddTest("TestPlayerDataManagementAdminUpdateUserPublisherInternalData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserPublisherInternalData);
    AddTest("TestPlayerDataManagementAdminUpdateUserPublisherReadOnlyData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserPublisherReadOnlyData);
    AddTest("TestPlayerDataManagementAdminUpdateUserReadOnlyData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserReadOnlyData);
    AddTest("TestPlayerDataManagementClientGetFriendLeaderboard", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetFriendLeaderboard);
    AddTest("TestPlayerDataManagementClientGetFriendLeaderboardAroundPlayer", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetFriendLeaderboardAroundPlayer);
    AddTest("TestPlayerDataManagementClientGetLeaderboard", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetLeaderboard);
    AddTest("TestPlayerDataManagementClientGetLeaderboardAroundPlayer", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetLeaderboardAroundPlayer);
    AddTest("TestPlayerDataManagementClientGetPlayerStatistics", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetPlayerStatistics);
    AddTest("TestPlayerDataManagementClientGetPlayerStatisticVersions", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetPlayerStatisticVersions);
    AddTest("TestPlayerDataManagementClientGetUserData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetUserData);
    AddTest("TestPlayerDataManagementClientGetUserPublisherData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetUserPublisherData);
    AddTest("TestPlayerDataManagementClientGetUserPublisherReadOnlyData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetUserPublisherReadOnlyData);
    AddTest("TestPlayerDataManagementClientGetUserReadOnlyData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetUserReadOnlyData);
    AddTest("TestPlayerDataManagementClientUpdatePlayerStatistics", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientUpdatePlayerStatistics);
    AddTest("TestPlayerDataManagementClientUpdateUserData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientUpdateUserData);
    AddTest("TestPlayerDataManagementClientUpdateUserPublisherData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientUpdateUserPublisherData);
    AddTest("TestPlayerDataManagementServerGetFriendLeaderboard", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetFriendLeaderboard);
    AddTest("TestPlayerDataManagementServerGetLeaderboard", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetLeaderboard);
    AddTest("TestPlayerDataManagementServerGetLeaderboardAroundUser", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetLeaderboardAroundUser);
    AddTest("TestPlayerDataManagementServerGetPlayerCombinedInfo", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetPlayerCombinedInfo);
    AddTest("TestPlayerDataManagementServerGetPlayerStatistics", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetPlayerStatistics);
    AddTest("TestPlayerDataManagementServerGetPlayerStatisticVersions", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetPlayerStatisticVersions);
    AddTest("TestPlayerDataManagementServerGetUserData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserData);
    AddTest("TestPlayerDataManagementServerGetUserInternalData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserInternalData);
    AddTest("TestPlayerDataManagementServerGetUserPublisherData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserPublisherData);
    AddTest("TestPlayerDataManagementServerGetUserPublisherInternalData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserPublisherInternalData);
    AddTest("TestPlayerDataManagementServerGetUserPublisherReadOnlyData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserPublisherReadOnlyData);
    AddTest("TestPlayerDataManagementServerGetUserReadOnlyData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserReadOnlyData);
    AddTest("TestPlayerDataManagementServerUpdatePlayerStatistics", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdatePlayerStatistics);
    AddTest("TestPlayerDataManagementServerUpdateUserData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserData);
    AddTest("TestPlayerDataManagementServerUpdateUserInternalData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserInternalData);
    AddTest("TestPlayerDataManagementServerUpdateUserPublisherData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserPublisherData);
    AddTest("TestPlayerDataManagementServerUpdateUserPublisherInternalData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserPublisherInternalData);
    AddTest("TestPlayerDataManagementServerUpdateUserPublisherReadOnlyData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserPublisherReadOnlyData);
    AddTest("TestPlayerDataManagementServerUpdateUserReadOnlyData", &AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserReadOnlyData);
}

void AutoGenPlayerDataManagementTests::ClassSetUp()
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
                hr = PFAuthenticationClientLoginGetResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PFEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenPlayerDataManagementTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenPlayerDataManagementTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminCreatePlayerStatisticDefinition(TestContext& testContext)
{
    struct AdminCreatePlayerStatisticDefinitionResult : public XAsyncResult
    {
        PFPlayerDataManagementCreatePlayerStatisticDefinitionResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminCreatePlayerStatisticDefinitionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementCreatePlayerStatisticDefinitionResult( result );
            return ValidatePFPlayerDataManagementCreatePlayerStatisticDefinitionResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminCreatePlayerStatisticDefinitionResult>>(testContext);

    PlayFab::PlayerDataManagementModels::CreatePlayerStatisticDefinitionRequest request;
    FillCreatePlayerStatisticDefinitionRequest( &request );
    LogCreatePlayerStatisticDefinitionRequest( &request, "TestPlayerDataManagementAdminCreatePlayerStatisticDefinition" );
    HRESULT hr = PFPlayerDataManagementAdminCreatePlayerStatisticDefinitionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminCreatePlayerStatisticDefinitionAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetDataReport(TestContext& testContext)
{
    struct AdminGetDataReportResult : public XAsyncResult
    {
        PFPlayerDataManagementGetDataReportResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerDataManagementAdminGetDataReportGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerDataManagementAdminGetDataReportGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetDataReportResult( result );
            return ValidatePFPlayerDataManagementGetDataReportResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetDataReportResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetDataReportRequest request;
    FillGetDataReportRequest( &request );
    LogGetDataReportRequest( &request, "TestPlayerDataManagementAdminGetDataReport" );
    HRESULT hr = PFPlayerDataManagementAdminGetDataReportAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminGetDataReportAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetPlayerStatisticDefinitions(TestContext& testContext)
{
    struct AdminGetPlayerStatisticDefinitionsResult : public XAsyncResult
    {
        PFPlayerDataManagementGetPlayerStatisticDefinitionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminGetPlayerStatisticDefinitionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetPlayerStatisticDefinitionsResult( result );
            return ValidatePFPlayerDataManagementGetPlayerStatisticDefinitionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPlayerStatisticDefinitionsResult>>(testContext);

    HRESULT hr = PFPlayerDataManagementAdminGetPlayerStatisticDefinitionsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminGetPlayerStatisticDefinitionsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetPlayerStatisticVersions(TestContext& testContext)
{
    struct AdminGetPlayerStatisticVersionsResult : public XAsyncResult
    {
        PFPlayerDataManagementGetPlayerStatisticVersionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminGetPlayerStatisticVersionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetPlayerStatisticVersionsResult( result );
            return ValidatePFPlayerDataManagementGetPlayerStatisticVersionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPlayerStatisticVersionsResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetPlayerStatisticVersionsRequest request;
    FillGetPlayerStatisticVersionsRequest( &request );
    LogGetPlayerStatisticVersionsRequest( &request, "TestPlayerDataManagementAdminGetPlayerStatisticVersions" );
    HRESULT hr = PFPlayerDataManagementAdminGetPlayerStatisticVersionsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminGetPlayerStatisticVersionsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserData(TestContext& testContext)
{
    struct AdminGetUserDataResult : public XAsyncResult
    {
        PFPlayerDataManagementAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminGetUserDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementAdminGetUserDataResult( result );
            return ValidatePFPlayerDataManagementAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetUserDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementAdminGetUserData" );
    HRESULT hr = PFPlayerDataManagementAdminGetUserDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminGetUserDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserInternalData(TestContext& testContext)
{
    struct AdminGetUserInternalDataResult : public XAsyncResult
    {
        PFPlayerDataManagementAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminGetUserInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementAdminGetUserDataResult( result );
            return ValidatePFPlayerDataManagementAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetUserInternalDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementAdminGetUserInternalData" );
    HRESULT hr = PFPlayerDataManagementAdminGetUserInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminGetUserInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserPublisherData(TestContext& testContext)
{
    struct AdminGetUserPublisherDataResult : public XAsyncResult
    {
        PFPlayerDataManagementAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminGetUserPublisherDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementAdminGetUserDataResult( result );
            return ValidatePFPlayerDataManagementAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetUserPublisherDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementAdminGetUserPublisherData" );
    HRESULT hr = PFPlayerDataManagementAdminGetUserPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminGetUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserPublisherInternalData(TestContext& testContext)
{
    struct AdminGetUserPublisherInternalDataResult : public XAsyncResult
    {
        PFPlayerDataManagementAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminGetUserPublisherInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementAdminGetUserDataResult( result );
            return ValidatePFPlayerDataManagementAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetUserPublisherInternalDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementAdminGetUserPublisherInternalData" );
    HRESULT hr = PFPlayerDataManagementAdminGetUserPublisherInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminGetUserPublisherInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserPublisherReadOnlyData(TestContext& testContext)
{
    struct AdminGetUserPublisherReadOnlyDataResult : public XAsyncResult
    {
        PFPlayerDataManagementAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminGetUserPublisherReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementAdminGetUserDataResult( result );
            return ValidatePFPlayerDataManagementAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetUserPublisherReadOnlyDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementAdminGetUserPublisherReadOnlyData" );
    HRESULT hr = PFPlayerDataManagementAdminGetUserPublisherReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminGetUserPublisherReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminGetUserReadOnlyData(TestContext& testContext)
{
    struct AdminGetUserReadOnlyDataResult : public XAsyncResult
    {
        PFPlayerDataManagementAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminGetUserReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementAdminGetUserDataResult( result );
            return ValidatePFPlayerDataManagementAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetUserReadOnlyDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementAdminGetUserReadOnlyData" );
    HRESULT hr = PFPlayerDataManagementAdminGetUserReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminGetUserReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminIncrementPlayerStatisticVersion(TestContext& testContext)
{
    struct AdminIncrementPlayerStatisticVersionResult : public XAsyncResult
    {
        PFPlayerDataManagementIncrementPlayerStatisticVersionResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminIncrementPlayerStatisticVersionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementIncrementPlayerStatisticVersionResult( result );
            return ValidatePFPlayerDataManagementIncrementPlayerStatisticVersionResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminIncrementPlayerStatisticVersionResult>>(testContext);

    PlayFab::PlayerDataManagementModels::IncrementPlayerStatisticVersionRequest request;
    FillIncrementPlayerStatisticVersionRequest( &request );
    LogIncrementPlayerStatisticVersionRequest( &request, "TestPlayerDataManagementAdminIncrementPlayerStatisticVersion" );
    HRESULT hr = PFPlayerDataManagementAdminIncrementPlayerStatisticVersionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminIncrementPlayerStatisticVersionAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminRefundPurchase(TestContext& testContext)
{
    struct AdminRefundPurchaseResult : public XAsyncResult
    {
        PFPlayerDataManagementRefundPurchaseResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerDataManagementAdminRefundPurchaseGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerDataManagementAdminRefundPurchaseGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementRefundPurchaseResponse( result );
            return ValidatePFPlayerDataManagementRefundPurchaseResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminRefundPurchaseResult>>(testContext);

    PlayFab::PlayerDataManagementModels::RefundPurchaseRequest request;
    FillRefundPurchaseRequest( &request );
    LogRefundPurchaseRequest( &request, "TestPlayerDataManagementAdminRefundPurchase" );
    HRESULT hr = PFPlayerDataManagementAdminRefundPurchaseAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminRefundPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminResetUserStatistics(TestContext& testContext)
{
    struct AdminResetUserStatisticsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminResetUserStatisticsResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ResetUserStatisticsRequest request;
    FillResetUserStatisticsRequest( &request );
    LogResetUserStatisticsRequest( &request, "TestPlayerDataManagementAdminResetUserStatistics" );
    HRESULT hr = PFPlayerDataManagementAdminResetUserStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminResetUserStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminResolvePurchaseDispute(TestContext& testContext)
{
    struct AdminResolvePurchaseDisputeResult : public XAsyncResult
    {
        PFPlayerDataManagementResolvePurchaseDisputeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFPlayerDataManagementAdminResolvePurchaseDisputeGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFPlayerDataManagementAdminResolvePurchaseDisputeGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementResolvePurchaseDisputeResponse( result );
            return ValidatePFPlayerDataManagementResolvePurchaseDisputeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminResolvePurchaseDisputeResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ResolvePurchaseDisputeRequest request;
    FillResolvePurchaseDisputeRequest( &request );
    LogResolvePurchaseDisputeRequest( &request, "TestPlayerDataManagementAdminResolvePurchaseDispute" );
    HRESULT hr = PFPlayerDataManagementAdminResolvePurchaseDisputeAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminResolvePurchaseDisputeAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdatePlayerStatisticDefinition(TestContext& testContext)
{
    struct AdminUpdatePlayerStatisticDefinitionResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminUpdatePlayerStatisticDefinitionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdatePlayerStatisticDefinitionResult( result );
            return ValidatePFPlayerDataManagementUpdatePlayerStatisticDefinitionResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdatePlayerStatisticDefinitionResult>>(testContext);

    PlayFab::PlayerDataManagementModels::UpdatePlayerStatisticDefinitionRequest request;
    FillUpdatePlayerStatisticDefinitionRequest( &request );
    LogUpdatePlayerStatisticDefinitionRequest( &request, "TestPlayerDataManagementAdminUpdatePlayerStatisticDefinition" );
    HRESULT hr = PFPlayerDataManagementAdminUpdatePlayerStatisticDefinitionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminUpdatePlayerStatisticDefinitionAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserData(TestContext& testContext)
{
    struct AdminUpdateUserDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminUpdateUserDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdateUserDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::AdminUpdateUserDataRequest request;
    FillAdminUpdateUserDataRequest( &request );
    LogAdminUpdateUserDataRequest( &request, "TestPlayerDataManagementAdminUpdateUserData" );
    HRESULT hr = PFPlayerDataManagementAdminUpdateUserDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminUpdateUserDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserInternalData(TestContext& testContext)
{
    struct AdminUpdateUserInternalDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminUpdateUserInternalDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdateUserInternalDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::UpdateUserInternalDataRequest request;
    FillUpdateUserInternalDataRequest( &request );
    LogUpdateUserInternalDataRequest( &request, "TestPlayerDataManagementAdminUpdateUserInternalData" );
    HRESULT hr = PFPlayerDataManagementAdminUpdateUserInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminUpdateUserInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserPublisherData(TestContext& testContext)
{
    struct AdminUpdateUserPublisherDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminUpdateUserPublisherDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdateUserPublisherDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::AdminUpdateUserDataRequest request;
    FillAdminUpdateUserDataRequest( &request );
    LogAdminUpdateUserDataRequest( &request, "TestPlayerDataManagementAdminUpdateUserPublisherData" );
    HRESULT hr = PFPlayerDataManagementAdminUpdateUserPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminUpdateUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserPublisherInternalData(TestContext& testContext)
{
    struct AdminUpdateUserPublisherInternalDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminUpdateUserPublisherInternalDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdateUserPublisherInternalDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::UpdateUserInternalDataRequest request;
    FillUpdateUserInternalDataRequest( &request );
    LogUpdateUserInternalDataRequest( &request, "TestPlayerDataManagementAdminUpdateUserPublisherInternalData" );
    HRESULT hr = PFPlayerDataManagementAdminUpdateUserPublisherInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminUpdateUserPublisherInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserPublisherReadOnlyData(TestContext& testContext)
{
    struct AdminUpdateUserPublisherReadOnlyDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminUpdateUserPublisherReadOnlyDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdateUserPublisherReadOnlyDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::AdminUpdateUserDataRequest request;
    FillAdminUpdateUserDataRequest( &request );
    LogAdminUpdateUserDataRequest( &request, "TestPlayerDataManagementAdminUpdateUserPublisherReadOnlyData" );
    HRESULT hr = PFPlayerDataManagementAdminUpdateUserPublisherReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminUpdateUserPublisherReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementAdminUpdateUserReadOnlyData(TestContext& testContext)
{
    struct AdminUpdateUserReadOnlyDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementAdminUpdateUserReadOnlyDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdateUserReadOnlyDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::AdminUpdateUserDataRequest request;
    FillAdminUpdateUserDataRequest( &request );
    LogAdminUpdateUserDataRequest( &request, "TestPlayerDataManagementAdminUpdateUserReadOnlyData" );
    HRESULT hr = PFPlayerDataManagementAdminUpdateUserReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementAdminUpdateUserReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetFriendLeaderboard(TestContext& testContext)
{
    struct ClientGetFriendLeaderboardResult : public XAsyncResult
    {
        PFPlayerDataManagementGetLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientGetFriendLeaderboardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetLeaderboardResult( result );
            return ValidatePFPlayerDataManagementGetLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetFriendLeaderboardResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ClientGetFriendLeaderboardRequest request;
    FillClientGetFriendLeaderboardRequest( &request );
    LogClientGetFriendLeaderboardRequest( &request, "TestPlayerDataManagementClientGetFriendLeaderboard" );
    HRESULT hr = PFPlayerDataManagementClientGetFriendLeaderboardAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientGetFriendLeaderboardAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetFriendLeaderboardAroundPlayer(TestContext& testContext)
{
    struct ClientGetFriendLeaderboardAroundPlayerResult : public XAsyncResult
    {
        PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientGetFriendLeaderboardAroundPlayerGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult( result );
            return ValidatePFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetFriendLeaderboardAroundPlayerResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetFriendLeaderboardAroundPlayerRequest request;
    FillGetFriendLeaderboardAroundPlayerRequest( &request );
    LogGetFriendLeaderboardAroundPlayerRequest( &request, "TestPlayerDataManagementClientGetFriendLeaderboardAroundPlayer" );
    HRESULT hr = PFPlayerDataManagementClientGetFriendLeaderboardAroundPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientGetFriendLeaderboardAroundPlayerAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetLeaderboard(TestContext& testContext)
{
    struct ClientGetLeaderboardResult : public XAsyncResult
    {
        PFPlayerDataManagementGetLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientGetLeaderboardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetLeaderboardResult( result );
            return ValidatePFPlayerDataManagementGetLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetLeaderboardResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetLeaderboardRequest request;
    FillGetLeaderboardRequest( &request );
    LogGetLeaderboardRequest( &request, "TestPlayerDataManagementClientGetLeaderboard" );
    HRESULT hr = PFPlayerDataManagementClientGetLeaderboardAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientGetLeaderboardAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetLeaderboardAroundPlayer(TestContext& testContext)
{
    struct ClientGetLeaderboardAroundPlayerResult : public XAsyncResult
    {
        PFPlayerDataManagementGetLeaderboardAroundPlayerResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientGetLeaderboardAroundPlayerGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetLeaderboardAroundPlayerResult( result );
            return ValidatePFPlayerDataManagementGetLeaderboardAroundPlayerResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetLeaderboardAroundPlayerResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetLeaderboardAroundPlayerRequest request;
    FillGetLeaderboardAroundPlayerRequest( &request );
    LogGetLeaderboardAroundPlayerRequest( &request, "TestPlayerDataManagementClientGetLeaderboardAroundPlayer" );
    HRESULT hr = PFPlayerDataManagementClientGetLeaderboardAroundPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientGetLeaderboardAroundPlayerAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetPlayerStatistics(TestContext& testContext)
{
    struct ClientGetPlayerStatisticsResult : public XAsyncResult
    {
        PFPlayerDataManagementClientGetPlayerStatisticsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientGetPlayerStatisticsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementClientGetPlayerStatisticsResult( result );
            return ValidatePFPlayerDataManagementClientGetPlayerStatisticsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayerStatisticsResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ClientGetPlayerStatisticsRequest request;
    FillClientGetPlayerStatisticsRequest( &request );
    LogClientGetPlayerStatisticsRequest( &request, "TestPlayerDataManagementClientGetPlayerStatistics" );
    HRESULT hr = PFPlayerDataManagementClientGetPlayerStatisticsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientGetPlayerStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetPlayerStatisticVersions(TestContext& testContext)
{
    struct ClientGetPlayerStatisticVersionsResult : public XAsyncResult
    {
        PFPlayerDataManagementGetPlayerStatisticVersionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientGetPlayerStatisticVersionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetPlayerStatisticVersionsResult( result );
            return ValidatePFPlayerDataManagementGetPlayerStatisticVersionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayerStatisticVersionsResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetPlayerStatisticVersionsRequest request;
    FillGetPlayerStatisticVersionsRequest( &request );
    LogGetPlayerStatisticVersionsRequest( &request, "TestPlayerDataManagementClientGetPlayerStatisticVersions" );
    HRESULT hr = PFPlayerDataManagementClientGetPlayerStatisticVersionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientGetPlayerStatisticVersionsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetUserData(TestContext& testContext)
{
    struct ClientGetUserDataResult : public XAsyncResult
    {
        PFPlayerDataManagementClientGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientGetUserDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementClientGetUserDataResult( result );
            return ValidatePFPlayerDataManagementClientGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetUserDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementClientGetUserData" );
    HRESULT hr = PFPlayerDataManagementClientGetUserDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientGetUserDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetUserPublisherData(TestContext& testContext)
{
    struct ClientGetUserPublisherDataResult : public XAsyncResult
    {
        PFPlayerDataManagementClientGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientGetUserPublisherDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementClientGetUserDataResult( result );
            return ValidatePFPlayerDataManagementClientGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetUserPublisherDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementClientGetUserPublisherData" );
    HRESULT hr = PFPlayerDataManagementClientGetUserPublisherDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientGetUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetUserPublisherReadOnlyData(TestContext& testContext)
{
    struct ClientGetUserPublisherReadOnlyDataResult : public XAsyncResult
    {
        PFPlayerDataManagementClientGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientGetUserPublisherReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementClientGetUserDataResult( result );
            return ValidatePFPlayerDataManagementClientGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetUserPublisherReadOnlyDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementClientGetUserPublisherReadOnlyData" );
    HRESULT hr = PFPlayerDataManagementClientGetUserPublisherReadOnlyDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientGetUserPublisherReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientGetUserReadOnlyData(TestContext& testContext)
{
    struct ClientGetUserReadOnlyDataResult : public XAsyncResult
    {
        PFPlayerDataManagementClientGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientGetUserReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementClientGetUserDataResult( result );
            return ValidatePFPlayerDataManagementClientGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetUserReadOnlyDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementClientGetUserReadOnlyData" );
    HRESULT hr = PFPlayerDataManagementClientGetUserReadOnlyDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientGetUserReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientUpdatePlayerStatistics(TestContext& testContext)
{
    struct ClientUpdatePlayerStatisticsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUpdatePlayerStatisticsResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ClientUpdatePlayerStatisticsRequest request;
    FillClientUpdatePlayerStatisticsRequest( &request );
    LogClientUpdatePlayerStatisticsRequest( &request, "TestPlayerDataManagementClientUpdatePlayerStatistics" );
    HRESULT hr = PFPlayerDataManagementClientUpdatePlayerStatisticsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientUpdatePlayerStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientUpdateUserData(TestContext& testContext)
{
    struct ClientUpdateUserDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientUpdateUserDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientUpdateUserDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ClientUpdateUserDataRequest request;
    FillClientUpdateUserDataRequest( &request );
    LogClientUpdateUserDataRequest( &request, "TestPlayerDataManagementClientUpdateUserData" );
    HRESULT hr = PFPlayerDataManagementClientUpdateUserDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientUpdateUserDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementClientUpdateUserPublisherData(TestContext& testContext)
{
    struct ClientUpdateUserPublisherDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementClientUpdateUserPublisherDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientUpdateUserPublisherDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ClientUpdateUserDataRequest request;
    FillClientUpdateUserDataRequest( &request );
    LogClientUpdateUserDataRequest( &request, "TestPlayerDataManagementClientUpdateUserPublisherData" );
    HRESULT hr = PFPlayerDataManagementClientUpdateUserPublisherDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementClientUpdateUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetFriendLeaderboard(TestContext& testContext)
{
    struct ServerGetFriendLeaderboardResult : public XAsyncResult
    {
        PFPlayerDataManagementGetLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetFriendLeaderboardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetLeaderboardResult( result );
            return ValidatePFPlayerDataManagementGetLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetFriendLeaderboardResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ServerGetFriendLeaderboardRequest request;
    FillServerGetFriendLeaderboardRequest( &request );
    LogServerGetFriendLeaderboardRequest( &request, "TestPlayerDataManagementServerGetFriendLeaderboard" );
    HRESULT hr = PFPlayerDataManagementServerGetFriendLeaderboardAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetFriendLeaderboardAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetLeaderboard(TestContext& testContext)
{
    struct ServerGetLeaderboardResult : public XAsyncResult
    {
        PFPlayerDataManagementGetLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetLeaderboardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetLeaderboardResult( result );
            return ValidatePFPlayerDataManagementGetLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetLeaderboardResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetLeaderboardRequest request;
    FillGetLeaderboardRequest( &request );
    LogGetLeaderboardRequest( &request, "TestPlayerDataManagementServerGetLeaderboard" );
    HRESULT hr = PFPlayerDataManagementServerGetLeaderboardAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetLeaderboardAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetLeaderboardAroundUser(TestContext& testContext)
{
    struct ServerGetLeaderboardAroundUserResult : public XAsyncResult
    {
        PFPlayerDataManagementGetLeaderboardAroundUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetLeaderboardAroundUserGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetLeaderboardAroundUserResult( result );
            return ValidatePFPlayerDataManagementGetLeaderboardAroundUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetLeaderboardAroundUserResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetLeaderboardAroundUserRequest request;
    FillGetLeaderboardAroundUserRequest( &request );
    LogGetLeaderboardAroundUserRequest( &request, "TestPlayerDataManagementServerGetLeaderboardAroundUser" );
    HRESULT hr = PFPlayerDataManagementServerGetLeaderboardAroundUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetLeaderboardAroundUserAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetPlayerCombinedInfo(TestContext& testContext)
{
    struct ServerGetPlayerCombinedInfoResult : public XAsyncResult
    {
        PFGetPlayerCombinedInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetPlayerCombinedInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGetPlayerCombinedInfoResult( result );
            return ValidatePFGetPlayerCombinedInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayerCombinedInfoResult>>(testContext);

    PlayFab::GetPlayerCombinedInfoRequest request;
    FillGetPlayerCombinedInfoRequest( &request );
    LogGetPlayerCombinedInfoRequest( &request, "TestPlayerDataManagementServerGetPlayerCombinedInfo" );
    HRESULT hr = PFPlayerDataManagementServerGetPlayerCombinedInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetPlayerCombinedInfoAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetPlayerStatistics(TestContext& testContext)
{
    struct ServerGetPlayerStatisticsResult : public XAsyncResult
    {
        PFPlayerDataManagementServerGetPlayerStatisticsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetPlayerStatisticsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementServerGetPlayerStatisticsResult( result );
            return ValidatePFPlayerDataManagementServerGetPlayerStatisticsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayerStatisticsResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ServerGetPlayerStatisticsRequest request;
    FillServerGetPlayerStatisticsRequest( &request );
    LogServerGetPlayerStatisticsRequest( &request, "TestPlayerDataManagementServerGetPlayerStatistics" );
    HRESULT hr = PFPlayerDataManagementServerGetPlayerStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetPlayerStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetPlayerStatisticVersions(TestContext& testContext)
{
    struct ServerGetPlayerStatisticVersionsResult : public XAsyncResult
    {
        PFPlayerDataManagementGetPlayerStatisticVersionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetPlayerStatisticVersionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementGetPlayerStatisticVersionsResult( result );
            return ValidatePFPlayerDataManagementGetPlayerStatisticVersionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayerStatisticVersionsResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetPlayerStatisticVersionsRequest request;
    FillGetPlayerStatisticVersionsRequest( &request );
    LogGetPlayerStatisticVersionsRequest( &request, "TestPlayerDataManagementServerGetPlayerStatisticVersions" );
    HRESULT hr = PFPlayerDataManagementServerGetPlayerStatisticVersionsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetPlayerStatisticVersionsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserData(TestContext& testContext)
{
    struct ServerGetUserDataResult : public XAsyncResult
    {
        PFPlayerDataManagementServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetUserDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementServerGetUserDataResult( result );
            return ValidatePFPlayerDataManagementServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetUserDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementServerGetUserData" );
    HRESULT hr = PFPlayerDataManagementServerGetUserDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetUserDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserInternalData(TestContext& testContext)
{
    struct ServerGetUserInternalDataResult : public XAsyncResult
    {
        PFPlayerDataManagementServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetUserInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementServerGetUserDataResult( result );
            return ValidatePFPlayerDataManagementServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetUserInternalDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementServerGetUserInternalData" );
    HRESULT hr = PFPlayerDataManagementServerGetUserInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetUserInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserPublisherData(TestContext& testContext)
{
    struct ServerGetUserPublisherDataResult : public XAsyncResult
    {
        PFPlayerDataManagementServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetUserPublisherDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementServerGetUserDataResult( result );
            return ValidatePFPlayerDataManagementServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetUserPublisherDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementServerGetUserPublisherData" );
    HRESULT hr = PFPlayerDataManagementServerGetUserPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserPublisherInternalData(TestContext& testContext)
{
    struct ServerGetUserPublisherInternalDataResult : public XAsyncResult
    {
        PFPlayerDataManagementServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetUserPublisherInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementServerGetUserDataResult( result );
            return ValidatePFPlayerDataManagementServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetUserPublisherInternalDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementServerGetUserPublisherInternalData" );
    HRESULT hr = PFPlayerDataManagementServerGetUserPublisherInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetUserPublisherInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserPublisherReadOnlyData(TestContext& testContext)
{
    struct ServerGetUserPublisherReadOnlyDataResult : public XAsyncResult
    {
        PFPlayerDataManagementServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetUserPublisherReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementServerGetUserDataResult( result );
            return ValidatePFPlayerDataManagementServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetUserPublisherReadOnlyDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementServerGetUserPublisherReadOnlyData" );
    HRESULT hr = PFPlayerDataManagementServerGetUserPublisherReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetUserPublisherReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerGetUserReadOnlyData(TestContext& testContext)
{
    struct ServerGetUserReadOnlyDataResult : public XAsyncResult
    {
        PFPlayerDataManagementServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerGetUserReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementServerGetUserDataResult( result );
            return ValidatePFPlayerDataManagementServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetUserReadOnlyDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::GetUserDataRequest request;
    FillGetUserDataRequest( &request );
    LogGetUserDataRequest( &request, "TestPlayerDataManagementServerGetUserReadOnlyData" );
    HRESULT hr = PFPlayerDataManagementServerGetUserReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerGetUserReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdatePlayerStatistics(TestContext& testContext)
{
    struct ServerUpdatePlayerStatisticsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerUpdatePlayerStatisticsResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ServerUpdatePlayerStatisticsRequest request;
    FillServerUpdatePlayerStatisticsRequest( &request );
    LogServerUpdatePlayerStatisticsRequest( &request, "TestPlayerDataManagementServerUpdatePlayerStatistics" );
    HRESULT hr = PFPlayerDataManagementServerUpdatePlayerStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerUpdatePlayerStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserData(TestContext& testContext)
{
    struct ServerUpdateUserDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerUpdateUserDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateUserDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ServerUpdateUserDataRequest request;
    FillServerUpdateUserDataRequest( &request );
    LogServerUpdateUserDataRequest( &request, "TestPlayerDataManagementServerUpdateUserData" );
    HRESULT hr = PFPlayerDataManagementServerUpdateUserDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerUpdateUserDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserInternalData(TestContext& testContext)
{
    struct ServerUpdateUserInternalDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerUpdateUserInternalDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateUserInternalDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::UpdateUserInternalDataRequest request;
    FillUpdateUserInternalDataRequest( &request );
    LogUpdateUserInternalDataRequest( &request, "TestPlayerDataManagementServerUpdateUserInternalData" );
    HRESULT hr = PFPlayerDataManagementServerUpdateUserInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerUpdateUserInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserPublisherData(TestContext& testContext)
{
    struct ServerUpdateUserPublisherDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerUpdateUserPublisherDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateUserPublisherDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ServerUpdateUserDataRequest request;
    FillServerUpdateUserDataRequest( &request );
    LogServerUpdateUserDataRequest( &request, "TestPlayerDataManagementServerUpdateUserPublisherData" );
    HRESULT hr = PFPlayerDataManagementServerUpdateUserPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerUpdateUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserPublisherInternalData(TestContext& testContext)
{
    struct ServerUpdateUserPublisherInternalDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerUpdateUserPublisherInternalDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateUserPublisherInternalDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::UpdateUserInternalDataRequest request;
    FillUpdateUserInternalDataRequest( &request );
    LogUpdateUserInternalDataRequest( &request, "TestPlayerDataManagementServerUpdateUserPublisherInternalData" );
    HRESULT hr = PFPlayerDataManagementServerUpdateUserPublisherInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerUpdateUserPublisherInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserPublisherReadOnlyData(TestContext& testContext)
{
    struct ServerUpdateUserPublisherReadOnlyDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerUpdateUserPublisherReadOnlyDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateUserPublisherReadOnlyDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ServerUpdateUserDataRequest request;
    FillServerUpdateUserDataRequest( &request );
    LogServerUpdateUserDataRequest( &request, "TestPlayerDataManagementServerUpdateUserPublisherReadOnlyData" );
    HRESULT hr = PFPlayerDataManagementServerUpdateUserPublisherReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerUpdateUserPublisherReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlayerDataManagementTests::TestPlayerDataManagementServerUpdateUserReadOnlyData(TestContext& testContext)
{
    struct ServerUpdateUserReadOnlyDataResult : public XAsyncResult
    {
        PFPlayerDataManagementUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayerDataManagementServerUpdateUserReadOnlyDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayerDataManagementUpdateUserDataResult( &result );
            return ValidatePFPlayerDataManagementUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateUserReadOnlyDataResult>>(testContext);

    PlayFab::PlayerDataManagementModels::ServerUpdateUserDataRequest request;
    FillServerUpdateUserDataRequest( &request );
    LogServerUpdateUserDataRequest( &request, "TestPlayerDataManagementServerUpdateUserReadOnlyData" );
    HRESULT hr = PFPlayerDataManagementServerUpdateUserReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayerDataManagementPlayerDataManagementServerUpdateUserReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

}
