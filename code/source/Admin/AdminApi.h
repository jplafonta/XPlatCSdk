#pragma once

#if defined(ENABLE_PLAYFABADMIN_API)

#include "AdminDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Admin APIs
    /// </summary>
    class PlayFabAdminInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabAdminInstanceAPI();
        PlayFabAdminInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings);
        PlayFabAdminInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabAdminInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabAdminInstanceAPI() = default;
        PlayFabAdminInstanceAPI(const PlayFabAdminInstanceAPI& source) = delete; // disable copy
        PlayFabAdminInstanceAPI(PlayFabAdminInstanceAPI&&) = delete; // disable move
        PlayFabAdminInstanceAPI& operator=(const PlayFabAdminInstanceAPI& source) = delete; // disable assignment
        PlayFabAdminInstanceAPI& operator=(PlayFabAdminInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        AsyncOp<BaseResult> AbortTaskInstance(const PlayFabAdminAbortTaskInstanceRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddLocalizedNews(const PlayFabAdminAddLocalizedNewsRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::AddNewsResult> AddNews(const PlayFabAdminAddNewsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddPlayerTag(const PlayFabAdminAddPlayerTagRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::AddServerBuildResult> AddServerBuild(const PlayFabAdminAddServerBuildRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::ModifyUserVirtualCurrencyResult> AddUserVirtualCurrency(const PlayFabAdminAddUserVirtualCurrencyRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddVirtualCurrencyTypes(const PlayFabAdminAddVirtualCurrencyTypesRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::BanUsersResult> BanUsers(const PlayFabAdminBanUsersRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::CheckLimitedEditionItemAvailabilityResult> CheckLimitedEditionItemAvailability(const PlayFabAdminCheckLimitedEditionItemAvailabilityRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::CreateTaskResult> CreateActionsOnPlayersInSegmentTask(const PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::CreateTaskResult> CreateCloudScriptTask(const PlayFabAdminCreateCloudScriptTaskRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::CreateTaskResult> CreateInsightsScheduledScalingTask(const PlayFabAdminCreateInsightsScheduledScalingTaskRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> CreateOpenIdConnection(const PlayFabAdminCreateOpenIdConnectionRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::CreatePlayerSharedSecretResult> CreatePlayerSharedSecret(const PlayFabAdminCreatePlayerSharedSecretRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::CreatePlayerStatisticDefinitionResult> CreatePlayerStatisticDefinition(const PlayFabAdminCreatePlayerStatisticDefinitionRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::CreateSegmentResponse> CreateSegment(const PlayFabAdminCreateSegmentRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteContent(const PlayFabAdminDeleteContentRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::DeleteMasterPlayerAccountResult> DeleteMasterPlayerAccount(const PlayFabAdminDeleteMasterPlayerAccountRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteOpenIdConnection(const PlayFabAdminDeleteOpenIdConnectionRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeletePlayer(const PlayFabAdminDeletePlayerRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeletePlayerSharedSecret(const PlayFabAdminDeletePlayerSharedSecretRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::DeleteSegmentsResponse> DeleteSegment(const PlayFabAdminDeleteSegmentRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteStore(const PlayFabAdminDeleteStoreRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteTask(const PlayFabAdminDeleteTaskRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteTitle(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteTitleDataOverride(const PlayFabAdminDeleteTitleDataOverrideRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::ExportMasterPlayerDataResult> ExportMasterPlayerData(const PlayFabAdminExportMasterPlayerDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetActionsOnPlayersInSegmentTaskInstanceResult> GetActionsOnPlayersInSegmentTaskInstance(const PlayFabAdminGetTaskInstanceRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetAllSegmentsResult> GetAllSegments(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetCatalogItemsResult> GetCatalogItems(const PlayFabAdminGetCatalogItemsRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetCloudScriptRevisionResult> GetCloudScriptRevision(const PlayFabAdminGetCloudScriptRevisionRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetCloudScriptTaskInstanceResult> GetCloudScriptTaskInstance(const PlayFabAdminGetTaskInstanceRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetCloudScriptVersionsResult> GetCloudScriptVersions(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetContentListResult> GetContentList(const PlayFabAdminGetContentListRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetContentUploadUrlResult> GetContentUploadUrl(const PlayFabAdminGetContentUploadUrlRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetDataReportResult> GetDataReport(const PlayFabAdminGetDataReportRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetMatchmakerGameInfoResult> GetMatchmakerGameInfo(const PlayFabAdminGetMatchmakerGameInfoRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetMatchmakerGameModesResult> GetMatchmakerGameModes(const PlayFabAdminGetMatchmakerGameModesRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPlayedTitleListResult> GetPlayedTitleList(const PlayFabAdminGetPlayedTitleListRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPlayerIdFromAuthTokenResult> GetPlayerIdFromAuthToken(const PlayFabAdminGetPlayerIdFromAuthTokenRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPlayerProfileResult> GetPlayerProfile(const PlayFabAdminGetPlayerProfileRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPlayerSegmentsResult> GetPlayerSegments(const PlayFabAdminGetPlayersSegmentsRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPlayerSharedSecretsResult> GetPlayerSharedSecrets(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPlayersInSegmentResult> GetPlayersInSegment(const PlayFabAdminGetPlayersInSegmentRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPlayerStatisticDefinitionsResult> GetPlayerStatisticDefinitions(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPlayerStatisticVersionsResult> GetPlayerStatisticVersions(const PlayFabAdminGetPlayerStatisticVersionsRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPlayerTagsResult> GetPlayerTags(const PlayFabAdminGetPlayerTagsRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPolicyResponse> GetPolicy(const PlayFabAdminGetPolicyRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetPublisherDataResult> GetPublisherData(const PlayFabAdminGetPublisherDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetRandomResultTablesResult> GetRandomResultTables(const PlayFabAdminGetRandomResultTablesRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetSegmentsResponse> GetSegments(const PlayFabAdminGetSegmentsRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetServerBuildInfoResult> GetServerBuildInfo(const PlayFabAdminGetServerBuildInfoRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetServerBuildUploadURLResult> GetServerBuildUploadUrl(const PlayFabAdminGetServerBuildUploadURLRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetStoreItemsResult> GetStoreItems(const PlayFabAdminGetStoreItemsRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetTaskInstancesResult> GetTaskInstances(const PlayFabAdminGetTaskInstancesRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetTasksResult> GetTasks(const PlayFabAdminGetTasksRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetTitleDataResult> GetTitleData(const PlayFabAdminGetTitleDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetTitleDataResult> GetTitleInternalData(const PlayFabAdminGetTitleDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::LookupUserAccountInfoResult> GetUserAccountInfo(const PlayFabAdminLookupUserAccountInfoRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetUserBansResult> GetUserBans(const PlayFabAdminGetUserBansRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetUserDataResult> GetUserData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetUserDataResult> GetUserInternalData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetUserInventoryResult> GetUserInventory(const PlayFabAdminGetUserInventoryRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetUserDataResult> GetUserPublisherData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetUserDataResult> GetUserPublisherInternalData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetUserDataResult> GetUserPublisherReadOnlyData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GetUserDataResult> GetUserReadOnlyData(const PlayFabAdminGetUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::GrantItemsToUsersResult> GrantItemsToUsers(const PlayFabAdminGrantItemsToUsersRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> IncrementLimitedEditionItemAvailability(const PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::IncrementPlayerStatisticVersionResult> IncrementPlayerStatisticVersion(const PlayFabAdminIncrementPlayerStatisticVersionRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::ListOpenIdConnectionResponse> ListOpenIdConnection(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::ListBuildsResult> ListServerBuilds(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::ListVirtualCurrencyTypesResult> ListVirtualCurrencyTypes(const BaseRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> ModifyMatchmakerGameModes(const PlayFabAdminModifyMatchmakerGameModesRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::ModifyServerBuildResult> ModifyServerBuild(const PlayFabAdminModifyServerBuildRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::RefundPurchaseResponse> RefundPurchase(const PlayFabAdminRefundPurchaseRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemovePlayerTag(const PlayFabAdminRemovePlayerTagRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveServerBuild(const PlayFabAdminRemoveServerBuildRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveVirtualCurrencyTypes(const PlayFabAdminRemoveVirtualCurrencyTypesRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> ResetCharacterStatistics(const PlayFabAdminResetCharacterStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> ResetPassword(const PlayFabAdminResetPasswordRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> ResetUserStatistics(const PlayFabAdminResetUserStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::ResolvePurchaseDisputeResponse> ResolvePurchaseDispute(const PlayFabAdminResolvePurchaseDisputeRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::RevokeAllBansForUserResult> RevokeAllBansForUser(const PlayFabAdminRevokeAllBansForUserRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::RevokeBansResult> RevokeBans(const PlayFabAdminRevokeBansRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RevokeInventoryItem(const PlayFabAdminRevokeInventoryItemRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::RevokeInventoryItemsResult> RevokeInventoryItems(const PlayFabAdminRevokeInventoryItemsRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::RunTaskResult> RunTask(const PlayFabAdminRunTaskRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SendAccountRecoveryEmail(const PlayFabAdminSendAccountRecoveryEmailRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetCatalogItems(const PlayFabAdminUpdateCatalogItemsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetPlayerSecret(const PlayFabAdminSetPlayerSecretRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetPublishedRevision(const PlayFabAdminSetPublishedRevisionRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetPublisherData(const PlayFabAdminSetPublisherDataRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetStoreItems(const PlayFabAdminUpdateStoreItemsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetTitleData(const PlayFabAdminSetTitleDataRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetTitleDataAndOverrides(const PlayFabAdminSetTitleDataAndOverridesRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetTitleInternalData(const PlayFabAdminSetTitleDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::SetupPushNotificationResult> SetupPushNotification(const PlayFabAdminSetupPushNotificationRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::ModifyUserVirtualCurrencyResult> SubtractUserVirtualCurrency(const PlayFabAdminSubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdateBansResult> UpdateBans(const PlayFabAdminUpdateBansRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateCatalogItems(const PlayFabAdminUpdateCatalogItemsRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdateCloudScriptResult> UpdateCloudScript(const PlayFabAdminUpdateCloudScriptRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateOpenIdConnection(const PlayFabAdminUpdateOpenIdConnectionRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdatePlayerSharedSecret(const PlayFabAdminUpdatePlayerSharedSecretRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdatePlayerStatisticDefinitionResult> UpdatePlayerStatisticDefinition(const PlayFabAdminUpdatePlayerStatisticDefinitionRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdatePolicyResponse> UpdatePolicy(const PlayFabAdminUpdatePolicyRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateRandomResultTables(const PlayFabAdminUpdateRandomResultTablesRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdateSegmentResponse> UpdateSegment(const PlayFabAdminUpdateSegmentRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateStoreItems(const PlayFabAdminUpdateStoreItemsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateTask(const PlayFabAdminUpdateTaskRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserData(const PlayFabAdminUpdateUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserInternalData(const PlayFabAdminUpdateUserInternalDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserPublisherData(const PlayFabAdminUpdateUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserPublisherInternalData(const PlayFabAdminUpdateUserInternalDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserPublisherReadOnlyData(const PlayFabAdminUpdateUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdateUserDataResult> UpdateUserReadOnlyData(const PlayFabAdminUpdateUserDataRequest& request, const TaskQueue& queue);
        AsyncOp<AdminModels::UpdateUserTitleDisplayNameResult> UpdateUserTitleDisplayName(const PlayFabAdminUpdateUserTitleDisplayNameRequest& request, const TaskQueue& queue);

    };
}

#endif
