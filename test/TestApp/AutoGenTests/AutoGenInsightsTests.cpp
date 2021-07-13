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

namespace PlayFabUnit
{

void AutoGenInsightsTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenClientTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenInsightsTests::AddTests()
{
    // Generated tests 
    AddTest("TestInsightsGetDetails", &AutoGenInsightsTests::TestInsightsGetDetails);
    AddTest("TestInsightsGetLimits", &AutoGenInsightsTests::TestInsightsGetLimits);
    AddTest("TestInsightsGetOperationStatus", &AutoGenInsightsTests::TestInsightsGetOperationStatus);
    AddTest("TestInsightsGetPendingOperations", &AutoGenInsightsTests::TestInsightsGetPendingOperations);
    AddTest("TestInsightsSetPerformance", &AutoGenInsightsTests::TestInsightsSetPerformance);
    AddTest("TestInsightsSetStorageRetention", &AutoGenInsightsTests::TestInsightsSetStorageRetention);
}

void AutoGenInsightsTests::ClassSetUp()
{
    HRESULT hr = PlayFabAdminInitialize(testTitleData.titleId.data(), testTitleData.developerSecretKey.data(), nullptr, &stateHandle);
    assert(SUCCEEDED(hr));
    if (SUCCEEDED(hr))
    {
        PlayFabClientLoginWithCustomIDRequest request{};
        request.customId = "CustomId";
        bool createAccount = true;
        request.createAccount = &createAccount;
        request.titleId = testTitleData.titleId.data();

        PlayFabClientGetPlayerCombinedInfoRequestParams combinedInfoRequestParams{};
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
        hr = PlayFabClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PlayFabGetAuthResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PlayFabEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenInsightsTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenInsightsTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

void AutoGenInsightsTests::TestInsightsGetDetails(TestContext& testContext)
{
    struct GetDetailsResult : public XAsyncResult
    {
        PlayFabInsightsInsightsGetDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabInsightsGetDetailsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabInsightsInsightsGetDetailsResponse( result );
            return ValidatePlayFabInsightsInsightsGetDetailsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetDetailsResult>>(testContext);

    PlayFab::InsightsModels::InsightsEmptyRequest request;
    FillPlayFabInsightsInsightsEmptyRequest( &request );
    LogPlayFabInsightsInsightsEmptyRequest( &request, "TestInsightsGetDetails" );
    HRESULT hr = PlayFabInsightsGetDetailsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabInsightsGetDetailsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenInsightsTests::TestInsightsGetLimits(TestContext& testContext)
{
    struct GetLimitsResult : public XAsyncResult
    {
        PlayFabInsightsInsightsGetLimitsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabInsightsGetLimitsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabInsightsInsightsGetLimitsResponse( result );
            return ValidatePlayFabInsightsInsightsGetLimitsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLimitsResult>>(testContext);

    PlayFab::InsightsModels::InsightsEmptyRequest request;
    FillPlayFabInsightsInsightsEmptyRequest( &request );
    LogPlayFabInsightsInsightsEmptyRequest( &request, "TestInsightsGetLimits" );
    HRESULT hr = PlayFabInsightsGetLimitsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabInsightsGetLimitsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenInsightsTests::TestInsightsGetOperationStatus(TestContext& testContext)
{
    struct GetOperationStatusResult : public XAsyncResult
    {
        PlayFabInsightsInsightsGetOperationStatusResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabInsightsGetOperationStatusGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabInsightsGetOperationStatusGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabInsightsInsightsGetOperationStatusResponse( result );
            return ValidatePlayFabInsightsInsightsGetOperationStatusResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetOperationStatusResult>>(testContext);

    PlayFab::InsightsModels::InsightsGetOperationStatusRequest request;
    FillPlayFabInsightsInsightsGetOperationStatusRequest( &request );
    LogPlayFabInsightsInsightsGetOperationStatusRequest( &request, "TestInsightsGetOperationStatus" );
    HRESULT hr = PlayFabInsightsGetOperationStatusAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabInsightsGetOperationStatusAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenInsightsTests::TestInsightsGetPendingOperations(TestContext& testContext)
{
    struct GetPendingOperationsResult : public XAsyncResult
    {
        PlayFabInsightsInsightsGetPendingOperationsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabInsightsGetPendingOperationsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabInsightsInsightsGetPendingOperationsResponse( result );
            return ValidatePlayFabInsightsInsightsGetPendingOperationsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPendingOperationsResult>>(testContext);

    PlayFab::InsightsModels::InsightsGetPendingOperationsRequest request;
    FillPlayFabInsightsInsightsGetPendingOperationsRequest( &request );
    LogPlayFabInsightsInsightsGetPendingOperationsRequest( &request, "TestInsightsGetPendingOperations" );
    HRESULT hr = PlayFabInsightsGetPendingOperationsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabInsightsGetPendingOperationsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenInsightsTests::TestInsightsSetPerformance(TestContext& testContext)
{
    struct SetPerformanceResult : public XAsyncResult
    {
        PlayFabInsightsInsightsOperationResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabInsightsSetPerformanceGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabInsightsSetPerformanceGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabInsightsInsightsOperationResponse( result );
            return ValidatePlayFabInsightsInsightsOperationResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetPerformanceResult>>(testContext);

    PlayFab::InsightsModels::InsightsSetPerformanceRequest request;
    FillPlayFabInsightsInsightsSetPerformanceRequest( &request );
    LogPlayFabInsightsInsightsSetPerformanceRequest( &request, "TestInsightsSetPerformance" );
    HRESULT hr = PlayFabInsightsSetPerformanceAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabInsightsSetPerformanceAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenInsightsTests::TestInsightsSetStorageRetention(TestContext& testContext)
{
    struct SetStorageRetentionResult : public XAsyncResult
    {
        PlayFabInsightsInsightsOperationResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabInsightsSetStorageRetentionGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabInsightsSetStorageRetentionGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabInsightsInsightsOperationResponse( result );
            return ValidatePlayFabInsightsInsightsOperationResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetStorageRetentionResult>>(testContext);

    PlayFab::InsightsModels::InsightsSetStorageRetentionRequest request;
    FillPlayFabInsightsInsightsSetStorageRetentionRequest( &request );
    LogPlayFabInsightsInsightsSetStorageRetentionRequest( &request, "TestInsightsSetStorageRetention" );
    HRESULT hr = PlayFabInsightsSetStorageRetentionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabInsightsSetStorageRetentionAsync", hr);
        return;
    }
    async.release(); 
} 


}
