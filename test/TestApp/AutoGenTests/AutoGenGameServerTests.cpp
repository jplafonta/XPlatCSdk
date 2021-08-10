#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenGameServerTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenGameServerTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenGameServerTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenGameServerTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestGameServerAdminAddServerBuild", &AutoGenGameServerTests::TestGameServerAdminAddServerBuild);
    AddTest("TestGameServerAdminGetServerBuildInfo", &AutoGenGameServerTests::TestGameServerAdminGetServerBuildInfo);
    AddTest("TestGameServerAdminGetServerBuildUploadUrl", &AutoGenGameServerTests::TestGameServerAdminGetServerBuildUploadUrl);
    AddTest("TestGameServerAdminListServerBuilds", &AutoGenGameServerTests::TestGameServerAdminListServerBuilds);
    AddTest("TestGameServerAdminModifyServerBuild", &AutoGenGameServerTests::TestGameServerAdminModifyServerBuild);
    AddTest("TestGameServerAdminRemoveServerBuild", &AutoGenGameServerTests::TestGameServerAdminRemoveServerBuild);
}

void AutoGenGameServerTests::ClassSetUp()
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

void AutoGenGameServerTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenGameServerTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


void AutoGenGameServerTests::TestGameServerAdminAddServerBuild(TestContext& testContext)
{
    struct AdminAddServerBuildResult : public XAsyncResult
    {
        PFGameServerAddServerBuildResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGameServerAdminAddServerBuildGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGameServerAddServerBuildResult( result );
            return ValidatePFGameServerAddServerBuildResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminAddServerBuildResult>>(testContext);

    PlayFab::GameServerModels::AddServerBuildRequest request;
    FillAddServerBuildRequest( &request );
    LogAddServerBuildRequest( &request, "TestGameServerAdminAddServerBuild" );
    HRESULT hr = PFGameServerAdminAddServerBuildAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGameServerGameServerAdminAddServerBuildAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGameServerTests::TestGameServerAdminGetServerBuildInfo(TestContext& testContext)
{
    struct AdminGetServerBuildInfoResult : public XAsyncResult
    {
        PFGameServerGetServerBuildInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGameServerAdminGetServerBuildInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGameServerGetServerBuildInfoResult( result );
            return ValidatePFGameServerGetServerBuildInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetServerBuildInfoResult>>(testContext);

    PlayFab::GameServerModels::GetServerBuildInfoRequest request;
    FillGetServerBuildInfoRequest( &request );
    LogGetServerBuildInfoRequest( &request, "TestGameServerAdminGetServerBuildInfo" );
    HRESULT hr = PFGameServerAdminGetServerBuildInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGameServerGameServerAdminGetServerBuildInfoAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGameServerTests::TestGameServerAdminGetServerBuildUploadUrl(TestContext& testContext)
{
    struct AdminGetServerBuildUploadUrlResult : public XAsyncResult
    {
        PFGameServerGetServerBuildUploadURLResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGameServerAdminGetServerBuildUploadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGameServerAdminGetServerBuildUploadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGameServerGetServerBuildUploadURLResult( result );
            return ValidatePFGameServerGetServerBuildUploadURLResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetServerBuildUploadUrlResult>>(testContext);

    PlayFab::GameServerModels::GetServerBuildUploadURLRequest request;
    FillGetServerBuildUploadURLRequest( &request );
    LogGetServerBuildUploadURLRequest( &request, "TestGameServerAdminGetServerBuildUploadUrl" );
    HRESULT hr = PFGameServerAdminGetServerBuildUploadUrlAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGameServerGameServerAdminGetServerBuildUploadUrlAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGameServerTests::TestGameServerAdminListServerBuilds(TestContext& testContext)
{
    struct AdminListServerBuildsResult : public XAsyncResult
    {
        PFGameServerListBuildsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGameServerAdminListServerBuildsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGameServerListBuildsResult( result );
            return ValidatePFGameServerListBuildsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminListServerBuildsResult>>(testContext);

    HRESULT hr = PFGameServerAdminListServerBuildsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGameServerGameServerAdminListServerBuildsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGameServerTests::TestGameServerAdminModifyServerBuild(TestContext& testContext)
{
    struct AdminModifyServerBuildResult : public XAsyncResult
    {
        PFGameServerModifyServerBuildResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGameServerAdminModifyServerBuildGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGameServerModifyServerBuildResult( result );
            return ValidatePFGameServerModifyServerBuildResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminModifyServerBuildResult>>(testContext);

    PlayFab::GameServerModels::ModifyServerBuildRequest request;
    FillModifyServerBuildRequest( &request );
    LogModifyServerBuildRequest( &request, "TestGameServerAdminModifyServerBuild" );
    HRESULT hr = PFGameServerAdminModifyServerBuildAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGameServerGameServerAdminModifyServerBuildAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGameServerTests::TestGameServerAdminRemoveServerBuild(TestContext& testContext)
{
    struct AdminRemoveServerBuildResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminRemoveServerBuildResult>>(testContext);

    PlayFab::GameServerModels::RemoveServerBuildRequest request;
    FillRemoveServerBuildRequest( &request );
    LogRemoveServerBuildRequest( &request, "TestGameServerAdminRemoveServerBuild" );
    HRESULT hr = PFGameServerAdminRemoveServerBuildAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGameServerGameServerAdminRemoveServerBuildAsync", hr);
        return;
    }
    async.release(); 
} 

}
