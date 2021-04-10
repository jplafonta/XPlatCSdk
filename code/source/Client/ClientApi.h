#pragma once

#include "ClientDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
struct AuthTokens;

class ClientAPI
{
public:
    ClientAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    ClientAPI(const ClientAPI& source) = delete;
    ClientAPI& operator=(const ClientAPI& source) = delete;
    ~ClientAPI() = default;

    // ------------ Generated API calls
    AsyncOp<ClientModels::AcceptTradeResponse> AcceptTrade(const PlayFabClientAcceptTradeRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::AddFriendResult> AddFriend(const PlayFabClientAddFriendRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddGenericID(const PlayFabClientAddGenericIDRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddOrUpdateContactEmail(const PlayFabClientAddOrUpdateContactEmailRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddSharedGroupMembers(const PlayFabClientAddSharedGroupMembersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::AddUsernamePasswordResult> AddUsernamePassword(const PlayFabClientAddUsernamePasswordRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ModifyUserVirtualCurrencyResult> AddUserVirtualCurrency(const PlayFabClientAddUserVirtualCurrencyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AndroidDevicePushNotificationRegistration(const PlayFabClientAndroidDevicePushNotificationRegistrationRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AttributeInstall(const PlayFabClientAttributeInstallRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::CancelTradeResponse> CancelTrade(const PlayFabClientCancelTradeRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ConfirmPurchaseResult> ConfirmPurchase(const PlayFabClientConfirmPurchaseRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ConsumeItemResult> ConsumeItem(const PlayFabClientConsumeItemRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ConsumeMicrosoftStoreEntitlementsResponse> ConsumeMicrosoftStoreEntitlements(const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ConsumePS5EntitlementsResult> ConsumePS5Entitlements(const PlayFabClientConsumePS5EntitlementsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ConsumePSNEntitlementsResult> ConsumePSNEntitlements(const PlayFabClientConsumePSNEntitlementsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ConsumeXboxEntitlementsResult> ConsumeXboxEntitlements(const PlayFabClientConsumeXboxEntitlementsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::CreateSharedGroupResult> CreateSharedGroup(const PlayFabClientCreateSharedGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ExecuteCloudScriptResult> ExecuteCloudScript(const PlayFabClientExecuteCloudScriptRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetAccountInfoResult> GetAccountInfo(const PlayFabClientGetAccountInfoRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetAdPlacementsResult> GetAdPlacements(const PlayFabClientGetAdPlacementsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ListUsersCharactersResult> GetAllUsersCharacters(const PlayFabClientListUsersCharactersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetCatalogItemsResult> GetCatalogItems(const PlayFabClientGetCatalogItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetCharacterDataResult> GetCharacterData(const PlayFabClientGetCharacterDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetCharacterInventoryResult> GetCharacterInventory(const PlayFabClientGetCharacterInventoryRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetCharacterLeaderboardResult> GetCharacterLeaderboard(const PlayFabClientGetCharacterLeaderboardRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetCharacterDataResult> GetCharacterReadOnlyData(const PlayFabClientGetCharacterDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetCharacterStatisticsResult> GetCharacterStatistics(const PlayFabClientGetCharacterStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetContentDownloadUrlResult> GetContentDownloadUrl(const PlayFabClientGetContentDownloadUrlRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::CurrentGamesResult> GetCurrentGames(const PlayFabClientCurrentGamesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetLeaderboardResult> GetFriendLeaderboard(const PlayFabClientGetFriendLeaderboardRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetFriendLeaderboardAroundPlayerResult> GetFriendLeaderboardAroundPlayer(const PlayFabClientGetFriendLeaderboardAroundPlayerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetFriendsListResult> GetFriendsList(const PlayFabClientGetFriendsListRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GameServerRegionsResult> GetGameServerRegions(const PlayFabClientGameServerRegionsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetLeaderboardResult> GetLeaderboard(const PlayFabClientGetLeaderboardRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetLeaderboardAroundCharacterResult> GetLeaderboardAroundCharacter(const PlayFabClientGetLeaderboardAroundCharacterRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetLeaderboardAroundPlayerResult> GetLeaderboardAroundPlayer(const PlayFabClientGetLeaderboardAroundPlayerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetLeaderboardForUsersCharactersResult> GetLeaderboardForUserCharacters(const PlayFabClientGetLeaderboardForUsersCharactersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPaymentTokenResult> GetPaymentToken(const PlayFabClientGetPaymentTokenRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPhotonAuthenticationTokenResult> GetPhotonAuthenticationToken(const PlayFabClientGetPhotonAuthenticationTokenRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayerCombinedInfoResult> GetPlayerCombinedInfo(const PlayFabClientGetPlayerCombinedInfoRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayerProfileResult> GetPlayerProfile(const PlayFabClientGetPlayerProfileRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayerSegmentsResult> GetPlayerSegments(const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayerStatisticsResult> GetPlayerStatistics(const PlayFabClientGetPlayerStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayerStatisticVersionsResult> GetPlayerStatisticVersions(const PlayFabClientGetPlayerStatisticVersionsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayerTagsResult> GetPlayerTags(const PlayFabClientGetPlayerTagsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayerTradesResponse> GetPlayerTrades(const PlayFabClientGetPlayerTradesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromFacebookIDsResult> GetPlayFabIDsFromFacebookIDs(const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> GetPlayFabIDsFromFacebookInstantGamesIds(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromGameCenterIDsResult> GetPlayFabIDsFromGameCenterIDs(const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromGenericIDsResult> GetPlayFabIDsFromGenericIDs(const PlayFabClientGetPlayFabIDsFromGenericIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromGoogleIDsResult> GetPlayFabIDsFromGoogleIDs(const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromKongregateIDsResult> GetPlayFabIDsFromKongregateIDs(const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> GetPlayFabIDsFromNintendoSwitchDeviceIds(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromPSNAccountIDsResult> GetPlayFabIDsFromPSNAccountIDs(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromSteamIDsResult> GetPlayFabIDsFromSteamIDs(const PlayFabClientGetPlayFabIDsFromSteamIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromTwitchIDsResult> GetPlayFabIDsFromTwitchIDs(const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPlayFabIDsFromXboxLiveIDsResult> GetPlayFabIDsFromXboxLiveIDs(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPublisherDataResult> GetPublisherData(const PlayFabClientGetPublisherDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetPurchaseResult> GetPurchase(const PlayFabClientGetPurchaseRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetSharedGroupDataResult> GetSharedGroupData(const PlayFabClientGetSharedGroupDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetStoreItemsResult> GetStoreItems(const PlayFabClientGetStoreItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetTimeResult> GetTime(const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetTitleDataResult> GetTitleData(const PlayFabClientGetTitleDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetTitleNewsResult> GetTitleNews(const PlayFabClientGetTitleNewsRequest& request, const TaskQueue& queue) const; 
    static AsyncOp<ClientModels::GetTitlePublicKeyResult> GetTitlePublicKey(const PlayFabClientGetTitlePublicKeyRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue); 
    AsyncOp<ClientModels::GetTradeStatusResponse> GetTradeStatus(const PlayFabClientGetTradeStatusRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetUserDataResult> GetUserData(const PlayFabClientGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetUserInventoryResult> GetUserInventory(const PlayFabClientGetUserInventoryRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetUserDataResult> GetUserPublisherData(const PlayFabClientGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetUserDataResult> GetUserPublisherReadOnlyData(const PlayFabClientGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::GetUserDataResult> GetUserReadOnlyData(const PlayFabClientGetUserDataRequest& request, const TaskQueue& queue) const; 
    static AsyncOp<ClientModels::GetWindowsHelloChallengeResponse> GetWindowsHelloChallenge(const PlayFabClientGetWindowsHelloChallengeRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue); 
    AsyncOp<ClientModels::GrantCharacterToUserResult> GrantCharacterToUser(const PlayFabClientGrantCharacterToUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkAndroidDeviceID(const PlayFabClientLinkAndroidDeviceIDRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkApple(const PlayFabClientLinkAppleRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkCustomID(const PlayFabClientLinkCustomIDRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkFacebookAccount(const PlayFabClientLinkFacebookAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkFacebookInstantGamesId(const PlayFabClientLinkFacebookInstantGamesIdRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkGameCenterAccount(const PlayFabClientLinkGameCenterAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkGoogleAccount(const PlayFabClientLinkGoogleAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkIOSDeviceID(const PlayFabClientLinkIOSDeviceIDRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkKongregate(const PlayFabClientLinkKongregateAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkNintendoServiceAccount(const PlayFabClientLinkNintendoServiceAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkNintendoSwitchDeviceId(const PlayFabClientLinkNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkOpenIdConnect(const PlayFabClientLinkOpenIdConnectRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkPSNAccount(const PlayFabClientLinkPSNAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkSteamAccount(const PlayFabClientLinkSteamAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkTwitch(const PlayFabClientLinkTwitchAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkWindowsHello(const PlayFabClientLinkWindowsHelloAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkXboxAccount(const PlayFabClientLinkXboxAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::MatchmakeResult> Matchmake(const PlayFabClientMatchmakeRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::OpenTradeResponse> OpenTrade(const PlayFabClientOpenTradeRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::PayForPurchaseResult> PayForPurchase(const PlayFabClientPayForPurchaseRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::PurchaseItemResult> PurchaseItem(const PlayFabClientPurchaseItemRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::RedeemCouponResult> RedeemCoupon(const PlayFabClientRedeemCouponRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RefreshPSNAuthToken(const PlayFabClientRefreshPSNAuthTokenRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RegisterForIOSPushNotification(const PlayFabClientRegisterForIOSPushNotificationRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveContactEmail(const PlayFabClientRemoveContactEmailRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveFriend(const PlayFabClientRemoveFriendRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveGenericID(const PlayFabClientRemoveGenericIDRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveSharedGroupMembers(const PlayFabClientRemoveSharedGroupMembersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> ReportAdActivity(const PlayFabClientReportAdActivityRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> ReportDeviceInfo(const PlayFabClientDeviceInfoRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ReportPlayerClientResult> ReportPlayer(const PlayFabClientReportPlayerClientRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::RestoreIOSPurchasesResult> RestoreIOSPurchases(const PlayFabClientRestoreIOSPurchasesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::RewardAdActivityResult> RewardAdActivity(const PlayFabClientRewardAdActivityRequest& request, const TaskQueue& queue) const; 
    static AsyncOp<void> SendAccountRecoveryEmail(const PlayFabClientSendAccountRecoveryEmailRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue); 
    AsyncOp<void> SetFriendTags(const PlayFabClientSetFriendTagsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetPlayerSecret(const PlayFabClientSetPlayerSecretRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::StartGameResult> StartGame(const PlayFabClientStartGameRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::StartPurchaseResult> StartPurchase(const PlayFabClientStartPurchaseRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ModifyUserVirtualCurrencyResult> SubtractUserVirtualCurrency(const PlayFabClientSubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkAndroidDeviceID(const PlayFabClientUnlinkAndroidDeviceIDRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkApple(const PlayFabClientUnlinkAppleRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkCustomID(const PlayFabClientUnlinkCustomIDRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkFacebookAccount(const PlayFabClientUnlinkFacebookAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkFacebookInstantGamesId(const PlayFabClientUnlinkFacebookInstantGamesIdRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkGameCenterAccount(const PlayFabClientUnlinkGameCenterAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkGoogleAccount(const PlayFabClientUnlinkGoogleAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkIOSDeviceID(const PlayFabClientUnlinkIOSDeviceIDRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkKongregate(const PlayFabClientUnlinkKongregateAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkNintendoServiceAccount(const PlayFabClientUnlinkNintendoServiceAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkNintendoSwitchDeviceId(const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkOpenIdConnect(const PlayFabClientUnlinkOpenIdConnectRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkPSNAccount(const PlayFabClientUnlinkPSNAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkSteamAccount(const PlayFabClientUnlinkSteamAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkTwitch(const PlayFabClientUnlinkTwitchAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkWindowsHello(const PlayFabClientUnlinkWindowsHelloAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkXboxAccount(const PlayFabClientUnlinkXboxAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::UnlockContainerItemResult> UnlockContainerInstance(const PlayFabClientUnlockContainerInstanceRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::UnlockContainerItemResult> UnlockContainerItem(const PlayFabClientUnlockContainerItemRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateAvatarUrl(const PlayFabClientUpdateAvatarUrlRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::UpdateCharacterDataResult> UpdateCharacterData(const PlayFabClientUpdateCharacterDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateCharacterStatistics(const PlayFabClientUpdateCharacterStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdatePlayerStatistics(const PlayFabClientUpdatePlayerStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateSharedGroupData(const PlayFabClientUpdateSharedGroupDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::UpdateUserDataResult> UpdateUserData(const PlayFabClientUpdateUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::UpdateUserDataResult> UpdateUserPublisherData(const PlayFabClientUpdateUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::UpdateUserTitleDisplayNameResult> UpdateUserTitleDisplayName(const PlayFabClientUpdateUserTitleDisplayNameRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ValidateAmazonReceiptResult> ValidateAmazonIAPReceipt(const PlayFabClientValidateAmazonReceiptRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ValidateGooglePlayPurchaseResult> ValidateGooglePlayPurchase(const PlayFabClientValidateGooglePlayPurchaseRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ValidateIOSReceiptResult> ValidateIOSReceipt(const PlayFabClientValidateIOSReceiptRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::ValidateWindowsReceiptResult> ValidateWindowsStoreReceipt(const PlayFabClientValidateWindowsReceiptRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::WriteEventResponse> WriteCharacterEvent(const PlayFabClientWriteClientCharacterEventRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::WriteEventResponse> WritePlayerEvent(const PlayFabClientWriteClientPlayerEventRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ClientModels::WriteEventResponse> WriteTitleEvent(const PlayFabClientWriteTitleEventRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
