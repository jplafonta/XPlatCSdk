#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/AccountManagement/AccountManagementDataModels.h"

namespace PlayFabUnit
{

class AutoGenAccountManagementTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestAccountManagementAdminBanUsers(TestContext& testContext);

    void TestAccountManagementAdminDeleteMasterPlayerAccount(TestContext& testContext);

    void TestAccountManagementAdminDeletePlayer(TestContext& testContext);

    void TestAccountManagementAdminDeleteTitle(TestContext& testContext);

    void TestAccountManagementAdminExportMasterPlayerData(TestContext& testContext);

    void TestAccountManagementAdminGetPlayedTitleList(TestContext& testContext);

    void TestAccountManagementAdminGetPlayerIdFromAuthToken(TestContext& testContext);

    void TestAccountManagementAdminGetPlayerProfile(TestContext& testContext);

    void TestAccountManagementAdminGetUserAccountInfo(TestContext& testContext);

    void TestAccountManagementAdminGetUserBans(TestContext& testContext);

    void TestAccountManagementAdminResetPassword(TestContext& testContext);

    void TestAccountManagementAdminRevokeAllBansForUser(TestContext& testContext);

    void TestAccountManagementAdminRevokeBans(TestContext& testContext);

    void TestAccountManagementAdminSendAccountRecoveryEmail(TestContext& testContext);

    void TestAccountManagementAdminUpdateBans(TestContext& testContext);

    void TestAccountManagementAdminUpdateUserTitleDisplayName(TestContext& testContext);

    void TestAccountManagementClientAddGenericID(TestContext& testContext);

    void TestAccountManagementClientAddOrUpdateContactEmail(TestContext& testContext);

    void TestAccountManagementClientAddUsernamePassword(TestContext& testContext);

    void TestAccountManagementClientGetAccountInfo(TestContext& testContext);

    void TestAccountManagementClientGetPlayerCombinedInfo(TestContext& testContext);

    void TestAccountManagementClientGetPlayerProfile(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromFacebookIDs(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromFacebookInstantGamesIds(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromGameCenterIDs(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromGenericIDs(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromGoogleIDs(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromKongregateIDs(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromNintendoSwitchDeviceIds(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromPSNAccountIDs(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromSteamIDs(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromTwitchIDs(TestContext& testContext);

    void TestAccountManagementClientGetPlayFabIDsFromXboxLiveIDs(TestContext& testContext);

    void TestAccountManagementClientLinkAndroidDeviceID(TestContext& testContext);

    void TestAccountManagementClientLinkApple(TestContext& testContext);

    void TestAccountManagementClientLinkCustomID(TestContext& testContext);

    void TestAccountManagementClientLinkFacebookAccount(TestContext& testContext);

    void TestAccountManagementClientLinkFacebookInstantGamesId(TestContext& testContext);

    void TestAccountManagementClientLinkGameCenterAccount(TestContext& testContext);

    void TestAccountManagementClientLinkGoogleAccount(TestContext& testContext);

    void TestAccountManagementClientLinkIOSDeviceID(TestContext& testContext);

    void TestAccountManagementClientLinkKongregate(TestContext& testContext);

    void TestAccountManagementClientLinkNintendoServiceAccount(TestContext& testContext);

    void TestAccountManagementClientLinkNintendoSwitchDeviceId(TestContext& testContext);

    void TestAccountManagementClientLinkOpenIdConnect(TestContext& testContext);

    void TestAccountManagementClientLinkPSNAccount(TestContext& testContext);

    void TestAccountManagementClientLinkSteamAccount(TestContext& testContext);

    void TestAccountManagementClientLinkTwitch(TestContext& testContext);

    void TestAccountManagementClientLinkXboxAccount(TestContext& testContext);

    void TestAccountManagementClientRemoveContactEmail(TestContext& testContext);

    void TestAccountManagementClientRemoveGenericID(TestContext& testContext);

    void TestAccountManagementClientReportPlayer(TestContext& testContext);

    void TestAccountManagementClientSendAccountRecoveryEmail(TestContext& testContext);

    void TestAccountManagementClientUnlinkAndroidDeviceID(TestContext& testContext);

    void TestAccountManagementClientUnlinkApple(TestContext& testContext);

    void TestAccountManagementClientUnlinkCustomID(TestContext& testContext);

    void TestAccountManagementClientUnlinkFacebookAccount(TestContext& testContext);

    void TestAccountManagementClientUnlinkFacebookInstantGamesId(TestContext& testContext);

    void TestAccountManagementClientUnlinkGameCenterAccount(TestContext& testContext);

    void TestAccountManagementClientUnlinkGoogleAccount(TestContext& testContext);

    void TestAccountManagementClientUnlinkIOSDeviceID(TestContext& testContext);

    void TestAccountManagementClientUnlinkKongregate(TestContext& testContext);

    void TestAccountManagementClientUnlinkNintendoServiceAccount(TestContext& testContext);

    void TestAccountManagementClientUnlinkNintendoSwitchDeviceId(TestContext& testContext);

    void TestAccountManagementClientUnlinkOpenIdConnect(TestContext& testContext);

    void TestAccountManagementClientUnlinkPSNAccount(TestContext& testContext);

    void TestAccountManagementClientUnlinkSteamAccount(TestContext& testContext);

    void TestAccountManagementClientUnlinkTwitch(TestContext& testContext);

    void TestAccountManagementClientUnlinkXboxAccount(TestContext& testContext);

    void TestAccountManagementClientUpdateAvatarUrl(TestContext& testContext);

    void TestAccountManagementClientUpdateUserTitleDisplayName(TestContext& testContext);

    void TestAccountManagementServerAddGenericID(TestContext& testContext);

    void TestAccountManagementServerBanUsers(TestContext& testContext);

    void TestAccountManagementServerDeletePlayer(TestContext& testContext);

    void TestAccountManagementServerDeletePushNotificationTemplate(TestContext& testContext);

    void TestAccountManagementServerGetPlayerProfile(TestContext& testContext);

    void TestAccountManagementServerGetPlayFabIDsFromFacebookIDs(TestContext& testContext);

    void TestAccountManagementServerGetPlayFabIDsFromFacebookInstantGamesIds(TestContext& testContext);

    void TestAccountManagementServerGetPlayFabIDsFromGenericIDs(TestContext& testContext);

    void TestAccountManagementServerGetPlayFabIDsFromNintendoSwitchDeviceIds(TestContext& testContext);

    void TestAccountManagementServerGetPlayFabIDsFromPSNAccountIDs(TestContext& testContext);

    void TestAccountManagementServerGetPlayFabIDsFromSteamIDs(TestContext& testContext);

    void TestAccountManagementServerGetPlayFabIDsFromXboxLiveIDs(TestContext& testContext);

    void TestAccountManagementServerGetServerCustomIDsFromPlayFabIDs(TestContext& testContext);

    void TestAccountManagementServerGetUserAccountInfo(TestContext& testContext);

    void TestAccountManagementServerGetUserBans(TestContext& testContext);

    void TestAccountManagementServerLinkPSNAccount(TestContext& testContext);

    void TestAccountManagementServerLinkServerCustomId(TestContext& testContext);

    void TestAccountManagementServerLinkXboxAccount(TestContext& testContext);

    void TestAccountManagementServerRemoveGenericID(TestContext& testContext);

    void TestAccountManagementServerRevokeAllBansForUser(TestContext& testContext);

    void TestAccountManagementServerRevokeBans(TestContext& testContext);

    void TestAccountManagementServerSavePushNotificationTemplate(TestContext& testContext);

    void TestAccountManagementServerSendCustomAccountRecoveryEmail(TestContext& testContext);

    void TestAccountManagementServerSendEmailFromTemplate(TestContext& testContext);

    void TestAccountManagementServerSendPushNotification(TestContext& testContext);

    void TestAccountManagementServerSendPushNotificationFromTemplate(TestContext& testContext);

    void TestAccountManagementServerUnlinkPSNAccount(TestContext& testContext);

    void TestAccountManagementServerUnlinkServerCustomId(TestContext& testContext);

    void TestAccountManagementServerUnlinkXboxAccount(TestContext& testContext);

    void TestAccountManagementServerUpdateAvatarUrl(TestContext& testContext);

    void TestAccountManagementServerUpdateBans(TestContext& testContext);

    void TestAccountManagementGetGlobalPolicy(TestContext& testContext);

    void TestAccountManagementGetProfile(TestContext& testContext);

    void TestAccountManagementGetProfiles(TestContext& testContext);

    void TestAccountManagementGetTitlePlayersFromMasterPlayerAccountIds(TestContext& testContext);

    void TestAccountManagementSetGlobalPolicy(TestContext& testContext);

    void TestAccountManagementSetProfileLanguage(TestContext& testContext);

    void TestAccountManagementSetProfilePolicy(TestContext& testContext);


protected:
    void AddTests();

    static void LogBanUsersRequest( PlayFab::AccountManagementModels::BanUsersRequest* request, const char* testName );
    static void FillBanUsersRequest( PlayFab::AccountManagementModels::BanUsersRequest* request );
    static HRESULT LogPFAccountManagementBanUsersResult( PFAccountManagementBanUsersResult* result );
    static HRESULT ValidatePFAccountManagementBanUsersResult( PFAccountManagementBanUsersResult* result );

    static void LogDeleteMasterPlayerAccountRequest( PlayFab::AccountManagementModels::DeleteMasterPlayerAccountRequest* request, const char* testName );
    static void FillDeleteMasterPlayerAccountRequest( PlayFab::AccountManagementModels::DeleteMasterPlayerAccountRequest* request );
    static HRESULT LogPFAccountManagementDeleteMasterPlayerAccountResult( PFAccountManagementDeleteMasterPlayerAccountResult* result );
    static HRESULT ValidatePFAccountManagementDeleteMasterPlayerAccountResult( PFAccountManagementDeleteMasterPlayerAccountResult* result );

    static void LogDeletePlayerRequest( PlayFab::AccountManagementModels::DeletePlayerRequest* request, const char* testName );
    static void FillDeletePlayerRequest( PlayFab::AccountManagementModels::DeletePlayerRequest* request );


    static void LogExportMasterPlayerDataRequest( PlayFab::AccountManagementModels::ExportMasterPlayerDataRequest* request, const char* testName );
    static void FillExportMasterPlayerDataRequest( PlayFab::AccountManagementModels::ExportMasterPlayerDataRequest* request );
    static HRESULT LogPFAccountManagementExportMasterPlayerDataResult( PFAccountManagementExportMasterPlayerDataResult* result );
    static HRESULT ValidatePFAccountManagementExportMasterPlayerDataResult( PFAccountManagementExportMasterPlayerDataResult* result );

    static void LogGetPlayedTitleListRequest( PlayFab::AccountManagementModels::GetPlayedTitleListRequest* request, const char* testName );
    static void FillGetPlayedTitleListRequest( PlayFab::AccountManagementModels::GetPlayedTitleListRequest* request );
    static HRESULT LogPFAccountManagementGetPlayedTitleListResult( PFAccountManagementGetPlayedTitleListResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayedTitleListResult( PFAccountManagementGetPlayedTitleListResult* result );

    static void LogGetPlayerIdFromAuthTokenRequest( PlayFab::AccountManagementModels::GetPlayerIdFromAuthTokenRequest* request, const char* testName );
    static void FillGetPlayerIdFromAuthTokenRequest( PlayFab::AccountManagementModels::GetPlayerIdFromAuthTokenRequest* request );
    static HRESULT LogPFAccountManagementGetPlayerIdFromAuthTokenResult( PFAccountManagementGetPlayerIdFromAuthTokenResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayerIdFromAuthTokenResult( PFAccountManagementGetPlayerIdFromAuthTokenResult* result );

    static void LogGetPlayerProfileRequest( PlayFab::AccountManagementModels::GetPlayerProfileRequest* request, const char* testName );
    static void FillGetPlayerProfileRequest( PlayFab::AccountManagementModels::GetPlayerProfileRequest* request );
    static HRESULT LogPFAccountManagementGetPlayerProfileResult( PFAccountManagementGetPlayerProfileResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayerProfileResult( PFAccountManagementGetPlayerProfileResult* result );

    static void LogLookupUserAccountInfoRequest( PlayFab::AccountManagementModels::LookupUserAccountInfoRequest* request, const char* testName );
    static void FillLookupUserAccountInfoRequest( PlayFab::AccountManagementModels::LookupUserAccountInfoRequest* request );
    static HRESULT LogPFAccountManagementLookupUserAccountInfoResult( PFAccountManagementLookupUserAccountInfoResult* result );
    static HRESULT ValidatePFAccountManagementLookupUserAccountInfoResult( PFAccountManagementLookupUserAccountInfoResult* result );

    static void LogGetUserBansRequest( PlayFab::AccountManagementModels::GetUserBansRequest* request, const char* testName );
    static void FillGetUserBansRequest( PlayFab::AccountManagementModels::GetUserBansRequest* request );
    static HRESULT LogPFAccountManagementGetUserBansResult( PFAccountManagementGetUserBansResult* result );
    static HRESULT ValidatePFAccountManagementGetUserBansResult( PFAccountManagementGetUserBansResult* result );

    static void LogResetPasswordRequest( PlayFab::AccountManagementModels::ResetPasswordRequest* request, const char* testName );
    static void FillResetPasswordRequest( PlayFab::AccountManagementModels::ResetPasswordRequest* request );

    static void LogRevokeAllBansForUserRequest( PlayFab::AccountManagementModels::RevokeAllBansForUserRequest* request, const char* testName );
    static void FillRevokeAllBansForUserRequest( PlayFab::AccountManagementModels::RevokeAllBansForUserRequest* request );
    static HRESULT LogPFAccountManagementRevokeAllBansForUserResult( PFAccountManagementRevokeAllBansForUserResult* result );
    static HRESULT ValidatePFAccountManagementRevokeAllBansForUserResult( PFAccountManagementRevokeAllBansForUserResult* result );

    static void LogRevokeBansRequest( PlayFab::AccountManagementModels::RevokeBansRequest* request, const char* testName );
    static void FillRevokeBansRequest( PlayFab::AccountManagementModels::RevokeBansRequest* request );
    static HRESULT LogPFAccountManagementRevokeBansResult( PFAccountManagementRevokeBansResult* result );
    static HRESULT ValidatePFAccountManagementRevokeBansResult( PFAccountManagementRevokeBansResult* result );

    static void LogAdminSendAccountRecoveryEmailRequest( PlayFab::AccountManagementModels::AdminSendAccountRecoveryEmailRequest* request, const char* testName );
    static void FillAdminSendAccountRecoveryEmailRequest( PlayFab::AccountManagementModels::AdminSendAccountRecoveryEmailRequest* request );

    static void LogUpdateBansRequest( PlayFab::AccountManagementModels::UpdateBansRequest* request, const char* testName );
    static void FillUpdateBansRequest( PlayFab::AccountManagementModels::UpdateBansRequest* request );
    static HRESULT LogPFAccountManagementUpdateBansResult( PFAccountManagementUpdateBansResult* result );
    static HRESULT ValidatePFAccountManagementUpdateBansResult( PFAccountManagementUpdateBansResult* result );

    static void LogAdminUpdateUserTitleDisplayNameRequest( PlayFab::AccountManagementModels::AdminUpdateUserTitleDisplayNameRequest* request, const char* testName );
    static void FillAdminUpdateUserTitleDisplayNameRequest( PlayFab::AccountManagementModels::AdminUpdateUserTitleDisplayNameRequest* request );
    static HRESULT LogPFAccountManagementUpdateUserTitleDisplayNameResult( PFAccountManagementUpdateUserTitleDisplayNameResult* result );
    static HRESULT ValidatePFAccountManagementUpdateUserTitleDisplayNameResult( PFAccountManagementUpdateUserTitleDisplayNameResult* result );

    static void LogClientAddGenericIDRequest( PlayFab::AccountManagementModels::ClientAddGenericIDRequest* request, const char* testName );
    static void FillClientAddGenericIDRequest( PlayFab::AccountManagementModels::ClientAddGenericIDRequest* request );

    static void LogAddOrUpdateContactEmailRequest( PlayFab::AccountManagementModels::AddOrUpdateContactEmailRequest* request, const char* testName );
    static void FillAddOrUpdateContactEmailRequest( PlayFab::AccountManagementModels::AddOrUpdateContactEmailRequest* request );

    static void LogAddUsernamePasswordRequest( PlayFab::AccountManagementModels::AddUsernamePasswordRequest* request, const char* testName );
    static void FillAddUsernamePasswordRequest( PlayFab::AccountManagementModels::AddUsernamePasswordRequest* request );
    static HRESULT LogPFAccountManagementAddUsernamePasswordResult( PFAccountManagementAddUsernamePasswordResult* result );
    static HRESULT ValidatePFAccountManagementAddUsernamePasswordResult( PFAccountManagementAddUsernamePasswordResult* result );

    static void LogGetAccountInfoRequest( PlayFab::AccountManagementModels::GetAccountInfoRequest* request, const char* testName );
    static void FillGetAccountInfoRequest( PlayFab::AccountManagementModels::GetAccountInfoRequest* request );
    static HRESULT LogPFAccountManagementGetAccountInfoResult( PFAccountManagementGetAccountInfoResult* result );
    static HRESULT ValidatePFAccountManagementGetAccountInfoResult( PFAccountManagementGetAccountInfoResult* result );

    static void LogGetPlayerCombinedInfoRequest( PlayFab::GetPlayerCombinedInfoRequest* request, const char* testName );
    static void FillGetPlayerCombinedInfoRequest( PlayFab::GetPlayerCombinedInfoRequest* request );
    static HRESULT LogPFGetPlayerCombinedInfoResult( PFGetPlayerCombinedInfoResult* result );
    static HRESULT ValidatePFGetPlayerCombinedInfoResult( PFGetPlayerCombinedInfoResult* result );


    static void LogGetPlayFabIDsFromFacebookIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromFacebookIDsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromFacebookIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromFacebookIDsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromFacebookIDsResult( PFAccountManagementGetPlayFabIDsFromFacebookIDsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromFacebookIDsResult( PFAccountManagementGetPlayFabIDsFromFacebookIDsResult* result );

    static void LogGetPlayFabIDsFromFacebookInstantGamesIdsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromFacebookInstantGamesIdsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult( PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult( PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult* result );

    static void LogGetPlayFabIDsFromGameCenterIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromGameCenterIDsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromGameCenterIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromGameCenterIDsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromGameCenterIDsResult( PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromGameCenterIDsResult( PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult* result );

    static void LogGetPlayFabIDsFromGenericIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromGenericIDsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromGenericIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromGenericIDsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromGenericIDsResult( PFAccountManagementGetPlayFabIDsFromGenericIDsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromGenericIDsResult( PFAccountManagementGetPlayFabIDsFromGenericIDsResult* result );

    static void LogGetPlayFabIDsFromGoogleIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromGoogleIDsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromGoogleIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromGoogleIDsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromGoogleIDsResult( PFAccountManagementGetPlayFabIDsFromGoogleIDsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromGoogleIDsResult( PFAccountManagementGetPlayFabIDsFromGoogleIDsResult* result );

    static void LogGetPlayFabIDsFromKongregateIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromKongregateIDsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromKongregateIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromKongregateIDsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromKongregateIDsResult( PFAccountManagementGetPlayFabIDsFromKongregateIDsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromKongregateIDsResult( PFAccountManagementGetPlayFabIDsFromKongregateIDsResult* result );

    static void LogGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult( PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result );

    static void LogGetPlayFabIDsFromPSNAccountIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromPSNAccountIDsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromPSNAccountIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromPSNAccountIDsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult( PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult( PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult* result );

    static void LogGetPlayFabIDsFromSteamIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromSteamIDsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromSteamIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromSteamIDsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromSteamIDsResult( PFAccountManagementGetPlayFabIDsFromSteamIDsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromSteamIDsResult( PFAccountManagementGetPlayFabIDsFromSteamIDsResult* result );

    static void LogGetPlayFabIDsFromTwitchIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromTwitchIDsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromTwitchIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromTwitchIDsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromTwitchIDsResult( PFAccountManagementGetPlayFabIDsFromTwitchIDsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromTwitchIDsResult( PFAccountManagementGetPlayFabIDsFromTwitchIDsResult* result );

    static void LogGetPlayFabIDsFromXboxLiveIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromXboxLiveIDsRequest* request, const char* testName );
    static void FillGetPlayFabIDsFromXboxLiveIDsRequest( PlayFab::AccountManagementModels::GetPlayFabIDsFromXboxLiveIDsRequest* request );
    static HRESULT LogPFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult( PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult* result );
    static HRESULT ValidatePFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult( PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult* result );

    static void LogLinkAndroidDeviceIDRequest( PlayFab::AccountManagementModels::LinkAndroidDeviceIDRequest* request, const char* testName );
    static void FillLinkAndroidDeviceIDRequest( PlayFab::AccountManagementModels::LinkAndroidDeviceIDRequest* request );

    static void LogLinkAppleRequest( PlayFab::AccountManagementModels::LinkAppleRequest* request, const char* testName );
    static void FillLinkAppleRequest( PlayFab::AccountManagementModels::LinkAppleRequest* request );

    static void LogLinkCustomIDRequest( PlayFab::AccountManagementModels::LinkCustomIDRequest* request, const char* testName );
    static void FillLinkCustomIDRequest( PlayFab::AccountManagementModels::LinkCustomIDRequest* request );

    static void LogLinkFacebookAccountRequest( PlayFab::AccountManagementModels::LinkFacebookAccountRequest* request, const char* testName );
    static void FillLinkFacebookAccountRequest( PlayFab::AccountManagementModels::LinkFacebookAccountRequest* request );

    static void LogLinkFacebookInstantGamesIdRequest( PlayFab::AccountManagementModels::LinkFacebookInstantGamesIdRequest* request, const char* testName );
    static void FillLinkFacebookInstantGamesIdRequest( PlayFab::AccountManagementModels::LinkFacebookInstantGamesIdRequest* request );

    static void LogLinkGameCenterAccountRequest( PlayFab::AccountManagementModels::LinkGameCenterAccountRequest* request, const char* testName );
    static void FillLinkGameCenterAccountRequest( PlayFab::AccountManagementModels::LinkGameCenterAccountRequest* request );

    static void LogLinkGoogleAccountRequest( PlayFab::AccountManagementModels::LinkGoogleAccountRequest* request, const char* testName );
    static void FillLinkGoogleAccountRequest( PlayFab::AccountManagementModels::LinkGoogleAccountRequest* request );

    static void LogLinkIOSDeviceIDRequest( PlayFab::AccountManagementModels::LinkIOSDeviceIDRequest* request, const char* testName );
    static void FillLinkIOSDeviceIDRequest( PlayFab::AccountManagementModels::LinkIOSDeviceIDRequest* request );

    static void LogLinkKongregateAccountRequest( PlayFab::AccountManagementModels::LinkKongregateAccountRequest* request, const char* testName );
    static void FillLinkKongregateAccountRequest( PlayFab::AccountManagementModels::LinkKongregateAccountRequest* request );

    static void LogLinkNintendoServiceAccountRequest( PlayFab::AccountManagementModels::LinkNintendoServiceAccountRequest* request, const char* testName );
    static void FillLinkNintendoServiceAccountRequest( PlayFab::AccountManagementModels::LinkNintendoServiceAccountRequest* request );

    static void LogLinkNintendoSwitchDeviceIdRequest( PlayFab::AccountManagementModels::LinkNintendoSwitchDeviceIdRequest* request, const char* testName );
    static void FillLinkNintendoSwitchDeviceIdRequest( PlayFab::AccountManagementModels::LinkNintendoSwitchDeviceIdRequest* request );

    static void LogLinkOpenIdConnectRequest( PlayFab::AccountManagementModels::LinkOpenIdConnectRequest* request, const char* testName );
    static void FillLinkOpenIdConnectRequest( PlayFab::AccountManagementModels::LinkOpenIdConnectRequest* request );

    static void LogClientLinkPSNAccountRequest( PlayFab::AccountManagementModels::ClientLinkPSNAccountRequest* request, const char* testName );
    static void FillClientLinkPSNAccountRequest( PlayFab::AccountManagementModels::ClientLinkPSNAccountRequest* request );

    static void LogLinkSteamAccountRequest( PlayFab::AccountManagementModels::LinkSteamAccountRequest* request, const char* testName );
    static void FillLinkSteamAccountRequest( PlayFab::AccountManagementModels::LinkSteamAccountRequest* request );

    static void LogLinkTwitchAccountRequest( PlayFab::AccountManagementModels::LinkTwitchAccountRequest* request, const char* testName );
    static void FillLinkTwitchAccountRequest( PlayFab::AccountManagementModels::LinkTwitchAccountRequest* request );

    static void LogClientLinkXboxAccountRequest( PlayFab::AccountManagementModels::ClientLinkXboxAccountRequest* request, const char* testName );
    static void FillClientLinkXboxAccountRequest( PlayFab::AccountManagementModels::ClientLinkXboxAccountRequest* request );

    static void LogRemoveContactEmailRequest( PlayFab::AccountManagementModels::RemoveContactEmailRequest* request, const char* testName );
    static void FillRemoveContactEmailRequest( PlayFab::AccountManagementModels::RemoveContactEmailRequest* request );

    static void LogClientRemoveGenericIDRequest( PlayFab::AccountManagementModels::ClientRemoveGenericIDRequest* request, const char* testName );
    static void FillClientRemoveGenericIDRequest( PlayFab::AccountManagementModels::ClientRemoveGenericIDRequest* request );

    static void LogReportPlayerClientRequest( PlayFab::AccountManagementModels::ReportPlayerClientRequest* request, const char* testName );
    static void FillReportPlayerClientRequest( PlayFab::AccountManagementModels::ReportPlayerClientRequest* request );
    static HRESULT LogPFAccountManagementReportPlayerClientResult( PFAccountManagementReportPlayerClientResult* result );
    static HRESULT ValidatePFAccountManagementReportPlayerClientResult( PFAccountManagementReportPlayerClientResult* result );

    static void LogClientSendAccountRecoveryEmailRequest( PlayFab::AccountManagementModels::ClientSendAccountRecoveryEmailRequest* request, const char* testName );
    static void FillClientSendAccountRecoveryEmailRequest( PlayFab::AccountManagementModels::ClientSendAccountRecoveryEmailRequest* request );

    static void LogUnlinkAndroidDeviceIDRequest( PlayFab::AccountManagementModels::UnlinkAndroidDeviceIDRequest* request, const char* testName );
    static void FillUnlinkAndroidDeviceIDRequest( PlayFab::AccountManagementModels::UnlinkAndroidDeviceIDRequest* request );

    static void LogUnlinkAppleRequest( PlayFab::AccountManagementModels::UnlinkAppleRequest* request, const char* testName );
    static void FillUnlinkAppleRequest( PlayFab::AccountManagementModels::UnlinkAppleRequest* request );

    static void LogUnlinkCustomIDRequest( PlayFab::AccountManagementModels::UnlinkCustomIDRequest* request, const char* testName );
    static void FillUnlinkCustomIDRequest( PlayFab::AccountManagementModels::UnlinkCustomIDRequest* request );

    static void LogUnlinkFacebookAccountRequest( PlayFab::AccountManagementModels::UnlinkFacebookAccountRequest* request, const char* testName );
    static void FillUnlinkFacebookAccountRequest( PlayFab::AccountManagementModels::UnlinkFacebookAccountRequest* request );

    static void LogUnlinkFacebookInstantGamesIdRequest( PlayFab::AccountManagementModels::UnlinkFacebookInstantGamesIdRequest* request, const char* testName );
    static void FillUnlinkFacebookInstantGamesIdRequest( PlayFab::AccountManagementModels::UnlinkFacebookInstantGamesIdRequest* request );

    static void LogUnlinkGameCenterAccountRequest( PlayFab::AccountManagementModels::UnlinkGameCenterAccountRequest* request, const char* testName );
    static void FillUnlinkGameCenterAccountRequest( PlayFab::AccountManagementModels::UnlinkGameCenterAccountRequest* request );

    static void LogUnlinkGoogleAccountRequest( PlayFab::AccountManagementModels::UnlinkGoogleAccountRequest* request, const char* testName );
    static void FillUnlinkGoogleAccountRequest( PlayFab::AccountManagementModels::UnlinkGoogleAccountRequest* request );

    static void LogUnlinkIOSDeviceIDRequest( PlayFab::AccountManagementModels::UnlinkIOSDeviceIDRequest* request, const char* testName );
    static void FillUnlinkIOSDeviceIDRequest( PlayFab::AccountManagementModels::UnlinkIOSDeviceIDRequest* request );

    static void LogUnlinkKongregateAccountRequest( PlayFab::AccountManagementModels::UnlinkKongregateAccountRequest* request, const char* testName );
    static void FillUnlinkKongregateAccountRequest( PlayFab::AccountManagementModels::UnlinkKongregateAccountRequest* request );

    static void LogUnlinkNintendoServiceAccountRequest( PlayFab::AccountManagementModels::UnlinkNintendoServiceAccountRequest* request, const char* testName );
    static void FillUnlinkNintendoServiceAccountRequest( PlayFab::AccountManagementModels::UnlinkNintendoServiceAccountRequest* request );

    static void LogUnlinkNintendoSwitchDeviceIdRequest( PlayFab::AccountManagementModels::UnlinkNintendoSwitchDeviceIdRequest* request, const char* testName );
    static void FillUnlinkNintendoSwitchDeviceIdRequest( PlayFab::AccountManagementModels::UnlinkNintendoSwitchDeviceIdRequest* request );

    static void LogUnlinkOpenIdConnectRequest( PlayFab::AccountManagementModels::UnlinkOpenIdConnectRequest* request, const char* testName );
    static void FillUnlinkOpenIdConnectRequest( PlayFab::AccountManagementModels::UnlinkOpenIdConnectRequest* request );

    static void LogClientUnlinkPSNAccountRequest( PlayFab::AccountManagementModels::ClientUnlinkPSNAccountRequest* request, const char* testName );
    static void FillClientUnlinkPSNAccountRequest( PlayFab::AccountManagementModels::ClientUnlinkPSNAccountRequest* request );

    static void LogUnlinkSteamAccountRequest( PlayFab::AccountManagementModels::UnlinkSteamAccountRequest* request, const char* testName );
    static void FillUnlinkSteamAccountRequest( PlayFab::AccountManagementModels::UnlinkSteamAccountRequest* request );

    static void LogUnlinkTwitchAccountRequest( PlayFab::AccountManagementModels::UnlinkTwitchAccountRequest* request, const char* testName );
    static void FillUnlinkTwitchAccountRequest( PlayFab::AccountManagementModels::UnlinkTwitchAccountRequest* request );

    static void LogClientUnlinkXboxAccountRequest( PlayFab::AccountManagementModels::ClientUnlinkXboxAccountRequest* request, const char* testName );
    static void FillClientUnlinkXboxAccountRequest( PlayFab::AccountManagementModels::ClientUnlinkXboxAccountRequest* request );

    static void LogClientUpdateAvatarUrlRequest( PlayFab::AccountManagementModels::ClientUpdateAvatarUrlRequest* request, const char* testName );
    static void FillClientUpdateAvatarUrlRequest( PlayFab::AccountManagementModels::ClientUpdateAvatarUrlRequest* request );

    static void LogClientUpdateUserTitleDisplayNameRequest( PlayFab::AccountManagementModels::ClientUpdateUserTitleDisplayNameRequest* request, const char* testName );
    static void FillClientUpdateUserTitleDisplayNameRequest( PlayFab::AccountManagementModels::ClientUpdateUserTitleDisplayNameRequest* request );

    static void LogServerAddGenericIDRequest( PlayFab::AccountManagementModels::ServerAddGenericIDRequest* request, const char* testName );
    static void FillServerAddGenericIDRequest( PlayFab::AccountManagementModels::ServerAddGenericIDRequest* request );



    static void LogDeletePushNotificationTemplateRequest( PlayFab::AccountManagementModels::DeletePushNotificationTemplateRequest* request, const char* testName );
    static void FillDeletePushNotificationTemplateRequest( PlayFab::AccountManagementModels::DeletePushNotificationTemplateRequest* request );









    static void LogGetServerCustomIDsFromPlayFabIDsRequest( PlayFab::AccountManagementModels::GetServerCustomIDsFromPlayFabIDsRequest* request, const char* testName );
    static void FillGetServerCustomIDsFromPlayFabIDsRequest( PlayFab::AccountManagementModels::GetServerCustomIDsFromPlayFabIDsRequest* request );
    static HRESULT LogPFAccountManagementGetServerCustomIDsFromPlayFabIDsResult( PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult* result );
    static HRESULT ValidatePFAccountManagementGetServerCustomIDsFromPlayFabIDsResult( PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult* result );

    static void LogGetUserAccountInfoRequest( PlayFab::AccountManagementModels::GetUserAccountInfoRequest* request, const char* testName );
    static void FillGetUserAccountInfoRequest( PlayFab::AccountManagementModels::GetUserAccountInfoRequest* request );
    static HRESULT LogPFAccountManagementGetUserAccountInfoResult( PFAccountManagementGetUserAccountInfoResult* result );
    static HRESULT ValidatePFAccountManagementGetUserAccountInfoResult( PFAccountManagementGetUserAccountInfoResult* result );


    static void LogServerLinkPSNAccountRequest( PlayFab::AccountManagementModels::ServerLinkPSNAccountRequest* request, const char* testName );
    static void FillServerLinkPSNAccountRequest( PlayFab::AccountManagementModels::ServerLinkPSNAccountRequest* request );

    static void LogLinkServerCustomIdRequest( PlayFab::AccountManagementModels::LinkServerCustomIdRequest* request, const char* testName );
    static void FillLinkServerCustomIdRequest( PlayFab::AccountManagementModels::LinkServerCustomIdRequest* request );

    static void LogServerLinkXboxAccountRequest( PlayFab::AccountManagementModels::ServerLinkXboxAccountRequest* request, const char* testName );
    static void FillServerLinkXboxAccountRequest( PlayFab::AccountManagementModels::ServerLinkXboxAccountRequest* request );

    static void LogServerRemoveGenericIDRequest( PlayFab::AccountManagementModels::ServerRemoveGenericIDRequest* request, const char* testName );
    static void FillServerRemoveGenericIDRequest( PlayFab::AccountManagementModels::ServerRemoveGenericIDRequest* request );



    static void LogSavePushNotificationTemplateRequest( PlayFab::AccountManagementModels::SavePushNotificationTemplateRequest* request, const char* testName );
    static void FillSavePushNotificationTemplateRequest( PlayFab::AccountManagementModels::SavePushNotificationTemplateRequest* request );
    static HRESULT LogPFAccountManagementSavePushNotificationTemplateResult( PFAccountManagementSavePushNotificationTemplateResult* result );
    static HRESULT ValidatePFAccountManagementSavePushNotificationTemplateResult( PFAccountManagementSavePushNotificationTemplateResult* result );

    static void LogSendCustomAccountRecoveryEmailRequest( PlayFab::AccountManagementModels::SendCustomAccountRecoveryEmailRequest* request, const char* testName );
    static void FillSendCustomAccountRecoveryEmailRequest( PlayFab::AccountManagementModels::SendCustomAccountRecoveryEmailRequest* request );

    static void LogSendEmailFromTemplateRequest( PlayFab::AccountManagementModels::SendEmailFromTemplateRequest* request, const char* testName );
    static void FillSendEmailFromTemplateRequest( PlayFab::AccountManagementModels::SendEmailFromTemplateRequest* request );

    static void LogSendPushNotificationRequest( PlayFab::AccountManagementModels::SendPushNotificationRequest* request, const char* testName );
    static void FillSendPushNotificationRequest( PlayFab::AccountManagementModels::SendPushNotificationRequest* request );

    static void LogSendPushNotificationFromTemplateRequest( PlayFab::AccountManagementModels::SendPushNotificationFromTemplateRequest* request, const char* testName );
    static void FillSendPushNotificationFromTemplateRequest( PlayFab::AccountManagementModels::SendPushNotificationFromTemplateRequest* request );

    static void LogServerUnlinkPSNAccountRequest( PlayFab::AccountManagementModels::ServerUnlinkPSNAccountRequest* request, const char* testName );
    static void FillServerUnlinkPSNAccountRequest( PlayFab::AccountManagementModels::ServerUnlinkPSNAccountRequest* request );

    static void LogUnlinkServerCustomIdRequest( PlayFab::AccountManagementModels::UnlinkServerCustomIdRequest* request, const char* testName );
    static void FillUnlinkServerCustomIdRequest( PlayFab::AccountManagementModels::UnlinkServerCustomIdRequest* request );

    static void LogServerUnlinkXboxAccountRequest( PlayFab::AccountManagementModels::ServerUnlinkXboxAccountRequest* request, const char* testName );
    static void FillServerUnlinkXboxAccountRequest( PlayFab::AccountManagementModels::ServerUnlinkXboxAccountRequest* request );

    static void LogServerUpdateAvatarUrlRequest( PlayFab::AccountManagementModels::ServerUpdateAvatarUrlRequest* request, const char* testName );
    static void FillServerUpdateAvatarUrlRequest( PlayFab::AccountManagementModels::ServerUpdateAvatarUrlRequest* request );


    static void LogGetGlobalPolicyRequest( PlayFab::AccountManagementModels::GetGlobalPolicyRequest* request, const char* testName );
    static void FillGetGlobalPolicyRequest( PlayFab::AccountManagementModels::GetGlobalPolicyRequest* request );
    static HRESULT LogPFAccountManagementGetGlobalPolicyResponse( PFAccountManagementGetGlobalPolicyResponse* result );
    static HRESULT ValidatePFAccountManagementGetGlobalPolicyResponse( PFAccountManagementGetGlobalPolicyResponse* result );

    static void LogGetEntityProfileRequest( PlayFab::AccountManagementModels::GetEntityProfileRequest* request, const char* testName );
    static void FillGetEntityProfileRequest( PlayFab::AccountManagementModels::GetEntityProfileRequest* request );
    static HRESULT LogPFAccountManagementGetEntityProfileResponse( PFAccountManagementGetEntityProfileResponse* result );
    static HRESULT ValidatePFAccountManagementGetEntityProfileResponse( PFAccountManagementGetEntityProfileResponse* result );

    static void LogGetEntityProfilesRequest( PlayFab::AccountManagementModels::GetEntityProfilesRequest* request, const char* testName );
    static void FillGetEntityProfilesRequest( PlayFab::AccountManagementModels::GetEntityProfilesRequest* request );
    static HRESULT LogPFAccountManagementGetEntityProfilesResponse( PFAccountManagementGetEntityProfilesResponse* result );
    static HRESULT ValidatePFAccountManagementGetEntityProfilesResponse( PFAccountManagementGetEntityProfilesResponse* result );

    static void LogGetTitlePlayersFromMasterPlayerAccountIdsRequest( PlayFab::AccountManagementModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest* request, const char* testName );
    static void FillGetTitlePlayersFromMasterPlayerAccountIdsRequest( PlayFab::AccountManagementModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest* request );
    static HRESULT LogPFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse( PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse* result );
    static HRESULT ValidatePFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse( PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse* result );

    static void LogSetGlobalPolicyRequest( PlayFab::AccountManagementModels::SetGlobalPolicyRequest* request, const char* testName );
    static void FillSetGlobalPolicyRequest( PlayFab::AccountManagementModels::SetGlobalPolicyRequest* request );

    static void LogSetProfileLanguageRequest( PlayFab::AccountManagementModels::SetProfileLanguageRequest* request, const char* testName );
    static void FillSetProfileLanguageRequest( PlayFab::AccountManagementModels::SetProfileLanguageRequest* request );
    static HRESULT LogPFAccountManagementSetProfileLanguageResponse( PFAccountManagementSetProfileLanguageResponse* result );
    static HRESULT ValidatePFAccountManagementSetProfileLanguageResponse( PFAccountManagementSetProfileLanguageResponse* result );

    static void LogSetEntityProfilePolicyRequest( PlayFab::AccountManagementModels::SetEntityProfilePolicyRequest* request, const char* testName );
    static void FillSetEntityProfilePolicyRequest( PlayFab::AccountManagementModels::SetEntityProfilePolicyRequest* request );
    static HRESULT LogPFAccountManagementSetEntityProfilePolicyResponse( PFAccountManagementSetEntityProfilePolicyResponse* result );
    static HRESULT ValidatePFAccountManagementSetEntityProfilePolicyResponse( PFAccountManagementSetEntityProfilePolicyResponse* result );

    struct AccountManagementTestData
    {
        ~AccountManagementTestData()
        {

        }

    };

    static AccountManagementTestData testData;

public:
    PFStateHandle stateHandle{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle2{ nullptr };
    PFEntityHandle entityHandle2{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo2{ nullptr };
    PFEntityHandle titleEntityHandle{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
