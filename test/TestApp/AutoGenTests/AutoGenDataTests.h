#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Data/DataDataModels.h"

namespace PlayFabUnit
{

class AutoGenDataTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestDataAbortFileUploads(TestContext& testContext); 
    void TestDataDeleteFiles(TestContext& testContext); 
    void TestDataFinalizeFileUploads(TestContext& testContext); 
    void TestDataGetFiles(TestContext& testContext); 
    void TestDataGetObjects(TestContext& testContext); 
    void TestDataInitiateFileUploads(TestContext& testContext); 
    void TestDataSetObjects(TestContext& testContext); 


protected:
    void AddTests();


    static void LogAbortFileUploadsRequest( PlayFab::DataModels::AbortFileUploadsRequest* request, const char* testName );
    static void FillAbortFileUploadsRequest( PlayFab::DataModels::AbortFileUploadsRequest* request );
    static HRESULT LogPFDataAbortFileUploadsResponse( PFDataAbortFileUploadsResponse* result );
    static HRESULT ValidatePFDataAbortFileUploadsResponse( PFDataAbortFileUploadsResponse* result );
    static void LogDeleteFilesRequest( PlayFab::DataModels::DeleteFilesRequest* request, const char* testName );
    static void FillDeleteFilesRequest( PlayFab::DataModels::DeleteFilesRequest* request );
    static HRESULT LogPFDataDeleteFilesResponse( PFDataDeleteFilesResponse* result );
    static HRESULT ValidatePFDataDeleteFilesResponse( PFDataDeleteFilesResponse* result );
    static void LogFinalizeFileUploadsRequest( PlayFab::DataModels::FinalizeFileUploadsRequest* request, const char* testName );
    static void FillFinalizeFileUploadsRequest( PlayFab::DataModels::FinalizeFileUploadsRequest* request );
    static HRESULT LogPFDataFinalizeFileUploadsResponse( PFDataFinalizeFileUploadsResponse* result );
    static HRESULT ValidatePFDataFinalizeFileUploadsResponse( PFDataFinalizeFileUploadsResponse* result );
    static void LogGetFilesRequest( PlayFab::DataModels::GetFilesRequest* request, const char* testName );
    static void FillGetFilesRequest( PlayFab::DataModels::GetFilesRequest* request );
    static HRESULT LogPFDataGetFilesResponse( PFDataGetFilesResponse* result );
    static HRESULT ValidatePFDataGetFilesResponse( PFDataGetFilesResponse* result );
    static void LogGetObjectsRequest( PlayFab::DataModels::GetObjectsRequest* request, const char* testName );
    static void FillGetObjectsRequest( PlayFab::DataModels::GetObjectsRequest* request );
    static HRESULT LogPFDataGetObjectsResponse( PFDataGetObjectsResponse* result );
    static HRESULT ValidatePFDataGetObjectsResponse( PFDataGetObjectsResponse* result );
    static void LogInitiateFileUploadsRequest( PlayFab::DataModels::InitiateFileUploadsRequest* request, const char* testName );
    static void FillInitiateFileUploadsRequest( PlayFab::DataModels::InitiateFileUploadsRequest* request );
    static HRESULT LogPFDataInitiateFileUploadsResponse( PFDataInitiateFileUploadsResponse* result );
    static HRESULT ValidatePFDataInitiateFileUploadsResponse( PFDataInitiateFileUploadsResponse* result );
    static void LogSetObjectsRequest( PlayFab::DataModels::SetObjectsRequest* request, const char* testName );
    static void FillSetObjectsRequest( PlayFab::DataModels::SetObjectsRequest* request );
    static HRESULT LogPFDataSetObjectsResponse( PFDataSetObjectsResponse* result );
    static HRESULT ValidatePFDataSetObjectsResponse( PFDataSetObjectsResponse* result );

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
