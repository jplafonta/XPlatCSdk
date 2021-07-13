#pragma once

#include "TestCase.h"
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>
#include "../../../code/source/Client/InsightsDataModels.h"

namespace PlayFabUnit
{

class AutoGenInsightsTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);
    void TestInsightsGetDetails(TestContext& testContext); 
    void TestInsightsGetLimits(TestContext& testContext); 
    void TestInsightsGetOperationStatus(TestContext& testContext); 
    void TestInsightsGetPendingOperations(TestContext& testContext); 
    void TestInsightsSetPerformance(TestContext& testContext); 
    void TestInsightsSetStorageRetention(TestContext& testContext); 


protected:
    void AddTests();

    static void LogPlayFabInsightsInsightsEmptyRequest( PlayFab::InsightsModels::InsightsEmptyRequest* request, const char* testName );
    static void FillPlayFabInsightsInsightsEmptyRequest( PlayFab::InsightsModels::InsightsEmptyRequest* request );
    static HRESULT LogPlayFabInsightsInsightsGetDetailsResponse( PlayFabInsightsInsightsGetDetailsResponse* result );
    static HRESULT ValidatePlayFabInsightsInsightsGetDetailsResponse( PlayFabInsightsInsightsGetDetailsResponse* result );
    static HRESULT LogPlayFabInsightsInsightsGetLimitsResponse( PlayFabInsightsInsightsGetLimitsResponse* result );
    static HRESULT ValidatePlayFabInsightsInsightsGetLimitsResponse( PlayFabInsightsInsightsGetLimitsResponse* result );
    static void LogPlayFabInsightsInsightsGetOperationStatusRequest( PlayFab::InsightsModels::InsightsGetOperationStatusRequest* request, const char* testName );
    static void FillPlayFabInsightsInsightsGetOperationStatusRequest( PlayFab::InsightsModels::InsightsGetOperationStatusRequest* request );
    static HRESULT LogPlayFabInsightsInsightsGetOperationStatusResponse( PlayFabInsightsInsightsGetOperationStatusResponse* result );
    static HRESULT ValidatePlayFabInsightsInsightsGetOperationStatusResponse( PlayFabInsightsInsightsGetOperationStatusResponse* result );
    static void LogPlayFabInsightsInsightsGetPendingOperationsRequest( PlayFab::InsightsModels::InsightsGetPendingOperationsRequest* request, const char* testName );
    static void FillPlayFabInsightsInsightsGetPendingOperationsRequest( PlayFab::InsightsModels::InsightsGetPendingOperationsRequest* request );
    static HRESULT LogPlayFabInsightsInsightsGetPendingOperationsResponse( PlayFabInsightsInsightsGetPendingOperationsResponse* result );
    static HRESULT ValidatePlayFabInsightsInsightsGetPendingOperationsResponse( PlayFabInsightsInsightsGetPendingOperationsResponse* result );
    static void LogPlayFabInsightsInsightsSetPerformanceRequest( PlayFab::InsightsModels::InsightsSetPerformanceRequest* request, const char* testName );
    static void FillPlayFabInsightsInsightsSetPerformanceRequest( PlayFab::InsightsModels::InsightsSetPerformanceRequest* request );
    static HRESULT LogPlayFabInsightsInsightsOperationResponse( PlayFabInsightsInsightsOperationResponse* result );
    static HRESULT ValidatePlayFabInsightsInsightsOperationResponse( PlayFabInsightsInsightsOperationResponse* result );
    static void LogPlayFabInsightsInsightsSetStorageRetentionRequest( PlayFab::InsightsModels::InsightsSetStorageRetentionRequest* request, const char* testName );
    static void FillPlayFabInsightsInsightsSetStorageRetentionRequest( PlayFab::InsightsModels::InsightsSetStorageRetentionRequest* request );


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
