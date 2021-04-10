#pragma once

#if defined(ENABLE_PLAYFABSERVER_API)

#include "ServerDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

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
        AsyncOp<ServerModels::ModifyCharacterVirtualCurrencyResult> AddCharacterVirtualCurrency(const PlayFabServerAddCharacterVirtualCurrencyRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddFriend(const PlayFabServerAddFriendRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddGenericID(const PlayFabServerAddGenericIDRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddPlayerTag(const PlayFabServerAddPlayerTagRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddSharedGroupMembers(const PlayFabServerAddSharedGroupMembersRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ModifyUserVirtualCurrencyResult> AddUserVirtualCurrency(const PlayFabServerAddUserVirtualCurrencyRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::AuthenticateSessionTicketResult> AuthenticateSessionTicket(const PlayFabServerAuthenticateSessionTicketRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::AwardSteamAchievementResult> AwardSteamAchievement(const PlayFabServerAwardSteamAchievementRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::BanUsersResult> BanUsers(const PlayFabServerBanUsersRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ConsumeItemResult> ConsumeItem(const PlayFabServerConsumeItemRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::CreateSharedGroupResult> CreateSharedGroup(const PlayFabServerCreateSharedGroupRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteCharacterFromUser(const PlayFabServerDeleteCharacterFromUserRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeletePlayer(const PlayFabServerDeletePlayerRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeletePushNotificationTemplate(const PlayFabServerDeletePushNotificationTemplateRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteSharedGroup(const PlayFabServerDeleteSharedGroupRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeregisterGame(const PlayFabServerDeregisterGameRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::EvaluateRandomResultTableResult> EvaluateRandomResultTable(const PlayFabServerEvaluateRandomResultTableRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ExecuteCloudScriptResult> ExecuteCloudScript(const PlayFabServerExecuteCloudScriptServerRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetAllSegmentsResult> GetAllSegments(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ListUsersCharactersResult> GetAllUsersCharacters(const PlayFabServerListUsersCharactersRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetCatalogItemsResult> GetCatalogItems(const PlayFabServerGetCatalogItemsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetCharacterDataResult> GetCharacterData(const PlayFabServerGetCharacterDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetCharacterDataResult> GetCharacterInternalData(const PlayFabServerGetCharacterDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetCharacterInventoryResult> GetCharacterInventory(const PlayFabServerGetCharacterInventoryRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetCharacterLeaderboardResult> GetCharacterLeaderboard(const PlayFabServerGetCharacterLeaderboardRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetCharacterDataResult> GetCharacterReadOnlyData(const PlayFabServerGetCharacterDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetCharacterStatisticsResult> GetCharacterStatistics(const PlayFabServerGetCharacterStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetContentDownloadUrlResult> GetContentDownloadUrl(const PlayFabServerGetContentDownloadUrlRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetLeaderboardResult> GetFriendLeaderboard(const PlayFabServerGetFriendLeaderboardRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetFriendsListResult> GetFriendsList(const PlayFabServerGetFriendsListRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetLeaderboardResult> GetLeaderboard(const PlayFabServerGetLeaderboardRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetLeaderboardAroundCharacterResult> GetLeaderboardAroundCharacter(const PlayFabServerGetLeaderboardAroundCharacterRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetLeaderboardAroundUserResult> GetLeaderboardAroundUser(const PlayFabServerGetLeaderboardAroundUserRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetLeaderboardForUsersCharactersResult> GetLeaderboardForUserCharacters(const PlayFabServerGetLeaderboardForUsersCharactersRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayerCombinedInfoResult> GetPlayerCombinedInfo(const PlayFabServerGetPlayerCombinedInfoRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayerProfileResult> GetPlayerProfile(const PlayFabServerGetPlayerProfileRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayerSegmentsResult> GetPlayerSegments(const PlayFabServerGetPlayersSegmentsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayersInSegmentResult> GetPlayersInSegment(const PlayFabServerGetPlayersInSegmentRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayerStatisticsResult> GetPlayerStatistics(const PlayFabServerGetPlayerStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayerStatisticVersionsResult> GetPlayerStatisticVersions(const PlayFabServerGetPlayerStatisticVersionsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayerTagsResult> GetPlayerTags(const PlayFabServerGetPlayerTagsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayFabIDsFromFacebookIDsResult> GetPlayFabIDsFromFacebookIDs(const PlayFabServerGetPlayFabIDsFromFacebookIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> GetPlayFabIDsFromFacebookInstantGamesIds(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayFabIDsFromGenericIDsResult> GetPlayFabIDsFromGenericIDs(const PlayFabServerGetPlayFabIDsFromGenericIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> GetPlayFabIDsFromNintendoSwitchDeviceIds(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayFabIDsFromPSNAccountIDsResult> GetPlayFabIDsFromPSNAccountIDs(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayFabIDsFromSteamIDsResult> GetPlayFabIDsFromSteamIDs(const PlayFabServerGetPlayFabIDsFromSteamIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPlayFabIDsFromXboxLiveIDsResult> GetPlayFabIDsFromXboxLiveIDs(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetPublisherDataResult> GetPublisherData(const PlayFabServerGetPublisherDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetRandomResultTablesResult> GetRandomResultTables(const PlayFabServerGetRandomResultTablesRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetServerCustomIDsFromPlayFabIDsResult> GetServerCustomIDsFromPlayFabIDs(const PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetSharedGroupDataResult> GetSharedGroupData(const PlayFabServerGetSharedGroupDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetStoreItemsResult> GetStoreItems(const PlayFabServerGetStoreItemsServerRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetTimeResult> GetTime(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetTitleDataResult> GetTitleData(const PlayFabServerGetTitleDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetTitleDataResult> GetTitleInternalData(const PlayFabServerGetTitleDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetTitleNewsResult> GetTitleNews(const PlayFabServerGetTitleNewsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetUserAccountInfoResult> GetUserAccountInfo(const PlayFabServerGetUserAccountInfoRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetUserBansResult> GetUserBans(const PlayFabServerGetUserBansRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetUserDataResult> GetUserData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetUserDataResult> GetUserInternalData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetUserInventoryResult> GetUserInventory(const PlayFabServerGetUserInventoryRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetUserDataResult> GetUserPublisherData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetUserDataResult> GetUserPublisherInternalData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetUserDataResult> GetUserPublisherReadOnlyData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GetUserDataResult> GetUserReadOnlyData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GrantCharacterToUserResult> GrantCharacterToUser(const PlayFabServerGrantCharacterToUserRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GrantItemsToCharacterResult> GrantItemsToCharacter(const PlayFabServerGrantItemsToCharacterRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GrantItemsToUserResult> GrantItemsToUser(const PlayFabServerGrantItemsToUserRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::GrantItemsToUsersResult> GrantItemsToUsers(const PlayFabServerGrantItemsToUsersRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkPSNAccount(const PlayFabServerLinkPSNAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkServerCustomId(const PlayFabServerLinkServerCustomIdRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> LinkXboxAccount(const PlayFabServerLinkXboxAccountRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ServerLoginResult> LoginWithServerCustomId(const PlayFabServerLoginWithServerCustomIdRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ServerLoginResult> LoginWithSteamId(const PlayFabServerLoginWithSteamIdRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ServerLoginResult> LoginWithXbox(const PlayFabServerLoginWithXboxRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ServerLoginResult> LoginWithXboxId(const PlayFabServerLoginWithXboxIdRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ModifyItemUsesResult> ModifyItemUses(const PlayFabServerModifyItemUsesRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> MoveItemToCharacterFromCharacter(const PlayFabServerMoveItemToCharacterFromCharacterRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> MoveItemToCharacterFromUser(const PlayFabServerMoveItemToCharacterFromUserRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> MoveItemToUserFromCharacter(const PlayFabServerMoveItemToUserFromCharacterRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::NotifyMatchmakerPlayerLeftResult> NotifyMatchmakerPlayerLeft(const PlayFabServerNotifyMatchmakerPlayerLeftRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::RedeemCouponResult> RedeemCoupon(const PlayFabServerRedeemCouponRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::RedeemMatchmakerTicketResult> RedeemMatchmakerTicket(const PlayFabServerRedeemMatchmakerTicketRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RefreshGameServerInstanceHeartbeat(const PlayFabServerRefreshGameServerInstanceHeartbeatRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::RegisterGameResponse> RegisterGame(const PlayFabServerRegisterGameRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveFriend(const PlayFabServerRemoveFriendRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveGenericID(const PlayFabServerRemoveGenericIDRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemovePlayerTag(const PlayFabServerRemovePlayerTagRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveSharedGroupMembers(const PlayFabServerRemoveSharedGroupMembersRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ReportPlayerServerResult> ReportPlayer(const PlayFabServerReportPlayerServerRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::RevokeAllBansForUserResult> RevokeAllBansForUser(const PlayFabServerRevokeAllBansForUserRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::RevokeBansResult> RevokeBans(const PlayFabServerRevokeBansRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RevokeInventoryItem(const PlayFabServerRevokeInventoryItemRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::RevokeInventoryItemsResult> RevokeInventoryItems(const PlayFabServerRevokeInventoryItemsRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::SavePushNotificationTemplateResult> SavePushNotificationTemplate(const PlayFabServerSavePushNotificationTemplateRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SendCustomAccountRecoveryEmail(const PlayFabServerSendCustomAccountRecoveryEmailRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SendEmailFromTemplate(const PlayFabServerSendEmailFromTemplateRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SendPushNotification(const PlayFabServerSendPushNotificationRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SendPushNotificationFromTemplate(const PlayFabServerSendPushNotificationFromTemplateRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetFriendTags(const PlayFabServerSetFriendTagsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetGameServerInstanceData(const PlayFabServerSetGameServerInstanceDataRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetGameServerInstanceState(const PlayFabServerSetGameServerInstanceStateRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetGameServerInstanceTags(const PlayFabServerSetGameServerInstanceTagsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetPlayerSecret(const PlayFabServerSetPlayerSecretRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetPublisherData(const PlayFabServerSetPublisherDataRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetTitleData(const PlayFabServerSetTitleDataRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetTitleInternalData(const PlayFabServerSetTitleDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ModifyCharacterVirtualCurrencyResult> SubtractCharacterVirtualCurrency(const PlayFabServerSubtractCharacterVirtualCurrencyRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::ModifyUserVirtualCurrencyResult> SubtractUserVirtualCurrency(const PlayFabServerSubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkPSNAccount(const PlayFabServerUnlinkPSNAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkServerCustomId(const PlayFabServerUnlinkServerCustomIdRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnlinkXboxAccount(const PlayFabServerUnlinkXboxAccountRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UnlockContainerItemResult> UnlockContainerInstance(const PlayFabServerUnlockContainerInstanceRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UnlockContainerItemResult> UnlockContainerItem(const PlayFabServerUnlockContainerItemRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateAvatarUrl(const PlayFabServerUpdateAvatarUrlRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UpdateBansResult> UpdateBans(const PlayFabServerUpdateBansRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UpdateCharacterDataResult> UpdateCharacterData(const PlayFabServerUpdateCharacterDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UpdateCharacterDataResult> UpdateCharacterInternalData(const PlayFabServerUpdateCharacterDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UpdateCharacterDataResult> UpdateCharacterReadOnlyData(const PlayFabServerUpdateCharacterDataRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateCharacterStatistics(const PlayFabServerUpdateCharacterStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdatePlayerStatistics(const PlayFabServerUpdatePlayerStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateSharedGroupData(const PlayFabServerUpdateSharedGroupDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserData(const PlayFabServerUpdateUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserInternalData(const PlayFabServerUpdateUserInternalDataRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateUserInventoryItemCustomData(const PlayFabServerUpdateUserInventoryItemDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserPublisherData(const PlayFabServerUpdateUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserPublisherInternalData(const PlayFabServerUpdateUserInternalDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserPublisherReadOnlyData(const PlayFabServerUpdateUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserReadOnlyData(const PlayFabServerUpdateUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::WriteEventResponse> WriteCharacterEvent(const PlayFabServerWriteServerCharacterEventRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::WriteEventResponse> WritePlayerEvent(const PlayFabServerWriteServerPlayerEventRequest& request, const TaskQueue& queue);
        AsyncOp<ServerModels::WriteEventResponse> WriteTitleEvent(const PlayFabServerWriteTitleEventRequest& request, const TaskQueue& queue);

    };
}

#endif
