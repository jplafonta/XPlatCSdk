#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenAdminTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenAdminTests::Log(std::stringstream& ss)
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

void AutoGenAdminTests::AddTests()
{
    // Generated tests 
    AddTest("TestAdminAbortTaskInstance", &AutoGenAdminTests::TestAdminAbortTaskInstance);
    AddTest("TestAdminAddLocalizedNews", &AutoGenAdminTests::TestAdminAddLocalizedNews);
    AddTest("TestAdminAddNews", &AutoGenAdminTests::TestAdminAddNews);
    AddTest("TestAdminAddPlayerTag", &AutoGenAdminTests::TestAdminAddPlayerTag);
    AddTest("TestAdminAddServerBuild", &AutoGenAdminTests::TestAdminAddServerBuild);
    AddTest("TestAdminAddUserVirtualCurrency", &AutoGenAdminTests::TestAdminAddUserVirtualCurrency);
    AddTest("TestAdminAddVirtualCurrencyTypes", &AutoGenAdminTests::TestAdminAddVirtualCurrencyTypes);
    AddTest("TestAdminBanUsers", &AutoGenAdminTests::TestAdminBanUsers);
    AddTest("TestAdminCheckLimitedEditionItemAvailability", &AutoGenAdminTests::TestAdminCheckLimitedEditionItemAvailability);
    AddTest("TestAdminCreateActionsOnPlayersInSegmentTask", &AutoGenAdminTests::TestAdminCreateActionsOnPlayersInSegmentTask);
    AddTest("TestAdminCreateCloudScriptTask", &AutoGenAdminTests::TestAdminCreateCloudScriptTask);
    AddTest("TestAdminCreateInsightsScheduledScalingTask", &AutoGenAdminTests::TestAdminCreateInsightsScheduledScalingTask);
    AddTest("TestAdminCreateOpenIdConnection", &AutoGenAdminTests::TestAdminCreateOpenIdConnection);
    AddTest("TestAdminCreatePlayerSharedSecret", &AutoGenAdminTests::TestAdminCreatePlayerSharedSecret);
    AddTest("TestAdminCreatePlayerStatisticDefinition", &AutoGenAdminTests::TestAdminCreatePlayerStatisticDefinition);
    AddTest("TestAdminCreateSegment", &AutoGenAdminTests::TestAdminCreateSegment);
    AddTest("TestAdminDeleteContent", &AutoGenAdminTests::TestAdminDeleteContent);
    AddTest("TestAdminDeleteMasterPlayerAccount", &AutoGenAdminTests::TestAdminDeleteMasterPlayerAccount);
    AddTest("TestAdminDeleteOpenIdConnection", &AutoGenAdminTests::TestAdminDeleteOpenIdConnection);
    AddTest("TestAdminDeletePlayer", &AutoGenAdminTests::TestAdminDeletePlayer);
    AddTest("TestAdminDeletePlayerSharedSecret", &AutoGenAdminTests::TestAdminDeletePlayerSharedSecret);
    AddTest("TestAdminDeleteSegment", &AutoGenAdminTests::TestAdminDeleteSegment);
    AddTest("TestAdminDeleteStore", &AutoGenAdminTests::TestAdminDeleteStore);
    AddTest("TestAdminDeleteTask", &AutoGenAdminTests::TestAdminDeleteTask);
    AddTest("TestAdminDeleteTitle", &AutoGenAdminTests::TestAdminDeleteTitle);
    AddTest("TestAdminDeleteTitleDataOverride", &AutoGenAdminTests::TestAdminDeleteTitleDataOverride);
    AddTest("TestAdminExportMasterPlayerData", &AutoGenAdminTests::TestAdminExportMasterPlayerData);
    AddTest("TestAdminGetActionsOnPlayersInSegmentTaskInstance", &AutoGenAdminTests::TestAdminGetActionsOnPlayersInSegmentTaskInstance);
    AddTest("TestAdminGetAllSegments", &AutoGenAdminTests::TestAdminGetAllSegments);
    AddTest("TestAdminGetCatalogItems", &AutoGenAdminTests::TestAdminGetCatalogItems);
    AddTest("TestAdminGetCloudScriptRevision", &AutoGenAdminTests::TestAdminGetCloudScriptRevision);
    AddTest("TestAdminGetCloudScriptTaskInstance", &AutoGenAdminTests::TestAdminGetCloudScriptTaskInstance);
    AddTest("TestAdminGetCloudScriptVersions", &AutoGenAdminTests::TestAdminGetCloudScriptVersions);
    AddTest("TestAdminGetContentList", &AutoGenAdminTests::TestAdminGetContentList);
    AddTest("TestAdminGetContentUploadUrl", &AutoGenAdminTests::TestAdminGetContentUploadUrl);
    AddTest("TestAdminGetDataReport", &AutoGenAdminTests::TestAdminGetDataReport);
    AddTest("TestAdminGetMatchmakerGameInfo", &AutoGenAdminTests::TestAdminGetMatchmakerGameInfo);
    AddTest("TestAdminGetMatchmakerGameModes", &AutoGenAdminTests::TestAdminGetMatchmakerGameModes);
    AddTest("TestAdminGetPlayedTitleList", &AutoGenAdminTests::TestAdminGetPlayedTitleList);
    AddTest("TestAdminGetPlayerIdFromAuthToken", &AutoGenAdminTests::TestAdminGetPlayerIdFromAuthToken);
    AddTest("TestAdminGetPlayerProfile", &AutoGenAdminTests::TestAdminGetPlayerProfile);
    AddTest("TestAdminGetPlayerSegments", &AutoGenAdminTests::TestAdminGetPlayerSegments);
    AddTest("TestAdminGetPlayerSharedSecrets", &AutoGenAdminTests::TestAdminGetPlayerSharedSecrets);
    AddTest("TestAdminGetPlayersInSegment", &AutoGenAdminTests::TestAdminGetPlayersInSegment);
    AddTest("TestAdminGetPlayerStatisticDefinitions", &AutoGenAdminTests::TestAdminGetPlayerStatisticDefinitions);
    AddTest("TestAdminGetPlayerStatisticVersions", &AutoGenAdminTests::TestAdminGetPlayerStatisticVersions);
    AddTest("TestAdminGetPlayerTags", &AutoGenAdminTests::TestAdminGetPlayerTags);
    AddTest("TestAdminGetPolicy", &AutoGenAdminTests::TestAdminGetPolicy);
    AddTest("TestAdminGetPublisherData", &AutoGenAdminTests::TestAdminGetPublisherData);
    AddTest("TestAdminGetRandomResultTables", &AutoGenAdminTests::TestAdminGetRandomResultTables);
    AddTest("TestAdminGetSegments", &AutoGenAdminTests::TestAdminGetSegments);
    AddTest("TestAdminGetServerBuildInfo", &AutoGenAdminTests::TestAdminGetServerBuildInfo);
    AddTest("TestAdminGetServerBuildUploadUrl", &AutoGenAdminTests::TestAdminGetServerBuildUploadUrl);
    AddTest("TestAdminGetStoreItems", &AutoGenAdminTests::TestAdminGetStoreItems);
    AddTest("TestAdminGetTaskInstances", &AutoGenAdminTests::TestAdminGetTaskInstances);
    AddTest("TestAdminGetTasks", &AutoGenAdminTests::TestAdminGetTasks);
    AddTest("TestAdminGetTitleData", &AutoGenAdminTests::TestAdminGetTitleData);
    AddTest("TestAdminGetTitleInternalData", &AutoGenAdminTests::TestAdminGetTitleInternalData);
    AddTest("TestAdminGetUserAccountInfo", &AutoGenAdminTests::TestAdminGetUserAccountInfo);
    AddTest("TestAdminGetUserBans", &AutoGenAdminTests::TestAdminGetUserBans);
    AddTest("TestAdminGetUserData", &AutoGenAdminTests::TestAdminGetUserData);
    AddTest("TestAdminGetUserInternalData", &AutoGenAdminTests::TestAdminGetUserInternalData);
    AddTest("TestAdminGetUserInventory", &AutoGenAdminTests::TestAdminGetUserInventory);
    AddTest("TestAdminGetUserPublisherData", &AutoGenAdminTests::TestAdminGetUserPublisherData);
    AddTest("TestAdminGetUserPublisherInternalData", &AutoGenAdminTests::TestAdminGetUserPublisherInternalData);
    AddTest("TestAdminGetUserPublisherReadOnlyData", &AutoGenAdminTests::TestAdminGetUserPublisherReadOnlyData);
    AddTest("TestAdminGetUserReadOnlyData", &AutoGenAdminTests::TestAdminGetUserReadOnlyData);
    AddTest("TestAdminGrantItemsToUsers", &AutoGenAdminTests::TestAdminGrantItemsToUsers);
    AddTest("TestAdminIncrementLimitedEditionItemAvailability", &AutoGenAdminTests::TestAdminIncrementLimitedEditionItemAvailability);
    AddTest("TestAdminIncrementPlayerStatisticVersion", &AutoGenAdminTests::TestAdminIncrementPlayerStatisticVersion);
    AddTest("TestAdminListOpenIdConnection", &AutoGenAdminTests::TestAdminListOpenIdConnection);
    AddTest("TestAdminListServerBuilds", &AutoGenAdminTests::TestAdminListServerBuilds);
    AddTest("TestAdminListVirtualCurrencyTypes", &AutoGenAdminTests::TestAdminListVirtualCurrencyTypes);
    AddTest("TestAdminModifyMatchmakerGameModes", &AutoGenAdminTests::TestAdminModifyMatchmakerGameModes);
    AddTest("TestAdminModifyServerBuild", &AutoGenAdminTests::TestAdminModifyServerBuild);
    AddTest("TestAdminRefundPurchase", &AutoGenAdminTests::TestAdminRefundPurchase);
    AddTest("TestAdminRemovePlayerTag", &AutoGenAdminTests::TestAdminRemovePlayerTag);
    AddTest("TestAdminRemoveServerBuild", &AutoGenAdminTests::TestAdminRemoveServerBuild);
    AddTest("TestAdminRemoveVirtualCurrencyTypes", &AutoGenAdminTests::TestAdminRemoveVirtualCurrencyTypes);
    AddTest("TestAdminResetCharacterStatistics", &AutoGenAdminTests::TestAdminResetCharacterStatistics);
    AddTest("TestAdminResetPassword", &AutoGenAdminTests::TestAdminResetPassword);
    AddTest("TestAdminResetUserStatistics", &AutoGenAdminTests::TestAdminResetUserStatistics);
    AddTest("TestAdminResolvePurchaseDispute", &AutoGenAdminTests::TestAdminResolvePurchaseDispute);
    AddTest("TestAdminRevokeAllBansForUser", &AutoGenAdminTests::TestAdminRevokeAllBansForUser);
    AddTest("TestAdminRevokeBans", &AutoGenAdminTests::TestAdminRevokeBans);
    AddTest("TestAdminRevokeInventoryItem", &AutoGenAdminTests::TestAdminRevokeInventoryItem);
    AddTest("TestAdminRevokeInventoryItems", &AutoGenAdminTests::TestAdminRevokeInventoryItems);
    AddTest("TestAdminRunTask", &AutoGenAdminTests::TestAdminRunTask);
    AddTest("TestAdminSendAccountRecoveryEmail", &AutoGenAdminTests::TestAdminSendAccountRecoveryEmail);
    AddTest("TestAdminSetCatalogItems", &AutoGenAdminTests::TestAdminSetCatalogItems);
    AddTest("TestAdminSetPlayerSecret", &AutoGenAdminTests::TestAdminSetPlayerSecret);
    AddTest("TestAdminSetPublishedRevision", &AutoGenAdminTests::TestAdminSetPublishedRevision);
    AddTest("TestAdminSetPublisherData", &AutoGenAdminTests::TestAdminSetPublisherData);
    AddTest("TestAdminSetStoreItems", &AutoGenAdminTests::TestAdminSetStoreItems);
    AddTest("TestAdminSetTitleData", &AutoGenAdminTests::TestAdminSetTitleData);
    AddTest("TestAdminSetTitleDataAndOverrides", &AutoGenAdminTests::TestAdminSetTitleDataAndOverrides);
    AddTest("TestAdminSetTitleInternalData", &AutoGenAdminTests::TestAdminSetTitleInternalData);
    AddTest("TestAdminSetupPushNotification", &AutoGenAdminTests::TestAdminSetupPushNotification);
    AddTest("TestAdminSubtractUserVirtualCurrency", &AutoGenAdminTests::TestAdminSubtractUserVirtualCurrency);
    AddTest("TestAdminUpdateBans", &AutoGenAdminTests::TestAdminUpdateBans);
    AddTest("TestAdminUpdateCatalogItems", &AutoGenAdminTests::TestAdminUpdateCatalogItems);
    AddTest("TestAdminUpdateCloudScript", &AutoGenAdminTests::TestAdminUpdateCloudScript);
    AddTest("TestAdminUpdateOpenIdConnection", &AutoGenAdminTests::TestAdminUpdateOpenIdConnection);
    AddTest("TestAdminUpdatePlayerSharedSecret", &AutoGenAdminTests::TestAdminUpdatePlayerSharedSecret);
    AddTest("TestAdminUpdatePlayerStatisticDefinition", &AutoGenAdminTests::TestAdminUpdatePlayerStatisticDefinition);
    AddTest("TestAdminUpdatePolicy", &AutoGenAdminTests::TestAdminUpdatePolicy);
    AddTest("TestAdminUpdateRandomResultTables", &AutoGenAdminTests::TestAdminUpdateRandomResultTables);
    AddTest("TestAdminUpdateSegment", &AutoGenAdminTests::TestAdminUpdateSegment);
    AddTest("TestAdminUpdateStoreItems", &AutoGenAdminTests::TestAdminUpdateStoreItems);
    AddTest("TestAdminUpdateTask", &AutoGenAdminTests::TestAdminUpdateTask);
    AddTest("TestAdminUpdateUserData", &AutoGenAdminTests::TestAdminUpdateUserData);
    AddTest("TestAdminUpdateUserInternalData", &AutoGenAdminTests::TestAdminUpdateUserInternalData);
    AddTest("TestAdminUpdateUserPublisherData", &AutoGenAdminTests::TestAdminUpdateUserPublisherData);
    AddTest("TestAdminUpdateUserPublisherInternalData", &AutoGenAdminTests::TestAdminUpdateUserPublisherInternalData);
    AddTest("TestAdminUpdateUserPublisherReadOnlyData", &AutoGenAdminTests::TestAdminUpdateUserPublisherReadOnlyData);
    AddTest("TestAdminUpdateUserReadOnlyData", &AutoGenAdminTests::TestAdminUpdateUserReadOnlyData);
    AddTest("TestAdminUpdateUserTitleDisplayName", &AutoGenAdminTests::TestAdminUpdateUserTitleDisplayName);
}

void AutoGenAdminTests::ClassSetUp()
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

void AutoGenAdminTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenAdminTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

void AutoGenAdminTests::TestAdminAbortTaskInstance(TestContext& testContext)
{
    struct AbortTaskInstanceResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AbortTaskInstanceResult>>(testContext);

    PlayFab::AdminModels::AbortTaskInstanceRequest request;
    FillPlayFabAdminAbortTaskInstanceRequest( &request );
    LogPlayFabAdminAbortTaskInstanceRequest( &request, "TestAdminAbortTaskInstance" );
    HRESULT hr = PlayFabAdminAbortTaskInstanceAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminAbortTaskInstanceAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminAddLocalizedNews(TestContext& testContext)
{
    struct AddLocalizedNewsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AddLocalizedNewsResult>>(testContext);

    PlayFab::AdminModels::AddLocalizedNewsRequest request;
    FillPlayFabAdminAddLocalizedNewsRequest( &request );
    LogPlayFabAdminAddLocalizedNewsRequest( &request, "TestAdminAddLocalizedNews" );
    HRESULT hr = PlayFabAdminAddLocalizedNewsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminAddLocalizedNewsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminAddNews(TestContext& testContext)
{
    struct AddNewsResult : public XAsyncResult
    {
        PlayFabAdminAddNewsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminAddNewsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminAddNewsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminAddNewsResult( result );
            return ValidatePlayFabAdminAddNewsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AddNewsResult>>(testContext);

    PlayFab::AdminModels::AddNewsRequest request;
    FillPlayFabAdminAddNewsRequest( &request );
    LogPlayFabAdminAddNewsRequest( &request, "TestAdminAddNews" );
    HRESULT hr = PlayFabAdminAddNewsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminAddNewsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminAddPlayerTag(TestContext& testContext)
{
    struct AddPlayerTagResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AddPlayerTagResult>>(testContext);

    PlayFab::AdminModels::AddPlayerTagRequest request;
    FillPlayFabAdminAddPlayerTagRequest( &request );
    LogPlayFabAdminAddPlayerTagRequest( &request, "TestAdminAddPlayerTag" );
    HRESULT hr = PlayFabAdminAddPlayerTagAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminAddPlayerTagAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminAddServerBuild(TestContext& testContext)
{
    struct AddServerBuildResult : public XAsyncResult
    {
        PlayFabAdminAddServerBuildResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminAddServerBuildGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminAddServerBuildResult( result );
            return ValidatePlayFabAdminAddServerBuildResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AddServerBuildResult>>(testContext);

    PlayFab::AdminModels::AddServerBuildRequest request;
    FillPlayFabAdminAddServerBuildRequest( &request );
    LogPlayFabAdminAddServerBuildRequest( &request, "TestAdminAddServerBuild" );
    HRESULT hr = PlayFabAdminAddServerBuildAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminAddServerBuildAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminAddUserVirtualCurrency(TestContext& testContext)
{
    struct AddUserVirtualCurrencyResult : public XAsyncResult
    {
        PlayFabAdminModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminAddUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminAddUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminModifyUserVirtualCurrencyResult( result );
            return ValidatePlayFabAdminModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AddUserVirtualCurrencyResult>>(testContext);

    PlayFab::AdminModels::AddUserVirtualCurrencyRequest request;
    FillPlayFabAdminAddUserVirtualCurrencyRequest( &request );
    LogPlayFabAdminAddUserVirtualCurrencyRequest( &request, "TestAdminAddUserVirtualCurrency" );
    HRESULT hr = PlayFabAdminAddUserVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminAddUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminAddVirtualCurrencyTypes(TestContext& testContext)
{
    struct AddVirtualCurrencyTypesResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AddVirtualCurrencyTypesResult>>(testContext);

    PlayFab::AdminModels::AddVirtualCurrencyTypesRequest request;
    FillPlayFabAdminAddVirtualCurrencyTypesRequest( &request );
    LogPlayFabAdminAddVirtualCurrencyTypesRequest( &request, "TestAdminAddVirtualCurrencyTypes" );
    HRESULT hr = PlayFabAdminAddVirtualCurrencyTypesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminAddVirtualCurrencyTypesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminBanUsers(TestContext& testContext)
{
    struct BanUsersResult : public XAsyncResult
    {
        PlayFabAdminBanUsersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminBanUsersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminBanUsersResult( result );
            return ValidatePlayFabAdminBanUsersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<BanUsersResult>>(testContext);

    PlayFab::AdminModels::BanUsersRequest request;
    FillPlayFabAdminBanUsersRequest( &request );
    LogPlayFabAdminBanUsersRequest( &request, "TestAdminBanUsers" );
    HRESULT hr = PlayFabAdminBanUsersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminBanUsersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminCheckLimitedEditionItemAvailability(TestContext& testContext)
{
    struct CheckLimitedEditionItemAvailabilityResult : public XAsyncResult
    {
        PlayFabAdminCheckLimitedEditionItemAvailabilityResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminCheckLimitedEditionItemAvailabilityGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminCheckLimitedEditionItemAvailabilityResult( &result );
            return ValidatePlayFabAdminCheckLimitedEditionItemAvailabilityResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CheckLimitedEditionItemAvailabilityResult>>(testContext);

    PlayFab::AdminModels::CheckLimitedEditionItemAvailabilityRequest request;
    FillPlayFabAdminCheckLimitedEditionItemAvailabilityRequest( &request );
    LogPlayFabAdminCheckLimitedEditionItemAvailabilityRequest( &request, "TestAdminCheckLimitedEditionItemAvailability" );
    HRESULT hr = PlayFabAdminCheckLimitedEditionItemAvailabilityAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminCheckLimitedEditionItemAvailabilityAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminCreateActionsOnPlayersInSegmentTask(TestContext& testContext)
{
    struct CreateActionsOnPlayersInSegmentTaskResult : public XAsyncResult
    {
        PlayFabAdminCreateTaskResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminCreateActionsOnPlayersInSegmentTaskGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminCreateActionsOnPlayersInSegmentTaskGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminCreateTaskResult( result );
            return ValidatePlayFabAdminCreateTaskResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateActionsOnPlayersInSegmentTaskResult>>(testContext);

    PlayFab::AdminModels::CreateActionsOnPlayerSegmentTaskRequest request;
    FillPlayFabAdminCreateActionsOnPlayerSegmentTaskRequest( &request );
    LogPlayFabAdminCreateActionsOnPlayerSegmentTaskRequest( &request, "TestAdminCreateActionsOnPlayersInSegmentTask" );
    HRESULT hr = PlayFabAdminCreateActionsOnPlayersInSegmentTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminCreateActionsOnPlayersInSegmentTaskAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminCreateCloudScriptTask(TestContext& testContext)
{
    struct CreateCloudScriptTaskResult : public XAsyncResult
    {
        PlayFabAdminCreateTaskResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminCreateCloudScriptTaskGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminCreateCloudScriptTaskGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminCreateTaskResult( result );
            return ValidatePlayFabAdminCreateTaskResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateCloudScriptTaskResult>>(testContext);

    PlayFab::AdminModels::CreateCloudScriptTaskRequest request;
    FillPlayFabAdminCreateCloudScriptTaskRequest( &request );
    LogPlayFabAdminCreateCloudScriptTaskRequest( &request, "TestAdminCreateCloudScriptTask" );
    HRESULT hr = PlayFabAdminCreateCloudScriptTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminCreateCloudScriptTaskAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminCreateInsightsScheduledScalingTask(TestContext& testContext)
{
    struct CreateInsightsScheduledScalingTaskResult : public XAsyncResult
    {
        PlayFabAdminCreateTaskResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminCreateInsightsScheduledScalingTaskGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminCreateInsightsScheduledScalingTaskGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminCreateTaskResult( result );
            return ValidatePlayFabAdminCreateTaskResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateInsightsScheduledScalingTaskResult>>(testContext);

    PlayFab::AdminModels::CreateInsightsScheduledScalingTaskRequest request;
    FillPlayFabAdminCreateInsightsScheduledScalingTaskRequest( &request );
    LogPlayFabAdminCreateInsightsScheduledScalingTaskRequest( &request, "TestAdminCreateInsightsScheduledScalingTask" );
    HRESULT hr = PlayFabAdminCreateInsightsScheduledScalingTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminCreateInsightsScheduledScalingTaskAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminCreateOpenIdConnection(TestContext& testContext)
{
    struct CreateOpenIdConnectionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<CreateOpenIdConnectionResult>>(testContext);

    PlayFab::AdminModels::CreateOpenIdConnectionRequest request;
    FillPlayFabAdminCreateOpenIdConnectionRequest( &request );
    LogPlayFabAdminCreateOpenIdConnectionRequest( &request, "TestAdminCreateOpenIdConnection" );
    HRESULT hr = PlayFabAdminCreateOpenIdConnectionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminCreateOpenIdConnectionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminCreatePlayerSharedSecret(TestContext& testContext)
{
    struct CreatePlayerSharedSecretResult : public XAsyncResult
    {
        PlayFabAdminCreatePlayerSharedSecretResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminCreatePlayerSharedSecretGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminCreatePlayerSharedSecretGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminCreatePlayerSharedSecretResult( result );
            return ValidatePlayFabAdminCreatePlayerSharedSecretResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreatePlayerSharedSecretResult>>(testContext);

    PlayFab::AdminModels::CreatePlayerSharedSecretRequest request;
    FillPlayFabAdminCreatePlayerSharedSecretRequest( &request );
    LogPlayFabAdminCreatePlayerSharedSecretRequest( &request, "TestAdminCreatePlayerSharedSecret" );
    HRESULT hr = PlayFabAdminCreatePlayerSharedSecretAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminCreatePlayerSharedSecretAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminCreatePlayerStatisticDefinition(TestContext& testContext)
{
    struct CreatePlayerStatisticDefinitionResult : public XAsyncResult
    {
        PlayFabAdminCreatePlayerStatisticDefinitionResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminCreatePlayerStatisticDefinitionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminCreatePlayerStatisticDefinitionResult( result );
            return ValidatePlayFabAdminCreatePlayerStatisticDefinitionResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreatePlayerStatisticDefinitionResult>>(testContext);

    PlayFab::AdminModels::CreatePlayerStatisticDefinitionRequest request;
    FillPlayFabAdminCreatePlayerStatisticDefinitionRequest( &request );
    LogPlayFabAdminCreatePlayerStatisticDefinitionRequest( &request, "TestAdminCreatePlayerStatisticDefinition" );
    HRESULT hr = PlayFabAdminCreatePlayerStatisticDefinitionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminCreatePlayerStatisticDefinitionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminCreateSegment(TestContext& testContext)
{
    struct CreateSegmentResult : public XAsyncResult
    {
        PlayFabAdminCreateSegmentResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminCreateSegmentGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminCreateSegmentGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminCreateSegmentResponse( result );
            return ValidatePlayFabAdminCreateSegmentResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateSegmentResult>>(testContext);

    PlayFab::AdminModels::CreateSegmentRequest request;
    FillPlayFabAdminCreateSegmentRequest( &request );
    LogPlayFabAdminCreateSegmentRequest( &request, "TestAdminCreateSegment" );
    HRESULT hr = PlayFabAdminCreateSegmentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminCreateSegmentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminDeleteContent(TestContext& testContext)
{
    struct DeleteContentResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteContentResult>>(testContext);

    PlayFab::AdminModels::DeleteContentRequest request;
    FillPlayFabAdminDeleteContentRequest( &request );
    LogPlayFabAdminDeleteContentRequest( &request, "TestAdminDeleteContent" );
    HRESULT hr = PlayFabAdminDeleteContentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminDeleteContentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminDeleteMasterPlayerAccount(TestContext& testContext)
{
    struct DeleteMasterPlayerAccountResult : public XAsyncResult
    {
        PlayFabAdminDeleteMasterPlayerAccountResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminDeleteMasterPlayerAccountGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminDeleteMasterPlayerAccountResult( result );
            return ValidatePlayFabAdminDeleteMasterPlayerAccountResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<DeleteMasterPlayerAccountResult>>(testContext);

    PlayFab::AdminModels::DeleteMasterPlayerAccountRequest request;
    FillPlayFabAdminDeleteMasterPlayerAccountRequest( &request );
    LogPlayFabAdminDeleteMasterPlayerAccountRequest( &request, "TestAdminDeleteMasterPlayerAccount" );
    HRESULT hr = PlayFabAdminDeleteMasterPlayerAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminDeleteMasterPlayerAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminDeleteOpenIdConnection(TestContext& testContext)
{
    struct DeleteOpenIdConnectionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteOpenIdConnectionResult>>(testContext);

    PlayFab::AdminModels::DeleteOpenIdConnectionRequest request;
    FillPlayFabAdminDeleteOpenIdConnectionRequest( &request );
    LogPlayFabAdminDeleteOpenIdConnectionRequest( &request, "TestAdminDeleteOpenIdConnection" );
    HRESULT hr = PlayFabAdminDeleteOpenIdConnectionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminDeleteOpenIdConnectionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminDeletePlayer(TestContext& testContext)
{
    struct DeletePlayerResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeletePlayerResult>>(testContext);

    PlayFab::AdminModels::DeletePlayerRequest request;
    FillPlayFabAdminDeletePlayerRequest( &request );
    LogPlayFabAdminDeletePlayerRequest( &request, "TestAdminDeletePlayer" );
    HRESULT hr = PlayFabAdminDeletePlayerAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminDeletePlayerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminDeletePlayerSharedSecret(TestContext& testContext)
{
    struct DeletePlayerSharedSecretResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeletePlayerSharedSecretResult>>(testContext);

    PlayFab::AdminModels::DeletePlayerSharedSecretRequest request;
    FillPlayFabAdminDeletePlayerSharedSecretRequest( &request );
    LogPlayFabAdminDeletePlayerSharedSecretRequest( &request, "TestAdminDeletePlayerSharedSecret" );
    HRESULT hr = PlayFabAdminDeletePlayerSharedSecretAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminDeletePlayerSharedSecretAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminDeleteSegment(TestContext& testContext)
{
    struct DeleteSegmentResult : public XAsyncResult
    {
        PlayFabAdminDeleteSegmentsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminDeleteSegmentGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminDeleteSegmentGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminDeleteSegmentsResponse( result );
            return ValidatePlayFabAdminDeleteSegmentsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<DeleteSegmentResult>>(testContext);

    PlayFab::AdminModels::DeleteSegmentRequest request;
    FillPlayFabAdminDeleteSegmentRequest( &request );
    LogPlayFabAdminDeleteSegmentRequest( &request, "TestAdminDeleteSegment" );
    HRESULT hr = PlayFabAdminDeleteSegmentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminDeleteSegmentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminDeleteStore(TestContext& testContext)
{
    struct DeleteStoreResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteStoreResult>>(testContext);

    PlayFab::AdminModels::DeleteStoreRequest request;
    FillPlayFabAdminDeleteStoreRequest( &request );
    LogPlayFabAdminDeleteStoreRequest( &request, "TestAdminDeleteStore" );
    HRESULT hr = PlayFabAdminDeleteStoreAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminDeleteStoreAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminDeleteTask(TestContext& testContext)
{
    struct DeleteTaskResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteTaskResult>>(testContext);

    PlayFab::AdminModels::DeleteTaskRequest request;
    FillPlayFabAdminDeleteTaskRequest( &request );
    LogPlayFabAdminDeleteTaskRequest( &request, "TestAdminDeleteTask" );
    HRESULT hr = PlayFabAdminDeleteTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminDeleteTaskAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminDeleteTitle(TestContext& testContext)
{
    struct DeleteTitleResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteTitleResult>>(testContext);

    HRESULT hr = PlayFabAdminDeleteTitleAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminDeleteTitleAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminDeleteTitleDataOverride(TestContext& testContext)
{
    struct DeleteTitleDataOverrideResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteTitleDataOverrideResult>>(testContext);

    PlayFab::AdminModels::DeleteTitleDataOverrideRequest request;
    FillPlayFabAdminDeleteTitleDataOverrideRequest( &request );
    LogPlayFabAdminDeleteTitleDataOverrideRequest( &request, "TestAdminDeleteTitleDataOverride" );
    HRESULT hr = PlayFabAdminDeleteTitleDataOverrideAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminDeleteTitleDataOverrideAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminExportMasterPlayerData(TestContext& testContext)
{
    struct ExportMasterPlayerDataResult : public XAsyncResult
    {
        PlayFabAdminExportMasterPlayerDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminExportMasterPlayerDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminExportMasterPlayerDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminExportMasterPlayerDataResult( result );
            return ValidatePlayFabAdminExportMasterPlayerDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ExportMasterPlayerDataResult>>(testContext);

    PlayFab::AdminModels::ExportMasterPlayerDataRequest request;
    FillPlayFabAdminExportMasterPlayerDataRequest( &request );
    LogPlayFabAdminExportMasterPlayerDataRequest( &request, "TestAdminExportMasterPlayerData" );
    HRESULT hr = PlayFabAdminExportMasterPlayerDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminExportMasterPlayerDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetActionsOnPlayersInSegmentTaskInstance(TestContext& testContext)
{
    struct GetActionsOnPlayersInSegmentTaskInstanceResult : public XAsyncResult
    {
        PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult( result );
            return ValidatePlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetActionsOnPlayersInSegmentTaskInstanceResult>>(testContext);

    PlayFab::AdminModels::GetTaskInstanceRequest request;
    FillPlayFabAdminGetTaskInstanceRequest( &request );
    LogPlayFabAdminGetTaskInstanceRequest( &request, "TestAdminGetActionsOnPlayersInSegmentTaskInstance" );
    HRESULT hr = PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetAllSegments(TestContext& testContext)
{
    struct GetAllSegmentsResult : public XAsyncResult
    {
        PlayFabAdminGetAllSegmentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetAllSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetAllSegmentsResult( result );
            return ValidatePlayFabAdminGetAllSegmentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetAllSegmentsResult>>(testContext);

    HRESULT hr = PlayFabAdminGetAllSegmentsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetAllSegmentsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetCatalogItems(TestContext& testContext)
{
    struct GetCatalogItemsResult : public XAsyncResult
    {
        PlayFabAdminGetCatalogItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetCatalogItemsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetCatalogItemsResult( result );
            return ValidatePlayFabAdminGetCatalogItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCatalogItemsResult>>(testContext);

    PlayFab::AdminModels::GetCatalogItemsRequest request;
    FillPlayFabAdminGetCatalogItemsRequest( &request );
    LogPlayFabAdminGetCatalogItemsRequest( &request, "TestAdminGetCatalogItems" );
    HRESULT hr = PlayFabAdminGetCatalogItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetCloudScriptRevision(TestContext& testContext)
{
    struct GetCloudScriptRevisionResult : public XAsyncResult
    {
        PlayFabAdminGetCloudScriptRevisionResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetCloudScriptRevisionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetCloudScriptRevisionResult( result );
            return ValidatePlayFabAdminGetCloudScriptRevisionResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCloudScriptRevisionResult>>(testContext);

    PlayFab::AdminModels::GetCloudScriptRevisionRequest request;
    FillPlayFabAdminGetCloudScriptRevisionRequest( &request );
    LogPlayFabAdminGetCloudScriptRevisionRequest( &request, "TestAdminGetCloudScriptRevision" );
    HRESULT hr = PlayFabAdminGetCloudScriptRevisionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetCloudScriptRevisionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetCloudScriptTaskInstance(TestContext& testContext)
{
    struct GetCloudScriptTaskInstanceResult : public XAsyncResult
    {
        PlayFabAdminGetCloudScriptTaskInstanceResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetCloudScriptTaskInstanceGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetCloudScriptTaskInstanceResult( result );
            return ValidatePlayFabAdminGetCloudScriptTaskInstanceResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCloudScriptTaskInstanceResult>>(testContext);

    PlayFab::AdminModels::GetTaskInstanceRequest request;
    FillPlayFabAdminGetTaskInstanceRequest( &request );
    LogPlayFabAdminGetTaskInstanceRequest( &request, "TestAdminGetCloudScriptTaskInstance" );
    HRESULT hr = PlayFabAdminGetCloudScriptTaskInstanceAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetCloudScriptTaskInstanceAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetCloudScriptVersions(TestContext& testContext)
{
    struct GetCloudScriptVersionsResult : public XAsyncResult
    {
        PlayFabAdminGetCloudScriptVersionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetCloudScriptVersionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetCloudScriptVersionsResult( result );
            return ValidatePlayFabAdminGetCloudScriptVersionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCloudScriptVersionsResult>>(testContext);

    HRESULT hr = PlayFabAdminGetCloudScriptVersionsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetCloudScriptVersionsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetContentList(TestContext& testContext)
{
    struct GetContentListResult : public XAsyncResult
    {
        PlayFabAdminGetContentListResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetContentListGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetContentListResult( result );
            return ValidatePlayFabAdminGetContentListResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetContentListResult>>(testContext);

    PlayFab::AdminModels::GetContentListRequest request;
    FillPlayFabAdminGetContentListRequest( &request );
    LogPlayFabAdminGetContentListRequest( &request, "TestAdminGetContentList" );
    HRESULT hr = PlayFabAdminGetContentListAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetContentListAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetContentUploadUrl(TestContext& testContext)
{
    struct GetContentUploadUrlResult : public XAsyncResult
    {
        PlayFabAdminGetContentUploadUrlResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminGetContentUploadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminGetContentUploadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetContentUploadUrlResult( result );
            return ValidatePlayFabAdminGetContentUploadUrlResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetContentUploadUrlResult>>(testContext);

    PlayFab::AdminModels::GetContentUploadUrlRequest request;
    FillPlayFabAdminGetContentUploadUrlRequest( &request );
    LogPlayFabAdminGetContentUploadUrlRequest( &request, "TestAdminGetContentUploadUrl" );
    HRESULT hr = PlayFabAdminGetContentUploadUrlAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetContentUploadUrlAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetDataReport(TestContext& testContext)
{
    struct GetDataReportResult : public XAsyncResult
    {
        PlayFabAdminGetDataReportResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminGetDataReportGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminGetDataReportGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetDataReportResult( result );
            return ValidatePlayFabAdminGetDataReportResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetDataReportResult>>(testContext);

    PlayFab::AdminModels::GetDataReportRequest request;
    FillPlayFabAdminGetDataReportRequest( &request );
    LogPlayFabAdminGetDataReportRequest( &request, "TestAdminGetDataReport" );
    HRESULT hr = PlayFabAdminGetDataReportAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetDataReportAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetMatchmakerGameInfo(TestContext& testContext)
{
    struct GetMatchmakerGameInfoResult : public XAsyncResult
    {
        PlayFabAdminGetMatchmakerGameInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetMatchmakerGameInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetMatchmakerGameInfoResult( result );
            return ValidatePlayFabAdminGetMatchmakerGameInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMatchmakerGameInfoResult>>(testContext);

    PlayFab::AdminModels::GetMatchmakerGameInfoRequest request;
    FillPlayFabAdminGetMatchmakerGameInfoRequest( &request );
    LogPlayFabAdminGetMatchmakerGameInfoRequest( &request, "TestAdminGetMatchmakerGameInfo" );
    HRESULT hr = PlayFabAdminGetMatchmakerGameInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetMatchmakerGameInfoAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetMatchmakerGameModes(TestContext& testContext)
{
    struct GetMatchmakerGameModesResult : public XAsyncResult
    {
        PlayFabAdminGetMatchmakerGameModesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetMatchmakerGameModesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetMatchmakerGameModesResult( result );
            return ValidatePlayFabAdminGetMatchmakerGameModesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMatchmakerGameModesResult>>(testContext);

    PlayFab::AdminModels::GetMatchmakerGameModesRequest request;
    FillPlayFabAdminGetMatchmakerGameModesRequest( &request );
    LogPlayFabAdminGetMatchmakerGameModesRequest( &request, "TestAdminGetMatchmakerGameModes" );
    HRESULT hr = PlayFabAdminGetMatchmakerGameModesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetMatchmakerGameModesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPlayedTitleList(TestContext& testContext)
{
    struct GetPlayedTitleListResult : public XAsyncResult
    {
        PlayFabAdminGetPlayedTitleListResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetPlayedTitleListGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPlayedTitleListResult( result );
            return ValidatePlayFabAdminGetPlayedTitleListResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayedTitleListResult>>(testContext);

    PlayFab::AdminModels::GetPlayedTitleListRequest request;
    FillPlayFabAdminGetPlayedTitleListRequest( &request );
    LogPlayFabAdminGetPlayedTitleListRequest( &request, "TestAdminGetPlayedTitleList" );
    HRESULT hr = PlayFabAdminGetPlayedTitleListAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPlayedTitleListAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPlayerIdFromAuthToken(TestContext& testContext)
{
    struct GetPlayerIdFromAuthTokenResult : public XAsyncResult
    {
        PlayFabAdminGetPlayerIdFromAuthTokenResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminGetPlayerIdFromAuthTokenGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminGetPlayerIdFromAuthTokenGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPlayerIdFromAuthTokenResult( result );
            return ValidatePlayFabAdminGetPlayerIdFromAuthTokenResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerIdFromAuthTokenResult>>(testContext);

    PlayFab::AdminModels::GetPlayerIdFromAuthTokenRequest request;
    FillPlayFabAdminGetPlayerIdFromAuthTokenRequest( &request );
    LogPlayFabAdminGetPlayerIdFromAuthTokenRequest( &request, "TestAdminGetPlayerIdFromAuthToken" );
    HRESULT hr = PlayFabAdminGetPlayerIdFromAuthTokenAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPlayerIdFromAuthTokenAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPlayerProfile(TestContext& testContext)
{
    struct GetPlayerProfileResult : public XAsyncResult
    {
        PlayFabAdminGetPlayerProfileResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetPlayerProfileGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPlayerProfileResult( result );
            return ValidatePlayFabAdminGetPlayerProfileResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerProfileResult>>(testContext);

    PlayFab::AdminModels::GetPlayerProfileRequest request;
    FillPlayFabAdminGetPlayerProfileRequest( &request );
    LogPlayFabAdminGetPlayerProfileRequest( &request, "TestAdminGetPlayerProfile" );
    HRESULT hr = PlayFabAdminGetPlayerProfileAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPlayerProfileAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPlayerSegments(TestContext& testContext)
{
    struct GetPlayerSegmentsResult : public XAsyncResult
    {
        PlayFabAdminGetPlayerSegmentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetPlayerSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPlayerSegmentsResult( result );
            return ValidatePlayFabAdminGetPlayerSegmentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerSegmentsResult>>(testContext);

    PlayFab::AdminModels::GetPlayersSegmentsRequest request;
    FillPlayFabAdminGetPlayersSegmentsRequest( &request );
    LogPlayFabAdminGetPlayersSegmentsRequest( &request, "TestAdminGetPlayerSegments" );
    HRESULT hr = PlayFabAdminGetPlayerSegmentsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPlayerSegmentsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPlayerSharedSecrets(TestContext& testContext)
{
    struct GetPlayerSharedSecretsResult : public XAsyncResult
    {
        PlayFabAdminGetPlayerSharedSecretsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetPlayerSharedSecretsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPlayerSharedSecretsResult( result );
            return ValidatePlayFabAdminGetPlayerSharedSecretsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerSharedSecretsResult>>(testContext);

    HRESULT hr = PlayFabAdminGetPlayerSharedSecretsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPlayerSharedSecretsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPlayersInSegment(TestContext& testContext)
{
    struct GetPlayersInSegmentResult : public XAsyncResult
    {
        PlayFabAdminGetPlayersInSegmentResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetPlayersInSegmentGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPlayersInSegmentResult( result );
            return ValidatePlayFabAdminGetPlayersInSegmentResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayersInSegmentResult>>(testContext);

    PlayFab::AdminModels::GetPlayersInSegmentRequest request;
    FillPlayFabAdminGetPlayersInSegmentRequest( &request );
    LogPlayFabAdminGetPlayersInSegmentRequest( &request, "TestAdminGetPlayersInSegment" );
    HRESULT hr = PlayFabAdminGetPlayersInSegmentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPlayersInSegmentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPlayerStatisticDefinitions(TestContext& testContext)
{
    struct GetPlayerStatisticDefinitionsResult : public XAsyncResult
    {
        PlayFabAdminGetPlayerStatisticDefinitionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetPlayerStatisticDefinitionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPlayerStatisticDefinitionsResult( result );
            return ValidatePlayFabAdminGetPlayerStatisticDefinitionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerStatisticDefinitionsResult>>(testContext);

    HRESULT hr = PlayFabAdminGetPlayerStatisticDefinitionsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPlayerStatisticDefinitionsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPlayerStatisticVersions(TestContext& testContext)
{
    struct GetPlayerStatisticVersionsResult : public XAsyncResult
    {
        PlayFabAdminGetPlayerStatisticVersionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetPlayerStatisticVersionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPlayerStatisticVersionsResult( result );
            return ValidatePlayFabAdminGetPlayerStatisticVersionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerStatisticVersionsResult>>(testContext);

    PlayFab::AdminModels::GetPlayerStatisticVersionsRequest request;
    FillPlayFabAdminGetPlayerStatisticVersionsRequest( &request );
    LogPlayFabAdminGetPlayerStatisticVersionsRequest( &request, "TestAdminGetPlayerStatisticVersions" );
    HRESULT hr = PlayFabAdminGetPlayerStatisticVersionsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPlayerStatisticVersionsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPlayerTags(TestContext& testContext)
{
    struct GetPlayerTagsResult : public XAsyncResult
    {
        PlayFabAdminGetPlayerTagsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetPlayerTagsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPlayerTagsResult( result );
            return ValidatePlayFabAdminGetPlayerTagsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerTagsResult>>(testContext);

    PlayFab::AdminModels::GetPlayerTagsRequest request;
    FillPlayFabAdminGetPlayerTagsRequest( &request );
    LogPlayFabAdminGetPlayerTagsRequest( &request, "TestAdminGetPlayerTags" );
    HRESULT hr = PlayFabAdminGetPlayerTagsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPlayerTagsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPolicy(TestContext& testContext)
{
    struct GetPolicyResult : public XAsyncResult
    {
        PlayFabAdminGetPolicyResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetPolicyGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPolicyResponse( result );
            return ValidatePlayFabAdminGetPolicyResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPolicyResult>>(testContext);

    PlayFab::AdminModels::GetPolicyRequest request;
    FillPlayFabAdminGetPolicyRequest( &request );
    LogPlayFabAdminGetPolicyRequest( &request, "TestAdminGetPolicy" );
    HRESULT hr = PlayFabAdminGetPolicyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPolicyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetPublisherData(TestContext& testContext)
{
    struct GetPublisherDataResult : public XAsyncResult
    {
        PlayFabAdminGetPublisherDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetPublisherDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetPublisherDataResult( result );
            return ValidatePlayFabAdminGetPublisherDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPublisherDataResult>>(testContext);

    PlayFab::AdminModels::GetPublisherDataRequest request;
    FillPlayFabAdminGetPublisherDataRequest( &request );
    LogPlayFabAdminGetPublisherDataRequest( &request, "TestAdminGetPublisherData" );
    HRESULT hr = PlayFabAdminGetPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetRandomResultTables(TestContext& testContext)
{
    struct GetRandomResultTablesResult : public XAsyncResult
    {
        PlayFabAdminGetRandomResultTablesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetRandomResultTablesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetRandomResultTablesResult( result );
            return ValidatePlayFabAdminGetRandomResultTablesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetRandomResultTablesResult>>(testContext);

    PlayFab::AdminModels::GetRandomResultTablesRequest request;
    FillPlayFabAdminGetRandomResultTablesRequest( &request );
    LogPlayFabAdminGetRandomResultTablesRequest( &request, "TestAdminGetRandomResultTables" );
    HRESULT hr = PlayFabAdminGetRandomResultTablesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetRandomResultTablesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetSegments(TestContext& testContext)
{
    struct GetSegmentsResult : public XAsyncResult
    {
        PlayFabAdminGetSegmentsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetSegmentsResponse( result );
            return ValidatePlayFabAdminGetSegmentsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetSegmentsResult>>(testContext);

    PlayFab::AdminModels::GetSegmentsRequest request;
    FillPlayFabAdminGetSegmentsRequest( &request );
    LogPlayFabAdminGetSegmentsRequest( &request, "TestAdminGetSegments" );
    HRESULT hr = PlayFabAdminGetSegmentsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetSegmentsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetServerBuildInfo(TestContext& testContext)
{
    struct GetServerBuildInfoResult : public XAsyncResult
    {
        PlayFabAdminGetServerBuildInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetServerBuildInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetServerBuildInfoResult( result );
            return ValidatePlayFabAdminGetServerBuildInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetServerBuildInfoResult>>(testContext);

    PlayFab::AdminModels::GetServerBuildInfoRequest request;
    FillPlayFabAdminGetServerBuildInfoRequest( &request );
    LogPlayFabAdminGetServerBuildInfoRequest( &request, "TestAdminGetServerBuildInfo" );
    HRESULT hr = PlayFabAdminGetServerBuildInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetServerBuildInfoAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetServerBuildUploadUrl(TestContext& testContext)
{
    struct GetServerBuildUploadUrlResult : public XAsyncResult
    {
        PlayFabAdminGetServerBuildUploadURLResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminGetServerBuildUploadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminGetServerBuildUploadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetServerBuildUploadURLResult( result );
            return ValidatePlayFabAdminGetServerBuildUploadURLResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetServerBuildUploadUrlResult>>(testContext);

    PlayFab::AdminModels::GetServerBuildUploadURLRequest request;
    FillPlayFabAdminGetServerBuildUploadURLRequest( &request );
    LogPlayFabAdminGetServerBuildUploadURLRequest( &request, "TestAdminGetServerBuildUploadUrl" );
    HRESULT hr = PlayFabAdminGetServerBuildUploadUrlAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetServerBuildUploadUrlAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetStoreItems(TestContext& testContext)
{
    struct GetStoreItemsResult : public XAsyncResult
    {
        PlayFabAdminGetStoreItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetStoreItemsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetStoreItemsResult( result );
            return ValidatePlayFabAdminGetStoreItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetStoreItemsResult>>(testContext);

    PlayFab::AdminModels::GetStoreItemsRequest request;
    FillPlayFabAdminGetStoreItemsRequest( &request );
    LogPlayFabAdminGetStoreItemsRequest( &request, "TestAdminGetStoreItems" );
    HRESULT hr = PlayFabAdminGetStoreItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetStoreItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetTaskInstances(TestContext& testContext)
{
    struct GetTaskInstancesResult : public XAsyncResult
    {
        PlayFabAdminGetTaskInstancesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetTaskInstancesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetTaskInstancesResult( result );
            return ValidatePlayFabAdminGetTaskInstancesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTaskInstancesResult>>(testContext);

    PlayFab::AdminModels::GetTaskInstancesRequest request;
    FillPlayFabAdminGetTaskInstancesRequest( &request );
    LogPlayFabAdminGetTaskInstancesRequest( &request, "TestAdminGetTaskInstances" );
    HRESULT hr = PlayFabAdminGetTaskInstancesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetTaskInstancesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetTasks(TestContext& testContext)
{
    struct GetTasksResult : public XAsyncResult
    {
        PlayFabAdminGetTasksResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetTasksGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetTasksResult( result );
            return ValidatePlayFabAdminGetTasksResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTasksResult>>(testContext);

    PlayFab::AdminModels::GetTasksRequest request;
    FillPlayFabAdminGetTasksRequest( &request );
    LogPlayFabAdminGetTasksRequest( &request, "TestAdminGetTasks" );
    HRESULT hr = PlayFabAdminGetTasksAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetTasksAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetTitleData(TestContext& testContext)
{
    struct GetTitleDataResult : public XAsyncResult
    {
        PlayFabAdminGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetTitleDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetTitleDataResult( result );
            return ValidatePlayFabAdminGetTitleDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleDataResult>>(testContext);

    PlayFab::AdminModels::GetTitleDataRequest request;
    FillPlayFabAdminGetTitleDataRequest( &request );
    LogPlayFabAdminGetTitleDataRequest( &request, "TestAdminGetTitleData" );
    HRESULT hr = PlayFabAdminGetTitleDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetTitleDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetTitleInternalData(TestContext& testContext)
{
    struct GetTitleInternalDataResult : public XAsyncResult
    {
        PlayFabAdminGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetTitleInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetTitleDataResult( result );
            return ValidatePlayFabAdminGetTitleDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleInternalDataResult>>(testContext);

    PlayFab::AdminModels::GetTitleDataRequest request;
    FillPlayFabAdminGetTitleDataRequest( &request );
    LogPlayFabAdminGetTitleDataRequest( &request, "TestAdminGetTitleInternalData" );
    HRESULT hr = PlayFabAdminGetTitleInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetTitleInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetUserAccountInfo(TestContext& testContext)
{
    struct GetUserAccountInfoResult : public XAsyncResult
    {
        PlayFabAdminLookupUserAccountInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetUserAccountInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminLookupUserAccountInfoResult( result );
            return ValidatePlayFabAdminLookupUserAccountInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserAccountInfoResult>>(testContext);

    PlayFab::AdminModels::LookupUserAccountInfoRequest request;
    FillPlayFabAdminLookupUserAccountInfoRequest( &request );
    LogPlayFabAdminLookupUserAccountInfoRequest( &request, "TestAdminGetUserAccountInfo" );
    HRESULT hr = PlayFabAdminGetUserAccountInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetUserAccountInfoAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetUserBans(TestContext& testContext)
{
    struct GetUserBansResult : public XAsyncResult
    {
        PlayFabAdminGetUserBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetUserBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetUserBansResult( result );
            return ValidatePlayFabAdminGetUserBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserBansResult>>(testContext);

    PlayFab::AdminModels::GetUserBansRequest request;
    FillPlayFabAdminGetUserBansRequest( &request );
    LogPlayFabAdminGetUserBansRequest( &request, "TestAdminGetUserBans" );
    HRESULT hr = PlayFabAdminGetUserBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetUserBansAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetUserData(TestContext& testContext)
{
    struct GetUserDataResult : public XAsyncResult
    {
        PlayFabAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetUserDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetUserDataResult( result );
            return ValidatePlayFabAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserDataResult>>(testContext);

    PlayFab::AdminModels::GetUserDataRequest request;
    FillPlayFabAdminGetUserDataRequest( &request );
    LogPlayFabAdminGetUserDataRequest( &request, "TestAdminGetUserData" );
    HRESULT hr = PlayFabAdminGetUserDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetUserDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetUserInternalData(TestContext& testContext)
{
    struct GetUserInternalDataResult : public XAsyncResult
    {
        PlayFabAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetUserInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetUserDataResult( result );
            return ValidatePlayFabAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserInternalDataResult>>(testContext);

    PlayFab::AdminModels::GetUserDataRequest request;
    FillPlayFabAdminGetUserDataRequest( &request );
    LogPlayFabAdminGetUserDataRequest( &request, "TestAdminGetUserInternalData" );
    HRESULT hr = PlayFabAdminGetUserInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetUserInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetUserInventory(TestContext& testContext)
{
    struct GetUserInventoryResult : public XAsyncResult
    {
        PlayFabAdminGetUserInventoryResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetUserInventoryGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetUserInventoryResult( result );
            return ValidatePlayFabAdminGetUserInventoryResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserInventoryResult>>(testContext);

    PlayFab::AdminModels::GetUserInventoryRequest request;
    FillPlayFabAdminGetUserInventoryRequest( &request );
    LogPlayFabAdminGetUserInventoryRequest( &request, "TestAdminGetUserInventory" );
    HRESULT hr = PlayFabAdminGetUserInventoryAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetUserInventoryAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetUserPublisherData(TestContext& testContext)
{
    struct GetUserPublisherDataResult : public XAsyncResult
    {
        PlayFabAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetUserPublisherDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetUserDataResult( result );
            return ValidatePlayFabAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserPublisherDataResult>>(testContext);

    PlayFab::AdminModels::GetUserDataRequest request;
    FillPlayFabAdminGetUserDataRequest( &request );
    LogPlayFabAdminGetUserDataRequest( &request, "TestAdminGetUserPublisherData" );
    HRESULT hr = PlayFabAdminGetUserPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetUserPublisherInternalData(TestContext& testContext)
{
    struct GetUserPublisherInternalDataResult : public XAsyncResult
    {
        PlayFabAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetUserPublisherInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetUserDataResult( result );
            return ValidatePlayFabAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserPublisherInternalDataResult>>(testContext);

    PlayFab::AdminModels::GetUserDataRequest request;
    FillPlayFabAdminGetUserDataRequest( &request );
    LogPlayFabAdminGetUserDataRequest( &request, "TestAdminGetUserPublisherInternalData" );
    HRESULT hr = PlayFabAdminGetUserPublisherInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetUserPublisherInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetUserPublisherReadOnlyData(TestContext& testContext)
{
    struct GetUserPublisherReadOnlyDataResult : public XAsyncResult
    {
        PlayFabAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetUserPublisherReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetUserDataResult( result );
            return ValidatePlayFabAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserPublisherReadOnlyDataResult>>(testContext);

    PlayFab::AdminModels::GetUserDataRequest request;
    FillPlayFabAdminGetUserDataRequest( &request );
    LogPlayFabAdminGetUserDataRequest( &request, "TestAdminGetUserPublisherReadOnlyData" );
    HRESULT hr = PlayFabAdminGetUserPublisherReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetUserPublisherReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGetUserReadOnlyData(TestContext& testContext)
{
    struct GetUserReadOnlyDataResult : public XAsyncResult
    {
        PlayFabAdminGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGetUserReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGetUserDataResult( result );
            return ValidatePlayFabAdminGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserReadOnlyDataResult>>(testContext);

    PlayFab::AdminModels::GetUserDataRequest request;
    FillPlayFabAdminGetUserDataRequest( &request );
    LogPlayFabAdminGetUserDataRequest( &request, "TestAdminGetUserReadOnlyData" );
    HRESULT hr = PlayFabAdminGetUserReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGetUserReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminGrantItemsToUsers(TestContext& testContext)
{
    struct GrantItemsToUsersResult : public XAsyncResult
    {
        PlayFabAdminGrantItemsToUsersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminGrantItemsToUsersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminGrantItemsToUsersResult( result );
            return ValidatePlayFabAdminGrantItemsToUsersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GrantItemsToUsersResult>>(testContext);

    PlayFab::AdminModels::GrantItemsToUsersRequest request;
    FillPlayFabAdminGrantItemsToUsersRequest( &request );
    LogPlayFabAdminGrantItemsToUsersRequest( &request, "TestAdminGrantItemsToUsers" );
    HRESULT hr = PlayFabAdminGrantItemsToUsersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminGrantItemsToUsersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminIncrementLimitedEditionItemAvailability(TestContext& testContext)
{
    struct IncrementLimitedEditionItemAvailabilityResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<IncrementLimitedEditionItemAvailabilityResult>>(testContext);

    PlayFab::AdminModels::IncrementLimitedEditionItemAvailabilityRequest request;
    FillPlayFabAdminIncrementLimitedEditionItemAvailabilityRequest( &request );
    LogPlayFabAdminIncrementLimitedEditionItemAvailabilityRequest( &request, "TestAdminIncrementLimitedEditionItemAvailability" );
    HRESULT hr = PlayFabAdminIncrementLimitedEditionItemAvailabilityAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminIncrementLimitedEditionItemAvailabilityAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminIncrementPlayerStatisticVersion(TestContext& testContext)
{
    struct IncrementPlayerStatisticVersionResult : public XAsyncResult
    {
        PlayFabAdminIncrementPlayerStatisticVersionResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminIncrementPlayerStatisticVersionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminIncrementPlayerStatisticVersionResult( result );
            return ValidatePlayFabAdminIncrementPlayerStatisticVersionResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<IncrementPlayerStatisticVersionResult>>(testContext);

    PlayFab::AdminModels::IncrementPlayerStatisticVersionRequest request;
    FillPlayFabAdminIncrementPlayerStatisticVersionRequest( &request );
    LogPlayFabAdminIncrementPlayerStatisticVersionRequest( &request, "TestAdminIncrementPlayerStatisticVersion" );
    HRESULT hr = PlayFabAdminIncrementPlayerStatisticVersionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminIncrementPlayerStatisticVersionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminListOpenIdConnection(TestContext& testContext)
{
    struct ListOpenIdConnectionResult : public XAsyncResult
    {
        PlayFabAdminListOpenIdConnectionResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminListOpenIdConnectionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminListOpenIdConnectionResponse( result );
            return ValidatePlayFabAdminListOpenIdConnectionResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListOpenIdConnectionResult>>(testContext);

    HRESULT hr = PlayFabAdminListOpenIdConnectionAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminListOpenIdConnectionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminListServerBuilds(TestContext& testContext)
{
    struct ListServerBuildsResult : public XAsyncResult
    {
        PlayFabAdminListBuildsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminListServerBuildsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminListBuildsResult( result );
            return ValidatePlayFabAdminListBuildsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListServerBuildsResult>>(testContext);

    HRESULT hr = PlayFabAdminListServerBuildsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminListServerBuildsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminListVirtualCurrencyTypes(TestContext& testContext)
{
    struct ListVirtualCurrencyTypesResult : public XAsyncResult
    {
        PlayFabAdminListVirtualCurrencyTypesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminListVirtualCurrencyTypesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminListVirtualCurrencyTypesResult( result );
            return ValidatePlayFabAdminListVirtualCurrencyTypesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListVirtualCurrencyTypesResult>>(testContext);

    HRESULT hr = PlayFabAdminListVirtualCurrencyTypesAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminListVirtualCurrencyTypesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminModifyMatchmakerGameModes(TestContext& testContext)
{
    struct ModifyMatchmakerGameModesResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ModifyMatchmakerGameModesResult>>(testContext);

    PlayFab::AdminModels::ModifyMatchmakerGameModesRequest request;
    FillPlayFabAdminModifyMatchmakerGameModesRequest( &request );
    LogPlayFabAdminModifyMatchmakerGameModesRequest( &request, "TestAdminModifyMatchmakerGameModes" );
    HRESULT hr = PlayFabAdminModifyMatchmakerGameModesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminModifyMatchmakerGameModesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminModifyServerBuild(TestContext& testContext)
{
    struct ModifyServerBuildResult : public XAsyncResult
    {
        PlayFabAdminModifyServerBuildResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminModifyServerBuildGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminModifyServerBuildResult( result );
            return ValidatePlayFabAdminModifyServerBuildResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ModifyServerBuildResult>>(testContext);

    PlayFab::AdminModels::ModifyServerBuildRequest request;
    FillPlayFabAdminModifyServerBuildRequest( &request );
    LogPlayFabAdminModifyServerBuildRequest( &request, "TestAdminModifyServerBuild" );
    HRESULT hr = PlayFabAdminModifyServerBuildAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminModifyServerBuildAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminRefundPurchase(TestContext& testContext)
{
    struct RefundPurchaseResult : public XAsyncResult
    {
        PlayFabAdminRefundPurchaseResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminRefundPurchaseGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminRefundPurchaseGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminRefundPurchaseResponse( result );
            return ValidatePlayFabAdminRefundPurchaseResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RefundPurchaseResult>>(testContext);

    PlayFab::AdminModels::RefundPurchaseRequest request;
    FillPlayFabAdminRefundPurchaseRequest( &request );
    LogPlayFabAdminRefundPurchaseRequest( &request, "TestAdminRefundPurchase" );
    HRESULT hr = PlayFabAdminRefundPurchaseAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminRefundPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminRemovePlayerTag(TestContext& testContext)
{
    struct RemovePlayerTagResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemovePlayerTagResult>>(testContext);

    PlayFab::AdminModels::RemovePlayerTagRequest request;
    FillPlayFabAdminRemovePlayerTagRequest( &request );
    LogPlayFabAdminRemovePlayerTagRequest( &request, "TestAdminRemovePlayerTag" );
    HRESULT hr = PlayFabAdminRemovePlayerTagAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminRemovePlayerTagAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminRemoveServerBuild(TestContext& testContext)
{
    struct RemoveServerBuildResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveServerBuildResult>>(testContext);

    PlayFab::AdminModels::RemoveServerBuildRequest request;
    FillPlayFabAdminRemoveServerBuildRequest( &request );
    LogPlayFabAdminRemoveServerBuildRequest( &request, "TestAdminRemoveServerBuild" );
    HRESULT hr = PlayFabAdminRemoveServerBuildAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminRemoveServerBuildAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminRemoveVirtualCurrencyTypes(TestContext& testContext)
{
    struct RemoveVirtualCurrencyTypesResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveVirtualCurrencyTypesResult>>(testContext);

    PlayFab::AdminModels::RemoveVirtualCurrencyTypesRequest request;
    FillPlayFabAdminRemoveVirtualCurrencyTypesRequest( &request );
    LogPlayFabAdminRemoveVirtualCurrencyTypesRequest( &request, "TestAdminRemoveVirtualCurrencyTypes" );
    HRESULT hr = PlayFabAdminRemoveVirtualCurrencyTypesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminRemoveVirtualCurrencyTypesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminResetCharacterStatistics(TestContext& testContext)
{
    struct ResetCharacterStatisticsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ResetCharacterStatisticsResult>>(testContext);

    PlayFab::AdminModels::ResetCharacterStatisticsRequest request;
    FillPlayFabAdminResetCharacterStatisticsRequest( &request );
    LogPlayFabAdminResetCharacterStatisticsRequest( &request, "TestAdminResetCharacterStatistics" );
    HRESULT hr = PlayFabAdminResetCharacterStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminResetCharacterStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminResetPassword(TestContext& testContext)
{
    struct ResetPasswordResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ResetPasswordResult>>(testContext);

    PlayFab::AdminModels::ResetPasswordRequest request;
    FillPlayFabAdminResetPasswordRequest( &request );
    LogPlayFabAdminResetPasswordRequest( &request, "TestAdminResetPassword" );
    HRESULT hr = PlayFabAdminResetPasswordAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminResetPasswordAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminResetUserStatistics(TestContext& testContext)
{
    struct ResetUserStatisticsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ResetUserStatisticsResult>>(testContext);

    PlayFab::AdminModels::ResetUserStatisticsRequest request;
    FillPlayFabAdminResetUserStatisticsRequest( &request );
    LogPlayFabAdminResetUserStatisticsRequest( &request, "TestAdminResetUserStatistics" );
    HRESULT hr = PlayFabAdminResetUserStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminResetUserStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminResolvePurchaseDispute(TestContext& testContext)
{
    struct ResolvePurchaseDisputeResult : public XAsyncResult
    {
        PlayFabAdminResolvePurchaseDisputeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminResolvePurchaseDisputeGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminResolvePurchaseDisputeGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminResolvePurchaseDisputeResponse( result );
            return ValidatePlayFabAdminResolvePurchaseDisputeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ResolvePurchaseDisputeResult>>(testContext);

    PlayFab::AdminModels::ResolvePurchaseDisputeRequest request;
    FillPlayFabAdminResolvePurchaseDisputeRequest( &request );
    LogPlayFabAdminResolvePurchaseDisputeRequest( &request, "TestAdminResolvePurchaseDispute" );
    HRESULT hr = PlayFabAdminResolvePurchaseDisputeAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminResolvePurchaseDisputeAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminRevokeAllBansForUser(TestContext& testContext)
{
    struct RevokeAllBansForUserResult : public XAsyncResult
    {
        PlayFabAdminRevokeAllBansForUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminRevokeAllBansForUserGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminRevokeAllBansForUserResult( result );
            return ValidatePlayFabAdminRevokeAllBansForUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RevokeAllBansForUserResult>>(testContext);

    PlayFab::AdminModels::RevokeAllBansForUserRequest request;
    FillPlayFabAdminRevokeAllBansForUserRequest( &request );
    LogPlayFabAdminRevokeAllBansForUserRequest( &request, "TestAdminRevokeAllBansForUser" );
    HRESULT hr = PlayFabAdminRevokeAllBansForUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminRevokeAllBansForUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminRevokeBans(TestContext& testContext)
{
    struct RevokeBansResult : public XAsyncResult
    {
        PlayFabAdminRevokeBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminRevokeBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminRevokeBansResult( result );
            return ValidatePlayFabAdminRevokeBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RevokeBansResult>>(testContext);

    PlayFab::AdminModels::RevokeBansRequest request;
    FillPlayFabAdminRevokeBansRequest( &request );
    LogPlayFabAdminRevokeBansRequest( &request, "TestAdminRevokeBans" );
    HRESULT hr = PlayFabAdminRevokeBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminRevokeBansAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminRevokeInventoryItem(TestContext& testContext)
{
    struct RevokeInventoryItemResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RevokeInventoryItemResult>>(testContext);

    PlayFab::AdminModels::RevokeInventoryItemRequest request;
    FillPlayFabAdminRevokeInventoryItemRequest( &request );
    LogPlayFabAdminRevokeInventoryItemRequest( &request, "TestAdminRevokeInventoryItem" );
    HRESULT hr = PlayFabAdminRevokeInventoryItemAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminRevokeInventoryItemAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminRevokeInventoryItems(TestContext& testContext)
{
    struct RevokeInventoryItemsResult : public XAsyncResult
    {
        PlayFabAdminRevokeInventoryItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminRevokeInventoryItemsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminRevokeInventoryItemsResult( result );
            return ValidatePlayFabAdminRevokeInventoryItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RevokeInventoryItemsResult>>(testContext);

    PlayFab::AdminModels::RevokeInventoryItemsRequest request;
    FillPlayFabAdminRevokeInventoryItemsRequest( &request );
    LogPlayFabAdminRevokeInventoryItemsRequest( &request, "TestAdminRevokeInventoryItems" );
    HRESULT hr = PlayFabAdminRevokeInventoryItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminRevokeInventoryItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminRunTask(TestContext& testContext)
{
    struct RunTaskResult : public XAsyncResult
    {
        PlayFabAdminRunTaskResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminRunTaskGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminRunTaskGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminRunTaskResult( result );
            return ValidatePlayFabAdminRunTaskResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RunTaskResult>>(testContext);

    PlayFab::AdminModels::RunTaskRequest request;
    FillPlayFabAdminRunTaskRequest( &request );
    LogPlayFabAdminRunTaskRequest( &request, "TestAdminRunTask" );
    HRESULT hr = PlayFabAdminRunTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminRunTaskAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSendAccountRecoveryEmail(TestContext& testContext)
{
    struct SendAccountRecoveryEmailResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SendAccountRecoveryEmailResult>>(testContext);

    PlayFab::AdminModels::SendAccountRecoveryEmailRequest request;
    FillPlayFabAdminSendAccountRecoveryEmailRequest( &request );
    LogPlayFabAdminSendAccountRecoveryEmailRequest( &request, "TestAdminSendAccountRecoveryEmail" );
    HRESULT hr = PlayFabAdminSendAccountRecoveryEmailAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSendAccountRecoveryEmailAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSetCatalogItems(TestContext& testContext)
{
    struct SetCatalogItemsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetCatalogItemsResult>>(testContext);

    PlayFab::AdminModels::UpdateCatalogItemsRequest request;
    FillPlayFabAdminUpdateCatalogItemsRequest( &request );
    LogPlayFabAdminUpdateCatalogItemsRequest( &request, "TestAdminSetCatalogItems" );
    HRESULT hr = PlayFabAdminSetCatalogItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSetCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSetPlayerSecret(TestContext& testContext)
{
    struct SetPlayerSecretResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetPlayerSecretResult>>(testContext);

    PlayFab::AdminModels::SetPlayerSecretRequest request;
    FillPlayFabAdminSetPlayerSecretRequest( &request );
    LogPlayFabAdminSetPlayerSecretRequest( &request, "TestAdminSetPlayerSecret" );
    HRESULT hr = PlayFabAdminSetPlayerSecretAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSetPlayerSecretAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSetPublishedRevision(TestContext& testContext)
{
    struct SetPublishedRevisionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetPublishedRevisionResult>>(testContext);

    PlayFab::AdminModels::SetPublishedRevisionRequest request;
    FillPlayFabAdminSetPublishedRevisionRequest( &request );
    LogPlayFabAdminSetPublishedRevisionRequest( &request, "TestAdminSetPublishedRevision" );
    HRESULT hr = PlayFabAdminSetPublishedRevisionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSetPublishedRevisionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSetPublisherData(TestContext& testContext)
{
    struct SetPublisherDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetPublisherDataResult>>(testContext);

    PlayFab::AdminModels::SetPublisherDataRequest request;
    FillPlayFabAdminSetPublisherDataRequest( &request );
    LogPlayFabAdminSetPublisherDataRequest( &request, "TestAdminSetPublisherData" );
    HRESULT hr = PlayFabAdminSetPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSetStoreItems(TestContext& testContext)
{
    struct SetStoreItemsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetStoreItemsResult>>(testContext);

    PlayFab::AdminModels::UpdateStoreItemsRequest request;
    FillPlayFabAdminUpdateStoreItemsRequest( &request );
    LogPlayFabAdminUpdateStoreItemsRequest( &request, "TestAdminSetStoreItems" );
    HRESULT hr = PlayFabAdminSetStoreItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSetStoreItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSetTitleData(TestContext& testContext)
{
    struct SetTitleDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetTitleDataResult>>(testContext);

    PlayFab::AdminModels::SetTitleDataRequest request;
    FillPlayFabAdminSetTitleDataRequest( &request );
    LogPlayFabAdminSetTitleDataRequest( &request, "TestAdminSetTitleData" );
    HRESULT hr = PlayFabAdminSetTitleDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSetTitleDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSetTitleDataAndOverrides(TestContext& testContext)
{
    struct SetTitleDataAndOverridesResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetTitleDataAndOverridesResult>>(testContext);

    PlayFab::AdminModels::SetTitleDataAndOverridesRequest request;
    FillPlayFabAdminSetTitleDataAndOverridesRequest( &request );
    LogPlayFabAdminSetTitleDataAndOverridesRequest( &request, "TestAdminSetTitleDataAndOverrides" );
    HRESULT hr = PlayFabAdminSetTitleDataAndOverridesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSetTitleDataAndOverridesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSetTitleInternalData(TestContext& testContext)
{
    struct SetTitleInternalDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetTitleInternalDataResult>>(testContext);

    PlayFab::AdminModels::SetTitleDataRequest request;
    FillPlayFabAdminSetTitleDataRequest( &request );
    LogPlayFabAdminSetTitleDataRequest( &request, "TestAdminSetTitleInternalData" );
    HRESULT hr = PlayFabAdminSetTitleInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSetTitleInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSetupPushNotification(TestContext& testContext)
{
    struct SetupPushNotificationResult : public XAsyncResult
    {
        PlayFabAdminSetupPushNotificationResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminSetupPushNotificationGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminSetupPushNotificationGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminSetupPushNotificationResult( result );
            return ValidatePlayFabAdminSetupPushNotificationResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetupPushNotificationResult>>(testContext);

    PlayFab::AdminModels::SetupPushNotificationRequest request;
    FillPlayFabAdminSetupPushNotificationRequest( &request );
    LogPlayFabAdminSetupPushNotificationRequest( &request, "TestAdminSetupPushNotification" );
    HRESULT hr = PlayFabAdminSetupPushNotificationAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSetupPushNotificationAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminSubtractUserVirtualCurrency(TestContext& testContext)
{
    struct SubtractUserVirtualCurrencyResult : public XAsyncResult
    {
        PlayFabAdminModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminSubtractUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminSubtractUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminModifyUserVirtualCurrencyResult( result );
            return ValidatePlayFabAdminModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SubtractUserVirtualCurrencyResult>>(testContext);

    PlayFab::AdminModels::SubtractUserVirtualCurrencyRequest request;
    FillPlayFabAdminSubtractUserVirtualCurrencyRequest( &request );
    LogPlayFabAdminSubtractUserVirtualCurrencyRequest( &request, "TestAdminSubtractUserVirtualCurrency" );
    HRESULT hr = PlayFabAdminSubtractUserVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminSubtractUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateBans(TestContext& testContext)
{
    struct UpdateBansResult : public XAsyncResult
    {
        PlayFabAdminUpdateBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminUpdateBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdateBansResult( result );
            return ValidatePlayFabAdminUpdateBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateBansResult>>(testContext);

    PlayFab::AdminModels::UpdateBansRequest request;
    FillPlayFabAdminUpdateBansRequest( &request );
    LogPlayFabAdminUpdateBansRequest( &request, "TestAdminUpdateBans" );
    HRESULT hr = PlayFabAdminUpdateBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateBansAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateCatalogItems(TestContext& testContext)
{
    struct UpdateCatalogItemsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateCatalogItemsResult>>(testContext);

    PlayFab::AdminModels::UpdateCatalogItemsRequest request;
    FillPlayFabAdminUpdateCatalogItemsRequest( &request );
    LogPlayFabAdminUpdateCatalogItemsRequest( &request, "TestAdminUpdateCatalogItems" );
    HRESULT hr = PlayFabAdminUpdateCatalogItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateCloudScript(TestContext& testContext)
{
    struct UpdateCloudScriptResult : public XAsyncResult
    {
        PlayFabAdminUpdateCloudScriptResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminUpdateCloudScriptGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdateCloudScriptResult( &result );
            return ValidatePlayFabAdminUpdateCloudScriptResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateCloudScriptResult>>(testContext);

    PlayFab::AdminModels::UpdateCloudScriptRequest request;
    FillPlayFabAdminUpdateCloudScriptRequest( &request );
    LogPlayFabAdminUpdateCloudScriptRequest( &request, "TestAdminUpdateCloudScript" );
    HRESULT hr = PlayFabAdminUpdateCloudScriptAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateCloudScriptAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateOpenIdConnection(TestContext& testContext)
{
    struct UpdateOpenIdConnectionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateOpenIdConnectionResult>>(testContext);

    PlayFab::AdminModels::UpdateOpenIdConnectionRequest request;
    FillPlayFabAdminUpdateOpenIdConnectionRequest( &request );
    LogPlayFabAdminUpdateOpenIdConnectionRequest( &request, "TestAdminUpdateOpenIdConnection" );
    HRESULT hr = PlayFabAdminUpdateOpenIdConnectionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateOpenIdConnectionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdatePlayerSharedSecret(TestContext& testContext)
{
    struct UpdatePlayerSharedSecretResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdatePlayerSharedSecretResult>>(testContext);

    PlayFab::AdminModels::UpdatePlayerSharedSecretRequest request;
    FillPlayFabAdminUpdatePlayerSharedSecretRequest( &request );
    LogPlayFabAdminUpdatePlayerSharedSecretRequest( &request, "TestAdminUpdatePlayerSharedSecret" );
    HRESULT hr = PlayFabAdminUpdatePlayerSharedSecretAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdatePlayerSharedSecretAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdatePlayerStatisticDefinition(TestContext& testContext)
{
    struct UpdatePlayerStatisticDefinitionResult : public XAsyncResult
    {
        PlayFabAdminUpdatePlayerStatisticDefinitionResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminUpdatePlayerStatisticDefinitionGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdatePlayerStatisticDefinitionResult( result );
            return ValidatePlayFabAdminUpdatePlayerStatisticDefinitionResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdatePlayerStatisticDefinitionResult>>(testContext);

    PlayFab::AdminModels::UpdatePlayerStatisticDefinitionRequest request;
    FillPlayFabAdminUpdatePlayerStatisticDefinitionRequest( &request );
    LogPlayFabAdminUpdatePlayerStatisticDefinitionRequest( &request, "TestAdminUpdatePlayerStatisticDefinition" );
    HRESULT hr = PlayFabAdminUpdatePlayerStatisticDefinitionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdatePlayerStatisticDefinitionAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdatePolicy(TestContext& testContext)
{
    struct UpdatePolicyResult : public XAsyncResult
    {
        PlayFabAdminUpdatePolicyResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminUpdatePolicyGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdatePolicyResponse( result );
            return ValidatePlayFabAdminUpdatePolicyResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdatePolicyResult>>(testContext);

    PlayFab::AdminModels::UpdatePolicyRequest request;
    FillPlayFabAdminUpdatePolicyRequest( &request );
    LogPlayFabAdminUpdatePolicyRequest( &request, "TestAdminUpdatePolicy" );
    HRESULT hr = PlayFabAdminUpdatePolicyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdatePolicyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateRandomResultTables(TestContext& testContext)
{
    struct UpdateRandomResultTablesResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateRandomResultTablesResult>>(testContext);

    PlayFab::AdminModels::UpdateRandomResultTablesRequest request;
    FillPlayFabAdminUpdateRandomResultTablesRequest( &request );
    LogPlayFabAdminUpdateRandomResultTablesRequest( &request, "TestAdminUpdateRandomResultTables" );
    HRESULT hr = PlayFabAdminUpdateRandomResultTablesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateRandomResultTablesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateSegment(TestContext& testContext)
{
    struct UpdateSegmentResult : public XAsyncResult
    {
        PlayFabAdminUpdateSegmentResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminUpdateSegmentGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminUpdateSegmentGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdateSegmentResponse( result );
            return ValidatePlayFabAdminUpdateSegmentResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateSegmentResult>>(testContext);

    PlayFab::AdminModels::UpdateSegmentRequest request;
    FillPlayFabAdminUpdateSegmentRequest( &request );
    LogPlayFabAdminUpdateSegmentRequest( &request, "TestAdminUpdateSegment" );
    HRESULT hr = PlayFabAdminUpdateSegmentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateSegmentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateStoreItems(TestContext& testContext)
{
    struct UpdateStoreItemsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateStoreItemsResult>>(testContext);

    PlayFab::AdminModels::UpdateStoreItemsRequest request;
    FillPlayFabAdminUpdateStoreItemsRequest( &request );
    LogPlayFabAdminUpdateStoreItemsRequest( &request, "TestAdminUpdateStoreItems" );
    HRESULT hr = PlayFabAdminUpdateStoreItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateStoreItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateTask(TestContext& testContext)
{
    struct UpdateTaskResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateTaskResult>>(testContext);

    PlayFab::AdminModels::UpdateTaskRequest request;
    FillPlayFabAdminUpdateTaskRequest( &request );
    LogPlayFabAdminUpdateTaskRequest( &request, "TestAdminUpdateTask" );
    HRESULT hr = PlayFabAdminUpdateTaskAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateTaskAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateUserData(TestContext& testContext)
{
    struct UpdateUserDataResult : public XAsyncResult
    {
        PlayFabAdminUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminUpdateUserDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdateUserDataResult( &result );
            return ValidatePlayFabAdminUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserDataResult>>(testContext);

    PlayFab::AdminModels::UpdateUserDataRequest request;
    FillPlayFabAdminUpdateUserDataRequest( &request );
    LogPlayFabAdminUpdateUserDataRequest( &request, "TestAdminUpdateUserData" );
    HRESULT hr = PlayFabAdminUpdateUserDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateUserDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateUserInternalData(TestContext& testContext)
{
    struct UpdateUserInternalDataResult : public XAsyncResult
    {
        PlayFabAdminUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminUpdateUserInternalDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdateUserDataResult( &result );
            return ValidatePlayFabAdminUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserInternalDataResult>>(testContext);

    PlayFab::AdminModels::UpdateUserInternalDataRequest request;
    FillPlayFabAdminUpdateUserInternalDataRequest( &request );
    LogPlayFabAdminUpdateUserInternalDataRequest( &request, "TestAdminUpdateUserInternalData" );
    HRESULT hr = PlayFabAdminUpdateUserInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateUserInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateUserPublisherData(TestContext& testContext)
{
    struct UpdateUserPublisherDataResult : public XAsyncResult
    {
        PlayFabAdminUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminUpdateUserPublisherDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdateUserDataResult( &result );
            return ValidatePlayFabAdminUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserPublisherDataResult>>(testContext);

    PlayFab::AdminModels::UpdateUserDataRequest request;
    FillPlayFabAdminUpdateUserDataRequest( &request );
    LogPlayFabAdminUpdateUserDataRequest( &request, "TestAdminUpdateUserPublisherData" );
    HRESULT hr = PlayFabAdminUpdateUserPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateUserPublisherInternalData(TestContext& testContext)
{
    struct UpdateUserPublisherInternalDataResult : public XAsyncResult
    {
        PlayFabAdminUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminUpdateUserPublisherInternalDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdateUserDataResult( &result );
            return ValidatePlayFabAdminUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserPublisherInternalDataResult>>(testContext);

    PlayFab::AdminModels::UpdateUserInternalDataRequest request;
    FillPlayFabAdminUpdateUserInternalDataRequest( &request );
    LogPlayFabAdminUpdateUserInternalDataRequest( &request, "TestAdminUpdateUserPublisherInternalData" );
    HRESULT hr = PlayFabAdminUpdateUserPublisherInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateUserPublisherInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateUserPublisherReadOnlyData(TestContext& testContext)
{
    struct UpdateUserPublisherReadOnlyDataResult : public XAsyncResult
    {
        PlayFabAdminUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminUpdateUserPublisherReadOnlyDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdateUserDataResult( &result );
            return ValidatePlayFabAdminUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserPublisherReadOnlyDataResult>>(testContext);

    PlayFab::AdminModels::UpdateUserDataRequest request;
    FillPlayFabAdminUpdateUserDataRequest( &request );
    LogPlayFabAdminUpdateUserDataRequest( &request, "TestAdminUpdateUserPublisherReadOnlyData" );
    HRESULT hr = PlayFabAdminUpdateUserPublisherReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateUserPublisherReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateUserReadOnlyData(TestContext& testContext)
{
    struct UpdateUserReadOnlyDataResult : public XAsyncResult
    {
        PlayFabAdminUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAdminUpdateUserReadOnlyDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdateUserDataResult( &result );
            return ValidatePlayFabAdminUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserReadOnlyDataResult>>(testContext);

    PlayFab::AdminModels::UpdateUserDataRequest request;
    FillPlayFabAdminUpdateUserDataRequest( &request );
    LogPlayFabAdminUpdateUserDataRequest( &request, "TestAdminUpdateUserReadOnlyData" );
    HRESULT hr = PlayFabAdminUpdateUserReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateUserReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenAdminTests::TestAdminUpdateUserTitleDisplayName(TestContext& testContext)
{
    struct UpdateUserTitleDisplayNameResult : public XAsyncResult
    {
        PlayFabAdminUpdateUserTitleDisplayNameResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabAdminUpdateUserTitleDisplayNameGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabAdminUpdateUserTitleDisplayNameGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAdminUpdateUserTitleDisplayNameResult( result );
            return ValidatePlayFabAdminUpdateUserTitleDisplayNameResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserTitleDisplayNameResult>>(testContext);

    PlayFab::AdminModels::UpdateUserTitleDisplayNameRequest request;
    FillPlayFabAdminUpdateUserTitleDisplayNameRequest( &request );
    LogPlayFabAdminUpdateUserTitleDisplayNameRequest( &request, "TestAdminUpdateUserTitleDisplayName" );
    HRESULT hr = PlayFabAdminUpdateUserTitleDisplayNameAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAdminUpdateUserTitleDisplayNameAsync", hr);
        return;
    }
    async.release(); 
} 


}
