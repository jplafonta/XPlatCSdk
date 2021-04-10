#pragma once

#if !defined(DISABLE_PLAYFABCLIENT_API)

#include "ClientDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Client APIs
    /// </summary>
    class PlayFabClientInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabClientInstanceAPI();
        PlayFabClientInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings);
        PlayFabClientInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabClientInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabClientInstanceAPI() = default;
        PlayFabClientInstanceAPI(const PlayFabClientInstanceAPI& source) = delete; // disable copy
        PlayFabClientInstanceAPI(PlayFabClientInstanceAPI&&) = delete; // disable move
        PlayFabClientInstanceAPI& operator=(const PlayFabClientInstanceAPI& source) = delete; // disable assignment
        PlayFabClientInstanceAPI& operator=(PlayFabClientInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // Public, Client-Specific
        bool IsClientLoggedIn();

        // ------------ Generated API calls
        AsyncOp<ClientModels::AcceptTradeResponse> AcceptTrade(const PlayFabClientAcceptTradeRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::AddFriendResult> AddFriend(const PlayFabClientAddFriendRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddGenericID(const PlayFabClientAddGenericIDRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddOrUpdateContactEmail(const PlayFabClientAddOrUpdateContactEmailRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddSharedGroupMembers(const PlayFabClientAddSharedGroupMembersRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::AddUsernamePasswordResult> AddUsernamePassword(const PlayFabClientAddUsernamePasswordRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ModifyUserVirtualCurrencyResult> AddUserVirtualCurrency(const PlayFabClientAddUserVirtualCurrencyRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AndroidDevicePushNotificationRegistration(const PlayFabClientAndroidDevicePushNotificationRegistrationRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AttributeInstall(const PlayFabClientAttributeInstallRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::CancelTradeResponse> CancelTrade(const PlayFabClientCancelTradeRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ConfirmPurchaseResult> ConfirmPurchase(const PlayFabClientConfirmPurchaseRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ConsumeItemResult> ConsumeItem(const PlayFabClientConsumeItemRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ConsumeMicrosoftStoreEntitlementsResponse> ConsumeMicrosoftStoreEntitlements(const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ConsumePS5EntitlementsResult> ConsumePS5Entitlements(const PlayFabClientConsumePS5EntitlementsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ConsumePSNEntitlementsResult> ConsumePSNEntitlements(const PlayFabClientConsumePSNEntitlementsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ConsumeXboxEntitlementsResult> ConsumeXboxEntitlements(const PlayFabClientConsumeXboxEntitlementsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::CreateSharedGroupResult> CreateSharedGroup(const PlayFabClientCreateSharedGroupRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ExecuteCloudScriptResult> ExecuteCloudScript(const PlayFabClientExecuteCloudScriptRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetAccountInfoResult> GetAccountInfo(const PlayFabClientGetAccountInfoRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetAdPlacementsResult> GetAdPlacements(const PlayFabClientGetAdPlacementsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ListUsersCharactersResult> GetAllUsersCharacters(const PlayFabClientListUsersCharactersRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetCatalogItemsResult> GetCatalogItems(const PlayFabClientGetCatalogItemsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetCharacterDataResult> GetCharacterData(const PlayFabClientGetCharacterDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetCharacterInventoryResult> GetCharacterInventory(const PlayFabClientGetCharacterInventoryRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetCharacterLeaderboardResult> GetCharacterLeaderboard(const PlayFabClientGetCharacterLeaderboardRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetCharacterDataResult> GetCharacterReadOnlyData(const PlayFabClientGetCharacterDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetCharacterStatisticsResult> GetCharacterStatistics(const PlayFabClientGetCharacterStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetContentDownloadUrlResult> GetContentDownloadUrl(const PlayFabClientGetContentDownloadUrlRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::CurrentGamesResult> GetCurrentGames(const PlayFabClientCurrentGamesRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetLeaderboardResult> GetFriendLeaderboard(const PlayFabClientGetFriendLeaderboardRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetFriendLeaderboardAroundPlayerResult> GetFriendLeaderboardAroundPlayer(const PlayFabClientGetFriendLeaderboardAroundPlayerRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetFriendsListResult> GetFriendsList(const PlayFabClientGetFriendsListRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GameServerRegionsResult> GetGameServerRegions(const PlayFabClientGameServerRegionsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetLeaderboardResult> GetLeaderboard(const PlayFabClientGetLeaderboardRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetLeaderboardAroundCharacterResult> GetLeaderboardAroundCharacter(const PlayFabClientGetLeaderboardAroundCharacterRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetLeaderboardAroundPlayerResult> GetLeaderboardAroundPlayer(const PlayFabClientGetLeaderboardAroundPlayerRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetLeaderboardForUsersCharactersResult> GetLeaderboardForUserCharacters(const PlayFabClientGetLeaderboardForUsersCharactersRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPaymentTokenResult> GetPaymentToken(const PlayFabClientGetPaymentTokenRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPhotonAuthenticationTokenResult> GetPhotonAuthenticationToken(const PlayFabClientGetPhotonAuthenticationTokenRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayerCombinedInfoResult> GetPlayerCombinedInfo(const PlayFabClientGetPlayerCombinedInfoRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayerProfileResult> GetPlayerProfile(const PlayFabClientGetPlayerProfileRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayerSegmentsResult> GetPlayerSegments(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayerStatisticsResult> GetPlayerStatistics(const PlayFabClientGetPlayerStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayerStatisticVersionsResult> GetPlayerStatisticVersions(const PlayFabClientGetPlayerStatisticVersionsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayerTagsResult> GetPlayerTags(const PlayFabClientGetPlayerTagsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayerTradesResponse> GetPlayerTrades(const PlayFabClientGetPlayerTradesRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromFacebookIDsResult> GetPlayFabIDsFromFacebookIDs(const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> GetPlayFabIDsFromFacebookInstantGamesIds(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromGameCenterIDsResult> GetPlayFabIDsFromGameCenterIDs(const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromGenericIDsResult> GetPlayFabIDsFromGenericIDs(const PlayFabClientGetPlayFabIDsFromGenericIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromGoogleIDsResult> GetPlayFabIDsFromGoogleIDs(const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromKongregateIDsResult> GetPlayFabIDsFromKongregateIDs(const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> GetPlayFabIDsFromNintendoSwitchDeviceIds(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromPSNAccountIDsResult> GetPlayFabIDsFromPSNAccountIDs(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromSteamIDsResult> GetPlayFabIDsFromSteamIDs(const PlayFabClientGetPlayFabIDsFromSteamIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromTwitchIDsResult> GetPlayFabIDsFromTwitchIDs(const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPlayFabIDsFromXboxLiveIDsResult> GetPlayFabIDsFromXboxLiveIDs(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPublisherDataResult> GetPublisherData(const PlayFabClientGetPublisherDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetPurchaseResult> GetPurchase(const PlayFabClientGetPurchaseRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetSharedGroupDataResult> GetSharedGroupData(const PlayFabClientGetSharedGroupDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetStoreItemsResult> GetStoreItems(const PlayFabClientGetStoreItemsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetTimeResult> GetTime(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetTitleDataResult> GetTitleData(const PlayFabClientGetTitleDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetTitleNewsResult> GetTitleNews(const PlayFabClientGetTitleNewsRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetTitlePublicKeyResult> GetTitlePublicKey(const PlayFabClientGetTitlePublicKeyRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetTradeStatusResponse> GetTradeStatus(const PlayFabClientGetTradeStatusRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetUserDataResult> GetUserData(const PlayFabClientGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetUserInventoryResult> GetUserInventory(const PlayFabClientGetUserInventoryRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetUserDataResult> GetUserPublisherData(const PlayFabClientGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetUserDataResult> GetUserPublisherReadOnlyData(const PlayFabClientGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetUserDataResult> GetUserReadOnlyData(const PlayFabClientGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GetWindowsHelloChallengeResponse> GetWindowsHelloChallenge(const PlayFabClientGetWindowsHelloChallengeRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::GrantCharacterToUserResult> GrantCharacterToUser(const PlayFabClientGrantCharacterToUserRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkAndroidDeviceID(const PlayFabClientLinkAndroidDeviceIDRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkApple(const PlayFabClientLinkAppleRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkCustomID(const PlayFabClientLinkCustomIDRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkFacebookAccount(const PlayFabClientLinkFacebookAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkFacebookInstantGamesId(const PlayFabClientLinkFacebookInstantGamesIdRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkGameCenterAccount(const PlayFabClientLinkGameCenterAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkGoogleAccount(const PlayFabClientLinkGoogleAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkIOSDeviceID(const PlayFabClientLinkIOSDeviceIDRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkKongregate(const PlayFabClientLinkKongregateAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkNintendoServiceAccount(const PlayFabClientLinkNintendoServiceAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkNintendoSwitchDeviceId(const PlayFabClientLinkNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkOpenIdConnect(const PlayFabClientLinkOpenIdConnectRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkPSNAccount(const PlayFabClientLinkPSNAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkSteamAccount(const PlayFabClientLinkSteamAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkTwitch(const PlayFabClientLinkTwitchAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkWindowsHello(const PlayFabClientLinkWindowsHelloAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkXboxAccount(const PlayFabClientLinkXboxAccountRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithAndroidDeviceID(const PlayFabClientLoginWithAndroidDeviceIDRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithApple(const PlayFabClientLoginWithAppleRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithCustomID(const PlayFabClientLoginWithCustomIDRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithEmailAddress(const PlayFabClientLoginWithEmailAddressRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithFacebook(const PlayFabClientLoginWithFacebookRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithFacebookInstantGamesId(const PlayFabClientLoginWithFacebookInstantGamesIdRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithGameCenter(const PlayFabClientLoginWithGameCenterRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithGoogleAccount(const PlayFabClientLoginWithGoogleAccountRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithIOSDeviceID(const PlayFabClientLoginWithIOSDeviceIDRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithKongregate(const PlayFabClientLoginWithKongregateRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithNintendoServiceAccount(const PlayFabClientLoginWithNintendoServiceAccountRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithNintendoSwitchDeviceId(const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithOpenIdConnect(const PlayFabClientLoginWithOpenIdConnectRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithPlayFab(const PlayFabClientLoginWithPlayFabRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithPSN(const PlayFabClientLoginWithPSNRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithSteam(const PlayFabClientLoginWithSteamRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithTwitch(const PlayFabClientLoginWithTwitchRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithWindowsHello(const PlayFabClientLoginWithWindowsHelloRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> LoginWithXbox(const PlayFabClientLoginWithXboxRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::MatchmakeResult> Matchmake(const PlayFabClientMatchmakeRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::OpenTradeResponse> OpenTrade(const PlayFabClientOpenTradeRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::PayForPurchaseResult> PayForPurchase(const PlayFabClientPayForPurchaseRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::PurchaseItemResult> PurchaseItem(const PlayFabClientPurchaseItemRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::RedeemCouponResult> RedeemCoupon(const PlayFabClientRedeemCouponRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RefreshPSNAuthToken(const PlayFabClientRefreshPSNAuthTokenRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RegisterForIOSPushNotification(const PlayFabClientRegisterForIOSPushNotificationRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::RegisterPlayFabUserResult> RegisterPlayFabUser(const PlayFabClientRegisterPlayFabUserRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::LoginResult> RegisterWithWindowsHello(const PlayFabClientRegisterWithWindowsHelloRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveContactEmail(const PlayFabClientRemoveContactEmailRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveFriend(const PlayFabClientRemoveFriendRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveGenericID(const PlayFabClientRemoveGenericIDRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveSharedGroupMembers(const PlayFabClientRemoveSharedGroupMembersRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> ReportAdActivity(const PlayFabClientReportAdActivityRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> ReportDeviceInfo(const PlayFabClientDeviceInfoRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ReportPlayerClientResult> ReportPlayer(const PlayFabClientReportPlayerClientRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::RestoreIOSPurchasesResult> RestoreIOSPurchases(const PlayFabClientRestoreIOSPurchasesRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::RewardAdActivityResult> RewardAdActivity(const PlayFabClientRewardAdActivityRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SendAccountRecoveryEmail(const PlayFabClientSendAccountRecoveryEmailRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetFriendTags(const PlayFabClientSetFriendTagsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetPlayerSecret(const PlayFabClientSetPlayerSecretRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::StartGameResult> StartGame(const PlayFabClientStartGameRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::StartPurchaseResult> StartPurchase(const PlayFabClientStartPurchaseRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ModifyUserVirtualCurrencyResult> SubtractUserVirtualCurrency(const PlayFabClientSubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkAndroidDeviceID(const PlayFabClientUnlinkAndroidDeviceIDRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkApple(const PlayFabClientUnlinkAppleRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkCustomID(const PlayFabClientUnlinkCustomIDRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkFacebookAccount(const PlayFabClientUnlinkFacebookAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkFacebookInstantGamesId(const PlayFabClientUnlinkFacebookInstantGamesIdRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkGameCenterAccount(const PlayFabClientUnlinkGameCenterAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkGoogleAccount(const PlayFabClientUnlinkGoogleAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkIOSDeviceID(const PlayFabClientUnlinkIOSDeviceIDRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkKongregate(const PlayFabClientUnlinkKongregateAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkNintendoServiceAccount(const PlayFabClientUnlinkNintendoServiceAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkNintendoSwitchDeviceId(const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkOpenIdConnect(const PlayFabClientUnlinkOpenIdConnectRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkPSNAccount(const PlayFabClientUnlinkPSNAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkSteamAccount(const PlayFabClientUnlinkSteamAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkTwitch(const PlayFabClientUnlinkTwitchAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkWindowsHello(const PlayFabClientUnlinkWindowsHelloAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkXboxAccount(const PlayFabClientUnlinkXboxAccountRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::UnlockContainerItemResult> UnlockContainerInstance(const PlayFabClientUnlockContainerInstanceRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::UnlockContainerItemResult> UnlockContainerItem(const PlayFabClientUnlockContainerItemRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateAvatarUrl(const PlayFabClientUpdateAvatarUrlRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::UpdateCharacterDataResult> UpdateCharacterData(const PlayFabClientUpdateCharacterDataRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateCharacterStatistics(const PlayFabClientUpdateCharacterStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdatePlayerStatistics(const PlayFabClientUpdatePlayerStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateSharedGroupData(const PlayFabClientUpdateSharedGroupDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::UpdateUserDataResult> UpdateUserData(const PlayFabClientUpdateUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::UpdateUserDataResult> UpdateUserPublisherData(const PlayFabClientUpdateUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::UpdateUserTitleDisplayNameResult> UpdateUserTitleDisplayName(const PlayFabClientUpdateUserTitleDisplayNameRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ValidateAmazonReceiptResult> ValidateAmazonIAPReceipt(const PlayFabClientValidateAmazonReceiptRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ValidateGooglePlayPurchaseResult> ValidateGooglePlayPurchase(const PlayFabClientValidateGooglePlayPurchaseRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ValidateIOSReceiptResult> ValidateIOSReceipt(const PlayFabClientValidateIOSReceiptRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::ValidateWindowsReceiptResult> ValidateWindowsStoreReceipt(const PlayFabClientValidateWindowsReceiptRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::WriteEventResponse> WriteCharacterEvent(const PlayFabClientWriteClientCharacterEventRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::WriteEventResponse> WritePlayerEvent(const PlayFabClientWriteClientPlayerEventRequest& request, const TaskQueue& queue);
        AsyncOp<ClientModels::WriteEventResponse> WriteTitleEvent(const PlayFabClientWriteTitleEventRequest& request, const TaskQueue& queue);

        // Private, Client-Specific
        void MultiStepClientLogin(SharedPtr<PlayFabAuthenticationContext> context, bool needsAttribution);

    };
}

#endif
