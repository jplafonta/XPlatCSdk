#pragma once

#include "AdminDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
struct AuthTokens;

class AdminAPI
{
public:
    AdminAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<String const> secretKey);
    AdminAPI(const AdminAPI& source) = delete;
    AdminAPI& operator=(const AdminAPI& source) = delete;
    ~AdminAPI() = default;

    // ------------ Generated API calls
    AsyncOp<void> AbortTaskInstance(const PlayFabAdminAbortTaskInstanceRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddLocalizedNews(const PlayFabAdminAddLocalizedNewsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::AddNewsResult> AddNews(const PlayFabAdminAddNewsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddPlayerTag(const PlayFabAdminAddPlayerTagRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::AddServerBuildResult> AddServerBuild(const PlayFabAdminAddServerBuildRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::ModifyUserVirtualCurrencyResult> AddUserVirtualCurrency(const PlayFabAdminAddUserVirtualCurrencyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddVirtualCurrencyTypes(const PlayFabAdminAddVirtualCurrencyTypesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::BanUsersResult> BanUsers(const PlayFabAdminBanUsersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::CheckLimitedEditionItemAvailabilityResult> CheckLimitedEditionItemAvailability(const PlayFabAdminCheckLimitedEditionItemAvailabilityRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::CreateTaskResult> CreateActionsOnPlayersInSegmentTask(const PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::CreateTaskResult> CreateCloudScriptTask(const PlayFabAdminCreateCloudScriptTaskRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::CreateTaskResult> CreateInsightsScheduledScalingTask(const PlayFabAdminCreateInsightsScheduledScalingTaskRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> CreateOpenIdConnection(const PlayFabAdminCreateOpenIdConnectionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::CreatePlayerSharedSecretResult> CreatePlayerSharedSecret(const PlayFabAdminCreatePlayerSharedSecretRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::CreatePlayerStatisticDefinitionResult> CreatePlayerStatisticDefinition(const PlayFabAdminCreatePlayerStatisticDefinitionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::CreateSegmentResponse> CreateSegment(const PlayFabAdminCreateSegmentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteContent(const PlayFabAdminDeleteContentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::DeleteMasterPlayerAccountResult> DeleteMasterPlayerAccount(const PlayFabAdminDeleteMasterPlayerAccountRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteOpenIdConnection(const PlayFabAdminDeleteOpenIdConnectionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeletePlayer(const PlayFabAdminDeletePlayerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeletePlayerSharedSecret(const PlayFabAdminDeletePlayerSharedSecretRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::DeleteSegmentsResponse> DeleteSegment(const PlayFabAdminDeleteSegmentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteStore(const PlayFabAdminDeleteStoreRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteTask(const PlayFabAdminDeleteTaskRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteTitle(const TaskQueue& queue) const; 
    AsyncOp<void> DeleteTitleDataOverride(const PlayFabAdminDeleteTitleDataOverrideRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::ExportMasterPlayerDataResult> ExportMasterPlayerData(const PlayFabAdminExportMasterPlayerDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetActionsOnPlayersInSegmentTaskInstanceResult> GetActionsOnPlayersInSegmentTaskInstance(const PlayFabAdminGetTaskInstanceRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetAllSegmentsResult> GetAllSegments(const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetCatalogItemsResult> GetCatalogItems(const PlayFabAdminGetCatalogItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetCloudScriptRevisionResult> GetCloudScriptRevision(const PlayFabAdminGetCloudScriptRevisionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetCloudScriptTaskInstanceResult> GetCloudScriptTaskInstance(const PlayFabAdminGetTaskInstanceRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetCloudScriptVersionsResult> GetCloudScriptVersions(const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetContentListResult> GetContentList(const PlayFabAdminGetContentListRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetContentUploadUrlResult> GetContentUploadUrl(const PlayFabAdminGetContentUploadUrlRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetDataReportResult> GetDataReport(const PlayFabAdminGetDataReportRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetMatchmakerGameInfoResult> GetMatchmakerGameInfo(const PlayFabAdminGetMatchmakerGameInfoRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetMatchmakerGameModesResult> GetMatchmakerGameModes(const PlayFabAdminGetMatchmakerGameModesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPlayedTitleListResult> GetPlayedTitleList(const PlayFabAdminGetPlayedTitleListRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPlayerIdFromAuthTokenResult> GetPlayerIdFromAuthToken(const PlayFabAdminGetPlayerIdFromAuthTokenRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPlayerProfileResult> GetPlayerProfile(const PlayFabAdminGetPlayerProfileRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPlayerSegmentsResult> GetPlayerSegments(const PlayFabAdminGetPlayersSegmentsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPlayerSharedSecretsResult> GetPlayerSharedSecrets(const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPlayersInSegmentResult> GetPlayersInSegment(const PlayFabAdminGetPlayersInSegmentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPlayerStatisticDefinitionsResult> GetPlayerStatisticDefinitions(const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPlayerStatisticVersionsResult> GetPlayerStatisticVersions(const PlayFabAdminGetPlayerStatisticVersionsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPlayerTagsResult> GetPlayerTags(const PlayFabAdminGetPlayerTagsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPolicyResponse> GetPolicy(const PlayFabAdminGetPolicyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetPublisherDataResult> GetPublisherData(const PlayFabAdminGetPublisherDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetRandomResultTablesResult> GetRandomResultTables(const PlayFabAdminGetRandomResultTablesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetSegmentsResponse> GetSegments(const PlayFabAdminGetSegmentsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetServerBuildInfoResult> GetServerBuildInfo(const PlayFabAdminGetServerBuildInfoRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetServerBuildUploadURLResult> GetServerBuildUploadUrl(const PlayFabAdminGetServerBuildUploadURLRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetStoreItemsResult> GetStoreItems(const PlayFabAdminGetStoreItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetTaskInstancesResult> GetTaskInstances(const PlayFabAdminGetTaskInstancesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetTasksResult> GetTasks(const PlayFabAdminGetTasksRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetTitleDataResult> GetTitleData(const PlayFabAdminGetTitleDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetTitleDataResult> GetTitleInternalData(const PlayFabAdminGetTitleDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::LookupUserAccountInfoResult> GetUserAccountInfo(const PlayFabAdminLookupUserAccountInfoRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetUserBansResult> GetUserBans(const PlayFabAdminGetUserBansRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetUserDataResult> GetUserData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetUserDataResult> GetUserInternalData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetUserInventoryResult> GetUserInventory(const PlayFabAdminGetUserInventoryRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetUserDataResult> GetUserPublisherData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetUserDataResult> GetUserPublisherInternalData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetUserDataResult> GetUserPublisherReadOnlyData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GetUserDataResult> GetUserReadOnlyData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::GrantItemsToUsersResult> GrantItemsToUsers(const PlayFabAdminGrantItemsToUsersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> IncrementLimitedEditionItemAvailability(const PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::IncrementPlayerStatisticVersionResult> IncrementPlayerStatisticVersion(const PlayFabAdminIncrementPlayerStatisticVersionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::ListOpenIdConnectionResponse> ListOpenIdConnection(const TaskQueue& queue) const; 
    AsyncOp<AdminModels::ListBuildsResult> ListServerBuilds(const TaskQueue& queue) const; 
    AsyncOp<AdminModels::ListVirtualCurrencyTypesResult> ListVirtualCurrencyTypes(const TaskQueue& queue) const; 
    AsyncOp<void> ModifyMatchmakerGameModes(const PlayFabAdminModifyMatchmakerGameModesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::ModifyServerBuildResult> ModifyServerBuild(const PlayFabAdminModifyServerBuildRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::RefundPurchaseResponse> RefundPurchase(const PlayFabAdminRefundPurchaseRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemovePlayerTag(const PlayFabAdminRemovePlayerTagRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveServerBuild(const PlayFabAdminRemoveServerBuildRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveVirtualCurrencyTypes(const PlayFabAdminRemoveVirtualCurrencyTypesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> ResetCharacterStatistics(const PlayFabAdminResetCharacterStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> ResetPassword(const PlayFabAdminResetPasswordRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> ResetUserStatistics(const PlayFabAdminResetUserStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::ResolvePurchaseDisputeResponse> ResolvePurchaseDispute(const PlayFabAdminResolvePurchaseDisputeRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::RevokeAllBansForUserResult> RevokeAllBansForUser(const PlayFabAdminRevokeAllBansForUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::RevokeBansResult> RevokeBans(const PlayFabAdminRevokeBansRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RevokeInventoryItem(const PlayFabAdminRevokeInventoryItemRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::RevokeInventoryItemsResult> RevokeInventoryItems(const PlayFabAdminRevokeInventoryItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::RunTaskResult> RunTask(const PlayFabAdminRunTaskRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SendAccountRecoveryEmail(const PlayFabAdminSendAccountRecoveryEmailRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetCatalogItems(const PlayFabAdminUpdateCatalogItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetPlayerSecret(const PlayFabAdminSetPlayerSecretRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetPublishedRevision(const PlayFabAdminSetPublishedRevisionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetPublisherData(const PlayFabAdminSetPublisherDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetStoreItems(const PlayFabAdminUpdateStoreItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetTitleData(const PlayFabAdminSetTitleDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetTitleDataAndOverrides(const PlayFabAdminSetTitleDataAndOverridesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetTitleInternalData(const PlayFabAdminSetTitleDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::SetupPushNotificationResult> SetupPushNotification(const PlayFabAdminSetupPushNotificationRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::ModifyUserVirtualCurrencyResult> SubtractUserVirtualCurrency(const PlayFabAdminSubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdateBansResult> UpdateBans(const PlayFabAdminUpdateBansRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateCatalogItems(const PlayFabAdminUpdateCatalogItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdateCloudScriptResult> UpdateCloudScript(const PlayFabAdminUpdateCloudScriptRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateOpenIdConnection(const PlayFabAdminUpdateOpenIdConnectionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdatePlayerSharedSecret(const PlayFabAdminUpdatePlayerSharedSecretRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdatePlayerStatisticDefinitionResult> UpdatePlayerStatisticDefinition(const PlayFabAdminUpdatePlayerStatisticDefinitionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdatePolicyResponse> UpdatePolicy(const PlayFabAdminUpdatePolicyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateRandomResultTables(const PlayFabAdminUpdateRandomResultTablesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdateSegmentResponse> UpdateSegment(const PlayFabAdminUpdateSegmentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateStoreItems(const PlayFabAdminUpdateStoreItemsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateTask(const PlayFabAdminUpdateTaskRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserData(const PlayFabAdminUpdateUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserInternalData(const PlayFabAdminUpdateUserInternalDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserPublisherData(const PlayFabAdminUpdateUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserPublisherInternalData(const PlayFabAdminUpdateUserInternalDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserPublisherReadOnlyData(const PlayFabAdminUpdateUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserReadOnlyData(const PlayFabAdminUpdateUserDataRequest& request, const TaskQueue& queue) const; 
    AsyncOp<AdminModels::UpdateUserTitleDisplayNameResult> UpdateUserTitleDisplayName(const PlayFabAdminUpdateUserTitleDisplayNameRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<String const> m_secretKey;
};

}
