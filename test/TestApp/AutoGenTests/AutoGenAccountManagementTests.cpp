#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenAccountManagementTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenAccountManagementTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenAccountManagementTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenAccountManagementTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestAccountManagementAdminBanUsers", &AutoGenAccountManagementTests::TestAccountManagementAdminBanUsers);
    AddTest("TestAccountManagementAdminDeleteMasterPlayerAccount", &AutoGenAccountManagementTests::TestAccountManagementAdminDeleteMasterPlayerAccount);
    AddTest("TestAccountManagementAdminDeletePlayer", &AutoGenAccountManagementTests::TestAccountManagementAdminDeletePlayer);
    AddTest("TestAccountManagementAdminDeleteTitle", &AutoGenAccountManagementTests::TestAccountManagementAdminDeleteTitle);
    AddTest("TestAccountManagementAdminExportMasterPlayerData", &AutoGenAccountManagementTests::TestAccountManagementAdminExportMasterPlayerData);
    AddTest("TestAccountManagementAdminGetPlayedTitleList", &AutoGenAccountManagementTests::TestAccountManagementAdminGetPlayedTitleList);
    AddTest("TestAccountManagementAdminGetPlayerIdFromAuthToken", &AutoGenAccountManagementTests::TestAccountManagementAdminGetPlayerIdFromAuthToken);
    AddTest("TestAccountManagementAdminGetPlayerProfile", &AutoGenAccountManagementTests::TestAccountManagementAdminGetPlayerProfile);
    AddTest("TestAccountManagementAdminGetUserAccountInfo", &AutoGenAccountManagementTests::TestAccountManagementAdminGetUserAccountInfo);
    AddTest("TestAccountManagementAdminGetUserBans", &AutoGenAccountManagementTests::TestAccountManagementAdminGetUserBans);
    AddTest("TestAccountManagementAdminResetPassword", &AutoGenAccountManagementTests::TestAccountManagementAdminResetPassword);
    AddTest("TestAccountManagementAdminRevokeAllBansForUser", &AutoGenAccountManagementTests::TestAccountManagementAdminRevokeAllBansForUser);
    AddTest("TestAccountManagementAdminRevokeBans", &AutoGenAccountManagementTests::TestAccountManagementAdminRevokeBans);
    AddTest("TestAccountManagementAdminSendAccountRecoveryEmail", &AutoGenAccountManagementTests::TestAccountManagementAdminSendAccountRecoveryEmail);
    AddTest("TestAccountManagementAdminUpdateBans", &AutoGenAccountManagementTests::TestAccountManagementAdminUpdateBans);
    AddTest("TestAccountManagementAdminUpdateUserTitleDisplayName", &AutoGenAccountManagementTests::TestAccountManagementAdminUpdateUserTitleDisplayName);
    AddTest("TestAccountManagementClientAddGenericID", &AutoGenAccountManagementTests::TestAccountManagementClientAddGenericID);
    AddTest("TestAccountManagementClientAddOrUpdateContactEmail", &AutoGenAccountManagementTests::TestAccountManagementClientAddOrUpdateContactEmail);
    AddTest("TestAccountManagementClientAddUsernamePassword", &AutoGenAccountManagementTests::TestAccountManagementClientAddUsernamePassword);
    AddTest("TestAccountManagementClientGetAccountInfo", &AutoGenAccountManagementTests::TestAccountManagementClientGetAccountInfo);
    AddTest("TestAccountManagementClientGetPlayerCombinedInfo", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayerCombinedInfo);
    AddTest("TestAccountManagementClientGetPlayerProfile", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayerProfile);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromFacebookIDs", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromFacebookIDs);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromFacebookInstantGamesIds", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromFacebookInstantGamesIds);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromGameCenterIDs", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromGameCenterIDs);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromGenericIDs", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromGenericIDs);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromGoogleIDs", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromGoogleIDs);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromKongregateIDs", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromKongregateIDs);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromNintendoSwitchDeviceIds", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromNintendoSwitchDeviceIds);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromPSNAccountIDs", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromPSNAccountIDs);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromSteamIDs", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromSteamIDs);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromTwitchIDs", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromTwitchIDs);
    AddTest("TestAccountManagementClientGetPlayFabIDsFromXboxLiveIDs", &AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromXboxLiveIDs);
    AddTest("TestAccountManagementClientLinkAndroidDeviceID", &AutoGenAccountManagementTests::TestAccountManagementClientLinkAndroidDeviceID);
    AddTest("TestAccountManagementClientLinkApple", &AutoGenAccountManagementTests::TestAccountManagementClientLinkApple);
    AddTest("TestAccountManagementClientLinkCustomID", &AutoGenAccountManagementTests::TestAccountManagementClientLinkCustomID);
    AddTest("TestAccountManagementClientLinkFacebookAccount", &AutoGenAccountManagementTests::TestAccountManagementClientLinkFacebookAccount);
    AddTest("TestAccountManagementClientLinkFacebookInstantGamesId", &AutoGenAccountManagementTests::TestAccountManagementClientLinkFacebookInstantGamesId);
    AddTest("TestAccountManagementClientLinkGameCenterAccount", &AutoGenAccountManagementTests::TestAccountManagementClientLinkGameCenterAccount);
    AddTest("TestAccountManagementClientLinkGoogleAccount", &AutoGenAccountManagementTests::TestAccountManagementClientLinkGoogleAccount);
    AddTest("TestAccountManagementClientLinkIOSDeviceID", &AutoGenAccountManagementTests::TestAccountManagementClientLinkIOSDeviceID);
    AddTest("TestAccountManagementClientLinkKongregate", &AutoGenAccountManagementTests::TestAccountManagementClientLinkKongregate);
    AddTest("TestAccountManagementClientLinkNintendoServiceAccount", &AutoGenAccountManagementTests::TestAccountManagementClientLinkNintendoServiceAccount);
    AddTest("TestAccountManagementClientLinkNintendoSwitchDeviceId", &AutoGenAccountManagementTests::TestAccountManagementClientLinkNintendoSwitchDeviceId);
    AddTest("TestAccountManagementClientLinkOpenIdConnect", &AutoGenAccountManagementTests::TestAccountManagementClientLinkOpenIdConnect);
    AddTest("TestAccountManagementClientLinkPSNAccount", &AutoGenAccountManagementTests::TestAccountManagementClientLinkPSNAccount);
    AddTest("TestAccountManagementClientLinkSteamAccount", &AutoGenAccountManagementTests::TestAccountManagementClientLinkSteamAccount);
    AddTest("TestAccountManagementClientLinkTwitch", &AutoGenAccountManagementTests::TestAccountManagementClientLinkTwitch);
    AddTest("TestAccountManagementClientLinkXboxAccount", &AutoGenAccountManagementTests::TestAccountManagementClientLinkXboxAccount);
    AddTest("TestAccountManagementClientRemoveContactEmail", &AutoGenAccountManagementTests::TestAccountManagementClientRemoveContactEmail);
    AddTest("TestAccountManagementClientRemoveGenericID", &AutoGenAccountManagementTests::TestAccountManagementClientRemoveGenericID);
    AddTest("TestAccountManagementClientReportPlayer", &AutoGenAccountManagementTests::TestAccountManagementClientReportPlayer);
    AddTest("TestAccountManagementClientSendAccountRecoveryEmail", &AutoGenAccountManagementTests::TestAccountManagementClientSendAccountRecoveryEmail);
    AddTest("TestAccountManagementClientUnlinkAndroidDeviceID", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkAndroidDeviceID);
    AddTest("TestAccountManagementClientUnlinkApple", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkApple);
    AddTest("TestAccountManagementClientUnlinkCustomID", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkCustomID);
    AddTest("TestAccountManagementClientUnlinkFacebookAccount", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkFacebookAccount);
    AddTest("TestAccountManagementClientUnlinkFacebookInstantGamesId", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkFacebookInstantGamesId);
    AddTest("TestAccountManagementClientUnlinkGameCenterAccount", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkGameCenterAccount);
    AddTest("TestAccountManagementClientUnlinkGoogleAccount", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkGoogleAccount);
    AddTest("TestAccountManagementClientUnlinkIOSDeviceID", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkIOSDeviceID);
    AddTest("TestAccountManagementClientUnlinkKongregate", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkKongregate);
    AddTest("TestAccountManagementClientUnlinkNintendoServiceAccount", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkNintendoServiceAccount);
    AddTest("TestAccountManagementClientUnlinkNintendoSwitchDeviceId", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkNintendoSwitchDeviceId);
    AddTest("TestAccountManagementClientUnlinkOpenIdConnect", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkOpenIdConnect);
    AddTest("TestAccountManagementClientUnlinkPSNAccount", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkPSNAccount);
    AddTest("TestAccountManagementClientUnlinkSteamAccount", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkSteamAccount);
    AddTest("TestAccountManagementClientUnlinkTwitch", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkTwitch);
    AddTest("TestAccountManagementClientUnlinkXboxAccount", &AutoGenAccountManagementTests::TestAccountManagementClientUnlinkXboxAccount);
    AddTest("TestAccountManagementClientUpdateAvatarUrl", &AutoGenAccountManagementTests::TestAccountManagementClientUpdateAvatarUrl);
    AddTest("TestAccountManagementClientUpdateUserTitleDisplayName", &AutoGenAccountManagementTests::TestAccountManagementClientUpdateUserTitleDisplayName);
    AddTest("TestAccountManagementServerAddGenericID", &AutoGenAccountManagementTests::TestAccountManagementServerAddGenericID);
    AddTest("TestAccountManagementServerBanUsers", &AutoGenAccountManagementTests::TestAccountManagementServerBanUsers);
    AddTest("TestAccountManagementServerDeletePlayer", &AutoGenAccountManagementTests::TestAccountManagementServerDeletePlayer);
    AddTest("TestAccountManagementServerDeletePushNotificationTemplate", &AutoGenAccountManagementTests::TestAccountManagementServerDeletePushNotificationTemplate);
    AddTest("TestAccountManagementServerGetPlayerProfile", &AutoGenAccountManagementTests::TestAccountManagementServerGetPlayerProfile);
    AddTest("TestAccountManagementServerGetPlayFabIDsFromFacebookIDs", &AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromFacebookIDs);
    AddTest("TestAccountManagementServerGetPlayFabIDsFromFacebookInstantGamesIds", &AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromFacebookInstantGamesIds);
    AddTest("TestAccountManagementServerGetPlayFabIDsFromGenericIDs", &AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromGenericIDs);
    AddTest("TestAccountManagementServerGetPlayFabIDsFromNintendoSwitchDeviceIds", &AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromNintendoSwitchDeviceIds);
    AddTest("TestAccountManagementServerGetPlayFabIDsFromPSNAccountIDs", &AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromPSNAccountIDs);
    AddTest("TestAccountManagementServerGetPlayFabIDsFromSteamIDs", &AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromSteamIDs);
    AddTest("TestAccountManagementServerGetPlayFabIDsFromXboxLiveIDs", &AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromXboxLiveIDs);
    AddTest("TestAccountManagementServerGetServerCustomIDsFromPlayFabIDs", &AutoGenAccountManagementTests::TestAccountManagementServerGetServerCustomIDsFromPlayFabIDs);
    AddTest("TestAccountManagementServerGetUserAccountInfo", &AutoGenAccountManagementTests::TestAccountManagementServerGetUserAccountInfo);
    AddTest("TestAccountManagementServerGetUserBans", &AutoGenAccountManagementTests::TestAccountManagementServerGetUserBans);
    AddTest("TestAccountManagementServerLinkPSNAccount", &AutoGenAccountManagementTests::TestAccountManagementServerLinkPSNAccount);
    AddTest("TestAccountManagementServerLinkServerCustomId", &AutoGenAccountManagementTests::TestAccountManagementServerLinkServerCustomId);
    AddTest("TestAccountManagementServerLinkXboxAccount", &AutoGenAccountManagementTests::TestAccountManagementServerLinkXboxAccount);
    AddTest("TestAccountManagementServerRemoveGenericID", &AutoGenAccountManagementTests::TestAccountManagementServerRemoveGenericID);
    AddTest("TestAccountManagementServerRevokeAllBansForUser", &AutoGenAccountManagementTests::TestAccountManagementServerRevokeAllBansForUser);
    AddTest("TestAccountManagementServerRevokeBans", &AutoGenAccountManagementTests::TestAccountManagementServerRevokeBans);
    AddTest("TestAccountManagementServerSavePushNotificationTemplate", &AutoGenAccountManagementTests::TestAccountManagementServerSavePushNotificationTemplate);
    AddTest("TestAccountManagementServerSendCustomAccountRecoveryEmail", &AutoGenAccountManagementTests::TestAccountManagementServerSendCustomAccountRecoveryEmail);
    AddTest("TestAccountManagementServerSendEmailFromTemplate", &AutoGenAccountManagementTests::TestAccountManagementServerSendEmailFromTemplate);
    AddTest("TestAccountManagementServerSendPushNotification", &AutoGenAccountManagementTests::TestAccountManagementServerSendPushNotification);
    AddTest("TestAccountManagementServerSendPushNotificationFromTemplate", &AutoGenAccountManagementTests::TestAccountManagementServerSendPushNotificationFromTemplate);
    AddTest("TestAccountManagementServerUnlinkPSNAccount", &AutoGenAccountManagementTests::TestAccountManagementServerUnlinkPSNAccount);
    AddTest("TestAccountManagementServerUnlinkServerCustomId", &AutoGenAccountManagementTests::TestAccountManagementServerUnlinkServerCustomId);
    AddTest("TestAccountManagementServerUnlinkXboxAccount", &AutoGenAccountManagementTests::TestAccountManagementServerUnlinkXboxAccount);
    AddTest("TestAccountManagementServerUpdateAvatarUrl", &AutoGenAccountManagementTests::TestAccountManagementServerUpdateAvatarUrl);
    AddTest("TestAccountManagementServerUpdateBans", &AutoGenAccountManagementTests::TestAccountManagementServerUpdateBans);
    AddTest("TestAccountManagementGetGlobalPolicy", &AutoGenAccountManagementTests::TestAccountManagementGetGlobalPolicy);
    AddTest("TestAccountManagementGetProfile", &AutoGenAccountManagementTests::TestAccountManagementGetProfile);
    AddTest("TestAccountManagementGetProfiles", &AutoGenAccountManagementTests::TestAccountManagementGetProfiles);
    AddTest("TestAccountManagementGetTitlePlayersFromMasterPlayerAccountIds", &AutoGenAccountManagementTests::TestAccountManagementGetTitlePlayersFromMasterPlayerAccountIds);
    AddTest("TestAccountManagementSetGlobalPolicy", &AutoGenAccountManagementTests::TestAccountManagementSetGlobalPolicy);
    AddTest("TestAccountManagementSetProfileLanguage", &AutoGenAccountManagementTests::TestAccountManagementSetProfileLanguage);
    AddTest("TestAccountManagementSetProfilePolicy", &AutoGenAccountManagementTests::TestAccountManagementSetProfilePolicy);
}

void AutoGenAccountManagementTests::ClassSetUp()
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

void AutoGenAccountManagementTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenAccountManagementTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


void AutoGenAccountManagementTests::TestAccountManagementAdminBanUsers(TestContext& testContext)
{
    struct AdminBanUsersResult : public XAsyncResult
    {
        PFAccountManagementBanUsersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementAdminBanUsersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementBanUsersResult( result );
            return ValidatePFAccountManagementBanUsersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminBanUsersResult>>(testContext);

    PlayFab::AccountManagementModels::BanUsersRequest request;
    FillBanUsersRequest( &request );
    LogBanUsersRequest( &request, "TestAccountManagementAdminBanUsers" );
    HRESULT hr = PFAccountManagementAdminBanUsersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminBanUsersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminDeleteMasterPlayerAccount(TestContext& testContext)
{
    struct AdminDeleteMasterPlayerAccountResult : public XAsyncResult
    {
        PFAccountManagementDeleteMasterPlayerAccountResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementAdminDeleteMasterPlayerAccountGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementDeleteMasterPlayerAccountResult( result );
            return ValidatePFAccountManagementDeleteMasterPlayerAccountResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminDeleteMasterPlayerAccountResult>>(testContext);

    PlayFab::AccountManagementModels::DeleteMasterPlayerAccountRequest request;
    FillDeleteMasterPlayerAccountRequest( &request );
    LogDeleteMasterPlayerAccountRequest( &request, "TestAccountManagementAdminDeleteMasterPlayerAccount" );
    HRESULT hr = PFAccountManagementAdminDeleteMasterPlayerAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminDeleteMasterPlayerAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminDeletePlayer(TestContext& testContext)
{
    struct AdminDeletePlayerResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminDeletePlayerResult>>(testContext);

    PlayFab::AccountManagementModels::DeletePlayerRequest request;
    FillDeletePlayerRequest( &request );
    LogDeletePlayerRequest( &request, "TestAccountManagementAdminDeletePlayer" );
    HRESULT hr = PFAccountManagementAdminDeletePlayerAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminDeletePlayerAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminDeleteTitle(TestContext& testContext)
{
    struct AdminDeleteTitleResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminDeleteTitleResult>>(testContext);

    HRESULT hr = PFAccountManagementAdminDeleteTitleAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminDeleteTitleAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminExportMasterPlayerData(TestContext& testContext)
{
    struct AdminExportMasterPlayerDataResult : public XAsyncResult
    {
        PFAccountManagementExportMasterPlayerDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAccountManagementAdminExportMasterPlayerDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAccountManagementAdminExportMasterPlayerDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementExportMasterPlayerDataResult( result );
            return ValidatePFAccountManagementExportMasterPlayerDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminExportMasterPlayerDataResult>>(testContext);

    PlayFab::AccountManagementModels::ExportMasterPlayerDataRequest request;
    FillExportMasterPlayerDataRequest( &request );
    LogExportMasterPlayerDataRequest( &request, "TestAccountManagementAdminExportMasterPlayerData" );
    HRESULT hr = PFAccountManagementAdminExportMasterPlayerDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminExportMasterPlayerDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminGetPlayedTitleList(TestContext& testContext)
{
    struct AdminGetPlayedTitleListResult : public XAsyncResult
    {
        PFAccountManagementGetPlayedTitleListResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementAdminGetPlayedTitleListGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayedTitleListResult( result );
            return ValidatePFAccountManagementGetPlayedTitleListResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPlayedTitleListResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayedTitleListRequest request;
    FillGetPlayedTitleListRequest( &request );
    LogGetPlayedTitleListRequest( &request, "TestAccountManagementAdminGetPlayedTitleList" );
    HRESULT hr = PFAccountManagementAdminGetPlayedTitleListAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminGetPlayedTitleListAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminGetPlayerIdFromAuthToken(TestContext& testContext)
{
    struct AdminGetPlayerIdFromAuthTokenResult : public XAsyncResult
    {
        PFAccountManagementGetPlayerIdFromAuthTokenResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAccountManagementAdminGetPlayerIdFromAuthTokenGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAccountManagementAdminGetPlayerIdFromAuthTokenGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayerIdFromAuthTokenResult( result );
            return ValidatePFAccountManagementGetPlayerIdFromAuthTokenResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPlayerIdFromAuthTokenResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayerIdFromAuthTokenRequest request;
    FillGetPlayerIdFromAuthTokenRequest( &request );
    LogGetPlayerIdFromAuthTokenRequest( &request, "TestAccountManagementAdminGetPlayerIdFromAuthToken" );
    HRESULT hr = PFAccountManagementAdminGetPlayerIdFromAuthTokenAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminGetPlayerIdFromAuthTokenAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminGetPlayerProfile(TestContext& testContext)
{
    struct AdminGetPlayerProfileResult : public XAsyncResult
    {
        PFAccountManagementGetPlayerProfileResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementAdminGetPlayerProfileGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayerProfileResult( result );
            return ValidatePFAccountManagementGetPlayerProfileResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPlayerProfileResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayerProfileRequest request;
    FillGetPlayerProfileRequest( &request );
    LogGetPlayerProfileRequest( &request, "TestAccountManagementAdminGetPlayerProfile" );
    HRESULT hr = PFAccountManagementAdminGetPlayerProfileAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminGetPlayerProfileAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminGetUserAccountInfo(TestContext& testContext)
{
    struct AdminGetUserAccountInfoResult : public XAsyncResult
    {
        PFAccountManagementLookupUserAccountInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementAdminGetUserAccountInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementLookupUserAccountInfoResult( result );
            return ValidatePFAccountManagementLookupUserAccountInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetUserAccountInfoResult>>(testContext);

    PlayFab::AccountManagementModels::LookupUserAccountInfoRequest request;
    FillLookupUserAccountInfoRequest( &request );
    LogLookupUserAccountInfoRequest( &request, "TestAccountManagementAdminGetUserAccountInfo" );
    HRESULT hr = PFAccountManagementAdminGetUserAccountInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminGetUserAccountInfoAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminGetUserBans(TestContext& testContext)
{
    struct AdminGetUserBansResult : public XAsyncResult
    {
        PFAccountManagementGetUserBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementAdminGetUserBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetUserBansResult( result );
            return ValidatePFAccountManagementGetUserBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetUserBansResult>>(testContext);

    PlayFab::AccountManagementModels::GetUserBansRequest request;
    FillGetUserBansRequest( &request );
    LogGetUserBansRequest( &request, "TestAccountManagementAdminGetUserBans" );
    HRESULT hr = PFAccountManagementAdminGetUserBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminGetUserBansAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminResetPassword(TestContext& testContext)
{
    struct AdminResetPasswordResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminResetPasswordResult>>(testContext);

    PlayFab::AccountManagementModels::ResetPasswordRequest request;
    FillResetPasswordRequest( &request );
    LogResetPasswordRequest( &request, "TestAccountManagementAdminResetPassword" );
    HRESULT hr = PFAccountManagementAdminResetPasswordAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminResetPasswordAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminRevokeAllBansForUser(TestContext& testContext)
{
    struct AdminRevokeAllBansForUserResult : public XAsyncResult
    {
        PFAccountManagementRevokeAllBansForUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementAdminRevokeAllBansForUserGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementRevokeAllBansForUserResult( result );
            return ValidatePFAccountManagementRevokeAllBansForUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminRevokeAllBansForUserResult>>(testContext);

    PlayFab::AccountManagementModels::RevokeAllBansForUserRequest request;
    FillRevokeAllBansForUserRequest( &request );
    LogRevokeAllBansForUserRequest( &request, "TestAccountManagementAdminRevokeAllBansForUser" );
    HRESULT hr = PFAccountManagementAdminRevokeAllBansForUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminRevokeAllBansForUserAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminRevokeBans(TestContext& testContext)
{
    struct AdminRevokeBansResult : public XAsyncResult
    {
        PFAccountManagementRevokeBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementAdminRevokeBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementRevokeBansResult( result );
            return ValidatePFAccountManagementRevokeBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminRevokeBansResult>>(testContext);

    PlayFab::AccountManagementModels::RevokeBansRequest request;
    FillRevokeBansRequest( &request );
    LogRevokeBansRequest( &request, "TestAccountManagementAdminRevokeBans" );
    HRESULT hr = PFAccountManagementAdminRevokeBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminRevokeBansAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminSendAccountRecoveryEmail(TestContext& testContext)
{
    struct AdminSendAccountRecoveryEmailResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminSendAccountRecoveryEmailResult>>(testContext);

    PlayFab::AccountManagementModels::AdminSendAccountRecoveryEmailRequest request;
    FillAdminSendAccountRecoveryEmailRequest( &request );
    LogAdminSendAccountRecoveryEmailRequest( &request, "TestAccountManagementAdminSendAccountRecoveryEmail" );
    HRESULT hr = PFAccountManagementAdminSendAccountRecoveryEmailAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminSendAccountRecoveryEmailAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminUpdateBans(TestContext& testContext)
{
    struct AdminUpdateBansResult : public XAsyncResult
    {
        PFAccountManagementUpdateBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementAdminUpdateBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementUpdateBansResult( result );
            return ValidatePFAccountManagementUpdateBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdateBansResult>>(testContext);

    PlayFab::AccountManagementModels::UpdateBansRequest request;
    FillUpdateBansRequest( &request );
    LogUpdateBansRequest( &request, "TestAccountManagementAdminUpdateBans" );
    HRESULT hr = PFAccountManagementAdminUpdateBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminUpdateBansAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementAdminUpdateUserTitleDisplayName(TestContext& testContext)
{
    struct AdminUpdateUserTitleDisplayNameResult : public XAsyncResult
    {
        PFAccountManagementUpdateUserTitleDisplayNameResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAccountManagementAdminUpdateUserTitleDisplayNameGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAccountManagementAdminUpdateUserTitleDisplayNameGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementUpdateUserTitleDisplayNameResult( result );
            return ValidatePFAccountManagementUpdateUserTitleDisplayNameResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdateUserTitleDisplayNameResult>>(testContext);

    PlayFab::AccountManagementModels::AdminUpdateUserTitleDisplayNameRequest request;
    FillAdminUpdateUserTitleDisplayNameRequest( &request );
    LogAdminUpdateUserTitleDisplayNameRequest( &request, "TestAccountManagementAdminUpdateUserTitleDisplayName" );
    HRESULT hr = PFAccountManagementAdminUpdateUserTitleDisplayNameAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementAdminUpdateUserTitleDisplayNameAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientAddGenericID(TestContext& testContext)
{
    struct ClientAddGenericIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientAddGenericIDResult>>(testContext);

    PlayFab::AccountManagementModels::ClientAddGenericIDRequest request;
    FillClientAddGenericIDRequest( &request );
    LogClientAddGenericIDRequest( &request, "TestAccountManagementClientAddGenericID" );
    HRESULT hr = PFAccountManagementClientAddGenericIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientAddGenericIDAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientAddOrUpdateContactEmail(TestContext& testContext)
{
    struct ClientAddOrUpdateContactEmailResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientAddOrUpdateContactEmailResult>>(testContext);

    PlayFab::AccountManagementModels::AddOrUpdateContactEmailRequest request;
    FillAddOrUpdateContactEmailRequest( &request );
    LogAddOrUpdateContactEmailRequest( &request, "TestAccountManagementClientAddOrUpdateContactEmail" );
    HRESULT hr = PFAccountManagementClientAddOrUpdateContactEmailAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientAddOrUpdateContactEmailAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientAddUsernamePassword(TestContext& testContext)
{
    struct ClientAddUsernamePasswordResult : public XAsyncResult
    {
        PFAccountManagementAddUsernamePasswordResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAccountManagementClientAddUsernamePasswordGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAccountManagementClientAddUsernamePasswordGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementAddUsernamePasswordResult( result );
            return ValidatePFAccountManagementAddUsernamePasswordResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientAddUsernamePasswordResult>>(testContext);

    PlayFab::AccountManagementModels::AddUsernamePasswordRequest request;
    FillAddUsernamePasswordRequest( &request );
    LogAddUsernamePasswordRequest( &request, "TestAccountManagementClientAddUsernamePassword" );
    HRESULT hr = PFAccountManagementClientAddUsernamePasswordAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientAddUsernamePasswordAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetAccountInfo(TestContext& testContext)
{
    struct ClientGetAccountInfoResult : public XAsyncResult
    {
        PFAccountManagementGetAccountInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetAccountInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetAccountInfoResult( result );
            return ValidatePFAccountManagementGetAccountInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetAccountInfoResult>>(testContext);

    PlayFab::AccountManagementModels::GetAccountInfoRequest request;
    FillGetAccountInfoRequest( &request );
    LogGetAccountInfoRequest( &request, "TestAccountManagementClientGetAccountInfo" );
    HRESULT hr = PFAccountManagementClientGetAccountInfoAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetAccountInfoAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayerCombinedInfo(TestContext& testContext)
{
    struct ClientGetPlayerCombinedInfoResult : public XAsyncResult
    {
        PFGetPlayerCombinedInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayerCombinedInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGetPlayerCombinedInfoResult( result );
            return ValidatePFGetPlayerCombinedInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayerCombinedInfoResult>>(testContext);

    PlayFab::GetPlayerCombinedInfoRequest request;
    FillGetPlayerCombinedInfoRequest( &request );
    LogGetPlayerCombinedInfoRequest( &request, "TestAccountManagementClientGetPlayerCombinedInfo" );
    HRESULT hr = PFAccountManagementClientGetPlayerCombinedInfoAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayerCombinedInfoAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayerProfile(TestContext& testContext)
{
    struct ClientGetPlayerProfileResult : public XAsyncResult
    {
        PFAccountManagementGetPlayerProfileResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayerProfileGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayerProfileResult( result );
            return ValidatePFAccountManagementGetPlayerProfileResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayerProfileResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayerProfileRequest request;
    FillGetPlayerProfileRequest( &request );
    LogGetPlayerProfileRequest( &request, "TestAccountManagementClientGetPlayerProfile" );
    HRESULT hr = PFAccountManagementClientGetPlayerProfileAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayerProfileAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromFacebookIDs(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromFacebookIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromFacebookIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromFacebookIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromFacebookIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromFacebookIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromFacebookIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromFacebookIDsRequest request;
    FillGetPlayFabIDsFromFacebookIDsRequest( &request );
    LogGetPlayFabIDsFromFacebookIDsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromFacebookIDs" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromFacebookIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromFacebookIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromFacebookInstantGamesIds(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromFacebookInstantGamesIdsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest request;
    FillGetPlayFabIDsFromFacebookInstantGamesIdsRequest( &request );
    LogGetPlayFabIDsFromFacebookInstantGamesIdsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromFacebookInstantGamesIds" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromFacebookInstantGamesIdsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromFacebookInstantGamesIdsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromGameCenterIDs(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromGameCenterIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromGameCenterIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromGameCenterIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromGameCenterIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromGameCenterIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromGameCenterIDsRequest request;
    FillGetPlayFabIDsFromGameCenterIDsRequest( &request );
    LogGetPlayFabIDsFromGameCenterIDsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromGameCenterIDs" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromGameCenterIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromGameCenterIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromGenericIDs(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromGenericIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromGenericIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromGenericIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromGenericIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromGenericIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromGenericIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromGenericIDsRequest request;
    FillGetPlayFabIDsFromGenericIDsRequest( &request );
    LogGetPlayFabIDsFromGenericIDsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromGenericIDs" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromGenericIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromGenericIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromGoogleIDs(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromGoogleIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromGoogleIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromGoogleIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromGoogleIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromGoogleIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromGoogleIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromGoogleIDsRequest request;
    FillGetPlayFabIDsFromGoogleIDsRequest( &request );
    LogGetPlayFabIDsFromGoogleIDsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromGoogleIDs" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromGoogleIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromGoogleIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromKongregateIDs(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromKongregateIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromKongregateIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromKongregateIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromKongregateIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromKongregateIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromKongregateIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromKongregateIDsRequest request;
    FillGetPlayFabIDsFromKongregateIDsRequest( &request );
    LogGetPlayFabIDsFromKongregateIDsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromKongregateIDs" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromKongregateIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromKongregateIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromNintendoSwitchDeviceIds(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest request;
    FillGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( &request );
    LogGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromNintendoSwitchDeviceIds" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromPSNAccountIDs(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromPSNAccountIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromPSNAccountIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromPSNAccountIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromPSNAccountIDsRequest request;
    FillGetPlayFabIDsFromPSNAccountIDsRequest( &request );
    LogGetPlayFabIDsFromPSNAccountIDsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromPSNAccountIDs" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromPSNAccountIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromPSNAccountIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromSteamIDs(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromSteamIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromSteamIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromSteamIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromSteamIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromSteamIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromSteamIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromSteamIDsRequest request;
    FillGetPlayFabIDsFromSteamIDsRequest( &request );
    LogGetPlayFabIDsFromSteamIDsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromSteamIDs" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromSteamIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromSteamIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromTwitchIDs(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromTwitchIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromTwitchIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromTwitchIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromTwitchIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromTwitchIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromTwitchIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromTwitchIDsRequest request;
    FillGetPlayFabIDsFromTwitchIDsRequest( &request );
    LogGetPlayFabIDsFromTwitchIDsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromTwitchIDs" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromTwitchIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromTwitchIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientGetPlayFabIDsFromXboxLiveIDs(TestContext& testContext)
{
    struct ClientGetPlayFabIDsFromXboxLiveIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientGetPlayFabIDsFromXboxLiveIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayFabIDsFromXboxLiveIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromXboxLiveIDsRequest request;
    FillGetPlayFabIDsFromXboxLiveIDsRequest( &request );
    LogGetPlayFabIDsFromXboxLiveIDsRequest( &request, "TestAccountManagementClientGetPlayFabIDsFromXboxLiveIDs" );
    HRESULT hr = PFAccountManagementClientGetPlayFabIDsFromXboxLiveIDsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientGetPlayFabIDsFromXboxLiveIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkAndroidDeviceID(TestContext& testContext)
{
    struct ClientLinkAndroidDeviceIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkAndroidDeviceIDResult>>(testContext);

    PlayFab::AccountManagementModels::LinkAndroidDeviceIDRequest request;
    FillLinkAndroidDeviceIDRequest( &request );
    LogLinkAndroidDeviceIDRequest( &request, "TestAccountManagementClientLinkAndroidDeviceID" );
    HRESULT hr = PFAccountManagementClientLinkAndroidDeviceIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkAndroidDeviceIDAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkApple(TestContext& testContext)
{
    struct ClientLinkAppleResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkAppleResult>>(testContext);

    PlayFab::AccountManagementModels::LinkAppleRequest request;
    FillLinkAppleRequest( &request );
    LogLinkAppleRequest( &request, "TestAccountManagementClientLinkApple" );
    HRESULT hr = PFAccountManagementClientLinkAppleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkAppleAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkCustomID(TestContext& testContext)
{
    struct ClientLinkCustomIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkCustomIDResult>>(testContext);

    PlayFab::AccountManagementModels::LinkCustomIDRequest request;
    FillLinkCustomIDRequest( &request );
    LogLinkCustomIDRequest( &request, "TestAccountManagementClientLinkCustomID" );
    HRESULT hr = PFAccountManagementClientLinkCustomIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkCustomIDAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkFacebookAccount(TestContext& testContext)
{
    struct ClientLinkFacebookAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkFacebookAccountResult>>(testContext);

    PlayFab::AccountManagementModels::LinkFacebookAccountRequest request;
    FillLinkFacebookAccountRequest( &request );
    LogLinkFacebookAccountRequest( &request, "TestAccountManagementClientLinkFacebookAccount" );
    HRESULT hr = PFAccountManagementClientLinkFacebookAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkFacebookAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkFacebookInstantGamesId(TestContext& testContext)
{
    struct ClientLinkFacebookInstantGamesIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkFacebookInstantGamesIdResult>>(testContext);

    PlayFab::AccountManagementModels::LinkFacebookInstantGamesIdRequest request;
    FillLinkFacebookInstantGamesIdRequest( &request );
    LogLinkFacebookInstantGamesIdRequest( &request, "TestAccountManagementClientLinkFacebookInstantGamesId" );
    HRESULT hr = PFAccountManagementClientLinkFacebookInstantGamesIdAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkFacebookInstantGamesIdAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkGameCenterAccount(TestContext& testContext)
{
    struct ClientLinkGameCenterAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkGameCenterAccountResult>>(testContext);

    PlayFab::AccountManagementModels::LinkGameCenterAccountRequest request;
    FillLinkGameCenterAccountRequest( &request );
    LogLinkGameCenterAccountRequest( &request, "TestAccountManagementClientLinkGameCenterAccount" );
    HRESULT hr = PFAccountManagementClientLinkGameCenterAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkGameCenterAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkGoogleAccount(TestContext& testContext)
{
    struct ClientLinkGoogleAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkGoogleAccountResult>>(testContext);

    PlayFab::AccountManagementModels::LinkGoogleAccountRequest request;
    FillLinkGoogleAccountRequest( &request );
    LogLinkGoogleAccountRequest( &request, "TestAccountManagementClientLinkGoogleAccount" );
    HRESULT hr = PFAccountManagementClientLinkGoogleAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkGoogleAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkIOSDeviceID(TestContext& testContext)
{
    struct ClientLinkIOSDeviceIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkIOSDeviceIDResult>>(testContext);

    PlayFab::AccountManagementModels::LinkIOSDeviceIDRequest request;
    FillLinkIOSDeviceIDRequest( &request );
    LogLinkIOSDeviceIDRequest( &request, "TestAccountManagementClientLinkIOSDeviceID" );
    HRESULT hr = PFAccountManagementClientLinkIOSDeviceIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkIOSDeviceIDAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkKongregate(TestContext& testContext)
{
    struct ClientLinkKongregateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkKongregateResult>>(testContext);

    PlayFab::AccountManagementModels::LinkKongregateAccountRequest request;
    FillLinkKongregateAccountRequest( &request );
    LogLinkKongregateAccountRequest( &request, "TestAccountManagementClientLinkKongregate" );
    HRESULT hr = PFAccountManagementClientLinkKongregateAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkKongregateAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkNintendoServiceAccount(TestContext& testContext)
{
    struct ClientLinkNintendoServiceAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkNintendoServiceAccountResult>>(testContext);

    PlayFab::AccountManagementModels::LinkNintendoServiceAccountRequest request;
    FillLinkNintendoServiceAccountRequest( &request );
    LogLinkNintendoServiceAccountRequest( &request, "TestAccountManagementClientLinkNintendoServiceAccount" );
    HRESULT hr = PFAccountManagementClientLinkNintendoServiceAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkNintendoServiceAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkNintendoSwitchDeviceId(TestContext& testContext)
{
    struct ClientLinkNintendoSwitchDeviceIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkNintendoSwitchDeviceIdResult>>(testContext);

    PlayFab::AccountManagementModels::LinkNintendoSwitchDeviceIdRequest request;
    FillLinkNintendoSwitchDeviceIdRequest( &request );
    LogLinkNintendoSwitchDeviceIdRequest( &request, "TestAccountManagementClientLinkNintendoSwitchDeviceId" );
    HRESULT hr = PFAccountManagementClientLinkNintendoSwitchDeviceIdAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkNintendoSwitchDeviceIdAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkOpenIdConnect(TestContext& testContext)
{
    struct ClientLinkOpenIdConnectResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkOpenIdConnectResult>>(testContext);

    PlayFab::AccountManagementModels::LinkOpenIdConnectRequest request;
    FillLinkOpenIdConnectRequest( &request );
    LogLinkOpenIdConnectRequest( &request, "TestAccountManagementClientLinkOpenIdConnect" );
    HRESULT hr = PFAccountManagementClientLinkOpenIdConnectAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkOpenIdConnectAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkPSNAccount(TestContext& testContext)
{
    struct ClientLinkPSNAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkPSNAccountResult>>(testContext);

    PlayFab::AccountManagementModels::ClientLinkPSNAccountRequest request;
    FillClientLinkPSNAccountRequest( &request );
    LogClientLinkPSNAccountRequest( &request, "TestAccountManagementClientLinkPSNAccount" );
    HRESULT hr = PFAccountManagementClientLinkPSNAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkPSNAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkSteamAccount(TestContext& testContext)
{
    struct ClientLinkSteamAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkSteamAccountResult>>(testContext);

    PlayFab::AccountManagementModels::LinkSteamAccountRequest request;
    FillLinkSteamAccountRequest( &request );
    LogLinkSteamAccountRequest( &request, "TestAccountManagementClientLinkSteamAccount" );
    HRESULT hr = PFAccountManagementClientLinkSteamAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkSteamAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkTwitch(TestContext& testContext)
{
    struct ClientLinkTwitchResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkTwitchResult>>(testContext);

    PlayFab::AccountManagementModels::LinkTwitchAccountRequest request;
    FillLinkTwitchAccountRequest( &request );
    LogLinkTwitchAccountRequest( &request, "TestAccountManagementClientLinkTwitch" );
    HRESULT hr = PFAccountManagementClientLinkTwitchAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkTwitchAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientLinkXboxAccount(TestContext& testContext)
{
    struct ClientLinkXboxAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientLinkXboxAccountResult>>(testContext);

    PlayFab::AccountManagementModels::ClientLinkXboxAccountRequest request;
    FillClientLinkXboxAccountRequest( &request );
    LogClientLinkXboxAccountRequest( &request, "TestAccountManagementClientLinkXboxAccount" );
    HRESULT hr = PFAccountManagementClientLinkXboxAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientLinkXboxAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientRemoveContactEmail(TestContext& testContext)
{
    struct ClientRemoveContactEmailResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientRemoveContactEmailResult>>(testContext);

    PlayFab::AccountManagementModels::RemoveContactEmailRequest request;
    FillRemoveContactEmailRequest( &request );
    LogRemoveContactEmailRequest( &request, "TestAccountManagementClientRemoveContactEmail" );
    HRESULT hr = PFAccountManagementClientRemoveContactEmailAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientRemoveContactEmailAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientRemoveGenericID(TestContext& testContext)
{
    struct ClientRemoveGenericIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientRemoveGenericIDResult>>(testContext);

    PlayFab::AccountManagementModels::ClientRemoveGenericIDRequest request;
    FillClientRemoveGenericIDRequest( &request );
    LogClientRemoveGenericIDRequest( &request, "TestAccountManagementClientRemoveGenericID" );
    HRESULT hr = PFAccountManagementClientRemoveGenericIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientRemoveGenericIDAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientReportPlayer(TestContext& testContext)
{
    struct ClientReportPlayerResult : public XAsyncResult
    {
        PFAccountManagementReportPlayerClientResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementClientReportPlayerGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementReportPlayerClientResult( &result );
            return ValidatePFAccountManagementReportPlayerClientResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientReportPlayerResult>>(testContext);

    PlayFab::AccountManagementModels::ReportPlayerClientRequest request;
    FillReportPlayerClientRequest( &request );
    LogReportPlayerClientRequest( &request, "TestAccountManagementClientReportPlayer" );
    HRESULT hr = PFAccountManagementClientReportPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientReportPlayerAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientSendAccountRecoveryEmail(TestContext& testContext)
{
    struct ClientSendAccountRecoveryEmailResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientSendAccountRecoveryEmailResult>>(testContext);

    PlayFab::AccountManagementModels::ClientSendAccountRecoveryEmailRequest request;
    FillClientSendAccountRecoveryEmailRequest( &request );
    LogClientSendAccountRecoveryEmailRequest( &request, "TestAccountManagementClientSendAccountRecoveryEmail" );
    HRESULT hr = PFAccountManagementClientSendAccountRecoveryEmailAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientSendAccountRecoveryEmailAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkAndroidDeviceID(TestContext& testContext)
{
    struct ClientUnlinkAndroidDeviceIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkAndroidDeviceIDResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkAndroidDeviceIDRequest request;
    FillUnlinkAndroidDeviceIDRequest( &request );
    LogUnlinkAndroidDeviceIDRequest( &request, "TestAccountManagementClientUnlinkAndroidDeviceID" );
    HRESULT hr = PFAccountManagementClientUnlinkAndroidDeviceIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkAndroidDeviceIDAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkApple(TestContext& testContext)
{
    struct ClientUnlinkAppleResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkAppleResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkAppleRequest request;
    FillUnlinkAppleRequest( &request );
    LogUnlinkAppleRequest( &request, "TestAccountManagementClientUnlinkApple" );
    HRESULT hr = PFAccountManagementClientUnlinkAppleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkAppleAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkCustomID(TestContext& testContext)
{
    struct ClientUnlinkCustomIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkCustomIDResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkCustomIDRequest request;
    FillUnlinkCustomIDRequest( &request );
    LogUnlinkCustomIDRequest( &request, "TestAccountManagementClientUnlinkCustomID" );
    HRESULT hr = PFAccountManagementClientUnlinkCustomIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkCustomIDAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkFacebookAccount(TestContext& testContext)
{
    struct ClientUnlinkFacebookAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkFacebookAccountResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkFacebookAccountRequest request;
    FillUnlinkFacebookAccountRequest( &request );
    LogUnlinkFacebookAccountRequest( &request, "TestAccountManagementClientUnlinkFacebookAccount" );
    HRESULT hr = PFAccountManagementClientUnlinkFacebookAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkFacebookAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkFacebookInstantGamesId(TestContext& testContext)
{
    struct ClientUnlinkFacebookInstantGamesIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkFacebookInstantGamesIdResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkFacebookInstantGamesIdRequest request;
    FillUnlinkFacebookInstantGamesIdRequest( &request );
    LogUnlinkFacebookInstantGamesIdRequest( &request, "TestAccountManagementClientUnlinkFacebookInstantGamesId" );
    HRESULT hr = PFAccountManagementClientUnlinkFacebookInstantGamesIdAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkFacebookInstantGamesIdAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkGameCenterAccount(TestContext& testContext)
{
    struct ClientUnlinkGameCenterAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkGameCenterAccountResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkGameCenterAccountRequest request;
    FillUnlinkGameCenterAccountRequest( &request );
    LogUnlinkGameCenterAccountRequest( &request, "TestAccountManagementClientUnlinkGameCenterAccount" );
    HRESULT hr = PFAccountManagementClientUnlinkGameCenterAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkGameCenterAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkGoogleAccount(TestContext& testContext)
{
    struct ClientUnlinkGoogleAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkGoogleAccountResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkGoogleAccountRequest request;
    FillUnlinkGoogleAccountRequest( &request );
    LogUnlinkGoogleAccountRequest( &request, "TestAccountManagementClientUnlinkGoogleAccount" );
    HRESULT hr = PFAccountManagementClientUnlinkGoogleAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkGoogleAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkIOSDeviceID(TestContext& testContext)
{
    struct ClientUnlinkIOSDeviceIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkIOSDeviceIDResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkIOSDeviceIDRequest request;
    FillUnlinkIOSDeviceIDRequest( &request );
    LogUnlinkIOSDeviceIDRequest( &request, "TestAccountManagementClientUnlinkIOSDeviceID" );
    HRESULT hr = PFAccountManagementClientUnlinkIOSDeviceIDAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkIOSDeviceIDAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkKongregate(TestContext& testContext)
{
    struct ClientUnlinkKongregateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkKongregateResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkKongregateAccountRequest request;
    FillUnlinkKongregateAccountRequest( &request );
    LogUnlinkKongregateAccountRequest( &request, "TestAccountManagementClientUnlinkKongregate" );
    HRESULT hr = PFAccountManagementClientUnlinkKongregateAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkKongregateAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkNintendoServiceAccount(TestContext& testContext)
{
    struct ClientUnlinkNintendoServiceAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkNintendoServiceAccountResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkNintendoServiceAccountRequest request;
    FillUnlinkNintendoServiceAccountRequest( &request );
    LogUnlinkNintendoServiceAccountRequest( &request, "TestAccountManagementClientUnlinkNintendoServiceAccount" );
    HRESULT hr = PFAccountManagementClientUnlinkNintendoServiceAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkNintendoServiceAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkNintendoSwitchDeviceId(TestContext& testContext)
{
    struct ClientUnlinkNintendoSwitchDeviceIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkNintendoSwitchDeviceIdResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkNintendoSwitchDeviceIdRequest request;
    FillUnlinkNintendoSwitchDeviceIdRequest( &request );
    LogUnlinkNintendoSwitchDeviceIdRequest( &request, "TestAccountManagementClientUnlinkNintendoSwitchDeviceId" );
    HRESULT hr = PFAccountManagementClientUnlinkNintendoSwitchDeviceIdAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkNintendoSwitchDeviceIdAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkOpenIdConnect(TestContext& testContext)
{
    struct ClientUnlinkOpenIdConnectResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkOpenIdConnectResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkOpenIdConnectRequest request;
    FillUnlinkOpenIdConnectRequest( &request );
    LogUnlinkOpenIdConnectRequest( &request, "TestAccountManagementClientUnlinkOpenIdConnect" );
    HRESULT hr = PFAccountManagementClientUnlinkOpenIdConnectAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkOpenIdConnectAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkPSNAccount(TestContext& testContext)
{
    struct ClientUnlinkPSNAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkPSNAccountResult>>(testContext);

    PlayFab::AccountManagementModels::ClientUnlinkPSNAccountRequest request;
    FillClientUnlinkPSNAccountRequest( &request );
    LogClientUnlinkPSNAccountRequest( &request, "TestAccountManagementClientUnlinkPSNAccount" );
    HRESULT hr = PFAccountManagementClientUnlinkPSNAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkPSNAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkSteamAccount(TestContext& testContext)
{
    struct ClientUnlinkSteamAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkSteamAccountResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkSteamAccountRequest request;
    FillUnlinkSteamAccountRequest( &request );
    LogUnlinkSteamAccountRequest( &request, "TestAccountManagementClientUnlinkSteamAccount" );
    HRESULT hr = PFAccountManagementClientUnlinkSteamAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkSteamAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkTwitch(TestContext& testContext)
{
    struct ClientUnlinkTwitchResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkTwitchResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkTwitchAccountRequest request;
    FillUnlinkTwitchAccountRequest( &request );
    LogUnlinkTwitchAccountRequest( &request, "TestAccountManagementClientUnlinkTwitch" );
    HRESULT hr = PFAccountManagementClientUnlinkTwitchAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkTwitchAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUnlinkXboxAccount(TestContext& testContext)
{
    struct ClientUnlinkXboxAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUnlinkXboxAccountResult>>(testContext);

    PlayFab::AccountManagementModels::ClientUnlinkXboxAccountRequest request;
    FillClientUnlinkXboxAccountRequest( &request );
    LogClientUnlinkXboxAccountRequest( &request, "TestAccountManagementClientUnlinkXboxAccount" );
    HRESULT hr = PFAccountManagementClientUnlinkXboxAccountAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUnlinkXboxAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUpdateAvatarUrl(TestContext& testContext)
{
    struct ClientUpdateAvatarUrlResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUpdateAvatarUrlResult>>(testContext);

    PlayFab::AccountManagementModels::ClientUpdateAvatarUrlRequest request;
    FillClientUpdateAvatarUrlRequest( &request );
    LogClientUpdateAvatarUrlRequest( &request, "TestAccountManagementClientUpdateAvatarUrl" );
    HRESULT hr = PFAccountManagementClientUpdateAvatarUrlAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUpdateAvatarUrlAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementClientUpdateUserTitleDisplayName(TestContext& testContext)
{
    struct ClientUpdateUserTitleDisplayNameResult : public XAsyncResult
    {
        PFAccountManagementUpdateUserTitleDisplayNameResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAccountManagementClientUpdateUserTitleDisplayNameGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAccountManagementClientUpdateUserTitleDisplayNameGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementUpdateUserTitleDisplayNameResult( result );
            return ValidatePFAccountManagementUpdateUserTitleDisplayNameResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientUpdateUserTitleDisplayNameResult>>(testContext);

    PlayFab::AccountManagementModels::ClientUpdateUserTitleDisplayNameRequest request;
    FillClientUpdateUserTitleDisplayNameRequest( &request );
    LogClientUpdateUserTitleDisplayNameRequest( &request, "TestAccountManagementClientUpdateUserTitleDisplayName" );
    HRESULT hr = PFAccountManagementClientUpdateUserTitleDisplayNameAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementClientUpdateUserTitleDisplayNameAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerAddGenericID(TestContext& testContext)
{
    struct ServerAddGenericIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerAddGenericIDResult>>(testContext);

    PlayFab::AccountManagementModels::ServerAddGenericIDRequest request;
    FillServerAddGenericIDRequest( &request );
    LogServerAddGenericIDRequest( &request, "TestAccountManagementServerAddGenericID" );
    HRESULT hr = PFAccountManagementServerAddGenericIDAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerAddGenericIDAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerBanUsers(TestContext& testContext)
{
    struct ServerBanUsersResult : public XAsyncResult
    {
        PFAccountManagementBanUsersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerBanUsersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementBanUsersResult( result );
            return ValidatePFAccountManagementBanUsersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerBanUsersResult>>(testContext);

    PlayFab::AccountManagementModels::BanUsersRequest request;
    FillBanUsersRequest( &request );
    LogBanUsersRequest( &request, "TestAccountManagementServerBanUsers" );
    HRESULT hr = PFAccountManagementServerBanUsersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerBanUsersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerDeletePlayer(TestContext& testContext)
{
    struct ServerDeletePlayerResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerDeletePlayerResult>>(testContext);

    PlayFab::AccountManagementModels::DeletePlayerRequest request;
    FillDeletePlayerRequest( &request );
    LogDeletePlayerRequest( &request, "TestAccountManagementServerDeletePlayer" );
    HRESULT hr = PFAccountManagementServerDeletePlayerAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerDeletePlayerAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerDeletePushNotificationTemplate(TestContext& testContext)
{
    struct ServerDeletePushNotificationTemplateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerDeletePushNotificationTemplateResult>>(testContext);

    PlayFab::AccountManagementModels::DeletePushNotificationTemplateRequest request;
    FillDeletePushNotificationTemplateRequest( &request );
    LogDeletePushNotificationTemplateRequest( &request, "TestAccountManagementServerDeletePushNotificationTemplate" );
    HRESULT hr = PFAccountManagementServerDeletePushNotificationTemplateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerDeletePushNotificationTemplateAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetPlayerProfile(TestContext& testContext)
{
    struct ServerGetPlayerProfileResult : public XAsyncResult
    {
        PFAccountManagementGetPlayerProfileResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetPlayerProfileGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayerProfileResult( result );
            return ValidatePFAccountManagementGetPlayerProfileResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayerProfileResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayerProfileRequest request;
    FillGetPlayerProfileRequest( &request );
    LogGetPlayerProfileRequest( &request, "TestAccountManagementServerGetPlayerProfile" );
    HRESULT hr = PFAccountManagementServerGetPlayerProfileAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetPlayerProfileAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromFacebookIDs(TestContext& testContext)
{
    struct ServerGetPlayFabIDsFromFacebookIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromFacebookIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetPlayFabIDsFromFacebookIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromFacebookIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromFacebookIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayFabIDsFromFacebookIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromFacebookIDsRequest request;
    FillGetPlayFabIDsFromFacebookIDsRequest( &request );
    LogGetPlayFabIDsFromFacebookIDsRequest( &request, "TestAccountManagementServerGetPlayFabIDsFromFacebookIDs" );
    HRESULT hr = PFAccountManagementServerGetPlayFabIDsFromFacebookIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetPlayFabIDsFromFacebookIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromFacebookInstantGamesIds(TestContext& testContext)
{
    struct ServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetPlayFabIDsFromFacebookInstantGamesIdsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayFabIDsFromFacebookInstantGamesIdsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest request;
    FillGetPlayFabIDsFromFacebookInstantGamesIdsRequest( &request );
    LogGetPlayFabIDsFromFacebookInstantGamesIdsRequest( &request, "TestAccountManagementServerGetPlayFabIDsFromFacebookInstantGamesIds" );
    HRESULT hr = PFAccountManagementServerGetPlayFabIDsFromFacebookInstantGamesIdsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetPlayFabIDsFromFacebookInstantGamesIdsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromGenericIDs(TestContext& testContext)
{
    struct ServerGetPlayFabIDsFromGenericIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromGenericIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetPlayFabIDsFromGenericIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromGenericIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromGenericIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayFabIDsFromGenericIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromGenericIDsRequest request;
    FillGetPlayFabIDsFromGenericIDsRequest( &request );
    LogGetPlayFabIDsFromGenericIDsRequest( &request, "TestAccountManagementServerGetPlayFabIDsFromGenericIDs" );
    HRESULT hr = PFAccountManagementServerGetPlayFabIDsFromGenericIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetPlayFabIDsFromGenericIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromNintendoSwitchDeviceIds(TestContext& testContext)
{
    struct ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest request;
    FillGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( &request );
    LogGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( &request, "TestAccountManagementServerGetPlayFabIDsFromNintendoSwitchDeviceIds" );
    HRESULT hr = PFAccountManagementServerGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromPSNAccountIDs(TestContext& testContext)
{
    struct ServerGetPlayFabIDsFromPSNAccountIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetPlayFabIDsFromPSNAccountIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayFabIDsFromPSNAccountIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromPSNAccountIDsRequest request;
    FillGetPlayFabIDsFromPSNAccountIDsRequest( &request );
    LogGetPlayFabIDsFromPSNAccountIDsRequest( &request, "TestAccountManagementServerGetPlayFabIDsFromPSNAccountIDs" );
    HRESULT hr = PFAccountManagementServerGetPlayFabIDsFromPSNAccountIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetPlayFabIDsFromPSNAccountIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromSteamIDs(TestContext& testContext)
{
    struct ServerGetPlayFabIDsFromSteamIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromSteamIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetPlayFabIDsFromSteamIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromSteamIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromSteamIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayFabIDsFromSteamIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromSteamIDsRequest request;
    FillGetPlayFabIDsFromSteamIDsRequest( &request );
    LogGetPlayFabIDsFromSteamIDsRequest( &request, "TestAccountManagementServerGetPlayFabIDsFromSteamIDs" );
    HRESULT hr = PFAccountManagementServerGetPlayFabIDsFromSteamIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetPlayFabIDsFromSteamIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetPlayFabIDsFromXboxLiveIDs(TestContext& testContext)
{
    struct ServerGetPlayFabIDsFromXboxLiveIDsResult : public XAsyncResult
    {
        PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetPlayFabIDsFromXboxLiveIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult( result );
            return ValidatePFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayFabIDsFromXboxLiveIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetPlayFabIDsFromXboxLiveIDsRequest request;
    FillGetPlayFabIDsFromXboxLiveIDsRequest( &request );
    LogGetPlayFabIDsFromXboxLiveIDsRequest( &request, "TestAccountManagementServerGetPlayFabIDsFromXboxLiveIDs" );
    HRESULT hr = PFAccountManagementServerGetPlayFabIDsFromXboxLiveIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetPlayFabIDsFromXboxLiveIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetServerCustomIDsFromPlayFabIDs(TestContext& testContext)
{
    struct ServerGetServerCustomIDsFromPlayFabIDsResult : public XAsyncResult
    {
        PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetServerCustomIDsFromPlayFabIDsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetServerCustomIDsFromPlayFabIDsResult( result );
            return ValidatePFAccountManagementGetServerCustomIDsFromPlayFabIDsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetServerCustomIDsFromPlayFabIDsResult>>(testContext);

    PlayFab::AccountManagementModels::GetServerCustomIDsFromPlayFabIDsRequest request;
    FillGetServerCustomIDsFromPlayFabIDsRequest( &request );
    LogGetServerCustomIDsFromPlayFabIDsRequest( &request, "TestAccountManagementServerGetServerCustomIDsFromPlayFabIDs" );
    HRESULT hr = PFAccountManagementServerGetServerCustomIDsFromPlayFabIDsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetServerCustomIDsFromPlayFabIDsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetUserAccountInfo(TestContext& testContext)
{
    struct ServerGetUserAccountInfoResult : public XAsyncResult
    {
        PFAccountManagementGetUserAccountInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetUserAccountInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetUserAccountInfoResult( result );
            return ValidatePFAccountManagementGetUserAccountInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetUserAccountInfoResult>>(testContext);

    PlayFab::AccountManagementModels::GetUserAccountInfoRequest request;
    FillGetUserAccountInfoRequest( &request );
    LogGetUserAccountInfoRequest( &request, "TestAccountManagementServerGetUserAccountInfo" );
    HRESULT hr = PFAccountManagementServerGetUserAccountInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetUserAccountInfoAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerGetUserBans(TestContext& testContext)
{
    struct ServerGetUserBansResult : public XAsyncResult
    {
        PFAccountManagementGetUserBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerGetUserBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetUserBansResult( result );
            return ValidatePFAccountManagementGetUserBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetUserBansResult>>(testContext);

    PlayFab::AccountManagementModels::GetUserBansRequest request;
    FillGetUserBansRequest( &request );
    LogGetUserBansRequest( &request, "TestAccountManagementServerGetUserBans" );
    HRESULT hr = PFAccountManagementServerGetUserBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerGetUserBansAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerLinkPSNAccount(TestContext& testContext)
{
    struct ServerLinkPSNAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerLinkPSNAccountResult>>(testContext);

    PlayFab::AccountManagementModels::ServerLinkPSNAccountRequest request;
    FillServerLinkPSNAccountRequest( &request );
    LogServerLinkPSNAccountRequest( &request, "TestAccountManagementServerLinkPSNAccount" );
    HRESULT hr = PFAccountManagementServerLinkPSNAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerLinkPSNAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerLinkServerCustomId(TestContext& testContext)
{
    struct ServerLinkServerCustomIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerLinkServerCustomIdResult>>(testContext);

    PlayFab::AccountManagementModels::LinkServerCustomIdRequest request;
    FillLinkServerCustomIdRequest( &request );
    LogLinkServerCustomIdRequest( &request, "TestAccountManagementServerLinkServerCustomId" );
    HRESULT hr = PFAccountManagementServerLinkServerCustomIdAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerLinkServerCustomIdAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerLinkXboxAccount(TestContext& testContext)
{
    struct ServerLinkXboxAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerLinkXboxAccountResult>>(testContext);

    PlayFab::AccountManagementModels::ServerLinkXboxAccountRequest request;
    FillServerLinkXboxAccountRequest( &request );
    LogServerLinkXboxAccountRequest( &request, "TestAccountManagementServerLinkXboxAccount" );
    HRESULT hr = PFAccountManagementServerLinkXboxAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerLinkXboxAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerRemoveGenericID(TestContext& testContext)
{
    struct ServerRemoveGenericIDResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerRemoveGenericIDResult>>(testContext);

    PlayFab::AccountManagementModels::ServerRemoveGenericIDRequest request;
    FillServerRemoveGenericIDRequest( &request );
    LogServerRemoveGenericIDRequest( &request, "TestAccountManagementServerRemoveGenericID" );
    HRESULT hr = PFAccountManagementServerRemoveGenericIDAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerRemoveGenericIDAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerRevokeAllBansForUser(TestContext& testContext)
{
    struct ServerRevokeAllBansForUserResult : public XAsyncResult
    {
        PFAccountManagementRevokeAllBansForUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerRevokeAllBansForUserGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementRevokeAllBansForUserResult( result );
            return ValidatePFAccountManagementRevokeAllBansForUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerRevokeAllBansForUserResult>>(testContext);

    PlayFab::AccountManagementModels::RevokeAllBansForUserRequest request;
    FillRevokeAllBansForUserRequest( &request );
    LogRevokeAllBansForUserRequest( &request, "TestAccountManagementServerRevokeAllBansForUser" );
    HRESULT hr = PFAccountManagementServerRevokeAllBansForUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerRevokeAllBansForUserAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerRevokeBans(TestContext& testContext)
{
    struct ServerRevokeBansResult : public XAsyncResult
    {
        PFAccountManagementRevokeBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerRevokeBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementRevokeBansResult( result );
            return ValidatePFAccountManagementRevokeBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerRevokeBansResult>>(testContext);

    PlayFab::AccountManagementModels::RevokeBansRequest request;
    FillRevokeBansRequest( &request );
    LogRevokeBansRequest( &request, "TestAccountManagementServerRevokeBans" );
    HRESULT hr = PFAccountManagementServerRevokeBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerRevokeBansAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerSavePushNotificationTemplate(TestContext& testContext)
{
    struct ServerSavePushNotificationTemplateResult : public XAsyncResult
    {
        PFAccountManagementSavePushNotificationTemplateResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAccountManagementServerSavePushNotificationTemplateGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAccountManagementServerSavePushNotificationTemplateGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementSavePushNotificationTemplateResult( result );
            return ValidatePFAccountManagementSavePushNotificationTemplateResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerSavePushNotificationTemplateResult>>(testContext);

    PlayFab::AccountManagementModels::SavePushNotificationTemplateRequest request;
    FillSavePushNotificationTemplateRequest( &request );
    LogSavePushNotificationTemplateRequest( &request, "TestAccountManagementServerSavePushNotificationTemplate" );
    HRESULT hr = PFAccountManagementServerSavePushNotificationTemplateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerSavePushNotificationTemplateAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerSendCustomAccountRecoveryEmail(TestContext& testContext)
{
    struct ServerSendCustomAccountRecoveryEmailResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerSendCustomAccountRecoveryEmailResult>>(testContext);

    PlayFab::AccountManagementModels::SendCustomAccountRecoveryEmailRequest request;
    FillSendCustomAccountRecoveryEmailRequest( &request );
    LogSendCustomAccountRecoveryEmailRequest( &request, "TestAccountManagementServerSendCustomAccountRecoveryEmail" );
    HRESULT hr = PFAccountManagementServerSendCustomAccountRecoveryEmailAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerSendCustomAccountRecoveryEmailAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerSendEmailFromTemplate(TestContext& testContext)
{
    struct ServerSendEmailFromTemplateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerSendEmailFromTemplateResult>>(testContext);

    PlayFab::AccountManagementModels::SendEmailFromTemplateRequest request;
    FillSendEmailFromTemplateRequest( &request );
    LogSendEmailFromTemplateRequest( &request, "TestAccountManagementServerSendEmailFromTemplate" );
    HRESULT hr = PFAccountManagementServerSendEmailFromTemplateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerSendEmailFromTemplateAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerSendPushNotification(TestContext& testContext)
{
    struct ServerSendPushNotificationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerSendPushNotificationResult>>(testContext);

    PlayFab::AccountManagementModels::SendPushNotificationRequest request;
    FillSendPushNotificationRequest( &request );
    LogSendPushNotificationRequest( &request, "TestAccountManagementServerSendPushNotification" );
    HRESULT hr = PFAccountManagementServerSendPushNotificationAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerSendPushNotificationAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerSendPushNotificationFromTemplate(TestContext& testContext)
{
    struct ServerSendPushNotificationFromTemplateResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerSendPushNotificationFromTemplateResult>>(testContext);

    PlayFab::AccountManagementModels::SendPushNotificationFromTemplateRequest request;
    FillSendPushNotificationFromTemplateRequest( &request );
    LogSendPushNotificationFromTemplateRequest( &request, "TestAccountManagementServerSendPushNotificationFromTemplate" );
    HRESULT hr = PFAccountManagementServerSendPushNotificationFromTemplateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerSendPushNotificationFromTemplateAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerUnlinkPSNAccount(TestContext& testContext)
{
    struct ServerUnlinkPSNAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerUnlinkPSNAccountResult>>(testContext);

    PlayFab::AccountManagementModels::ServerUnlinkPSNAccountRequest request;
    FillServerUnlinkPSNAccountRequest( &request );
    LogServerUnlinkPSNAccountRequest( &request, "TestAccountManagementServerUnlinkPSNAccount" );
    HRESULT hr = PFAccountManagementServerUnlinkPSNAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerUnlinkPSNAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerUnlinkServerCustomId(TestContext& testContext)
{
    struct ServerUnlinkServerCustomIdResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerUnlinkServerCustomIdResult>>(testContext);

    PlayFab::AccountManagementModels::UnlinkServerCustomIdRequest request;
    FillUnlinkServerCustomIdRequest( &request );
    LogUnlinkServerCustomIdRequest( &request, "TestAccountManagementServerUnlinkServerCustomId" );
    HRESULT hr = PFAccountManagementServerUnlinkServerCustomIdAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerUnlinkServerCustomIdAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerUnlinkXboxAccount(TestContext& testContext)
{
    struct ServerUnlinkXboxAccountResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerUnlinkXboxAccountResult>>(testContext);

    PlayFab::AccountManagementModels::ServerUnlinkXboxAccountRequest request;
    FillServerUnlinkXboxAccountRequest( &request );
    LogServerUnlinkXboxAccountRequest( &request, "TestAccountManagementServerUnlinkXboxAccount" );
    HRESULT hr = PFAccountManagementServerUnlinkXboxAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerUnlinkXboxAccountAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerUpdateAvatarUrl(TestContext& testContext)
{
    struct ServerUpdateAvatarUrlResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerUpdateAvatarUrlResult>>(testContext);

    PlayFab::AccountManagementModels::ServerUpdateAvatarUrlRequest request;
    FillServerUpdateAvatarUrlRequest( &request );
    LogServerUpdateAvatarUrlRequest( &request, "TestAccountManagementServerUpdateAvatarUrl" );
    HRESULT hr = PFAccountManagementServerUpdateAvatarUrlAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerUpdateAvatarUrlAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementServerUpdateBans(TestContext& testContext)
{
    struct ServerUpdateBansResult : public XAsyncResult
    {
        PFAccountManagementUpdateBansResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementServerUpdateBansGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementUpdateBansResult( result );
            return ValidatePFAccountManagementUpdateBansResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateBansResult>>(testContext);

    PlayFab::AccountManagementModels::UpdateBansRequest request;
    FillUpdateBansRequest( &request );
    LogUpdateBansRequest( &request, "TestAccountManagementServerUpdateBans" );
    HRESULT hr = PFAccountManagementServerUpdateBansAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementServerUpdateBansAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementGetGlobalPolicy(TestContext& testContext)
{
    struct GetGlobalPolicyResult : public XAsyncResult
    {
        PFAccountManagementGetGlobalPolicyResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementGetGlobalPolicyGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetGlobalPolicyResponse( result );
            return ValidatePFAccountManagementGetGlobalPolicyResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGlobalPolicyResult>>(testContext);

    PlayFab::AccountManagementModels::GetGlobalPolicyRequest request;
    FillGetGlobalPolicyRequest( &request );
    LogGetGlobalPolicyRequest( &request, "TestAccountManagementGetGlobalPolicy" );
    HRESULT hr = PFAccountManagementGetGlobalPolicyAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementGetGlobalPolicyAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementGetProfile(TestContext& testContext)
{
    struct GetProfileResult : public XAsyncResult
    {
        PFAccountManagementGetEntityProfileResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementGetProfileGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetEntityProfileResponse( result );
            return ValidatePFAccountManagementGetEntityProfileResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetProfileResult>>(testContext);

    PlayFab::AccountManagementModels::GetEntityProfileRequest request;
    FillGetEntityProfileRequest( &request );
    LogGetEntityProfileRequest( &request, "TestAccountManagementGetProfile" );
    HRESULT hr = PFAccountManagementGetProfileAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementGetProfileAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementGetProfiles(TestContext& testContext)
{
    struct GetProfilesResult : public XAsyncResult
    {
        PFAccountManagementGetEntityProfilesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementGetProfilesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetEntityProfilesResponse( result );
            return ValidatePFAccountManagementGetEntityProfilesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetProfilesResult>>(testContext);

    PlayFab::AccountManagementModels::GetEntityProfilesRequest request;
    FillGetEntityProfilesRequest( &request );
    LogGetEntityProfilesRequest( &request, "TestAccountManagementGetProfiles" );
    HRESULT hr = PFAccountManagementGetProfilesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementGetProfilesAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementGetTitlePlayersFromMasterPlayerAccountIds(TestContext& testContext)
{
    struct GetTitlePlayersFromMasterPlayerAccountIdsResult : public XAsyncResult
    {
        PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse( result );
            return ValidatePFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitlePlayersFromMasterPlayerAccountIdsResult>>(testContext);

    PlayFab::AccountManagementModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest request;
    FillGetTitlePlayersFromMasterPlayerAccountIdsRequest( &request );
    LogGetTitlePlayersFromMasterPlayerAccountIdsRequest( &request, "TestAccountManagementGetTitlePlayersFromMasterPlayerAccountIds" );
    HRESULT hr = PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementSetGlobalPolicy(TestContext& testContext)
{
    struct SetGlobalPolicyResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetGlobalPolicyResult>>(testContext);

    PlayFab::AccountManagementModels::SetGlobalPolicyRequest request;
    FillSetGlobalPolicyRequest( &request );
    LogSetGlobalPolicyRequest( &request, "TestAccountManagementSetGlobalPolicy" );
    HRESULT hr = PFAccountManagementSetGlobalPolicyAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementSetGlobalPolicyAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementSetProfileLanguage(TestContext& testContext)
{
    struct SetProfileLanguageResult : public XAsyncResult
    {
        PFAccountManagementSetProfileLanguageResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementSetProfileLanguageGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementSetProfileLanguageResponse( result );
            return ValidatePFAccountManagementSetProfileLanguageResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetProfileLanguageResult>>(testContext);

    PlayFab::AccountManagementModels::SetProfileLanguageRequest request;
    FillSetProfileLanguageRequest( &request );
    LogSetProfileLanguageRequest( &request, "TestAccountManagementSetProfileLanguage" );
    HRESULT hr = PFAccountManagementSetProfileLanguageAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementSetProfileLanguageAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenAccountManagementTests::TestAccountManagementSetProfilePolicy(TestContext& testContext)
{
    struct SetProfilePolicyResult : public XAsyncResult
    {
        PFAccountManagementSetEntityProfilePolicyResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAccountManagementSetProfilePolicyGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAccountManagementSetEntityProfilePolicyResponse( result );
            return ValidatePFAccountManagementSetEntityProfilePolicyResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetProfilePolicyResult>>(testContext);

    PlayFab::AccountManagementModels::SetEntityProfilePolicyRequest request;
    FillSetEntityProfilePolicyRequest( &request );
    LogSetEntityProfilePolicyRequest( &request, "TestAccountManagementSetProfilePolicy" );
    HRESULT hr = PFAccountManagementSetProfilePolicyAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAccountManagementAccountManagementSetProfilePolicyAsync", hr);
        return;
    }
    async.release(); 
} 

}
