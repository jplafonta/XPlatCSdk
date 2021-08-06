#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Analytics/AnalyticsDataModels.h"

namespace PlayFabUnit
{

class AutoGenAnalyticsTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestAnalyticsClientReportDeviceInfo(TestContext& testContext); 
    void TestAnalyticsClientWriteCharacterEvent(TestContext& testContext); 
    void TestAnalyticsClientWritePlayerEvent(TestContext& testContext); 
    void TestAnalyticsClientWriteTitleEvent(TestContext& testContext); 
    void TestAnalyticsServerWriteCharacterEvent(TestContext& testContext); 
    void TestAnalyticsServerWritePlayerEvent(TestContext& testContext); 
    void TestAnalyticsServerWriteTitleEvent(TestContext& testContext); 
    void TestAnalyticsGetDetails(TestContext& testContext); 
    void TestAnalyticsGetLimits(TestContext& testContext); 
    void TestAnalyticsGetOperationStatus(TestContext& testContext); 
    void TestAnalyticsGetPendingOperations(TestContext& testContext); 
    void TestAnalyticsSetPerformance(TestContext& testContext); 
    void TestAnalyticsSetStorageRetention(TestContext& testContext); 


protected:
    void AddTests();


    static void LogDeviceInfoRequest( PlayFab::AnalyticsModels::DeviceInfoRequest* request, const char* testName );
    static void FillDeviceInfoRequest( PlayFab::AnalyticsModels::DeviceInfoRequest* request );
    static void LogWriteClientCharacterEventRequest( PlayFab::AnalyticsModels::WriteClientCharacterEventRequest* request, const char* testName );
    static void FillWriteClientCharacterEventRequest( PlayFab::AnalyticsModels::WriteClientCharacterEventRequest* request );
    static HRESULT LogPFAnalyticsWriteEventResponse( PFAnalyticsWriteEventResponse* result );
    static HRESULT ValidatePFAnalyticsWriteEventResponse( PFAnalyticsWriteEventResponse* result );
    static void LogWriteClientPlayerEventRequest( PlayFab::AnalyticsModels::WriteClientPlayerEventRequest* request, const char* testName );
    static void FillWriteClientPlayerEventRequest( PlayFab::AnalyticsModels::WriteClientPlayerEventRequest* request );
    static void LogWriteTitleEventRequest( PlayFab::AnalyticsModels::WriteTitleEventRequest* request, const char* testName );
    static void FillWriteTitleEventRequest( PlayFab::AnalyticsModels::WriteTitleEventRequest* request );
    static void LogWriteServerCharacterEventRequest( PlayFab::AnalyticsModels::WriteServerCharacterEventRequest* request, const char* testName );
    static void FillWriteServerCharacterEventRequest( PlayFab::AnalyticsModels::WriteServerCharacterEventRequest* request );
    static void LogWriteServerPlayerEventRequest( PlayFab::AnalyticsModels::WriteServerPlayerEventRequest* request, const char* testName );
    static void FillWriteServerPlayerEventRequest( PlayFab::AnalyticsModels::WriteServerPlayerEventRequest* request );
    static void LogInsightsEmptyRequest( PlayFab::AnalyticsModels::InsightsEmptyRequest* request, const char* testName );
    static void FillInsightsEmptyRequest( PlayFab::AnalyticsModels::InsightsEmptyRequest* request );
    static HRESULT LogPFAnalyticsInsightsGetDetailsResponse( PFAnalyticsInsightsGetDetailsResponse* result );
    static HRESULT ValidatePFAnalyticsInsightsGetDetailsResponse( PFAnalyticsInsightsGetDetailsResponse* result );
    static HRESULT LogPFAnalyticsInsightsGetLimitsResponse( PFAnalyticsInsightsGetLimitsResponse* result );
    static HRESULT ValidatePFAnalyticsInsightsGetLimitsResponse( PFAnalyticsInsightsGetLimitsResponse* result );
    static void LogInsightsGetOperationStatusRequest( PlayFab::AnalyticsModels::InsightsGetOperationStatusRequest* request, const char* testName );
    static void FillInsightsGetOperationStatusRequest( PlayFab::AnalyticsModels::InsightsGetOperationStatusRequest* request );
    static HRESULT LogPFAnalyticsInsightsGetOperationStatusResponse( PFAnalyticsInsightsGetOperationStatusResponse* result );
    static HRESULT ValidatePFAnalyticsInsightsGetOperationStatusResponse( PFAnalyticsInsightsGetOperationStatusResponse* result );
    static void LogInsightsGetPendingOperationsRequest( PlayFab::AnalyticsModels::InsightsGetPendingOperationsRequest* request, const char* testName );
    static void FillInsightsGetPendingOperationsRequest( PlayFab::AnalyticsModels::InsightsGetPendingOperationsRequest* request );
    static HRESULT LogPFAnalyticsInsightsGetPendingOperationsResponse( PFAnalyticsInsightsGetPendingOperationsResponse* result );
    static HRESULT ValidatePFAnalyticsInsightsGetPendingOperationsResponse( PFAnalyticsInsightsGetPendingOperationsResponse* result );
    static void LogInsightsSetPerformanceRequest( PlayFab::AnalyticsModels::InsightsSetPerformanceRequest* request, const char* testName );
    static void FillInsightsSetPerformanceRequest( PlayFab::AnalyticsModels::InsightsSetPerformanceRequest* request );
    static HRESULT LogPFAnalyticsInsightsOperationResponse( PFAnalyticsInsightsOperationResponse* result );
    static HRESULT ValidatePFAnalyticsInsightsOperationResponse( PFAnalyticsInsightsOperationResponse* result );
    static void LogInsightsSetStorageRetentionRequest( PlayFab::AnalyticsModels::InsightsSetStorageRetentionRequest* request, const char* testName );
    static void FillInsightsSetStorageRetentionRequest( PlayFab::AnalyticsModels::InsightsSetStorageRetentionRequest* request );

public:
    PFStateHandle stateHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
