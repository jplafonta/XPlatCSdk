#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenExperimentationTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenExperimentationTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenExperimentationTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenExperimentationTests::AddTests()
{
    // Generated prerequisites

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

void AutoGenExperimentationTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
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
        PFExperimentationCreateExclusionGroupResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFExperimentationCreateExclusionGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFExperimentationCreateExclusionGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFExperimentationCreateExclusionGroupResult( result );
            return ValidatePFExperimentationCreateExclusionGroupResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateExclusionGroupResult>>(testContext);

    PlayFab::ExperimentationModels::CreateExclusionGroupRequest request;
    FillCreateExclusionGroupRequest( &request );
    LogCreateExclusionGroupRequest( &request, "TestExperimentationCreateExclusionGroup" );
    HRESULT hr = PFExperimentationCreateExclusionGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationCreateExclusionGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenExperimentationTests::TestExperimentationCreateExperiment(TestContext& testContext)
{
    struct CreateExperimentResult : public XAsyncResult
    {
        PFExperimentationCreateExperimentResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFExperimentationCreateExperimentGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFExperimentationCreateExperimentGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFExperimentationCreateExperimentResult( result );
            return ValidatePFExperimentationCreateExperimentResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateExperimentResult>>(testContext);

    PlayFab::ExperimentationModels::CreateExperimentRequest request;
    FillCreateExperimentRequest( &request );
    LogCreateExperimentRequest( &request, "TestExperimentationCreateExperiment" );
    HRESULT hr = PFExperimentationCreateExperimentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationCreateExperimentAsync", hr);
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
    FillDeleteExclusionGroupRequest( &request );
    LogDeleteExclusionGroupRequest( &request, "TestExperimentationDeleteExclusionGroup" );
    HRESULT hr = PFExperimentationDeleteExclusionGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationDeleteExclusionGroupAsync", hr);
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
    FillDeleteExperimentRequest( &request );
    LogDeleteExperimentRequest( &request, "TestExperimentationDeleteExperiment" );
    HRESULT hr = PFExperimentationDeleteExperimentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationDeleteExperimentAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenExperimentationTests::TestExperimentationGetExclusionGroups(TestContext& testContext)
{
    struct GetExclusionGroupsResult : public XAsyncResult
    {
        PFExperimentationGetExclusionGroupsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFExperimentationGetExclusionGroupsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFExperimentationGetExclusionGroupsResult( result );
            return ValidatePFExperimentationGetExclusionGroupsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetExclusionGroupsResult>>(testContext);

    PlayFab::ExperimentationModels::GetExclusionGroupsRequest request;
    FillGetExclusionGroupsRequest( &request );
    LogGetExclusionGroupsRequest( &request, "TestExperimentationGetExclusionGroups" );
    HRESULT hr = PFExperimentationGetExclusionGroupsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationGetExclusionGroupsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenExperimentationTests::TestExperimentationGetExclusionGroupTraffic(TestContext& testContext)
{
    struct GetExclusionGroupTrafficResult : public XAsyncResult
    {
        PFExperimentationGetExclusionGroupTrafficResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFExperimentationGetExclusionGroupTrafficGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFExperimentationGetExclusionGroupTrafficResult( result );
            return ValidatePFExperimentationGetExclusionGroupTrafficResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetExclusionGroupTrafficResult>>(testContext);

    PlayFab::ExperimentationModels::GetExclusionGroupTrafficRequest request;
    FillGetExclusionGroupTrafficRequest( &request );
    LogGetExclusionGroupTrafficRequest( &request, "TestExperimentationGetExclusionGroupTraffic" );
    HRESULT hr = PFExperimentationGetExclusionGroupTrafficAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationGetExclusionGroupTrafficAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenExperimentationTests::TestExperimentationGetExperiments(TestContext& testContext)
{
    struct GetExperimentsResult : public XAsyncResult
    {
        PFExperimentationGetExperimentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFExperimentationGetExperimentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFExperimentationGetExperimentsResult( result );
            return ValidatePFExperimentationGetExperimentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetExperimentsResult>>(testContext);

    PlayFab::ExperimentationModels::GetExperimentsRequest request;
    FillGetExperimentsRequest( &request );
    LogGetExperimentsRequest( &request, "TestExperimentationGetExperiments" );
    HRESULT hr = PFExperimentationGetExperimentsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationGetExperimentsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenExperimentationTests::TestExperimentationGetLatestScorecard(TestContext& testContext)
{
    struct GetLatestScorecardResult : public XAsyncResult
    {
        PFExperimentationGetLatestScorecardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFExperimentationGetLatestScorecardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFExperimentationGetLatestScorecardResult( result );
            return ValidatePFExperimentationGetLatestScorecardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLatestScorecardResult>>(testContext);

    PlayFab::ExperimentationModels::GetLatestScorecardRequest request;
    FillGetLatestScorecardRequest( &request );
    LogGetLatestScorecardRequest( &request, "TestExperimentationGetLatestScorecard" );
    HRESULT hr = PFExperimentationGetLatestScorecardAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationGetLatestScorecardAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenExperimentationTests::TestExperimentationGetTreatmentAssignment(TestContext& testContext)
{
    struct GetTreatmentAssignmentResult : public XAsyncResult
    {
        PFExperimentationGetTreatmentAssignmentResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFExperimentationGetTreatmentAssignmentGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFExperimentationGetTreatmentAssignmentResult( result );
            return ValidatePFExperimentationGetTreatmentAssignmentResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTreatmentAssignmentResult>>(testContext);

    PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest request;
    FillGetTreatmentAssignmentRequest( &request );
    LogGetTreatmentAssignmentRequest( &request, "TestExperimentationGetTreatmentAssignment" );
    HRESULT hr = PFExperimentationGetTreatmentAssignmentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationGetTreatmentAssignmentAsync", hr);
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
    FillStartExperimentRequest( &request );
    LogStartExperimentRequest( &request, "TestExperimentationStartExperiment" );
    HRESULT hr = PFExperimentationStartExperimentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationStartExperimentAsync", hr);
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
    FillStopExperimentRequest( &request );
    LogStopExperimentRequest( &request, "TestExperimentationStopExperiment" );
    HRESULT hr = PFExperimentationStopExperimentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationStopExperimentAsync", hr);
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
    FillUpdateExclusionGroupRequest( &request );
    LogUpdateExclusionGroupRequest( &request, "TestExperimentationUpdateExclusionGroup" );
    HRESULT hr = PFExperimentationUpdateExclusionGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationUpdateExclusionGroupAsync", hr);
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
    FillUpdateExperimentRequest( &request );
    LogUpdateExperimentRequest( &request, "TestExperimentationUpdateExperiment" );
    HRESULT hr = PFExperimentationUpdateExperimentAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFExperimentationExperimentationUpdateExperimentAsync", hr);
        return;
    }
    async.release(); 
} 

}
