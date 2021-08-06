#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenMultiplayerServerTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

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
    // Generated prerequisites

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
                hr = PFGetAuthResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PFEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenMultiplayerServerTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
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


void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildAlias(TestContext& testContext)
{
    struct CreateBuildAliasResult : public XAsyncResult
    {
        PFMultiplayerServerBuildAliasDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerCreateBuildAliasGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildWithCustomContainer(TestContext& testContext)
{
    struct CreateBuildWithCustomContainerResult : public XAsyncResult
    {
        PFMultiplayerServerCreateBuildWithCustomContainerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerCreateBuildWithCustomContainerGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildWithManagedContainer(TestContext& testContext)
{
    struct CreateBuildWithManagedContainerResult : public XAsyncResult
    {
        PFMultiplayerServerCreateBuildWithManagedContainerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerCreateBuildWithManagedContainerGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateBuildWithProcessBasedServer(TestContext& testContext)
{
    struct CreateBuildWithProcessBasedServerResult : public XAsyncResult
    {
        PFMultiplayerServerCreateBuildWithProcessBasedServerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerCreateBuildWithProcessBasedServerGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerCreateRemoteUser(TestContext& testContext)
{
    struct CreateRemoteUserResult : public XAsyncResult
    {
        PFMultiplayerServerCreateRemoteUserResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerCreateRemoteUserGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerEnableMultiplayerServersForTitle(TestContext& testContext)
{
    struct EnableMultiplayerServersForTitleResult : public XAsyncResult
    {
        PFMultiplayerServerEnableMultiplayerServersForTitleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerEnableMultiplayerServersForTitleGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerGetBuild(TestContext& testContext)
{
    struct GetBuildResult : public XAsyncResult
    {
        PFMultiplayerServerGetBuildResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerGetBuildGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerGetBuildAlias(TestContext& testContext)
{
    struct GetBuildAliasResult : public XAsyncResult
    {
        PFMultiplayerServerBuildAliasDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerGetBuildAliasGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerGetMultiplayerServerDetails(TestContext& testContext)
{
    struct GetMultiplayerServerDetailsResult : public XAsyncResult
    {
        PFMultiplayerServerGetMultiplayerServerDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerGetMultiplayerServerDetailsGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerGetTitleEnabledForMultiplayerServersStatus(TestContext& testContext)
{
    struct GetTitleEnabledForMultiplayerServersStatusResult : public XAsyncResult
    {
        PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerGetTitleMultiplayerServersQuotaChange(TestContext& testContext)
{
    struct GetTitleMultiplayerServersQuotaChangeResult : public XAsyncResult
    {
        PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerGetTitleMultiplayerServersQuotas(TestContext& testContext)
{
    struct GetTitleMultiplayerServersQuotasResult : public XAsyncResult
    {
        PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerGetTitleMultiplayerServersQuotasGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListArchivedMultiplayerServers(TestContext& testContext)
{
    struct ListArchivedMultiplayerServersResult : public XAsyncResult
    {
        PFMultiplayerServerListMultiplayerServersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListArchivedMultiplayerServersGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListAssetSummaries(TestContext& testContext)
{
    struct ListAssetSummariesResult : public XAsyncResult
    {
        PFMultiplayerServerListAssetSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListAssetSummariesGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListBuildAliases(TestContext& testContext)
{
    struct ListBuildAliasesResult : public XAsyncResult
    {
        PFMultiplayerServerListBuildAliasesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListBuildAliasesGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListBuildSummariesV2(TestContext& testContext)
{
    struct ListBuildSummariesV2Result : public XAsyncResult
    {
        PFMultiplayerServerListBuildSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListBuildSummariesV2GetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListCertificateSummaries(TestContext& testContext)
{
    struct ListCertificateSummariesResult : public XAsyncResult
    {
        PFMultiplayerServerListCertificateSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListCertificateSummariesGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListContainerImages(TestContext& testContext)
{
    struct ListContainerImagesResult : public XAsyncResult
    {
        PFMultiplayerServerListContainerImagesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListContainerImagesGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListContainerImageTags(TestContext& testContext)
{
    struct ListContainerImageTagsResult : public XAsyncResult
    {
        PFMultiplayerServerListContainerImageTagsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListContainerImageTagsGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListMultiplayerServers(TestContext& testContext)
{
    struct ListMultiplayerServersResult : public XAsyncResult
    {
        PFMultiplayerServerListMultiplayerServersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListMultiplayerServersGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListPartyQosServers(TestContext& testContext)
{
    struct ListPartyQosServersResult : public XAsyncResult
    {
        PFMultiplayerServerListPartyQosServersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListPartyQosServersGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListQosServersForTitle(TestContext& testContext)
{
    struct ListQosServersForTitleResult : public XAsyncResult
    {
        PFMultiplayerServerListQosServersForTitleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListQosServersForTitleGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListTitleMultiplayerServersQuotaChanges(TestContext& testContext)
{
    struct ListTitleMultiplayerServersQuotaChangesResult : public XAsyncResult
    {
        PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListTitleMultiplayerServersQuotaChangesGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerListVirtualMachineSummaries(TestContext& testContext)
{
    struct ListVirtualMachineSummariesResult : public XAsyncResult
    {
        PFMultiplayerServerListVirtualMachineSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerListVirtualMachineSummariesGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerRequestMultiplayerServer(TestContext& testContext)
{
    struct RequestMultiplayerServerResult : public XAsyncResult
    {
        PFMultiplayerServerRequestMultiplayerServerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerRequestMultiplayerServerGetResult(async, &resultHandle, &result)); 
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
void AutoGenMultiplayerServerTests::TestMultiplayerServerUpdateBuildAlias(TestContext& testContext)
{
    struct UpdateBuildAliasResult : public XAsyncResult
    {
        PFMultiplayerServerBuildAliasDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFMultiplayerServerUpdateBuildAliasGetResult(async, &resultHandle, &result)); 
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

}
