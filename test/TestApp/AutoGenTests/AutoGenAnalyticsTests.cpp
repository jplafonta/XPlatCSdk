#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenAnalyticsTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenAnalyticsTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenAnalyticsTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenAnalyticsTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestAnalyticsClientReportDeviceInfo", &AutoGenAnalyticsTests::TestAnalyticsClientReportDeviceInfo);
    AddTest("TestAnalyticsClientWriteCharacterEvent", &AutoGenAnalyticsTests::TestAnalyticsClientWriteCharacterEvent);
    AddTest("TestAnalyticsClientWritePlayerEvent", &AutoGenAnalyticsTests::TestAnalyticsClientWritePlayerEvent);
    AddTest("TestAnalyticsClientWriteTitleEvent", &AutoGenAnalyticsTests::TestAnalyticsClientWriteTitleEvent);
    AddTest("TestAnalyticsServerWriteCharacterEvent", &AutoGenAnalyticsTests::TestAnalyticsServerWriteCharacterEvent);
    AddTest("TestAnalyticsServerWritePlayerEvent", &AutoGenAnalyticsTests::TestAnalyticsServerWritePlayerEvent);
    AddTest("TestAnalyticsServerWriteTitleEvent", &AutoGenAnalyticsTests::TestAnalyticsServerWriteTitleEvent);
    AddTest("TestAnalyticsGetDetails", &AutoGenAnalyticsTests::TestAnalyticsGetDetails);
    AddTest("TestAnalyticsGetLimits", &AutoGenAnalyticsTests::TestAnalyticsGetLimits);
    AddTest("TestAnalyticsGetOperationStatus", &AutoGenAnalyticsTests::TestAnalyticsGetOperationStatus);
    AddTest("TestAnalyticsGetPendingOperations", &AutoGenAnalyticsTests::TestAnalyticsGetPendingOperations);
    AddTest("TestAnalyticsSetPerformance", &AutoGenAnalyticsTests::TestAnalyticsSetPerformance);
    AddTest("TestAnalyticsSetStorageRetention", &AutoGenAnalyticsTests::TestAnalyticsSetStorageRetention);
}

void AutoGenAnalyticsTests::ClassSetUp()
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

void AutoGenAnalyticsTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenAnalyticsTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


void AutoGenAnalyticsTests::TestAnalyticsClientReportDeviceInfo(TestContext& testContext)
{
    struct ClientReportDeviceInfoResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientReportDeviceInfoResult>>(testContext);

    PlayFab::AnalyticsModels::DeviceInfoRequest request;
    FillDeviceInfoRequest( &request );
    LogDeviceInfoRequest( &request, "TestAnalyticsClientReportDeviceInfo" );
    HRESULT hr = PFAnalyticsClientReportDeviceInfoAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsClientReportDeviceInfoAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsClientWriteCharacterEvent(TestContext& testContext)
{
    struct ClientWriteCharacterEventResult : public XAsyncResult
    {
        PFAnalyticsWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAnalyticsClientWriteCharacterEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAnalyticsClientWriteCharacterEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsWriteEventResponse( result );
            return ValidatePFAnalyticsWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientWriteCharacterEventResult>>(testContext);

    PlayFab::AnalyticsModels::WriteClientCharacterEventRequest request;
    FillWriteClientCharacterEventRequest( &request );
    LogWriteClientCharacterEventRequest( &request, "TestAnalyticsClientWriteCharacterEvent" );
    HRESULT hr = PFAnalyticsClientWriteCharacterEventAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsClientWriteCharacterEventAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsClientWritePlayerEvent(TestContext& testContext)
{
    struct ClientWritePlayerEventResult : public XAsyncResult
    {
        PFAnalyticsWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAnalyticsClientWritePlayerEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAnalyticsClientWritePlayerEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsWriteEventResponse( result );
            return ValidatePFAnalyticsWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientWritePlayerEventResult>>(testContext);

    PlayFab::AnalyticsModels::WriteClientPlayerEventRequest request;
    FillWriteClientPlayerEventRequest( &request );
    LogWriteClientPlayerEventRequest( &request, "TestAnalyticsClientWritePlayerEvent" );
    HRESULT hr = PFAnalyticsClientWritePlayerEventAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsClientWritePlayerEventAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsClientWriteTitleEvent(TestContext& testContext)
{
    struct ClientWriteTitleEventResult : public XAsyncResult
    {
        PFAnalyticsWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAnalyticsClientWriteTitleEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAnalyticsClientWriteTitleEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsWriteEventResponse( result );
            return ValidatePFAnalyticsWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientWriteTitleEventResult>>(testContext);

    PlayFab::AnalyticsModels::WriteTitleEventRequest request;
    FillWriteTitleEventRequest( &request );
    LogWriteTitleEventRequest( &request, "TestAnalyticsClientWriteTitleEvent" );
    HRESULT hr = PFAnalyticsClientWriteTitleEventAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsClientWriteTitleEventAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsServerWriteCharacterEvent(TestContext& testContext)
{
    struct ServerWriteCharacterEventResult : public XAsyncResult
    {
        PFAnalyticsWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAnalyticsServerWriteCharacterEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAnalyticsServerWriteCharacterEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsWriteEventResponse( result );
            return ValidatePFAnalyticsWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerWriteCharacterEventResult>>(testContext);

    PlayFab::AnalyticsModels::WriteServerCharacterEventRequest request;
    FillWriteServerCharacterEventRequest( &request );
    LogWriteServerCharacterEventRequest( &request, "TestAnalyticsServerWriteCharacterEvent" );
    HRESULT hr = PFAnalyticsServerWriteCharacterEventAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsServerWriteCharacterEventAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsServerWritePlayerEvent(TestContext& testContext)
{
    struct ServerWritePlayerEventResult : public XAsyncResult
    {
        PFAnalyticsWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAnalyticsServerWritePlayerEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAnalyticsServerWritePlayerEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsWriteEventResponse( result );
            return ValidatePFAnalyticsWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerWritePlayerEventResult>>(testContext);

    PlayFab::AnalyticsModels::WriteServerPlayerEventRequest request;
    FillWriteServerPlayerEventRequest( &request );
    LogWriteServerPlayerEventRequest( &request, "TestAnalyticsServerWritePlayerEvent" );
    HRESULT hr = PFAnalyticsServerWritePlayerEventAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsServerWritePlayerEventAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsServerWriteTitleEvent(TestContext& testContext)
{
    struct ServerWriteTitleEventResult : public XAsyncResult
    {
        PFAnalyticsWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAnalyticsServerWriteTitleEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAnalyticsServerWriteTitleEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsWriteEventResponse( result );
            return ValidatePFAnalyticsWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerWriteTitleEventResult>>(testContext);

    PlayFab::AnalyticsModels::WriteTitleEventRequest request;
    FillWriteTitleEventRequest( &request );
    LogWriteTitleEventRequest( &request, "TestAnalyticsServerWriteTitleEvent" );
    HRESULT hr = PFAnalyticsServerWriteTitleEventAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsServerWriteTitleEventAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsGetDetails(TestContext& testContext)
{
    struct GetDetailsResult : public XAsyncResult
    {
        PFAnalyticsInsightsGetDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAnalyticsGetDetailsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsInsightsGetDetailsResponse( result );
            return ValidatePFAnalyticsInsightsGetDetailsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetDetailsResult>>(testContext);

    PlayFab::AnalyticsModels::InsightsEmptyRequest request;
    FillInsightsEmptyRequest( &request );
    LogInsightsEmptyRequest( &request, "TestAnalyticsGetDetails" );
    HRESULT hr = PFAnalyticsGetDetailsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsGetDetailsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsGetLimits(TestContext& testContext)
{
    struct GetLimitsResult : public XAsyncResult
    {
        PFAnalyticsInsightsGetLimitsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAnalyticsGetLimitsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsInsightsGetLimitsResponse( result );
            return ValidatePFAnalyticsInsightsGetLimitsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLimitsResult>>(testContext);

    PlayFab::AnalyticsModels::InsightsEmptyRequest request;
    FillInsightsEmptyRequest( &request );
    LogInsightsEmptyRequest( &request, "TestAnalyticsGetLimits" );
    HRESULT hr = PFAnalyticsGetLimitsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsGetLimitsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsGetOperationStatus(TestContext& testContext)
{
    struct GetOperationStatusResult : public XAsyncResult
    {
        PFAnalyticsInsightsGetOperationStatusResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAnalyticsGetOperationStatusGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAnalyticsGetOperationStatusGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsInsightsGetOperationStatusResponse( result );
            return ValidatePFAnalyticsInsightsGetOperationStatusResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetOperationStatusResult>>(testContext);

    PlayFab::AnalyticsModels::InsightsGetOperationStatusRequest request;
    FillInsightsGetOperationStatusRequest( &request );
    LogInsightsGetOperationStatusRequest( &request, "TestAnalyticsGetOperationStatus" );
    HRESULT hr = PFAnalyticsGetOperationStatusAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsGetOperationStatusAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsGetPendingOperations(TestContext& testContext)
{
    struct GetPendingOperationsResult : public XAsyncResult
    {
        PFAnalyticsInsightsGetPendingOperationsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAnalyticsGetPendingOperationsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsInsightsGetPendingOperationsResponse( result );
            return ValidatePFAnalyticsInsightsGetPendingOperationsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPendingOperationsResult>>(testContext);

    PlayFab::AnalyticsModels::InsightsGetPendingOperationsRequest request;
    FillInsightsGetPendingOperationsRequest( &request );
    LogInsightsGetPendingOperationsRequest( &request, "TestAnalyticsGetPendingOperations" );
    HRESULT hr = PFAnalyticsGetPendingOperationsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsGetPendingOperationsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsSetPerformance(TestContext& testContext)
{
    struct SetPerformanceResult : public XAsyncResult
    {
        PFAnalyticsInsightsOperationResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAnalyticsSetPerformanceGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAnalyticsSetPerformanceGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsInsightsOperationResponse( result );
            return ValidatePFAnalyticsInsightsOperationResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetPerformanceResult>>(testContext);

    PlayFab::AnalyticsModels::InsightsSetPerformanceRequest request;
    FillInsightsSetPerformanceRequest( &request );
    LogInsightsSetPerformanceRequest( &request, "TestAnalyticsSetPerformance" );
    HRESULT hr = PFAnalyticsSetPerformanceAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsSetPerformanceAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAnalyticsTests::TestAnalyticsSetStorageRetention(TestContext& testContext)
{
    struct SetStorageRetentionResult : public XAsyncResult
    {
        PFAnalyticsInsightsOperationResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAnalyticsSetStorageRetentionGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAnalyticsSetStorageRetentionGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAnalyticsInsightsOperationResponse( result );
            return ValidatePFAnalyticsInsightsOperationResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetStorageRetentionResult>>(testContext);

    PlayFab::AnalyticsModels::InsightsSetStorageRetentionRequest request;
    FillInsightsSetStorageRetentionRequest( &request );
    LogInsightsSetStorageRetentionRequest( &request, "TestAnalyticsSetStorageRetention" );
    HRESULT hr = PFAnalyticsSetStorageRetentionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAnalyticsAnalyticsSetStorageRetentionAsync", hr);
        return;
    }
    async.release(); 
} 

}
