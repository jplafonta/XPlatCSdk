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

    void TestDataAbortFileUploadsPrerequisiteInitiateFileUploads(TestContext& testContext);
    void TestDataAbortFileUploads(TestContext& testContext);

    void TestDataDeleteFilesPrerequisiteInitiateFileUploads(TestContext& testContext);
    void TestDataDeleteFilesPrerequisiteFinalizeFileUploads(TestContext& testContext);
    void TestDataDeleteFiles(TestContext& testContext);

    void TestDataFinalizeFileUploadsPrerequisiteInitiateFileUploads(TestContext& testContext);
    void TestDataFinalizeFileUploads(TestContext& testContext);
    void TestDataFinalizeFileUploadsCleanupDeleteFiles(TestContext& testContext);

    void TestDataGetFiles(TestContext& testContext);

    void TestDataGetObjects(TestContext& testContext);

    void TestDataInitiateFileUploads(TestContext& testContext);
    void TestDataInitiateFileUploadsCleanupAbortFileUploads(TestContext& testContext);

    void TestDataSetObjectsPrerequisiteSetObjects(TestContext& testContext);
    void TestDataSetObjects(TestContext& testContext);


protected:
    void AddTests();

    static void FillAbortFileUploadsPrerequisiteInitiateFileUploadsRequest( PlayFab::DataModels::InitiateFileUploadsRequest* request );
    static HRESULT StoreAbortFileUploadsPrerequisitePFDataInitiateFileUploadsResponse( PFDataInitiateFileUploadsResponse* result );
    static void LogAbortFileUploadsRequest( PlayFab::DataModels::AbortFileUploadsRequest* request, const char* testName );
    static void FillAbortFileUploadsRequest( PlayFab::DataModels::AbortFileUploadsRequest* request );
    static HRESULT LogPFDataAbortFileUploadsResponse( PFDataAbortFileUploadsResponse* result );
    static HRESULT ValidatePFDataAbortFileUploadsResponse( PFDataAbortFileUploadsResponse* result );

    static void FillDeleteFilesPrerequisiteInitiateFileUploadsRequest( PlayFab::DataModels::InitiateFileUploadsRequest* request );
    static HRESULT StoreDeleteFilesPrerequisitePFDataInitiateFileUploadsResponse( PFDataInitiateFileUploadsResponse* result );
    static void FillDeleteFilesPrerequisiteFinalizeFileUploadsRequest( PlayFab::DataModels::FinalizeFileUploadsRequest* request );
    static HRESULT StoreDeleteFilesPrerequisitePFDataFinalizeFileUploadsResponse( PFDataFinalizeFileUploadsResponse* result );
    static void LogDeleteFilesRequest( PlayFab::DataModels::DeleteFilesRequest* request, const char* testName );
    static void FillDeleteFilesRequest( PlayFab::DataModels::DeleteFilesRequest* request );
    static HRESULT LogPFDataDeleteFilesResponse( PFDataDeleteFilesResponse* result );
    static HRESULT ValidatePFDataDeleteFilesResponse( PFDataDeleteFilesResponse* result );

    static void FillFinalizeFileUploadsPrerequisiteInitiateFileUploadsRequest( PlayFab::DataModels::InitiateFileUploadsRequest* request );
    static HRESULT StoreFinalizeFileUploadsPrerequisitePFDataInitiateFileUploadsResponse( PFDataInitiateFileUploadsResponse* result );
    static void LogFinalizeFileUploadsRequest( PlayFab::DataModels::FinalizeFileUploadsRequest* request, const char* testName );
    static void FillFinalizeFileUploadsRequest( PlayFab::DataModels::FinalizeFileUploadsRequest* request );
    static HRESULT LogPFDataFinalizeFileUploadsResponse( PFDataFinalizeFileUploadsResponse* result );
    static HRESULT ValidatePFDataFinalizeFileUploadsResponse( PFDataFinalizeFileUploadsResponse* result );
    static void FillFinalizeFileUploadsCleanupDeleteFilesRequest( PlayFab::DataModels::DeleteFilesRequest* request );
    static HRESULT StoreFinalizeFileUploadsCleanupPFDataDeleteFilesResponse( PFDataDeleteFilesResponse* result );

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
    static void FillInitiateFileUploadsCleanupAbortFileUploadsRequest( PlayFab::DataModels::AbortFileUploadsRequest* request );
    static HRESULT StoreInitiateFileUploadsCleanupPFDataAbortFileUploadsResponse( PFDataAbortFileUploadsResponse* result );

    static void FillSetObjectsPrerequisiteSetObjectsRequest( PlayFab::DataModels::SetObjectsRequest* request );
    static HRESULT StoreSetObjectsPrerequisitePFDataSetObjectsResponse( PFDataSetObjectsResponse* result );
    static void LogSetObjectsRequest( PlayFab::DataModels::SetObjectsRequest* request, const char* testName );
    static void FillSetObjectsRequest( PlayFab::DataModels::SetObjectsRequest* request );
    static HRESULT LogPFDataSetObjectsResponse( PFDataSetObjectsResponse* result );
    static HRESULT ValidatePFDataSetObjectsResponse( PFDataSetObjectsResponse* result );

    struct DataTestData
    {
        ~DataTestData()
        {

        }

        PlayFab::DataModels::InitiateFileUploadsResponse m_InitiateFileUploadsResponse;
        PlayFab::DataModels::FinalizeFileUploadsResponse m_FinalizeFileUploadsResponse;
        PlayFab::DataModels::DeleteFilesResponse m_DeleteFilesResponse;
        PlayFab::DataModels::AbortFileUploadsResponse m_AbortFileUploadsResponse;
        PlayFab::DataModels::SetObjectsResponse m_SetObjectsResponse;
    };

    static DataTestData testData;

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
