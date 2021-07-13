#pragma once

#include "TestCase.h"
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>
#include "../../../code/source/Client/DataDataModels.h"

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

    static void LogPlayFabDataAbortFileUploadsRequest( PlayFab::DataModels::AbortFileUploadsRequest* request, const char* testName );
    static void FillPlayFabDataAbortFileUploadsRequest( PlayFab::DataModels::AbortFileUploadsRequest* request );
    static HRESULT LogPlayFabDataAbortFileUploadsResponse( PlayFabDataAbortFileUploadsResponse* result );
    static HRESULT ValidatePlayFabDataAbortFileUploadsResponse( PlayFabDataAbortFileUploadsResponse* result );
    static void LogPlayFabDataDeleteFilesRequest( PlayFab::DataModels::DeleteFilesRequest* request, const char* testName );
    static void FillPlayFabDataDeleteFilesRequest( PlayFab::DataModels::DeleteFilesRequest* request );
    static HRESULT LogPlayFabDataDeleteFilesResponse( PlayFabDataDeleteFilesResponse* result );
    static HRESULT ValidatePlayFabDataDeleteFilesResponse( PlayFabDataDeleteFilesResponse* result );
    static void LogPlayFabDataFinalizeFileUploadsRequest( PlayFab::DataModels::FinalizeFileUploadsRequest* request, const char* testName );
    static void FillPlayFabDataFinalizeFileUploadsRequest( PlayFab::DataModels::FinalizeFileUploadsRequest* request );
    static HRESULT LogPlayFabDataFinalizeFileUploadsResponse( PlayFabDataFinalizeFileUploadsResponse* result );
    static HRESULT ValidatePlayFabDataFinalizeFileUploadsResponse( PlayFabDataFinalizeFileUploadsResponse* result );
    static void LogPlayFabDataGetFilesRequest( PlayFab::DataModels::GetFilesRequest* request, const char* testName );
    static void FillPlayFabDataGetFilesRequest( PlayFab::DataModels::GetFilesRequest* request );
    static HRESULT LogPlayFabDataGetFilesResponse( PlayFabDataGetFilesResponse* result );
    static HRESULT ValidatePlayFabDataGetFilesResponse( PlayFabDataGetFilesResponse* result );
    static void LogPlayFabDataGetObjectsRequest( PlayFab::DataModels::GetObjectsRequest* request, const char* testName );
    static void FillPlayFabDataGetObjectsRequest( PlayFab::DataModels::GetObjectsRequest* request );
    static HRESULT LogPlayFabDataGetObjectsResponse( PlayFabDataGetObjectsResponse* result );
    static HRESULT ValidatePlayFabDataGetObjectsResponse( PlayFabDataGetObjectsResponse* result );
    static void LogPlayFabDataInitiateFileUploadsRequest( PlayFab::DataModels::InitiateFileUploadsRequest* request, const char* testName );
    static void FillPlayFabDataInitiateFileUploadsRequest( PlayFab::DataModels::InitiateFileUploadsRequest* request );
    static HRESULT LogPlayFabDataInitiateFileUploadsResponse( PlayFabDataInitiateFileUploadsResponse* result );
    static HRESULT ValidatePlayFabDataInitiateFileUploadsResponse( PlayFabDataInitiateFileUploadsResponse* result );
    static void LogPlayFabDataSetObjectsRequest( PlayFab::DataModels::SetObjectsRequest* request, const char* testName );
    static void FillPlayFabDataSetObjectsRequest( PlayFab::DataModels::SetObjectsRequest* request );
    static HRESULT LogPlayFabDataSetObjectsResponse( PlayFabDataSetObjectsResponse* result );
    static HRESULT ValidatePlayFabDataSetObjectsResponse( PlayFabDataSetObjectsResponse* result );


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
