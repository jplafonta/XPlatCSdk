#pragma once

#if !defined(DISABLE_PLAYFABCLIENT_API)

#include <Client/ClientDataModels.h>
#include <playfab/HttpClient.h>
#include <playfab/TaskQueue.h>

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
        void AcceptTrade(ClientModels::AcceptTradeRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::AcceptTradeResponse> callback, const ErrorCallback errorCallback = nullptr);
        void AddFriend(ClientModels::AddFriendRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::AddFriendResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddGenericID(ClientModels::AddGenericIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::AddGenericIDResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddOrUpdateContactEmail(ClientModels::AddOrUpdateContactEmailRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::AddOrUpdateContactEmailResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddSharedGroupMembers(ClientModels::AddSharedGroupMembersRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::AddSharedGroupMembersResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddUsernamePassword(ClientModels::AddUsernamePasswordRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::AddUsernamePasswordResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddUserVirtualCurrency(ClientModels::AddUserVirtualCurrencyRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ModifyUserVirtualCurrencyResult> callback, const ErrorCallback errorCallback = nullptr);
        void AndroidDevicePushNotificationRegistration(ClientModels::AndroidDevicePushNotificationRegistrationRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::AndroidDevicePushNotificationRegistrationResult> callback, const ErrorCallback errorCallback = nullptr);
        void AttributeInstall(ClientModels::AttributeInstallRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::AttributeInstallResult> callback, const ErrorCallback errorCallback = nullptr);
        void CancelTrade(ClientModels::CancelTradeRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::CancelTradeResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ConfirmPurchase(ClientModels::ConfirmPurchaseRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ConfirmPurchaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void ConsumeItem(ClientModels::ConsumeItemRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ConsumeItemResult> callback, const ErrorCallback errorCallback = nullptr);
        void ConsumeMicrosoftStoreEntitlements(ClientModels::ConsumeMicrosoftStoreEntitlementsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ConsumeMicrosoftStoreEntitlementsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ConsumePS5Entitlements(ClientModels::ConsumePS5EntitlementsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ConsumePS5EntitlementsResult> callback, const ErrorCallback errorCallback = nullptr);
        void ConsumePSNEntitlements(ClientModels::ConsumePSNEntitlementsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ConsumePSNEntitlementsResult> callback, const ErrorCallback errorCallback = nullptr);
        void ConsumeXboxEntitlements(ClientModels::ConsumeXboxEntitlementsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ConsumeXboxEntitlementsResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateSharedGroup(ClientModels::CreateSharedGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::CreateSharedGroupResult> callback, const ErrorCallback errorCallback = nullptr);
        void ExecuteCloudScript(ClientModels::ExecuteCloudScriptRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ExecuteCloudScriptResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetAccountInfo(ClientModels::GetAccountInfoRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetAccountInfoResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetAdPlacements(ClientModels::GetAdPlacementsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetAdPlacementsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetAllUsersCharacters(ClientModels::ListUsersCharactersRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ListUsersCharactersResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCatalogItems(ClientModels::GetCatalogItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetCatalogItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterData(ClientModels::GetCharacterDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetCharacterDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterInventory(ClientModels::GetCharacterInventoryRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetCharacterInventoryResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterLeaderboard(ClientModels::GetCharacterLeaderboardRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetCharacterLeaderboardResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterReadOnlyData(ClientModels::GetCharacterDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetCharacterDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterStatistics(ClientModels::GetCharacterStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetCharacterStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetContentDownloadUrl(ClientModels::GetContentDownloadUrlRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetContentDownloadUrlResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCurrentGames(ClientModels::CurrentGamesRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::CurrentGamesResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetFriendLeaderboard(ClientModels::GetFriendLeaderboardRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetLeaderboardResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetFriendLeaderboardAroundPlayer(ClientModels::GetFriendLeaderboardAroundPlayerRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetFriendLeaderboardAroundPlayerResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetFriendsList(ClientModels::GetFriendsListRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetFriendsListResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetGameServerRegions(ClientModels::GameServerRegionsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GameServerRegionsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetLeaderboard(ClientModels::GetLeaderboardRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetLeaderboardResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetLeaderboardAroundCharacter(ClientModels::GetLeaderboardAroundCharacterRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetLeaderboardAroundCharacterResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetLeaderboardAroundPlayer(ClientModels::GetLeaderboardAroundPlayerRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetLeaderboardAroundPlayerResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetLeaderboardForUserCharacters(ClientModels::GetLeaderboardForUsersCharactersRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetLeaderboardForUsersCharactersResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPaymentToken(ClientModels::GetPaymentTokenRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPaymentTokenResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPhotonAuthenticationToken(ClientModels::GetPhotonAuthenticationTokenRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPhotonAuthenticationTokenResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerCombinedInfo(ClientModels::GetPlayerCombinedInfoRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayerCombinedInfoResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerProfile(ClientModels::GetPlayerProfileRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayerProfileResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerSegments(ClientModels::GetPlayerSegmentsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayerSegmentsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerStatistics(ClientModels::GetPlayerStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayerStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerStatisticVersions(ClientModels::GetPlayerStatisticVersionsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayerStatisticVersionsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerTags(ClientModels::GetPlayerTagsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayerTagsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerTrades(ClientModels::GetPlayerTradesRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayerTradesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromFacebookIDs(ClientModels::GetPlayFabIDsFromFacebookIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromFacebookIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromFacebookInstantGamesIds(ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromGameCenterIDs(ClientModels::GetPlayFabIDsFromGameCenterIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromGameCenterIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromGenericIDs(ClientModels::GetPlayFabIDsFromGenericIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromGenericIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromGoogleIDs(ClientModels::GetPlayFabIDsFromGoogleIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromGoogleIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromKongregateIDs(ClientModels::GetPlayFabIDsFromKongregateIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromKongregateIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromNintendoSwitchDeviceIds(ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromPSNAccountIDs(ClientModels::GetPlayFabIDsFromPSNAccountIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromPSNAccountIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromSteamIDs(ClientModels::GetPlayFabIDsFromSteamIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromSteamIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromTwitchIDs(ClientModels::GetPlayFabIDsFromTwitchIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromTwitchIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromXboxLiveIDs(ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPlayFabIDsFromXboxLiveIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPublisherData(ClientModels::GetPublisherDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPublisherDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPurchase(ClientModels::GetPurchaseRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetPurchaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetSharedGroupData(ClientModels::GetSharedGroupDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetSharedGroupDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetStoreItems(ClientModels::GetStoreItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetStoreItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTime(ClientModels::GetTimeRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetTimeResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitleData(ClientModels::GetTitleDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetTitleDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitleNews(ClientModels::GetTitleNewsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetTitleNewsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitlePublicKey(ClientModels::GetTitlePublicKeyRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetTitlePublicKeyResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTradeStatus(ClientModels::GetTradeStatusRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetTradeStatusResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserData(ClientModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserInventory(ClientModels::GetUserInventoryRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetUserInventoryResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserPublisherData(ClientModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserPublisherReadOnlyData(ClientModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserReadOnlyData(ClientModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetWindowsHelloChallenge(ClientModels::GetWindowsHelloChallengeRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GetWindowsHelloChallengeResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GrantCharacterToUser(ClientModels::GrantCharacterToUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::GrantCharacterToUserResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkAndroidDeviceID(ClientModels::LinkAndroidDeviceIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkAndroidDeviceIDResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkApple(ClientModels::LinkAppleRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkCustomID(ClientModels::LinkCustomIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkCustomIDResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkFacebookAccount(ClientModels::LinkFacebookAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkFacebookAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkFacebookInstantGamesId(ClientModels::LinkFacebookInstantGamesIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkFacebookInstantGamesIdResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkGameCenterAccount(ClientModels::LinkGameCenterAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkGameCenterAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkGoogleAccount(ClientModels::LinkGoogleAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkGoogleAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkIOSDeviceID(ClientModels::LinkIOSDeviceIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkIOSDeviceIDResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkKongregate(ClientModels::LinkKongregateAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkKongregateAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkNintendoServiceAccount(ClientModels::LinkNintendoServiceAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkNintendoSwitchDeviceId(ClientModels::LinkNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkNintendoSwitchDeviceIdResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkOpenIdConnect(ClientModels::LinkOpenIdConnectRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkPSNAccount(ClientModels::LinkPSNAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkPSNAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkSteamAccount(ClientModels::LinkSteamAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkSteamAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkTwitch(ClientModels::LinkTwitchAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkTwitchAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkWindowsHello(ClientModels::LinkWindowsHelloAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkWindowsHelloAccountResponse> callback, const ErrorCallback errorCallback = nullptr);
        void LinkXboxAccount(ClientModels::LinkXboxAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LinkXboxAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithAndroidDeviceID(ClientModels::LoginWithAndroidDeviceIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithApple(ClientModels::LoginWithAppleRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithCustomID(ClientModels::LoginWithCustomIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithEmailAddress(ClientModels::LoginWithEmailAddressRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithFacebook(ClientModels::LoginWithFacebookRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithFacebookInstantGamesId(ClientModels::LoginWithFacebookInstantGamesIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithGameCenter(ClientModels::LoginWithGameCenterRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithGoogleAccount(ClientModels::LoginWithGoogleAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithIOSDeviceID(ClientModels::LoginWithIOSDeviceIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithKongregate(ClientModels::LoginWithKongregateRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithNintendoServiceAccount(ClientModels::LoginWithNintendoServiceAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithNintendoSwitchDeviceId(ClientModels::LoginWithNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithOpenIdConnect(ClientModels::LoginWithOpenIdConnectRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithPlayFab(ClientModels::LoginWithPlayFabRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithPSN(ClientModels::LoginWithPSNRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithSteam(ClientModels::LoginWithSteamRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithTwitch(ClientModels::LoginWithTwitchRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithWindowsHello(ClientModels::LoginWithWindowsHelloRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithXbox(ClientModels::LoginWithXboxRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void Matchmake(ClientModels::MatchmakeRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::MatchmakeResult> callback, const ErrorCallback errorCallback = nullptr);
        void OpenTrade(ClientModels::OpenTradeRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::OpenTradeResponse> callback, const ErrorCallback errorCallback = nullptr);
        void PayForPurchase(ClientModels::PayForPurchaseRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::PayForPurchaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void PurchaseItem(ClientModels::PurchaseItemRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::PurchaseItemResult> callback, const ErrorCallback errorCallback = nullptr);
        void RedeemCoupon(ClientModels::RedeemCouponRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::RedeemCouponResult> callback, const ErrorCallback errorCallback = nullptr);
        void RefreshPSNAuthToken(ClientModels::RefreshPSNAuthTokenRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void RegisterForIOSPushNotification(ClientModels::RegisterForIOSPushNotificationRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::RegisterForIOSPushNotificationResult> callback, const ErrorCallback errorCallback = nullptr);
        void RegisterPlayFabUser(ClientModels::RegisterPlayFabUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::RegisterPlayFabUserResult> callback, const ErrorCallback errorCallback = nullptr);
        void RegisterWithWindowsHello(ClientModels::RegisterWithWindowsHelloRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::LoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveContactEmail(ClientModels::RemoveContactEmailRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::RemoveContactEmailResult> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveFriend(ClientModels::RemoveFriendRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::RemoveFriendResult> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveGenericID(ClientModels::RemoveGenericIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::RemoveGenericIDResult> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveSharedGroupMembers(ClientModels::RemoveSharedGroupMembersRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::RemoveSharedGroupMembersResult> callback, const ErrorCallback errorCallback = nullptr);
        void ReportAdActivity(ClientModels::ReportAdActivityRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ReportAdActivityResult> callback, const ErrorCallback errorCallback = nullptr);
        void ReportDeviceInfo(ClientModels::DeviceInfoRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ReportPlayer(ClientModels::ReportPlayerClientRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ReportPlayerClientResult> callback, const ErrorCallback errorCallback = nullptr);
        void RestoreIOSPurchases(ClientModels::RestoreIOSPurchasesRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::RestoreIOSPurchasesResult> callback, const ErrorCallback errorCallback = nullptr);
        void RewardAdActivity(ClientModels::RewardAdActivityRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::RewardAdActivityResult> callback, const ErrorCallback errorCallback = nullptr);
        void SendAccountRecoveryEmail(ClientModels::SendAccountRecoveryEmailRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::SendAccountRecoveryEmailResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetFriendTags(ClientModels::SetFriendTagsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::SetFriendTagsResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetPlayerSecret(ClientModels::SetPlayerSecretRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::SetPlayerSecretResult> callback, const ErrorCallback errorCallback = nullptr);
        void StartGame(ClientModels::StartGameRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::StartGameResult> callback, const ErrorCallback errorCallback = nullptr);
        void StartPurchase(ClientModels::StartPurchaseRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::StartPurchaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void SubtractUserVirtualCurrency(ClientModels::SubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ModifyUserVirtualCurrencyResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkAndroidDeviceID(ClientModels::UnlinkAndroidDeviceIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkAndroidDeviceIDResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkApple(ClientModels::UnlinkAppleRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkCustomID(ClientModels::UnlinkCustomIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkCustomIDResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkFacebookAccount(ClientModels::UnlinkFacebookAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkFacebookAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkFacebookInstantGamesId(ClientModels::UnlinkFacebookInstantGamesIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkFacebookInstantGamesIdResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkGameCenterAccount(ClientModels::UnlinkGameCenterAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkGameCenterAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkGoogleAccount(ClientModels::UnlinkGoogleAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkGoogleAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkIOSDeviceID(ClientModels::UnlinkIOSDeviceIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkIOSDeviceIDResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkKongregate(ClientModels::UnlinkKongregateAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkKongregateAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkNintendoServiceAccount(ClientModels::UnlinkNintendoServiceAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkNintendoSwitchDeviceId(ClientModels::UnlinkNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkNintendoSwitchDeviceIdResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkOpenIdConnect(ClientModels::UnlinkOpenIdConnectRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkPSNAccount(ClientModels::UnlinkPSNAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkPSNAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkSteamAccount(ClientModels::UnlinkSteamAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkSteamAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkTwitch(ClientModels::UnlinkTwitchAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkTwitchAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkWindowsHello(ClientModels::UnlinkWindowsHelloAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkWindowsHelloAccountResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkXboxAccount(ClientModels::UnlinkXboxAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlinkXboxAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlockContainerInstance(ClientModels::UnlockContainerInstanceRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlockContainerItemResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlockContainerItem(ClientModels::UnlockContainerItemRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UnlockContainerItemResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateAvatarUrl(ClientModels::UpdateAvatarUrlRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateCharacterData(ClientModels::UpdateCharacterDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UpdateCharacterDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateCharacterStatistics(ClientModels::UpdateCharacterStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UpdateCharacterStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdatePlayerStatistics(ClientModels::UpdatePlayerStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UpdatePlayerStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateSharedGroupData(ClientModels::UpdateSharedGroupDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UpdateSharedGroupDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserData(ClientModels::UpdateUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserPublisherData(ClientModels::UpdateUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserTitleDisplayName(ClientModels::UpdateUserTitleDisplayNameRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::UpdateUserTitleDisplayNameResult> callback, const ErrorCallback errorCallback = nullptr);
        void ValidateAmazonIAPReceipt(ClientModels::ValidateAmazonReceiptRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ValidateAmazonReceiptResult> callback, const ErrorCallback errorCallback = nullptr);
        void ValidateGooglePlayPurchase(ClientModels::ValidateGooglePlayPurchaseRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ValidateGooglePlayPurchaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void ValidateIOSReceipt(ClientModels::ValidateIOSReceiptRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ValidateIOSReceiptResult> callback, const ErrorCallback errorCallback = nullptr);
        void ValidateWindowsStoreReceipt(ClientModels::ValidateWindowsReceiptRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::ValidateWindowsReceiptResult> callback, const ErrorCallback errorCallback = nullptr);
        void WriteCharacterEvent(ClientModels::WriteClientCharacterEventRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::WriteEventResponse> callback, const ErrorCallback errorCallback = nullptr);
        void WritePlayerEvent(ClientModels::WriteClientPlayerEventRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::WriteEventResponse> callback, const ErrorCallback errorCallback = nullptr);
        void WriteTitleEvent(ClientModels::WriteTitleEventRequest& request, const TaskQueue& queue, const ProcessApiCallback<ClientModels::WriteEventResponse> callback, const ErrorCallback errorCallback = nullptr);

        // Private, Client-Specific
        void MultiStepClientLogin(SharedPtr<PlayFabAuthenticationContext> context, bool needsAttribution);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
