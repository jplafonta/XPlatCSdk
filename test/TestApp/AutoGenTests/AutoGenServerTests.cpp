#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenServerTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenServerTests::Log(std::stringstream& ss)
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

void AutoGenServerTests::AddTests()
{
    // Generated tests 
    AddTest("TestServerAddCharacterVirtualCurrency", &AutoGenServerTests::TestServerAddCharacterVirtualCurrency);
    AddTest("TestServerAddFriend", &AutoGenServerTests::TestServerAddFriend);
    AddTest("TestServerAddGenericID", &AutoGenServerTests::TestServerAddGenericID);
    AddTest("TestServerAddPlayerTag", &AutoGenServerTests::TestServerAddPlayerTag);
    AddTest("TestServerAddSharedGroupMembers", &AutoGenServerTests::TestServerAddSharedGroupMembers);
    AddTest("TestServerAddUserVirtualCurrency", &AutoGenServerTests::TestServerAddUserVirtualCurrency);
    AddTest("TestServerAuthenticateSessionTicket", &AutoGenServerTests::TestServerAuthenticateSessionTicket);
    AddTest("TestServerAwardSteamAchievement", &AutoGenServerTests::TestServerAwardSteamAchievement);
    AddTest("TestServerBanUsers", &AutoGenServerTests::TestServerBanUsers);
    AddTest("TestServerConsumeItem", &AutoGenServerTests::TestServerConsumeItem);
    AddTest("TestServerCreateSharedGroup", &AutoGenServerTests::TestServerCreateSharedGroup);
    AddTest("TestServerDeleteCharacterFromUser", &AutoGenServerTests::TestServerDeleteCharacterFromUser);
    AddTest("TestServerDeletePlayer", &AutoGenServerTests::TestServerDeletePlayer);
    AddTest("TestServerDeletePushNotificationTemplate", &AutoGenServerTests::TestServerDeletePushNotificationTemplate);
    AddTest("TestServerDeleteSharedGroup", &AutoGenServerTests::TestServerDeleteSharedGroup);
    AddTest("TestServerDeregisterGame", &AutoGenServerTests::TestServerDeregisterGame);
    AddTest("TestServerEvaluateRandomResultTable", &AutoGenServerTests::TestServerEvaluateRandomResultTable);
    AddTest("TestServerExecuteCloudScript", &AutoGenServerTests::TestServerExecuteCloudScript);
    AddTest("TestServerGetAllSegments", &AutoGenServerTests::TestServerGetAllSegments);
    AddTest("TestServerGetAllUsersCharacters", &AutoGenServerTests::TestServerGetAllUsersCharacters);
    AddTest("TestServerGetCatalogItems", &AutoGenServerTests::TestServerGetCatalogItems);
    AddTest("TestServerGetCharacterData", &AutoGenServerTests::TestServerGetCharacterData);
    AddTest("TestServerGetCharacterInternalData", &AutoGenServerTests::TestServerGetCharacterInternalData);
    AddTest("TestServerGetCharacterInventory", &AutoGenServerTests::TestServerGetCharacterInventory);
    AddTest("TestServerGetCharacterLeaderboard", &AutoGenServerTests::TestServerGetCharacterLeaderboard);
    AddTest("TestServerGetCharacterReadOnlyData", &AutoGenServerTests::TestServerGetCharacterReadOnlyData);
    AddTest("TestServerGetCharacterStatistics", &AutoGenServerTests::TestServerGetCharacterStatistics);
    AddTest("TestServerGetContentDownloadUrl", &AutoGenServerTests::TestServerGetContentDownloadUrl);
    AddTest("TestServerGetFriendLeaderboard", &AutoGenServerTests::TestServerGetFriendLeaderboard);
    AddTest("TestServerGetFriendsList", &AutoGenServerTests::TestServerGetFriendsList);
    AddTest("TestServerGetLeaderboard", &AutoGenServerTests::TestServerGetLeaderboard);
    AddTest("TestServerGetLeaderboardAroundCharacter", &AutoGenServerTests::TestServerGetLeaderboardAroundCharacter);
    AddTest("TestServerGetLeaderboardAroundUser", &AutoGenServerTests::TestServerGetLeaderboardAroundUser);
    AddTest("TestServerGetLeaderboardForUserCharacters", &AutoGenServerTests::TestServerGetLeaderboardForUserCharacters);
    AddTest("TestServerGetPlayerCombinedInfo", &AutoGenServerTests::TestServerGetPlayerCombinedInfo);
    AddTest("TestServerGetPlayerProfile", &AutoGenServerTests::TestServerGetPlayerProfile);
    AddTest("TestServerGetPlayerSegments", &AutoGenServerTests::TestServerGetPlayerSegments);
    AddTest("TestServerGetPlayersInSegment", &AutoGenServerTests::TestServerGetPlayersInSegment);
    AddTest("TestServerGetPlayerStatistics", &AutoGenServerTests::TestServerGetPlayerStatistics);
    AddTest("TestServerGetPlayerStatisticVersions", &AutoGenServerTests::TestServerGetPlayerStatisticVersions);
    AddTest("TestServerGetPlayerTags", &AutoGenServerTests::TestServerGetPlayerTags);
    AddTest("TestServerGetPlayFabIDsFromFacebookIDs", &AutoGenServerTests::TestServerGetPlayFabIDsFromFacebookIDs);
    AddTest("TestServerGetPlayFabIDsFromFacebookInstantGamesIds", &AutoGenServerTests::TestServerGetPlayFabIDsFromFacebookInstantGamesIds);
    AddTest("TestServerGetPlayFabIDsFromGenericIDs", &AutoGenServerTests::TestServerGetPlayFabIDsFromGenericIDs);
    AddTest("TestServerGetPlayFabIDsFromNintendoSwitchDeviceIds", &AutoGenServerTests::TestServerGetPlayFabIDsFromNintendoSwitchDeviceIds);
    AddTest("TestServerGetPlayFabIDsFromPSNAccountIDs", &AutoGenServerTests::TestServerGetPlayFabIDsFromPSNAccountIDs);
    AddTest("TestServerGetPlayFabIDsFromSteamIDs", &AutoGenServerTests::TestServerGetPlayFabIDsFromSteamIDs);
    AddTest("TestServerGetPlayFabIDsFromXboxLiveIDs", &AutoGenServerTests::TestServerGetPlayFabIDsFromXboxLiveIDs);
    AddTest("TestServerGetPublisherData", &AutoGenServerTests::TestServerGetPublisherData);
    AddTest("TestServerGetRandomResultTables", &AutoGenServerTests::TestServerGetRandomResultTables);
    AddTest("TestServerGetServerCustomIDsFromPlayFabIDs", &AutoGenServerTests::TestServerGetServerCustomIDsFromPlayFabIDs);
    AddTest("TestServerGetSharedGroupData", &AutoGenServerTests::TestServerGetSharedGroupData);
    AddTest("TestServerGetStoreItems", &AutoGenServerTests::TestServerGetStoreItems);
    AddTest("TestServerGetTime", &AutoGenServerTests::TestServerGetTime);
    AddTest("TestServerGetTitleData", &AutoGenServerTests::TestServerGetTitleData);
    AddTest("TestServerGetTitleInternalData", &AutoGenServerTests::TestServerGetTitleInternalData);
    AddTest("TestServerGetTitleNews", &AutoGenServerTests::TestServerGetTitleNews);
    AddTest("TestServerGetUserAccountInfo", &AutoGenServerTests::TestServerGetUserAccountInfo);
    AddTest("TestServerGetUserBans", &AutoGenServerTests::TestServerGetUserBans);
    AddTest("TestServerGetUserData", &AutoGenServerTests::TestServerGetUserData);
    AddTest("TestServerGetUserInternalData", &AutoGenServerTests::TestServerGetUserInternalData);
    AddTest("TestServerGetUserInventory", &AutoGenServerTests::TestServerGetUserInventory);
    AddTest("TestServerGetUserPublisherData", &AutoGenServerTests::TestServerGetUserPublisherData);
    AddTest("TestServerGetUserPublisherInternalData", &AutoGenServerTests::TestServerGetUserPublisherInternalData);
    AddTest("TestServerGetUserPublisherReadOnlyData", &AutoGenServerTests::TestServerGetUserPublisherReadOnlyData);
    AddTest("TestServerGetUserReadOnlyData", &AutoGenServerTests::TestServerGetUserReadOnlyData);
    AddTest("TestServerGrantCharacterToUser", &AutoGenServerTests::TestServerGrantCharacterToUser);
    AddTest("TestServerGrantItemsToCharacter", &AutoGenServerTests::TestServerGrantItemsToCharacter);
    AddTest("TestServerGrantItemsToUser", &AutoGenServerTests::TestServerGrantItemsToUser);
    AddTest("TestServerGrantItemsToUsers", &AutoGenServerTests::TestServerGrantItemsToUsers);
    AddTest("TestServerLinkPSNAccount", &AutoGenServerTests::TestServerLinkPSNAccount);
    AddTest("TestServerLinkServerCustomId", &AutoGenServerTests::TestServerLinkServerCustomId);
    AddTest("TestServerLinkXboxAccount", &AutoGenServerTests::TestServerLinkXboxAccount);
    AddTest("TestServerModifyItemUses", &AutoGenServerTests::TestServerModifyItemUses);
    AddTest("TestServerMoveItemToCharacterFromCharacter", &AutoGenServerTests::TestServerMoveItemToCharacterFromCharacter);
    AddTest("TestServerMoveItemToCharacterFromUser", &AutoGenServerTests::TestServerMoveItemToCharacterFromUser);
    AddTest("TestServerMoveItemToUserFromCharacter", &AutoGenServerTests::TestServerMoveItemToUserFromCharacter);
    AddTest("TestServerNotifyMatchmakerPlayerLeft", &AutoGenServerTests::TestServerNotifyMatchmakerPlayerLeft);
    AddTest("TestServerRedeemCoupon", &AutoGenServerTests::TestServerRedeemCoupon);
    AddTest("TestServerRedeemMatchmakerTicket", &AutoGenServerTests::TestServerRedeemMatchmakerTicket);
    AddTest("TestServerRefreshGameServerInstanceHeartbeat", &AutoGenServerTests::TestServerRefreshGameServerInstanceHeartbeat);
    AddTest("TestServerRegisterGame", &AutoGenServerTests::TestServerRegisterGame);
    AddTest("TestServerRemoveFriend", &AutoGenServerTests::TestServerRemoveFriend);
    AddTest("TestServerRemoveGenericID", &AutoGenServerTests::TestServerRemoveGenericID);
    AddTest("TestServerRemovePlayerTag", &AutoGenServerTests::TestServerRemovePlayerTag);
    AddTest("TestServerRemoveSharedGroupMembers", &AutoGenServerTests::TestServerRemoveSharedGroupMembers);
    AddTest("TestServerReportPlayer", &AutoGenServerTests::TestServerReportPlayer);
    AddTest("TestServerRevokeAllBansForUser", &AutoGenServerTests::TestServerRevokeAllBansForUser);
    AddTest("TestServerRevokeBans", &AutoGenServerTests::TestServerRevokeBans);
    AddTest("TestServerRevokeInventoryItem", &AutoGenServerTests::TestServerRevokeInventoryItem);
    AddTest("TestServerRevokeInventoryItems", &AutoGenServerTests::TestServerRevokeInventoryItems);
    AddTest("TestServerSavePushNotificationTemplate", &AutoGenServerTests::TestServerSavePushNotificationTemplate);
    AddTest("TestServerSendCustomAccountRecoveryEmail", &AutoGenServerTests::TestServerSendCustomAccountRecoveryEmail);
    AddTest("TestServerSendEmailFromTemplate", &AutoGenServerTests::TestServerSendEmailFromTemplate);
    AddTest("TestServerSendPushNotification", &AutoGenServerTests::TestServerSendPushNotification);
    AddTest("TestServerSendPushNotificationFromTemplate", &AutoGenServerTests::TestServerSendPushNotificationFromTemplate);
    AddTest("TestServerSetFriendTags", &AutoGenServerTests::TestServerSetFriendTags);
    AddTest("TestServerSetGameServerInstanceData", &AutoGenServerTests::TestServerSetGameServerInstanceData);
    AddTest("TestServerSetGameServerInstanceState", &AutoGenServerTests::TestServerSetGameServerInstanceState);
    AddTest("TestServerSetGameServerInstanceTags", &AutoGenServerTests::TestServerSetGameServerInstanceTags);
    AddTest("TestServerSetPlayerSecret", &AutoGenServerTests::TestServerSetPlayerSecret);
    AddTest("TestServerSetPublisherData", &AutoGenServerTests::TestServerSetPublisherData);
    AddTest("TestServerSetTitleData", &AutoGenServerTests::TestServerSetTitleData);
    AddTest("TestServerSetTitleInternalData", &AutoGenServerTests::TestServerSetTitleInternalData);
    AddTest("TestServerSubtractCharacterVirtualCurrency", &AutoGenServerTests::TestServerSubtractCharacterVirtualCurrency);
    AddTest("TestServerSubtractUserVirtualCurrency", &AutoGenServerTests::TestServerSubtractUserVirtualCurrency);
    AddTest("TestServerUnlinkPSNAccount", &AutoGenServerTests::TestServerUnlinkPSNAccount);
    AddTest("TestServerUnlinkServerCustomId", &AutoGenServerTests::TestServerUnlinkServerCustomId);
    AddTest("TestServerUnlinkXboxAccount", &AutoGenServerTests::TestServerUnlinkXboxAccount);
    AddTest("TestServerUnlockContainerInstance", &AutoGenServerTests::TestServerUnlockContainerInstance);
    AddTest("TestServerUnlockContainerItem", &AutoGenServerTests::TestServerUnlockContainerItem);
    AddTest("TestServerUpdateAvatarUrl", &AutoGenServerTests::TestServerUpdateAvatarUrl);
    AddTest("TestServerUpdateBans", &AutoGenServerTests::TestServerUpdateBans);
    AddTest("TestServerUpdateCharacterData", &AutoGenServerTests::TestServerUpdateCharacterData);
    AddTest("TestServerUpdateCharacterInternalData", &AutoGenServerTests::TestServerUpdateCharacterInternalData);
    AddTest("TestServerUpdateCharacterReadOnlyData", &AutoGenServerTests::TestServerUpdateCharacterReadOnlyData);
    AddTest("TestServerUpdateCharacterStatistics", &AutoGenServerTests::TestServerUpdateCharacterStatistics);
    AddTest("TestServerUpdatePlayerStatistics", &AutoGenServerTests::TestServerUpdatePlayerStatistics);
    AddTest("TestServerUpdateSharedGroupData", &AutoGenServerTests::TestServerUpdateSharedGroupData);
    AddTest("TestServerUpdateUserData", &AutoGenServerTests::TestServerUpdateUserData);
    AddTest("TestServerUpdateUserInternalData", &AutoGenServerTests::TestServerUpdateUserInternalData);
    AddTest("TestServerUpdateUserInventoryItemCustomData", &AutoGenServerTests::TestServerUpdateUserInventoryItemCustomData);
    AddTest("TestServerUpdateUserPublisherData", &AutoGenServerTests::TestServerUpdateUserPublisherData);
    AddTest("TestServerUpdateUserPublisherInternalData", &AutoGenServerTests::TestServerUpdateUserPublisherInternalData);
    AddTest("TestServerUpdateUserPublisherReadOnlyData", &AutoGenServerTests::TestServerUpdateUserPublisherReadOnlyData);
    AddTest("TestServerUpdateUserReadOnlyData", &AutoGenServerTests::TestServerUpdateUserReadOnlyData);
    AddTest("TestServerWriteCharacterEvent", &AutoGenServerTests::TestServerWriteCharacterEvent);
    AddTest("TestServerWritePlayerEvent", &AutoGenServerTests::TestServerWritePlayerEvent);
    AddTest("TestServerWriteTitleEvent", &AutoGenServerTests::TestServerWriteTitleEvent);
}

void AutoGenServerTests::ClassSetUp()
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

void AutoGenServerTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenServerTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

void AutoGenServerTests::TestServerAddCharacterVirtualCurrency(TestContext& testContext)
{
    struct AddCharacterVirtualCurrencyResult : public XAsyncResult
    {
        PlayFabServerModifyCharacterVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerAddCharacterVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerAddCharacterVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerModifyCharacterVirtualCurrencyResult( result );
            return ValidatePlayFabServerModifyCharacterVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AddCharacterVirtualCurrencyResult>>(testContext);

    PlayFab::ServerModels::AddCharacterVirtualCurrencyRequest request;
    FillPlayFabServerAddCharacterVirtualCurrencyRequest( &request );
    LogPlayFabServerAddCharacterVirtualCurrencyRequest( &request, "TestServerAddCharacterVirtualCurrency" );
    HRESULT hr = PlayFabServerAddCharacterVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerAddCharacterVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerAddFriend(TestContext& testContext)
{
    struct AddFriendResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AddFriendResult>>(testContext);

    PlayFab::ServerModels::AddFriendRequest request;
    FillPlayFabServerAddFriendRequest( &request );
    LogPlayFabServerAddFriendRequest( &request, "TestServerAddFriend" );
    HRESULT hr = PlayFabServerAddFriendAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerAddFriendAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerAddGenericID(TestContext& testContext)
{
    struct AddGenericIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AddGenericIDResult>>(testContext);

    PlayFab::ServerModels::AddGenericIDRequest request;
    FillPlayFabServerAddGenericIDRequest( &request );
    LogPlayFabServerAddGenericIDRequest( &request, "TestServerAddGenericID" );
    HRESULT hr = PlayFabServerAddGenericIDAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerAddGenericIDAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerAddPlayerTag(TestContext& testContext)
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

    PlayFab::ServerModels::AddPlayerTagRequest request;
    FillPlayFabServerAddPlayerTagRequest( &request );
    LogPlayFabServerAddPlayerTagRequest( &request, "TestServerAddPlayerTag" );
    HRESULT hr = PlayFabServerAddPlayerTagAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerAddPlayerTagAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerAddSharedGroupMembers(TestContext& testContext)
{
    struct AddSharedGroupMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AddSharedGroupMembersResult>>(testContext);

    PlayFab::ServerModels::AddSharedGroupMembersRequest request;
    FillPlayFabServerAddSharedGroupMembersRequest( &request );
    LogPlayFabServerAddSharedGroupMembersRequest( &request, "TestServerAddSharedGroupMembers" );
    HRESULT hr = PlayFabServerAddSharedGroupMembersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerAddSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerAddUserVirtualCurrency(TestContext& testContext)
{
    struct AddUserVirtualCurrencyResult : public XAsyncResult
    {
        PlayFabServerModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerAddUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerAddUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerModifyUserVirtualCurrencyResult( result );
            return ValidatePlayFabServerModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AddUserVirtualCurrencyResult>>(testContext);

    PlayFab::ServerModels::AddUserVirtualCurrencyRequest request;
    FillPlayFabServerAddUserVirtualCurrencyRequest( &request );
    LogPlayFabServerAddUserVirtualCurrencyRequest( &request, "TestServerAddUserVirtualCurrency" );
    HRESULT hr = PlayFabServerAddUserVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerAddUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerAuthenticateSessionTicket(TestContext& testContext)
{
    struct AuthenticateSessionTicketResult : public XAsyncResult
    {
        PlayFabServerAuthenticateSessionTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerAuthenticateSessionTicketGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerAuthenticateSessionTicketResult( result );
            return ValidatePlayFabServerAuthenticateSessionTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AuthenticateSessionTicketResult>>(testContext);

    PlayFab::ServerModels::AuthenticateSessionTicketRequest request;
    FillPlayFabServerAuthenticateSessionTicketRequest( &request );
    LogPlayFabServerAuthenticateSessionTicketRequest( &request, "TestServerAuthenticateSessionTicket" );
    HRESULT hr = PlayFabServerAuthenticateSessionTicketAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerAuthenticateSessionTicketAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerAwardSteamAchievement(TestContext& testContext)
{
    struct AwardSteamAchievementResult : public XAsyncResult
    {
        PlayFabServerAwardSteamAchievementResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerAwardSteamAchievementGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerAwardSteamAchievementResult( result );
            return ValidatePlayFabServerAwardSteamAchievementResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AwardSteamAchievementResult>>(testContext);

    PlayFab::ServerModels::AwardSteamAchievementRequest request;
    FillPlayFabServerAwardSteamAchievementRequest( &request );
    LogPlayFabServerAwardSteamAchievementRequest( &request, "TestServerAwardSteamAchievement" );
    HRESULT hr = PlayFabServerAwardSteamAchievementAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerAwardSteamAchievementAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerBanUsers(TestContext& testContext)
{
    struct BanUsersResult : public XAsyncResult
    {
        PlayFabServerBanUsersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerBanUsersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerBanUsersResult( result );
            return ValidatePlayFabServerBanUsersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<BanUsersResult>>(testContext);

    PlayFab::ServerModels::BanUsersRequest request;
    FillPlayFabServerBanUsersRequest( &request );
    LogPlayFabServerBanUsersRequest( &request, "TestServerBanUsers" );
    HRESULT hr = PlayFabServerBanUsersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerBanUsersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerConsumeItem(TestContext& testContext)
{
    struct ConsumeItemResult : public XAsyncResult
    {
        PlayFabServerConsumeItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerConsumeItemGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerConsumeItemGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerConsumeItemResult( result );
            return ValidatePlayFabServerConsumeItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ConsumeItemResult>>(testContext);

    PlayFab::ServerModels::ConsumeItemRequest request;
    FillPlayFabServerConsumeItemRequest( &request );
    LogPlayFabServerConsumeItemRequest( &request, "TestServerConsumeItem" );
    HRESULT hr = PlayFabServerConsumeItemAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerConsumeItemAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerCreateSharedGroup(TestContext& testContext)
{
    struct CreateSharedGroupResult : public XAsyncResult
    {
        PlayFabServerCreateSharedGroupResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerCreateSharedGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerCreateSharedGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerCreateSharedGroupResult( result );
            return ValidatePlayFabServerCreateSharedGroupResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateSharedGroupResult>>(testContext);

    PlayFab::ServerModels::CreateSharedGroupRequest request;
    FillPlayFabServerCreateSharedGroupRequest( &request );
    LogPlayFabServerCreateSharedGroupRequest( &request, "TestServerCreateSharedGroup" );
    HRESULT hr = PlayFabServerCreateSharedGroupAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerCreateSharedGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerDeleteCharacterFromUser(TestContext& testContext)
{
    struct DeleteCharacterFromUserResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteCharacterFromUserResult>>(testContext);

    PlayFab::ServerModels::DeleteCharacterFromUserRequest request;
    FillPlayFabServerDeleteCharacterFromUserRequest( &request );
    LogPlayFabServerDeleteCharacterFromUserRequest( &request, "TestServerDeleteCharacterFromUser" );
    HRESULT hr = PlayFabServerDeleteCharacterFromUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerDeleteCharacterFromUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerDeletePlayer(TestContext& testContext)
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

    PlayFab::ServerModels::DeletePlayerRequest request;
    FillPlayFabServerDeletePlayerRequest( &request );
    LogPlayFabServerDeletePlayerRequest( &request, "TestServerDeletePlayer" );
    HRESULT hr = PlayFabServerDeletePlayerAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerDeletePlayerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerDeletePushNotificationTemplate(TestContext& testContext)
{
    struct DeletePushNotificationTemplateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeletePushNotificationTemplateResult>>(testContext);

    PlayFab::ServerModels::DeletePushNotificationTemplateRequest request;
    FillPlayFabServerDeletePushNotificationTemplateRequest( &request );
    LogPlayFabServerDeletePushNotificationTemplateRequest( &request, "TestServerDeletePushNotificationTemplate" );
    HRESULT hr = PlayFabServerDeletePushNotificationTemplateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerDeletePushNotificationTemplateAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerDeleteSharedGroup(TestContext& testContext)
{
    struct DeleteSharedGroupResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteSharedGroupResult>>(testContext);

    PlayFab::ServerModels::DeleteSharedGroupRequest request;
    FillPlayFabServerDeleteSharedGroupRequest( &request );
    LogPlayFabServerDeleteSharedGroupRequest( &request, "TestServerDeleteSharedGroup" );
    HRESULT hr = PlayFabServerDeleteSharedGroupAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerDeleteSharedGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerDeregisterGame(TestContext& testContext)
{
    struct DeregisterGameResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeregisterGameResult>>(testContext);

    PlayFab::ServerModels::DeregisterGameRequest request;
    FillPlayFabServerDeregisterGameRequest( &request );
    LogPlayFabServerDeregisterGameRequest( &request, "TestServerDeregisterGame" );
    HRESULT hr = PlayFabServerDeregisterGameAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerDeregisterGameAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerEvaluateRandomResultTable(TestContext& testContext)
{
    struct EvaluateRandomResultTableResult : public XAsyncResult
    {
        PlayFabServerEvaluateRandomResultTableResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerEvaluateRandomResultTableGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerEvaluateRandomResultTableGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerEvaluateRandomResultTableResult( result );
            return ValidatePlayFabServerEvaluateRandomResultTableResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<EvaluateRandomResultTableResult>>(testContext);

    PlayFab::ServerModels::EvaluateRandomResultTableRequest request;
    FillPlayFabServerEvaluateRandomResultTableRequest( &request );
    LogPlayFabServerEvaluateRandomResultTableRequest( &request, "TestServerEvaluateRandomResultTable" );
    HRESULT hr = PlayFabServerEvaluateRandomResultTableAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerEvaluateRandomResultTableAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerExecuteCloudScript(TestContext& testContext)
{
    struct ExecuteCloudScriptResult : public XAsyncResult
    {
        PlayFabServerExecuteCloudScriptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerExecuteCloudScriptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerExecuteCloudScriptResult( result );
            return ValidatePlayFabServerExecuteCloudScriptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ExecuteCloudScriptResult>>(testContext);

    PlayFab::ServerModels::ExecuteCloudScriptServerRequest request;
    FillPlayFabServerExecuteCloudScriptServerRequest( &request );
    LogPlayFabServerExecuteCloudScriptServerRequest( &request, "TestServerExecuteCloudScript" );
    HRESULT hr = PlayFabServerExecuteCloudScriptAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerExecuteCloudScriptAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetAllSegments(TestContext& testContext)
{
    struct GetAllSegmentsResult : public XAsyncResult
    {
        PlayFabServerGetAllSegmentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetAllSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetAllSegmentsResult( result );
            return ValidatePlayFabServerGetAllSegmentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetAllSegmentsResult>>(testContext);

    HRESULT hr = PlayFabServerGetAllSegmentsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetAllSegmentsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetAllUsersCharacters(TestContext& testContext)
{
    struct GetAllUsersCharactersResult : public XAsyncResult
    {
        PlayFabServerListUsersCharactersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetAllUsersCharactersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerListUsersCharactersResult( result );
            return ValidatePlayFabServerListUsersCharactersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetAllUsersCharactersResult>>(testContext);

    PlayFab::ServerModels::ListUsersCharactersRequest request;
    FillPlayFabServerListUsersCharactersRequest( &request );
    LogPlayFabServerListUsersCharactersRequest( &request, "TestServerGetAllUsersCharacters" );
    HRESULT hr = PlayFabServerGetAllUsersCharactersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetAllUsersCharactersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetCatalogItems(TestContext& testContext)
{
    struct GetCatalogItemsResult : public XAsyncResult
    {
        PlayFabServerGetCatalogItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetCatalogItemsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetCatalogItemsResult( result );
            return ValidatePlayFabServerGetCatalogItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCatalogItemsResult>>(testContext);

    PlayFab::ServerModels::GetCatalogItemsRequest request;
    FillPlayFabServerGetCatalogItemsRequest( &request );
    LogPlayFabServerGetCatalogItemsRequest( &request, "TestServerGetCatalogItems" );
    HRESULT hr = PlayFabServerGetCatalogItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetCharacterData(TestContext& testContext)
{
    struct GetCharacterDataResult : public XAsyncResult
    {
        PlayFabServerGetCharacterDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetCharacterDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetCharacterDataResult( result );
            return ValidatePlayFabServerGetCharacterDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterDataResult>>(testContext);

    PlayFab::ServerModels::GetCharacterDataRequest request;
    FillPlayFabServerGetCharacterDataRequest( &request );
    LogPlayFabServerGetCharacterDataRequest( &request, "TestServerGetCharacterData" );
    HRESULT hr = PlayFabServerGetCharacterDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetCharacterDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetCharacterInternalData(TestContext& testContext)
{
    struct GetCharacterInternalDataResult : public XAsyncResult
    {
        PlayFabServerGetCharacterDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetCharacterInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetCharacterDataResult( result );
            return ValidatePlayFabServerGetCharacterDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterInternalDataResult>>(testContext);

    PlayFab::ServerModels::GetCharacterDataRequest request;
    FillPlayFabServerGetCharacterDataRequest( &request );
    LogPlayFabServerGetCharacterDataRequest( &request, "TestServerGetCharacterInternalData" );
    HRESULT hr = PlayFabServerGetCharacterInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetCharacterInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetCharacterInventory(TestContext& testContext)
{
    struct GetCharacterInventoryResult : public XAsyncResult
    {
        PlayFabServerGetCharacterInventoryResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetCharacterInventoryGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetCharacterInventoryResult( result );
            return ValidatePlayFabServerGetCharacterInventoryResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterInventoryResult>>(testContext);

    PlayFab::ServerModels::GetCharacterInventoryRequest request;
    FillPlayFabServerGetCharacterInventoryRequest( &request );
    LogPlayFabServerGetCharacterInventoryRequest( &request, "TestServerGetCharacterInventory" );
    HRESULT hr = PlayFabServerGetCharacterInventoryAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetCharacterInventoryAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetCharacterLeaderboard(TestContext& testContext)
{
    struct GetCharacterLeaderboardResult : public XAsyncResult
    {
        PlayFabServerGetCharacterLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetCharacterLeaderboardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetCharacterLeaderboardResult( result );
            return ValidatePlayFabServerGetCharacterLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterLeaderboardResult>>(testContext);

    PlayFab::ServerModels::GetCharacterLeaderboardRequest request;
    FillPlayFabServerGetCharacterLeaderboardRequest( &request );
    LogPlayFabServerGetCharacterLeaderboardRequest( &request, "TestServerGetCharacterLeaderboard" );
    HRESULT hr = PlayFabServerGetCharacterLeaderboardAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetCharacterLeaderboardAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetCharacterReadOnlyData(TestContext& testContext)
{
    struct GetCharacterReadOnlyDataResult : public XAsyncResult
    {
        PlayFabServerGetCharacterDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetCharacterReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetCharacterDataResult( result );
            return ValidatePlayFabServerGetCharacterDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterReadOnlyDataResult>>(testContext);

    PlayFab::ServerModels::GetCharacterDataRequest request;
    FillPlayFabServerGetCharacterDataRequest( &request );
    LogPlayFabServerGetCharacterDataRequest( &request, "TestServerGetCharacterReadOnlyData" );
    HRESULT hr = PlayFabServerGetCharacterReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetCharacterReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetCharacterStatistics(TestContext& testContext)
{
    struct GetCharacterStatisticsResult : public XAsyncResult
    {
        PlayFabServerGetCharacterStatisticsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetCharacterStatisticsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetCharacterStatisticsResult( result );
            return ValidatePlayFabServerGetCharacterStatisticsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterStatisticsResult>>(testContext);

    PlayFab::ServerModels::GetCharacterStatisticsRequest request;
    FillPlayFabServerGetCharacterStatisticsRequest( &request );
    LogPlayFabServerGetCharacterStatisticsRequest( &request, "TestServerGetCharacterStatistics" );
    HRESULT hr = PlayFabServerGetCharacterStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetCharacterStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetContentDownloadUrl(TestContext& testContext)
{
    struct GetContentDownloadUrlResult : public XAsyncResult
    {
        PlayFabServerGetContentDownloadUrlResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerGetContentDownloadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerGetContentDownloadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetContentDownloadUrlResult( result );
            return ValidatePlayFabServerGetContentDownloadUrlResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetContentDownloadUrlResult>>(testContext);

    PlayFab::ServerModels::GetContentDownloadUrlRequest request;
    FillPlayFabServerGetContentDownloadUrlRequest( &request );
    LogPlayFabServerGetContentDownloadUrlRequest( &request, "TestServerGetContentDownloadUrl" );
    HRESULT hr = PlayFabServerGetContentDownloadUrlAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetContentDownloadUrlAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetFriendLeaderboard(TestContext& testContext)
{
    struct GetFriendLeaderboardResult : public XAsyncResult
    {
        PlayFabServerGetLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetFriendLeaderboardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetLeaderboardResult( result );
            return ValidatePlayFabServerGetLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetFriendLeaderboardResult>>(testContext);

    PlayFab::ServerModels::GetFriendLeaderboardRequest request;
    FillPlayFabServerGetFriendLeaderboardRequest( &request );
    LogPlayFabServerGetFriendLeaderboardRequest( &request, "TestServerGetFriendLeaderboard" );
    HRESULT hr = PlayFabServerGetFriendLeaderboardAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetFriendLeaderboardAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetFriendsList(TestContext& testContext)
{
    struct GetFriendsListResult : public XAsyncResult
    {
        PlayFabServerGetFriendsListResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetFriendsListGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetFriendsListResult( result );
            return ValidatePlayFabServerGetFriendsListResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetFriendsListResult>>(testContext);

    PlayFab::ServerModels::GetFriendsListRequest request;
    FillPlayFabServerGetFriendsListRequest( &request );
    LogPlayFabServerGetFriendsListRequest( &request, "TestServerGetFriendsList" );
    HRESULT hr = PlayFabServerGetFriendsListAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetFriendsListAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetLeaderboard(TestContext& testContext)
{
    struct GetLeaderboardResult : public XAsyncResult
    {
        PlayFabServerGetLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetLeaderboardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetLeaderboardResult( result );
            return ValidatePlayFabServerGetLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLeaderboardResult>>(testContext);

    PlayFab::ServerModels::GetLeaderboardRequest request;
    FillPlayFabServerGetLeaderboardRequest( &request );
    LogPlayFabServerGetLeaderboardRequest( &request, "TestServerGetLeaderboard" );
    HRESULT hr = PlayFabServerGetLeaderboardAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetLeaderboardAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetLeaderboardAroundCharacter(TestContext& testContext)
{
    struct GetLeaderboardAroundCharacterResult : public XAsyncResult
    {
        PlayFabServerGetLeaderboardAroundCharacterResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetLeaderboardAroundCharacterGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetLeaderboardAroundCharacterResult( result );
            return ValidatePlayFabServerGetLeaderboardAroundCharacterResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLeaderboardAroundCharacterResult>>(testContext);

    PlayFab::ServerModels::GetLeaderboardAroundCharacterRequest request;
    FillPlayFabServerGetLeaderboardAroundCharacterRequest( &request );
    LogPlayFabServerGetLeaderboardAroundCharacterRequest( &request, "TestServerGetLeaderboardAroundCharacter" );
    HRESULT hr = PlayFabServerGetLeaderboardAroundCharacterAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetLeaderboardAroundCharacterAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetLeaderboardAroundUser(TestContext& testContext)
{
    struct GetLeaderboardAroundUserResult : public XAsyncResult
    {
        PlayFabServerGetLeaderboardAroundUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetLeaderboardAroundUserGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetLeaderboardAroundUserResult( result );
            return ValidatePlayFabServerGetLeaderboardAroundUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLeaderboardAroundUserResult>>(testContext);

    PlayFab::ServerModels::GetLeaderboardAroundUserRequest request;
    FillPlayFabServerGetLeaderboardAroundUserRequest( &request );
    LogPlayFabServerGetLeaderboardAroundUserRequest( &request, "TestServerGetLeaderboardAroundUser" );
    HRESULT hr = PlayFabServerGetLeaderboardAroundUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetLeaderboardAroundUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetLeaderboardForUserCharacters(TestContext& testContext)
{
    struct GetLeaderboardForUserCharactersResult : public XAsyncResult
    {
        PlayFabServerGetLeaderboardForUsersCharactersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetLeaderboardForUserCharactersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetLeaderboardForUsersCharactersResult( result );
            return ValidatePlayFabServerGetLeaderboardForUsersCharactersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLeaderboardForUserCharactersResult>>(testContext);

    PlayFab::ServerModels::GetLeaderboardForUsersCharactersRequest request;
    FillPlayFabServerGetLeaderboardForUsersCharactersRequest( &request );
    LogPlayFabServerGetLeaderboardForUsersCharactersRequest( &request, "TestServerGetLeaderboardForUserCharacters" );
    HRESULT hr = PlayFabServerGetLeaderboardForUserCharactersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetLeaderboardForUserCharactersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayerCombinedInfo(TestContext& testContext)
{
    struct GetPlayerCombinedInfoResult : public XAsyncResult
    {
        PlayFabServerGetPlayerCombinedInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayerCombinedInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayerCombinedInfoResult( result );
            return ValidatePlayFabServerGetPlayerCombinedInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerCombinedInfoResult>>(testContext);

    PlayFab::ServerModels::GetPlayerCombinedInfoRequest request;
    FillPlayFabServerGetPlayerCombinedInfoRequest( &request );
    LogPlayFabServerGetPlayerCombinedInfoRequest( &request, "TestServerGetPlayerCombinedInfo" );
    HRESULT hr = PlayFabServerGetPlayerCombinedInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayerCombinedInfoAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayerProfile(TestContext& testContext)
{
    struct GetPlayerProfileResult : public XAsyncResult
    {
        PlayFabServerGetPlayerProfileResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayerProfileGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayerProfileResult( result );
            return ValidatePlayFabServerGetPlayerProfileResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerProfileResult>>(testContext);

    PlayFab::ServerModels::GetPlayerProfileRequest request;
    FillPlayFabServerGetPlayerProfileRequest( &request );
    LogPlayFabServerGetPlayerProfileRequest( &request, "TestServerGetPlayerProfile" );
    HRESULT hr = PlayFabServerGetPlayerProfileAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayerProfileAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayerSegments(TestContext& testContext)
{
    struct GetPlayerSegmentsResult : public XAsyncResult
    {
        PlayFabServerGetPlayerSegmentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayerSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayerSegmentsResult( result );
            return ValidatePlayFabServerGetPlayerSegmentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerSegmentsResult>>(testContext);

    PlayFab::ServerModels::GetPlayersSegmentsRequest request;
    FillPlayFabServerGetPlayersSegmentsRequest( &request );
    LogPlayFabServerGetPlayersSegmentsRequest( &request, "TestServerGetPlayerSegments" );
    HRESULT hr = PlayFabServerGetPlayerSegmentsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayerSegmentsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayersInSegment(TestContext& testContext)
{
    struct GetPlayersInSegmentResult : public XAsyncResult
    {
        PlayFabServerGetPlayersInSegmentResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayersInSegmentGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayersInSegmentResult( result );
            return ValidatePlayFabServerGetPlayersInSegmentResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayersInSegmentResult>>(testContext);

    PlayFab::ServerModels::GetPlayersInSegmentRequest request;
    FillPlayFabServerGetPlayersInSegmentRequest( &request );
    LogPlayFabServerGetPlayersInSegmentRequest( &request, "TestServerGetPlayersInSegment" );
    HRESULT hr = PlayFabServerGetPlayersInSegmentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayersInSegmentAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayerStatistics(TestContext& testContext)
{
    struct GetPlayerStatisticsResult : public XAsyncResult
    {
        PlayFabServerGetPlayerStatisticsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayerStatisticsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayerStatisticsResult( result );
            return ValidatePlayFabServerGetPlayerStatisticsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerStatisticsResult>>(testContext);

    PlayFab::ServerModels::GetPlayerStatisticsRequest request;
    FillPlayFabServerGetPlayerStatisticsRequest( &request );
    LogPlayFabServerGetPlayerStatisticsRequest( &request, "TestServerGetPlayerStatistics" );
    HRESULT hr = PlayFabServerGetPlayerStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayerStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayerStatisticVersions(TestContext& testContext)
{
    struct GetPlayerStatisticVersionsResult : public XAsyncResult
    {
        PlayFabServerGetPlayerStatisticVersionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayerStatisticVersionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayerStatisticVersionsResult( result );
            return ValidatePlayFabServerGetPlayerStatisticVersionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerStatisticVersionsResult>>(testContext);

    PlayFab::ServerModels::GetPlayerStatisticVersionsRequest request;
    FillPlayFabServerGetPlayerStatisticVersionsRequest( &request );
    LogPlayFabServerGetPlayerStatisticVersionsRequest( &request, "TestServerGetPlayerStatisticVersions" );
    HRESULT hr = PlayFabServerGetPlayerStatisticVersionsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayerStatisticVersionsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayerTags(TestContext& testContext)
{
    struct GetPlayerTagsResult : public XAsyncResult
    {
        PlayFabServerGetPlayerTagsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayerTagsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayerTagsResult( result );
            return ValidatePlayFabServerGetPlayerTagsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerTagsResult>>(testContext);

    PlayFab::ServerModels::GetPlayerTagsRequest request;
    FillPlayFabServerGetPlayerTagsRequest( &request );
    LogPlayFabServerGetPlayerTagsRequest( &request, "TestServerGetPlayerTags" );
    HRESULT hr = PlayFabServerGetPlayerTagsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayerTagsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayFabIDsFromFacebookIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromFacebookIDsResult : public XAsyncResult
    {
        PlayFabServerGetPlayFabIDsFromFacebookIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayFabIDsFromFacebookIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayFabIDsFromFacebookIDsResult( result );
            return ValidatePlayFabServerGetPlayFabIDsFromFacebookIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromFacebookIDsResult>>(testContext);

    PlayFab::ServerModels::GetPlayFabIDsFromFacebookIDsRequest request;
    FillPlayFabServerGetPlayFabIDsFromFacebookIDsRequest( &request );
    LogPlayFabServerGetPlayFabIDsFromFacebookIDsRequest( &request, "TestServerGetPlayFabIDsFromFacebookIDs" );
    HRESULT hr = PlayFabServerGetPlayFabIDsFromFacebookIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayFabIDsFromFacebookIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayFabIDsFromFacebookInstantGamesIds(TestContext& testContext)
{
    struct GetPlayFabIDsFromFacebookInstantGamesIdsResult : public XAsyncResult
    {
        PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult( result );
            return ValidatePlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromFacebookInstantGamesIdsResult>>(testContext);

    PlayFab::ServerModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest request;
    FillPlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest( &request );
    LogPlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest( &request, "TestServerGetPlayFabIDsFromFacebookInstantGamesIds" );
    HRESULT hr = PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayFabIDsFromGenericIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromGenericIDsResult : public XAsyncResult
    {
        PlayFabServerGetPlayFabIDsFromGenericIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayFabIDsFromGenericIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayFabIDsFromGenericIDsResult( result );
            return ValidatePlayFabServerGetPlayFabIDsFromGenericIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromGenericIDsResult>>(testContext);

    PlayFab::ServerModels::GetPlayFabIDsFromGenericIDsRequest request;
    FillPlayFabServerGetPlayFabIDsFromGenericIDsRequest( &request );
    LogPlayFabServerGetPlayFabIDsFromGenericIDsRequest( &request, "TestServerGetPlayFabIDsFromGenericIDs" );
    HRESULT hr = PlayFabServerGetPlayFabIDsFromGenericIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayFabIDsFromGenericIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayFabIDsFromNintendoSwitchDeviceIds(TestContext& testContext)
{
    struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public XAsyncResult
    {
        PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( result );
            return ValidatePlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>>(testContext);

    PlayFab::ServerModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest request;
    FillPlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( &request );
    LogPlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( &request, "TestServerGetPlayFabIDsFromNintendoSwitchDeviceIds" );
    HRESULT hr = PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayFabIDsFromPSNAccountIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromPSNAccountIDsResult : public XAsyncResult
    {
        PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayFabIDsFromPSNAccountIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayFabIDsFromPSNAccountIDsResult( result );
            return ValidatePlayFabServerGetPlayFabIDsFromPSNAccountIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromPSNAccountIDsResult>>(testContext);

    PlayFab::ServerModels::GetPlayFabIDsFromPSNAccountIDsRequest request;
    FillPlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest( &request );
    LogPlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest( &request, "TestServerGetPlayFabIDsFromPSNAccountIDs" );
    HRESULT hr = PlayFabServerGetPlayFabIDsFromPSNAccountIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayFabIDsFromPSNAccountIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayFabIDsFromSteamIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromSteamIDsResult : public XAsyncResult
    {
        PlayFabServerGetPlayFabIDsFromSteamIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayFabIDsFromSteamIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayFabIDsFromSteamIDsResult( result );
            return ValidatePlayFabServerGetPlayFabIDsFromSteamIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromSteamIDsResult>>(testContext);

    PlayFab::ServerModels::GetPlayFabIDsFromSteamIDsRequest request;
    FillPlayFabServerGetPlayFabIDsFromSteamIDsRequest( &request );
    LogPlayFabServerGetPlayFabIDsFromSteamIDsRequest( &request, "TestServerGetPlayFabIDsFromSteamIDs" );
    HRESULT hr = PlayFabServerGetPlayFabIDsFromSteamIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayFabIDsFromSteamIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPlayFabIDsFromXboxLiveIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromXboxLiveIDsResult : public XAsyncResult
    {
        PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPlayFabIDsFromXboxLiveIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPlayFabIDsFromXboxLiveIDsResult( result );
            return ValidatePlayFabServerGetPlayFabIDsFromXboxLiveIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromXboxLiveIDsResult>>(testContext);

    PlayFab::ServerModels::GetPlayFabIDsFromXboxLiveIDsRequest request;
    FillPlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest( &request );
    LogPlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest( &request, "TestServerGetPlayFabIDsFromXboxLiveIDs" );
    HRESULT hr = PlayFabServerGetPlayFabIDsFromXboxLiveIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPlayFabIDsFromXboxLiveIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetPublisherData(TestContext& testContext)
{
    struct GetPublisherDataResult : public XAsyncResult
    {
        PlayFabServerGetPublisherDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetPublisherDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetPublisherDataResult( result );
            return ValidatePlayFabServerGetPublisherDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPublisherDataResult>>(testContext);

    PlayFab::ServerModels::GetPublisherDataRequest request;
    FillPlayFabServerGetPublisherDataRequest( &request );
    LogPlayFabServerGetPublisherDataRequest( &request, "TestServerGetPublisherData" );
    HRESULT hr = PlayFabServerGetPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetRandomResultTables(TestContext& testContext)
{
    struct GetRandomResultTablesResult : public XAsyncResult
    {
        PlayFabServerGetRandomResultTablesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetRandomResultTablesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetRandomResultTablesResult( result );
            return ValidatePlayFabServerGetRandomResultTablesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetRandomResultTablesResult>>(testContext);

    PlayFab::ServerModels::GetRandomResultTablesRequest request;
    FillPlayFabServerGetRandomResultTablesRequest( &request );
    LogPlayFabServerGetRandomResultTablesRequest( &request, "TestServerGetRandomResultTables" );
    HRESULT hr = PlayFabServerGetRandomResultTablesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetRandomResultTablesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetServerCustomIDsFromPlayFabIDs(TestContext& testContext)
{
    struct GetServerCustomIDsFromPlayFabIDsResult : public XAsyncResult
    {
        PlayFabServerGetServerCustomIDsFromPlayFabIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetServerCustomIDsFromPlayFabIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetServerCustomIDsFromPlayFabIDsResult( result );
            return ValidatePlayFabServerGetServerCustomIDsFromPlayFabIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetServerCustomIDsFromPlayFabIDsResult>>(testContext);

    PlayFab::ServerModels::GetServerCustomIDsFromPlayFabIDsRequest request;
    FillPlayFabServerGetServerCustomIDsFromPlayFabIDsRequest( &request );
    LogPlayFabServerGetServerCustomIDsFromPlayFabIDsRequest( &request, "TestServerGetServerCustomIDsFromPlayFabIDs" );
    HRESULT hr = PlayFabServerGetServerCustomIDsFromPlayFabIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetServerCustomIDsFromPlayFabIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetSharedGroupData(TestContext& testContext)
{
    struct GetSharedGroupDataResult : public XAsyncResult
    {
        PlayFabServerGetSharedGroupDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetSharedGroupDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetSharedGroupDataResult( result );
            return ValidatePlayFabServerGetSharedGroupDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetSharedGroupDataResult>>(testContext);

    PlayFab::ServerModels::GetSharedGroupDataRequest request;
    FillPlayFabServerGetSharedGroupDataRequest( &request );
    LogPlayFabServerGetSharedGroupDataRequest( &request, "TestServerGetSharedGroupData" );
    HRESULT hr = PlayFabServerGetSharedGroupDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetStoreItems(TestContext& testContext)
{
    struct GetStoreItemsResult : public XAsyncResult
    {
        PlayFabServerGetStoreItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetStoreItemsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetStoreItemsResult( result );
            return ValidatePlayFabServerGetStoreItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetStoreItemsResult>>(testContext);

    PlayFab::ServerModels::GetStoreItemsServerRequest request;
    FillPlayFabServerGetStoreItemsServerRequest( &request );
    LogPlayFabServerGetStoreItemsServerRequest( &request, "TestServerGetStoreItems" );
    HRESULT hr = PlayFabServerGetStoreItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetStoreItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetTime(TestContext& testContext)
{
    struct GetTimeResult : public XAsyncResult
    {
        PlayFabServerGetTimeResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetTimeGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetTimeResult( &result );
            return ValidatePlayFabServerGetTimeResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTimeResult>>(testContext);

    HRESULT hr = PlayFabServerGetTimeAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetTimeAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetTitleData(TestContext& testContext)
{
    struct GetTitleDataResult : public XAsyncResult
    {
        PlayFabServerGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetTitleDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetTitleDataResult( result );
            return ValidatePlayFabServerGetTitleDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleDataResult>>(testContext);

    PlayFab::ServerModels::GetTitleDataRequest request;
    FillPlayFabServerGetTitleDataRequest( &request );
    LogPlayFabServerGetTitleDataRequest( &request, "TestServerGetTitleData" );
    HRESULT hr = PlayFabServerGetTitleDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetTitleDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetTitleInternalData(TestContext& testContext)
{
    struct GetTitleInternalDataResult : public XAsyncResult
    {
        PlayFabServerGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetTitleInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetTitleDataResult( result );
            return ValidatePlayFabServerGetTitleDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleInternalDataResult>>(testContext);

    PlayFab::ServerModels::GetTitleDataRequest request;
    FillPlayFabServerGetTitleDataRequest( &request );
    LogPlayFabServerGetTitleDataRequest( &request, "TestServerGetTitleInternalData" );
    HRESULT hr = PlayFabServerGetTitleInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetTitleInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetTitleNews(TestContext& testContext)
{
    struct GetTitleNewsResult : public XAsyncResult
    {
        PlayFabServerGetTitleNewsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetTitleNewsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetTitleNewsResult( result );
            return ValidatePlayFabServerGetTitleNewsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleNewsResult>>(testContext);

    PlayFab::ServerModels::GetTitleNewsRequest request;
    FillPlayFabServerGetTitleNewsRequest( &request );
    LogPlayFabServerGetTitleNewsRequest( &request, "TestServerGetTitleNews" );
    HRESULT hr = PlayFabServerGetTitleNewsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetTitleNewsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetUserAccountInfo(TestContext& testContext)
{
    struct GetUserAccountInfoResult : public XAsyncResult
    {
        PlayFabServerGetUserAccountInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetUserAccountInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetUserAccountInfoResult( result );
            return ValidatePlayFabServerGetUserAccountInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserAccountInfoResult>>(testContext);

    PlayFab::ServerModels::GetUserAccountInfoRequest request;
    FillPlayFabServerGetUserAccountInfoRequest( &request );
    LogPlayFabServerGetUserAccountInfoRequest( &request, "TestServerGetUserAccountInfo" );
    HRESULT hr = PlayFabServerGetUserAccountInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetUserAccountInfoAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetUserBans(TestContext& testContext)
{
    struct GetUserBansResult : public XAsyncResult
    {
        PlayFabServerGetUserBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetUserBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetUserBansResult( result );
            return ValidatePlayFabServerGetUserBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserBansResult>>(testContext);

    PlayFab::ServerModels::GetUserBansRequest request;
    FillPlayFabServerGetUserBansRequest( &request );
    LogPlayFabServerGetUserBansRequest( &request, "TestServerGetUserBans" );
    HRESULT hr = PlayFabServerGetUserBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetUserBansAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetUserData(TestContext& testContext)
{
    struct GetUserDataResult : public XAsyncResult
    {
        PlayFabServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetUserDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetUserDataResult( result );
            return ValidatePlayFabServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserDataResult>>(testContext);

    PlayFab::ServerModels::GetUserDataRequest request;
    FillPlayFabServerGetUserDataRequest( &request );
    LogPlayFabServerGetUserDataRequest( &request, "TestServerGetUserData" );
    HRESULT hr = PlayFabServerGetUserDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetUserDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetUserInternalData(TestContext& testContext)
{
    struct GetUserInternalDataResult : public XAsyncResult
    {
        PlayFabServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetUserInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetUserDataResult( result );
            return ValidatePlayFabServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserInternalDataResult>>(testContext);

    PlayFab::ServerModels::GetUserDataRequest request;
    FillPlayFabServerGetUserDataRequest( &request );
    LogPlayFabServerGetUserDataRequest( &request, "TestServerGetUserInternalData" );
    HRESULT hr = PlayFabServerGetUserInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetUserInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetUserInventory(TestContext& testContext)
{
    struct GetUserInventoryResult : public XAsyncResult
    {
        PlayFabServerGetUserInventoryResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetUserInventoryGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetUserInventoryResult( result );
            return ValidatePlayFabServerGetUserInventoryResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserInventoryResult>>(testContext);

    PlayFab::ServerModels::GetUserInventoryRequest request;
    FillPlayFabServerGetUserInventoryRequest( &request );
    LogPlayFabServerGetUserInventoryRequest( &request, "TestServerGetUserInventory" );
    HRESULT hr = PlayFabServerGetUserInventoryAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetUserInventoryAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetUserPublisherData(TestContext& testContext)
{
    struct GetUserPublisherDataResult : public XAsyncResult
    {
        PlayFabServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetUserPublisherDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetUserDataResult( result );
            return ValidatePlayFabServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserPublisherDataResult>>(testContext);

    PlayFab::ServerModels::GetUserDataRequest request;
    FillPlayFabServerGetUserDataRequest( &request );
    LogPlayFabServerGetUserDataRequest( &request, "TestServerGetUserPublisherData" );
    HRESULT hr = PlayFabServerGetUserPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetUserPublisherInternalData(TestContext& testContext)
{
    struct GetUserPublisherInternalDataResult : public XAsyncResult
    {
        PlayFabServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetUserPublisherInternalDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetUserDataResult( result );
            return ValidatePlayFabServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserPublisherInternalDataResult>>(testContext);

    PlayFab::ServerModels::GetUserDataRequest request;
    FillPlayFabServerGetUserDataRequest( &request );
    LogPlayFabServerGetUserDataRequest( &request, "TestServerGetUserPublisherInternalData" );
    HRESULT hr = PlayFabServerGetUserPublisherInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetUserPublisherInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetUserPublisherReadOnlyData(TestContext& testContext)
{
    struct GetUserPublisherReadOnlyDataResult : public XAsyncResult
    {
        PlayFabServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetUserPublisherReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetUserDataResult( result );
            return ValidatePlayFabServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserPublisherReadOnlyDataResult>>(testContext);

    PlayFab::ServerModels::GetUserDataRequest request;
    FillPlayFabServerGetUserDataRequest( &request );
    LogPlayFabServerGetUserDataRequest( &request, "TestServerGetUserPublisherReadOnlyData" );
    HRESULT hr = PlayFabServerGetUserPublisherReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetUserPublisherReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGetUserReadOnlyData(TestContext& testContext)
{
    struct GetUserReadOnlyDataResult : public XAsyncResult
    {
        PlayFabServerGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGetUserReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGetUserDataResult( result );
            return ValidatePlayFabServerGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserReadOnlyDataResult>>(testContext);

    PlayFab::ServerModels::GetUserDataRequest request;
    FillPlayFabServerGetUserDataRequest( &request );
    LogPlayFabServerGetUserDataRequest( &request, "TestServerGetUserReadOnlyData" );
    HRESULT hr = PlayFabServerGetUserReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGetUserReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGrantCharacterToUser(TestContext& testContext)
{
    struct GrantCharacterToUserResult : public XAsyncResult
    {
        PlayFabServerGrantCharacterToUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerGrantCharacterToUserGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerGrantCharacterToUserGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGrantCharacterToUserResult( result );
            return ValidatePlayFabServerGrantCharacterToUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GrantCharacterToUserResult>>(testContext);

    PlayFab::ServerModels::GrantCharacterToUserRequest request;
    FillPlayFabServerGrantCharacterToUserRequest( &request );
    LogPlayFabServerGrantCharacterToUserRequest( &request, "TestServerGrantCharacterToUser" );
    HRESULT hr = PlayFabServerGrantCharacterToUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGrantCharacterToUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGrantItemsToCharacter(TestContext& testContext)
{
    struct GrantItemsToCharacterResult : public XAsyncResult
    {
        PlayFabServerGrantItemsToCharacterResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGrantItemsToCharacterGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGrantItemsToCharacterResult( result );
            return ValidatePlayFabServerGrantItemsToCharacterResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GrantItemsToCharacterResult>>(testContext);

    PlayFab::ServerModels::GrantItemsToCharacterRequest request;
    FillPlayFabServerGrantItemsToCharacterRequest( &request );
    LogPlayFabServerGrantItemsToCharacterRequest( &request, "TestServerGrantItemsToCharacter" );
    HRESULT hr = PlayFabServerGrantItemsToCharacterAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGrantItemsToCharacterAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGrantItemsToUser(TestContext& testContext)
{
    struct GrantItemsToUserResult : public XAsyncResult
    {
        PlayFabServerGrantItemsToUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGrantItemsToUserGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGrantItemsToUserResult( result );
            return ValidatePlayFabServerGrantItemsToUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GrantItemsToUserResult>>(testContext);

    PlayFab::ServerModels::GrantItemsToUserRequest request;
    FillPlayFabServerGrantItemsToUserRequest( &request );
    LogPlayFabServerGrantItemsToUserRequest( &request, "TestServerGrantItemsToUser" );
    HRESULT hr = PlayFabServerGrantItemsToUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGrantItemsToUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerGrantItemsToUsers(TestContext& testContext)
{
    struct GrantItemsToUsersResult : public XAsyncResult
    {
        PlayFabServerGrantItemsToUsersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerGrantItemsToUsersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerGrantItemsToUsersResult( result );
            return ValidatePlayFabServerGrantItemsToUsersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GrantItemsToUsersResult>>(testContext);

    PlayFab::ServerModels::GrantItemsToUsersRequest request;
    FillPlayFabServerGrantItemsToUsersRequest( &request );
    LogPlayFabServerGrantItemsToUsersRequest( &request, "TestServerGrantItemsToUsers" );
    HRESULT hr = PlayFabServerGrantItemsToUsersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerGrantItemsToUsersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerLinkPSNAccount(TestContext& testContext)
{
    struct LinkPSNAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkPSNAccountResult>>(testContext);

    PlayFab::ServerModels::LinkPSNAccountRequest request;
    FillPlayFabServerLinkPSNAccountRequest( &request );
    LogPlayFabServerLinkPSNAccountRequest( &request, "TestServerLinkPSNAccount" );
    HRESULT hr = PlayFabServerLinkPSNAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerLinkPSNAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerLinkServerCustomId(TestContext& testContext)
{
    struct LinkServerCustomIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkServerCustomIdResult>>(testContext);

    PlayFab::ServerModels::LinkServerCustomIdRequest request;
    FillPlayFabServerLinkServerCustomIdRequest( &request );
    LogPlayFabServerLinkServerCustomIdRequest( &request, "TestServerLinkServerCustomId" );
    HRESULT hr = PlayFabServerLinkServerCustomIdAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerLinkServerCustomIdAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerLinkXboxAccount(TestContext& testContext)
{
    struct LinkXboxAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkXboxAccountResult>>(testContext);

    PlayFab::ServerModels::LinkXboxAccountRequest request;
    FillPlayFabServerLinkXboxAccountRequest( &request );
    LogPlayFabServerLinkXboxAccountRequest( &request, "TestServerLinkXboxAccount" );
    HRESULT hr = PlayFabServerLinkXboxAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerLinkXboxAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerModifyItemUses(TestContext& testContext)
{
    struct ModifyItemUsesResult : public XAsyncResult
    {
        PlayFabServerModifyItemUsesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerModifyItemUsesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerModifyItemUsesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerModifyItemUsesResult( result );
            return ValidatePlayFabServerModifyItemUsesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ModifyItemUsesResult>>(testContext);

    PlayFab::ServerModels::ModifyItemUsesRequest request;
    FillPlayFabServerModifyItemUsesRequest( &request );
    LogPlayFabServerModifyItemUsesRequest( &request, "TestServerModifyItemUses" );
    HRESULT hr = PlayFabServerModifyItemUsesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerModifyItemUsesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerMoveItemToCharacterFromCharacter(TestContext& testContext)
{
    struct MoveItemToCharacterFromCharacterResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<MoveItemToCharacterFromCharacterResult>>(testContext);

    PlayFab::ServerModels::MoveItemToCharacterFromCharacterRequest request;
    FillPlayFabServerMoveItemToCharacterFromCharacterRequest( &request );
    LogPlayFabServerMoveItemToCharacterFromCharacterRequest( &request, "TestServerMoveItemToCharacterFromCharacter" );
    HRESULT hr = PlayFabServerMoveItemToCharacterFromCharacterAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerMoveItemToCharacterFromCharacterAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerMoveItemToCharacterFromUser(TestContext& testContext)
{
    struct MoveItemToCharacterFromUserResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<MoveItemToCharacterFromUserResult>>(testContext);

    PlayFab::ServerModels::MoveItemToCharacterFromUserRequest request;
    FillPlayFabServerMoveItemToCharacterFromUserRequest( &request );
    LogPlayFabServerMoveItemToCharacterFromUserRequest( &request, "TestServerMoveItemToCharacterFromUser" );
    HRESULT hr = PlayFabServerMoveItemToCharacterFromUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerMoveItemToCharacterFromUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerMoveItemToUserFromCharacter(TestContext& testContext)
{
    struct MoveItemToUserFromCharacterResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<MoveItemToUserFromCharacterResult>>(testContext);

    PlayFab::ServerModels::MoveItemToUserFromCharacterRequest request;
    FillPlayFabServerMoveItemToUserFromCharacterRequest( &request );
    LogPlayFabServerMoveItemToUserFromCharacterRequest( &request, "TestServerMoveItemToUserFromCharacter" );
    HRESULT hr = PlayFabServerMoveItemToUserFromCharacterAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerMoveItemToUserFromCharacterAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerNotifyMatchmakerPlayerLeft(TestContext& testContext)
{
    struct NotifyMatchmakerPlayerLeftResult : public XAsyncResult
    {
        PlayFabServerNotifyMatchmakerPlayerLeftResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerNotifyMatchmakerPlayerLeftGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerNotifyMatchmakerPlayerLeftResult( result );
            return ValidatePlayFabServerNotifyMatchmakerPlayerLeftResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<NotifyMatchmakerPlayerLeftResult>>(testContext);

    PlayFab::ServerModels::NotifyMatchmakerPlayerLeftRequest request;
    FillPlayFabServerNotifyMatchmakerPlayerLeftRequest( &request );
    LogPlayFabServerNotifyMatchmakerPlayerLeftRequest( &request, "TestServerNotifyMatchmakerPlayerLeft" );
    HRESULT hr = PlayFabServerNotifyMatchmakerPlayerLeftAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerNotifyMatchmakerPlayerLeftAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRedeemCoupon(TestContext& testContext)
{
    struct RedeemCouponResult : public XAsyncResult
    {
        PlayFabServerRedeemCouponResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerRedeemCouponGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerRedeemCouponResult( result );
            return ValidatePlayFabServerRedeemCouponResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RedeemCouponResult>>(testContext);

    PlayFab::ServerModels::RedeemCouponRequest request;
    FillPlayFabServerRedeemCouponRequest( &request );
    LogPlayFabServerRedeemCouponRequest( &request, "TestServerRedeemCoupon" );
    HRESULT hr = PlayFabServerRedeemCouponAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRedeemCouponAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRedeemMatchmakerTicket(TestContext& testContext)
{
    struct RedeemMatchmakerTicketResult : public XAsyncResult
    {
        PlayFabServerRedeemMatchmakerTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerRedeemMatchmakerTicketGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerRedeemMatchmakerTicketResult( result );
            return ValidatePlayFabServerRedeemMatchmakerTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RedeemMatchmakerTicketResult>>(testContext);

    PlayFab::ServerModels::RedeemMatchmakerTicketRequest request;
    FillPlayFabServerRedeemMatchmakerTicketRequest( &request );
    LogPlayFabServerRedeemMatchmakerTicketRequest( &request, "TestServerRedeemMatchmakerTicket" );
    HRESULT hr = PlayFabServerRedeemMatchmakerTicketAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRedeemMatchmakerTicketAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRefreshGameServerInstanceHeartbeat(TestContext& testContext)
{
    struct RefreshGameServerInstanceHeartbeatResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RefreshGameServerInstanceHeartbeatResult>>(testContext);

    PlayFab::ServerModels::RefreshGameServerInstanceHeartbeatRequest request;
    FillPlayFabServerRefreshGameServerInstanceHeartbeatRequest( &request );
    LogPlayFabServerRefreshGameServerInstanceHeartbeatRequest( &request, "TestServerRefreshGameServerInstanceHeartbeat" );
    HRESULT hr = PlayFabServerRefreshGameServerInstanceHeartbeatAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRefreshGameServerInstanceHeartbeatAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRegisterGame(TestContext& testContext)
{
    struct RegisterGameResult : public XAsyncResult
    {
        PlayFabServerRegisterGameResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerRegisterGameGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerRegisterGameGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerRegisterGameResponse( result );
            return ValidatePlayFabServerRegisterGameResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RegisterGameResult>>(testContext);

    PlayFab::ServerModels::RegisterGameRequest request;
    FillPlayFabServerRegisterGameRequest( &request );
    LogPlayFabServerRegisterGameRequest( &request, "TestServerRegisterGame" );
    HRESULT hr = PlayFabServerRegisterGameAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRegisterGameAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRemoveFriend(TestContext& testContext)
{
    struct RemoveFriendResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveFriendResult>>(testContext);

    PlayFab::ServerModels::RemoveFriendRequest request;
    FillPlayFabServerRemoveFriendRequest( &request );
    LogPlayFabServerRemoveFriendRequest( &request, "TestServerRemoveFriend" );
    HRESULT hr = PlayFabServerRemoveFriendAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRemoveFriendAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRemoveGenericID(TestContext& testContext)
{
    struct RemoveGenericIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveGenericIDResult>>(testContext);

    PlayFab::ServerModels::RemoveGenericIDRequest request;
    FillPlayFabServerRemoveGenericIDRequest( &request );
    LogPlayFabServerRemoveGenericIDRequest( &request, "TestServerRemoveGenericID" );
    HRESULT hr = PlayFabServerRemoveGenericIDAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRemoveGenericIDAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRemovePlayerTag(TestContext& testContext)
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

    PlayFab::ServerModels::RemovePlayerTagRequest request;
    FillPlayFabServerRemovePlayerTagRequest( &request );
    LogPlayFabServerRemovePlayerTagRequest( &request, "TestServerRemovePlayerTag" );
    HRESULT hr = PlayFabServerRemovePlayerTagAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRemovePlayerTagAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRemoveSharedGroupMembers(TestContext& testContext)
{
    struct RemoveSharedGroupMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveSharedGroupMembersResult>>(testContext);

    PlayFab::ServerModels::RemoveSharedGroupMembersRequest request;
    FillPlayFabServerRemoveSharedGroupMembersRequest( &request );
    LogPlayFabServerRemoveSharedGroupMembersRequest( &request, "TestServerRemoveSharedGroupMembers" );
    HRESULT hr = PlayFabServerRemoveSharedGroupMembersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRemoveSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerReportPlayer(TestContext& testContext)
{
    struct ReportPlayerResult : public XAsyncResult
    {
        PlayFabServerReportPlayerServerResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerReportPlayerGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerReportPlayerServerResult( &result );
            return ValidatePlayFabServerReportPlayerServerResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ReportPlayerResult>>(testContext);

    PlayFab::ServerModels::ReportPlayerServerRequest request;
    FillPlayFabServerReportPlayerServerRequest( &request );
    LogPlayFabServerReportPlayerServerRequest( &request, "TestServerReportPlayer" );
    HRESULT hr = PlayFabServerReportPlayerAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerReportPlayerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRevokeAllBansForUser(TestContext& testContext)
{
    struct RevokeAllBansForUserResult : public XAsyncResult
    {
        PlayFabServerRevokeAllBansForUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerRevokeAllBansForUserGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerRevokeAllBansForUserResult( result );
            return ValidatePlayFabServerRevokeAllBansForUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RevokeAllBansForUserResult>>(testContext);

    PlayFab::ServerModels::RevokeAllBansForUserRequest request;
    FillPlayFabServerRevokeAllBansForUserRequest( &request );
    LogPlayFabServerRevokeAllBansForUserRequest( &request, "TestServerRevokeAllBansForUser" );
    HRESULT hr = PlayFabServerRevokeAllBansForUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRevokeAllBansForUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRevokeBans(TestContext& testContext)
{
    struct RevokeBansResult : public XAsyncResult
    {
        PlayFabServerRevokeBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerRevokeBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerRevokeBansResult( result );
            return ValidatePlayFabServerRevokeBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RevokeBansResult>>(testContext);

    PlayFab::ServerModels::RevokeBansRequest request;
    FillPlayFabServerRevokeBansRequest( &request );
    LogPlayFabServerRevokeBansRequest( &request, "TestServerRevokeBans" );
    HRESULT hr = PlayFabServerRevokeBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRevokeBansAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRevokeInventoryItem(TestContext& testContext)
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

    PlayFab::ServerModels::RevokeInventoryItemRequest request;
    FillPlayFabServerRevokeInventoryItemRequest( &request );
    LogPlayFabServerRevokeInventoryItemRequest( &request, "TestServerRevokeInventoryItem" );
    HRESULT hr = PlayFabServerRevokeInventoryItemAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRevokeInventoryItemAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerRevokeInventoryItems(TestContext& testContext)
{
    struct RevokeInventoryItemsResult : public XAsyncResult
    {
        PlayFabServerRevokeInventoryItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerRevokeInventoryItemsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerRevokeInventoryItemsResult( result );
            return ValidatePlayFabServerRevokeInventoryItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RevokeInventoryItemsResult>>(testContext);

    PlayFab::ServerModels::RevokeInventoryItemsRequest request;
    FillPlayFabServerRevokeInventoryItemsRequest( &request );
    LogPlayFabServerRevokeInventoryItemsRequest( &request, "TestServerRevokeInventoryItems" );
    HRESULT hr = PlayFabServerRevokeInventoryItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerRevokeInventoryItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSavePushNotificationTemplate(TestContext& testContext)
{
    struct SavePushNotificationTemplateResult : public XAsyncResult
    {
        PlayFabServerSavePushNotificationTemplateResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerSavePushNotificationTemplateGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerSavePushNotificationTemplateGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerSavePushNotificationTemplateResult( result );
            return ValidatePlayFabServerSavePushNotificationTemplateResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SavePushNotificationTemplateResult>>(testContext);

    PlayFab::ServerModels::SavePushNotificationTemplateRequest request;
    FillPlayFabServerSavePushNotificationTemplateRequest( &request );
    LogPlayFabServerSavePushNotificationTemplateRequest( &request, "TestServerSavePushNotificationTemplate" );
    HRESULT hr = PlayFabServerSavePushNotificationTemplateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSavePushNotificationTemplateAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSendCustomAccountRecoveryEmail(TestContext& testContext)
{
    struct SendCustomAccountRecoveryEmailResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SendCustomAccountRecoveryEmailResult>>(testContext);

    PlayFab::ServerModels::SendCustomAccountRecoveryEmailRequest request;
    FillPlayFabServerSendCustomAccountRecoveryEmailRequest( &request );
    LogPlayFabServerSendCustomAccountRecoveryEmailRequest( &request, "TestServerSendCustomAccountRecoveryEmail" );
    HRESULT hr = PlayFabServerSendCustomAccountRecoveryEmailAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSendCustomAccountRecoveryEmailAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSendEmailFromTemplate(TestContext& testContext)
{
    struct SendEmailFromTemplateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SendEmailFromTemplateResult>>(testContext);

    PlayFab::ServerModels::SendEmailFromTemplateRequest request;
    FillPlayFabServerSendEmailFromTemplateRequest( &request );
    LogPlayFabServerSendEmailFromTemplateRequest( &request, "TestServerSendEmailFromTemplate" );
    HRESULT hr = PlayFabServerSendEmailFromTemplateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSendEmailFromTemplateAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSendPushNotification(TestContext& testContext)
{
    struct SendPushNotificationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SendPushNotificationResult>>(testContext);

    PlayFab::ServerModels::SendPushNotificationRequest request;
    FillPlayFabServerSendPushNotificationRequest( &request );
    LogPlayFabServerSendPushNotificationRequest( &request, "TestServerSendPushNotification" );
    HRESULT hr = PlayFabServerSendPushNotificationAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSendPushNotificationAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSendPushNotificationFromTemplate(TestContext& testContext)
{
    struct SendPushNotificationFromTemplateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SendPushNotificationFromTemplateResult>>(testContext);

    PlayFab::ServerModels::SendPushNotificationFromTemplateRequest request;
    FillPlayFabServerSendPushNotificationFromTemplateRequest( &request );
    LogPlayFabServerSendPushNotificationFromTemplateRequest( &request, "TestServerSendPushNotificationFromTemplate" );
    HRESULT hr = PlayFabServerSendPushNotificationFromTemplateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSendPushNotificationFromTemplateAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSetFriendTags(TestContext& testContext)
{
    struct SetFriendTagsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetFriendTagsResult>>(testContext);

    PlayFab::ServerModels::SetFriendTagsRequest request;
    FillPlayFabServerSetFriendTagsRequest( &request );
    LogPlayFabServerSetFriendTagsRequest( &request, "TestServerSetFriendTags" );
    HRESULT hr = PlayFabServerSetFriendTagsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSetFriendTagsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSetGameServerInstanceData(TestContext& testContext)
{
    struct SetGameServerInstanceDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetGameServerInstanceDataResult>>(testContext);

    PlayFab::ServerModels::SetGameServerInstanceDataRequest request;
    FillPlayFabServerSetGameServerInstanceDataRequest( &request );
    LogPlayFabServerSetGameServerInstanceDataRequest( &request, "TestServerSetGameServerInstanceData" );
    HRESULT hr = PlayFabServerSetGameServerInstanceDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSetGameServerInstanceDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSetGameServerInstanceState(TestContext& testContext)
{
    struct SetGameServerInstanceStateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetGameServerInstanceStateResult>>(testContext);

    PlayFab::ServerModels::SetGameServerInstanceStateRequest request;
    FillPlayFabServerSetGameServerInstanceStateRequest( &request );
    LogPlayFabServerSetGameServerInstanceStateRequest( &request, "TestServerSetGameServerInstanceState" );
    HRESULT hr = PlayFabServerSetGameServerInstanceStateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSetGameServerInstanceStateAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSetGameServerInstanceTags(TestContext& testContext)
{
    struct SetGameServerInstanceTagsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetGameServerInstanceTagsResult>>(testContext);

    PlayFab::ServerModels::SetGameServerInstanceTagsRequest request;
    FillPlayFabServerSetGameServerInstanceTagsRequest( &request );
    LogPlayFabServerSetGameServerInstanceTagsRequest( &request, "TestServerSetGameServerInstanceTags" );
    HRESULT hr = PlayFabServerSetGameServerInstanceTagsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSetGameServerInstanceTagsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSetPlayerSecret(TestContext& testContext)
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

    PlayFab::ServerModels::SetPlayerSecretRequest request;
    FillPlayFabServerSetPlayerSecretRequest( &request );
    LogPlayFabServerSetPlayerSecretRequest( &request, "TestServerSetPlayerSecret" );
    HRESULT hr = PlayFabServerSetPlayerSecretAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSetPlayerSecretAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSetPublisherData(TestContext& testContext)
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

    PlayFab::ServerModels::SetPublisherDataRequest request;
    FillPlayFabServerSetPublisherDataRequest( &request );
    LogPlayFabServerSetPublisherDataRequest( &request, "TestServerSetPublisherData" );
    HRESULT hr = PlayFabServerSetPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSetTitleData(TestContext& testContext)
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

    PlayFab::ServerModels::SetTitleDataRequest request;
    FillPlayFabServerSetTitleDataRequest( &request );
    LogPlayFabServerSetTitleDataRequest( &request, "TestServerSetTitleData" );
    HRESULT hr = PlayFabServerSetTitleDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSetTitleDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSetTitleInternalData(TestContext& testContext)
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

    PlayFab::ServerModels::SetTitleDataRequest request;
    FillPlayFabServerSetTitleDataRequest( &request );
    LogPlayFabServerSetTitleDataRequest( &request, "TestServerSetTitleInternalData" );
    HRESULT hr = PlayFabServerSetTitleInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSetTitleInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSubtractCharacterVirtualCurrency(TestContext& testContext)
{
    struct SubtractCharacterVirtualCurrencyResult : public XAsyncResult
    {
        PlayFabServerModifyCharacterVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerSubtractCharacterVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerSubtractCharacterVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerModifyCharacterVirtualCurrencyResult( result );
            return ValidatePlayFabServerModifyCharacterVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SubtractCharacterVirtualCurrencyResult>>(testContext);

    PlayFab::ServerModels::SubtractCharacterVirtualCurrencyRequest request;
    FillPlayFabServerSubtractCharacterVirtualCurrencyRequest( &request );
    LogPlayFabServerSubtractCharacterVirtualCurrencyRequest( &request, "TestServerSubtractCharacterVirtualCurrency" );
    HRESULT hr = PlayFabServerSubtractCharacterVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSubtractCharacterVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerSubtractUserVirtualCurrency(TestContext& testContext)
{
    struct SubtractUserVirtualCurrencyResult : public XAsyncResult
    {
        PlayFabServerModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerSubtractUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerSubtractUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerModifyUserVirtualCurrencyResult( result );
            return ValidatePlayFabServerModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SubtractUserVirtualCurrencyResult>>(testContext);

    PlayFab::ServerModels::SubtractUserVirtualCurrencyRequest request;
    FillPlayFabServerSubtractUserVirtualCurrencyRequest( &request );
    LogPlayFabServerSubtractUserVirtualCurrencyRequest( &request, "TestServerSubtractUserVirtualCurrency" );
    HRESULT hr = PlayFabServerSubtractUserVirtualCurrencyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerSubtractUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUnlinkPSNAccount(TestContext& testContext)
{
    struct UnlinkPSNAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkPSNAccountResult>>(testContext);

    PlayFab::ServerModels::UnlinkPSNAccountRequest request;
    FillPlayFabServerUnlinkPSNAccountRequest( &request );
    LogPlayFabServerUnlinkPSNAccountRequest( &request, "TestServerUnlinkPSNAccount" );
    HRESULT hr = PlayFabServerUnlinkPSNAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUnlinkPSNAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUnlinkServerCustomId(TestContext& testContext)
{
    struct UnlinkServerCustomIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkServerCustomIdResult>>(testContext);

    PlayFab::ServerModels::UnlinkServerCustomIdRequest request;
    FillPlayFabServerUnlinkServerCustomIdRequest( &request );
    LogPlayFabServerUnlinkServerCustomIdRequest( &request, "TestServerUnlinkServerCustomId" );
    HRESULT hr = PlayFabServerUnlinkServerCustomIdAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUnlinkServerCustomIdAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUnlinkXboxAccount(TestContext& testContext)
{
    struct UnlinkXboxAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkXboxAccountResult>>(testContext);

    PlayFab::ServerModels::UnlinkXboxAccountRequest request;
    FillPlayFabServerUnlinkXboxAccountRequest( &request );
    LogPlayFabServerUnlinkXboxAccountRequest( &request, "TestServerUnlinkXboxAccount" );
    HRESULT hr = PlayFabServerUnlinkXboxAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUnlinkXboxAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUnlockContainerInstance(TestContext& testContext)
{
    struct UnlockContainerInstanceResult : public XAsyncResult
    {
        PlayFabServerUnlockContainerItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUnlockContainerInstanceGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUnlockContainerItemResult( result );
            return ValidatePlayFabServerUnlockContainerItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UnlockContainerInstanceResult>>(testContext);

    PlayFab::ServerModels::UnlockContainerInstanceRequest request;
    FillPlayFabServerUnlockContainerInstanceRequest( &request );
    LogPlayFabServerUnlockContainerInstanceRequest( &request, "TestServerUnlockContainerInstance" );
    HRESULT hr = PlayFabServerUnlockContainerInstanceAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUnlockContainerInstanceAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUnlockContainerItem(TestContext& testContext)
{
    struct UnlockContainerItemResult : public XAsyncResult
    {
        PlayFabServerUnlockContainerItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUnlockContainerItemGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUnlockContainerItemResult( result );
            return ValidatePlayFabServerUnlockContainerItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UnlockContainerItemResult>>(testContext);

    PlayFab::ServerModels::UnlockContainerItemRequest request;
    FillPlayFabServerUnlockContainerItemRequest( &request );
    LogPlayFabServerUnlockContainerItemRequest( &request, "TestServerUnlockContainerItem" );
    HRESULT hr = PlayFabServerUnlockContainerItemAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUnlockContainerItemAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateAvatarUrl(TestContext& testContext)
{
    struct UpdateAvatarUrlResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateAvatarUrlResult>>(testContext);

    PlayFab::ServerModels::UpdateAvatarUrlRequest request;
    FillPlayFabServerUpdateAvatarUrlRequest( &request );
    LogPlayFabServerUpdateAvatarUrlRequest( &request, "TestServerUpdateAvatarUrl" );
    HRESULT hr = PlayFabServerUpdateAvatarUrlAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateAvatarUrlAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateBans(TestContext& testContext)
{
    struct UpdateBansResult : public XAsyncResult
    {
        PlayFabServerUpdateBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUpdateBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUpdateBansResult( result );
            return ValidatePlayFabServerUpdateBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateBansResult>>(testContext);

    PlayFab::ServerModels::UpdateBansRequest request;
    FillPlayFabServerUpdateBansRequest( &request );
    LogPlayFabServerUpdateBansRequest( &request, "TestServerUpdateBans" );
    HRESULT hr = PlayFabServerUpdateBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateBansAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateCharacterData(TestContext& testContext)
{
    struct UpdateCharacterDataResult : public XAsyncResult
    {
        PlayFabServerUpdateCharacterDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUpdateCharacterDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUpdateCharacterDataResult( &result );
            return ValidatePlayFabServerUpdateCharacterDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateCharacterDataResult>>(testContext);

    PlayFab::ServerModels::UpdateCharacterDataRequest request;
    FillPlayFabServerUpdateCharacterDataRequest( &request );
    LogPlayFabServerUpdateCharacterDataRequest( &request, "TestServerUpdateCharacterData" );
    HRESULT hr = PlayFabServerUpdateCharacterDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateCharacterDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateCharacterInternalData(TestContext& testContext)
{
    struct UpdateCharacterInternalDataResult : public XAsyncResult
    {
        PlayFabServerUpdateCharacterDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUpdateCharacterInternalDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUpdateCharacterDataResult( &result );
            return ValidatePlayFabServerUpdateCharacterDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateCharacterInternalDataResult>>(testContext);

    PlayFab::ServerModels::UpdateCharacterDataRequest request;
    FillPlayFabServerUpdateCharacterDataRequest( &request );
    LogPlayFabServerUpdateCharacterDataRequest( &request, "TestServerUpdateCharacterInternalData" );
    HRESULT hr = PlayFabServerUpdateCharacterInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateCharacterInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateCharacterReadOnlyData(TestContext& testContext)
{
    struct UpdateCharacterReadOnlyDataResult : public XAsyncResult
    {
        PlayFabServerUpdateCharacterDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUpdateCharacterReadOnlyDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUpdateCharacterDataResult( &result );
            return ValidatePlayFabServerUpdateCharacterDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateCharacterReadOnlyDataResult>>(testContext);

    PlayFab::ServerModels::UpdateCharacterDataRequest request;
    FillPlayFabServerUpdateCharacterDataRequest( &request );
    LogPlayFabServerUpdateCharacterDataRequest( &request, "TestServerUpdateCharacterReadOnlyData" );
    HRESULT hr = PlayFabServerUpdateCharacterReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateCharacterReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateCharacterStatistics(TestContext& testContext)
{
    struct UpdateCharacterStatisticsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateCharacterStatisticsResult>>(testContext);

    PlayFab::ServerModels::UpdateCharacterStatisticsRequest request;
    FillPlayFabServerUpdateCharacterStatisticsRequest( &request );
    LogPlayFabServerUpdateCharacterStatisticsRequest( &request, "TestServerUpdateCharacterStatistics" );
    HRESULT hr = PlayFabServerUpdateCharacterStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateCharacterStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdatePlayerStatistics(TestContext& testContext)
{
    struct UpdatePlayerStatisticsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdatePlayerStatisticsResult>>(testContext);

    PlayFab::ServerModels::UpdatePlayerStatisticsRequest request;
    FillPlayFabServerUpdatePlayerStatisticsRequest( &request );
    LogPlayFabServerUpdatePlayerStatisticsRequest( &request, "TestServerUpdatePlayerStatistics" );
    HRESULT hr = PlayFabServerUpdatePlayerStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdatePlayerStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateSharedGroupData(TestContext& testContext)
{
    struct UpdateSharedGroupDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateSharedGroupDataResult>>(testContext);

    PlayFab::ServerModels::UpdateSharedGroupDataRequest request;
    FillPlayFabServerUpdateSharedGroupDataRequest( &request );
    LogPlayFabServerUpdateSharedGroupDataRequest( &request, "TestServerUpdateSharedGroupData" );
    HRESULT hr = PlayFabServerUpdateSharedGroupDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateUserData(TestContext& testContext)
{
    struct UpdateUserDataResult : public XAsyncResult
    {
        PlayFabServerUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUpdateUserDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUpdateUserDataResult( &result );
            return ValidatePlayFabServerUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserDataResult>>(testContext);

    PlayFab::ServerModels::UpdateUserDataRequest request;
    FillPlayFabServerUpdateUserDataRequest( &request );
    LogPlayFabServerUpdateUserDataRequest( &request, "TestServerUpdateUserData" );
    HRESULT hr = PlayFabServerUpdateUserDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateUserDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateUserInternalData(TestContext& testContext)
{
    struct UpdateUserInternalDataResult : public XAsyncResult
    {
        PlayFabServerUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUpdateUserInternalDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUpdateUserDataResult( &result );
            return ValidatePlayFabServerUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserInternalDataResult>>(testContext);

    PlayFab::ServerModels::UpdateUserInternalDataRequest request;
    FillPlayFabServerUpdateUserInternalDataRequest( &request );
    LogPlayFabServerUpdateUserInternalDataRequest( &request, "TestServerUpdateUserInternalData" );
    HRESULT hr = PlayFabServerUpdateUserInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateUserInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateUserInventoryItemCustomData(TestContext& testContext)
{
    struct UpdateUserInventoryItemCustomDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UpdateUserInventoryItemCustomDataResult>>(testContext);

    PlayFab::ServerModels::UpdateUserInventoryItemDataRequest request;
    FillPlayFabServerUpdateUserInventoryItemDataRequest( &request );
    LogPlayFabServerUpdateUserInventoryItemDataRequest( &request, "TestServerUpdateUserInventoryItemCustomData" );
    HRESULT hr = PlayFabServerUpdateUserInventoryItemCustomDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateUserInventoryItemCustomDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateUserPublisherData(TestContext& testContext)
{
    struct UpdateUserPublisherDataResult : public XAsyncResult
    {
        PlayFabServerUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUpdateUserPublisherDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUpdateUserDataResult( &result );
            return ValidatePlayFabServerUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserPublisherDataResult>>(testContext);

    PlayFab::ServerModels::UpdateUserDataRequest request;
    FillPlayFabServerUpdateUserDataRequest( &request );
    LogPlayFabServerUpdateUserDataRequest( &request, "TestServerUpdateUserPublisherData" );
    HRESULT hr = PlayFabServerUpdateUserPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateUserPublisherInternalData(TestContext& testContext)
{
    struct UpdateUserPublisherInternalDataResult : public XAsyncResult
    {
        PlayFabServerUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUpdateUserPublisherInternalDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUpdateUserDataResult( &result );
            return ValidatePlayFabServerUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserPublisherInternalDataResult>>(testContext);

    PlayFab::ServerModels::UpdateUserInternalDataRequest request;
    FillPlayFabServerUpdateUserInternalDataRequest( &request );
    LogPlayFabServerUpdateUserInternalDataRequest( &request, "TestServerUpdateUserPublisherInternalData" );
    HRESULT hr = PlayFabServerUpdateUserPublisherInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateUserPublisherInternalDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateUserPublisherReadOnlyData(TestContext& testContext)
{
    struct UpdateUserPublisherReadOnlyDataResult : public XAsyncResult
    {
        PlayFabServerUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUpdateUserPublisherReadOnlyDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUpdateUserDataResult( &result );
            return ValidatePlayFabServerUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserPublisherReadOnlyDataResult>>(testContext);

    PlayFab::ServerModels::UpdateUserDataRequest request;
    FillPlayFabServerUpdateUserDataRequest( &request );
    LogPlayFabServerUpdateUserDataRequest( &request, "TestServerUpdateUserPublisherReadOnlyData" );
    HRESULT hr = PlayFabServerUpdateUserPublisherReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateUserPublisherReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerUpdateUserReadOnlyData(TestContext& testContext)
{
    struct UpdateUserReadOnlyDataResult : public XAsyncResult
    {
        PlayFabServerUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabServerUpdateUserReadOnlyDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerUpdateUserDataResult( &result );
            return ValidatePlayFabServerUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserReadOnlyDataResult>>(testContext);

    PlayFab::ServerModels::UpdateUserDataRequest request;
    FillPlayFabServerUpdateUserDataRequest( &request );
    LogPlayFabServerUpdateUserDataRequest( &request, "TestServerUpdateUserReadOnlyData" );
    HRESULT hr = PlayFabServerUpdateUserReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerUpdateUserReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerWriteCharacterEvent(TestContext& testContext)
{
    struct WriteCharacterEventResult : public XAsyncResult
    {
        PlayFabServerWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerWriteCharacterEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerWriteCharacterEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerWriteEventResponse( result );
            return ValidatePlayFabServerWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<WriteCharacterEventResult>>(testContext);

    PlayFab::ServerModels::WriteServerCharacterEventRequest request;
    FillPlayFabServerWriteServerCharacterEventRequest( &request );
    LogPlayFabServerWriteServerCharacterEventRequest( &request, "TestServerWriteCharacterEvent" );
    HRESULT hr = PlayFabServerWriteCharacterEventAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerWriteCharacterEventAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerWritePlayerEvent(TestContext& testContext)
{
    struct WritePlayerEventResult : public XAsyncResult
    {
        PlayFabServerWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerWritePlayerEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerWritePlayerEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerWriteEventResponse( result );
            return ValidatePlayFabServerWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<WritePlayerEventResult>>(testContext);

    PlayFab::ServerModels::WriteServerPlayerEventRequest request;
    FillPlayFabServerWriteServerPlayerEventRequest( &request );
    LogPlayFabServerWriteServerPlayerEventRequest( &request, "TestServerWritePlayerEvent" );
    HRESULT hr = PlayFabServerWritePlayerEventAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerWritePlayerEventAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenServerTests::TestServerWriteTitleEvent(TestContext& testContext)
{
    struct WriteTitleEventResult : public XAsyncResult
    {
        PlayFabServerWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabServerWriteTitleEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabServerWriteTitleEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabServerWriteEventResponse( result );
            return ValidatePlayFabServerWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<WriteTitleEventResult>>(testContext);

    PlayFab::ServerModels::WriteTitleEventRequest request;
    FillPlayFabServerWriteTitleEventRequest( &request );
    LogPlayFabServerWriteTitleEventRequest( &request, "TestServerWriteTitleEvent" );
    HRESULT hr = PlayFabServerWriteTitleEventAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabServerWriteTitleEventAsync", hr);
        return;
    }
    async.release(); 
} 


}
