#pragma once

#include "TestCase.h"
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>
#include "../../../code/source/Client/ExperimentationDataModels.h"

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

    static void LogPlayFabExperimentationCreateExclusionGroupRequest( PlayFab::ExperimentationModels::CreateExclusionGroupRequest* request, const char* testName );
    static void FillPlayFabExperimentationCreateExclusionGroupRequest( PlayFab::ExperimentationModels::CreateExclusionGroupRequest* request );
    static HRESULT LogPlayFabExperimentationCreateExclusionGroupResult( PlayFabExperimentationCreateExclusionGroupResult* result );
    static HRESULT ValidatePlayFabExperimentationCreateExclusionGroupResult( PlayFabExperimentationCreateExclusionGroupResult* result );
    static void LogPlayFabExperimentationCreateExperimentRequest( PlayFab::ExperimentationModels::CreateExperimentRequest* request, const char* testName );
    static void FillPlayFabExperimentationCreateExperimentRequest( PlayFab::ExperimentationModels::CreateExperimentRequest* request );
    static HRESULT LogPlayFabExperimentationCreateExperimentResult( PlayFabExperimentationCreateExperimentResult* result );
    static HRESULT ValidatePlayFabExperimentationCreateExperimentResult( PlayFabExperimentationCreateExperimentResult* result );
    static void LogPlayFabExperimentationDeleteExclusionGroupRequest( PlayFab::ExperimentationModels::DeleteExclusionGroupRequest* request, const char* testName );
    static void FillPlayFabExperimentationDeleteExclusionGroupRequest( PlayFab::ExperimentationModels::DeleteExclusionGroupRequest* request );
    static void LogPlayFabExperimentationDeleteExperimentRequest( PlayFab::ExperimentationModels::DeleteExperimentRequest* request, const char* testName );
    static void FillPlayFabExperimentationDeleteExperimentRequest( PlayFab::ExperimentationModels::DeleteExperimentRequest* request );
    static void LogPlayFabExperimentationGetExclusionGroupsRequest( PlayFab::ExperimentationModels::GetExclusionGroupsRequest* request, const char* testName );
    static void FillPlayFabExperimentationGetExclusionGroupsRequest( PlayFab::ExperimentationModels::GetExclusionGroupsRequest* request );
    static HRESULT LogPlayFabExperimentationGetExclusionGroupsResult( PlayFabExperimentationGetExclusionGroupsResult* result );
    static HRESULT ValidatePlayFabExperimentationGetExclusionGroupsResult( PlayFabExperimentationGetExclusionGroupsResult* result );
    static void LogPlayFabExperimentationGetExclusionGroupTrafficRequest( PlayFab::ExperimentationModels::GetExclusionGroupTrafficRequest* request, const char* testName );
    static void FillPlayFabExperimentationGetExclusionGroupTrafficRequest( PlayFab::ExperimentationModels::GetExclusionGroupTrafficRequest* request );
    static HRESULT LogPlayFabExperimentationGetExclusionGroupTrafficResult( PlayFabExperimentationGetExclusionGroupTrafficResult* result );
    static HRESULT ValidatePlayFabExperimentationGetExclusionGroupTrafficResult( PlayFabExperimentationGetExclusionGroupTrafficResult* result );
    static void LogPlayFabExperimentationGetExperimentsRequest( PlayFab::ExperimentationModels::GetExperimentsRequest* request, const char* testName );
    static void FillPlayFabExperimentationGetExperimentsRequest( PlayFab::ExperimentationModels::GetExperimentsRequest* request );
    static HRESULT LogPlayFabExperimentationGetExperimentsResult( PlayFabExperimentationGetExperimentsResult* result );
    static HRESULT ValidatePlayFabExperimentationGetExperimentsResult( PlayFabExperimentationGetExperimentsResult* result );
    static void LogPlayFabExperimentationGetLatestScorecardRequest( PlayFab::ExperimentationModels::GetLatestScorecardRequest* request, const char* testName );
    static void FillPlayFabExperimentationGetLatestScorecardRequest( PlayFab::ExperimentationModels::GetLatestScorecardRequest* request );
    static HRESULT LogPlayFabExperimentationGetLatestScorecardResult( PlayFabExperimentationGetLatestScorecardResult* result );
    static HRESULT ValidatePlayFabExperimentationGetLatestScorecardResult( PlayFabExperimentationGetLatestScorecardResult* result );
    static void LogPlayFabExperimentationGetTreatmentAssignmentRequest( PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest* request, const char* testName );
    static void FillPlayFabExperimentationGetTreatmentAssignmentRequest( PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest* request );
    static HRESULT LogPlayFabExperimentationGetTreatmentAssignmentResult( PlayFabExperimentationGetTreatmentAssignmentResult* result );
    static HRESULT ValidatePlayFabExperimentationGetTreatmentAssignmentResult( PlayFabExperimentationGetTreatmentAssignmentResult* result );
    static void LogPlayFabExperimentationStartExperimentRequest( PlayFab::ExperimentationModels::StartExperimentRequest* request, const char* testName );
    static void FillPlayFabExperimentationStartExperimentRequest( PlayFab::ExperimentationModels::StartExperimentRequest* request );
    static void LogPlayFabExperimentationStopExperimentRequest( PlayFab::ExperimentationModels::StopExperimentRequest* request, const char* testName );
    static void FillPlayFabExperimentationStopExperimentRequest( PlayFab::ExperimentationModels::StopExperimentRequest* request );
    static void LogPlayFabExperimentationUpdateExclusionGroupRequest( PlayFab::ExperimentationModels::UpdateExclusionGroupRequest* request, const char* testName );
    static void FillPlayFabExperimentationUpdateExclusionGroupRequest( PlayFab::ExperimentationModels::UpdateExclusionGroupRequest* request );
    static void LogPlayFabExperimentationUpdateExperimentRequest( PlayFab::ExperimentationModels::UpdateExperimentRequest* request, const char* testName );
    static void FillPlayFabExperimentationUpdateExperimentRequest( PlayFab::ExperimentationModels::UpdateExperimentRequest* request );


public:
    PlayFabStateHandle stateHandle{ nullptr };
    PlayFabEntityHandle entityHandle{ nullptr };
    PlayFabGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
