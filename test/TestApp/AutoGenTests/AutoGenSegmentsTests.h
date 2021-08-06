#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Segments/SegmentsDataModels.h"

namespace PlayFabUnit
{

class AutoGenSegmentsTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestSegmentsAdminCreateSegment(TestContext& testContext); 
    void TestSegmentsAdminDeleteSegment(TestContext& testContext); 
    void TestSegmentsAdminGetSegments(TestContext& testContext); 
    void TestSegmentsAdminUpdateSegment(TestContext& testContext); 


protected:
    void AddTests();


    static void LogCreateSegmentRequest( PlayFab::SegmentsModels::CreateSegmentRequest* request, const char* testName );
    static void FillCreateSegmentRequest( PlayFab::SegmentsModels::CreateSegmentRequest* request );
    static HRESULT LogPFSegmentsCreateSegmentResponse( PFSegmentsCreateSegmentResponse* result );
    static HRESULT ValidatePFSegmentsCreateSegmentResponse( PFSegmentsCreateSegmentResponse* result );
    static void LogDeleteSegmentRequest( PlayFab::SegmentsModels::DeleteSegmentRequest* request, const char* testName );
    static void FillDeleteSegmentRequest( PlayFab::SegmentsModels::DeleteSegmentRequest* request );
    static HRESULT LogPFSegmentsDeleteSegmentsResponse( PFSegmentsDeleteSegmentsResponse* result );
    static HRESULT ValidatePFSegmentsDeleteSegmentsResponse( PFSegmentsDeleteSegmentsResponse* result );
    static void LogGetSegmentsRequest( PlayFab::SegmentsModels::GetSegmentsRequest* request, const char* testName );
    static void FillGetSegmentsRequest( PlayFab::SegmentsModels::GetSegmentsRequest* request );
    static HRESULT LogPFSegmentsGetSegmentsResponse( PFSegmentsGetSegmentsResponse* result );
    static HRESULT ValidatePFSegmentsGetSegmentsResponse( PFSegmentsGetSegmentsResponse* result );
    static void LogUpdateSegmentRequest( PlayFab::SegmentsModels::UpdateSegmentRequest* request, const char* testName );
    static void FillUpdateSegmentRequest( PlayFab::SegmentsModels::UpdateSegmentRequest* request );
    static HRESULT LogPFSegmentsUpdateSegmentResponse( PFSegmentsUpdateSegmentResponse* result );
    static HRESULT ValidatePFSegmentsUpdateSegmentResponse( PFSegmentsUpdateSegmentResponse* result );

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
