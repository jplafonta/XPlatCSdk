#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenCloudScriptTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenCloudScriptTests::Log(std::stringstream& ss)
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

void AutoGenCloudScriptTests::AddTests()
{
    // Generated tests 
    AddTest("TestCloudScriptExecuteEntityCloudScript", &AutoGenCloudScriptTests::TestCloudScriptExecuteEntityCloudScript);
    AddTest("TestCloudScriptExecuteFunction", &AutoGenCloudScriptTests::TestCloudScriptExecuteFunction);
    AddTest("TestCloudScriptListFunctions", &AutoGenCloudScriptTests::TestCloudScriptListFunctions);
    AddTest("TestCloudScriptListHttpFunctions", &AutoGenCloudScriptTests::TestCloudScriptListHttpFunctions);
    AddTest("TestCloudScriptListQueuedFunctions", &AutoGenCloudScriptTests::TestCloudScriptListQueuedFunctions);
    AddTest("TestCloudScriptPostFunctionResultForEntityTriggeredAction", &AutoGenCloudScriptTests::TestCloudScriptPostFunctionResultForEntityTriggeredAction);
    AddTest("TestCloudScriptPostFunctionResultForFunctionExecution", &AutoGenCloudScriptTests::TestCloudScriptPostFunctionResultForFunctionExecution);
    AddTest("TestCloudScriptPostFunctionResultForPlayerTriggeredAction", &AutoGenCloudScriptTests::TestCloudScriptPostFunctionResultForPlayerTriggeredAction);
    AddTest("TestCloudScriptPostFunctionResultForScheduledTask", &AutoGenCloudScriptTests::TestCloudScriptPostFunctionResultForScheduledTask);
    AddTest("TestCloudScriptRegisterHttpFunction", &AutoGenCloudScriptTests::TestCloudScriptRegisterHttpFunction);
    AddTest("TestCloudScriptRegisterQueuedFunction", &AutoGenCloudScriptTests::TestCloudScriptRegisterQueuedFunction);
    AddTest("TestCloudScriptUnregisterFunction", &AutoGenCloudScriptTests::TestCloudScriptUnregisterFunction);
}

void AutoGenCloudScriptTests::ClassSetUp()
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

void AutoGenCloudScriptTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenCloudScriptTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

void AutoGenCloudScriptTests::TestCloudScriptExecuteEntityCloudScript(TestContext& testContext)
{
    struct ExecuteEntityCloudScriptResult : public XAsyncResult
    {
        PlayFabCloudScriptExecuteCloudScriptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabCloudScriptExecuteEntityCloudScriptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabCloudScriptExecuteCloudScriptResult( result );
            return ValidatePlayFabCloudScriptExecuteCloudScriptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ExecuteEntityCloudScriptResult>>(testContext);

    PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest request;
    FillPlayFabCloudScriptExecuteEntityCloudScriptRequest( &request );
    LogPlayFabCloudScriptExecuteEntityCloudScriptRequest( &request, "TestCloudScriptExecuteEntityCloudScript" );
    HRESULT hr = PlayFabCloudScriptExecuteEntityCloudScriptAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptExecuteEntityCloudScriptAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptExecuteFunction(TestContext& testContext)
{
    struct ExecuteFunctionResult : public XAsyncResult
    {
        PlayFabCloudScriptExecuteFunctionResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabCloudScriptExecuteFunctionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabCloudScriptExecuteFunctionResult( result );
            return ValidatePlayFabCloudScriptExecuteFunctionResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ExecuteFunctionResult>>(testContext);

    PlayFab::CloudScriptModels::ExecuteFunctionRequest request;
    FillPlayFabCloudScriptExecuteFunctionRequest( &request );
    LogPlayFabCloudScriptExecuteFunctionRequest( &request, "TestCloudScriptExecuteFunction" );
    HRESULT hr = PlayFabCloudScriptExecuteFunctionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptExecuteFunctionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptListFunctions(TestContext& testContext)
{
    struct ListFunctionsResult : public XAsyncResult
    {
        PlayFabCloudScriptListFunctionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabCloudScriptListFunctionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabCloudScriptListFunctionsResult( result );
            return ValidatePlayFabCloudScriptListFunctionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListFunctionsResult>>(testContext);

    PlayFab::CloudScriptModels::ListFunctionsRequest request;
    FillPlayFabCloudScriptListFunctionsRequest( &request );
    LogPlayFabCloudScriptListFunctionsRequest( &request, "TestCloudScriptListFunctions" );
    HRESULT hr = PlayFabCloudScriptListFunctionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptListFunctionsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptListHttpFunctions(TestContext& testContext)
{
    struct ListHttpFunctionsResult : public XAsyncResult
    {
        PlayFabCloudScriptListHttpFunctionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabCloudScriptListHttpFunctionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabCloudScriptListHttpFunctionsResult( result );
            return ValidatePlayFabCloudScriptListHttpFunctionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListHttpFunctionsResult>>(testContext);

    PlayFab::CloudScriptModels::ListFunctionsRequest request;
    FillPlayFabCloudScriptListFunctionsRequest( &request );
    LogPlayFabCloudScriptListFunctionsRequest( &request, "TestCloudScriptListHttpFunctions" );
    HRESULT hr = PlayFabCloudScriptListHttpFunctionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptListHttpFunctionsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptListQueuedFunctions(TestContext& testContext)
{
    struct ListQueuedFunctionsResult : public XAsyncResult
    {
        PlayFabCloudScriptListQueuedFunctionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabCloudScriptListQueuedFunctionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabCloudScriptListQueuedFunctionsResult( result );
            return ValidatePlayFabCloudScriptListQueuedFunctionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListQueuedFunctionsResult>>(testContext);

    PlayFab::CloudScriptModels::ListFunctionsRequest request;
    FillPlayFabCloudScriptListFunctionsRequest( &request );
    LogPlayFabCloudScriptListFunctionsRequest( &request, "TestCloudScriptListQueuedFunctions" );
    HRESULT hr = PlayFabCloudScriptListQueuedFunctionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptListQueuedFunctionsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptPostFunctionResultForEntityTriggeredAction(TestContext& testContext)
{
    struct PostFunctionResultForEntityTriggeredActionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<PostFunctionResultForEntityTriggeredActionResult>>(testContext);

    PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest request;
    FillPlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest( &request );
    LogPlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest( &request, "TestCloudScriptPostFunctionResultForEntityTriggeredAction" );
    HRESULT hr = PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptPostFunctionResultForFunctionExecution(TestContext& testContext)
{
    struct PostFunctionResultForFunctionExecutionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<PostFunctionResultForFunctionExecutionResult>>(testContext);

    PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest request;
    FillPlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest( &request );
    LogPlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest( &request, "TestCloudScriptPostFunctionResultForFunctionExecution" );
    HRESULT hr = PlayFabCloudScriptPostFunctionResultForFunctionExecutionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptPostFunctionResultForFunctionExecutionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptPostFunctionResultForPlayerTriggeredAction(TestContext& testContext)
{
    struct PostFunctionResultForPlayerTriggeredActionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<PostFunctionResultForPlayerTriggeredActionResult>>(testContext);

    PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest request;
    FillPlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest( &request );
    LogPlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest( &request, "TestCloudScriptPostFunctionResultForPlayerTriggeredAction" );
    HRESULT hr = PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptPostFunctionResultForScheduledTask(TestContext& testContext)
{
    struct PostFunctionResultForScheduledTaskResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<PostFunctionResultForScheduledTaskResult>>(testContext);

    PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest request;
    FillPlayFabCloudScriptPostFunctionResultForScheduledTaskRequest( &request );
    LogPlayFabCloudScriptPostFunctionResultForScheduledTaskRequest( &request, "TestCloudScriptPostFunctionResultForScheduledTask" );
    HRESULT hr = PlayFabCloudScriptPostFunctionResultForScheduledTaskAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptPostFunctionResultForScheduledTaskAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptRegisterHttpFunction(TestContext& testContext)
{
    struct RegisterHttpFunctionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RegisterHttpFunctionResult>>(testContext);

    PlayFab::CloudScriptModels::RegisterHttpFunctionRequest request;
    FillPlayFabCloudScriptRegisterHttpFunctionRequest( &request );
    LogPlayFabCloudScriptRegisterHttpFunctionRequest( &request, "TestCloudScriptRegisterHttpFunction" );
    HRESULT hr = PlayFabCloudScriptRegisterHttpFunctionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptRegisterHttpFunctionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptRegisterQueuedFunction(TestContext& testContext)
{
    struct RegisterQueuedFunctionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RegisterQueuedFunctionResult>>(testContext);

    PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest request;
    FillPlayFabCloudScriptRegisterQueuedFunctionRequest( &request );
    LogPlayFabCloudScriptRegisterQueuedFunctionRequest( &request, "TestCloudScriptRegisterQueuedFunction" );
    HRESULT hr = PlayFabCloudScriptRegisterQueuedFunctionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptRegisterQueuedFunctionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenCloudScriptTests::TestCloudScriptUnregisterFunction(TestContext& testContext)
{
    struct UnregisterFunctionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnregisterFunctionResult>>(testContext);

    PlayFab::CloudScriptModels::UnregisterFunctionRequest request;
    FillPlayFabCloudScriptUnregisterFunctionRequest( &request );
    LogPlayFabCloudScriptUnregisterFunctionRequest( &request, "TestCloudScriptUnregisterFunction" );
    HRESULT hr = PlayFabCloudScriptUnregisterFunctionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabCloudScriptUnregisterFunctionAsync", hr);
        return;
    }
    async.release(); 
} 


}
