#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenMultiplayerServerTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenMultiplayerServerTests::MultiplayerServerTestData AutoGenMultiplayerServerTests::testData;

void AutoGenMultiplayerServerTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenMultiplayerServerTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenMultiplayerServerTests::AddTests()
{
    // Generated tests 
    AddTest("TestMultiplayerServerCreateBuildAlias", &AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildAlias);

    AddTest("TestMultiplayerServerCreateBuildWithCustomContainer", &AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildWithCustomContainer);

    AddTest("TestMultiplayerServerCreateBuildWithManagedContainer", &AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildWithManagedContainer);

    AddTest("TestMultiplayerServerCreateBuildWithProcessBasedServer", &AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildWithProcessBasedServer);

    AddTest("TestMultiplayerServerCreateRemoteUser", &AutoGenMultiplayerServerTests::TestMultiplayerServerCreateRemoteUser);

    AddTest("TestMultiplayerServerCreateTitleMultiplayerServersQuotaChange", &AutoGenMultiplayerServerTests::TestMultiplayerServerCreateTitleMultiplayerServersQuotaChange);

    AddTest("TestMultiplayerServerDeleteAsset", &AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteAsset);

    AddTest("TestMultiplayerServerDeleteBuild", &AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteBuild);

    AddTest("TestMultiplayerServerDeleteBuildAlias", &AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteBuildAlias);

    AddTest("TestMultiplayerServerDeleteBuildRegion", &AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteBuildRegion);

    AddTest("TestMultiplayerServerDeleteCertificate", &AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteCertificate);

    AddTest("TestMultiplayerServerDeleteContainerImageRepository", &AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteContainerImageRepository);

    AddTest("TestMultiplayerServerDeleteRemoteUser", &AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteRemoteUser);

    AddTest("TestMultiplayerServerEnableMultiplayerServersForTitle", &AutoGenMultiplayerServerTests::TestMultiplayerServerEnableMultiplayerServersForTitle);

    AddTest("TestMultiplayerServerGetAssetDownloadUrl", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetAssetDownloadUrl);

    AddTest("TestMultiplayerServerGetAssetUploadUrl", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetAssetUploadUrl);

    AddTest("TestMultiplayerServerGetBuild", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetBuild);

    AddTest("TestMultiplayerServerGetBuildAlias", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetBuildAlias);

    AddTest("TestMultiplayerServerGetContainerRegistryCredentials", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetContainerRegistryCredentials);

    AddTest("TestMultiplayerServerGetMultiplayerServerDetails", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetMultiplayerServerDetails);

    AddTest("TestMultiplayerServerGetMultiplayerServerLogs", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetMultiplayerServerLogs);

    AddTest("TestMultiplayerServerGetMultiplayerSessionLogsBySessionId", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetMultiplayerSessionLogsBySessionId);

    AddTest("TestMultiplayerServerGetRemoteLoginEndpoint", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetRemoteLoginEndpoint);

    AddTest("TestMultiplayerServerGetTitleEnabledForMultiplayerServersStatus", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetTitleEnabledForMultiplayerServersStatus);

    AddTest("TestMultiplayerServerGetTitleMultiplayerServersQuotaChange", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetTitleMultiplayerServersQuotaChange);

    AddTest("TestMultiplayerServerGetTitleMultiplayerServersQuotas", &AutoGenMultiplayerServerTests::TestMultiplayerServerGetTitleMultiplayerServersQuotas);

    AddTest("TestMultiplayerServerListArchivedMultiplayerServers", &AutoGenMultiplayerServerTests::TestMultiplayerServerListArchivedMultiplayerServers);

    AddTest("TestMultiplayerServerListAssetSummaries", &AutoGenMultiplayerServerTests::TestMultiplayerServerListAssetSummaries);

    AddTest("TestMultiplayerServerListBuildAliases", &AutoGenMultiplayerServerTests::TestMultiplayerServerListBuildAliases);

    AddTest("TestMultiplayerServerListBuildSummariesV2", &AutoGenMultiplayerServerTests::TestMultiplayerServerListBuildSummariesV2);

    AddTest("TestMultiplayerServerListCertificateSummaries", &AutoGenMultiplayerServerTests::TestMultiplayerServerListCertificateSummaries);

    AddTest("TestMultiplayerServerListContainerImages", &AutoGenMultiplayerServerTests::TestMultiplayerServerListContainerImages);

    AddTest("TestMultiplayerServerListContainerImageTags", &AutoGenMultiplayerServerTests::TestMultiplayerServerListContainerImageTags);

    AddTest("TestMultiplayerServerListMultiplayerServers", &AutoGenMultiplayerServerTests::TestMultiplayerServerListMultiplayerServers);

    AddTest("TestMultiplayerServerListPartyQosServers", &AutoGenMultiplayerServerTests::TestMultiplayerServerListPartyQosServers);

    AddTest("TestMultiplayerServerListQosServersForTitle", &AutoGenMultiplayerServerTests::TestMultiplayerServerListQosServersForTitle);

    AddTest("TestMultiplayerServerListTitleMultiplayerServersQuotaChanges", &AutoGenMultiplayerServerTests::TestMultiplayerServerListTitleMultiplayerServersQuotaChanges);

    AddTest("TestMultiplayerServerListVirtualMachineSummaries", &AutoGenMultiplayerServerTests::TestMultiplayerServerListVirtualMachineSummaries);

    AddTest("TestMultiplayerServerRequestMultiplayerServer", &AutoGenMultiplayerServerTests::TestMultiplayerServerRequestMultiplayerServer);

    AddTest("TestMultiplayerServerRolloverContainerRegistryCredentials", &AutoGenMultiplayerServerTests::TestMultiplayerServerRolloverContainerRegistryCredentials);

    AddTest("TestMultiplayerServerShutdownMultiplayerServer", &AutoGenMultiplayerServerTests::TestMultiplayerServerShutdownMultiplayerServer);

    AddTest("TestMultiplayerServerUntagContainerImage", &AutoGenMultiplayerServerTests::TestMultiplayerServerUntagContainerImage);

    AddTest("TestMultiplayerServerUpdateBuildAlias", &AutoGenMultiplayerServerTests::TestMultiplayerServerUpdateBuildAlias);

    AddTest("TestMultiplayerServerUpdateBuildName", &AutoGenMultiplayerServerTests::TestMultiplayerServerUpdateBuildName);

    AddTest("TestMultiplayerServerUpdateBuildRegion", &AutoGenMultiplayerServerTests::TestMultiplayerServerUpdateBuildRegion);

    AddTest("TestMultiplayerServerUpdateBuildRegions", &AutoGenMultiplayerServerTests::TestMultiplayerServerUpdateBuildRegions);

    AddTest("TestMultiplayerServerUploadCertificate", &AutoGenMultiplayerServerTests::TestMultiplayerServerUploadCertificate);
}

void AutoGenMultiplayerServerTests::ClassSetUp()
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
                hr = PFAuthenticationClientLoginGetResult(&async, &titlePlayerHandle);
                assert(SUCCEEDED(hr) && titlePlayerHandle);

                hr = PFTitlePlayerGetEntityHandle(titlePlayerHandle, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle);

                hr = PFTitlePlayerGetPlayerCombinedInfo(titlePlayerHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }

        request.customId = "CustomId2";
        async = {};
        hr = PFAuthenticationClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PFAuthenticationClientLoginGetResult(&async, &titlePlayerHandle2);
                assert(SUCCEEDED(hr) && titlePlayerHandle2);

                hr = PFTitlePlayerGetEntityHandle(titlePlayerHandle2, &entityHandle2);
                assert(SUCCEEDED(hr) && entityHandle2);

                hr = PFTitlePlayerGetPlayerCombinedInfo(titlePlayerHandle2, &playerCombinedInfo2);
                assert(SUCCEEDED(hr));
            }
        }

        PFAuthenticationGetEntityTokenRequest titleTokenRequest{};
        async = {};
        hr = PFAuthenticationGetEntityTokenAsync(stateHandle, &titleTokenRequest, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            
            if (SUCCEEDED(hr))
            {
                hr = PFAuthenticationGetEntityTokenGetResult(&async, &titleEntityHandle);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenMultiplayerServerTests::ClassTearDown()
{
    PFTitlePlayerCloseHandle(titlePlayerHandle);
    PFEntityCloseHandle(entityHandle);
    PFEntityCloseHandle(titleEntityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFUninitializeAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenMultiplayerServerTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region CreateBuildAlias

void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildAlias(TestContext& testContext)
{
    struct CreateBuildAliasResult : public XAsyncResult
    {
        PFMultiplayerServerBuildAliasDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerCreateBuildAliasGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerCreateBuildAliasGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerBuildAliasDetailsResponse( result );
            return ValidatePFMultiplayerServerBuildAliasDetailsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateBuildAliasResult>>(testContext);

    PlayFab::MultiplayerServerModels::CreateBuildAliasRequest request;
    FillCreateBuildAliasRequest( &request );
    LogCreateBuildAliasRequest( &request, "TestMultiplayerServerCreateBuildAlias" );
    HRESULT hr = PFMultiplayerServerCreateBuildAliasAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerCreateBuildAliasAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CreateBuildWithCustomContainer

void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildWithCustomContainer(TestContext& testContext)
{
    struct CreateBuildWithCustomContainerResult : public XAsyncResult
    {
        PFMultiplayerServerCreateBuildWithCustomContainerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerCreateBuildWithCustomContainerGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerCreateBuildWithCustomContainerGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerCreateBuildWithCustomContainerResponse( result );
            return ValidatePFMultiplayerServerCreateBuildWithCustomContainerResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateBuildWithCustomContainerResult>>(testContext);

    PlayFab::MultiplayerServerModels::CreateBuildWithCustomContainerRequest request;
    FillCreateBuildWithCustomContainerRequest( &request );
    LogCreateBuildWithCustomContainerRequest( &request, "TestMultiplayerServerCreateBuildWithCustomContainer" );
    HRESULT hr = PFMultiplayerServerCreateBuildWithCustomContainerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerCreateBuildWithCustomContainerAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CreateBuildWithManagedContainer

void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildWithManagedContainer(TestContext& testContext)
{
    struct CreateBuildWithManagedContainerResult : public XAsyncResult
    {
        PFMultiplayerServerCreateBuildWithManagedContainerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerCreateBuildWithManagedContainerGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerCreateBuildWithManagedContainerGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerCreateBuildWithManagedContainerResponse( result );
            return ValidatePFMultiplayerServerCreateBuildWithManagedContainerResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateBuildWithManagedContainerResult>>(testContext);

    PlayFab::MultiplayerServerModels::CreateBuildWithManagedContainerRequest request;
    FillCreateBuildWithManagedContainerRequest( &request );
    LogCreateBuildWithManagedContainerRequest( &request, "TestMultiplayerServerCreateBuildWithManagedContainer" );
    HRESULT hr = PFMultiplayerServerCreateBuildWithManagedContainerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerCreateBuildWithManagedContainerAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CreateBuildWithProcessBasedServer

void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildWithProcessBasedServer(TestContext& testContext)
{
    struct CreateBuildWithProcessBasedServerResult : public XAsyncResult
    {
        PFMultiplayerServerCreateBuildWithProcessBasedServerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerCreateBuildWithProcessBasedServerGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerCreateBuildWithProcessBasedServerGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerCreateBuildWithProcessBasedServerResponse( result );
            return ValidatePFMultiplayerServerCreateBuildWithProcessBasedServerResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateBuildWithProcessBasedServerResult>>(testContext);

    PlayFab::MultiplayerServerModels::CreateBuildWithProcessBasedServerRequest request;
    FillCreateBuildWithProcessBasedServerRequest( &request );
    LogCreateBuildWithProcessBasedServerRequest( &request, "TestMultiplayerServerCreateBuildWithProcessBasedServer" );
    HRESULT hr = PFMultiplayerServerCreateBuildWithProcessBasedServerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerCreateBuildWithProcessBasedServerAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CreateRemoteUser

void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateRemoteUser(TestContext& testContext)
{
    struct CreateRemoteUserResult : public XAsyncResult
    {
        PFMultiplayerServerCreateRemoteUserResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerCreateRemoteUserGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerCreateRemoteUserGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerCreateRemoteUserResponse( result );
            return ValidatePFMultiplayerServerCreateRemoteUserResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateRemoteUserResult>>(testContext);

    PlayFab::MultiplayerServerModels::CreateRemoteUserRequest request;
    FillCreateRemoteUserRequest( &request );
    LogCreateRemoteUserRequest( &request, "TestMultiplayerServerCreateRemoteUser" );
    HRESULT hr = PFMultiplayerServerCreateRemoteUserAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerCreateRemoteUserAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CreateTitleMultiplayerServersQuotaChange

void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateTitleMultiplayerServersQuotaChange(TestContext& testContext)
{
    struct CreateTitleMultiplayerServersQuotaChangeResult : public XAsyncResult
    {
        PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse( result );
            return ValidatePFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateTitleMultiplayerServersQuotaChangeResult>>(testContext);

    PlayFab::MultiplayerServerModels::CreateTitleMultiplayerServersQuotaChangeRequest request;
    FillCreateTitleMultiplayerServersQuotaChangeRequest( &request );
    LogCreateTitleMultiplayerServersQuotaChangeRequest( &request, "TestMultiplayerServerCreateTitleMultiplayerServersQuotaChange" );
    HRESULT hr = PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerCreateTitleMultiplayerServersQuotaChangeAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region DeleteAsset

void AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteAsset(TestContext& testContext)
{
    struct DeleteAssetResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteAssetResult>>(testContext);

    PlayFab::MultiplayerServerModels::DeleteAssetRequest request;
    FillDeleteAssetRequest( &request );
    LogDeleteAssetRequest( &request, "TestMultiplayerServerDeleteAsset" );
    HRESULT hr = PFMultiplayerServerDeleteAssetAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerDeleteAssetAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region DeleteBuild

void AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteBuild(TestContext& testContext)
{
    struct DeleteBuildResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteBuildResult>>(testContext);

    PlayFab::MultiplayerServerModels::DeleteBuildRequest request;
    FillDeleteBuildRequest( &request );
    LogDeleteBuildRequest( &request, "TestMultiplayerServerDeleteBuild" );
    HRESULT hr = PFMultiplayerServerDeleteBuildAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerDeleteBuildAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region DeleteBuildAlias

void AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteBuildAlias(TestContext& testContext)
{
    struct DeleteBuildAliasResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteBuildAliasResult>>(testContext);

    PlayFab::MultiplayerServerModels::DeleteBuildAliasRequest request;
    FillDeleteBuildAliasRequest( &request );
    LogDeleteBuildAliasRequest( &request, "TestMultiplayerServerDeleteBuildAlias" );
    HRESULT hr = PFMultiplayerServerDeleteBuildAliasAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerDeleteBuildAliasAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region DeleteBuildRegion

void AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteBuildRegion(TestContext& testContext)
{
    struct DeleteBuildRegionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteBuildRegionResult>>(testContext);

    PlayFab::MultiplayerServerModels::DeleteBuildRegionRequest request;
    FillDeleteBuildRegionRequest( &request );
    LogDeleteBuildRegionRequest( &request, "TestMultiplayerServerDeleteBuildRegion" );
    HRESULT hr = PFMultiplayerServerDeleteBuildRegionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerDeleteBuildRegionAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region DeleteCertificate

void AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteCertificate(TestContext& testContext)
{
    struct DeleteCertificateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteCertificateResult>>(testContext);

    PlayFab::MultiplayerServerModels::DeleteCertificateRequest request;
    FillDeleteCertificateRequest( &request );
    LogDeleteCertificateRequest( &request, "TestMultiplayerServerDeleteCertificate" );
    HRESULT hr = PFMultiplayerServerDeleteCertificateAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerDeleteCertificateAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region DeleteContainerImageRepository

void AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteContainerImageRepository(TestContext& testContext)
{
    struct DeleteContainerImageRepositoryResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteContainerImageRepositoryResult>>(testContext);

    PlayFab::MultiplayerServerModels::DeleteContainerImageRequest request;
    FillDeleteContainerImageRequest( &request );
    LogDeleteContainerImageRequest( &request, "TestMultiplayerServerDeleteContainerImageRepository" );
    HRESULT hr = PFMultiplayerServerDeleteContainerImageRepositoryAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerDeleteContainerImageRepositoryAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region DeleteRemoteUser

void AutoGenMultiplayerServerTests::TestMultiplayerServerDeleteRemoteUser(TestContext& testContext)
{
    struct DeleteRemoteUserResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteRemoteUserResult>>(testContext);

    PlayFab::MultiplayerServerModels::DeleteRemoteUserRequest request;
    FillDeleteRemoteUserRequest( &request );
    LogDeleteRemoteUserRequest( &request, "TestMultiplayerServerDeleteRemoteUser" );
    HRESULT hr = PFMultiplayerServerDeleteRemoteUserAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerDeleteRemoteUserAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region EnableMultiplayerServersForTitle

void AutoGenMultiplayerServerTests::TestMultiplayerServerEnableMultiplayerServersForTitle(TestContext& testContext)
{
    struct EnableMultiplayerServersForTitleResult : public XAsyncResult
    {
        PFMultiplayerServerEnableMultiplayerServersForTitleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerEnableMultiplayerServersForTitleGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerEnableMultiplayerServersForTitleGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerEnableMultiplayerServersForTitleResponse( result );
            return ValidatePFMultiplayerServerEnableMultiplayerServersForTitleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<EnableMultiplayerServersForTitleResult>>(testContext);

    PlayFab::MultiplayerServerModels::EnableMultiplayerServersForTitleRequest request;
    FillEnableMultiplayerServersForTitleRequest( &request );
    LogEnableMultiplayerServersForTitleRequest( &request, "TestMultiplayerServerEnableMultiplayerServersForTitle" );
    HRESULT hr = PFMultiplayerServerEnableMultiplayerServersForTitleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerEnableMultiplayerServersForTitleAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetAssetDownloadUrl

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetAssetDownloadUrl(TestContext& testContext)
{
    struct GetAssetDownloadUrlResult : public XAsyncResult
    {
        PFMultiplayerServerGetAssetDownloadUrlResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetAssetDownloadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetAssetDownloadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetAssetDownloadUrlResponse( result );
            return ValidatePFMultiplayerServerGetAssetDownloadUrlResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetAssetDownloadUrlResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetAssetDownloadUrlRequest request;
    FillGetAssetDownloadUrlRequest( &request );
    LogGetAssetDownloadUrlRequest( &request, "TestMultiplayerServerGetAssetDownloadUrl" );
    HRESULT hr = PFMultiplayerServerGetAssetDownloadUrlAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetAssetDownloadUrlAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetAssetUploadUrl

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetAssetUploadUrl(TestContext& testContext)
{
    struct GetAssetUploadUrlResult : public XAsyncResult
    {
        PFMultiplayerServerGetAssetUploadUrlResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetAssetUploadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetAssetUploadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetAssetUploadUrlResponse( result );
            return ValidatePFMultiplayerServerGetAssetUploadUrlResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetAssetUploadUrlResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetAssetUploadUrlRequest request;
    FillGetAssetUploadUrlRequest( &request );
    LogGetAssetUploadUrlRequest( &request, "TestMultiplayerServerGetAssetUploadUrl" );
    HRESULT hr = PFMultiplayerServerGetAssetUploadUrlAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetAssetUploadUrlAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetBuild

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetBuild(TestContext& testContext)
{
    struct GetBuildResult : public XAsyncResult
    {
        PFMultiplayerServerGetBuildResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetBuildGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetBuildGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetBuildResponse( result );
            return ValidatePFMultiplayerServerGetBuildResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetBuildResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetBuildRequest request;
    FillGetBuildRequest( &request );
    LogGetBuildRequest( &request, "TestMultiplayerServerGetBuild" );
    HRESULT hr = PFMultiplayerServerGetBuildAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetBuildAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetBuildAlias

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetBuildAlias(TestContext& testContext)
{
    struct GetBuildAliasResult : public XAsyncResult
    {
        PFMultiplayerServerBuildAliasDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetBuildAliasGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetBuildAliasGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerBuildAliasDetailsResponse( result );
            return ValidatePFMultiplayerServerBuildAliasDetailsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetBuildAliasResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetBuildAliasRequest request;
    FillGetBuildAliasRequest( &request );
    LogGetBuildAliasRequest( &request, "TestMultiplayerServerGetBuildAlias" );
    HRESULT hr = PFMultiplayerServerGetBuildAliasAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetBuildAliasAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetContainerRegistryCredentials

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetContainerRegistryCredentials(TestContext& testContext)
{
    struct GetContainerRegistryCredentialsResult : public XAsyncResult
    {
        PFMultiplayerServerGetContainerRegistryCredentialsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetContainerRegistryCredentialsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetContainerRegistryCredentialsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetContainerRegistryCredentialsResponse( result );
            return ValidatePFMultiplayerServerGetContainerRegistryCredentialsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetContainerRegistryCredentialsResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetContainerRegistryCredentialsRequest request;
    FillGetContainerRegistryCredentialsRequest( &request );
    LogGetContainerRegistryCredentialsRequest( &request, "TestMultiplayerServerGetContainerRegistryCredentials" );
    HRESULT hr = PFMultiplayerServerGetContainerRegistryCredentialsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetContainerRegistryCredentialsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetMultiplayerServerDetails

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetMultiplayerServerDetails(TestContext& testContext)
{
    struct GetMultiplayerServerDetailsResult : public XAsyncResult
    {
        PFMultiplayerServerGetMultiplayerServerDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetMultiplayerServerDetailsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetMultiplayerServerDetailsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetMultiplayerServerDetailsResponse( result );
            return ValidatePFMultiplayerServerGetMultiplayerServerDetailsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMultiplayerServerDetailsResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetMultiplayerServerDetailsRequest request;
    FillGetMultiplayerServerDetailsRequest( &request );
    LogGetMultiplayerServerDetailsRequest( &request, "TestMultiplayerServerGetMultiplayerServerDetails" );
    HRESULT hr = PFMultiplayerServerGetMultiplayerServerDetailsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetMultiplayerServerDetailsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetMultiplayerServerLogs

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetMultiplayerServerLogs(TestContext& testContext)
{
    struct GetMultiplayerServerLogsResult : public XAsyncResult
    {
        PFMultiplayerServerGetMultiplayerServerLogsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetMultiplayerServerLogsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetMultiplayerServerLogsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetMultiplayerServerLogsResponse( result );
            return ValidatePFMultiplayerServerGetMultiplayerServerLogsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMultiplayerServerLogsResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetMultiplayerServerLogsRequest request;
    FillGetMultiplayerServerLogsRequest( &request );
    LogGetMultiplayerServerLogsRequest( &request, "TestMultiplayerServerGetMultiplayerServerLogs" );
    HRESULT hr = PFMultiplayerServerGetMultiplayerServerLogsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetMultiplayerServerLogsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetMultiplayerSessionLogsBySessionId

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetMultiplayerSessionLogsBySessionId(TestContext& testContext)
{
    struct GetMultiplayerSessionLogsBySessionIdResult : public XAsyncResult
    {
        PFMultiplayerServerGetMultiplayerServerLogsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetMultiplayerServerLogsResponse( result );
            return ValidatePFMultiplayerServerGetMultiplayerServerLogsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMultiplayerSessionLogsBySessionIdResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetMultiplayerSessionLogsBySessionIdRequest request;
    FillGetMultiplayerSessionLogsBySessionIdRequest( &request );
    LogGetMultiplayerSessionLogsBySessionIdRequest( &request, "TestMultiplayerServerGetMultiplayerSessionLogsBySessionId" );
    HRESULT hr = PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetMultiplayerSessionLogsBySessionIdAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetRemoteLoginEndpoint

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetRemoteLoginEndpoint(TestContext& testContext)
{
    struct GetRemoteLoginEndpointResult : public XAsyncResult
    {
        PFMultiplayerServerGetRemoteLoginEndpointResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetRemoteLoginEndpointGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetRemoteLoginEndpointGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetRemoteLoginEndpointResponse( result );
            return ValidatePFMultiplayerServerGetRemoteLoginEndpointResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetRemoteLoginEndpointResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetRemoteLoginEndpointRequest request;
    FillGetRemoteLoginEndpointRequest( &request );
    LogGetRemoteLoginEndpointRequest( &request, "TestMultiplayerServerGetRemoteLoginEndpoint" );
    HRESULT hr = PFMultiplayerServerGetRemoteLoginEndpointAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetRemoteLoginEndpointAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetTitleEnabledForMultiplayerServersStatus

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetTitleEnabledForMultiplayerServersStatus(TestContext& testContext)
{
    struct GetTitleEnabledForMultiplayerServersStatusResult : public XAsyncResult
    {
        PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse( result );
            return ValidatePFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleEnabledForMultiplayerServersStatusResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetTitleEnabledForMultiplayerServersStatusRequest request;
    FillGetTitleEnabledForMultiplayerServersStatusRequest( &request );
    LogGetTitleEnabledForMultiplayerServersStatusRequest( &request, "TestMultiplayerServerGetTitleEnabledForMultiplayerServersStatus" );
    HRESULT hr = PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetTitleEnabledForMultiplayerServersStatusAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetTitleMultiplayerServersQuotaChange

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetTitleMultiplayerServersQuotaChange(TestContext& testContext)
{
    struct GetTitleMultiplayerServersQuotaChangeResult : public XAsyncResult
    {
        PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse( result );
            return ValidatePFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleMultiplayerServersQuotaChangeResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetTitleMultiplayerServersQuotaChangeRequest request;
    FillGetTitleMultiplayerServersQuotaChangeRequest( &request );
    LogGetTitleMultiplayerServersQuotaChangeRequest( &request, "TestMultiplayerServerGetTitleMultiplayerServersQuotaChange" );
    HRESULT hr = PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetTitleMultiplayerServersQuotaChangeAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetTitleMultiplayerServersQuotas

void AutoGenMultiplayerServerTests::TestMultiplayerServerGetTitleMultiplayerServersQuotas(TestContext& testContext)
{
    struct GetTitleMultiplayerServersQuotasResult : public XAsyncResult
    {
        PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerGetTitleMultiplayerServersQuotasGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerGetTitleMultiplayerServersQuotasGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerGetTitleMultiplayerServersQuotasResponse( result );
            return ValidatePFMultiplayerServerGetTitleMultiplayerServersQuotasResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleMultiplayerServersQuotasResult>>(testContext);

    PlayFab::MultiplayerServerModels::GetTitleMultiplayerServersQuotasRequest request;
    FillGetTitleMultiplayerServersQuotasRequest( &request );
    LogGetTitleMultiplayerServersQuotasRequest( &request, "TestMultiplayerServerGetTitleMultiplayerServersQuotas" );
    HRESULT hr = PFMultiplayerServerGetTitleMultiplayerServersQuotasAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerGetTitleMultiplayerServersQuotasAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListArchivedMultiplayerServers

void AutoGenMultiplayerServerTests::TestMultiplayerServerListArchivedMultiplayerServers(TestContext& testContext)
{
    struct ListArchivedMultiplayerServersResult : public XAsyncResult
    {
        PFMultiplayerServerListMultiplayerServersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListArchivedMultiplayerServersGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListArchivedMultiplayerServersGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListMultiplayerServersResponse( result );
            return ValidatePFMultiplayerServerListMultiplayerServersResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListArchivedMultiplayerServersResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListMultiplayerServersRequest request;
    FillListMultiplayerServersRequest( &request );
    LogListMultiplayerServersRequest( &request, "TestMultiplayerServerListArchivedMultiplayerServers" );
    HRESULT hr = PFMultiplayerServerListArchivedMultiplayerServersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListArchivedMultiplayerServersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListAssetSummaries

void AutoGenMultiplayerServerTests::TestMultiplayerServerListAssetSummaries(TestContext& testContext)
{
    struct ListAssetSummariesResult : public XAsyncResult
    {
        PFMultiplayerServerListAssetSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListAssetSummariesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListAssetSummariesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListAssetSummariesResponse( result );
            return ValidatePFMultiplayerServerListAssetSummariesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListAssetSummariesResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListAssetSummariesRequest request;
    FillListAssetSummariesRequest( &request );
    LogListAssetSummariesRequest( &request, "TestMultiplayerServerListAssetSummaries" );
    HRESULT hr = PFMultiplayerServerListAssetSummariesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListAssetSummariesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListBuildAliases

void AutoGenMultiplayerServerTests::TestMultiplayerServerListBuildAliases(TestContext& testContext)
{
    struct ListBuildAliasesResult : public XAsyncResult
    {
        PFMultiplayerServerListBuildAliasesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListBuildAliasesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListBuildAliasesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListBuildAliasesResponse( result );
            return ValidatePFMultiplayerServerListBuildAliasesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListBuildAliasesResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListBuildAliasesRequest request;
    FillListBuildAliasesRequest( &request );
    LogListBuildAliasesRequest( &request, "TestMultiplayerServerListBuildAliases" );
    HRESULT hr = PFMultiplayerServerListBuildAliasesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListBuildAliasesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListBuildSummariesV2

void AutoGenMultiplayerServerTests::TestMultiplayerServerListBuildSummariesV2(TestContext& testContext)
{
    struct ListBuildSummariesV2Result : public XAsyncResult
    {
        PFMultiplayerServerListBuildSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListBuildSummariesV2GetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListBuildSummariesV2GetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListBuildSummariesResponse( result );
            return ValidatePFMultiplayerServerListBuildSummariesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListBuildSummariesV2Result>>(testContext);

    PlayFab::MultiplayerServerModels::ListBuildSummariesRequest request;
    FillListBuildSummariesRequest( &request );
    LogListBuildSummariesRequest( &request, "TestMultiplayerServerListBuildSummariesV2" );
    HRESULT hr = PFMultiplayerServerListBuildSummariesV2Async(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListBuildSummariesV2Async", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListCertificateSummaries

void AutoGenMultiplayerServerTests::TestMultiplayerServerListCertificateSummaries(TestContext& testContext)
{
    struct ListCertificateSummariesResult : public XAsyncResult
    {
        PFMultiplayerServerListCertificateSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListCertificateSummariesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListCertificateSummariesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListCertificateSummariesResponse( result );
            return ValidatePFMultiplayerServerListCertificateSummariesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListCertificateSummariesResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListCertificateSummariesRequest request;
    FillListCertificateSummariesRequest( &request );
    LogListCertificateSummariesRequest( &request, "TestMultiplayerServerListCertificateSummaries" );
    HRESULT hr = PFMultiplayerServerListCertificateSummariesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListCertificateSummariesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListContainerImages

void AutoGenMultiplayerServerTests::TestMultiplayerServerListContainerImages(TestContext& testContext)
{
    struct ListContainerImagesResult : public XAsyncResult
    {
        PFMultiplayerServerListContainerImagesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListContainerImagesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListContainerImagesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListContainerImagesResponse( result );
            return ValidatePFMultiplayerServerListContainerImagesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListContainerImagesResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListContainerImagesRequest request;
    FillListContainerImagesRequest( &request );
    LogListContainerImagesRequest( &request, "TestMultiplayerServerListContainerImages" );
    HRESULT hr = PFMultiplayerServerListContainerImagesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListContainerImagesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListContainerImageTags

void AutoGenMultiplayerServerTests::TestMultiplayerServerListContainerImageTags(TestContext& testContext)
{
    struct ListContainerImageTagsResult : public XAsyncResult
    {
        PFMultiplayerServerListContainerImageTagsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListContainerImageTagsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListContainerImageTagsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListContainerImageTagsResponse( result );
            return ValidatePFMultiplayerServerListContainerImageTagsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListContainerImageTagsResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListContainerImageTagsRequest request;
    FillListContainerImageTagsRequest( &request );
    LogListContainerImageTagsRequest( &request, "TestMultiplayerServerListContainerImageTags" );
    HRESULT hr = PFMultiplayerServerListContainerImageTagsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListContainerImageTagsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListMultiplayerServers

void AutoGenMultiplayerServerTests::TestMultiplayerServerListMultiplayerServers(TestContext& testContext)
{
    struct ListMultiplayerServersResult : public XAsyncResult
    {
        PFMultiplayerServerListMultiplayerServersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListMultiplayerServersGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListMultiplayerServersGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListMultiplayerServersResponse( result );
            return ValidatePFMultiplayerServerListMultiplayerServersResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListMultiplayerServersResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListMultiplayerServersRequest request;
    FillListMultiplayerServersRequest( &request );
    LogListMultiplayerServersRequest( &request, "TestMultiplayerServerListMultiplayerServers" );
    HRESULT hr = PFMultiplayerServerListMultiplayerServersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListMultiplayerServersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListPartyQosServers

void AutoGenMultiplayerServerTests::TestMultiplayerServerListPartyQosServers(TestContext& testContext)
{
    struct ListPartyQosServersResult : public XAsyncResult
    {
        PFMultiplayerServerListPartyQosServersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListPartyQosServersGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListPartyQosServersGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListPartyQosServersResponse( result );
            return ValidatePFMultiplayerServerListPartyQosServersResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListPartyQosServersResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListPartyQosServersRequest request;
    FillListPartyQosServersRequest( &request );
    LogListPartyQosServersRequest( &request, "TestMultiplayerServerListPartyQosServers" );
    HRESULT hr = PFMultiplayerServerListPartyQosServersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListPartyQosServersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListQosServersForTitle

void AutoGenMultiplayerServerTests::TestMultiplayerServerListQosServersForTitle(TestContext& testContext)
{
    struct ListQosServersForTitleResult : public XAsyncResult
    {
        PFMultiplayerServerListQosServersForTitleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListQosServersForTitleGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListQosServersForTitleGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListQosServersForTitleResponse( result );
            return ValidatePFMultiplayerServerListQosServersForTitleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListQosServersForTitleResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListQosServersForTitleRequest request;
    FillListQosServersForTitleRequest( &request );
    LogListQosServersForTitleRequest( &request, "TestMultiplayerServerListQosServersForTitle" );
    HRESULT hr = PFMultiplayerServerListQosServersForTitleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListQosServersForTitleAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListTitleMultiplayerServersQuotaChanges

void AutoGenMultiplayerServerTests::TestMultiplayerServerListTitleMultiplayerServersQuotaChanges(TestContext& testContext)
{
    struct ListTitleMultiplayerServersQuotaChangesResult : public XAsyncResult
    {
        PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListTitleMultiplayerServersQuotaChangesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListTitleMultiplayerServersQuotaChangesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse( result );
            return ValidatePFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListTitleMultiplayerServersQuotaChangesResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListTitleMultiplayerServersQuotaChangesRequest request;
    FillListTitleMultiplayerServersQuotaChangesRequest( &request );
    LogListTitleMultiplayerServersQuotaChangesRequest( &request, "TestMultiplayerServerListTitleMultiplayerServersQuotaChanges" );
    HRESULT hr = PFMultiplayerServerListTitleMultiplayerServersQuotaChangesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListTitleMultiplayerServersQuotaChangesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListVirtualMachineSummaries

void AutoGenMultiplayerServerTests::TestMultiplayerServerListVirtualMachineSummaries(TestContext& testContext)
{
    struct ListVirtualMachineSummariesResult : public XAsyncResult
    {
        PFMultiplayerServerListVirtualMachineSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerListVirtualMachineSummariesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerListVirtualMachineSummariesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerListVirtualMachineSummariesResponse( result );
            return ValidatePFMultiplayerServerListVirtualMachineSummariesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListVirtualMachineSummariesResult>>(testContext);

    PlayFab::MultiplayerServerModels::ListVirtualMachineSummariesRequest request;
    FillListVirtualMachineSummariesRequest( &request );
    LogListVirtualMachineSummariesRequest( &request, "TestMultiplayerServerListVirtualMachineSummaries" );
    HRESULT hr = PFMultiplayerServerListVirtualMachineSummariesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerListVirtualMachineSummariesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region RequestMultiplayerServer

void AutoGenMultiplayerServerTests::TestMultiplayerServerRequestMultiplayerServer(TestContext& testContext)
{
    struct RequestMultiplayerServerResult : public XAsyncResult
    {
        PFMultiplayerServerRequestMultiplayerServerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerRequestMultiplayerServerGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerRequestMultiplayerServerGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerRequestMultiplayerServerResponse( result );
            return ValidatePFMultiplayerServerRequestMultiplayerServerResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RequestMultiplayerServerResult>>(testContext);

    PlayFab::MultiplayerServerModels::RequestMultiplayerServerRequest request;
    FillRequestMultiplayerServerRequest( &request );
    LogRequestMultiplayerServerRequest( &request, "TestMultiplayerServerRequestMultiplayerServer" );
    HRESULT hr = PFMultiplayerServerRequestMultiplayerServerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerRequestMultiplayerServerAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region RolloverContainerRegistryCredentials

void AutoGenMultiplayerServerTests::TestMultiplayerServerRolloverContainerRegistryCredentials(TestContext& testContext)
{
    struct RolloverContainerRegistryCredentialsResult : public XAsyncResult
    {
        PFMultiplayerServerRolloverContainerRegistryCredentialsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerRolloverContainerRegistryCredentialsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerRolloverContainerRegistryCredentialsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerRolloverContainerRegistryCredentialsResponse( result );
            return ValidatePFMultiplayerServerRolloverContainerRegistryCredentialsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RolloverContainerRegistryCredentialsResult>>(testContext);

    PlayFab::MultiplayerServerModels::RolloverContainerRegistryCredentialsRequest request;
    FillRolloverContainerRegistryCredentialsRequest( &request );
    LogRolloverContainerRegistryCredentialsRequest( &request, "TestMultiplayerServerRolloverContainerRegistryCredentials" );
    HRESULT hr = PFMultiplayerServerRolloverContainerRegistryCredentialsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerRolloverContainerRegistryCredentialsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ShutdownMultiplayerServer

void AutoGenMultiplayerServerTests::TestMultiplayerServerShutdownMultiplayerServer(TestContext& testContext)
{
    struct ShutdownMultiplayerServerResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ShutdownMultiplayerServerResult>>(testContext);

    PlayFab::MultiplayerServerModels::ShutdownMultiplayerServerRequest request;
    FillShutdownMultiplayerServerRequest( &request );
    LogShutdownMultiplayerServerRequest( &request, "TestMultiplayerServerShutdownMultiplayerServer" );
    HRESULT hr = PFMultiplayerServerShutdownMultiplayerServerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerShutdownMultiplayerServerAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region UntagContainerImage

void AutoGenMultiplayerServerTests::TestMultiplayerServerUntagContainerImage(TestContext& testContext)
{
    struct UntagContainerImageResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UntagContainerImageResult>>(testContext);

    PlayFab::MultiplayerServerModels::UntagContainerImageRequest request;
    FillUntagContainerImageRequest( &request );
    LogUntagContainerImageRequest( &request, "TestMultiplayerServerUntagContainerImage" );
    HRESULT hr = PFMultiplayerServerUntagContainerImageAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerUntagContainerImageAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region UpdateBuildAlias

void AutoGenMultiplayerServerTests::TestMultiplayerServerUpdateBuildAlias(TestContext& testContext)
{
    struct UpdateBuildAliasResult : public XAsyncResult
    {
        PFMultiplayerServerBuildAliasDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMultiplayerServerUpdateBuildAliasGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMultiplayerServerUpdateBuildAliasGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMultiplayerServerBuildAliasDetailsResponse( result );
            return ValidatePFMultiplayerServerBuildAliasDetailsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateBuildAliasResult>>(testContext);

    PlayFab::MultiplayerServerModels::UpdateBuildAliasRequest request;
    FillUpdateBuildAliasRequest( &request );
    LogUpdateBuildAliasRequest( &request, "TestMultiplayerServerUpdateBuildAlias" );
    HRESULT hr = PFMultiplayerServerUpdateBuildAliasAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerUpdateBuildAliasAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region UpdateBuildName

void AutoGenMultiplayerServerTests::TestMultiplayerServerUpdateBuildName(TestContext& testContext)
{
    struct UpdateBuildNameResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateBuildNameResult>>(testContext);

    PlayFab::MultiplayerServerModels::UpdateBuildNameRequest request;
    FillUpdateBuildNameRequest( &request );
    LogUpdateBuildNameRequest( &request, "TestMultiplayerServerUpdateBuildName" );
    HRESULT hr = PFMultiplayerServerUpdateBuildNameAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerUpdateBuildNameAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region UpdateBuildRegion

void AutoGenMultiplayerServerTests::TestMultiplayerServerUpdateBuildRegion(TestContext& testContext)
{
    struct UpdateBuildRegionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateBuildRegionResult>>(testContext);

    PlayFab::MultiplayerServerModels::UpdateBuildRegionRequest request;
    FillUpdateBuildRegionRequest( &request );
    LogUpdateBuildRegionRequest( &request, "TestMultiplayerServerUpdateBuildRegion" );
    HRESULT hr = PFMultiplayerServerUpdateBuildRegionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerUpdateBuildRegionAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region UpdateBuildRegions

void AutoGenMultiplayerServerTests::TestMultiplayerServerUpdateBuildRegions(TestContext& testContext)
{
    struct UpdateBuildRegionsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateBuildRegionsResult>>(testContext);

    PlayFab::MultiplayerServerModels::UpdateBuildRegionsRequest request;
    FillUpdateBuildRegionsRequest( &request );
    LogUpdateBuildRegionsRequest( &request, "TestMultiplayerServerUpdateBuildRegions" );
    HRESULT hr = PFMultiplayerServerUpdateBuildRegionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerUpdateBuildRegionsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region UploadCertificate

void AutoGenMultiplayerServerTests::TestMultiplayerServerUploadCertificate(TestContext& testContext)
{
    struct UploadCertificateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UploadCertificateResult>>(testContext);

    PlayFab::MultiplayerServerModels::UploadCertificateRequest request;
    FillUploadCertificateRequest( &request );
    LogUploadCertificateRequest( &request, "TestMultiplayerServerUploadCertificate" );
    HRESULT hr = PFMultiplayerServerUploadCertificateAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMultiplayerServerMultiplayerServerUploadCertificateAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
