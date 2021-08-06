#pragma once

#include "AccountManagementDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class AccountManagementAPI
{
public:
    AccountManagementAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    AccountManagementAPI(const AccountManagementAPI& source) = delete;
    AccountManagementAPI& operator=(const AccountManagementAPI& source) = delete;
    ~AccountManagementAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<AccountManagementModels::BanUsersResult> AdminBanUsers(const PFAccountManagementBanUsersRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::DeleteMasterPlayerAccountResult> AdminDeleteMasterPlayerAccount(const PFAccountManagementDeleteMasterPlayerAccountRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminDeletePlayer(const PFAccountManagementDeletePlayerRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminDeleteTitle(SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::ExportMasterPlayerDataResult> AdminExportMasterPlayerData(const PFAccountManagementExportMasterPlayerDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayedTitleListResult> AdminGetPlayedTitleList(const PFAccountManagementGetPlayedTitleListRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayerIdFromAuthTokenResult> AdminGetPlayerIdFromAuthToken(const PFAccountManagementGetPlayerIdFromAuthTokenRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayerProfileResult> AdminGetPlayerProfile(const PFAccountManagementGetPlayerProfileRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::LookupUserAccountInfoResult> AdminGetUserAccountInfo(const PFAccountManagementLookupUserAccountInfoRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetUserBansResult> AdminGetUserBans(const PFAccountManagementGetUserBansRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminResetPassword(const PFAccountManagementResetPasswordRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::RevokeAllBansForUserResult> AdminRevokeAllBansForUser(const PFAccountManagementRevokeAllBansForUserRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::RevokeBansResult> AdminRevokeBans(const PFAccountManagementRevokeBansRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminSendAccountRecoveryEmail(const PFAccountManagementAdminSendAccountRecoveryEmailRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::UpdateBansResult> AdminUpdateBans(const PFAccountManagementUpdateBansRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::UpdateUserTitleDisplayNameResult> AdminUpdateUserTitleDisplayName(const PFAccountManagementAdminUpdateUserTitleDisplayNameRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<void> ClientAddGenericID(const PFAccountManagementClientAddGenericIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientAddOrUpdateContactEmail(const PFAccountManagementAddOrUpdateContactEmailRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::AddUsernamePasswordResult> ClientAddUsernamePassword(const PFAccountManagementAddUsernamePasswordRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetAccountInfoResult> ClientGetAccountInfo(const PFAccountManagementGetAccountInfoRequest& request, const TaskQueue& queue) const;
    AsyncOp<GetPlayerCombinedInfoResult> ClientGetPlayerCombinedInfo(const PFGetPlayerCombinedInfoRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayerProfileResult> ClientGetPlayerProfile(const PFAccountManagementGetPlayerProfileRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromFacebookIDsResult> ClientGetPlayFabIDsFromFacebookIDs(const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> ClientGetPlayFabIDsFromFacebookInstantGamesIds(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromGameCenterIDsResult> ClientGetPlayFabIDsFromGameCenterIDs(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromGenericIDsResult> ClientGetPlayFabIDsFromGenericIDs(const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromGoogleIDsResult> ClientGetPlayFabIDsFromGoogleIDs(const PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromKongregateIDsResult> ClientGetPlayFabIDsFromKongregateIDs(const PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> ClientGetPlayFabIDsFromNintendoSwitchDeviceIds(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromPSNAccountIDsResult> ClientGetPlayFabIDsFromPSNAccountIDs(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromSteamIDsResult> ClientGetPlayFabIDsFromSteamIDs(const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromTwitchIDsResult> ClientGetPlayFabIDsFromTwitchIDs(const PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetPlayFabIDsFromXboxLiveIDsResult> ClientGetPlayFabIDsFromXboxLiveIDs(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkAndroidDeviceID(const PFAccountManagementLinkAndroidDeviceIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkApple(const PFAccountManagementLinkAppleRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkCustomID(const PFAccountManagementLinkCustomIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkFacebookAccount(const PFAccountManagementLinkFacebookAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkFacebookInstantGamesId(const PFAccountManagementLinkFacebookInstantGamesIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkGameCenterAccount(const PFAccountManagementLinkGameCenterAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkGoogleAccount(const PFAccountManagementLinkGoogleAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkIOSDeviceID(const PFAccountManagementLinkIOSDeviceIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkKongregate(const PFAccountManagementLinkKongregateAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkNintendoServiceAccount(const PFAccountManagementLinkNintendoServiceAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkNintendoSwitchDeviceId(const PFAccountManagementLinkNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkOpenIdConnect(const PFAccountManagementLinkOpenIdConnectRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkPSNAccount(const PFAccountManagementClientLinkPSNAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkSteamAccount(const PFAccountManagementLinkSteamAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkTwitch(const PFAccountManagementLinkTwitchAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientLinkXboxAccount(const PFAccountManagementClientLinkXboxAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientRemoveContactEmail(const PFAccountManagementRemoveContactEmailRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientRemoveGenericID(const PFAccountManagementClientRemoveGenericIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::ReportPlayerClientResult> ClientReportPlayer(const PFAccountManagementReportPlayerClientRequest& request, const TaskQueue& queue) const;
    static AsyncOp<void> ClientSendAccountRecoveryEmail(const PFAccountManagementClientSendAccountRecoveryEmailRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<void> ClientUnlinkAndroidDeviceID(const PFAccountManagementUnlinkAndroidDeviceIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkApple(const PFAccountManagementUnlinkAppleRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkCustomID(const PFAccountManagementUnlinkCustomIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkFacebookAccount(const PFAccountManagementUnlinkFacebookAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkFacebookInstantGamesId(const PFAccountManagementUnlinkFacebookInstantGamesIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkGameCenterAccount(const PFAccountManagementUnlinkGameCenterAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkGoogleAccount(const PFAccountManagementUnlinkGoogleAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkIOSDeviceID(const PFAccountManagementUnlinkIOSDeviceIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkKongregate(const PFAccountManagementUnlinkKongregateAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkNintendoServiceAccount(const PFAccountManagementUnlinkNintendoServiceAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkNintendoSwitchDeviceId(const PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkOpenIdConnect(const PFAccountManagementUnlinkOpenIdConnectRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkPSNAccount(const PFAccountManagementClientUnlinkPSNAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkSteamAccount(const PFAccountManagementUnlinkSteamAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkTwitch(const PFAccountManagementUnlinkTwitchAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUnlinkXboxAccount(const PFAccountManagementClientUnlinkXboxAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUpdateAvatarUrl(const PFAccountManagementClientUpdateAvatarUrlRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::UpdateUserTitleDisplayNameResult> ClientUpdateUserTitleDisplayName(const PFAccountManagementClientUpdateUserTitleDisplayNameRequest& request, const TaskQueue& queue) const;
    static AsyncOp<void> ServerAddGenericID(const PFAccountManagementServerAddGenericIDRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::BanUsersResult> ServerBanUsers(const PFAccountManagementBanUsersRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerDeletePlayer(const PFAccountManagementDeletePlayerRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerDeletePushNotificationTemplate(const PFAccountManagementDeletePushNotificationTemplateRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayerProfileResult> ServerGetPlayerProfile(const PFAccountManagementGetPlayerProfileRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromFacebookIDsResult> ServerGetPlayFabIDsFromFacebookIDs(const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> ServerGetPlayFabIDsFromFacebookInstantGamesIds(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromGenericIDsResult> ServerGetPlayFabIDsFromGenericIDs(const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> ServerGetPlayFabIDsFromNintendoSwitchDeviceIds(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromPSNAccountIDsResult> ServerGetPlayFabIDsFromPSNAccountIDs(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromSteamIDsResult> ServerGetPlayFabIDsFromSteamIDs(const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromXboxLiveIDsResult> ServerGetPlayFabIDsFromXboxLiveIDs(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetServerCustomIDsFromPlayFabIDsResult> ServerGetServerCustomIDsFromPlayFabIDs(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetUserAccountInfoResult> ServerGetUserAccountInfo(const PFAccountManagementGetUserAccountInfoRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetUserBansResult> ServerGetUserBans(const PFAccountManagementGetUserBansRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerLinkPSNAccount(const PFAccountManagementServerLinkPSNAccountRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerLinkServerCustomId(const PFAccountManagementLinkServerCustomIdRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerLinkXboxAccount(const PFAccountManagementServerLinkXboxAccountRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerRemoveGenericID(const PFAccountManagementServerRemoveGenericIDRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::RevokeAllBansForUserResult> ServerRevokeAllBansForUser(const PFAccountManagementRevokeAllBansForUserRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::RevokeBansResult> ServerRevokeBans(const PFAccountManagementRevokeBansRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::SavePushNotificationTemplateResult> ServerSavePushNotificationTemplate(const PFAccountManagementSavePushNotificationTemplateRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSendCustomAccountRecoveryEmail(const PFAccountManagementSendCustomAccountRecoveryEmailRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSendEmailFromTemplate(const PFAccountManagementSendEmailFromTemplateRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSendPushNotification(const PFAccountManagementSendPushNotificationRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSendPushNotificationFromTemplate(const PFAccountManagementSendPushNotificationFromTemplateRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerUnlinkPSNAccount(const PFAccountManagementServerUnlinkPSNAccountRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerUnlinkServerCustomId(const PFAccountManagementUnlinkServerCustomIdRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerUnlinkXboxAccount(const PFAccountManagementServerUnlinkXboxAccountRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerUpdateAvatarUrl(const PFAccountManagementServerUpdateAvatarUrlRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::UpdateBansResult> ServerUpdateBans(const PFAccountManagementUpdateBansRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<AccountManagementModels::GetGlobalPolicyResponse> GetGlobalPolicy(const PFAccountManagementGetGlobalPolicyRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetEntityProfileResponse> GetProfile(const PFAccountManagementGetEntityProfileRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetEntityProfilesResponse> GetProfiles(const PFAccountManagementGetEntityProfilesRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse> GetTitlePlayersFromMasterPlayerAccountIds(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> SetGlobalPolicy(const PFAccountManagementSetGlobalPolicyRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::SetProfileLanguageResponse> SetProfileLanguage(const PFAccountManagementSetProfileLanguageRequest& request, const TaskQueue& queue) const;
    AsyncOp<AccountManagementModels::SetEntityProfilePolicyResponse> SetProfilePolicy(const PFAccountManagementSetEntityProfilePolicyRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
