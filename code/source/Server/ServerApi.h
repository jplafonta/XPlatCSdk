#pragma once

#if defined(ENABLE_PLAYFABSERVER_API)

#include <Server/ServerDataModels.h>
#include <playfab/HttpClient.h>
#include <playfab/TaskQueue.h>

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Server APIs
    /// </summary>
    class PlayFabServerInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabServerInstanceAPI();
        PlayFabServerInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings);
        PlayFabServerInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabServerInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabServerInstanceAPI() = default;
        PlayFabServerInstanceAPI(const PlayFabServerInstanceAPI& source) = delete; // disable copy
        PlayFabServerInstanceAPI(PlayFabServerInstanceAPI&&) = delete; // disable move
        PlayFabServerInstanceAPI& operator=(const PlayFabServerInstanceAPI& source) = delete; // disable assignment
        PlayFabServerInstanceAPI& operator=(PlayFabServerInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        void AddCharacterVirtualCurrency(ServerModels::AddCharacterVirtualCurrencyRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ModifyCharacterVirtualCurrencyResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddFriend(ServerModels::AddFriendRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void AddGenericID(ServerModels::AddGenericIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddPlayerTag(ServerModels::AddPlayerTagRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::AddPlayerTagResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddSharedGroupMembers(ServerModels::AddSharedGroupMembersRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::AddSharedGroupMembersResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddUserVirtualCurrency(ServerModels::AddUserVirtualCurrencyRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ModifyUserVirtualCurrencyResult> callback, const ErrorCallback errorCallback = nullptr);
        void AuthenticateSessionTicket(ServerModels::AuthenticateSessionTicketRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::AuthenticateSessionTicketResult> callback, const ErrorCallback errorCallback = nullptr);
        void AwardSteamAchievement(ServerModels::AwardSteamAchievementRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::AwardSteamAchievementResult> callback, const ErrorCallback errorCallback = nullptr);
        void BanUsers(ServerModels::BanUsersRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::BanUsersResult> callback, const ErrorCallback errorCallback = nullptr);
        void ConsumeItem(ServerModels::ConsumeItemRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ConsumeItemResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateSharedGroup(ServerModels::CreateSharedGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::CreateSharedGroupResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteCharacterFromUser(ServerModels::DeleteCharacterFromUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::DeleteCharacterFromUserResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeletePlayer(ServerModels::DeletePlayerRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::DeletePlayerResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeletePushNotificationTemplate(ServerModels::DeletePushNotificationTemplateRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::DeletePushNotificationTemplateResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteSharedGroup(ServerModels::DeleteSharedGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void DeregisterGame(ServerModels::DeregisterGameRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::DeregisterGameResponse> callback, const ErrorCallback errorCallback = nullptr);
        void EvaluateRandomResultTable(ServerModels::EvaluateRandomResultTableRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::EvaluateRandomResultTableResult> callback, const ErrorCallback errorCallback = nullptr);
        void ExecuteCloudScript(ServerModels::ExecuteCloudScriptServerRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ExecuteCloudScriptResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetAllSegments(ServerModels::GetAllSegmentsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetAllSegmentsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetAllUsersCharacters(ServerModels::ListUsersCharactersRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ListUsersCharactersResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCatalogItems(ServerModels::GetCatalogItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetCatalogItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterData(ServerModels::GetCharacterDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetCharacterDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterInternalData(ServerModels::GetCharacterDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetCharacterDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterInventory(ServerModels::GetCharacterInventoryRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetCharacterInventoryResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterLeaderboard(ServerModels::GetCharacterLeaderboardRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetCharacterLeaderboardResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterReadOnlyData(ServerModels::GetCharacterDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetCharacterDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCharacterStatistics(ServerModels::GetCharacterStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetCharacterStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetContentDownloadUrl(ServerModels::GetContentDownloadUrlRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetContentDownloadUrlResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetFriendLeaderboard(ServerModels::GetFriendLeaderboardRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetLeaderboardResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetFriendsList(ServerModels::GetFriendsListRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetFriendsListResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetLeaderboard(ServerModels::GetLeaderboardRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetLeaderboardResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetLeaderboardAroundCharacter(ServerModels::GetLeaderboardAroundCharacterRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetLeaderboardAroundCharacterResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetLeaderboardAroundUser(ServerModels::GetLeaderboardAroundUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetLeaderboardAroundUserResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetLeaderboardForUserCharacters(ServerModels::GetLeaderboardForUsersCharactersRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetLeaderboardForUsersCharactersResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerCombinedInfo(ServerModels::GetPlayerCombinedInfoRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayerCombinedInfoResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerProfile(ServerModels::GetPlayerProfileRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayerProfileResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerSegments(ServerModels::GetPlayersSegmentsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayerSegmentsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayersInSegment(ServerModels::GetPlayersInSegmentRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayersInSegmentResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerStatistics(ServerModels::GetPlayerStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayerStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerStatisticVersions(ServerModels::GetPlayerStatisticVersionsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayerStatisticVersionsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerTags(ServerModels::GetPlayerTagsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayerTagsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromFacebookIDs(ServerModels::GetPlayFabIDsFromFacebookIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayFabIDsFromFacebookIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromFacebookInstantGamesIds(ServerModels::GetPlayFabIDsFromFacebookInstantGamesIdsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromGenericIDs(ServerModels::GetPlayFabIDsFromGenericIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayFabIDsFromGenericIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromNintendoSwitchDeviceIds(ServerModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromPSNAccountIDs(ServerModels::GetPlayFabIDsFromPSNAccountIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayFabIDsFromPSNAccountIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromSteamIDs(ServerModels::GetPlayFabIDsFromSteamIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayFabIDsFromSteamIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayFabIDsFromXboxLiveIDs(ServerModels::GetPlayFabIDsFromXboxLiveIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPlayFabIDsFromXboxLiveIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPublisherData(ServerModels::GetPublisherDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetPublisherDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetRandomResultTables(ServerModels::GetRandomResultTablesRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetRandomResultTablesResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetServerCustomIDsFromPlayFabIDs(ServerModels::GetServerCustomIDsFromPlayFabIDsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetServerCustomIDsFromPlayFabIDsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetSharedGroupData(ServerModels::GetSharedGroupDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetSharedGroupDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetStoreItems(ServerModels::GetStoreItemsServerRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetStoreItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTime(ServerModels::GetTimeRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetTimeResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitleData(ServerModels::GetTitleDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetTitleDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitleInternalData(ServerModels::GetTitleDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetTitleDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitleNews(ServerModels::GetTitleNewsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetTitleNewsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserAccountInfo(ServerModels::GetUserAccountInfoRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetUserAccountInfoResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserBans(ServerModels::GetUserBansRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetUserBansResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserData(ServerModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserInternalData(ServerModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserInventory(ServerModels::GetUserInventoryRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetUserInventoryResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserPublisherData(ServerModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserPublisherInternalData(ServerModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserPublisherReadOnlyData(ServerModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserReadOnlyData(ServerModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GrantCharacterToUser(ServerModels::GrantCharacterToUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GrantCharacterToUserResult> callback, const ErrorCallback errorCallback = nullptr);
        void GrantItemsToCharacter(ServerModels::GrantItemsToCharacterRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GrantItemsToCharacterResult> callback, const ErrorCallback errorCallback = nullptr);
        void GrantItemsToUser(ServerModels::GrantItemsToUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GrantItemsToUserResult> callback, const ErrorCallback errorCallback = nullptr);
        void GrantItemsToUsers(ServerModels::GrantItemsToUsersRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::GrantItemsToUsersResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkPSNAccount(ServerModels::LinkPSNAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::LinkPSNAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkServerCustomId(ServerModels::LinkServerCustomIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::LinkServerCustomIdResult> callback, const ErrorCallback errorCallback = nullptr);
        void LinkXboxAccount(ServerModels::LinkXboxAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::LinkXboxAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithServerCustomId(ServerModels::LoginWithServerCustomIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ServerLoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithSteamId(ServerModels::LoginWithSteamIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ServerLoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithXbox(ServerModels::LoginWithXboxRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ServerLoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void LoginWithXboxId(ServerModels::LoginWithXboxIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ServerLoginResult> callback, const ErrorCallback errorCallback = nullptr);
        void ModifyItemUses(ServerModels::ModifyItemUsesRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ModifyItemUsesResult> callback, const ErrorCallback errorCallback = nullptr);
        void MoveItemToCharacterFromCharacter(ServerModels::MoveItemToCharacterFromCharacterRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::MoveItemToCharacterFromCharacterResult> callback, const ErrorCallback errorCallback = nullptr);
        void MoveItemToCharacterFromUser(ServerModels::MoveItemToCharacterFromUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::MoveItemToCharacterFromUserResult> callback, const ErrorCallback errorCallback = nullptr);
        void MoveItemToUserFromCharacter(ServerModels::MoveItemToUserFromCharacterRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::MoveItemToUserFromCharacterResult> callback, const ErrorCallback errorCallback = nullptr);
        void NotifyMatchmakerPlayerLeft(ServerModels::NotifyMatchmakerPlayerLeftRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::NotifyMatchmakerPlayerLeftResult> callback, const ErrorCallback errorCallback = nullptr);
        void RedeemCoupon(ServerModels::RedeemCouponRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::RedeemCouponResult> callback, const ErrorCallback errorCallback = nullptr);
        void RedeemMatchmakerTicket(ServerModels::RedeemMatchmakerTicketRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::RedeemMatchmakerTicketResult> callback, const ErrorCallback errorCallback = nullptr);
        void RefreshGameServerInstanceHeartbeat(ServerModels::RefreshGameServerInstanceHeartbeatRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::RefreshGameServerInstanceHeartbeatResult> callback, const ErrorCallback errorCallback = nullptr);
        void RegisterGame(ServerModels::RegisterGameRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::RegisterGameResponse> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveFriend(ServerModels::RemoveFriendRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveGenericID(ServerModels::RemoveGenericIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void RemovePlayerTag(ServerModels::RemovePlayerTagRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::RemovePlayerTagResult> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveSharedGroupMembers(ServerModels::RemoveSharedGroupMembersRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::RemoveSharedGroupMembersResult> callback, const ErrorCallback errorCallback = nullptr);
        void ReportPlayer(ServerModels::ReportPlayerServerRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ReportPlayerServerResult> callback, const ErrorCallback errorCallback = nullptr);
        void RevokeAllBansForUser(ServerModels::RevokeAllBansForUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::RevokeAllBansForUserResult> callback, const ErrorCallback errorCallback = nullptr);
        void RevokeBans(ServerModels::RevokeBansRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::RevokeBansResult> callback, const ErrorCallback errorCallback = nullptr);
        void RevokeInventoryItem(ServerModels::RevokeInventoryItemRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::RevokeInventoryResult> callback, const ErrorCallback errorCallback = nullptr);
        void RevokeInventoryItems(ServerModels::RevokeInventoryItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::RevokeInventoryItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void SavePushNotificationTemplate(ServerModels::SavePushNotificationTemplateRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SavePushNotificationTemplateResult> callback, const ErrorCallback errorCallback = nullptr);
        void SendCustomAccountRecoveryEmail(ServerModels::SendCustomAccountRecoveryEmailRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SendCustomAccountRecoveryEmailResult> callback, const ErrorCallback errorCallback = nullptr);
        void SendEmailFromTemplate(ServerModels::SendEmailFromTemplateRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SendEmailFromTemplateResult> callback, const ErrorCallback errorCallback = nullptr);
        void SendPushNotification(ServerModels::SendPushNotificationRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SendPushNotificationResult> callback, const ErrorCallback errorCallback = nullptr);
        void SendPushNotificationFromTemplate(ServerModels::SendPushNotificationFromTemplateRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SendPushNotificationResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetFriendTags(ServerModels::SetFriendTagsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void SetGameServerInstanceData(ServerModels::SetGameServerInstanceDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SetGameServerInstanceDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetGameServerInstanceState(ServerModels::SetGameServerInstanceStateRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SetGameServerInstanceStateResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetGameServerInstanceTags(ServerModels::SetGameServerInstanceTagsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SetGameServerInstanceTagsResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetPlayerSecret(ServerModels::SetPlayerSecretRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SetPlayerSecretResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetPublisherData(ServerModels::SetPublisherDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SetPublisherDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetTitleData(ServerModels::SetTitleDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SetTitleDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetTitleInternalData(ServerModels::SetTitleDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::SetTitleDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void SubtractCharacterVirtualCurrency(ServerModels::SubtractCharacterVirtualCurrencyRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ModifyCharacterVirtualCurrencyResult> callback, const ErrorCallback errorCallback = nullptr);
        void SubtractUserVirtualCurrency(ServerModels::SubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::ModifyUserVirtualCurrencyResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkPSNAccount(ServerModels::UnlinkPSNAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UnlinkPSNAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkServerCustomId(ServerModels::UnlinkServerCustomIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UnlinkServerCustomIdResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlinkXboxAccount(ServerModels::UnlinkXboxAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UnlinkXboxAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlockContainerInstance(ServerModels::UnlockContainerInstanceRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UnlockContainerItemResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnlockContainerItem(ServerModels::UnlockContainerItemRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UnlockContainerItemResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateAvatarUrl(ServerModels::UpdateAvatarUrlRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateBans(ServerModels::UpdateBansRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateBansResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateCharacterData(ServerModels::UpdateCharacterDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateCharacterDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateCharacterInternalData(ServerModels::UpdateCharacterDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateCharacterDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateCharacterReadOnlyData(ServerModels::UpdateCharacterDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateCharacterDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateCharacterStatistics(ServerModels::UpdateCharacterStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateCharacterStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdatePlayerStatistics(ServerModels::UpdatePlayerStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdatePlayerStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateSharedGroupData(ServerModels::UpdateSharedGroupDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateSharedGroupDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserData(ServerModels::UpdateUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserInternalData(ServerModels::UpdateUserInternalDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserInventoryItemCustomData(ServerModels::UpdateUserInventoryItemDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserPublisherData(ServerModels::UpdateUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserPublisherInternalData(ServerModels::UpdateUserInternalDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserPublisherReadOnlyData(ServerModels::UpdateUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserReadOnlyData(ServerModels::UpdateUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void WriteCharacterEvent(ServerModels::WriteServerCharacterEventRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::WriteEventResponse> callback, const ErrorCallback errorCallback = nullptr);
        void WritePlayerEvent(ServerModels::WriteServerPlayerEventRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::WriteEventResponse> callback, const ErrorCallback errorCallback = nullptr);
        void WriteTitleEvent(ServerModels::WriteTitleEventRequest& request, const TaskQueue& queue, const ProcessApiCallback<ServerModels::WriteEventResponse> callback, const ErrorCallback errorCallback = nullptr);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
