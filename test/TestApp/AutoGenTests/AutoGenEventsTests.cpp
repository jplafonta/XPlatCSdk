#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenEventsTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenEventsTests::Log(std::stringstream& ss)
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

void AutoGenEventsTests::AddTests()
{
    // Generated tests 
    AddTest("TestEventsWriteEvents", &AutoGenEventsTests::TestEventsWriteEvents);
    AddTest("TestEventsWriteTelemetryEvents", &AutoGenEventsTests::TestEventsWriteTelemetryEvents);
}

void AutoGenEventsTests::ClassSetUp()
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

void AutoGenEventsTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenEventsTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

void AutoGenEventsTests::TestEventsWriteEvents(TestContext& testContext)
{
    struct WriteEventsResult : public XAsyncResult
    {
        PlayFabEventsWriteEventsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabEventsWriteEventsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabEventsWriteEventsResponse( result );
            return ValidatePlayFabEventsWriteEventsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<WriteEventsResult>>(testContext);

    PlayFab::EventsModels::WriteEventsRequest request;
    FillPlayFabEventsWriteEventsRequest( &request );
    LogPlayFabEventsWriteEventsRequest( &request, "TestEventsWriteEvents" );
    HRESULT hr = PlayFabEventsWriteEventsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabEventsWriteEventsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenEventsTests::TestEventsWriteTelemetryEvents(TestContext& testContext)
{
    struct WriteTelemetryEventsResult : public XAsyncResult
    {
        PlayFabEventsWriteEventsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabEventsWriteTelemetryEventsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabEventsWriteEventsResponse( result );
            return ValidatePlayFabEventsWriteEventsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<WriteTelemetryEventsResult>>(testContext);

    PlayFab::EventsModels::WriteEventsRequest request;
    FillPlayFabEventsWriteEventsRequest( &request );
    LogPlayFabEventsWriteEventsRequest( &request, "TestEventsWriteTelemetryEvents" );
    HRESULT hr = PlayFabEventsWriteTelemetryEventsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabEventsWriteTelemetryEventsAsync", hr);
        return;
    }
    async.release(); 
} 


}
