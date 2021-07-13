#pragma once

#include "ServerDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class ServerAPI
{
public:
    ServerAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<String const> secretKey);
    ServerAPI(const ServerAPI& source) = delete;
    ServerAPI& operator=(const ServerAPI& source) = delete;
    ~ServerAPI() = default;

    // ------------ Generated API calls
    AsyncOp<ServerModels::ModifyCharacterVirtualCurrencyResult> AddCharacterVirtualCurrency(const PlayFabServerAddCharacterVirtualCurrencyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddFriend(const PlayFabServerAddFriendRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddGenericID(const PlayFabServerAddGenericIDRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddPlayerTag(const PlayFabServerAddPlayerTagRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddSharedGroupMembers(const PlayFabServerAddSharedGroupMembersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::ModifyUserVirtualCurrencyResult> AddUserVirtualCurrency(const PlayFabServerAddUserVirtualCurrencyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::AuthenticateSessionTicketResult> AuthenticateSessionTicket(const PlayFabServerAuthenticateSessionTicketRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::AwardSteamAchievementResult> AwardSteamAchievement(const PlayFabServerAwardSteamAchievementRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::BanUsersResult> BanUsers(const PlayFabServerBanUsersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::ConsumeItemResult> ConsumeItem(const PlayFabServerConsumeItemRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::CreateSharedGroupResult> CreateSharedGroup(const PlayFabServerCreateSharedGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteCharacterFromUser(const PlayFabServerDeleteCharacterFromUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeletePlayer(const PlayFabServerDeletePlayerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeletePushNotificationTemplate(const PlayFabServerDeletePushNotificationTemplateRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteSharedGroup(const PlayFabServerDeleteSharedGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeregisterGame(const PlayFabServerDeregisterGameRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::EvaluateRandomResultTableResult> EvaluateRandomResultTable(const PlayFabServerEvaluateRandomResultTableRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::ExecuteCloudScriptResult> ExecuteCloudScript(const PlayFabServerExecuteCloudScriptServerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetAllSegmentsResult> GetAllSegments(const TaskQueue& queue) const; 
    AsyncOp<ServerModels::ListUsersCharactersResult> GetAllUsersCharacters(const PlayFabServerListUsersCharactersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetCatalogItemsResult> GetCatalogItems(const PlayFabServerGetCatalogItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetCharacterDataResult> GetCharacterData(const PlayFabServerGetCharacterDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetCharacterDataResult> GetCharacterInternalData(const PlayFabServerGetCharacterDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetCharacterInventoryResult> GetCharacterInventory(const PlayFabServerGetCharacterInventoryRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetCharacterLeaderboardResult> GetCharacterLeaderboard(const PlayFabServerGetCharacterLeaderboardRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetCharacterDataResult> GetCharacterReadOnlyData(const PlayFabServerGetCharacterDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetCharacterStatisticsResult> GetCharacterStatistics(const PlayFabServerGetCharacterStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetContentDownloadUrlResult> GetContentDownloadUrl(const PlayFabServerGetContentDownloadUrlRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetLeaderboardResult> GetFriendLeaderboard(const PlayFabServerGetFriendLeaderboardRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetFriendsListResult> GetFriendsList(const PlayFabServerGetFriendsListRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetLeaderboardResult> GetLeaderboard(const PlayFabServerGetLeaderboardRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetLeaderboardAroundCharacterResult> GetLeaderboardAroundCharacter(const PlayFabServerGetLeaderboardAroundCharacterRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetLeaderboardAroundUserResult> GetLeaderboardAroundUser(const PlayFabServerGetLeaderboardAroundUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetLeaderboardForUsersCharactersResult> GetLeaderboardForUserCharacters(const PlayFabServerGetLeaderboardForUsersCharactersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayerCombinedInfoResult> GetPlayerCombinedInfo(const PlayFabServerGetPlayerCombinedInfoRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayerProfileResult> GetPlayerProfile(const PlayFabServerGetPlayerProfileRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayerSegmentsResult> GetPlayerSegments(const PlayFabServerGetPlayersSegmentsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayersInSegmentResult> GetPlayersInSegment(const PlayFabServerGetPlayersInSegmentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayerStatisticsResult> GetPlayerStatistics(const PlayFabServerGetPlayerStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayerStatisticVersionsResult> GetPlayerStatisticVersions(const PlayFabServerGetPlayerStatisticVersionsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayerTagsResult> GetPlayerTags(const PlayFabServerGetPlayerTagsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayFabIDsFromFacebookIDsResult> GetPlayFabIDsFromFacebookIDs(const PlayFabServerGetPlayFabIDsFromFacebookIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> GetPlayFabIDsFromFacebookInstantGamesIds(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayFabIDsFromGenericIDsResult> GetPlayFabIDsFromGenericIDs(const PlayFabServerGetPlayFabIDsFromGenericIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> GetPlayFabIDsFromNintendoSwitchDeviceIds(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayFabIDsFromPSNAccountIDsResult> GetPlayFabIDsFromPSNAccountIDs(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayFabIDsFromSteamIDsResult> GetPlayFabIDsFromSteamIDs(const PlayFabServerGetPlayFabIDsFromSteamIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPlayFabIDsFromXboxLiveIDsResult> GetPlayFabIDsFromXboxLiveIDs(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetPublisherDataResult> GetPublisherData(const PlayFabServerGetPublisherDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetRandomResultTablesResult> GetRandomResultTables(const PlayFabServerGetRandomResultTablesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetServerCustomIDsFromPlayFabIDsResult> GetServerCustomIDsFromPlayFabIDs(const PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetSharedGroupDataResult> GetSharedGroupData(const PlayFabServerGetSharedGroupDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetStoreItemsResult> GetStoreItems(const PlayFabServerGetStoreItemsServerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetTimeResult> GetTime(const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetTitleDataResult> GetTitleData(const PlayFabServerGetTitleDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetTitleDataResult> GetTitleInternalData(const PlayFabServerGetTitleDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetTitleNewsResult> GetTitleNews(const PlayFabServerGetTitleNewsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetUserAccountInfoResult> GetUserAccountInfo(const PlayFabServerGetUserAccountInfoRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetUserBansResult> GetUserBans(const PlayFabServerGetUserBansRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetUserDataResult> GetUserData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetUserDataResult> GetUserInternalData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetUserInventoryResult> GetUserInventory(const PlayFabServerGetUserInventoryRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetUserDataResult> GetUserPublisherData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetUserDataResult> GetUserPublisherInternalData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetUserDataResult> GetUserPublisherReadOnlyData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GetUserDataResult> GetUserReadOnlyData(const PlayFabServerGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GrantCharacterToUserResult> GrantCharacterToUser(const PlayFabServerGrantCharacterToUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GrantItemsToCharacterResult> GrantItemsToCharacter(const PlayFabServerGrantItemsToCharacterRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GrantItemsToUserResult> GrantItemsToUser(const PlayFabServerGrantItemsToUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::GrantItemsToUsersResult> GrantItemsToUsers(const PlayFabServerGrantItemsToUsersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkPSNAccount(const PlayFabServerLinkPSNAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkServerCustomId(const PlayFabServerLinkServerCustomIdRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> LinkXboxAccount(const PlayFabServerLinkXboxAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::ModifyItemUsesResult> ModifyItemUses(const PlayFabServerModifyItemUsesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> MoveItemToCharacterFromCharacter(const PlayFabServerMoveItemToCharacterFromCharacterRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> MoveItemToCharacterFromUser(const PlayFabServerMoveItemToCharacterFromUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> MoveItemToUserFromCharacter(const PlayFabServerMoveItemToUserFromCharacterRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::NotifyMatchmakerPlayerLeftResult> NotifyMatchmakerPlayerLeft(const PlayFabServerNotifyMatchmakerPlayerLeftRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::RedeemCouponResult> RedeemCoupon(const PlayFabServerRedeemCouponRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::RedeemMatchmakerTicketResult> RedeemMatchmakerTicket(const PlayFabServerRedeemMatchmakerTicketRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RefreshGameServerInstanceHeartbeat(const PlayFabServerRefreshGameServerInstanceHeartbeatRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::RegisterGameResponse> RegisterGame(const PlayFabServerRegisterGameRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveFriend(const PlayFabServerRemoveFriendRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveGenericID(const PlayFabServerRemoveGenericIDRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemovePlayerTag(const PlayFabServerRemovePlayerTagRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveSharedGroupMembers(const PlayFabServerRemoveSharedGroupMembersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::ReportPlayerServerResult> ReportPlayer(const PlayFabServerReportPlayerServerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::RevokeAllBansForUserResult> RevokeAllBansForUser(const PlayFabServerRevokeAllBansForUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::RevokeBansResult> RevokeBans(const PlayFabServerRevokeBansRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RevokeInventoryItem(const PlayFabServerRevokeInventoryItemRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::RevokeInventoryItemsResult> RevokeInventoryItems(const PlayFabServerRevokeInventoryItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::SavePushNotificationTemplateResult> SavePushNotificationTemplate(const PlayFabServerSavePushNotificationTemplateRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SendCustomAccountRecoveryEmail(const PlayFabServerSendCustomAccountRecoveryEmailRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SendEmailFromTemplate(const PlayFabServerSendEmailFromTemplateRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SendPushNotification(const PlayFabServerSendPushNotificationRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SendPushNotificationFromTemplate(const PlayFabServerSendPushNotificationFromTemplateRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetFriendTags(const PlayFabServerSetFriendTagsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetGameServerInstanceData(const PlayFabServerSetGameServerInstanceDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetGameServerInstanceState(const PlayFabServerSetGameServerInstanceStateRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetGameServerInstanceTags(const PlayFabServerSetGameServerInstanceTagsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetPlayerSecret(const PlayFabServerSetPlayerSecretRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetPublisherData(const PlayFabServerSetPublisherDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetTitleData(const PlayFabServerSetTitleDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetTitleInternalData(const PlayFabServerSetTitleDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::ModifyCharacterVirtualCurrencyResult> SubtractCharacterVirtualCurrency(const PlayFabServerSubtractCharacterVirtualCurrencyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::ModifyUserVirtualCurrencyResult> SubtractUserVirtualCurrency(const PlayFabServerSubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkPSNAccount(const PlayFabServerUnlinkPSNAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkServerCustomId(const PlayFabServerUnlinkServerCustomIdRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnlinkXboxAccount(const PlayFabServerUnlinkXboxAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UnlockContainerItemResult> UnlockContainerInstance(const PlayFabServerUnlockContainerInstanceRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UnlockContainerItemResult> UnlockContainerItem(const PlayFabServerUnlockContainerItemRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateAvatarUrl(const PlayFabServerUpdateAvatarUrlRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UpdateBansResult> UpdateBans(const PlayFabServerUpdateBansRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UpdateCharacterDataResult> UpdateCharacterData(const PlayFabServerUpdateCharacterDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UpdateCharacterDataResult> UpdateCharacterInternalData(const PlayFabServerUpdateCharacterDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UpdateCharacterDataResult> UpdateCharacterReadOnlyData(const PlayFabServerUpdateCharacterDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateCharacterStatistics(const PlayFabServerUpdateCharacterStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdatePlayerStatistics(const PlayFabServerUpdatePlayerStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateSharedGroupData(const PlayFabServerUpdateSharedGroupDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserData(const PlayFabServerUpdateUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserInternalData(const PlayFabServerUpdateUserInternalDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateUserInventoryItemCustomData(const PlayFabServerUpdateUserInventoryItemDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserPublisherData(const PlayFabServerUpdateUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserPublisherInternalData(const PlayFabServerUpdateUserInternalDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserPublisherReadOnlyData(const PlayFabServerUpdateUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::UpdateUserDataResult> UpdateUserReadOnlyData(const PlayFabServerUpdateUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::WriteEventResponse> WriteCharacterEvent(const PlayFabServerWriteServerCharacterEventRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::WriteEventResponse> WritePlayerEvent(const PlayFabServerWriteServerPlayerEventRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ServerModels::WriteEventResponse> WriteTitleEvent(const PlayFabServerWriteTitleEventRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<String const> m_secretKey;
};

}
