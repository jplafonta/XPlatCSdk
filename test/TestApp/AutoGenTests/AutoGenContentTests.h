#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Content/ContentDataModels.h"

namespace PlayFabUnit
{

class AutoGenContentTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestContentAdminDeleteContent(TestContext& testContext);

    void TestContentAdminGetContentList(TestContext& testContext);

    void TestContentAdminGetContentUploadUrl(TestContext& testContext);

    void TestContentClientGetContentDownloadUrl(TestContext& testContext);

    void TestContentServerGetContentDownloadUrl(TestContext& testContext);


protected:
    void AddTests();

    static void LogDeleteContentRequest( PlayFab::ContentModels::DeleteContentRequest* request, const char* testName );
    static void FillDeleteContentRequest( PlayFab::ContentModels::DeleteContentRequest* request );

    static void LogGetContentListRequest( PlayFab::ContentModels::GetContentListRequest* request, const char* testName );
    static void FillGetContentListRequest( PlayFab::ContentModels::GetContentListRequest* request );
    static HRESULT LogPFContentGetContentListResult( PFContentGetContentListResult* result );
    static HRESULT ValidatePFContentGetContentListResult( PFContentGetContentListResult* result );

    static void LogGetContentUploadUrlRequest( PlayFab::ContentModels::GetContentUploadUrlRequest* request, const char* testName );
    static void FillGetContentUploadUrlRequest( PlayFab::ContentModels::GetContentUploadUrlRequest* request );
    static HRESULT LogPFContentGetContentUploadUrlResult( PFContentGetContentUploadUrlResult* result );
    static HRESULT ValidatePFContentGetContentUploadUrlResult( PFContentGetContentUploadUrlResult* result );

    static void LogGetContentDownloadUrlRequest( PlayFab::ContentModels::GetContentDownloadUrlRequest* request, const char* testName );
    static void FillGetContentDownloadUrlRequest( PlayFab::ContentModels::GetContentDownloadUrlRequest* request );
    static HRESULT LogPFContentGetContentDownloadUrlResult( PFContentGetContentDownloadUrlResult* result );
    static HRESULT ValidatePFContentGetContentDownloadUrlResult( PFContentGetContentDownloadUrlResult* result );


    struct ContentTestData
    {
        ~ContentTestData()
        {

        }

    };

    static ContentTestData testData;

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
