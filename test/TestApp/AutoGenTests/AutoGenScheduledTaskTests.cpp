#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenScheduledTaskTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenScheduledTaskTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenScheduledTaskTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenScheduledTaskTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestScheduledTaskAdminAbortTaskInstance", &AutoGenScheduledTaskTests::TestScheduledTaskAdminAbortTaskInstance);
    AddTest("TestScheduledTaskAdminCreateActionsOnPlayersInSegmentTask", &AutoGenScheduledTaskTests::TestScheduledTaskAdminCreateActionsOnPlayersInSegmentTask);
    AddTest("TestScheduledTaskAdminCreateCloudScriptTask", &AutoGenScheduledTaskTests::TestScheduledTaskAdminCreateCloudScriptTask);
    AddTest("TestScheduledTaskAdminCreateInsightsScheduledScalingTask", &AutoGenScheduledTaskTests::TestScheduledTaskAdminCreateInsightsScheduledScalingTask);
    AddTest("TestScheduledTaskAdminDeleteTask", &AutoGenScheduledTaskTests::TestScheduledTaskAdminDeleteTask);
    AddTest("TestScheduledTaskAdminGetActionsOnPlayersInSegmentTaskInstance", &AutoGenScheduledTaskTests::TestScheduledTaskAdminGetActionsOnPlayersInSegmentTaskInstance);
    AddTest("TestScheduledTaskAdminGetCloudScriptTaskInstance", &AutoGenScheduledTaskTests::TestScheduledTaskAdminGetCloudScriptTaskInstance);
    AddTest("TestScheduledTaskAdminGetTaskInstances", &AutoGenScheduledTaskTests::TestScheduledTaskAdminGetTaskInstances);
    AddTest("TestScheduledTaskAdminGetTasks", &AutoGenScheduledTaskTests::TestScheduledTaskAdminGetTasks);
    AddTest("TestScheduledTaskAdminRunTask", &AutoGenScheduledTaskTests::TestScheduledTaskAdminRunTask);
    AddTest("TestScheduledTaskAdminUpdateTask", &AutoGenScheduledTaskTests::TestScheduledTaskAdminUpdateTask);
}

void AutoGenScheduledTaskTests::ClassSetUp()
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

void AutoGenScheduledTaskTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenScheduledTaskTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


void AutoGenScheduledTaskTests::TestScheduledTaskAdminAbortTaskInstance(TestContext& testContext)
{
    struct AdminAbortTaskInstanceResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminAbortTaskInstanceResult>>(testContext);

    PlayFab::ScheduledTaskModels::AbortTaskInstanceRequest request;
    FillAbortTaskInstanceRequest( &request );
    LogAbortTaskInstanceRequest( &request, "TestScheduledTaskAdminAbortTaskInstance" );
    HRESULT hr = PFScheduledTaskAdminAbortTaskInstanceAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminAbortTaskInstanceAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenScheduledTaskTests::TestScheduledTaskAdminCreateActionsOnPlayersInSegmentTask(TestContext& testContext)
{
    struct AdminCreateActionsOnPlayersInSegmentTaskResult : public XAsyncResult
    {
        PFScheduledTaskCreateTaskResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFScheduledTaskAdminCreateActionsOnPlayersInSegmentTaskGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFScheduledTaskAdminCreateActionsOnPlayersInSegmentTaskGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFScheduledTaskCreateTaskResult( result );
            return ValidatePFScheduledTaskCreateTaskResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminCreateActionsOnPlayersInSegmentTaskResult>>(testContext);

    PlayFab::ScheduledTaskModels::CreateActionsOnPlayerSegmentTaskRequest request;
    FillCreateActionsOnPlayerSegmentTaskRequest( &request );
    LogCreateActionsOnPlayerSegmentTaskRequest( &request, "TestScheduledTaskAdminCreateActionsOnPlayersInSegmentTask" );
    HRESULT hr = PFScheduledTaskAdminCreateActionsOnPlayersInSegmentTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminCreateActionsOnPlayersInSegmentTaskAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenScheduledTaskTests::TestScheduledTaskAdminCreateCloudScriptTask(TestContext& testContext)
{
    struct AdminCreateCloudScriptTaskResult : public XAsyncResult
    {
        PFScheduledTaskCreateTaskResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFScheduledTaskAdminCreateCloudScriptTaskGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFScheduledTaskAdminCreateCloudScriptTaskGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFScheduledTaskCreateTaskResult( result );
            return ValidatePFScheduledTaskCreateTaskResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminCreateCloudScriptTaskResult>>(testContext);

    PlayFab::ScheduledTaskModels::CreateCloudScriptTaskRequest request;
    FillCreateCloudScriptTaskRequest( &request );
    LogCreateCloudScriptTaskRequest( &request, "TestScheduledTaskAdminCreateCloudScriptTask" );
    HRESULT hr = PFScheduledTaskAdminCreateCloudScriptTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminCreateCloudScriptTaskAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenScheduledTaskTests::TestScheduledTaskAdminCreateInsightsScheduledScalingTask(TestContext& testContext)
{
    struct AdminCreateInsightsScheduledScalingTaskResult : public XAsyncResult
    {
        PFScheduledTaskCreateTaskResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFScheduledTaskAdminCreateInsightsScheduledScalingTaskGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFScheduledTaskAdminCreateInsightsScheduledScalingTaskGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFScheduledTaskCreateTaskResult( result );
            return ValidatePFScheduledTaskCreateTaskResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminCreateInsightsScheduledScalingTaskResult>>(testContext);

    PlayFab::ScheduledTaskModels::CreateInsightsScheduledScalingTaskRequest request;
    FillCreateInsightsScheduledScalingTaskRequest( &request );
    LogCreateInsightsScheduledScalingTaskRequest( &request, "TestScheduledTaskAdminCreateInsightsScheduledScalingTask" );
    HRESULT hr = PFScheduledTaskAdminCreateInsightsScheduledScalingTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminCreateInsightsScheduledScalingTaskAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenScheduledTaskTests::TestScheduledTaskAdminDeleteTask(TestContext& testContext)
{
    struct AdminDeleteTaskResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminDeleteTaskResult>>(testContext);

    PlayFab::ScheduledTaskModels::DeleteTaskRequest request;
    FillDeleteTaskRequest( &request );
    LogDeleteTaskRequest( &request, "TestScheduledTaskAdminDeleteTask" );
    HRESULT hr = PFScheduledTaskAdminDeleteTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminDeleteTaskAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenScheduledTaskTests::TestScheduledTaskAdminGetActionsOnPlayersInSegmentTaskInstance(TestContext& testContext)
{
    struct AdminGetActionsOnPlayersInSegmentTaskInstanceResult : public XAsyncResult
    {
        PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFScheduledTaskAdminGetActionsOnPlayersInSegmentTaskInstanceGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult( result );
            return ValidatePFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetActionsOnPlayersInSegmentTaskInstanceResult>>(testContext);

    PlayFab::ScheduledTaskModels::GetTaskInstanceRequest request;
    FillGetTaskInstanceRequest( &request );
    LogGetTaskInstanceRequest( &request, "TestScheduledTaskAdminGetActionsOnPlayersInSegmentTaskInstance" );
    HRESULT hr = PFScheduledTaskAdminGetActionsOnPlayersInSegmentTaskInstanceAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminGetActionsOnPlayersInSegmentTaskInstanceAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenScheduledTaskTests::TestScheduledTaskAdminGetCloudScriptTaskInstance(TestContext& testContext)
{
    struct AdminGetCloudScriptTaskInstanceResult : public XAsyncResult
    {
        PFScheduledTaskGetCloudScriptTaskInstanceResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFScheduledTaskAdminGetCloudScriptTaskInstanceGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFScheduledTaskGetCloudScriptTaskInstanceResult( result );
            return ValidatePFScheduledTaskGetCloudScriptTaskInstanceResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetCloudScriptTaskInstanceResult>>(testContext);

    PlayFab::ScheduledTaskModels::GetTaskInstanceRequest request;
    FillGetTaskInstanceRequest( &request );
    LogGetTaskInstanceRequest( &request, "TestScheduledTaskAdminGetCloudScriptTaskInstance" );
    HRESULT hr = PFScheduledTaskAdminGetCloudScriptTaskInstanceAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminGetCloudScriptTaskInstanceAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenScheduledTaskTests::TestScheduledTaskAdminGetTaskInstances(TestContext& testContext)
{
    struct AdminGetTaskInstancesResult : public XAsyncResult
    {
        PFScheduledTaskGetTaskInstancesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFScheduledTaskAdminGetTaskInstancesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFScheduledTaskGetTaskInstancesResult( result );
            return ValidatePFScheduledTaskGetTaskInstancesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetTaskInstancesResult>>(testContext);

    PlayFab::ScheduledTaskModels::GetTaskInstancesRequest request;
    FillGetTaskInstancesRequest( &request );
    LogGetTaskInstancesRequest( &request, "TestScheduledTaskAdminGetTaskInstances" );
    HRESULT hr = PFScheduledTaskAdminGetTaskInstancesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminGetTaskInstancesAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenScheduledTaskTests::TestScheduledTaskAdminGetTasks(TestContext& testContext)
{
    struct AdminGetTasksResult : public XAsyncResult
    {
        PFScheduledTaskGetTasksResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFScheduledTaskAdminGetTasksGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFScheduledTaskGetTasksResult( result );
            return ValidatePFScheduledTaskGetTasksResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetTasksResult>>(testContext);

    PlayFab::ScheduledTaskModels::GetTasksRequest request;
    FillGetTasksRequest( &request );
    LogGetTasksRequest( &request, "TestScheduledTaskAdminGetTasks" );
    HRESULT hr = PFScheduledTaskAdminGetTasksAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminGetTasksAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenScheduledTaskTests::TestScheduledTaskAdminRunTask(TestContext& testContext)
{
    struct AdminRunTaskResult : public XAsyncResult
    {
        PFScheduledTaskRunTaskResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFScheduledTaskAdminRunTaskGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFScheduledTaskAdminRunTaskGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFScheduledTaskRunTaskResult( result );
            return ValidatePFScheduledTaskRunTaskResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminRunTaskResult>>(testContext);

    PlayFab::ScheduledTaskModels::RunTaskRequest request;
    FillRunTaskRequest( &request );
    LogRunTaskRequest( &request, "TestScheduledTaskAdminRunTask" );
    HRESULT hr = PFScheduledTaskAdminRunTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminRunTaskAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenScheduledTaskTests::TestScheduledTaskAdminUpdateTask(TestContext& testContext)
{
    struct AdminUpdateTaskResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminUpdateTaskResult>>(testContext);

    PlayFab::ScheduledTaskModels::UpdateTaskRequest request;
    FillUpdateTaskRequest( &request );
    LogUpdateTaskRequest( &request, "TestScheduledTaskAdminUpdateTask" );
    HRESULT hr = PFScheduledTaskAdminUpdateTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFScheduledTaskScheduledTaskAdminUpdateTaskAsync", hr);
        return;
    }
    async.release(); 
} 

}
