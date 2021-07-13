#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenDataTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenDataTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenClientTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenDataTests::AddTests()
{
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
    HRESULT hr = PlayFabAdminInitialize(testTitleData.titleId.data(), testTitleData.developerSecretKey.data(), nullptr, &stateHandle);
    assert(SUCCEEDED(hr));
    if (SUCCEEDED(hr))
    {
        PlayFabClientLoginWithCustomIDRequest request{};
        request.customId = "CustomId";
        bool createAccount = true;
        request.createAccount = &createAccount;
        request.titleId = testTitleData.titleId.data();

        PlayFabClientGetPlayerCombinedInfoRequestParams combinedInfoRequestParams{};
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
        hr = PlayFabClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PlayFabGetAuthResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PlayFabEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenDataTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
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
        PlayFabDataAbortFileUploadsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabDataAbortFileUploadsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabDataAbortFileUploadsResponse( result );
            return ValidatePlayFabDataAbortFileUploadsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AbortFileUploadsResult>>(testContext);

    PlayFab::DataModels::AbortFileUploadsRequest request;
    FillPlayFabDataAbortFileUploadsRequest( &request );
    LogPlayFabDataAbortFileUploadsRequest( &request, "TestDataAbortFileUploads" );
    HRESULT hr = PlayFabDataAbortFileUploadsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabDataAbortFileUploadsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenDataTests::TestDataDeleteFiles(TestContext& testContext)
{
    struct DeleteFilesResult : public XAsyncResult
    {
        PlayFabDataDeleteFilesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabDataDeleteFilesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabDataDeleteFilesResponse( result );
            return ValidatePlayFabDataDeleteFilesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<DeleteFilesResult>>(testContext);

    PlayFab::DataModels::DeleteFilesRequest request;
    FillPlayFabDataDeleteFilesRequest( &request );
    LogPlayFabDataDeleteFilesRequest( &request, "TestDataDeleteFiles" );
    HRESULT hr = PlayFabDataDeleteFilesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabDataDeleteFilesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenDataTests::TestDataFinalizeFileUploads(TestContext& testContext)
{
    struct FinalizeFileUploadsResult : public XAsyncResult
    {
        PlayFabDataFinalizeFileUploadsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabDataFinalizeFileUploadsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabDataFinalizeFileUploadsResponse( result );
            return ValidatePlayFabDataFinalizeFileUploadsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<FinalizeFileUploadsResult>>(testContext);

    PlayFab::DataModels::FinalizeFileUploadsRequest request;
    FillPlayFabDataFinalizeFileUploadsRequest( &request );
    LogPlayFabDataFinalizeFileUploadsRequest( &request, "TestDataFinalizeFileUploads" );
    HRESULT hr = PlayFabDataFinalizeFileUploadsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabDataFinalizeFileUploadsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenDataTests::TestDataGetFiles(TestContext& testContext)
{
    struct GetFilesResult : public XAsyncResult
    {
        PlayFabDataGetFilesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabDataGetFilesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabDataGetFilesResponse( result );
            return ValidatePlayFabDataGetFilesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetFilesResult>>(testContext);

    PlayFab::DataModels::GetFilesRequest request;
    FillPlayFabDataGetFilesRequest( &request );
    LogPlayFabDataGetFilesRequest( &request, "TestDataGetFiles" );
    HRESULT hr = PlayFabDataGetFilesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabDataGetFilesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenDataTests::TestDataGetObjects(TestContext& testContext)
{
    struct GetObjectsResult : public XAsyncResult
    {
        PlayFabDataGetObjectsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabDataGetObjectsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabDataGetObjectsResponse( result );
            return ValidatePlayFabDataGetObjectsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetObjectsResult>>(testContext);

    PlayFab::DataModels::GetObjectsRequest request;
    FillPlayFabDataGetObjectsRequest( &request );
    LogPlayFabDataGetObjectsRequest( &request, "TestDataGetObjects" );
    HRESULT hr = PlayFabDataGetObjectsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabDataGetObjectsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenDataTests::TestDataInitiateFileUploads(TestContext& testContext)
{
    struct InitiateFileUploadsResult : public XAsyncResult
    {
        PlayFabDataInitiateFileUploadsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabDataInitiateFileUploadsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabDataInitiateFileUploadsResponse( result );
            return ValidatePlayFabDataInitiateFileUploadsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<InitiateFileUploadsResult>>(testContext);

    PlayFab::DataModels::InitiateFileUploadsRequest request;
    FillPlayFabDataInitiateFileUploadsRequest( &request );
    LogPlayFabDataInitiateFileUploadsRequest( &request, "TestDataInitiateFileUploads" );
    HRESULT hr = PlayFabDataInitiateFileUploadsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabDataInitiateFileUploadsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenDataTests::TestDataSetObjects(TestContext& testContext)
{
    struct SetObjectsResult : public XAsyncResult
    {
        PlayFabDataSetObjectsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabDataSetObjectsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabDataSetObjectsResponse( result );
            return ValidatePlayFabDataSetObjectsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetObjectsResult>>(testContext);

    PlayFab::DataModels::SetObjectsRequest request;
    FillPlayFabDataSetObjectsRequest( &request );
    LogPlayFabDataSetObjectsRequest( &request, "TestDataSetObjects" );
    HRESULT hr = PlayFabDataSetObjectsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabDataSetObjectsAsync", hr);
        return;
    }
    async.release(); 
} 


}
