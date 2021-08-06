#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenTradingTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenTradingTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenTradingTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenTradingTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestTradingClientAcceptTrade", &AutoGenTradingTests::TestTradingClientAcceptTrade);
    AddTest("TestTradingClientCancelTrade", &AutoGenTradingTests::TestTradingClientCancelTrade);
    AddTest("TestTradingClientGetPlayerTrades", &AutoGenTradingTests::TestTradingClientGetPlayerTrades);
    AddTest("TestTradingClientGetTradeStatus", &AutoGenTradingTests::TestTradingClientGetTradeStatus);
    AddTest("TestTradingClientOpenTrade", &AutoGenTradingTests::TestTradingClientOpenTrade);
}

void AutoGenTradingTests::ClassSetUp()
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

void AutoGenTradingTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenTradingTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


void AutoGenTradingTests::TestTradingClientAcceptTrade(TestContext& testContext)
{
    struct ClientAcceptTradeResult : public XAsyncResult
    {
        PFTradingAcceptTradeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTradingClientAcceptTradeGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFTradingAcceptTradeResponse( result );
            return ValidatePFTradingAcceptTradeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientAcceptTradeResult>>(testContext);

    PlayFab::TradingModels::AcceptTradeRequest request;
    FillAcceptTradeRequest( &request );
    LogAcceptTradeRequest( &request, "TestTradingClientAcceptTrade" );
    HRESULT hr = PFTradingClientAcceptTradeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTradingTradingClientAcceptTradeAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenTradingTests::TestTradingClientCancelTrade(TestContext& testContext)
{
    struct ClientCancelTradeResult : public XAsyncResult
    {
        PFTradingCancelTradeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTradingClientCancelTradeGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFTradingCancelTradeResponse( result );
            return ValidatePFTradingCancelTradeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientCancelTradeResult>>(testContext);

    PlayFab::TradingModels::CancelTradeRequest request;
    FillCancelTradeRequest( &request );
    LogCancelTradeRequest( &request, "TestTradingClientCancelTrade" );
    HRESULT hr = PFTradingClientCancelTradeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTradingTradingClientCancelTradeAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenTradingTests::TestTradingClientGetPlayerTrades(TestContext& testContext)
{
    struct ClientGetPlayerTradesResult : public XAsyncResult
    {
        PFTradingGetPlayerTradesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTradingClientGetPlayerTradesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFTradingGetPlayerTradesResponse( result );
            return ValidatePFTradingGetPlayerTradesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayerTradesResult>>(testContext);

    PlayFab::TradingModels::GetPlayerTradesRequest request;
    FillGetPlayerTradesRequest( &request );
    LogGetPlayerTradesRequest( &request, "TestTradingClientGetPlayerTrades" );
    HRESULT hr = PFTradingClientGetPlayerTradesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTradingTradingClientGetPlayerTradesAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenTradingTests::TestTradingClientGetTradeStatus(TestContext& testContext)
{
    struct ClientGetTradeStatusResult : public XAsyncResult
    {
        PFTradingGetTradeStatusResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTradingClientGetTradeStatusGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFTradingGetTradeStatusResponse( result );
            return ValidatePFTradingGetTradeStatusResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetTradeStatusResult>>(testContext);

    PlayFab::TradingModels::GetTradeStatusRequest request;
    FillGetTradeStatusRequest( &request );
    LogGetTradeStatusRequest( &request, "TestTradingClientGetTradeStatus" );
    HRESULT hr = PFTradingClientGetTradeStatusAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTradingTradingClientGetTradeStatusAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenTradingTests::TestTradingClientOpenTrade(TestContext& testContext)
{
    struct ClientOpenTradeResult : public XAsyncResult
    {
        PFTradingOpenTradeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTradingClientOpenTradeGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFTradingOpenTradeResponse( result );
            return ValidatePFTradingOpenTradeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientOpenTradeResult>>(testContext);

    PlayFab::TradingModels::OpenTradeRequest request;
    FillOpenTradeRequest( &request );
    LogOpenTradeRequest( &request, "TestTradingClientOpenTrade" );
    HRESULT hr = PFTradingClientOpenTradeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTradingTradingClientOpenTradeAsync", hr);
        return;
    }
    async.release(); 
} 

}
