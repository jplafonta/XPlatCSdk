#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Experimentation/ExperimentationDataModels.h"

namespace PlayFabUnit
{

class AutoGenExperimentationTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestExperimentationCreateExclusionGroup(TestContext& testContext);

    void TestExperimentationCreateExperiment(TestContext& testContext);

    void TestExperimentationDeleteExclusionGroup(TestContext& testContext);

    void TestExperimentationDeleteExperiment(TestContext& testContext);

    void TestExperimentationGetExclusionGroups(TestContext& testContext);

    void TestExperimentationGetExclusionGroupTraffic(TestContext& testContext);

    void TestExperimentationGetExperiments(TestContext& testContext);

    void TestExperimentationGetLatestScorecard(TestContext& testContext);

    void TestExperimentationGetTreatmentAssignment(TestContext& testContext);

    void TestExperimentationStartExperiment(TestContext& testContext);

    void TestExperimentationStopExperiment(TestContext& testContext);

    void TestExperimentationUpdateExclusionGroup(TestContext& testContext);

    void TestExperimentationUpdateExperiment(TestContext& testContext);


protected:
    void AddTests();

    static void LogCreateExclusionGroupRequest( PlayFab::ExperimentationModels::CreateExclusionGroupRequest* request, const char* testName );
    static void FillCreateExclusionGroupRequest( PlayFab::ExperimentationModels::CreateExclusionGroupRequest* request );
    static HRESULT LogPFExperimentationCreateExclusionGroupResult( PFExperimentationCreateExclusionGroupResult* result );
    static HRESULT ValidatePFExperimentationCreateExclusionGroupResult( PFExperimentationCreateExclusionGroupResult* result );

    static void LogCreateExperimentRequest( PlayFab::ExperimentationModels::CreateExperimentRequest* request, const char* testName );
    static void FillCreateExperimentRequest( PlayFab::ExperimentationModels::CreateExperimentRequest* request );
    static HRESULT LogPFExperimentationCreateExperimentResult( PFExperimentationCreateExperimentResult* result );
    static HRESULT ValidatePFExperimentationCreateExperimentResult( PFExperimentationCreateExperimentResult* result );

    static void LogDeleteExclusionGroupRequest( PlayFab::ExperimentationModels::DeleteExclusionGroupRequest* request, const char* testName );
    static void FillDeleteExclusionGroupRequest( PlayFab::ExperimentationModels::DeleteExclusionGroupRequest* request );

    static void LogDeleteExperimentRequest( PlayFab::ExperimentationModels::DeleteExperimentRequest* request, const char* testName );
    static void FillDeleteExperimentRequest( PlayFab::ExperimentationModels::DeleteExperimentRequest* request );

    static void LogGetExclusionGroupsRequest( PlayFab::ExperimentationModels::GetExclusionGroupsRequest* request, const char* testName );
    static void FillGetExclusionGroupsRequest( PlayFab::ExperimentationModels::GetExclusionGroupsRequest* request );
    static HRESULT LogPFExperimentationGetExclusionGroupsResult( PFExperimentationGetExclusionGroupsResult* result );
    static HRESULT ValidatePFExperimentationGetExclusionGroupsResult( PFExperimentationGetExclusionGroupsResult* result );

    static void LogGetExclusionGroupTrafficRequest( PlayFab::ExperimentationModels::GetExclusionGroupTrafficRequest* request, const char* testName );
    static void FillGetExclusionGroupTrafficRequest( PlayFab::ExperimentationModels::GetExclusionGroupTrafficRequest* request );
    static HRESULT LogPFExperimentationGetExclusionGroupTrafficResult( PFExperimentationGetExclusionGroupTrafficResult* result );
    static HRESULT ValidatePFExperimentationGetExclusionGroupTrafficResult( PFExperimentationGetExclusionGroupTrafficResult* result );

    static void LogGetExperimentsRequest( PlayFab::ExperimentationModels::GetExperimentsRequest* request, const char* testName );
    static void FillGetExperimentsRequest( PlayFab::ExperimentationModels::GetExperimentsRequest* request );
    static HRESULT LogPFExperimentationGetExperimentsResult( PFExperimentationGetExperimentsResult* result );
    static HRESULT ValidatePFExperimentationGetExperimentsResult( PFExperimentationGetExperimentsResult* result );

    static void LogGetLatestScorecardRequest( PlayFab::ExperimentationModels::GetLatestScorecardRequest* request, const char* testName );
    static void FillGetLatestScorecardRequest( PlayFab::ExperimentationModels::GetLatestScorecardRequest* request );
    static HRESULT LogPFExperimentationGetLatestScorecardResult( PFExperimentationGetLatestScorecardResult* result );
    static HRESULT ValidatePFExperimentationGetLatestScorecardResult( PFExperimentationGetLatestScorecardResult* result );

    static void LogGetTreatmentAssignmentRequest( PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest* request, const char* testName );
    static void FillGetTreatmentAssignmentRequest( PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest* request );
    static HRESULT LogPFExperimentationGetTreatmentAssignmentResult( PFExperimentationGetTreatmentAssignmentResult* result );
    static HRESULT ValidatePFExperimentationGetTreatmentAssignmentResult( PFExperimentationGetTreatmentAssignmentResult* result );

    static void LogStartExperimentRequest( PlayFab::ExperimentationModels::StartExperimentRequest* request, const char* testName );
    static void FillStartExperimentRequest( PlayFab::ExperimentationModels::StartExperimentRequest* request );

    static void LogStopExperimentRequest( PlayFab::ExperimentationModels::StopExperimentRequest* request, const char* testName );
    static void FillStopExperimentRequest( PlayFab::ExperimentationModels::StopExperimentRequest* request );

    static void LogUpdateExclusionGroupRequest( PlayFab::ExperimentationModels::UpdateExclusionGroupRequest* request, const char* testName );
    static void FillUpdateExclusionGroupRequest( PlayFab::ExperimentationModels::UpdateExclusionGroupRequest* request );

    static void LogUpdateExperimentRequest( PlayFab::ExperimentationModels::UpdateExperimentRequest* request, const char* testName );
    static void FillUpdateExperimentRequest( PlayFab::ExperimentationModels::UpdateExperimentRequest* request );

    struct ExperimentationTestData
    {
        ~ExperimentationTestData()
        {

        }

    };

    static ExperimentationTestData testData;

public:
    PFStateHandle stateHandle{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle2{ nullptr };
    PFEntityHandle entityHandle2{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo2{ nullptr };
    PFEntityHandle titleEntityHandle{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
