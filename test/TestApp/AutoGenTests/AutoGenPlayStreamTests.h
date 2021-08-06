#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/PlayStream/PlayStreamDataModels.h"

namespace PlayFabUnit
{

class AutoGenPlayStreamTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestPlayStreamAdminAddPlayerTag(TestContext& testContext); 
    void TestPlayStreamAdminGetAllSegments(TestContext& testContext); 
    void TestPlayStreamAdminGetPlayerSegments(TestContext& testContext); 
    void TestPlayStreamAdminGetPlayersInSegment(TestContext& testContext); 
    void TestPlayStreamAdminGetPlayerTags(TestContext& testContext); 
    void TestPlayStreamAdminRemovePlayerTag(TestContext& testContext); 
    void TestPlayStreamClientGetPlayerSegments(TestContext& testContext); 
    void TestPlayStreamClientGetPlayerTags(TestContext& testContext); 
    void TestPlayStreamServerAddPlayerTag(TestContext& testContext); 
    void TestPlayStreamServerGetAllSegments(TestContext& testContext); 
    void TestPlayStreamServerGetPlayerSegments(TestContext& testContext); 
    void TestPlayStreamServerGetPlayersInSegment(TestContext& testContext); 
    void TestPlayStreamServerGetPlayerTags(TestContext& testContext); 
    void TestPlayStreamServerRemovePlayerTag(TestContext& testContext); 
    void TestPlayStreamWriteEvents(TestContext& testContext); 
    void TestPlayStreamWriteTelemetryEvents(TestContext& testContext); 


protected:
    void AddTests();


    static void LogAddPlayerTagRequest( PlayFab::PlayStreamModels::AddPlayerTagRequest* request, const char* testName );
    static void FillAddPlayerTagRequest( PlayFab::PlayStreamModels::AddPlayerTagRequest* request );
    static HRESULT LogPFPlayStreamGetAllSegmentsResult( PFPlayStreamGetAllSegmentsResult* result );
    static HRESULT ValidatePFPlayStreamGetAllSegmentsResult( PFPlayStreamGetAllSegmentsResult* result );
    static void LogGetPlayersSegmentsRequest( PlayFab::PlayStreamModels::GetPlayersSegmentsRequest* request, const char* testName );
    static void FillGetPlayersSegmentsRequest( PlayFab::PlayStreamModels::GetPlayersSegmentsRequest* request );
    static HRESULT LogPFPlayStreamGetPlayerSegmentsResult( PFPlayStreamGetPlayerSegmentsResult* result );
    static HRESULT ValidatePFPlayStreamGetPlayerSegmentsResult( PFPlayStreamGetPlayerSegmentsResult* result );
    static void LogGetPlayersInSegmentRequest( PlayFab::PlayStreamModels::GetPlayersInSegmentRequest* request, const char* testName );
    static void FillGetPlayersInSegmentRequest( PlayFab::PlayStreamModels::GetPlayersInSegmentRequest* request );
    static HRESULT LogPFPlayStreamGetPlayersInSegmentResult( PFPlayStreamGetPlayersInSegmentResult* result );
    static HRESULT ValidatePFPlayStreamGetPlayersInSegmentResult( PFPlayStreamGetPlayersInSegmentResult* result );
    static void LogGetPlayerTagsRequest( PlayFab::PlayStreamModels::GetPlayerTagsRequest* request, const char* testName );
    static void FillGetPlayerTagsRequest( PlayFab::PlayStreamModels::GetPlayerTagsRequest* request );
    static HRESULT LogPFPlayStreamGetPlayerTagsResult( PFPlayStreamGetPlayerTagsResult* result );
    static HRESULT ValidatePFPlayStreamGetPlayerTagsResult( PFPlayStreamGetPlayerTagsResult* result );
    static void LogRemovePlayerTagRequest( PlayFab::PlayStreamModels::RemovePlayerTagRequest* request, const char* testName );
    static void FillRemovePlayerTagRequest( PlayFab::PlayStreamModels::RemovePlayerTagRequest* request );
    static void LogWriteEventsRequest( PlayFab::PlayStreamModels::WriteEventsRequest* request, const char* testName );
    static void FillWriteEventsRequest( PlayFab::PlayStreamModels::WriteEventsRequest* request );
    static HRESULT LogPFPlayStreamWriteEventsResponse( PFPlayStreamWriteEventsResponse* result );
    static HRESULT ValidatePFPlayStreamWriteEventsResponse( PFPlayStreamWriteEventsResponse* result );

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
