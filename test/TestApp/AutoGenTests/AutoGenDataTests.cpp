#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenDataTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenDataTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenDataTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenDataTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestDataAbortFileUploads", &AutoGenDataTests::TestDataAbortFileUploads);
    AddTest("TestDataDeleteFiles", &AutoGenDataTests::TestDataDeleteFiles);
    AddTest("TestDataFinalizeFileUploads", &AutoGenDataTests::TestDataFinalizeFileUploads);
    AddTest("TestDataGetFiles", &AutoGenDataTests::TestDataGetFiles);
    AddTest("TestDataGetObjects", &AutoGenDataTests::TestDataGetObjects);
    AddTest("TestDataInitiateFileUploads", &AutoGenDataTests::TestDataInitiateFileUploads);
    AddTest("TestDataSetObjects", &AutoGenDataTests::TestDataSetObjects);
}

void AutoGenDataTests::ClassSetUp()
{
    HRESULT hr = PFAdminInitialize(testTitleData.titleId.data(), testTitleData.developerSecretKey.data(), nullptr, &stateHandle);
    assert(SUCCEEDED(hr));
    if (SUCCEEDED(hr))
    {
        PFAuthenticationLoginWithCustomIDRequest request{};
        request.customId = "CustomId";
        bool createAccount = true;
        request.createAccount = &createAccount;
        request.titleId = testTitleData.titleId.data();

        PFGetPlayerCombinedInfoRequestParams combinedInfoRequestParams{};
        combinedInfoRequestParams.getCharacterInventories = true;
        combinedInfoRequestParams.getCharacterList = true;
        combinedInfoRequestParams.getPlayerProfile = true;
        combinedInfoRequestParams.getPlayerStatistics = true;
        combinedInfoRequestParams.getTitleData = true;
        combinedInfoRequestParams.getUserAccountInfo = true;
        combinedInfoRequestParams.getUserData = true;
        combinedInfoRequestParams.getUserInventory = true;
        combinedInfoRequestParams.getUserReadOnlyData = true;
        combinedInfoRequestParams.getUserVirtualCurrency = true;
        request.infoRequestParameters = &combinedInfoRequestParams;

        XAsyncBlock async{};
        hr = PFAuthenticationClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PFAuthenticationClientLoginGetResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PFEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenDataTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenDataTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


void AutoGenDataTests::TestDataAbortFileUploads(TestContext& testContext)
{
    struct AbortFileUploadsResult : public XAsyncResult
    {
        PFDataAbortFileUploadsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFDataAbortFileUploadsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFDataAbortFileUploadsResponse( result );
            return ValidatePFDataAbortFileUploadsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AbortFileUploadsResult>>(testContext);

    PlayFab::DataModels::AbortFileUploadsRequest request;
    FillAbortFileUploadsRequest( &request );
    LogAbortFileUploadsRequest( &request, "TestDataAbortFileUploads" );
    HRESULT hr = PFDataAbortFileUploadsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFDataDataAbortFileUploadsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenDataTests::TestDataDeleteFiles(TestContext& testContext)
{
    struct DeleteFilesResult : public XAsyncResult
    {
        PFDataDeleteFilesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFDataDeleteFilesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFDataDeleteFilesResponse( result );
            return ValidatePFDataDeleteFilesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<DeleteFilesResult>>(testContext);

    PlayFab::DataModels::DeleteFilesRequest request;
    FillDeleteFilesRequest( &request );
    LogDeleteFilesRequest( &request, "TestDataDeleteFiles" );
    HRESULT hr = PFDataDeleteFilesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFDataDataDeleteFilesAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenDataTests::TestDataFinalizeFileUploads(TestContext& testContext)
{
    struct FinalizeFileUploadsResult : public XAsyncResult
    {
        PFDataFinalizeFileUploadsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFDataFinalizeFileUploadsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFDataFinalizeFileUploadsResponse( result );
            return ValidatePFDataFinalizeFileUploadsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<FinalizeFileUploadsResult>>(testContext);

    PlayFab::DataModels::FinalizeFileUploadsRequest request;
    FillFinalizeFileUploadsRequest( &request );
    LogFinalizeFileUploadsRequest( &request, "TestDataFinalizeFileUploads" );
    HRESULT hr = PFDataFinalizeFileUploadsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFDataDataFinalizeFileUploadsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenDataTests::TestDataGetFiles(TestContext& testContext)
{
    struct GetFilesResult : public XAsyncResult
    {
        PFDataGetFilesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFDataGetFilesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFDataGetFilesResponse( result );
            return ValidatePFDataGetFilesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetFilesResult>>(testContext);

    PlayFab::DataModels::GetFilesRequest request;
    FillGetFilesRequest( &request );
    LogGetFilesRequest( &request, "TestDataGetFiles" );
    HRESULT hr = PFDataGetFilesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFDataDataGetFilesAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenDataTests::TestDataGetObjects(TestContext& testContext)
{
    struct GetObjectsResult : public XAsyncResult
    {
        PFDataGetObjectsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFDataGetObjectsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFDataGetObjectsResponse( result );
            return ValidatePFDataGetObjectsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetObjectsResult>>(testContext);

    PlayFab::DataModels::GetObjectsRequest request;
    FillGetObjectsRequest( &request );
    LogGetObjectsRequest( &request, "TestDataGetObjects" );
    HRESULT hr = PFDataGetObjectsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFDataDataGetObjectsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenDataTests::TestDataInitiateFileUploads(TestContext& testContext)
{
    struct InitiateFileUploadsResult : public XAsyncResult
    {
        PFDataInitiateFileUploadsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFDataInitiateFileUploadsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFDataInitiateFileUploadsResponse( result );
            return ValidatePFDataInitiateFileUploadsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<InitiateFileUploadsResult>>(testContext);

    PlayFab::DataModels::InitiateFileUploadsRequest request;
    FillInitiateFileUploadsRequest( &request );
    LogInitiateFileUploadsRequest( &request, "TestDataInitiateFileUploads" );
    HRESULT hr = PFDataInitiateFileUploadsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFDataDataInitiateFileUploadsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenDataTests::TestDataSetObjects(TestContext& testContext)
{
    struct SetObjectsResult : public XAsyncResult
    {
        PFDataSetObjectsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFDataSetObjectsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFDataSetObjectsResponse( result );
            return ValidatePFDataSetObjectsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetObjectsResult>>(testContext);

    PlayFab::DataModels::SetObjectsRequest request;
    FillSetObjectsRequest( &request );
    LogSetObjectsRequest( &request, "TestDataSetObjects" );
    HRESULT hr = PFDataSetObjectsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFDataDataSetObjectsAsync", hr);
        return;
    }
    async.release(); 
} 

}
