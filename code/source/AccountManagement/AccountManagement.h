#pragma once

#include "AccountManagementDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class AccountManagementAPI
{
public:
    AccountManagementAPI() = delete;
    AccountManagementAPI(const AccountManagementAPI& source) = delete;
    AccountManagementAPI& operator=(const AccountManagementAPI& source) = delete;
    ~AccountManagementAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<AccountManagementModels::BanUsersResult> AdminBanUsers(SharedPtr<GlobalState const> state, const PFAccountManagementBanUsersRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::DeleteMasterPlayerAccountResult> AdminDeleteMasterPlayerAccount(SharedPtr<GlobalState const> state, const PFAccountManagementDeleteMasterPlayerAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminDeletePlayer(SharedPtr<GlobalState const> state, const PFAccountManagementDeletePlayerRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminDeleteTitle(SharedPtr<GlobalState const> state, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::ExportMasterPlayerDataResult> AdminExportMasterPlayerData(SharedPtr<GlobalState const> state, const PFAccountManagementExportMasterPlayerDataRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayedTitleListResult> AdminGetPlayedTitleList(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayedTitleListRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayerIdFromAuthTokenResult> AdminGetPlayerIdFromAuthToken(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayerIdFromAuthTokenRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayerProfileResult> AdminGetPlayerProfile(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayerProfileRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::LookupUserAccountInfoResult> AdminGetUserAccountInfo(SharedPtr<GlobalState const> state, const PFAccountManagementLookupUserAccountInfoRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetUserBansResult> AdminGetUserBans(SharedPtr<GlobalState const> state, const PFAccountManagementGetUserBansRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminResetPassword(SharedPtr<GlobalState const> state, const PFAccountManagementResetPasswordRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::RevokeAllBansForUserResult> AdminRevokeAllBansForUser(SharedPtr<GlobalState const> state, const PFAccountManagementRevokeAllBansForUserRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::RevokeBansResult> AdminRevokeBans(SharedPtr<GlobalState const> state, const PFAccountManagementRevokeBansRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminSendAccountRecoveryEmail(SharedPtr<GlobalState const> state, const PFAccountManagementAdminSendAccountRecoveryEmailRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::UpdateBansResult> AdminUpdateBans(SharedPtr<GlobalState const> state, const PFAccountManagementUpdateBansRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::UpdateUserTitleDisplayNameResult> AdminUpdateUserTitleDisplayName(SharedPtr<GlobalState const> state, const PFAccountManagementAdminUpdateUserTitleDisplayNameRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientAddGenericID(SharedPtr<TitlePlayer> entity, const PFAccountManagementClientAddGenericIDRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientAddOrUpdateContactEmail(SharedPtr<TitlePlayer> entity, const PFAccountManagementAddOrUpdateContactEmailRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::AddUsernamePasswordResult> ClientAddUsernamePassword(SharedPtr<TitlePlayer> entity, const PFAccountManagementAddUsernamePasswordRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetAccountInfoResult> ClientGetAccountInfo(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetAccountInfoRequest& request, const TaskQueue& queue);
    static AsyncOp<GetPlayerCombinedInfoResult> ClientGetPlayerCombinedInfo(SharedPtr<TitlePlayer> entity, const PFGetPlayerCombinedInfoRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayerProfileResult> ClientGetPlayerProfile(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayerProfileRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromFacebookIDsResult> ClientGetPlayFabIDsFromFacebookIDs(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> ClientGetPlayFabIDsFromFacebookInstantGamesIds(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromGameCenterIDsResult> ClientGetPlayFabIDsFromGameCenterIDs(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromGenericIDsResult> ClientGetPlayFabIDsFromGenericIDs(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromGoogleIDsResult> ClientGetPlayFabIDsFromGoogleIDs(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromKongregateIDsResult> ClientGetPlayFabIDsFromKongregateIDs(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> ClientGetPlayFabIDsFromNintendoSwitchDeviceIds(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromPSNAccountIDsResult> ClientGetPlayFabIDsFromPSNAccountIDs(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromSteamIDsResult> ClientGetPlayFabIDsFromSteamIDs(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromTwitchIDsResult> ClientGetPlayFabIDsFromTwitchIDs(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromXboxLiveIDsResult> ClientGetPlayFabIDsFromXboxLiveIDs(SharedPtr<TitlePlayer> entity, const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkAndroidDeviceID(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkAndroidDeviceIDRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkApple(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkAppleRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkCustomID(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkCustomIDRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkFacebookAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkFacebookAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkFacebookInstantGamesId(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkFacebookInstantGamesIdRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkGameCenterAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkGameCenterAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkGoogleAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkGoogleAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkIOSDeviceID(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkIOSDeviceIDRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkKongregate(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkKongregateAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkNintendoServiceAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkNintendoServiceAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkNintendoSwitchDeviceId(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkOpenIdConnect(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkOpenIdConnectRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkPSNAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementClientLinkPSNAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkSteamAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkSteamAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkTwitch(SharedPtr<TitlePlayer> entity, const PFAccountManagementLinkTwitchAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientLinkXboxAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementClientLinkXboxAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientRemoveContactEmail(SharedPtr<TitlePlayer> entity, const PFAccountManagementRemoveContactEmailRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientRemoveGenericID(SharedPtr<TitlePlayer> entity, const PFAccountManagementClientRemoveGenericIDRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::ReportPlayerClientResult> ClientReportPlayer(SharedPtr<TitlePlayer> entity, const PFAccountManagementReportPlayerClientRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientSendAccountRecoveryEmail(SharedPtr<GlobalState const> state, const PFAccountManagementClientSendAccountRecoveryEmailRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkAndroidDeviceID(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkAndroidDeviceIDRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkApple(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkAppleRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkCustomID(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkCustomIDRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkFacebookAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkFacebookAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkFacebookInstantGamesId(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkFacebookInstantGamesIdRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkGameCenterAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkGameCenterAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkGoogleAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkGoogleAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkIOSDeviceID(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkIOSDeviceIDRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkKongregate(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkKongregateAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkNintendoServiceAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkNintendoServiceAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkNintendoSwitchDeviceId(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkOpenIdConnect(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkOpenIdConnectRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkPSNAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementClientUnlinkPSNAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkSteamAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkSteamAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkTwitch(SharedPtr<TitlePlayer> entity, const PFAccountManagementUnlinkTwitchAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUnlinkXboxAccount(SharedPtr<TitlePlayer> entity, const PFAccountManagementClientUnlinkXboxAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUpdateAvatarUrl(SharedPtr<TitlePlayer> entity, const PFAccountManagementClientUpdateAvatarUrlRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::UpdateUserTitleDisplayNameResult> ClientUpdateUserTitleDisplayName(SharedPtr<TitlePlayer> entity, const PFAccountManagementClientUpdateUserTitleDisplayNameRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerAddGenericID(SharedPtr<GlobalState const> state, const PFAccountManagementServerAddGenericIDRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::BanUsersResult> ServerBanUsers(SharedPtr<GlobalState const> state, const PFAccountManagementBanUsersRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerDeletePlayer(SharedPtr<GlobalState const> state, const PFAccountManagementDeletePlayerRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerDeletePushNotificationTemplate(SharedPtr<GlobalState const> state, const PFAccountManagementDeletePushNotificationTemplateRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayerProfileResult> ServerGetPlayerProfile(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayerProfileRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromFacebookIDsResult> ServerGetPlayFabIDsFromFacebookIDs(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> ServerGetPlayFabIDsFromFacebookInstantGamesIds(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromGenericIDsResult> ServerGetPlayFabIDsFromGenericIDs(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> ServerGetPlayFabIDsFromNintendoSwitchDeviceIds(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromPSNAccountIDsResult> ServerGetPlayFabIDsFromPSNAccountIDs(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromSteamIDsResult> ServerGetPlayFabIDsFromSteamIDs(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetPlayFabIDsFromXboxLiveIDsResult> ServerGetPlayFabIDsFromXboxLiveIDs(SharedPtr<GlobalState const> state, const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetServerCustomIDsFromPlayFabIDsResult> ServerGetServerCustomIDsFromPlayFabIDs(SharedPtr<GlobalState const> state, const PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetUserAccountInfoResult> ServerGetUserAccountInfo(SharedPtr<GlobalState const> state, const PFAccountManagementGetUserAccountInfoRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetUserBansResult> ServerGetUserBans(SharedPtr<GlobalState const> state, const PFAccountManagementGetUserBansRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerLinkPSNAccount(SharedPtr<GlobalState const> state, const PFAccountManagementServerLinkPSNAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerLinkServerCustomId(SharedPtr<GlobalState const> state, const PFAccountManagementLinkServerCustomIdRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerLinkXboxAccount(SharedPtr<GlobalState const> state, const PFAccountManagementServerLinkXboxAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerRemoveGenericID(SharedPtr<GlobalState const> state, const PFAccountManagementServerRemoveGenericIDRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::RevokeAllBansForUserResult> ServerRevokeAllBansForUser(SharedPtr<GlobalState const> state, const PFAccountManagementRevokeAllBansForUserRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::RevokeBansResult> ServerRevokeBans(SharedPtr<GlobalState const> state, const PFAccountManagementRevokeBansRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::SavePushNotificationTemplateResult> ServerSavePushNotificationTemplate(SharedPtr<GlobalState const> state, const PFAccountManagementSavePushNotificationTemplateRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSendCustomAccountRecoveryEmail(SharedPtr<GlobalState const> state, const PFAccountManagementSendCustomAccountRecoveryEmailRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSendEmailFromTemplate(SharedPtr<GlobalState const> state, const PFAccountManagementSendEmailFromTemplateRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSendPushNotification(SharedPtr<GlobalState const> state, const PFAccountManagementSendPushNotificationRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSendPushNotificationFromTemplate(SharedPtr<GlobalState const> state, const PFAccountManagementSendPushNotificationFromTemplateRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerUnlinkPSNAccount(SharedPtr<GlobalState const> state, const PFAccountManagementServerUnlinkPSNAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerUnlinkServerCustomId(SharedPtr<GlobalState const> state, const PFAccountManagementUnlinkServerCustomIdRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerUnlinkXboxAccount(SharedPtr<GlobalState const> state, const PFAccountManagementServerUnlinkXboxAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerUpdateAvatarUrl(SharedPtr<GlobalState const> state, const PFAccountManagementServerUpdateAvatarUrlRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::UpdateBansResult> ServerUpdateBans(SharedPtr<GlobalState const> state, const PFAccountManagementUpdateBansRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetGlobalPolicyResponse> GetGlobalPolicy(SharedPtr<Entity> entity, const PFAccountManagementGetGlobalPolicyRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetEntityProfileResponse> GetProfile(SharedPtr<Entity> entity, const PFAccountManagementGetEntityProfileRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetEntityProfilesResponse> GetProfiles(SharedPtr<Entity> entity, const PFAccountManagementGetEntityProfilesRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse> GetTitlePlayersFromMasterPlayerAccountIds(SharedPtr<Entity> entity, const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> SetGlobalPolicy(SharedPtr<Entity> entity, const PFAccountManagementSetGlobalPolicyRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::SetProfileLanguageResponse> SetProfileLanguage(SharedPtr<Entity> entity, const PFAccountManagementSetProfileLanguageRequest& request, const TaskQueue& queue);
    static AsyncOp<AccountManagementModels::SetEntityProfilePolicyResponse> SetProfilePolicy(SharedPtr<Entity> entity, const PFAccountManagementSetEntityProfilePolicyRequest& request, const TaskQueue& queue);
};

}
