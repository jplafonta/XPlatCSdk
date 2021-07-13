#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenClientTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenClientTests::Log(std::stringstream& ss)
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

void AutoGenClientTests::AddTests()
{
    // Generated tests 
    //AddTest("TestClientAcceptTrade", &AutoGenClientTests::TestClientAcceptTrade); // TODO: debug failing test
    //AddTest("TestClientAddFriend", &AutoGenClientTests::TestClientAddFriend); // TODO: debug failing test
    AddTest("TestClientAddGenericID", &AutoGenClientTests::TestClientAddGenericID);
    AddTest("TestClientAddOrUpdateContactEmail", &AutoGenClientTests::TestClientAddOrUpdateContactEmail);
    //AddTest("TestClientAddSharedGroupMembers", &AutoGenClientTests::TestClientAddSharedGroupMembers); // TODO: debug failing test
    //AddTest("TestClientAddUsernamePassword", &AutoGenClientTests::TestClientAddUsernamePassword); // TODO: debug failing test
    //AddTest("TestClientAddUserVirtualCurrency", &AutoGenClientTests::TestClientAddUserVirtualCurrency); // TODO: debug failing test
    //AddTest("TestClientAndroidDevicePushNotificationRegistration", &AutoGenClientTests::TestClientAndroidDevicePushNotificationRegistration); // TODO: debug failing test
    //AddTest("TestClientAttributeInstall", &AutoGenClientTests::TestClientAttributeInstall); // TODO: debug failing test
    //AddTest("TestClientCancelTrade", &AutoGenClientTests::TestClientCancelTrade); // TODO: debug failing test
    //AddTest("TestClientConfirmPurchase", &AutoGenClientTests::TestClientConfirmPurchase); // TODO: debug failing test
    //AddTest("TestClientConsumeItem", &AutoGenClientTests::TestClientConsumeItem); // TODO: debug failing test
    //AddTest("TestClientConsumeMicrosoftStoreEntitlements", &AutoGenClientTests::TestClientConsumeMicrosoftStoreEntitlements); // TODO: debug failing test
    //AddTest("TestClientConsumePS5Entitlements", &AutoGenClientTests::TestClientConsumePS5Entitlements); // TODO: debug failing test
    //AddTest("TestClientConsumePSNEntitlements", &AutoGenClientTests::TestClientConsumePSNEntitlements); // TODO: debug failing test
    //AddTest("TestClientConsumeXboxEntitlements", &AutoGenClientTests::TestClientConsumeXboxEntitlements); // TODO: debug failing test
    //AddTest("TestClientCreateSharedGroup", &AutoGenClientTests::TestClientCreateSharedGroup); // TODO: debug failing test
    AddTest("TestClientExecuteCloudScript", &AutoGenClientTests::TestClientExecuteCloudScript);
    //AddTest("TestClientGetAccountInfo", &AutoGenClientTests::TestClientGetAccountInfo); // TODO: debug failing test
    AddTest("TestClientGetAdPlacements", &AutoGenClientTests::TestClientGetAdPlacements); // TODO: debug passing test but no data
    //AddTest("TestClientGetAllUsersCharacters", &AutoGenClientTests::TestClientGetAllUsersCharacters); // TODO: debug failing test
    AddTest("TestClientGetCatalogItems", &AutoGenClientTests::TestClientGetCatalogItems); // TODO: debug passing test but no data
    //AddTest("TestClientGetCharacterData", &AutoGenClientTests::TestClientGetCharacterData); // TODO: debug failing test
    //AddTest("TestClientGetCharacterInventory", &AutoGenClientTests::TestClientGetCharacterInventory); // TODO: debug failing test
    AddTest("TestClientGetCharacterLeaderboard", &AutoGenClientTests::TestClientGetCharacterLeaderboard);
    //AddTest("TestClientGetCharacterReadOnlyData", &AutoGenClientTests::TestClientGetCharacterReadOnlyData); // TODO: debug failing test
    //AddTest("TestClientGetCharacterStatistics", &AutoGenClientTests::TestClientGetCharacterStatistics); // TODO: debug failing test
    AddTest("TestClientGetContentDownloadUrl", &AutoGenClientTests::TestClientGetContentDownloadUrl);
    AddTest("TestClientGetCurrentGames", &AutoGenClientTests::TestClientGetCurrentGames); // TODO: debug passing test but no data
    AddTest("TestClientGetFriendLeaderboard", &AutoGenClientTests::TestClientGetFriendLeaderboard); // TODO: debug passing test but no data
    AddTest("TestClientGetFriendLeaderboardAroundPlayer", &AutoGenClientTests::TestClientGetFriendLeaderboardAroundPlayer); // TODO: debug passing test but no data
    AddTest("TestClientGetFriendsList", &AutoGenClientTests::TestClientGetFriendsList); // TODO: debug passing test but no data
    //AddTest("TestClientGetGameServerRegions", &AutoGenClientTests::TestClientGetGameServerRegions); // TODO: debug failing test
    AddTest("TestClientGetLeaderboard", &AutoGenClientTests::TestClientGetLeaderboard); // TODO: debug passing test but no data
    //AddTest("TestClientGetLeaderboardAroundCharacter", &AutoGenClientTests::TestClientGetLeaderboardAroundCharacter); // TODO: debug failing test
    AddTest("TestClientGetLeaderboardAroundPlayer", &AutoGenClientTests::TestClientGetLeaderboardAroundPlayer); // TODO: debug passing test but no data
    AddTest("TestClientGetLeaderboardForUserCharacters", &AutoGenClientTests::TestClientGetLeaderboardForUserCharacters); // TODO: debug passing test but no data
    //AddTest("TestClientGetPaymentToken", &AutoGenClientTests::TestClientGetPaymentToken); // TODO: debug failing test
    //AddTest("TestClientGetPhotonAuthenticationToken", &AutoGenClientTests::TestClientGetPhotonAuthenticationToken); // TODO: debug failing test
    //AddTest("TestClientGetPlayerCombinedInfo", &AutoGenClientTests::TestClientGetPlayerCombinedInfo); // TODO: debug failing test
    //AddTest("TestClientGetPlayerProfile", &AutoGenClientTests::TestClientGetPlayerProfile); // TODO: debug failing test
    AddTest("TestClientGetPlayerSegments", &AutoGenClientTests::TestClientGetPlayerSegments);
    AddTest("TestClientGetPlayerStatistics", &AutoGenClientTests::TestClientGetPlayerStatistics); // TODO: debug passing test but no data
    //AddTest("TestClientGetPlayerStatisticVersions", &AutoGenClientTests::TestClientGetPlayerStatisticVersions); // TODO: debug failing test
    //AddTest("TestClientGetPlayerTags", &AutoGenClientTests::TestClientGetPlayerTags); // TODO: debug failing test
    AddTest("TestClientGetPlayerTrades", &AutoGenClientTests::TestClientGetPlayerTrades); // TODO: debug passing test but no data
    AddTest("TestClientGetPlayFabIDsFromFacebookIDs", &AutoGenClientTests::TestClientGetPlayFabIDsFromFacebookIDs);
    AddTest("TestClientGetPlayFabIDsFromFacebookInstantGamesIds", &AutoGenClientTests::TestClientGetPlayFabIDsFromFacebookInstantGamesIds);
    AddTest("TestClientGetPlayFabIDsFromGameCenterIDs", &AutoGenClientTests::TestClientGetPlayFabIDsFromGameCenterIDs);
    AddTest("TestClientGetPlayFabIDsFromGenericIDs", &AutoGenClientTests::TestClientGetPlayFabIDsFromGenericIDs);
    AddTest("TestClientGetPlayFabIDsFromGoogleIDs", &AutoGenClientTests::TestClientGetPlayFabIDsFromGoogleIDs);
    AddTest("TestClientGetPlayFabIDsFromKongregateIDs", &AutoGenClientTests::TestClientGetPlayFabIDsFromKongregateIDs);
    AddTest("TestClientGetPlayFabIDsFromNintendoSwitchDeviceIds", &AutoGenClientTests::TestClientGetPlayFabIDsFromNintendoSwitchDeviceIds);
    AddTest("TestClientGetPlayFabIDsFromPSNAccountIDs", &AutoGenClientTests::TestClientGetPlayFabIDsFromPSNAccountIDs);
    AddTest("TestClientGetPlayFabIDsFromSteamIDs", &AutoGenClientTests::TestClientGetPlayFabIDsFromSteamIDs);
    AddTest("TestClientGetPlayFabIDsFromTwitchIDs", &AutoGenClientTests::TestClientGetPlayFabIDsFromTwitchIDs);
    AddTest("TestClientGetPlayFabIDsFromXboxLiveIDs", &AutoGenClientTests::TestClientGetPlayFabIDsFromXboxLiveIDs);
    AddTest("TestClientGetPublisherData", &AutoGenClientTests::TestClientGetPublisherData); // TODO: debug passing test but no data
    //AddTest("TestClientGetPurchase", &AutoGenClientTests::TestClientGetPurchase); // TODO: debug failing test
    AddTest("TestClientGetSharedGroupData", &AutoGenClientTests::TestClientGetSharedGroupData);
    //AddTest("TestClientGetStoreItems", &AutoGenClientTests::TestClientGetStoreItems); // TODO: debug failing test
    AddTest("TestClientGetTime", &AutoGenClientTests::TestClientGetTime);
    AddTest("TestClientGetTitleData", &AutoGenClientTests::TestClientGetTitleData); // TODO: debug passing test but no data
    AddTest("TestClientGetTitleNews", &AutoGenClientTests::TestClientGetTitleNews);
    //AddTest("TestClientGetTitlePublicKey", &AutoGenClientTests::TestClientGetTitlePublicKey); // TODO: debug failing test
    //AddTest("TestClientGetTradeStatus", &AutoGenClientTests::TestClientGetTradeStatus); // TODO: debug failing test
    AddTest("TestClientGetUserData", &AutoGenClientTests::TestClientGetUserData);
    AddTest("TestClientGetUserInventory", &AutoGenClientTests::TestClientGetUserInventory); // TODO: debug passing test but no data
    AddTest("TestClientGetUserPublisherData", &AutoGenClientTests::TestClientGetUserPublisherData);
    AddTest("TestClientGetUserPublisherReadOnlyData", &AutoGenClientTests::TestClientGetUserPublisherReadOnlyData);
    AddTest("TestClientGetUserReadOnlyData", &AutoGenClientTests::TestClientGetUserReadOnlyData);
    //AddTest("TestClientGrantCharacterToUser", &AutoGenClientTests::TestClientGrantCharacterToUser); // TODO: debug failing test
    AddTest("TestClientLinkAndroidDeviceID", &AutoGenClientTests::TestClientLinkAndroidDeviceID);
    //AddTest("TestClientLinkApple", &AutoGenClientTests::TestClientLinkApple); // TODO: debug failing test
    AddTest("TestClientLinkCustomID", &AutoGenClientTests::TestClientLinkCustomID);
    //AddTest("TestClientLinkFacebookAccount", &AutoGenClientTests::TestClientLinkFacebookAccount); // TODO: debug failing test
    //AddTest("TestClientLinkFacebookInstantGamesId", &AutoGenClientTests::TestClientLinkFacebookInstantGamesId); // TODO: debug failing test
    AddTest("TestClientLinkGameCenterAccount", &AutoGenClientTests::TestClientLinkGameCenterAccount);
    //AddTest("TestClientLinkGoogleAccount", &AutoGenClientTests::TestClientLinkGoogleAccount); // TODO: debug failing test
    AddTest("TestClientLinkIOSDeviceID", &AutoGenClientTests::TestClientLinkIOSDeviceID);
    //AddTest("TestClientLinkKongregate", &AutoGenClientTests::TestClientLinkKongregate); // TODO: debug failing test
    //AddTest("TestClientLinkNintendoServiceAccount", &AutoGenClientTests::TestClientLinkNintendoServiceAccount); // TODO: debug failing test
    AddTest("TestClientLinkNintendoSwitchDeviceId", &AutoGenClientTests::TestClientLinkNintendoSwitchDeviceId);
    //AddTest("TestClientLinkOpenIdConnect", &AutoGenClientTests::TestClientLinkOpenIdConnect); // TODO: debug failing test
    //AddTest("TestClientLinkPSNAccount", &AutoGenClientTests::TestClientLinkPSNAccount); // TODO: debug failing test
    //AddTest("TestClientLinkSteamAccount", &AutoGenClientTests::TestClientLinkSteamAccount); // TODO: debug failing test
    //AddTest("TestClientLinkTwitch", &AutoGenClientTests::TestClientLinkTwitch); // TODO: debug failing test
    //AddTest("TestClientLinkXboxAccount", &AutoGenClientTests::TestClientLinkXboxAccount); // TODO: debug failing test
    //AddTest("TestClientMatchmake", &AutoGenClientTests::TestClientMatchmake); // TODO: debug failing test
    //AddTest("TestClientOpenTrade", &AutoGenClientTests::TestClientOpenTrade); // TODO: debug failing test
    //AddTest("TestClientPayForPurchase", &AutoGenClientTests::TestClientPayForPurchase); // TODO: debug failing test
    //AddTest("TestClientPurchaseItem", &AutoGenClientTests::TestClientPurchaseItem); // TODO: debug failing test
    //AddTest("TestClientRedeemCoupon", &AutoGenClientTests::TestClientRedeemCoupon); // TODO: debug failing test
    //AddTest("TestClientRefreshPSNAuthToken", &AutoGenClientTests::TestClientRefreshPSNAuthToken); // TODO: debug failing test
    //AddTest("TestClientRegisterForIOSPushNotification", &AutoGenClientTests::TestClientRegisterForIOSPushNotification); // TODO: debug failing test
    AddTest("TestClientRemoveContactEmail", &AutoGenClientTests::TestClientRemoveContactEmail);
    //AddTest("TestClientRemoveFriend", &AutoGenClientTests::TestClientRemoveFriend); // TODO: debug failing test
    AddTest("TestClientRemoveGenericID", &AutoGenClientTests::TestClientRemoveGenericID);
    AddTest("TestClientRemoveSharedGroupMembers", &AutoGenClientTests::TestClientRemoveSharedGroupMembers);
    //AddTest("TestClientReportAdActivity", &AutoGenClientTests::TestClientReportAdActivity); // TODO: debug failing test
    AddTest("TestClientReportDeviceInfo", &AutoGenClientTests::TestClientReportDeviceInfo);
    AddTest("TestClientReportPlayer", &AutoGenClientTests::TestClientReportPlayer);
    //AddTest("TestClientRestoreIOSPurchases", &AutoGenClientTests::TestClientRestoreIOSPurchases); // TODO: debug failing test
    //AddTest("TestClientRewardAdActivity", &AutoGenClientTests::TestClientRewardAdActivity); // TODO: debug failing test
    //AddTest("TestClientSendAccountRecoveryEmail", &AutoGenClientTests::TestClientSendAccountRecoveryEmail); // TODO: debug failing test
    //AddTest("TestClientSetFriendTags", &AutoGenClientTests::TestClientSetFriendTags); // TODO: debug failing test
    //AddTest("TestClientSetPlayerSecret", &AutoGenClientTests::TestClientSetPlayerSecret); // TODO: debug failing test
    //AddTest("TestClientStartGame", &AutoGenClientTests::TestClientStartGame); // TODO: debug failing test
    //AddTest("TestClientStartPurchase", &AutoGenClientTests::TestClientStartPurchase); // TODO: debug failing test
    //AddTest("TestClientSubtractUserVirtualCurrency", &AutoGenClientTests::TestClientSubtractUserVirtualCurrency); // TODO: debug failing test
    AddTest("TestClientUnlinkAndroidDeviceID", &AutoGenClientTests::TestClientUnlinkAndroidDeviceID);
    //AddTest("TestClientUnlinkApple", &AutoGenClientTests::TestClientUnlinkApple); // TODO: debug failing test
    AddTest("TestClientUnlinkCustomID", &AutoGenClientTests::TestClientUnlinkCustomID);
    //AddTest("TestClientUnlinkFacebookAccount", &AutoGenClientTests::TestClientUnlinkFacebookAccount); // TODO: debug failing test
    //AddTest("TestClientUnlinkFacebookInstantGamesId", &AutoGenClientTests::TestClientUnlinkFacebookInstantGamesId); // TODO: debug failing test
    AddTest("TestClientUnlinkGameCenterAccount", &AutoGenClientTests::TestClientUnlinkGameCenterAccount);
    //AddTest("TestClientUnlinkGoogleAccount", &AutoGenClientTests::TestClientUnlinkGoogleAccount); // TODO: debug failing test
    AddTest("TestClientUnlinkIOSDeviceID", &AutoGenClientTests::TestClientUnlinkIOSDeviceID);
    //AddTest("TestClientUnlinkKongregate", &AutoGenClientTests::TestClientUnlinkKongregate); // TODO: debug failing test
    //AddTest("TestClientUnlinkNintendoServiceAccount", &AutoGenClientTests::TestClientUnlinkNintendoServiceAccount); // TODO: debug failing test
    AddTest("TestClientUnlinkNintendoSwitchDeviceId", &AutoGenClientTests::TestClientUnlinkNintendoSwitchDeviceId);
    //AddTest("TestClientUnlinkOpenIdConnect", &AutoGenClientTests::TestClientUnlinkOpenIdConnect); // TODO: debug failing test
    //AddTest("TestClientUnlinkPSNAccount", &AutoGenClientTests::TestClientUnlinkPSNAccount); // TODO: debug failing test
    //AddTest("TestClientUnlinkSteamAccount", &AutoGenClientTests::TestClientUnlinkSteamAccount); // TODO: debug failing test
    //AddTest("TestClientUnlinkTwitch", &AutoGenClientTests::TestClientUnlinkTwitch); // TODO: debug failing test
    //AddTest("TestClientUnlinkXboxAccount", &AutoGenClientTests::TestClientUnlinkXboxAccount); // TODO: debug failing test
    //AddTest("TestClientUnlockContainerInstance", &AutoGenClientTests::TestClientUnlockContainerInstance); // TODO: debug failing test
    //AddTest("TestClientUnlockContainerItem", &AutoGenClientTests::TestClientUnlockContainerItem); // TODO: debug failing test
    AddTest("TestClientUpdateAvatarUrl", &AutoGenClientTests::TestClientUpdateAvatarUrl);
    //AddTest("TestClientUpdateCharacterData", &AutoGenClientTests::TestClientUpdateCharacterData); // TODO: debug failing test
    //AddTest("TestClientUpdateCharacterStatistics", &AutoGenClientTests::TestClientUpdateCharacterStatistics); // TODO: debug failing test
    //AddTest("TestClientUpdatePlayerStatistics", &AutoGenClientTests::TestClientUpdatePlayerStatistics); // TODO: debug failing test
    AddTest("TestClientUpdateSharedGroupData", &AutoGenClientTests::TestClientUpdateSharedGroupData);
    AddTest("TestClientUpdateUserData", &AutoGenClientTests::TestClientUpdateUserData);
    AddTest("TestClientUpdateUserPublisherData", &AutoGenClientTests::TestClientUpdateUserPublisherData);
    AddTest("TestClientUpdateUserTitleDisplayName", &AutoGenClientTests::TestClientUpdateUserTitleDisplayName);
    //AddTest("TestClientValidateAmazonIAPReceipt", &AutoGenClientTests::TestClientValidateAmazonIAPReceipt); // TODO: debug failing test
    //AddTest("TestClientValidateGooglePlayPurchase", &AutoGenClientTests::TestClientValidateGooglePlayPurchase); // TODO: debug failing test
    //AddTest("TestClientValidateIOSReceipt", &AutoGenClientTests::TestClientValidateIOSReceipt); // TODO: debug failing test
    //AddTest("TestClientValidateWindowsStoreReceipt", &AutoGenClientTests::TestClientValidateWindowsStoreReceipt); // TODO: debug failing test
    //AddTest("TestClientWriteCharacterEvent", &AutoGenClientTests::TestClientWriteCharacterEvent); // TODO: debug failing test
    AddTest("TestClientWritePlayerEvent", &AutoGenClientTests::TestClientWritePlayerEvent);
    AddTest("TestClientWriteTitleEvent", &AutoGenClientTests::TestClientWriteTitleEvent);
}

void AutoGenClientTests::ClassSetUp()
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

void AutoGenClientTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenClientTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

void AutoGenClientTests::TestClientAcceptTrade(TestContext& testContext)
{
    struct AcceptTradeResult : public XAsyncResult
    {
        PlayFabClientAcceptTradeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientAcceptTradeGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientAcceptTradeResponse( result );
            return ValidatePlayFabClientAcceptTradeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AcceptTradeResult>>(testContext);

    PlayFab::ClientModels::AcceptTradeRequest request;
    FillPlayFabClientAcceptTradeRequest( &request );
    LogPlayFabClientAcceptTradeRequest( &request, "TestClientAcceptTrade" );
    HRESULT hr = PlayFabClientAcceptTradeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientAcceptTradeAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientAddFriend(TestContext& testContext)
{
    struct AddFriendResult : public XAsyncResult
    {
        PlayFabClientAddFriendResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientAddFriendGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientAddFriendResult( &result );
            return ValidatePlayFabClientAddFriendResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AddFriendResult>>(testContext);

    PlayFab::ClientModels::AddFriendRequest request;
    FillPlayFabClientAddFriendRequest( &request );
    LogPlayFabClientAddFriendRequest( &request, "TestClientAddFriend" );
    HRESULT hr = PlayFabClientAddFriendAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientAddFriendAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientAddGenericID(TestContext& testContext)
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

    PlayFab::ClientModels::AddGenericIDRequest request;
    FillPlayFabClientAddGenericIDRequest( &request );
    LogPlayFabClientAddGenericIDRequest( &request, "TestClientAddGenericID" );
    HRESULT hr = PlayFabClientAddGenericIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientAddGenericIDAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientAddOrUpdateContactEmail(TestContext& testContext)
{
    struct AddOrUpdateContactEmailResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AddOrUpdateContactEmailResult>>(testContext);

    PlayFab::ClientModels::AddOrUpdateContactEmailRequest request;
    FillPlayFabClientAddOrUpdateContactEmailRequest( &request );
    LogPlayFabClientAddOrUpdateContactEmailRequest( &request, "TestClientAddOrUpdateContactEmail" );
    HRESULT hr = PlayFabClientAddOrUpdateContactEmailAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientAddOrUpdateContactEmailAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientAddSharedGroupMembers(TestContext& testContext)
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

    PlayFab::ClientModels::AddSharedGroupMembersRequest request;
    FillPlayFabClientAddSharedGroupMembersRequest( &request );
    LogPlayFabClientAddSharedGroupMembersRequest( &request, "TestClientAddSharedGroupMembers" );
    HRESULT hr = PlayFabClientAddSharedGroupMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientAddSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientAddUsernamePassword(TestContext& testContext)
{
    struct AddUsernamePasswordResult : public XAsyncResult
    {
        PlayFabClientAddUsernamePasswordResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientAddUsernamePasswordGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientAddUsernamePasswordGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientAddUsernamePasswordResult( result );
            return ValidatePlayFabClientAddUsernamePasswordResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AddUsernamePasswordResult>>(testContext);

    PlayFab::ClientModels::AddUsernamePasswordRequest request;
    FillPlayFabClientAddUsernamePasswordRequest( &request );
    LogPlayFabClientAddUsernamePasswordRequest( &request, "TestClientAddUsernamePassword" );
    HRESULT hr = PlayFabClientAddUsernamePasswordAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientAddUsernamePasswordAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientAddUserVirtualCurrency(TestContext& testContext)
{
    struct AddUserVirtualCurrencyResult : public XAsyncResult
    {
        PlayFabClientModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientAddUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientAddUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientModifyUserVirtualCurrencyResult( result );
            return ValidatePlayFabClientModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AddUserVirtualCurrencyResult>>(testContext);

    PlayFab::ClientModels::AddUserVirtualCurrencyRequest request;
    FillPlayFabClientAddUserVirtualCurrencyRequest( &request );
    LogPlayFabClientAddUserVirtualCurrencyRequest( &request, "TestClientAddUserVirtualCurrency" );
    HRESULT hr = PlayFabClientAddUserVirtualCurrencyAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientAddUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientAndroidDevicePushNotificationRegistration(TestContext& testContext)
{
    struct AndroidDevicePushNotificationRegistrationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AndroidDevicePushNotificationRegistrationResult>>(testContext);

    PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationRequest request;
    FillPlayFabClientAndroidDevicePushNotificationRegistrationRequest( &request );
    LogPlayFabClientAndroidDevicePushNotificationRegistrationRequest( &request, "TestClientAndroidDevicePushNotificationRegistration" );
    HRESULT hr = PlayFabClientAndroidDevicePushNotificationRegistrationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientAndroidDevicePushNotificationRegistrationAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientAttributeInstall(TestContext& testContext)
{
    struct AttributeInstallResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AttributeInstallResult>>(testContext);

    PlayFab::ClientModels::AttributeInstallRequest request;
    FillPlayFabClientAttributeInstallRequest( &request );
    LogPlayFabClientAttributeInstallRequest( &request, "TestClientAttributeInstall" );
    HRESULT hr = PlayFabClientAttributeInstallAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientAttributeInstallAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientCancelTrade(TestContext& testContext)
{
    struct CancelTradeResult : public XAsyncResult
    {
        PlayFabClientCancelTradeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientCancelTradeGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientCancelTradeResponse( result );
            return ValidatePlayFabClientCancelTradeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CancelTradeResult>>(testContext);

    PlayFab::ClientModels::CancelTradeRequest request;
    FillPlayFabClientCancelTradeRequest( &request );
    LogPlayFabClientCancelTradeRequest( &request, "TestClientCancelTrade" );
    HRESULT hr = PlayFabClientCancelTradeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientCancelTradeAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientConfirmPurchase(TestContext& testContext)
{
    struct ConfirmPurchaseResult : public XAsyncResult
    {
        PlayFabClientConfirmPurchaseResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientConfirmPurchaseGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientConfirmPurchaseResult( result );
            return ValidatePlayFabClientConfirmPurchaseResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ConfirmPurchaseResult>>(testContext);

    PlayFab::ClientModels::ConfirmPurchaseRequest request;
    FillPlayFabClientConfirmPurchaseRequest( &request );
    LogPlayFabClientConfirmPurchaseRequest( &request, "TestClientConfirmPurchase" );
    HRESULT hr = PlayFabClientConfirmPurchaseAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientConfirmPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientConsumeItem(TestContext& testContext)
{
    struct ConsumeItemResult : public XAsyncResult
    {
        PlayFabClientConsumeItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientConsumeItemGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientConsumeItemGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientConsumeItemResult( result );
            return ValidatePlayFabClientConsumeItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ConsumeItemResult>>(testContext);

    PlayFab::ClientModels::ConsumeItemRequest request;
    FillPlayFabClientConsumeItemRequest( &request );
    LogPlayFabClientConsumeItemRequest( &request, "TestClientConsumeItem" );
    HRESULT hr = PlayFabClientConsumeItemAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientConsumeItemAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientConsumeMicrosoftStoreEntitlements(TestContext& testContext)
{
    struct ConsumeMicrosoftStoreEntitlementsResult : public XAsyncResult
    {
        PlayFabClientConsumeMicrosoftStoreEntitlementsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientConsumeMicrosoftStoreEntitlementsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientConsumeMicrosoftStoreEntitlementsResponse( result );
            return ValidatePlayFabClientConsumeMicrosoftStoreEntitlementsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ConsumeMicrosoftStoreEntitlementsResult>>(testContext);

    PlayFab::ClientModels::ConsumeMicrosoftStoreEntitlementsRequest request;
    FillPlayFabClientConsumeMicrosoftStoreEntitlementsRequest( &request );
    LogPlayFabClientConsumeMicrosoftStoreEntitlementsRequest( &request, "TestClientConsumeMicrosoftStoreEntitlements" );
    HRESULT hr = PlayFabClientConsumeMicrosoftStoreEntitlementsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientConsumeMicrosoftStoreEntitlementsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientConsumePS5Entitlements(TestContext& testContext)
{
    struct ConsumePS5EntitlementsResult : public XAsyncResult
    {
        PlayFabClientConsumePS5EntitlementsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientConsumePS5EntitlementsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientConsumePS5EntitlementsResult( result );
            return ValidatePlayFabClientConsumePS5EntitlementsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ConsumePS5EntitlementsResult>>(testContext);

    PlayFab::ClientModels::ConsumePS5EntitlementsRequest request;
    FillPlayFabClientConsumePS5EntitlementsRequest( &request );
    LogPlayFabClientConsumePS5EntitlementsRequest( &request, "TestClientConsumePS5Entitlements" );
    HRESULT hr = PlayFabClientConsumePS5EntitlementsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientConsumePS5EntitlementsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientConsumePSNEntitlements(TestContext& testContext)
{
    struct ConsumePSNEntitlementsResult : public XAsyncResult
    {
        PlayFabClientConsumePSNEntitlementsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientConsumePSNEntitlementsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientConsumePSNEntitlementsResult( result );
            return ValidatePlayFabClientConsumePSNEntitlementsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ConsumePSNEntitlementsResult>>(testContext);

    PlayFab::ClientModels::ConsumePSNEntitlementsRequest request;
    FillPlayFabClientConsumePSNEntitlementsRequest( &request );
    LogPlayFabClientConsumePSNEntitlementsRequest( &request, "TestClientConsumePSNEntitlements" );
    HRESULT hr = PlayFabClientConsumePSNEntitlementsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientConsumePSNEntitlementsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientConsumeXboxEntitlements(TestContext& testContext)
{
    struct ConsumeXboxEntitlementsResult : public XAsyncResult
    {
        PlayFabClientConsumeXboxEntitlementsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientConsumeXboxEntitlementsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientConsumeXboxEntitlementsResult( result );
            return ValidatePlayFabClientConsumeXboxEntitlementsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ConsumeXboxEntitlementsResult>>(testContext);

    PlayFab::ClientModels::ConsumeXboxEntitlementsRequest request;
    FillPlayFabClientConsumeXboxEntitlementsRequest( &request );
    LogPlayFabClientConsumeXboxEntitlementsRequest( &request, "TestClientConsumeXboxEntitlements" );
    HRESULT hr = PlayFabClientConsumeXboxEntitlementsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientConsumeXboxEntitlementsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientCreateSharedGroup(TestContext& testContext)
{
    struct CreateSharedGroupResult : public XAsyncResult
    {
        PlayFabClientCreateSharedGroupResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientCreateSharedGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientCreateSharedGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientCreateSharedGroupResult( result );
            return ValidatePlayFabClientCreateSharedGroupResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateSharedGroupResult>>(testContext);

    PlayFab::ClientModels::CreateSharedGroupRequest request;
    FillPlayFabClientCreateSharedGroupRequest( &request );
    LogPlayFabClientCreateSharedGroupRequest( &request, "TestClientCreateSharedGroup" );
    HRESULT hr = PlayFabClientCreateSharedGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientCreateSharedGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientExecuteCloudScript(TestContext& testContext)
{
    struct ExecuteCloudScriptResult : public XAsyncResult
    {
        PlayFabClientExecuteCloudScriptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientExecuteCloudScriptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientExecuteCloudScriptResult( result );
            return ValidatePlayFabClientExecuteCloudScriptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ExecuteCloudScriptResult>>(testContext);

    PlayFab::ClientModels::ExecuteCloudScriptRequest request;
    FillPlayFabClientExecuteCloudScriptRequest( &request );
    LogPlayFabClientExecuteCloudScriptRequest( &request, "TestClientExecuteCloudScript" );
    HRESULT hr = PlayFabClientExecuteCloudScriptAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientExecuteCloudScriptAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetAccountInfo(TestContext& testContext)
{
    struct GetAccountInfoResult : public XAsyncResult
    {
        PlayFabClientGetAccountInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetAccountInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetAccountInfoResult( result );
            return ValidatePlayFabClientGetAccountInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetAccountInfoResult>>(testContext);

    PlayFab::ClientModels::GetAccountInfoRequest request;
    FillPlayFabClientGetAccountInfoRequest( &request );
    LogPlayFabClientGetAccountInfoRequest( &request, "TestClientGetAccountInfo" );
    HRESULT hr = PlayFabClientGetAccountInfoAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetAccountInfoAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetAdPlacements(TestContext& testContext)
{
    struct GetAdPlacementsResult : public XAsyncResult
    {
        PlayFabClientGetAdPlacementsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetAdPlacementsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetAdPlacementsResult( result );
            return ValidatePlayFabClientGetAdPlacementsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetAdPlacementsResult>>(testContext);

    PlayFab::ClientModels::GetAdPlacementsRequest request;
    FillPlayFabClientGetAdPlacementsRequest( &request );
    LogPlayFabClientGetAdPlacementsRequest( &request, "TestClientGetAdPlacements" );
    HRESULT hr = PlayFabClientGetAdPlacementsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetAdPlacementsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetAllUsersCharacters(TestContext& testContext)
{
    struct GetAllUsersCharactersResult : public XAsyncResult
    {
        PlayFabClientListUsersCharactersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetAllUsersCharactersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientListUsersCharactersResult( result );
            return ValidatePlayFabClientListUsersCharactersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetAllUsersCharactersResult>>(testContext);

    PlayFab::ClientModels::ListUsersCharactersRequest request;
    FillPlayFabClientListUsersCharactersRequest( &request );
    LogPlayFabClientListUsersCharactersRequest( &request, "TestClientGetAllUsersCharacters" );
    HRESULT hr = PlayFabClientGetAllUsersCharactersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetAllUsersCharactersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetCatalogItems(TestContext& testContext)
{
    struct GetCatalogItemsResult : public XAsyncResult
    {
        PlayFabClientGetCatalogItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetCatalogItemsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetCatalogItemsResult( result );
            return ValidatePlayFabClientGetCatalogItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCatalogItemsResult>>(testContext);

    PlayFab::ClientModels::GetCatalogItemsRequest request;
    FillPlayFabClientGetCatalogItemsRequest( &request );
    LogPlayFabClientGetCatalogItemsRequest( &request, "TestClientGetCatalogItems" );
    HRESULT hr = PlayFabClientGetCatalogItemsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetCharacterData(TestContext& testContext)
{
    struct GetCharacterDataResult : public XAsyncResult
    {
        PlayFabClientGetCharacterDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetCharacterDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetCharacterDataResult( result );
            return ValidatePlayFabClientGetCharacterDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterDataResult>>(testContext);

    PlayFab::ClientModels::GetCharacterDataRequest request;
    FillPlayFabClientGetCharacterDataRequest( &request );
    LogPlayFabClientGetCharacterDataRequest( &request, "TestClientGetCharacterData" );
    HRESULT hr = PlayFabClientGetCharacterDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetCharacterDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetCharacterInventory(TestContext& testContext)
{
    struct GetCharacterInventoryResult : public XAsyncResult
    {
        PlayFabClientGetCharacterInventoryResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetCharacterInventoryGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetCharacterInventoryResult( result );
            return ValidatePlayFabClientGetCharacterInventoryResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterInventoryResult>>(testContext);

    PlayFab::ClientModels::GetCharacterInventoryRequest request;
    FillPlayFabClientGetCharacterInventoryRequest( &request );
    LogPlayFabClientGetCharacterInventoryRequest( &request, "TestClientGetCharacterInventory" );
    HRESULT hr = PlayFabClientGetCharacterInventoryAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetCharacterInventoryAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetCharacterLeaderboard(TestContext& testContext)
{
    struct GetCharacterLeaderboardResult : public XAsyncResult
    {
        PlayFabClientGetCharacterLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetCharacterLeaderboardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetCharacterLeaderboardResult( result );
            return ValidatePlayFabClientGetCharacterLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterLeaderboardResult>>(testContext);

    PlayFab::ClientModels::GetCharacterLeaderboardRequest request;
    FillPlayFabClientGetCharacterLeaderboardRequest( &request );
    LogPlayFabClientGetCharacterLeaderboardRequest( &request, "TestClientGetCharacterLeaderboard" );
    HRESULT hr = PlayFabClientGetCharacterLeaderboardAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetCharacterLeaderboardAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetCharacterReadOnlyData(TestContext& testContext)
{
    struct GetCharacterReadOnlyDataResult : public XAsyncResult
    {
        PlayFabClientGetCharacterDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetCharacterReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetCharacterDataResult( result );
            return ValidatePlayFabClientGetCharacterDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterReadOnlyDataResult>>(testContext);

    PlayFab::ClientModels::GetCharacterDataRequest request;
    FillPlayFabClientGetCharacterDataRequest( &request );
    LogPlayFabClientGetCharacterDataRequest( &request, "TestClientGetCharacterReadOnlyData" );
    HRESULT hr = PlayFabClientGetCharacterReadOnlyDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetCharacterReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetCharacterStatistics(TestContext& testContext)
{
    struct GetCharacterStatisticsResult : public XAsyncResult
    {
        PlayFabClientGetCharacterStatisticsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetCharacterStatisticsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetCharacterStatisticsResult( result );
            return ValidatePlayFabClientGetCharacterStatisticsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCharacterStatisticsResult>>(testContext);

    PlayFab::ClientModels::GetCharacterStatisticsRequest request;
    FillPlayFabClientGetCharacterStatisticsRequest( &request );
    LogPlayFabClientGetCharacterStatisticsRequest( &request, "TestClientGetCharacterStatistics" );
    HRESULT hr = PlayFabClientGetCharacterStatisticsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetCharacterStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetContentDownloadUrl(TestContext& testContext)
{
    struct GetContentDownloadUrlResult : public XAsyncResult
    {
        PlayFabClientGetContentDownloadUrlResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientGetContentDownloadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientGetContentDownloadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetContentDownloadUrlResult( result );
            return ValidatePlayFabClientGetContentDownloadUrlResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetContentDownloadUrlResult>>(testContext);

    PlayFab::ClientModels::GetContentDownloadUrlRequest request;
    FillPlayFabClientGetContentDownloadUrlRequest( &request );
    LogPlayFabClientGetContentDownloadUrlRequest( &request, "TestClientGetContentDownloadUrl" );
    HRESULT hr = PlayFabClientGetContentDownloadUrlAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetContentDownloadUrlAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetCurrentGames(TestContext& testContext)
{
    struct GetCurrentGamesResult : public XAsyncResult
    {
        PlayFabClientCurrentGamesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetCurrentGamesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientCurrentGamesResult( result );
            return ValidatePlayFabClientCurrentGamesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetCurrentGamesResult>>(testContext);

    PlayFab::ClientModels::CurrentGamesRequest request;
    FillPlayFabClientCurrentGamesRequest( &request );
    LogPlayFabClientCurrentGamesRequest( &request, "TestClientGetCurrentGames" );
    HRESULT hr = PlayFabClientGetCurrentGamesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetCurrentGamesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetFriendLeaderboard(TestContext& testContext)
{
    struct GetFriendLeaderboardResult : public XAsyncResult
    {
        PlayFabClientGetLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetFriendLeaderboardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetLeaderboardResult( result );
            return ValidatePlayFabClientGetLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetFriendLeaderboardResult>>(testContext);

    PlayFab::ClientModels::GetFriendLeaderboardRequest request;
    FillPlayFabClientGetFriendLeaderboardRequest( &request );
    LogPlayFabClientGetFriendLeaderboardRequest( &request, "TestClientGetFriendLeaderboard" );
    HRESULT hr = PlayFabClientGetFriendLeaderboardAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetFriendLeaderboardAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetFriendLeaderboardAroundPlayer(TestContext& testContext)
{
    struct GetFriendLeaderboardAroundPlayerResult : public XAsyncResult
    {
        PlayFabClientGetFriendLeaderboardAroundPlayerResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetFriendLeaderboardAroundPlayerGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetFriendLeaderboardAroundPlayerResult( result );
            return ValidatePlayFabClientGetFriendLeaderboardAroundPlayerResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetFriendLeaderboardAroundPlayerResult>>(testContext);

    PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerRequest request;
    FillPlayFabClientGetFriendLeaderboardAroundPlayerRequest( &request );
    LogPlayFabClientGetFriendLeaderboardAroundPlayerRequest( &request, "TestClientGetFriendLeaderboardAroundPlayer" );
    HRESULT hr = PlayFabClientGetFriendLeaderboardAroundPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetFriendLeaderboardAroundPlayerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetFriendsList(TestContext& testContext)
{
    struct GetFriendsListResult : public XAsyncResult
    {
        PlayFabClientGetFriendsListResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetFriendsListGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetFriendsListResult( result );
            return ValidatePlayFabClientGetFriendsListResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetFriendsListResult>>(testContext);

    PlayFab::ClientModels::GetFriendsListRequest request;
    FillPlayFabClientGetFriendsListRequest( &request );
    LogPlayFabClientGetFriendsListRequest( &request, "TestClientGetFriendsList" );
    HRESULT hr = PlayFabClientGetFriendsListAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetFriendsListAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetGameServerRegions(TestContext& testContext)
{
    struct GetGameServerRegionsResult : public XAsyncResult
    {
        PlayFabClientGameServerRegionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetGameServerRegionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGameServerRegionsResult( result );
            return ValidatePlayFabClientGameServerRegionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGameServerRegionsResult>>(testContext);

    PlayFab::ClientModels::GameServerRegionsRequest request;
    FillPlayFabClientGameServerRegionsRequest( &request );
    LogPlayFabClientGameServerRegionsRequest( &request, "TestClientGetGameServerRegions" );
    HRESULT hr = PlayFabClientGetGameServerRegionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetGameServerRegionsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetLeaderboard(TestContext& testContext)
{
    struct GetLeaderboardResult : public XAsyncResult
    {
        PlayFabClientGetLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetLeaderboardGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetLeaderboardResult( result );
            return ValidatePlayFabClientGetLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLeaderboardResult>>(testContext);

    PlayFab::ClientModels::GetLeaderboardRequest request;
    FillPlayFabClientGetLeaderboardRequest( &request );
    LogPlayFabClientGetLeaderboardRequest( &request, "TestClientGetLeaderboard" );
    HRESULT hr = PlayFabClientGetLeaderboardAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetLeaderboardAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetLeaderboardAroundCharacter(TestContext& testContext)
{
    struct GetLeaderboardAroundCharacterResult : public XAsyncResult
    {
        PlayFabClientGetLeaderboardAroundCharacterResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetLeaderboardAroundCharacterGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetLeaderboardAroundCharacterResult( result );
            return ValidatePlayFabClientGetLeaderboardAroundCharacterResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLeaderboardAroundCharacterResult>>(testContext);

    PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest request;
    FillPlayFabClientGetLeaderboardAroundCharacterRequest( &request );
    LogPlayFabClientGetLeaderboardAroundCharacterRequest( &request, "TestClientGetLeaderboardAroundCharacter" );
    HRESULT hr = PlayFabClientGetLeaderboardAroundCharacterAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetLeaderboardAroundCharacterAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetLeaderboardAroundPlayer(TestContext& testContext)
{
    struct GetLeaderboardAroundPlayerResult : public XAsyncResult
    {
        PlayFabClientGetLeaderboardAroundPlayerResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetLeaderboardAroundPlayerGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetLeaderboardAroundPlayerResult( result );
            return ValidatePlayFabClientGetLeaderboardAroundPlayerResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLeaderboardAroundPlayerResult>>(testContext);

    PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest request;
    FillPlayFabClientGetLeaderboardAroundPlayerRequest( &request );
    LogPlayFabClientGetLeaderboardAroundPlayerRequest( &request, "TestClientGetLeaderboardAroundPlayer" );
    HRESULT hr = PlayFabClientGetLeaderboardAroundPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetLeaderboardAroundPlayerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetLeaderboardForUserCharacters(TestContext& testContext)
{
    struct GetLeaderboardForUserCharactersResult : public XAsyncResult
    {
        PlayFabClientGetLeaderboardForUsersCharactersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetLeaderboardForUserCharactersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetLeaderboardForUsersCharactersResult( result );
            return ValidatePlayFabClientGetLeaderboardForUsersCharactersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLeaderboardForUserCharactersResult>>(testContext);

    PlayFab::ClientModels::GetLeaderboardForUsersCharactersRequest request;
    FillPlayFabClientGetLeaderboardForUsersCharactersRequest( &request );
    LogPlayFabClientGetLeaderboardForUsersCharactersRequest( &request, "TestClientGetLeaderboardForUserCharacters" );
    HRESULT hr = PlayFabClientGetLeaderboardForUserCharactersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetLeaderboardForUserCharactersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPaymentToken(TestContext& testContext)
{
    struct GetPaymentTokenResult : public XAsyncResult
    {
        PlayFabClientGetPaymentTokenResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientGetPaymentTokenGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientGetPaymentTokenGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPaymentTokenResult( result );
            return ValidatePlayFabClientGetPaymentTokenResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPaymentTokenResult>>(testContext);

    PlayFab::ClientModels::GetPaymentTokenRequest request;
    FillPlayFabClientGetPaymentTokenRequest( &request );
    LogPlayFabClientGetPaymentTokenRequest( &request, "TestClientGetPaymentToken" );
    HRESULT hr = PlayFabClientGetPaymentTokenAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPaymentTokenAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPhotonAuthenticationToken(TestContext& testContext)
{
    struct GetPhotonAuthenticationTokenResult : public XAsyncResult
    {
        PlayFabClientGetPhotonAuthenticationTokenResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientGetPhotonAuthenticationTokenGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientGetPhotonAuthenticationTokenGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPhotonAuthenticationTokenResult( result );
            return ValidatePlayFabClientGetPhotonAuthenticationTokenResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPhotonAuthenticationTokenResult>>(testContext);

    PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest request;
    FillPlayFabClientGetPhotonAuthenticationTokenRequest( &request );
    LogPlayFabClientGetPhotonAuthenticationTokenRequest( &request, "TestClientGetPhotonAuthenticationToken" );
    HRESULT hr = PlayFabClientGetPhotonAuthenticationTokenAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPhotonAuthenticationTokenAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayerCombinedInfo(TestContext& testContext)
{
    struct GetPlayerCombinedInfoResult : public XAsyncResult
    {
        PlayFabClientGetPlayerCombinedInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayerCombinedInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayerCombinedInfoResult( result );
            return ValidatePlayFabClientGetPlayerCombinedInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerCombinedInfoResult>>(testContext);

    PlayFab::ClientModels::GetPlayerCombinedInfoRequest request;
    FillPlayFabClientGetPlayerCombinedInfoRequest( &request );
    LogPlayFabClientGetPlayerCombinedInfoRequest( &request, "TestClientGetPlayerCombinedInfo" );
    HRESULT hr = PlayFabClientGetPlayerCombinedInfoAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayerCombinedInfoAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayerProfile(TestContext& testContext)
{
    struct GetPlayerProfileResult : public XAsyncResult
    {
        PlayFabClientGetPlayerProfileResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayerProfileGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayerProfileResult( result );
            return ValidatePlayFabClientGetPlayerProfileResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerProfileResult>>(testContext);

    PlayFab::ClientModels::GetPlayerProfileRequest request;
    FillPlayFabClientGetPlayerProfileRequest( &request );
    LogPlayFabClientGetPlayerProfileRequest( &request, "TestClientGetPlayerProfile" );
    HRESULT hr = PlayFabClientGetPlayerProfileAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayerProfileAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayerSegments(TestContext& testContext)
{
    struct GetPlayerSegmentsResult : public XAsyncResult
    {
        PlayFabClientGetPlayerSegmentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayerSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayerSegmentsResult( result );
            return ValidatePlayFabClientGetPlayerSegmentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerSegmentsResult>>(testContext);

    HRESULT hr = PlayFabClientGetPlayerSegmentsAsync(entityHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayerSegmentsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayerStatistics(TestContext& testContext)
{
    struct GetPlayerStatisticsResult : public XAsyncResult
    {
        PlayFabClientGetPlayerStatisticsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayerStatisticsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayerStatisticsResult( result );
            return ValidatePlayFabClientGetPlayerStatisticsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerStatisticsResult>>(testContext);

    PlayFab::ClientModels::GetPlayerStatisticsRequest request;
    FillPlayFabClientGetPlayerStatisticsRequest( &request );
    LogPlayFabClientGetPlayerStatisticsRequest( &request, "TestClientGetPlayerStatistics" );
    HRESULT hr = PlayFabClientGetPlayerStatisticsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayerStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayerStatisticVersions(TestContext& testContext)
{
    struct GetPlayerStatisticVersionsResult : public XAsyncResult
    {
        PlayFabClientGetPlayerStatisticVersionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayerStatisticVersionsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayerStatisticVersionsResult( result );
            return ValidatePlayFabClientGetPlayerStatisticVersionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerStatisticVersionsResult>>(testContext);

    PlayFab::ClientModels::GetPlayerStatisticVersionsRequest request;
    FillPlayFabClientGetPlayerStatisticVersionsRequest( &request );
    LogPlayFabClientGetPlayerStatisticVersionsRequest( &request, "TestClientGetPlayerStatisticVersions" );
    HRESULT hr = PlayFabClientGetPlayerStatisticVersionsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayerStatisticVersionsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayerTags(TestContext& testContext)
{
    struct GetPlayerTagsResult : public XAsyncResult
    {
        PlayFabClientGetPlayerTagsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayerTagsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayerTagsResult( result );
            return ValidatePlayFabClientGetPlayerTagsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerTagsResult>>(testContext);

    PlayFab::ClientModels::GetPlayerTagsRequest request;
    FillPlayFabClientGetPlayerTagsRequest( &request );
    LogPlayFabClientGetPlayerTagsRequest( &request, "TestClientGetPlayerTags" );
    HRESULT hr = PlayFabClientGetPlayerTagsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayerTagsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayerTrades(TestContext& testContext)
{
    struct GetPlayerTradesResult : public XAsyncResult
    {
        PlayFabClientGetPlayerTradesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayerTradesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayerTradesResponse( result );
            return ValidatePlayFabClientGetPlayerTradesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayerTradesResult>>(testContext);

    PlayFab::ClientModels::GetPlayerTradesRequest request;
    FillPlayFabClientGetPlayerTradesRequest( &request );
    LogPlayFabClientGetPlayerTradesRequest( &request, "TestClientGetPlayerTrades" );
    HRESULT hr = PlayFabClientGetPlayerTradesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayerTradesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromFacebookIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromFacebookIDsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromFacebookIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromFacebookIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromFacebookIDsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromFacebookIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromFacebookIDsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest request;
    FillPlayFabClientGetPlayFabIDsFromFacebookIDsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromFacebookIDsRequest( &request, "TestClientGetPlayFabIDsFromFacebookIDs" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromFacebookIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromFacebookIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromFacebookInstantGamesIds(TestContext& testContext)
{
    struct GetPlayFabIDsFromFacebookInstantGamesIdsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromFacebookInstantGamesIdsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest request;
    FillPlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest( &request, "TestClientGetPlayFabIDsFromFacebookInstantGamesIds" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromGameCenterIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromGameCenterIDsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromGameCenterIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromGameCenterIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromGameCenterIDsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromGameCenterIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromGameCenterIDsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsRequest request;
    FillPlayFabClientGetPlayFabIDsFromGameCenterIDsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromGameCenterIDsRequest( &request, "TestClientGetPlayFabIDsFromGameCenterIDs" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromGameCenterIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromGameCenterIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromGenericIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromGenericIDsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromGenericIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromGenericIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromGenericIDsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromGenericIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromGenericIDsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest request;
    FillPlayFabClientGetPlayFabIDsFromGenericIDsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromGenericIDsRequest( &request, "TestClientGetPlayFabIDsFromGenericIDs" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromGenericIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromGenericIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromGoogleIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromGoogleIDsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromGoogleIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromGoogleIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromGoogleIDsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromGoogleIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromGoogleIDsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsRequest request;
    FillPlayFabClientGetPlayFabIDsFromGoogleIDsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromGoogleIDsRequest( &request, "TestClientGetPlayFabIDsFromGoogleIDs" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromGoogleIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromGoogleIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromKongregateIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromKongregateIDsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromKongregateIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromKongregateIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromKongregateIDsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromKongregateIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromKongregateIDsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsRequest request;
    FillPlayFabClientGetPlayFabIDsFromKongregateIDsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromKongregateIDsRequest( &request, "TestClientGetPlayFabIDsFromKongregateIDs" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromKongregateIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromKongregateIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromNintendoSwitchDeviceIds(TestContext& testContext)
{
    struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest request;
    FillPlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( &request, "TestClientGetPlayFabIDsFromNintendoSwitchDeviceIds" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromPSNAccountIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromPSNAccountIDsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromPSNAccountIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromPSNAccountIDsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromPSNAccountIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromPSNAccountIDsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest request;
    FillPlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest( &request, "TestClientGetPlayFabIDsFromPSNAccountIDs" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromPSNAccountIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromPSNAccountIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromSteamIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromSteamIDsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromSteamIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromSteamIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromSteamIDsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromSteamIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromSteamIDsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsRequest request;
    FillPlayFabClientGetPlayFabIDsFromSteamIDsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromSteamIDsRequest( &request, "TestClientGetPlayFabIDsFromSteamIDs" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromSteamIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromSteamIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromTwitchIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromTwitchIDsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromTwitchIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromTwitchIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromTwitchIDsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromTwitchIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromTwitchIDsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest request;
    FillPlayFabClientGetPlayFabIDsFromTwitchIDsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromTwitchIDsRequest( &request, "TestClientGetPlayFabIDsFromTwitchIDs" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromTwitchIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromTwitchIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPlayFabIDsFromXboxLiveIDs(TestContext& testContext)
{
    struct GetPlayFabIDsFromXboxLiveIDsResult : public XAsyncResult
    {
        PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPlayFabIDsFromXboxLiveIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPlayFabIDsFromXboxLiveIDsResult( result );
            return ValidatePlayFabClientGetPlayFabIDsFromXboxLiveIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPlayFabIDsFromXboxLiveIDsResult>>(testContext);

    PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest request;
    FillPlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest( &request );
    LogPlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest( &request, "TestClientGetPlayFabIDsFromXboxLiveIDs" );
    HRESULT hr = PlayFabClientGetPlayFabIDsFromXboxLiveIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPlayFabIDsFromXboxLiveIDsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPublisherData(TestContext& testContext)
{
    struct GetPublisherDataResult : public XAsyncResult
    {
        PlayFabClientGetPublisherDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetPublisherDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPublisherDataResult( result );
            return ValidatePlayFabClientGetPublisherDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPublisherDataResult>>(testContext);

    PlayFab::ClientModels::GetPublisherDataRequest request;
    FillPlayFabClientGetPublisherDataRequest( &request );
    LogPlayFabClientGetPublisherDataRequest( &request, "TestClientGetPublisherData" );
    HRESULT hr = PlayFabClientGetPublisherDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetPurchase(TestContext& testContext)
{
    struct GetPurchaseResult : public XAsyncResult
    {
        PlayFabClientGetPurchaseResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientGetPurchaseGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientGetPurchaseGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetPurchaseResult( result );
            return ValidatePlayFabClientGetPurchaseResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetPurchaseResult>>(testContext);

    PlayFab::ClientModels::GetPurchaseRequest request;
    FillPlayFabClientGetPurchaseRequest( &request );
    LogPlayFabClientGetPurchaseRequest( &request, "TestClientGetPurchase" );
    HRESULT hr = PlayFabClientGetPurchaseAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetSharedGroupData(TestContext& testContext)
{
    struct GetSharedGroupDataResult : public XAsyncResult
    {
        PlayFabClientGetSharedGroupDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetSharedGroupDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetSharedGroupDataResult( result );
            return ValidatePlayFabClientGetSharedGroupDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetSharedGroupDataResult>>(testContext);

    PlayFab::ClientModels::GetSharedGroupDataRequest request;
    FillPlayFabClientGetSharedGroupDataRequest( &request );
    LogPlayFabClientGetSharedGroupDataRequest( &request, "TestClientGetSharedGroupData" );
    HRESULT hr = PlayFabClientGetSharedGroupDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetStoreItems(TestContext& testContext)
{
    struct GetStoreItemsResult : public XAsyncResult
    {
        PlayFabClientGetStoreItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetStoreItemsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetStoreItemsResult( result );
            return ValidatePlayFabClientGetStoreItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetStoreItemsResult>>(testContext);

    PlayFab::ClientModels::GetStoreItemsRequest request;
    FillPlayFabClientGetStoreItemsRequest( &request );
    LogPlayFabClientGetStoreItemsRequest( &request, "TestClientGetStoreItems" );
    HRESULT hr = PlayFabClientGetStoreItemsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetStoreItemsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetTime(TestContext& testContext)
{
    struct GetTimeResult : public XAsyncResult
    {
        PlayFabClientGetTimeResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetTimeGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetTimeResult( &result );
            return ValidatePlayFabClientGetTimeResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTimeResult>>(testContext);

    HRESULT hr = PlayFabClientGetTimeAsync(entityHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetTimeAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetTitleData(TestContext& testContext)
{
    struct GetTitleDataResult : public XAsyncResult
    {
        PlayFabClientGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetTitleDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetTitleDataResult( result );
            return ValidatePlayFabClientGetTitleDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleDataResult>>(testContext);

    PlayFab::ClientModels::GetTitleDataRequest request;
    FillPlayFabClientGetTitleDataRequest( &request );
    LogPlayFabClientGetTitleDataRequest( &request, "TestClientGetTitleData" );
    HRESULT hr = PlayFabClientGetTitleDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetTitleDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetTitleNews(TestContext& testContext)
{
    struct GetTitleNewsResult : public XAsyncResult
    {
        PlayFabClientGetTitleNewsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetTitleNewsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetTitleNewsResult( result );
            return ValidatePlayFabClientGetTitleNewsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitleNewsResult>>(testContext);

    PlayFab::ClientModels::GetTitleNewsRequest request;
    FillPlayFabClientGetTitleNewsRequest( &request );
    LogPlayFabClientGetTitleNewsRequest( &request, "TestClientGetTitleNews" );
    HRESULT hr = PlayFabClientGetTitleNewsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetTitleNewsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetTitlePublicKey(TestContext& testContext)
{
    struct GetTitlePublicKeyResult : public XAsyncResult
    {
        PlayFabClientGetTitlePublicKeyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientGetTitlePublicKeyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientGetTitlePublicKeyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetTitlePublicKeyResult( result );
            return ValidatePlayFabClientGetTitlePublicKeyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitlePublicKeyResult>>(testContext);

    PlayFab::ClientModels::GetTitlePublicKeyRequest request;
    FillPlayFabClientGetTitlePublicKeyRequest( &request );
    LogPlayFabClientGetTitlePublicKeyRequest( &request, "TestClientGetTitlePublicKey" );
    HRESULT hr = PlayFabClientGetTitlePublicKeyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetTitlePublicKeyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetTradeStatus(TestContext& testContext)
{
    struct GetTradeStatusResult : public XAsyncResult
    {
        PlayFabClientGetTradeStatusResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetTradeStatusGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetTradeStatusResponse( result );
            return ValidatePlayFabClientGetTradeStatusResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTradeStatusResult>>(testContext);

    PlayFab::ClientModels::GetTradeStatusRequest request;
    FillPlayFabClientGetTradeStatusRequest( &request );
    LogPlayFabClientGetTradeStatusRequest( &request, "TestClientGetTradeStatus" );
    HRESULT hr = PlayFabClientGetTradeStatusAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetTradeStatusAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetUserData(TestContext& testContext)
{
    struct GetUserDataResult : public XAsyncResult
    {
        PlayFabClientGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetUserDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetUserDataResult( result );
            return ValidatePlayFabClientGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserDataResult>>(testContext);

    PlayFab::ClientModels::GetUserDataRequest request;
    FillPlayFabClientGetUserDataRequest( &request );
    LogPlayFabClientGetUserDataRequest( &request, "TestClientGetUserData" );
    HRESULT hr = PlayFabClientGetUserDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetUserDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetUserInventory(TestContext& testContext)
{
    struct GetUserInventoryResult : public XAsyncResult
    {
        PlayFabClientGetUserInventoryResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetUserInventoryGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetUserInventoryResult( result );
            return ValidatePlayFabClientGetUserInventoryResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserInventoryResult>>(testContext);

    PlayFab::ClientModels::GetUserInventoryRequest request;
    FillPlayFabClientGetUserInventoryRequest( &request );
    LogPlayFabClientGetUserInventoryRequest( &request, "TestClientGetUserInventory" );
    HRESULT hr = PlayFabClientGetUserInventoryAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetUserInventoryAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetUserPublisherData(TestContext& testContext)
{
    struct GetUserPublisherDataResult : public XAsyncResult
    {
        PlayFabClientGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetUserPublisherDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetUserDataResult( result );
            return ValidatePlayFabClientGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserPublisherDataResult>>(testContext);

    PlayFab::ClientModels::GetUserDataRequest request;
    FillPlayFabClientGetUserDataRequest( &request );
    LogPlayFabClientGetUserDataRequest( &request, "TestClientGetUserPublisherData" );
    HRESULT hr = PlayFabClientGetUserPublisherDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetUserPublisherReadOnlyData(TestContext& testContext)
{
    struct GetUserPublisherReadOnlyDataResult : public XAsyncResult
    {
        PlayFabClientGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetUserPublisherReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetUserDataResult( result );
            return ValidatePlayFabClientGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserPublisherReadOnlyDataResult>>(testContext);

    PlayFab::ClientModels::GetUserDataRequest request;
    FillPlayFabClientGetUserDataRequest( &request );
    LogPlayFabClientGetUserDataRequest( &request, "TestClientGetUserPublisherReadOnlyData" );
    HRESULT hr = PlayFabClientGetUserPublisherReadOnlyDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetUserPublisherReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGetUserReadOnlyData(TestContext& testContext)
{
    struct GetUserReadOnlyDataResult : public XAsyncResult
    {
        PlayFabClientGetUserDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientGetUserReadOnlyDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGetUserDataResult( result );
            return ValidatePlayFabClientGetUserDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetUserReadOnlyDataResult>>(testContext);

    PlayFab::ClientModels::GetUserDataRequest request;
    FillPlayFabClientGetUserDataRequest( &request );
    LogPlayFabClientGetUserDataRequest( &request, "TestClientGetUserReadOnlyData" );
    HRESULT hr = PlayFabClientGetUserReadOnlyDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGetUserReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientGrantCharacterToUser(TestContext& testContext)
{
    struct GrantCharacterToUserResult : public XAsyncResult
    {
        PlayFabClientGrantCharacterToUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientGrantCharacterToUserGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientGrantCharacterToUserGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientGrantCharacterToUserResult( result );
            return ValidatePlayFabClientGrantCharacterToUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GrantCharacterToUserResult>>(testContext);

    PlayFab::ClientModels::GrantCharacterToUserRequest request;
    FillPlayFabClientGrantCharacterToUserRequest( &request );
    LogPlayFabClientGrantCharacterToUserRequest( &request, "TestClientGrantCharacterToUser" );
    HRESULT hr = PlayFabClientGrantCharacterToUserAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientGrantCharacterToUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkAndroidDeviceID(TestContext& testContext)
{
    struct LinkAndroidDeviceIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkAndroidDeviceIDResult>>(testContext);

    PlayFab::ClientModels::LinkAndroidDeviceIDRequest request;
    FillPlayFabClientLinkAndroidDeviceIDRequest( &request );
    LogPlayFabClientLinkAndroidDeviceIDRequest( &request, "TestClientLinkAndroidDeviceID" );
    HRESULT hr = PlayFabClientLinkAndroidDeviceIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkAndroidDeviceIDAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkApple(TestContext& testContext)
{
    struct LinkAppleResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkAppleResult>>(testContext);

    PlayFab::ClientModels::LinkAppleRequest request;
    FillPlayFabClientLinkAppleRequest( &request );
    LogPlayFabClientLinkAppleRequest( &request, "TestClientLinkApple" );
    HRESULT hr = PlayFabClientLinkAppleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkAppleAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkCustomID(TestContext& testContext)
{
    struct LinkCustomIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkCustomIDResult>>(testContext);

    PlayFab::ClientModels::LinkCustomIDRequest request;
    FillPlayFabClientLinkCustomIDRequest( &request );
    LogPlayFabClientLinkCustomIDRequest( &request, "TestClientLinkCustomID" );
    HRESULT hr = PlayFabClientLinkCustomIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkCustomIDAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkFacebookAccount(TestContext& testContext)
{
    struct LinkFacebookAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkFacebookAccountResult>>(testContext);

    PlayFab::ClientModels::LinkFacebookAccountRequest request;
    FillPlayFabClientLinkFacebookAccountRequest( &request );
    LogPlayFabClientLinkFacebookAccountRequest( &request, "TestClientLinkFacebookAccount" );
    HRESULT hr = PlayFabClientLinkFacebookAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkFacebookAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkFacebookInstantGamesId(TestContext& testContext)
{
    struct LinkFacebookInstantGamesIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkFacebookInstantGamesIdResult>>(testContext);

    PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest request;
    FillPlayFabClientLinkFacebookInstantGamesIdRequest( &request );
    LogPlayFabClientLinkFacebookInstantGamesIdRequest( &request, "TestClientLinkFacebookInstantGamesId" );
    HRESULT hr = PlayFabClientLinkFacebookInstantGamesIdAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkFacebookInstantGamesIdAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkGameCenterAccount(TestContext& testContext)
{
    struct LinkGameCenterAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkGameCenterAccountResult>>(testContext);

    PlayFab::ClientModels::LinkGameCenterAccountRequest request;
    FillPlayFabClientLinkGameCenterAccountRequest( &request );
    LogPlayFabClientLinkGameCenterAccountRequest( &request, "TestClientLinkGameCenterAccount" );
    HRESULT hr = PlayFabClientLinkGameCenterAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkGameCenterAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkGoogleAccount(TestContext& testContext)
{
    struct LinkGoogleAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkGoogleAccountResult>>(testContext);

    PlayFab::ClientModels::LinkGoogleAccountRequest request;
    FillPlayFabClientLinkGoogleAccountRequest( &request );
    LogPlayFabClientLinkGoogleAccountRequest( &request, "TestClientLinkGoogleAccount" );
    HRESULT hr = PlayFabClientLinkGoogleAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkGoogleAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkIOSDeviceID(TestContext& testContext)
{
    struct LinkIOSDeviceIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkIOSDeviceIDResult>>(testContext);

    PlayFab::ClientModels::LinkIOSDeviceIDRequest request;
    FillPlayFabClientLinkIOSDeviceIDRequest( &request );
    LogPlayFabClientLinkIOSDeviceIDRequest( &request, "TestClientLinkIOSDeviceID" );
    HRESULT hr = PlayFabClientLinkIOSDeviceIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkIOSDeviceIDAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkKongregate(TestContext& testContext)
{
    struct LinkKongregateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkKongregateResult>>(testContext);

    PlayFab::ClientModels::LinkKongregateAccountRequest request;
    FillPlayFabClientLinkKongregateAccountRequest( &request );
    LogPlayFabClientLinkKongregateAccountRequest( &request, "TestClientLinkKongregate" );
    HRESULT hr = PlayFabClientLinkKongregateAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkKongregateAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkNintendoServiceAccount(TestContext& testContext)
{
    struct LinkNintendoServiceAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkNintendoServiceAccountResult>>(testContext);

    PlayFab::ClientModels::LinkNintendoServiceAccountRequest request;
    FillPlayFabClientLinkNintendoServiceAccountRequest( &request );
    LogPlayFabClientLinkNintendoServiceAccountRequest( &request, "TestClientLinkNintendoServiceAccount" );
    HRESULT hr = PlayFabClientLinkNintendoServiceAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkNintendoServiceAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkNintendoSwitchDeviceId(TestContext& testContext)
{
    struct LinkNintendoSwitchDeviceIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkNintendoSwitchDeviceIdResult>>(testContext);

    PlayFab::ClientModels::LinkNintendoSwitchDeviceIdRequest request;
    FillPlayFabClientLinkNintendoSwitchDeviceIdRequest( &request );
    LogPlayFabClientLinkNintendoSwitchDeviceIdRequest( &request, "TestClientLinkNintendoSwitchDeviceId" );
    HRESULT hr = PlayFabClientLinkNintendoSwitchDeviceIdAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkNintendoSwitchDeviceIdAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkOpenIdConnect(TestContext& testContext)
{
    struct LinkOpenIdConnectResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkOpenIdConnectResult>>(testContext);

    PlayFab::ClientModels::LinkOpenIdConnectRequest request;
    FillPlayFabClientLinkOpenIdConnectRequest( &request );
    LogPlayFabClientLinkOpenIdConnectRequest( &request, "TestClientLinkOpenIdConnect" );
    HRESULT hr = PlayFabClientLinkOpenIdConnectAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkOpenIdConnectAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkPSNAccount(TestContext& testContext)
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

    PlayFab::ClientModels::LinkPSNAccountRequest request;
    FillPlayFabClientLinkPSNAccountRequest( &request );
    LogPlayFabClientLinkPSNAccountRequest( &request, "TestClientLinkPSNAccount" );
    HRESULT hr = PlayFabClientLinkPSNAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkPSNAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkSteamAccount(TestContext& testContext)
{
    struct LinkSteamAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkSteamAccountResult>>(testContext);

    PlayFab::ClientModels::LinkSteamAccountRequest request;
    FillPlayFabClientLinkSteamAccountRequest( &request );
    LogPlayFabClientLinkSteamAccountRequest( &request, "TestClientLinkSteamAccount" );
    HRESULT hr = PlayFabClientLinkSteamAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkSteamAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkTwitch(TestContext& testContext)
{
    struct LinkTwitchResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<LinkTwitchResult>>(testContext);

    PlayFab::ClientModels::LinkTwitchAccountRequest request;
    FillPlayFabClientLinkTwitchAccountRequest( &request );
    LogPlayFabClientLinkTwitchAccountRequest( &request, "TestClientLinkTwitch" );
    HRESULT hr = PlayFabClientLinkTwitchAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkTwitchAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientLinkXboxAccount(TestContext& testContext)
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

    PlayFab::ClientModels::LinkXboxAccountRequest request;
    FillPlayFabClientLinkXboxAccountRequest( &request );
    LogPlayFabClientLinkXboxAccountRequest( &request, "TestClientLinkXboxAccount" );
    HRESULT hr = PlayFabClientLinkXboxAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientLinkXboxAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientMatchmake(TestContext& testContext)
{
    struct MatchmakeResult : public XAsyncResult
    {
        PlayFabClientMatchmakeResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientMatchmakeGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientMatchmakeResult( result );
            return ValidatePlayFabClientMatchmakeResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<MatchmakeResult>>(testContext);

    PlayFab::ClientModels::MatchmakeRequest request;
    FillPlayFabClientMatchmakeRequest( &request );
    LogPlayFabClientMatchmakeRequest( &request, "TestClientMatchmake" );
    HRESULT hr = PlayFabClientMatchmakeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientMatchmakeAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientOpenTrade(TestContext& testContext)
{
    struct OpenTradeResult : public XAsyncResult
    {
        PlayFabClientOpenTradeResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientOpenTradeGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientOpenTradeResponse( result );
            return ValidatePlayFabClientOpenTradeResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<OpenTradeResult>>(testContext);

    PlayFab::ClientModels::OpenTradeRequest request;
    FillPlayFabClientOpenTradeRequest( &request );
    LogPlayFabClientOpenTradeRequest( &request, "TestClientOpenTrade" );
    HRESULT hr = PlayFabClientOpenTradeAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientOpenTradeAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientPayForPurchase(TestContext& testContext)
{
    struct PayForPurchaseResult : public XAsyncResult
    {
        PlayFabClientPayForPurchaseResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientPayForPurchaseGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientPayForPurchaseResult( result );
            return ValidatePlayFabClientPayForPurchaseResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<PayForPurchaseResult>>(testContext);

    PlayFab::ClientModels::PayForPurchaseRequest request;
    FillPlayFabClientPayForPurchaseRequest( &request );
    LogPlayFabClientPayForPurchaseRequest( &request, "TestClientPayForPurchase" );
    HRESULT hr = PlayFabClientPayForPurchaseAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientPayForPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientPurchaseItem(TestContext& testContext)
{
    struct PurchaseItemResult : public XAsyncResult
    {
        PlayFabClientPurchaseItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientPurchaseItemGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientPurchaseItemResult( result );
            return ValidatePlayFabClientPurchaseItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<PurchaseItemResult>>(testContext);

    PlayFab::ClientModels::PurchaseItemRequest request;
    FillPlayFabClientPurchaseItemRequest( &request );
    LogPlayFabClientPurchaseItemRequest( &request, "TestClientPurchaseItem" );
    HRESULT hr = PlayFabClientPurchaseItemAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientPurchaseItemAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientRedeemCoupon(TestContext& testContext)
{
    struct RedeemCouponResult : public XAsyncResult
    {
        PlayFabClientRedeemCouponResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientRedeemCouponGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientRedeemCouponResult( result );
            return ValidatePlayFabClientRedeemCouponResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RedeemCouponResult>>(testContext);

    PlayFab::ClientModels::RedeemCouponRequest request;
    FillPlayFabClientRedeemCouponRequest( &request );
    LogPlayFabClientRedeemCouponRequest( &request, "TestClientRedeemCoupon" );
    HRESULT hr = PlayFabClientRedeemCouponAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientRedeemCouponAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientRefreshPSNAuthToken(TestContext& testContext)
{
    struct RefreshPSNAuthTokenResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RefreshPSNAuthTokenResult>>(testContext);

    PlayFab::ClientModels::RefreshPSNAuthTokenRequest request;
    FillPlayFabClientRefreshPSNAuthTokenRequest( &request );
    LogPlayFabClientRefreshPSNAuthTokenRequest( &request, "TestClientRefreshPSNAuthToken" );
    HRESULT hr = PlayFabClientRefreshPSNAuthTokenAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientRefreshPSNAuthTokenAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientRegisterForIOSPushNotification(TestContext& testContext)
{
    struct RegisterForIOSPushNotificationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RegisterForIOSPushNotificationResult>>(testContext);

    PlayFab::ClientModels::RegisterForIOSPushNotificationRequest request;
    FillPlayFabClientRegisterForIOSPushNotificationRequest( &request );
    LogPlayFabClientRegisterForIOSPushNotificationRequest( &request, "TestClientRegisterForIOSPushNotification" );
    HRESULT hr = PlayFabClientRegisterForIOSPushNotificationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientRegisterForIOSPushNotificationAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientRemoveContactEmail(TestContext& testContext)
{
    struct RemoveContactEmailResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveContactEmailResult>>(testContext);

    PlayFab::ClientModels::RemoveContactEmailRequest request;
    FillPlayFabClientRemoveContactEmailRequest( &request );
    LogPlayFabClientRemoveContactEmailRequest( &request, "TestClientRemoveContactEmail" );
    HRESULT hr = PlayFabClientRemoveContactEmailAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientRemoveContactEmailAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientRemoveFriend(TestContext& testContext)
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

    PlayFab::ClientModels::RemoveFriendRequest request;
    FillPlayFabClientRemoveFriendRequest( &request );
    LogPlayFabClientRemoveFriendRequest( &request, "TestClientRemoveFriend" );
    HRESULT hr = PlayFabClientRemoveFriendAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientRemoveFriendAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientRemoveGenericID(TestContext& testContext)
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

    PlayFab::ClientModels::RemoveGenericIDRequest request;
    FillPlayFabClientRemoveGenericIDRequest( &request );
    LogPlayFabClientRemoveGenericIDRequest( &request, "TestClientRemoveGenericID" );
    HRESULT hr = PlayFabClientRemoveGenericIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientRemoveGenericIDAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientRemoveSharedGroupMembers(TestContext& testContext)
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

    PlayFab::ClientModels::RemoveSharedGroupMembersRequest request;
    FillPlayFabClientRemoveSharedGroupMembersRequest( &request );
    LogPlayFabClientRemoveSharedGroupMembersRequest( &request, "TestClientRemoveSharedGroupMembers" );
    HRESULT hr = PlayFabClientRemoveSharedGroupMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientRemoveSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientReportAdActivity(TestContext& testContext)
{
    struct ReportAdActivityResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ReportAdActivityResult>>(testContext);

    PlayFab::ClientModels::ReportAdActivityRequest request;
    FillPlayFabClientReportAdActivityRequest( &request );
    LogPlayFabClientReportAdActivityRequest( &request, "TestClientReportAdActivity" );
    HRESULT hr = PlayFabClientReportAdActivityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientReportAdActivityAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientReportDeviceInfo(TestContext& testContext)
{
    struct ReportDeviceInfoResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ReportDeviceInfoResult>>(testContext);

    PlayFab::ClientModels::DeviceInfoRequest request;
    FillPlayFabClientDeviceInfoRequest( &request );
    LogPlayFabClientDeviceInfoRequest( &request, "TestClientReportDeviceInfo" );
    HRESULT hr = PlayFabClientReportDeviceInfoAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientReportDeviceInfoAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientReportPlayer(TestContext& testContext)
{
    struct ReportPlayerResult : public XAsyncResult
    {
        PlayFabClientReportPlayerClientResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientReportPlayerGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientReportPlayerClientResult( &result );
            return ValidatePlayFabClientReportPlayerClientResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ReportPlayerResult>>(testContext);

    PlayFab::ClientModels::ReportPlayerClientRequest request;
    FillPlayFabClientReportPlayerClientRequest( &request );
    LogPlayFabClientReportPlayerClientRequest( &request, "TestClientReportPlayer" );
    HRESULT hr = PlayFabClientReportPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientReportPlayerAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientRestoreIOSPurchases(TestContext& testContext)
{
    struct RestoreIOSPurchasesResult : public XAsyncResult
    {
        PlayFabClientRestoreIOSPurchasesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientRestoreIOSPurchasesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientRestoreIOSPurchasesResult( result );
            return ValidatePlayFabClientRestoreIOSPurchasesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RestoreIOSPurchasesResult>>(testContext);

    PlayFab::ClientModels::RestoreIOSPurchasesRequest request;
    FillPlayFabClientRestoreIOSPurchasesRequest( &request );
    LogPlayFabClientRestoreIOSPurchasesRequest( &request, "TestClientRestoreIOSPurchases" );
    HRESULT hr = PlayFabClientRestoreIOSPurchasesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientRestoreIOSPurchasesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientRewardAdActivity(TestContext& testContext)
{
    struct RewardAdActivityResult : public XAsyncResult
    {
        PlayFabClientRewardAdActivityResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientRewardAdActivityGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientRewardAdActivityResult( result );
            return ValidatePlayFabClientRewardAdActivityResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<RewardAdActivityResult>>(testContext);

    PlayFab::ClientModels::RewardAdActivityRequest request;
    FillPlayFabClientRewardAdActivityRequest( &request );
    LogPlayFabClientRewardAdActivityRequest( &request, "TestClientRewardAdActivity" );
    HRESULT hr = PlayFabClientRewardAdActivityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientRewardAdActivityAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientSendAccountRecoveryEmail(TestContext& testContext)
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

    PlayFab::ClientModels::SendAccountRecoveryEmailRequest request;
    FillPlayFabClientSendAccountRecoveryEmailRequest( &request );
    LogPlayFabClientSendAccountRecoveryEmailRequest( &request, "TestClientSendAccountRecoveryEmail" );
    HRESULT hr = PlayFabClientSendAccountRecoveryEmailAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientSendAccountRecoveryEmailAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientSetFriendTags(TestContext& testContext)
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

    PlayFab::ClientModels::SetFriendTagsRequest request;
    FillPlayFabClientSetFriendTagsRequest( &request );
    LogPlayFabClientSetFriendTagsRequest( &request, "TestClientSetFriendTags" );
    HRESULT hr = PlayFabClientSetFriendTagsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientSetFriendTagsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientSetPlayerSecret(TestContext& testContext)
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

    PlayFab::ClientModels::SetPlayerSecretRequest request;
    FillPlayFabClientSetPlayerSecretRequest( &request );
    LogPlayFabClientSetPlayerSecretRequest( &request, "TestClientSetPlayerSecret" );
    HRESULT hr = PlayFabClientSetPlayerSecretAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientSetPlayerSecretAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientStartGame(TestContext& testContext)
{
    struct StartGameResult : public XAsyncResult
    {
        PlayFabClientStartGameResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientStartGameGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientStartGameResult( result );
            return ValidatePlayFabClientStartGameResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<StartGameResult>>(testContext);

    PlayFab::ClientModels::StartGameRequest request;
    FillPlayFabClientStartGameRequest( &request );
    LogPlayFabClientStartGameRequest( &request, "TestClientStartGame" );
    HRESULT hr = PlayFabClientStartGameAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientStartGameAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientStartPurchase(TestContext& testContext)
{
    struct StartPurchaseResult : public XAsyncResult
    {
        PlayFabClientStartPurchaseResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientStartPurchaseGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientStartPurchaseResult( result );
            return ValidatePlayFabClientStartPurchaseResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<StartPurchaseResult>>(testContext);

    PlayFab::ClientModels::StartPurchaseRequest request;
    FillPlayFabClientStartPurchaseRequest( &request );
    LogPlayFabClientStartPurchaseRequest( &request, "TestClientStartPurchase" );
    HRESULT hr = PlayFabClientStartPurchaseAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientStartPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientSubtractUserVirtualCurrency(TestContext& testContext)
{
    struct SubtractUserVirtualCurrencyResult : public XAsyncResult
    {
        PlayFabClientModifyUserVirtualCurrencyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientSubtractUserVirtualCurrencyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientSubtractUserVirtualCurrencyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientModifyUserVirtualCurrencyResult( result );
            return ValidatePlayFabClientModifyUserVirtualCurrencyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SubtractUserVirtualCurrencyResult>>(testContext);

    PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest request;
    FillPlayFabClientSubtractUserVirtualCurrencyRequest( &request );
    LogPlayFabClientSubtractUserVirtualCurrencyRequest( &request, "TestClientSubtractUserVirtualCurrency" );
    HRESULT hr = PlayFabClientSubtractUserVirtualCurrencyAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientSubtractUserVirtualCurrencyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkAndroidDeviceID(TestContext& testContext)
{
    struct UnlinkAndroidDeviceIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkAndroidDeviceIDResult>>(testContext);

    PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest request;
    FillPlayFabClientUnlinkAndroidDeviceIDRequest( &request );
    LogPlayFabClientUnlinkAndroidDeviceIDRequest( &request, "TestClientUnlinkAndroidDeviceID" );
    HRESULT hr = PlayFabClientUnlinkAndroidDeviceIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkAndroidDeviceIDAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkApple(TestContext& testContext)
{
    struct UnlinkAppleResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkAppleResult>>(testContext);

    PlayFab::ClientModels::UnlinkAppleRequest request;
    FillPlayFabClientUnlinkAppleRequest( &request );
    LogPlayFabClientUnlinkAppleRequest( &request, "TestClientUnlinkApple" );
    HRESULT hr = PlayFabClientUnlinkAppleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkAppleAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkCustomID(TestContext& testContext)
{
    struct UnlinkCustomIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkCustomIDResult>>(testContext);

    PlayFab::ClientModels::UnlinkCustomIDRequest request;
    FillPlayFabClientUnlinkCustomIDRequest( &request );
    LogPlayFabClientUnlinkCustomIDRequest( &request, "TestClientUnlinkCustomID" );
    HRESULT hr = PlayFabClientUnlinkCustomIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkCustomIDAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkFacebookAccount(TestContext& testContext)
{
    struct UnlinkFacebookAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkFacebookAccountResult>>(testContext);

    PlayFab::ClientModels::UnlinkFacebookAccountRequest request;
    FillPlayFabClientUnlinkFacebookAccountRequest( &request );
    LogPlayFabClientUnlinkFacebookAccountRequest( &request, "TestClientUnlinkFacebookAccount" );
    HRESULT hr = PlayFabClientUnlinkFacebookAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkFacebookAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkFacebookInstantGamesId(TestContext& testContext)
{
    struct UnlinkFacebookInstantGamesIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkFacebookInstantGamesIdResult>>(testContext);

    PlayFab::ClientModels::UnlinkFacebookInstantGamesIdRequest request;
    FillPlayFabClientUnlinkFacebookInstantGamesIdRequest( &request );
    LogPlayFabClientUnlinkFacebookInstantGamesIdRequest( &request, "TestClientUnlinkFacebookInstantGamesId" );
    HRESULT hr = PlayFabClientUnlinkFacebookInstantGamesIdAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkFacebookInstantGamesIdAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkGameCenterAccount(TestContext& testContext)
{
    struct UnlinkGameCenterAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkGameCenterAccountResult>>(testContext);

    PlayFab::ClientModels::UnlinkGameCenterAccountRequest request;
    FillPlayFabClientUnlinkGameCenterAccountRequest( &request );
    LogPlayFabClientUnlinkGameCenterAccountRequest( &request, "TestClientUnlinkGameCenterAccount" );
    HRESULT hr = PlayFabClientUnlinkGameCenterAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkGameCenterAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkGoogleAccount(TestContext& testContext)
{
    struct UnlinkGoogleAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkGoogleAccountResult>>(testContext);

    PlayFab::ClientModels::UnlinkGoogleAccountRequest request;
    FillPlayFabClientUnlinkGoogleAccountRequest( &request );
    LogPlayFabClientUnlinkGoogleAccountRequest( &request, "TestClientUnlinkGoogleAccount" );
    HRESULT hr = PlayFabClientUnlinkGoogleAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkGoogleAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkIOSDeviceID(TestContext& testContext)
{
    struct UnlinkIOSDeviceIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkIOSDeviceIDResult>>(testContext);

    PlayFab::ClientModels::UnlinkIOSDeviceIDRequest request;
    FillPlayFabClientUnlinkIOSDeviceIDRequest( &request );
    LogPlayFabClientUnlinkIOSDeviceIDRequest( &request, "TestClientUnlinkIOSDeviceID" );
    HRESULT hr = PlayFabClientUnlinkIOSDeviceIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkIOSDeviceIDAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkKongregate(TestContext& testContext)
{
    struct UnlinkKongregateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkKongregateResult>>(testContext);

    PlayFab::ClientModels::UnlinkKongregateAccountRequest request;
    FillPlayFabClientUnlinkKongregateAccountRequest( &request );
    LogPlayFabClientUnlinkKongregateAccountRequest( &request, "TestClientUnlinkKongregate" );
    HRESULT hr = PlayFabClientUnlinkKongregateAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkKongregateAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkNintendoServiceAccount(TestContext& testContext)
{
    struct UnlinkNintendoServiceAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkNintendoServiceAccountResult>>(testContext);

    PlayFab::ClientModels::UnlinkNintendoServiceAccountRequest request;
    FillPlayFabClientUnlinkNintendoServiceAccountRequest( &request );
    LogPlayFabClientUnlinkNintendoServiceAccountRequest( &request, "TestClientUnlinkNintendoServiceAccount" );
    HRESULT hr = PlayFabClientUnlinkNintendoServiceAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkNintendoServiceAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkNintendoSwitchDeviceId(TestContext& testContext)
{
    struct UnlinkNintendoSwitchDeviceIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkNintendoSwitchDeviceIdResult>>(testContext);

    PlayFab::ClientModels::UnlinkNintendoSwitchDeviceIdRequest request;
    FillPlayFabClientUnlinkNintendoSwitchDeviceIdRequest( &request );
    LogPlayFabClientUnlinkNintendoSwitchDeviceIdRequest( &request, "TestClientUnlinkNintendoSwitchDeviceId" );
    HRESULT hr = PlayFabClientUnlinkNintendoSwitchDeviceIdAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkNintendoSwitchDeviceIdAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkOpenIdConnect(TestContext& testContext)
{
    struct UnlinkOpenIdConnectResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkOpenIdConnectResult>>(testContext);

    PlayFab::ClientModels::UnlinkOpenIdConnectRequest request;
    FillPlayFabClientUnlinkOpenIdConnectRequest( &request );
    LogPlayFabClientUnlinkOpenIdConnectRequest( &request, "TestClientUnlinkOpenIdConnect" );
    HRESULT hr = PlayFabClientUnlinkOpenIdConnectAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkOpenIdConnectAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkPSNAccount(TestContext& testContext)
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

    PlayFab::ClientModels::UnlinkPSNAccountRequest request;
    FillPlayFabClientUnlinkPSNAccountRequest( &request );
    LogPlayFabClientUnlinkPSNAccountRequest( &request, "TestClientUnlinkPSNAccount" );
    HRESULT hr = PlayFabClientUnlinkPSNAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkPSNAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkSteamAccount(TestContext& testContext)
{
    struct UnlinkSteamAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkSteamAccountResult>>(testContext);

    PlayFab::ClientModels::UnlinkSteamAccountRequest request;
    FillPlayFabClientUnlinkSteamAccountRequest( &request );
    LogPlayFabClientUnlinkSteamAccountRequest( &request, "TestClientUnlinkSteamAccount" );
    HRESULT hr = PlayFabClientUnlinkSteamAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkSteamAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkTwitch(TestContext& testContext)
{
    struct UnlinkTwitchResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnlinkTwitchResult>>(testContext);

    PlayFab::ClientModels::UnlinkTwitchAccountRequest request;
    FillPlayFabClientUnlinkTwitchAccountRequest( &request );
    LogPlayFabClientUnlinkTwitchAccountRequest( &request, "TestClientUnlinkTwitch" );
    HRESULT hr = PlayFabClientUnlinkTwitchAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkTwitchAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlinkXboxAccount(TestContext& testContext)
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

    PlayFab::ClientModels::UnlinkXboxAccountRequest request;
    FillPlayFabClientUnlinkXboxAccountRequest( &request );
    LogPlayFabClientUnlinkXboxAccountRequest( &request, "TestClientUnlinkXboxAccount" );
    HRESULT hr = PlayFabClientUnlinkXboxAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlinkXboxAccountAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlockContainerInstance(TestContext& testContext)
{
    struct UnlockContainerInstanceResult : public XAsyncResult
    {
        PlayFabClientUnlockContainerItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientUnlockContainerInstanceGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientUnlockContainerItemResult( result );
            return ValidatePlayFabClientUnlockContainerItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UnlockContainerInstanceResult>>(testContext);

    PlayFab::ClientModels::UnlockContainerInstanceRequest request;
    FillPlayFabClientUnlockContainerInstanceRequest( &request );
    LogPlayFabClientUnlockContainerInstanceRequest( &request, "TestClientUnlockContainerInstance" );
    HRESULT hr = PlayFabClientUnlockContainerInstanceAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlockContainerInstanceAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUnlockContainerItem(TestContext& testContext)
{
    struct UnlockContainerItemResult : public XAsyncResult
    {
        PlayFabClientUnlockContainerItemResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientUnlockContainerItemGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientUnlockContainerItemResult( result );
            return ValidatePlayFabClientUnlockContainerItemResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UnlockContainerItemResult>>(testContext);

    PlayFab::ClientModels::UnlockContainerItemRequest request;
    FillPlayFabClientUnlockContainerItemRequest( &request );
    LogPlayFabClientUnlockContainerItemRequest( &request, "TestClientUnlockContainerItem" );
    HRESULT hr = PlayFabClientUnlockContainerItemAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUnlockContainerItemAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUpdateAvatarUrl(TestContext& testContext)
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

    PlayFab::ClientModels::UpdateAvatarUrlRequest request;
    FillPlayFabClientUpdateAvatarUrlRequest( &request );
    LogPlayFabClientUpdateAvatarUrlRequest( &request, "TestClientUpdateAvatarUrl" );
    HRESULT hr = PlayFabClientUpdateAvatarUrlAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUpdateAvatarUrlAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUpdateCharacterData(TestContext& testContext)
{
    struct UpdateCharacterDataResult : public XAsyncResult
    {
        PlayFabClientUpdateCharacterDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientUpdateCharacterDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientUpdateCharacterDataResult( &result );
            return ValidatePlayFabClientUpdateCharacterDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateCharacterDataResult>>(testContext);

    PlayFab::ClientModels::UpdateCharacterDataRequest request;
    FillPlayFabClientUpdateCharacterDataRequest( &request );
    LogPlayFabClientUpdateCharacterDataRequest( &request, "TestClientUpdateCharacterData" );
    HRESULT hr = PlayFabClientUpdateCharacterDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUpdateCharacterDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUpdateCharacterStatistics(TestContext& testContext)
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

    PlayFab::ClientModels::UpdateCharacterStatisticsRequest request;
    FillPlayFabClientUpdateCharacterStatisticsRequest( &request );
    LogPlayFabClientUpdateCharacterStatisticsRequest( &request, "TestClientUpdateCharacterStatistics" );
    HRESULT hr = PlayFabClientUpdateCharacterStatisticsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUpdateCharacterStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUpdatePlayerStatistics(TestContext& testContext)
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

    PlayFab::ClientModels::UpdatePlayerStatisticsRequest request;
    FillPlayFabClientUpdatePlayerStatisticsRequest( &request );
    LogPlayFabClientUpdatePlayerStatisticsRequest( &request, "TestClientUpdatePlayerStatistics" );
    HRESULT hr = PlayFabClientUpdatePlayerStatisticsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUpdatePlayerStatisticsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUpdateSharedGroupData(TestContext& testContext)
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

    PlayFab::ClientModels::UpdateSharedGroupDataRequest request;
    FillPlayFabClientUpdateSharedGroupDataRequest( &request );
    LogPlayFabClientUpdateSharedGroupDataRequest( &request, "TestClientUpdateSharedGroupData" );
    HRESULT hr = PlayFabClientUpdateSharedGroupDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUpdateSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUpdateUserData(TestContext& testContext)
{
    struct UpdateUserDataResult : public XAsyncResult
    {
        PlayFabClientUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientUpdateUserDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientUpdateUserDataResult( &result );
            return ValidatePlayFabClientUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserDataResult>>(testContext);

    PlayFab::ClientModels::UpdateUserDataRequest request;
    FillPlayFabClientUpdateUserDataRequest( &request );
    LogPlayFabClientUpdateUserDataRequest( &request, "TestClientUpdateUserData" );
    HRESULT hr = PlayFabClientUpdateUserDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUpdateUserDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUpdateUserPublisherData(TestContext& testContext)
{
    struct UpdateUserPublisherDataResult : public XAsyncResult
    {
        PlayFabClientUpdateUserDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientUpdateUserPublisherDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientUpdateUserDataResult( &result );
            return ValidatePlayFabClientUpdateUserDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserPublisherDataResult>>(testContext);

    PlayFab::ClientModels::UpdateUserDataRequest request;
    FillPlayFabClientUpdateUserDataRequest( &request );
    LogPlayFabClientUpdateUserDataRequest( &request, "TestClientUpdateUserPublisherData" );
    HRESULT hr = PlayFabClientUpdateUserPublisherDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUpdateUserPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientUpdateUserTitleDisplayName(TestContext& testContext)
{
    struct UpdateUserTitleDisplayNameResult : public XAsyncResult
    {
        PlayFabClientUpdateUserTitleDisplayNameResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientUpdateUserTitleDisplayNameGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientUpdateUserTitleDisplayNameGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientUpdateUserTitleDisplayNameResult( result );
            return ValidatePlayFabClientUpdateUserTitleDisplayNameResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateUserTitleDisplayNameResult>>(testContext);

    PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest request;
    FillPlayFabClientUpdateUserTitleDisplayNameRequest( &request );
    LogPlayFabClientUpdateUserTitleDisplayNameRequest( &request, "TestClientUpdateUserTitleDisplayName" );
    HRESULT hr = PlayFabClientUpdateUserTitleDisplayNameAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientUpdateUserTitleDisplayNameAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientValidateAmazonIAPReceipt(TestContext& testContext)
{
    struct ValidateAmazonIAPReceiptResult : public XAsyncResult
    {
        PlayFabClientValidateAmazonReceiptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientValidateAmazonIAPReceiptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientValidateAmazonReceiptResult( result );
            return ValidatePlayFabClientValidateAmazonReceiptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ValidateAmazonIAPReceiptResult>>(testContext);

    PlayFab::ClientModels::ValidateAmazonReceiptRequest request;
    FillPlayFabClientValidateAmazonReceiptRequest( &request );
    LogPlayFabClientValidateAmazonReceiptRequest( &request, "TestClientValidateAmazonIAPReceipt" );
    HRESULT hr = PlayFabClientValidateAmazonIAPReceiptAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientValidateAmazonIAPReceiptAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientValidateGooglePlayPurchase(TestContext& testContext)
{
    struct ValidateGooglePlayPurchaseResult : public XAsyncResult
    {
        PlayFabClientValidateGooglePlayPurchaseResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientValidateGooglePlayPurchaseGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientValidateGooglePlayPurchaseResult( result );
            return ValidatePlayFabClientValidateGooglePlayPurchaseResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ValidateGooglePlayPurchaseResult>>(testContext);

    PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest request;
    FillPlayFabClientValidateGooglePlayPurchaseRequest( &request );
    LogPlayFabClientValidateGooglePlayPurchaseRequest( &request, "TestClientValidateGooglePlayPurchase" );
    HRESULT hr = PlayFabClientValidateGooglePlayPurchaseAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientValidateGooglePlayPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientValidateIOSReceipt(TestContext& testContext)
{
    struct ValidateIOSReceiptResult : public XAsyncResult
    {
        PlayFabClientValidateIOSReceiptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientValidateIOSReceiptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientValidateIOSReceiptResult( result );
            return ValidatePlayFabClientValidateIOSReceiptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ValidateIOSReceiptResult>>(testContext);

    PlayFab::ClientModels::ValidateIOSReceiptRequest request;
    FillPlayFabClientValidateIOSReceiptRequest( &request );
    LogPlayFabClientValidateIOSReceiptRequest( &request, "TestClientValidateIOSReceipt" );
    HRESULT hr = PlayFabClientValidateIOSReceiptAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientValidateIOSReceiptAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientValidateWindowsStoreReceipt(TestContext& testContext)
{
    struct ValidateWindowsStoreReceiptResult : public XAsyncResult
    {
        PlayFabClientValidateWindowsReceiptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabClientValidateWindowsStoreReceiptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientValidateWindowsReceiptResult( result );
            return ValidatePlayFabClientValidateWindowsReceiptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ValidateWindowsStoreReceiptResult>>(testContext);

    PlayFab::ClientModels::ValidateWindowsReceiptRequest request;
    FillPlayFabClientValidateWindowsReceiptRequest( &request );
    LogPlayFabClientValidateWindowsReceiptRequest( &request, "TestClientValidateWindowsStoreReceipt" );
    HRESULT hr = PlayFabClientValidateWindowsStoreReceiptAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientValidateWindowsStoreReceiptAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientWriteCharacterEvent(TestContext& testContext)
{
    struct WriteCharacterEventResult : public XAsyncResult
    {
        PlayFabClientWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientWriteCharacterEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientWriteCharacterEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientWriteEventResponse( result );
            return ValidatePlayFabClientWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<WriteCharacterEventResult>>(testContext);

    PlayFab::ClientModels::WriteClientCharacterEventRequest request;
    FillPlayFabClientWriteClientCharacterEventRequest( &request );
    LogPlayFabClientWriteClientCharacterEventRequest( &request, "TestClientWriteCharacterEvent" );
    HRESULT hr = PlayFabClientWriteCharacterEventAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientWriteCharacterEventAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientWritePlayerEvent(TestContext& testContext)
{
    struct WritePlayerEventResult : public XAsyncResult
    {
        PlayFabClientWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientWritePlayerEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientWritePlayerEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientWriteEventResponse( result );
            return ValidatePlayFabClientWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<WritePlayerEventResult>>(testContext);

    PlayFab::ClientModels::WriteClientPlayerEventRequest request;
    FillPlayFabClientWriteClientPlayerEventRequest( &request );
    LogPlayFabClientWriteClientPlayerEventRequest( &request, "TestClientWritePlayerEvent" );
    HRESULT hr = PlayFabClientWritePlayerEventAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientWritePlayerEventAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenClientTests::TestClientWriteTitleEvent(TestContext& testContext)
{
    struct WriteTitleEventResult : public XAsyncResult
    {
        PlayFabClientWriteEventResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabClientWriteTitleEventGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabClientWriteTitleEventGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabClientWriteEventResponse( result );
            return ValidatePlayFabClientWriteEventResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<WriteTitleEventResult>>(testContext);

    PlayFab::ClientModels::WriteTitleEventRequest request;
    FillPlayFabClientWriteTitleEventRequest( &request );
    LogPlayFabClientWriteTitleEventRequest( &request, "TestClientWriteTitleEvent" );
    HRESULT hr = PlayFabClientWriteTitleEventAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabClientWriteTitleEventAsync", hr);
        return;
    }
    async.release(); 
} 


}
