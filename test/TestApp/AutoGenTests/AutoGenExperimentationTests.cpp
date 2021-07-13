#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenExperimentationTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenExperimentationTests::Log(std::stringstream& ss)
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

void AutoGenExperimentationTests::AddTests()
{
    // Generated tests 
    AddTest("TestExperimentationCreateExclusionGroup", &AutoGenExperimentationTests::TestExperimentationCreateExclusionGroup);
    AddTest("TestExperimentationCreateExperiment", &AutoGenExperimentationTests::TestExperimentationCreateExperiment);
    AddTest("TestExperimentationDeleteExclusionGroup", &AutoGenExperimentationTests::TestExperimentationDeleteExclusionGroup);
    AddTest("TestExperimentationDeleteExperiment", &AutoGenExperimentationTests::TestExperimentationDeleteExperiment);
    AddTest("TestExperimentationGetExclusionGroups", &AutoGenExperimentationTests::TestExperimentationGetExclusionGroups);
    AddTest("TestExperimentationGetExclusionGroupTraffic", &AutoGenExperimentationTests::TestExperimentationGetExclusionGroupTraffic);
    AddTest("TestExperimentationGetExperiments", &AutoGenExperimentationTests::TestExperimentationGetExperiments);
    AddTest("TestExperimentationGetLatestScorecard", &AutoGenExperimentationTests::TestExperimentationGetLatestScorecard);
    AddTest("TestExperimentationGetTreatmentAssignment", &AutoGenExperimentationTests::TestExperimentationGetTreatmentAssignment);
    AddTest("TestExperimentationStartExperiment", &AutoGenExperimentationTests::TestExperimentationStartExperiment);
    AddTest("TestExperimentationStopExperiment", &AutoGenExperimentationTests::TestExperimentationStopExperiment);
    AddTest("TestExperimentationUpdateExclusionGroup", &AutoGenExperimentationTests::TestExperimentationUpdateExclusionGroup);
    AddTest("TestExperimentationUpdateExperiment", &AutoGenExperimentationTests::TestExperimentationUpdateExperiment);
}

void AutoGenExperimentationTests::ClassSetUp()
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

void AutoGenExperimentationTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenExperimentationTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

void AutoGenExperimentationTests::TestExperimentationCreateExclusionGroup(TestContext& testContext)
{
    struct CreateExclusionGroupResult : public XAsyncResult
    {
        PlayFabExperimentationCreateExclusionGroupResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabExperimentationCreateExclusionGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabExperimentationCreateExclusionGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabExperimentationCreateExclusionGroupResult( result );
            return ValidatePlayFabExperimentationCreateExclusionGroupResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateExclusionGroupResult>>(testContext);

    PlayFab::ExperimentationModels::CreateExclusionGroupRequest request;
    FillPlayFabExperimentationCreateExclusionGroupRequest( &request );
    LogPlayFabExperimentationCreateExclusionGroupRequest( &request, "TestExperimentationCreateExclusionGroup" );
    HRESULT hr = PlayFabExperimentationCreateExclusionGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationCreateExclusionGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationCreateExperiment(TestContext& testContext)
{
    struct CreateExperimentResult : public XAsyncResult
    {
        PlayFabExperimentationCreateExperimentResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabExperimentationCreateExperimentGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabExperimentationCreateExperimentGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabExperimentationCreateExperimentResult( result );
            return ValidatePlayFabExperimentationCreateExperimentResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateExperimentResult>>(testContext);

    PlayFab::ExperimentationModels::CreateExperimentRequest request;
    FillPlayFabExperimentationCreateExperimentRequest( &request );
    LogPlayFabExperimentationCreateExperimentRequest( &request, "TestExperimentationCreateExperiment" );
    HRESULT hr = PlayFabExperimentationCreateExperimentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationCreateExperimentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationDeleteExclusionGroup(TestContext& testContext)
{
    struct DeleteExclusionGroupResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteExclusionGroupResult>>(testContext);

    PlayFab::ExperimentationModels::DeleteExclusionGroupRequest request;
    FillPlayFabExperimentationDeleteExclusionGroupRequest( &request );
    LogPlayFabExperimentationDeleteExclusionGroupRequest( &request, "TestExperimentationDeleteExclusionGroup" );
    HRESULT hr = PlayFabExperimentationDeleteExclusionGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationDeleteExclusionGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationDeleteExperiment(TestContext& testContext)
{
    struct DeleteExperimentResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteExperimentResult>>(testContext);

    PlayFab::ExperimentationModels::DeleteExperimentRequest request;
    FillPlayFabExperimentationDeleteExperimentRequest( &request );
    LogPlayFabExperimentationDeleteExperimentRequest( &request, "TestExperimentationDeleteExperiment" );
    HRESULT hr = PlayFabExperimentationDeleteExperimentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationDeleteExperimentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationGetExclusionGroups(TestContext& testContext)
{
    struct GetExclusionGroupsResult : public XAsyncResult
    {
        PlayFabExperimentationGetExclusionGroupsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabExperimentationGetExclusionGroupsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabExperimentationGetExclusionGroupsResult( result );
            return ValidatePlayFabExperimentationGetExclusionGroupsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetExclusionGroupsResult>>(testContext);

    PlayFab::ExperimentationModels::GetExclusionGroupsRequest request;
    FillPlayFabExperimentationGetExclusionGroupsRequest( &request );
    LogPlayFabExperimentationGetExclusionGroupsRequest( &request, "TestExperimentationGetExclusionGroups" );
    HRESULT hr = PlayFabExperimentationGetExclusionGroupsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationGetExclusionGroupsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationGetExclusionGroupTraffic(TestContext& testContext)
{
    struct GetExclusionGroupTrafficResult : public XAsyncResult
    {
        PlayFabExperimentationGetExclusionGroupTrafficResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabExperimentationGetExclusionGroupTrafficGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabExperimentationGetExclusionGroupTrafficResult( result );
            return ValidatePlayFabExperimentationGetExclusionGroupTrafficResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetExclusionGroupTrafficResult>>(testContext);

    PlayFab::ExperimentationModels::GetExclusionGroupTrafficRequest request;
    FillPlayFabExperimentationGetExclusionGroupTrafficRequest( &request );
    LogPlayFabExperimentationGetExclusionGroupTrafficRequest( &request, "TestExperimentationGetExclusionGroupTraffic" );
    HRESULT hr = PlayFabExperimentationGetExclusionGroupTrafficAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationGetExclusionGroupTrafficAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationGetExperiments(TestContext& testContext)
{
    struct GetExperimentsResult : public XAsyncResult
    {
        PlayFabExperimentationGetExperimentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabExperimentationGetExperimentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabExperimentationGetExperimentsResult( result );
            return ValidatePlayFabExperimentationGetExperimentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetExperimentsResult>>(testContext);

    PlayFab::ExperimentationModels::GetExperimentsRequest request;
    FillPlayFabExperimentationGetExperimentsRequest( &request );
    LogPlayFabExperimentationGetExperimentsRequest( &request, "TestExperimentationGetExperiments" );
    HRESULT hr = PlayFabExperimentationGetExperimentsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationGetExperimentsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationGetLatestScorecard(TestContext& testContext)
{
    struct GetLatestScorecardResult : public XAsyncResult
    {
        PlayFabExperimentationGetLatestScorecardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabExperimentationGetLatestScorecardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabExperimentationGetLatestScorecardResult( result );
            return ValidatePlayFabExperimentationGetLatestScorecardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLatestScorecardResult>>(testContext);

    PlayFab::ExperimentationModels::GetLatestScorecardRequest request;
    FillPlayFabExperimentationGetLatestScorecardRequest( &request );
    LogPlayFabExperimentationGetLatestScorecardRequest( &request, "TestExperimentationGetLatestScorecard" );
    HRESULT hr = PlayFabExperimentationGetLatestScorecardAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationGetLatestScorecardAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationGetTreatmentAssignment(TestContext& testContext)
{
    struct GetTreatmentAssignmentResult : public XAsyncResult
    {
        PlayFabExperimentationGetTreatmentAssignmentResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabExperimentationGetTreatmentAssignmentGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabExperimentationGetTreatmentAssignmentResult( result );
            return ValidatePlayFabExperimentationGetTreatmentAssignmentResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTreatmentAssignmentResult>>(testContext);

    PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest request;
    FillPlayFabExperimentationGetTreatmentAssignmentRequest( &request );
    LogPlayFabExperimentationGetTreatmentAssignmentRequest( &request, "TestExperimentationGetTreatmentAssignment" );
    HRESULT hr = PlayFabExperimentationGetTreatmentAssignmentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationGetTreatmentAssignmentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationStartExperiment(TestContext& testContext)
{
    struct StartExperimentResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<StartExperimentResult>>(testContext);

    PlayFab::ExperimentationModels::StartExperimentRequest request;
    FillPlayFabExperimentationStartExperimentRequest( &request );
    LogPlayFabExperimentationStartExperimentRequest( &request, "TestExperimentationStartExperiment" );
    HRESULT hr = PlayFabExperimentationStartExperimentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationStartExperimentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationStopExperiment(TestContext& testContext)
{
    struct StopExperimentResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<StopExperimentResult>>(testContext);

    PlayFab::ExperimentationModels::StopExperimentRequest request;
    FillPlayFabExperimentationStopExperimentRequest( &request );
    LogPlayFabExperimentationStopExperimentRequest( &request, "TestExperimentationStopExperiment" );
    HRESULT hr = PlayFabExperimentationStopExperimentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationStopExperimentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationUpdateExclusionGroup(TestContext& testContext)
{
    struct UpdateExclusionGroupResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateExclusionGroupResult>>(testContext);

    PlayFab::ExperimentationModels::UpdateExclusionGroupRequest request;
    FillPlayFabExperimentationUpdateExclusionGroupRequest( &request );
    LogPlayFabExperimentationUpdateExclusionGroupRequest( &request, "TestExperimentationUpdateExclusionGroup" );
    HRESULT hr = PlayFabExperimentationUpdateExclusionGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationUpdateExclusionGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenExperimentationTests::TestExperimentationUpdateExperiment(TestContext& testContext)
{
    struct UpdateExperimentResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateExperimentResult>>(testContext);

    PlayFab::ExperimentationModels::UpdateExperimentRequest request;
    FillPlayFabExperimentationUpdateExperimentRequest( &request );
    LogPlayFabExperimentationUpdateExperimentRequest( &request, "TestExperimentationUpdateExperiment" );
    HRESULT hr = PlayFabExperimentationUpdateExperimentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabExperimentationUpdateExperimentAsync", hr);
        return;
    }
    async.release(); 
} 


}
