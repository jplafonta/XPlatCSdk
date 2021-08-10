#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenCloudScriptTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenCloudScriptTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenCloudScriptTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenCloudScriptTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestCloudScriptAdminGetCloudScriptRevision", &AutoGenCloudScriptTests::TestCloudScriptAdminGetCloudScriptRevision);
    AddTest("TestCloudScriptAdminGetCloudScriptVersions", &AutoGenCloudScriptTests::TestCloudScriptAdminGetCloudScriptVersions);
    AddTest("TestCloudScriptAdminSetPublishedRevision", &AutoGenCloudScriptTests::TestCloudScriptAdminSetPublishedRevision);
    AddTest("TestCloudScriptAdminUpdateCloudScript", &AutoGenCloudScriptTests::TestCloudScriptAdminUpdateCloudScript);
    AddTest("TestCloudScriptClientExecuteCloudScript", &AutoGenCloudScriptTests::TestCloudScriptClientExecuteCloudScript);
    AddTest("TestCloudScriptServerExecuteCloudScript", &AutoGenCloudScriptTests::TestCloudScriptServerExecuteCloudScript);
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

void AutoGenCloudScriptTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
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


void AutoGenCloudScriptTests::TestCloudScriptAdminGetCloudScriptRevision(TestContext& testContext)
{
    struct AdminGetCloudScriptRevisionResult : public XAsyncResult
    {
        PFCloudScriptGetCloudScriptRevisionResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCloudScriptAdminGetCloudScriptRevisionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCloudScriptGetCloudScriptRevisionResult( result );
            return ValidatePFCloudScriptGetCloudScriptRevisionResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetCloudScriptRevisionResult>>(testContext);

    PlayFab::CloudScriptModels::GetCloudScriptRevisionRequest request;
    FillGetCloudScriptRevisionRequest( &request );
    LogGetCloudScriptRevisionRequest( &request, "TestCloudScriptAdminGetCloudScriptRevision" );
    HRESULT hr = PFCloudScriptAdminGetCloudScriptRevisionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptAdminGetCloudScriptRevisionAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenCloudScriptTests::TestCloudScriptAdminGetCloudScriptVersions(TestContext& testContext)
{
    struct AdminGetCloudScriptVersionsResult : public XAsyncResult
    {
        PFCloudScriptGetCloudScriptVersionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCloudScriptAdminGetCloudScriptVersionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCloudScriptGetCloudScriptVersionsResult( result );
            return ValidatePFCloudScriptGetCloudScriptVersionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetCloudScriptVersionsResult>>(testContext);

    HRESULT hr = PFCloudScriptAdminGetCloudScriptVersionsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptAdminGetCloudScriptVersionsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenCloudScriptTests::TestCloudScriptAdminSetPublishedRevision(TestContext& testContext)
{
    struct AdminSetPublishedRevisionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminSetPublishedRevisionResult>>(testContext);

    PlayFab::CloudScriptModels::SetPublishedRevisionRequest request;
    FillSetPublishedRevisionRequest( &request );
    LogSetPublishedRevisionRequest( &request, "TestCloudScriptAdminSetPublishedRevision" );
    HRESULT hr = PFCloudScriptAdminSetPublishedRevisionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptAdminSetPublishedRevisionAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenCloudScriptTests::TestCloudScriptAdminUpdateCloudScript(TestContext& testContext)
{
    struct AdminUpdateCloudScriptResult : public XAsyncResult
    {
        PFCloudScriptUpdateCloudScriptResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCloudScriptAdminUpdateCloudScriptGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCloudScriptUpdateCloudScriptResult( &result );
            return ValidatePFCloudScriptUpdateCloudScriptResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdateCloudScriptResult>>(testContext);

    PlayFab::CloudScriptModels::UpdateCloudScriptRequest request;
    FillUpdateCloudScriptRequest( &request );
    LogUpdateCloudScriptRequest( &request, "TestCloudScriptAdminUpdateCloudScript" );
    HRESULT hr = PFCloudScriptAdminUpdateCloudScriptAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptAdminUpdateCloudScriptAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenCloudScriptTests::TestCloudScriptClientExecuteCloudScript(TestContext& testContext)
{
    struct ClientExecuteCloudScriptResult : public XAsyncResult
    {
        PFExecuteCloudScriptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCloudScriptClientExecuteCloudScriptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFExecuteCloudScriptResult( result );
            return ValidatePFExecuteCloudScriptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientExecuteCloudScriptResult>>(testContext);

    PlayFab::CloudScriptModels::ExecuteCloudScriptRequest request;
    FillExecuteCloudScriptRequest( &request );
    LogExecuteCloudScriptRequest( &request, "TestCloudScriptClientExecuteCloudScript" );
    HRESULT hr = PFCloudScriptClientExecuteCloudScriptAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptClientExecuteCloudScriptAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenCloudScriptTests::TestCloudScriptServerExecuteCloudScript(TestContext& testContext)
{
    struct ServerExecuteCloudScriptResult : public XAsyncResult
    {
        PFExecuteCloudScriptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCloudScriptServerExecuteCloudScriptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFExecuteCloudScriptResult( result );
            return ValidatePFExecuteCloudScriptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerExecuteCloudScriptResult>>(testContext);

    PlayFab::CloudScriptModels::ExecuteCloudScriptServerRequest request;
    FillExecuteCloudScriptServerRequest( &request );
    LogExecuteCloudScriptServerRequest( &request, "TestCloudScriptServerExecuteCloudScript" );
    HRESULT hr = PFCloudScriptServerExecuteCloudScriptAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptServerExecuteCloudScriptAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenCloudScriptTests::TestCloudScriptExecuteEntityCloudScript(TestContext& testContext)
{
    struct ExecuteEntityCloudScriptResult : public XAsyncResult
    {
        PFExecuteCloudScriptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCloudScriptExecuteEntityCloudScriptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFExecuteCloudScriptResult( result );
            return ValidatePFExecuteCloudScriptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ExecuteEntityCloudScriptResult>>(testContext);

    PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest request;
    FillExecuteEntityCloudScriptRequest( &request );
    LogExecuteEntityCloudScriptRequest( &request, "TestCloudScriptExecuteEntityCloudScript" );
    HRESULT hr = PFCloudScriptExecuteEntityCloudScriptAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptExecuteEntityCloudScriptAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenCloudScriptTests::TestCloudScriptExecuteFunction(TestContext& testContext)
{
    struct ExecuteFunctionResult : public XAsyncResult
    {
        PFCloudScriptExecuteFunctionResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCloudScriptExecuteFunctionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCloudScriptExecuteFunctionResult( result );
            return ValidatePFCloudScriptExecuteFunctionResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ExecuteFunctionResult>>(testContext);

    PlayFab::CloudScriptModels::ExecuteFunctionRequest request;
    FillExecuteFunctionRequest( &request );
    LogExecuteFunctionRequest( &request, "TestCloudScriptExecuteFunction" );
    HRESULT hr = PFCloudScriptExecuteFunctionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptExecuteFunctionAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenCloudScriptTests::TestCloudScriptListFunctions(TestContext& testContext)
{
    struct ListFunctionsResult : public XAsyncResult
    {
        PFCloudScriptListFunctionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCloudScriptListFunctionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCloudScriptListFunctionsResult( result );
            return ValidatePFCloudScriptListFunctionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListFunctionsResult>>(testContext);

    PlayFab::CloudScriptModels::ListFunctionsRequest request;
    FillListFunctionsRequest( &request );
    LogListFunctionsRequest( &request, "TestCloudScriptListFunctions" );
    HRESULT hr = PFCloudScriptListFunctionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptListFunctionsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenCloudScriptTests::TestCloudScriptListHttpFunctions(TestContext& testContext)
{
    struct ListHttpFunctionsResult : public XAsyncResult
    {
        PFCloudScriptListHttpFunctionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCloudScriptListHttpFunctionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCloudScriptListHttpFunctionsResult( result );
            return ValidatePFCloudScriptListHttpFunctionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListHttpFunctionsResult>>(testContext);

    PlayFab::CloudScriptModels::ListFunctionsRequest request;
    FillListFunctionsRequest( &request );
    LogListFunctionsRequest( &request, "TestCloudScriptListHttpFunctions" );
    HRESULT hr = PFCloudScriptListHttpFunctionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptListHttpFunctionsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenCloudScriptTests::TestCloudScriptListQueuedFunctions(TestContext& testContext)
{
    struct ListQueuedFunctionsResult : public XAsyncResult
    {
        PFCloudScriptListQueuedFunctionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCloudScriptListQueuedFunctionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCloudScriptListQueuedFunctionsResult( result );
            return ValidatePFCloudScriptListQueuedFunctionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListQueuedFunctionsResult>>(testContext);

    PlayFab::CloudScriptModels::ListFunctionsRequest request;
    FillListFunctionsRequest( &request );
    LogListFunctionsRequest( &request, "TestCloudScriptListQueuedFunctions" );
    HRESULT hr = PFCloudScriptListQueuedFunctionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptListQueuedFunctionsAsync", hr);
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
    FillPostFunctionResultForEntityTriggeredActionRequest( &request );
    LogPostFunctionResultForEntityTriggeredActionRequest( &request, "TestCloudScriptPostFunctionResultForEntityTriggeredAction" );
    HRESULT hr = PFCloudScriptPostFunctionResultForEntityTriggeredActionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptPostFunctionResultForEntityTriggeredActionAsync", hr);
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
    FillPostFunctionResultForFunctionExecutionRequest( &request );
    LogPostFunctionResultForFunctionExecutionRequest( &request, "TestCloudScriptPostFunctionResultForFunctionExecution" );
    HRESULT hr = PFCloudScriptPostFunctionResultForFunctionExecutionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptPostFunctionResultForFunctionExecutionAsync", hr);
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
    FillPostFunctionResultForPlayerTriggeredActionRequest( &request );
    LogPostFunctionResultForPlayerTriggeredActionRequest( &request, "TestCloudScriptPostFunctionResultForPlayerTriggeredAction" );
    HRESULT hr = PFCloudScriptPostFunctionResultForPlayerTriggeredActionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptPostFunctionResultForPlayerTriggeredActionAsync", hr);
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
    FillPostFunctionResultForScheduledTaskRequest( &request );
    LogPostFunctionResultForScheduledTaskRequest( &request, "TestCloudScriptPostFunctionResultForScheduledTask" );
    HRESULT hr = PFCloudScriptPostFunctionResultForScheduledTaskAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptPostFunctionResultForScheduledTaskAsync", hr);
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
    FillRegisterHttpFunctionRequest( &request );
    LogRegisterHttpFunctionRequest( &request, "TestCloudScriptRegisterHttpFunction" );
    HRESULT hr = PFCloudScriptRegisterHttpFunctionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptRegisterHttpFunctionAsync", hr);
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
    FillRegisterQueuedFunctionRequest( &request );
    LogRegisterQueuedFunctionRequest( &request, "TestCloudScriptRegisterQueuedFunction" );
    HRESULT hr = PFCloudScriptRegisterQueuedFunctionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptRegisterQueuedFunctionAsync", hr);
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
    FillUnregisterFunctionRequest( &request );
    LogUnregisterFunctionRequest( &request, "TestCloudScriptUnregisterFunction" );
    HRESULT hr = PFCloudScriptUnregisterFunctionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCloudScriptCloudScriptUnregisterFunctionAsync", hr);
        return;
    }
    async.release(); 
} 

}
