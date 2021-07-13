#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenMultiplayerTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenMultiplayerTests::Log(std::stringstream& ss)
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

void AutoGenMultiplayerTests::AddTests()
{
    // Generated tests 
    AddTest("TestMultiplayerCancelAllMatchmakingTicketsForPlayer", &AutoGenMultiplayerTests::TestMultiplayerCancelAllMatchmakingTicketsForPlayer);
    AddTest("TestMultiplayerCancelAllServerBackfillTicketsForPlayer", &AutoGenMultiplayerTests::TestMultiplayerCancelAllServerBackfillTicketsForPlayer);
    AddTest("TestMultiplayerCancelMatchmakingTicket", &AutoGenMultiplayerTests::TestMultiplayerCancelMatchmakingTicket);
    AddTest("TestMultiplayerCancelServerBackfillTicket", &AutoGenMultiplayerTests::TestMultiplayerCancelServerBackfillTicket);
    AddTest("TestMultiplayerCreateBuildAlias", &AutoGenMultiplayerTests::TestMultiplayerCreateBuildAlias);
    AddTest("TestMultiplayerCreateBuildWithCustomContainer", &AutoGenMultiplayerTests::TestMultiplayerCreateBuildWithCustomContainer);
    AddTest("TestMultiplayerCreateBuildWithManagedContainer", &AutoGenMultiplayerTests::TestMultiplayerCreateBuildWithManagedContainer);
    AddTest("TestMultiplayerCreateBuildWithProcessBasedServer", &AutoGenMultiplayerTests::TestMultiplayerCreateBuildWithProcessBasedServer);
    AddTest("TestMultiplayerCreateMatchmakingTicket", &AutoGenMultiplayerTests::TestMultiplayerCreateMatchmakingTicket);
    AddTest("TestMultiplayerCreateRemoteUser", &AutoGenMultiplayerTests::TestMultiplayerCreateRemoteUser);
    AddTest("TestMultiplayerCreateServerBackfillTicket", &AutoGenMultiplayerTests::TestMultiplayerCreateServerBackfillTicket);
    AddTest("TestMultiplayerCreateServerMatchmakingTicket", &AutoGenMultiplayerTests::TestMultiplayerCreateServerMatchmakingTicket);
    AddTest("TestMultiplayerCreateTitleMultiplayerServersQuotaChange", &AutoGenMultiplayerTests::TestMultiplayerCreateTitleMultiplayerServersQuotaChange);
    AddTest("TestMultiplayerDeleteAsset", &AutoGenMultiplayerTests::TestMultiplayerDeleteAsset);
    AddTest("TestMultiplayerDeleteBuild", &AutoGenMultiplayerTests::TestMultiplayerDeleteBuild);
    AddTest("TestMultiplayerDeleteBuildAlias", &AutoGenMultiplayerTests::TestMultiplayerDeleteBuildAlias);
    AddTest("TestMultiplayerDeleteBuildRegion", &AutoGenMultiplayerTests::TestMultiplayerDeleteBuildRegion);
    AddTest("TestMultiplayerDeleteCertificate", &AutoGenMultiplayerTests::TestMultiplayerDeleteCertificate);
    AddTest("TestMultiplayerDeleteContainerImageRepository", &AutoGenMultiplayerTests::TestMultiplayerDeleteContainerImageRepository);
    AddTest("TestMultiplayerDeleteRemoteUser", &AutoGenMultiplayerTests::TestMultiplayerDeleteRemoteUser);
    AddTest("TestMultiplayerEnableMultiplayerServersForTitle", &AutoGenMultiplayerTests::TestMultiplayerEnableMultiplayerServersForTitle);
    AddTest("TestMultiplayerGetAssetDownloadUrl", &AutoGenMultiplayerTests::TestMultiplayerGetAssetDownloadUrl);
    AddTest("TestMultiplayerGetAssetUploadUrl", &AutoGenMultiplayerTests::TestMultiplayerGetAssetUploadUrl);
    AddTest("TestMultiplayerGetBuild", &AutoGenMultiplayerTests::TestMultiplayerGetBuild);
    AddTest("TestMultiplayerGetBuildAlias", &AutoGenMultiplayerTests::TestMultiplayerGetBuildAlias);
    AddTest("TestMultiplayerGetContainerRegistryCredentials", &AutoGenMultiplayerTests::TestMultiplayerGetContainerRegistryCredentials);
    AddTest("TestMultiplayerGetMatch", &AutoGenMultiplayerTests::TestMultiplayerGetMatch);
    AddTest("TestMultiplayerGetMatchmakingTicket", &AutoGenMultiplayerTests::TestMultiplayerGetMatchmakingTicket);
    AddTest("TestMultiplayerGetMultiplayerServerDetails", &AutoGenMultiplayerTests::TestMultiplayerGetMultiplayerServerDetails);
    AddTest("TestMultiplayerGetMultiplayerServerLogs", &AutoGenMultiplayerTests::TestMultiplayerGetMultiplayerServerLogs);
    AddTest("TestMultiplayerGetMultiplayerSessionLogsBySessionId", &AutoGenMultiplayerTests::TestMultiplayerGetMultiplayerSessionLogsBySessionId);
    AddTest("TestMultiplayerGetQueueStatistics", &AutoGenMultiplayerTests::TestMultiplayerGetQueueStatistics);
    AddTest("TestMultiplayerGetRemoteLoginEndpoint", &AutoGenMultiplayerTests::TestMultiplayerGetRemoteLoginEndpoint);
    AddTest("TestMultiplayerGetServerBackfillTicket", &AutoGenMultiplayerTests::TestMultiplayerGetServerBackfillTicket);
    AddTest("TestMultiplayerGetTitleEnabledForMultiplayerServersStatus", &AutoGenMultiplayerTests::TestMultiplayerGetTitleEnabledForMultiplayerServersStatus);
    AddTest("TestMultiplayerGetTitleMultiplayerServersQuotaChange", &AutoGenMultiplayerTests::TestMultiplayerGetTitleMultiplayerServersQuotaChange);
    AddTest("TestMultiplayerGetTitleMultiplayerServersQuotas", &AutoGenMultiplayerTests::TestMultiplayerGetTitleMultiplayerServersQuotas);
    AddTest("TestMultiplayerJoinMatchmakingTicket", &AutoGenMultiplayerTests::TestMultiplayerJoinMatchmakingTicket);
    AddTest("TestMultiplayerListArchivedMultiplayerServers", &AutoGenMultiplayerTests::TestMultiplayerListArchivedMultiplayerServers);
    AddTest("TestMultiplayerListAssetSummaries", &AutoGenMultiplayerTests::TestMultiplayerListAssetSummaries);
    AddTest("TestMultiplayerListBuildAliases", &AutoGenMultiplayerTests::TestMultiplayerListBuildAliases);
    AddTest("TestMultiplayerListBuildSummariesV2", &AutoGenMultiplayerTests::TestMultiplayerListBuildSummariesV2);
    AddTest("TestMultiplayerListCertificateSummaries", &AutoGenMultiplayerTests::TestMultiplayerListCertificateSummaries);
    AddTest("TestMultiplayerListContainerImages", &AutoGenMultiplayerTests::TestMultiplayerListContainerImages);
    AddTest("TestMultiplayerListContainerImageTags", &AutoGenMultiplayerTests::TestMultiplayerListContainerImageTags);
    AddTest("TestMultiplayerListMatchmakingTicketsForPlayer", &AutoGenMultiplayerTests::TestMultiplayerListMatchmakingTicketsForPlayer);
    AddTest("TestMultiplayerListMultiplayerServers", &AutoGenMultiplayerTests::TestMultiplayerListMultiplayerServers);
    AddTest("TestMultiplayerListPartyQosServers", &AutoGenMultiplayerTests::TestMultiplayerListPartyQosServers);
    AddTest("TestMultiplayerListQosServersForTitle", &AutoGenMultiplayerTests::TestMultiplayerListQosServersForTitle);
    AddTest("TestMultiplayerListServerBackfillTicketsForPlayer", &AutoGenMultiplayerTests::TestMultiplayerListServerBackfillTicketsForPlayer);
    AddTest("TestMultiplayerListTitleMultiplayerServersQuotaChanges", &AutoGenMultiplayerTests::TestMultiplayerListTitleMultiplayerServersQuotaChanges);
    AddTest("TestMultiplayerListVirtualMachineSummaries", &AutoGenMultiplayerTests::TestMultiplayerListVirtualMachineSummaries);
    AddTest("TestMultiplayerRequestMultiplayerServer", &AutoGenMultiplayerTests::TestMultiplayerRequestMultiplayerServer);
    AddTest("TestMultiplayerRolloverContainerRegistryCredentials", &AutoGenMultiplayerTests::TestMultiplayerRolloverContainerRegistryCredentials);
    AddTest("TestMultiplayerShutdownMultiplayerServer", &AutoGenMultiplayerTests::TestMultiplayerShutdownMultiplayerServer);
    AddTest("TestMultiplayerUntagContainerImage", &AutoGenMultiplayerTests::TestMultiplayerUntagContainerImage);
    AddTest("TestMultiplayerUpdateBuildAlias", &AutoGenMultiplayerTests::TestMultiplayerUpdateBuildAlias);
    AddTest("TestMultiplayerUpdateBuildName", &AutoGenMultiplayerTests::TestMultiplayerUpdateBuildName);
    AddTest("TestMultiplayerUpdateBuildRegion", &AutoGenMultiplayerTests::TestMultiplayerUpdateBuildRegion);
    AddTest("TestMultiplayerUpdateBuildRegions", &AutoGenMultiplayerTests::TestMultiplayerUpdateBuildRegions);
    AddTest("TestMultiplayerUploadCertificate", &AutoGenMultiplayerTests::TestMultiplayerUploadCertificate);
}

void AutoGenMultiplayerTests::ClassSetUp()
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

void AutoGenMultiplayerTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenMultiplayerTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

void AutoGenMultiplayerTests::TestMultiplayerCancelAllMatchmakingTicketsForPlayer(TestContext& testContext)
{
    struct CancelAllMatchmakingTicketsForPlayerResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<CancelAllMatchmakingTicketsForPlayerResult>>(testContext);

    PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest request;
    FillPlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest( &request );
    LogPlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest( &request, "TestMultiplayerCancelAllMatchmakingTicketsForPlayer" );
    HRESULT hr = PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCancelAllServerBackfillTicketsForPlayer(TestContext& testContext)
{
    struct CancelAllServerBackfillTicketsForPlayerResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<CancelAllServerBackfillTicketsForPlayerResult>>(testContext);

    PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest request;
    FillPlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest( &request );
    LogPlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest( &request, "TestMultiplayerCancelAllServerBackfillTicketsForPlayer" );
    HRESULT hr = PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCancelMatchmakingTicket(TestContext& testContext)
{
    struct CancelMatchmakingTicketResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<CancelMatchmakingTicketResult>>(testContext);

    PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest request;
    FillPlayFabMultiplayerCancelMatchmakingTicketRequest( &request );
    LogPlayFabMultiplayerCancelMatchmakingTicketRequest( &request, "TestMultiplayerCancelMatchmakingTicket" );
    HRESULT hr = PlayFabMultiplayerCancelMatchmakingTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCancelMatchmakingTicketAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCancelServerBackfillTicket(TestContext& testContext)
{
    struct CancelServerBackfillTicketResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<CancelServerBackfillTicketResult>>(testContext);

    PlayFab::MultiplayerModels::CancelServerBackfillTicketRequest request;
    FillPlayFabMultiplayerCancelServerBackfillTicketRequest( &request );
    LogPlayFabMultiplayerCancelServerBackfillTicketRequest( &request, "TestMultiplayerCancelServerBackfillTicket" );
    HRESULT hr = PlayFabMultiplayerCancelServerBackfillTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCancelServerBackfillTicketAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCreateBuildAlias(TestContext& testContext)
{
    struct CreateBuildAliasResult : public XAsyncResult
    {
        PlayFabMultiplayerBuildAliasDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerCreateBuildAliasGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerBuildAliasDetailsResponse( result );
            return ValidatePlayFabMultiplayerBuildAliasDetailsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateBuildAliasResult>>(testContext);

    PlayFab::MultiplayerModels::CreateBuildAliasRequest request;
    FillPlayFabMultiplayerCreateBuildAliasRequest( &request );
    LogPlayFabMultiplayerCreateBuildAliasRequest( &request, "TestMultiplayerCreateBuildAlias" );
    HRESULT hr = PlayFabMultiplayerCreateBuildAliasAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCreateBuildAliasAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCreateBuildWithCustomContainer(TestContext& testContext)
{
    struct CreateBuildWithCustomContainerResult : public XAsyncResult
    {
        PlayFabMultiplayerCreateBuildWithCustomContainerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerCreateBuildWithCustomContainerGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerCreateBuildWithCustomContainerResponse( result );
            return ValidatePlayFabMultiplayerCreateBuildWithCustomContainerResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateBuildWithCustomContainerResult>>(testContext);

    PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest request;
    FillPlayFabMultiplayerCreateBuildWithCustomContainerRequest( &request );
    LogPlayFabMultiplayerCreateBuildWithCustomContainerRequest( &request, "TestMultiplayerCreateBuildWithCustomContainer" );
    HRESULT hr = PlayFabMultiplayerCreateBuildWithCustomContainerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCreateBuildWithCustomContainerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCreateBuildWithManagedContainer(TestContext& testContext)
{
    struct CreateBuildWithManagedContainerResult : public XAsyncResult
    {
        PlayFabMultiplayerCreateBuildWithManagedContainerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerCreateBuildWithManagedContainerGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerCreateBuildWithManagedContainerResponse( result );
            return ValidatePlayFabMultiplayerCreateBuildWithManagedContainerResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateBuildWithManagedContainerResult>>(testContext);

    PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest request;
    FillPlayFabMultiplayerCreateBuildWithManagedContainerRequest( &request );
    LogPlayFabMultiplayerCreateBuildWithManagedContainerRequest( &request, "TestMultiplayerCreateBuildWithManagedContainer" );
    HRESULT hr = PlayFabMultiplayerCreateBuildWithManagedContainerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCreateBuildWithManagedContainerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCreateBuildWithProcessBasedServer(TestContext& testContext)
{
    struct CreateBuildWithProcessBasedServerResult : public XAsyncResult
    {
        PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerCreateBuildWithProcessBasedServerGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerCreateBuildWithProcessBasedServerResponse( result );
            return ValidatePlayFabMultiplayerCreateBuildWithProcessBasedServerResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateBuildWithProcessBasedServerResult>>(testContext);

    PlayFab::MultiplayerModels::CreateBuildWithProcessBasedServerRequest request;
    FillPlayFabMultiplayerCreateBuildWithProcessBasedServerRequest( &request );
    LogPlayFabMultiplayerCreateBuildWithProcessBasedServerRequest( &request, "TestMultiplayerCreateBuildWithProcessBasedServer" );
    HRESULT hr = PlayFabMultiplayerCreateBuildWithProcessBasedServerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCreateBuildWithProcessBasedServerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCreateMatchmakingTicket(TestContext& testContext)
{
    struct CreateMatchmakingTicketResult : public XAsyncResult
    {
        PlayFabMultiplayerCreateMatchmakingTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerCreateMatchmakingTicketGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerCreateMatchmakingTicketGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerCreateMatchmakingTicketResult( result );
            return ValidatePlayFabMultiplayerCreateMatchmakingTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateMatchmakingTicketResult>>(testContext);

    PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest request;
    FillPlayFabMultiplayerCreateMatchmakingTicketRequest( &request );
    LogPlayFabMultiplayerCreateMatchmakingTicketRequest( &request, "TestMultiplayerCreateMatchmakingTicket" );
    HRESULT hr = PlayFabMultiplayerCreateMatchmakingTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCreateMatchmakingTicketAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCreateRemoteUser(TestContext& testContext)
{
    struct CreateRemoteUserResult : public XAsyncResult
    {
        PlayFabMultiplayerCreateRemoteUserResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerCreateRemoteUserGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerCreateRemoteUserResponse( result );
            return ValidatePlayFabMultiplayerCreateRemoteUserResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateRemoteUserResult>>(testContext);

    PlayFab::MultiplayerModels::CreateRemoteUserRequest request;
    FillPlayFabMultiplayerCreateRemoteUserRequest( &request );
    LogPlayFabMultiplayerCreateRemoteUserRequest( &request, "TestMultiplayerCreateRemoteUser" );
    HRESULT hr = PlayFabMultiplayerCreateRemoteUserAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCreateRemoteUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCreateServerBackfillTicket(TestContext& testContext)
{
    struct CreateServerBackfillTicketResult : public XAsyncResult
    {
        PlayFabMultiplayerCreateServerBackfillTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerCreateServerBackfillTicketGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerCreateServerBackfillTicketGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerCreateServerBackfillTicketResult( result );
            return ValidatePlayFabMultiplayerCreateServerBackfillTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateServerBackfillTicketResult>>(testContext);

    PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest request;
    FillPlayFabMultiplayerCreateServerBackfillTicketRequest( &request );
    LogPlayFabMultiplayerCreateServerBackfillTicketRequest( &request, "TestMultiplayerCreateServerBackfillTicket" );
    HRESULT hr = PlayFabMultiplayerCreateServerBackfillTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCreateServerBackfillTicketAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCreateServerMatchmakingTicket(TestContext& testContext)
{
    struct CreateServerMatchmakingTicketResult : public XAsyncResult
    {
        PlayFabMultiplayerCreateMatchmakingTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerCreateServerMatchmakingTicketGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerCreateServerMatchmakingTicketGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerCreateMatchmakingTicketResult( result );
            return ValidatePlayFabMultiplayerCreateMatchmakingTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateServerMatchmakingTicketResult>>(testContext);

    PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest request;
    FillPlayFabMultiplayerCreateServerMatchmakingTicketRequest( &request );
    LogPlayFabMultiplayerCreateServerMatchmakingTicketRequest( &request, "TestMultiplayerCreateServerMatchmakingTicket" );
    HRESULT hr = PlayFabMultiplayerCreateServerMatchmakingTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCreateServerMatchmakingTicketAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerCreateTitleMultiplayerServersQuotaChange(TestContext& testContext)
{
    struct CreateTitleMultiplayerServersQuotaChangeResult : public XAsyncResult
    {
        PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse( result );
            return ValidatePlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateTitleMultiplayerServersQuotaChangeResult>>(testContext);

    PlayFab::MultiplayerModels::CreateTitleMultiplayerServersQuotaChangeRequest request;
    FillPlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest( &request );
    LogPlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest( &request, "TestMultiplayerCreateTitleMultiplayerServersQuotaChange" );
    HRESULT hr = PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerDeleteAsset(TestContext& testContext)
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

    PlayFab::MultiplayerModels::DeleteAssetRequest request;
    FillPlayFabMultiplayerDeleteAssetRequest( &request );
    LogPlayFabMultiplayerDeleteAssetRequest( &request, "TestMultiplayerDeleteAsset" );
    HRESULT hr = PlayFabMultiplayerDeleteAssetAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerDeleteAssetAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerDeleteBuild(TestContext& testContext)
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

    PlayFab::MultiplayerModels::DeleteBuildRequest request;
    FillPlayFabMultiplayerDeleteBuildRequest( &request );
    LogPlayFabMultiplayerDeleteBuildRequest( &request, "TestMultiplayerDeleteBuild" );
    HRESULT hr = PlayFabMultiplayerDeleteBuildAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerDeleteBuildAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerDeleteBuildAlias(TestContext& testContext)
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

    PlayFab::MultiplayerModels::DeleteBuildAliasRequest request;
    FillPlayFabMultiplayerDeleteBuildAliasRequest( &request );
    LogPlayFabMultiplayerDeleteBuildAliasRequest( &request, "TestMultiplayerDeleteBuildAlias" );
    HRESULT hr = PlayFabMultiplayerDeleteBuildAliasAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerDeleteBuildAliasAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerDeleteBuildRegion(TestContext& testContext)
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

    PlayFab::MultiplayerModels::DeleteBuildRegionRequest request;
    FillPlayFabMultiplayerDeleteBuildRegionRequest( &request );
    LogPlayFabMultiplayerDeleteBuildRegionRequest( &request, "TestMultiplayerDeleteBuildRegion" );
    HRESULT hr = PlayFabMultiplayerDeleteBuildRegionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerDeleteBuildRegionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerDeleteCertificate(TestContext& testContext)
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

    PlayFab::MultiplayerModels::DeleteCertificateRequest request;
    FillPlayFabMultiplayerDeleteCertificateRequest( &request );
    LogPlayFabMultiplayerDeleteCertificateRequest( &request, "TestMultiplayerDeleteCertificate" );
    HRESULT hr = PlayFabMultiplayerDeleteCertificateAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerDeleteCertificateAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerDeleteContainerImageRepository(TestContext& testContext)
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

    PlayFab::MultiplayerModels::DeleteContainerImageRequest request;
    FillPlayFabMultiplayerDeleteContainerImageRequest( &request );
    LogPlayFabMultiplayerDeleteContainerImageRequest( &request, "TestMultiplayerDeleteContainerImageRepository" );
    HRESULT hr = PlayFabMultiplayerDeleteContainerImageRepositoryAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerDeleteContainerImageRepositoryAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerDeleteRemoteUser(TestContext& testContext)
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

    PlayFab::MultiplayerModels::DeleteRemoteUserRequest request;
    FillPlayFabMultiplayerDeleteRemoteUserRequest( &request );
    LogPlayFabMultiplayerDeleteRemoteUserRequest( &request, "TestMultiplayerDeleteRemoteUser" );
    HRESULT hr = PlayFabMultiplayerDeleteRemoteUserAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerDeleteRemoteUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerEnableMultiplayerServersForTitle(TestContext& testContext)
{
    struct EnableMultiplayerServersForTitleResult : public XAsyncResult
    {
        PlayFabMultiplayerEnableMultiplayerServersForTitleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerEnableMultiplayerServersForTitleGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerEnableMultiplayerServersForTitleResponse( result );
            return ValidatePlayFabMultiplayerEnableMultiplayerServersForTitleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<EnableMultiplayerServersForTitleResult>>(testContext);

    PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest request;
    FillPlayFabMultiplayerEnableMultiplayerServersForTitleRequest( &request );
    LogPlayFabMultiplayerEnableMultiplayerServersForTitleRequest( &request, "TestMultiplayerEnableMultiplayerServersForTitle" );
    HRESULT hr = PlayFabMultiplayerEnableMultiplayerServersForTitleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerEnableMultiplayerServersForTitleAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetAssetDownloadUrl(TestContext& testContext)
{
    struct GetAssetDownloadUrlResult : public XAsyncResult
    {
        PlayFabMultiplayerGetAssetDownloadUrlResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerGetAssetDownloadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerGetAssetDownloadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetAssetDownloadUrlResponse( result );
            return ValidatePlayFabMultiplayerGetAssetDownloadUrlResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetAssetDownloadUrlResult>>(testContext);

    PlayFab::MultiplayerModels::GetAssetDownloadUrlRequest request;
    FillPlayFabMultiplayerGetAssetDownloadUrlRequest( &request );
    LogPlayFabMultiplayerGetAssetDownloadUrlRequest( &request, "TestMultiplayerGetAssetDownloadUrl" );
    HRESULT hr = PlayFabMultiplayerGetAssetDownloadUrlAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetAssetDownloadUrlAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetAssetUploadUrl(TestContext& testContext)
{
    struct GetAssetUploadUrlResult : public XAsyncResult
    {
        PlayFabMultiplayerGetAssetUploadUrlResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerGetAssetUploadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerGetAssetUploadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetAssetUploadUrlResponse( result );
            return ValidatePlayFabMultiplayerGetAssetUploadUrlResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetAssetUploadUrlResult>>(testContext);

    PlayFab::MultiplayerModels::GetAssetUploadUrlRequest request;
    FillPlayFabMultiplayerGetAssetUploadUrlRequest( &request );
    LogPlayFabMultiplayerGetAssetUploadUrlRequest( &request, "TestMultiplayerGetAssetUploadUrl" );
    HRESULT hr = PlayFabMultiplayerGetAssetUploadUrlAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetAssetUploadUrlAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetBuild(TestContext& testContext)
{
    struct GetBuildResult : public XAsyncResult
    {
        PlayFabMultiplayerGetBuildResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerGetBuildGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetBuildResponse( result );
            return ValidatePlayFabMultiplayerGetBuildResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetBuildResult>>(testContext);

    PlayFab::MultiplayerModels::GetBuildRequest request;
    FillPlayFabMultiplayerGetBuildRequest( &request );
    LogPlayFabMultiplayerGetBuildRequest( &request, "TestMultiplayerGetBuild" );
    HRESULT hr = PlayFabMultiplayerGetBuildAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetBuildAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetBuildAlias(TestContext& testContext)
{
    struct GetBuildAliasResult : public XAsyncResult
    {
        PlayFabMultiplayerBuildAliasDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerGetBuildAliasGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerBuildAliasDetailsResponse( result );
            return ValidatePlayFabMultiplayerBuildAliasDetailsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetBuildAliasResult>>(testContext);

    PlayFab::MultiplayerModels::GetBuildAliasRequest request;
    FillPlayFabMultiplayerGetBuildAliasRequest( &request );
    LogPlayFabMultiplayerGetBuildAliasRequest( &request, "TestMultiplayerGetBuildAlias" );
    HRESULT hr = PlayFabMultiplayerGetBuildAliasAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetBuildAliasAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetContainerRegistryCredentials(TestContext& testContext)
{
    struct GetContainerRegistryCredentialsResult : public XAsyncResult
    {
        PlayFabMultiplayerGetContainerRegistryCredentialsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerGetContainerRegistryCredentialsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerGetContainerRegistryCredentialsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetContainerRegistryCredentialsResponse( result );
            return ValidatePlayFabMultiplayerGetContainerRegistryCredentialsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetContainerRegistryCredentialsResult>>(testContext);

    PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest request;
    FillPlayFabMultiplayerGetContainerRegistryCredentialsRequest( &request );
    LogPlayFabMultiplayerGetContainerRegistryCredentialsRequest( &request, "TestMultiplayerGetContainerRegistryCredentials" );
    HRESULT hr = PlayFabMultiplayerGetContainerRegistryCredentialsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetContainerRegistryCredentialsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetMatch(TestContext& testContext)
{
    struct GetMatchResult : public XAsyncResult
    {
        PlayFabMultiplayerGetMatchResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerGetMatchGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetMatchResult( result );
            return ValidatePlayFabMultiplayerGetMatchResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMatchResult>>(testContext);

    PlayFab::MultiplayerModels::GetMatchRequest request;
    FillPlayFabMultiplayerGetMatchRequest( &request );
    LogPlayFabMultiplayerGetMatchRequest( &request, "TestMultiplayerGetMatch" );
    HRESULT hr = PlayFabMultiplayerGetMatchAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetMatchAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetMatchmakingTicket(TestContext& testContext)
{
    struct GetMatchmakingTicketResult : public XAsyncResult
    {
        PlayFabMultiplayerGetMatchmakingTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerGetMatchmakingTicketGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetMatchmakingTicketResult( result );
            return ValidatePlayFabMultiplayerGetMatchmakingTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMatchmakingTicketResult>>(testContext);

    PlayFab::MultiplayerModels::GetMatchmakingTicketRequest request;
    FillPlayFabMultiplayerGetMatchmakingTicketRequest( &request );
    LogPlayFabMultiplayerGetMatchmakingTicketRequest( &request, "TestMultiplayerGetMatchmakingTicket" );
    HRESULT hr = PlayFabMultiplayerGetMatchmakingTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetMatchmakingTicketAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetMultiplayerServerDetails(TestContext& testContext)
{
    struct GetMultiplayerServerDetailsResult : public XAsyncResult
    {
        PlayFabMultiplayerGetMultiplayerServerDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerGetMultiplayerServerDetailsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetMultiplayerServerDetailsResponse( result );
            return ValidatePlayFabMultiplayerGetMultiplayerServerDetailsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMultiplayerServerDetailsResult>>(testContext);

    PlayFab::MultiplayerModels::GetMultiplayerServerDetailsRequest request;
    FillPlayFabMultiplayerGetMultiplayerServerDetailsRequest( &request );
    LogPlayFabMultiplayerGetMultiplayerServerDetailsRequest( &request, "TestMultiplayerGetMultiplayerServerDetails" );
    HRESULT hr = PlayFabMultiplayerGetMultiplayerServerDetailsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetMultiplayerServerDetailsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetMultiplayerServerLogs(TestContext& testContext)
{
    struct GetMultiplayerServerLogsResult : public XAsyncResult
    {
        PlayFabMultiplayerGetMultiplayerServerLogsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerGetMultiplayerServerLogsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerGetMultiplayerServerLogsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetMultiplayerServerLogsResponse( result );
            return ValidatePlayFabMultiplayerGetMultiplayerServerLogsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMultiplayerServerLogsResult>>(testContext);

    PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest request;
    FillPlayFabMultiplayerGetMultiplayerServerLogsRequest( &request );
    LogPlayFabMultiplayerGetMultiplayerServerLogsRequest( &request, "TestMultiplayerGetMultiplayerServerLogs" );
    HRESULT hr = PlayFabMultiplayerGetMultiplayerServerLogsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetMultiplayerServerLogsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetMultiplayerSessionLogsBySessionId(TestContext& testContext)
{
    struct GetMultiplayerSessionLogsBySessionIdResult : public XAsyncResult
    {
        PlayFabMultiplayerGetMultiplayerServerLogsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetMultiplayerServerLogsResponse( result );
            return ValidatePlayFabMultiplayerGetMultiplayerServerLogsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMultiplayerSessionLogsBySessionIdResult>>(testContext);

    PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest request;
    FillPlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest( &request );
    LogPlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest( &request, "TestMultiplayerGetMultiplayerSessionLogsBySessionId" );
    HRESULT hr = PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetQueueStatistics(TestContext& testContext)
{
    struct GetQueueStatisticsResult : public XAsyncResult
    {
        PlayFabMultiplayerGetQueueStatisticsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerGetQueueStatisticsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetQueueStatisticsResult( result );
            return ValidatePlayFabMultiplayerGetQueueStatisticsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetQueueStatisticsResult>>(testContext);

    PlayFab::MultiplayerModels::GetQueueStatisticsRequest request;
    FillPlayFabMultiplayerGetQueueStatisticsRequest( &request );
    LogPlayFabMultiplayerGetQueueStatisticsRequest( &request, "TestMultiplayerGetQueueStatistics" );
    HRESULT hr = PlayFabMultiplayerGetQueueStatisticsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetQueueStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetRemoteLoginEndpoint(TestContext& testContext)
{
    struct GetRemoteLoginEndpointResult : public XAsyncResult
    {
        PlayFabMultiplayerGetRemoteLoginEndpointResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerGetRemoteLoginEndpointGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerGetRemoteLoginEndpointGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetRemoteLoginEndpointResponse( result );
            return ValidatePlayFabMultiplayerGetRemoteLoginEndpointResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetRemoteLoginEndpointResult>>(testContext);

    PlayFab::MultiplayerModels::GetRemoteLoginEndpointRequest request;
    FillPlayFabMultiplayerGetRemoteLoginEndpointRequest( &request );
    LogPlayFabMultiplayerGetRemoteLoginEndpointRequest( &request, "TestMultiplayerGetRemoteLoginEndpoint" );
    HRESULT hr = PlayFabMultiplayerGetRemoteLoginEndpointAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetRemoteLoginEndpointAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetServerBackfillTicket(TestContext& testContext)
{
    struct GetServerBackfillTicketResult : public XAsyncResult
    {
        PlayFabMultiplayerGetServerBackfillTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerGetServerBackfillTicketGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetServerBackfillTicketResult( result );
            return ValidatePlayFabMultiplayerGetServerBackfillTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetServerBackfillTicketResult>>(testContext);

    PlayFab::MultiplayerModels::GetServerBackfillTicketRequest request;
    FillPlayFabMultiplayerGetServerBackfillTicketRequest( &request );
    LogPlayFabMultiplayerGetServerBackfillTicketRequest( &request, "TestMultiplayerGetServerBackfillTicket" );
    HRESULT hr = PlayFabMultiplayerGetServerBackfillTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetServerBackfillTicketAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetTitleEnabledForMultiplayerServersStatus(TestContext& testContext)
{
    struct GetTitleEnabledForMultiplayerServersStatusResult : public XAsyncResult
    {
        PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse( result );
            return ValidatePlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleEnabledForMultiplayerServersStatusResult>>(testContext);

    PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest request;
    FillPlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest( &request );
    LogPlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest( &request, "TestMultiplayerGetTitleEnabledForMultiplayerServersStatus" );
    HRESULT hr = PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetTitleMultiplayerServersQuotaChange(TestContext& testContext)
{
    struct GetTitleMultiplayerServersQuotaChangeResult : public XAsyncResult
    {
        PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse( result );
            return ValidatePlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleMultiplayerServersQuotaChangeResult>>(testContext);

    PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotaChangeRequest request;
    FillPlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest( &request );
    LogPlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest( &request, "TestMultiplayerGetTitleMultiplayerServersQuotaChange" );
    HRESULT hr = PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerGetTitleMultiplayerServersQuotas(TestContext& testContext)
{
    struct GetTitleMultiplayerServersQuotasResult : public XAsyncResult
    {
        PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerGetTitleMultiplayerServersQuotasGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse( result );
            return ValidatePlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleMultiplayerServersQuotasResult>>(testContext);

    PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasRequest request;
    FillPlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest( &request );
    LogPlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest( &request, "TestMultiplayerGetTitleMultiplayerServersQuotas" );
    HRESULT hr = PlayFabMultiplayerGetTitleMultiplayerServersQuotasAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerGetTitleMultiplayerServersQuotasAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerJoinMatchmakingTicket(TestContext& testContext)
{
    struct JoinMatchmakingTicketResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<JoinMatchmakingTicketResult>>(testContext);

    PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest request;
    FillPlayFabMultiplayerJoinMatchmakingTicketRequest( &request );
    LogPlayFabMultiplayerJoinMatchmakingTicketRequest( &request, "TestMultiplayerJoinMatchmakingTicket" );
    HRESULT hr = PlayFabMultiplayerJoinMatchmakingTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerJoinMatchmakingTicketAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListArchivedMultiplayerServers(TestContext& testContext)
{
    struct ListArchivedMultiplayerServersResult : public XAsyncResult
    {
        PlayFabMultiplayerListMultiplayerServersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListArchivedMultiplayerServersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListMultiplayerServersResponse( result );
            return ValidatePlayFabMultiplayerListMultiplayerServersResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListArchivedMultiplayerServersResult>>(testContext);

    PlayFab::MultiplayerModels::ListMultiplayerServersRequest request;
    FillPlayFabMultiplayerListMultiplayerServersRequest( &request );
    LogPlayFabMultiplayerListMultiplayerServersRequest( &request, "TestMultiplayerListArchivedMultiplayerServers" );
    HRESULT hr = PlayFabMultiplayerListArchivedMultiplayerServersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListArchivedMultiplayerServersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListAssetSummaries(TestContext& testContext)
{
    struct ListAssetSummariesResult : public XAsyncResult
    {
        PlayFabMultiplayerListAssetSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListAssetSummariesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListAssetSummariesResponse( result );
            return ValidatePlayFabMultiplayerListAssetSummariesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListAssetSummariesResult>>(testContext);

    PlayFab::MultiplayerModels::ListAssetSummariesRequest request;
    FillPlayFabMultiplayerListAssetSummariesRequest( &request );
    LogPlayFabMultiplayerListAssetSummariesRequest( &request, "TestMultiplayerListAssetSummaries" );
    HRESULT hr = PlayFabMultiplayerListAssetSummariesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListAssetSummariesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListBuildAliases(TestContext& testContext)
{
    struct ListBuildAliasesResult : public XAsyncResult
    {
        PlayFabMultiplayerListBuildAliasesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListBuildAliasesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListBuildAliasesResponse( result );
            return ValidatePlayFabMultiplayerListBuildAliasesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListBuildAliasesResult>>(testContext);

    PlayFab::MultiplayerModels::ListBuildAliasesRequest request;
    FillPlayFabMultiplayerListBuildAliasesRequest( &request );
    LogPlayFabMultiplayerListBuildAliasesRequest( &request, "TestMultiplayerListBuildAliases" );
    HRESULT hr = PlayFabMultiplayerListBuildAliasesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListBuildAliasesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListBuildSummariesV2(TestContext& testContext)
{
    struct ListBuildSummariesV2Result : public XAsyncResult
    {
        PlayFabMultiplayerListBuildSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListBuildSummariesV2GetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListBuildSummariesResponse( result );
            return ValidatePlayFabMultiplayerListBuildSummariesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListBuildSummariesV2Result>>(testContext);

    PlayFab::MultiplayerModels::ListBuildSummariesRequest request;
    FillPlayFabMultiplayerListBuildSummariesRequest( &request );
    LogPlayFabMultiplayerListBuildSummariesRequest( &request, "TestMultiplayerListBuildSummariesV2" );
    HRESULT hr = PlayFabMultiplayerListBuildSummariesV2Async(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListBuildSummariesV2Async", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListCertificateSummaries(TestContext& testContext)
{
    struct ListCertificateSummariesResult : public XAsyncResult
    {
        PlayFabMultiplayerListCertificateSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListCertificateSummariesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListCertificateSummariesResponse( result );
            return ValidatePlayFabMultiplayerListCertificateSummariesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListCertificateSummariesResult>>(testContext);

    PlayFab::MultiplayerModels::ListCertificateSummariesRequest request;
    FillPlayFabMultiplayerListCertificateSummariesRequest( &request );
    LogPlayFabMultiplayerListCertificateSummariesRequest( &request, "TestMultiplayerListCertificateSummaries" );
    HRESULT hr = PlayFabMultiplayerListCertificateSummariesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListCertificateSummariesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListContainerImages(TestContext& testContext)
{
    struct ListContainerImagesResult : public XAsyncResult
    {
        PlayFabMultiplayerListContainerImagesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListContainerImagesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListContainerImagesResponse( result );
            return ValidatePlayFabMultiplayerListContainerImagesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListContainerImagesResult>>(testContext);

    PlayFab::MultiplayerModels::ListContainerImagesRequest request;
    FillPlayFabMultiplayerListContainerImagesRequest( &request );
    LogPlayFabMultiplayerListContainerImagesRequest( &request, "TestMultiplayerListContainerImages" );
    HRESULT hr = PlayFabMultiplayerListContainerImagesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListContainerImagesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListContainerImageTags(TestContext& testContext)
{
    struct ListContainerImageTagsResult : public XAsyncResult
    {
        PlayFabMultiplayerListContainerImageTagsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListContainerImageTagsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListContainerImageTagsResponse( result );
            return ValidatePlayFabMultiplayerListContainerImageTagsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListContainerImageTagsResult>>(testContext);

    PlayFab::MultiplayerModels::ListContainerImageTagsRequest request;
    FillPlayFabMultiplayerListContainerImageTagsRequest( &request );
    LogPlayFabMultiplayerListContainerImageTagsRequest( &request, "TestMultiplayerListContainerImageTags" );
    HRESULT hr = PlayFabMultiplayerListContainerImageTagsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListContainerImageTagsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListMatchmakingTicketsForPlayer(TestContext& testContext)
{
    struct ListMatchmakingTicketsForPlayerResult : public XAsyncResult
    {
        PlayFabMultiplayerListMatchmakingTicketsForPlayerResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListMatchmakingTicketsForPlayerGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListMatchmakingTicketsForPlayerResult( result );
            return ValidatePlayFabMultiplayerListMatchmakingTicketsForPlayerResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListMatchmakingTicketsForPlayerResult>>(testContext);

    PlayFab::MultiplayerModels::ListMatchmakingTicketsForPlayerRequest request;
    FillPlayFabMultiplayerListMatchmakingTicketsForPlayerRequest( &request );
    LogPlayFabMultiplayerListMatchmakingTicketsForPlayerRequest( &request, "TestMultiplayerListMatchmakingTicketsForPlayer" );
    HRESULT hr = PlayFabMultiplayerListMatchmakingTicketsForPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListMatchmakingTicketsForPlayerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListMultiplayerServers(TestContext& testContext)
{
    struct ListMultiplayerServersResult : public XAsyncResult
    {
        PlayFabMultiplayerListMultiplayerServersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListMultiplayerServersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListMultiplayerServersResponse( result );
            return ValidatePlayFabMultiplayerListMultiplayerServersResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListMultiplayerServersResult>>(testContext);

    PlayFab::MultiplayerModels::ListMultiplayerServersRequest request;
    FillPlayFabMultiplayerListMultiplayerServersRequest( &request );
    LogPlayFabMultiplayerListMultiplayerServersRequest( &request, "TestMultiplayerListMultiplayerServers" );
    HRESULT hr = PlayFabMultiplayerListMultiplayerServersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListMultiplayerServersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListPartyQosServers(TestContext& testContext)
{
    struct ListPartyQosServersResult : public XAsyncResult
    {
        PlayFabMultiplayerListPartyQosServersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListPartyQosServersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListPartyQosServersResponse( result );
            return ValidatePlayFabMultiplayerListPartyQosServersResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListPartyQosServersResult>>(testContext);

    PlayFab::MultiplayerModels::ListPartyQosServersRequest request;
    FillPlayFabMultiplayerListPartyQosServersRequest( &request );
    LogPlayFabMultiplayerListPartyQosServersRequest( &request, "TestMultiplayerListPartyQosServers" );
    HRESULT hr = PlayFabMultiplayerListPartyQosServersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListPartyQosServersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListQosServersForTitle(TestContext& testContext)
{
    struct ListQosServersForTitleResult : public XAsyncResult
    {
        PlayFabMultiplayerListQosServersForTitleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListQosServersForTitleGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListQosServersForTitleResponse( result );
            return ValidatePlayFabMultiplayerListQosServersForTitleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListQosServersForTitleResult>>(testContext);

    PlayFab::MultiplayerModels::ListQosServersForTitleRequest request;
    FillPlayFabMultiplayerListQosServersForTitleRequest( &request );
    LogPlayFabMultiplayerListQosServersForTitleRequest( &request, "TestMultiplayerListQosServersForTitle" );
    HRESULT hr = PlayFabMultiplayerListQosServersForTitleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListQosServersForTitleAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListServerBackfillTicketsForPlayer(TestContext& testContext)
{
    struct ListServerBackfillTicketsForPlayerResult : public XAsyncResult
    {
        PlayFabMultiplayerListServerBackfillTicketsForPlayerResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListServerBackfillTicketsForPlayerGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListServerBackfillTicketsForPlayerResult( result );
            return ValidatePlayFabMultiplayerListServerBackfillTicketsForPlayerResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListServerBackfillTicketsForPlayerResult>>(testContext);

    PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest request;
    FillPlayFabMultiplayerListServerBackfillTicketsForPlayerRequest( &request );
    LogPlayFabMultiplayerListServerBackfillTicketsForPlayerRequest( &request, "TestMultiplayerListServerBackfillTicketsForPlayer" );
    HRESULT hr = PlayFabMultiplayerListServerBackfillTicketsForPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListServerBackfillTicketsForPlayerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListTitleMultiplayerServersQuotaChanges(TestContext& testContext)
{
    struct ListTitleMultiplayerServersQuotaChangesResult : public XAsyncResult
    {
        PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse( result );
            return ValidatePlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListTitleMultiplayerServersQuotaChangesResult>>(testContext);

    PlayFab::MultiplayerModels::ListTitleMultiplayerServersQuotaChangesRequest request;
    FillPlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest( &request );
    LogPlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest( &request, "TestMultiplayerListTitleMultiplayerServersQuotaChanges" );
    HRESULT hr = PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerListVirtualMachineSummaries(TestContext& testContext)
{
    struct ListVirtualMachineSummariesResult : public XAsyncResult
    {
        PlayFabMultiplayerListVirtualMachineSummariesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerListVirtualMachineSummariesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerListVirtualMachineSummariesResponse( result );
            return ValidatePlayFabMultiplayerListVirtualMachineSummariesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListVirtualMachineSummariesResult>>(testContext);

    PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest request;
    FillPlayFabMultiplayerListVirtualMachineSummariesRequest( &request );
    LogPlayFabMultiplayerListVirtualMachineSummariesRequest( &request, "TestMultiplayerListVirtualMachineSummaries" );
    HRESULT hr = PlayFabMultiplayerListVirtualMachineSummariesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerListVirtualMachineSummariesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerRequestMultiplayerServer(TestContext& testContext)
{
    struct RequestMultiplayerServerResult : public XAsyncResult
    {
        PlayFabMultiplayerRequestMultiplayerServerResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerRequestMultiplayerServerGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerRequestMultiplayerServerResponse( result );
            return ValidatePlayFabMultiplayerRequestMultiplayerServerResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RequestMultiplayerServerResult>>(testContext);

    PlayFab::MultiplayerModels::RequestMultiplayerServerRequest request;
    FillPlayFabMultiplayerRequestMultiplayerServerRequest( &request );
    LogPlayFabMultiplayerRequestMultiplayerServerRequest( &request, "TestMultiplayerRequestMultiplayerServer" );
    HRESULT hr = PlayFabMultiplayerRequestMultiplayerServerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerRequestMultiplayerServerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerRolloverContainerRegistryCredentials(TestContext& testContext)
{
    struct RolloverContainerRegistryCredentialsResult : public XAsyncResult
    {
        PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMultiplayerRolloverContainerRegistryCredentialsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMultiplayerRolloverContainerRegistryCredentialsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerRolloverContainerRegistryCredentialsResponse( result );
            return ValidatePlayFabMultiplayerRolloverContainerRegistryCredentialsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RolloverContainerRegistryCredentialsResult>>(testContext);

    PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsRequest request;
    FillPlayFabMultiplayerRolloverContainerRegistryCredentialsRequest( &request );
    LogPlayFabMultiplayerRolloverContainerRegistryCredentialsRequest( &request, "TestMultiplayerRolloverContainerRegistryCredentials" );
    HRESULT hr = PlayFabMultiplayerRolloverContainerRegistryCredentialsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerRolloverContainerRegistryCredentialsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerShutdownMultiplayerServer(TestContext& testContext)
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

    PlayFab::MultiplayerModels::ShutdownMultiplayerServerRequest request;
    FillPlayFabMultiplayerShutdownMultiplayerServerRequest( &request );
    LogPlayFabMultiplayerShutdownMultiplayerServerRequest( &request, "TestMultiplayerShutdownMultiplayerServer" );
    HRESULT hr = PlayFabMultiplayerShutdownMultiplayerServerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerShutdownMultiplayerServerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerUntagContainerImage(TestContext& testContext)
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

    PlayFab::MultiplayerModels::UntagContainerImageRequest request;
    FillPlayFabMultiplayerUntagContainerImageRequest( &request );
    LogPlayFabMultiplayerUntagContainerImageRequest( &request, "TestMultiplayerUntagContainerImage" );
    HRESULT hr = PlayFabMultiplayerUntagContainerImageAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerUntagContainerImageAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerUpdateBuildAlias(TestContext& testContext)
{
    struct UpdateBuildAliasResult : public XAsyncResult
    {
        PlayFabMultiplayerBuildAliasDetailsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMultiplayerUpdateBuildAliasGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMultiplayerBuildAliasDetailsResponse( result );
            return ValidatePlayFabMultiplayerBuildAliasDetailsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateBuildAliasResult>>(testContext);

    PlayFab::MultiplayerModels::UpdateBuildAliasRequest request;
    FillPlayFabMultiplayerUpdateBuildAliasRequest( &request );
    LogPlayFabMultiplayerUpdateBuildAliasRequest( &request, "TestMultiplayerUpdateBuildAlias" );
    HRESULT hr = PlayFabMultiplayerUpdateBuildAliasAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerUpdateBuildAliasAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerUpdateBuildName(TestContext& testContext)
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

    PlayFab::MultiplayerModels::UpdateBuildNameRequest request;
    FillPlayFabMultiplayerUpdateBuildNameRequest( &request );
    LogPlayFabMultiplayerUpdateBuildNameRequest( &request, "TestMultiplayerUpdateBuildName" );
    HRESULT hr = PlayFabMultiplayerUpdateBuildNameAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerUpdateBuildNameAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerUpdateBuildRegion(TestContext& testContext)
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

    PlayFab::MultiplayerModels::UpdateBuildRegionRequest request;
    FillPlayFabMultiplayerUpdateBuildRegionRequest( &request );
    LogPlayFabMultiplayerUpdateBuildRegionRequest( &request, "TestMultiplayerUpdateBuildRegion" );
    HRESULT hr = PlayFabMultiplayerUpdateBuildRegionAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerUpdateBuildRegionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerUpdateBuildRegions(TestContext& testContext)
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

    PlayFab::MultiplayerModels::UpdateBuildRegionsRequest request;
    FillPlayFabMultiplayerUpdateBuildRegionsRequest( &request );
    LogPlayFabMultiplayerUpdateBuildRegionsRequest( &request, "TestMultiplayerUpdateBuildRegions" );
    HRESULT hr = PlayFabMultiplayerUpdateBuildRegionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerUpdateBuildRegionsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMultiplayerTests::TestMultiplayerUploadCertificate(TestContext& testContext)
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

    PlayFab::MultiplayerModels::UploadCertificateRequest request;
    FillPlayFabMultiplayerUploadCertificateRequest( &request );
    LogPlayFabMultiplayerUploadCertificateRequest( &request, "TestMultiplayerUploadCertificate" );
    HRESULT hr = PlayFabMultiplayerUploadCertificateAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMultiplayerUploadCertificateAsync", hr);
        return;
    }
    async.release(); 
} 


}
