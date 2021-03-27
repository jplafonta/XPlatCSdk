#pragma once

#if defined(ENABLE_PLAYFABADMIN_API)

#include <Admin/AdminDataModels.h>
#include <playfab/HttpClient.h>
#include <playfab/TaskQueue.h>

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
        void AbortTaskInstance(AdminModels::AbortTaskInstanceRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void AddLocalizedNews(AdminModels::AddLocalizedNewsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::AddLocalizedNewsResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddNews(AdminModels::AddNewsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::AddNewsResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddPlayerTag(AdminModels::AddPlayerTagRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::AddPlayerTagResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddServerBuild(AdminModels::AddServerBuildRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::AddServerBuildResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddUserVirtualCurrency(AdminModels::AddUserVirtualCurrencyRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ModifyUserVirtualCurrencyResult> callback, const ErrorCallback errorCallback = nullptr);
        void AddVirtualCurrencyTypes(AdminModels::AddVirtualCurrencyTypesRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::BlankResult> callback, const ErrorCallback errorCallback = nullptr);
        void BanUsers(AdminModels::BanUsersRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::BanUsersResult> callback, const ErrorCallback errorCallback = nullptr);
        void CheckLimitedEditionItemAvailability(AdminModels::CheckLimitedEditionItemAvailabilityRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::CheckLimitedEditionItemAvailabilityResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateActionsOnPlayersInSegmentTask(AdminModels::CreateActionsOnPlayerSegmentTaskRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::CreateTaskResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateCloudScriptTask(AdminModels::CreateCloudScriptTaskRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::CreateTaskResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateInsightsScheduledScalingTask(AdminModels::CreateInsightsScheduledScalingTaskRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::CreateTaskResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateOpenIdConnection(AdminModels::CreateOpenIdConnectionRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void CreatePlayerSharedSecret(AdminModels::CreatePlayerSharedSecretRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::CreatePlayerSharedSecretResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreatePlayerStatisticDefinition(AdminModels::CreatePlayerStatisticDefinitionRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::CreatePlayerStatisticDefinitionResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateSegment(AdminModels::CreateSegmentRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::CreateSegmentResponse> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteContent(AdminModels::DeleteContentRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::BlankResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteMasterPlayerAccount(AdminModels::DeleteMasterPlayerAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::DeleteMasterPlayerAccountResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteOpenIdConnection(AdminModels::DeleteOpenIdConnectionRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void DeletePlayer(AdminModels::DeletePlayerRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::DeletePlayerResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeletePlayerSharedSecret(AdminModels::DeletePlayerSharedSecretRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::DeletePlayerSharedSecretResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteSegment(AdminModels::DeleteSegmentRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::DeleteSegmentsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteStore(AdminModels::DeleteStoreRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::DeleteStoreResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteTask(AdminModels::DeleteTaskRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteTitle(AdminModels::DeleteTitleRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::DeleteTitleResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteTitleDataOverride(AdminModels::DeleteTitleDataOverrideRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::DeleteTitleDataOverrideResult> callback, const ErrorCallback errorCallback = nullptr);
        void ExportMasterPlayerData(AdminModels::ExportMasterPlayerDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ExportMasterPlayerDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetActionsOnPlayersInSegmentTaskInstance(AdminModels::GetTaskInstanceRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetActionsOnPlayersInSegmentTaskInstanceResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetAllSegments(AdminModels::GetAllSegmentsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetAllSegmentsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCatalogItems(AdminModels::GetCatalogItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetCatalogItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCloudScriptRevision(AdminModels::GetCloudScriptRevisionRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetCloudScriptRevisionResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCloudScriptTaskInstance(AdminModels::GetTaskInstanceRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetCloudScriptTaskInstanceResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetCloudScriptVersions(AdminModels::GetCloudScriptVersionsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetCloudScriptVersionsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetContentList(AdminModels::GetContentListRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetContentListResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetContentUploadUrl(AdminModels::GetContentUploadUrlRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetContentUploadUrlResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetDataReport(AdminModels::GetDataReportRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetDataReportResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetMatchmakerGameInfo(AdminModels::GetMatchmakerGameInfoRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetMatchmakerGameInfoResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetMatchmakerGameModes(AdminModels::GetMatchmakerGameModesRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetMatchmakerGameModesResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayedTitleList(AdminModels::GetPlayedTitleListRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPlayedTitleListResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerIdFromAuthToken(AdminModels::GetPlayerIdFromAuthTokenRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPlayerIdFromAuthTokenResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerProfile(AdminModels::GetPlayerProfileRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPlayerProfileResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerSegments(AdminModels::GetPlayersSegmentsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPlayerSegmentsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerSharedSecrets(AdminModels::GetPlayerSharedSecretsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPlayerSharedSecretsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayersInSegment(AdminModels::GetPlayersInSegmentRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPlayersInSegmentResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerStatisticDefinitions(AdminModels::GetPlayerStatisticDefinitionsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPlayerStatisticDefinitionsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerStatisticVersions(AdminModels::GetPlayerStatisticVersionsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPlayerStatisticVersionsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPlayerTags(AdminModels::GetPlayerTagsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPlayerTagsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetPolicy(AdminModels::GetPolicyRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPolicyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetPublisherData(AdminModels::GetPublisherDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetPublisherDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetRandomResultTables(AdminModels::GetRandomResultTablesRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetRandomResultTablesResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetSegments(AdminModels::GetSegmentsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetSegmentsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetServerBuildInfo(AdminModels::GetServerBuildInfoRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetServerBuildInfoResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetServerBuildUploadUrl(AdminModels::GetServerBuildUploadURLRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetServerBuildUploadURLResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetStoreItems(AdminModels::GetStoreItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetStoreItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTaskInstances(AdminModels::GetTaskInstancesRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetTaskInstancesResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTasks(AdminModels::GetTasksRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetTasksResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitleData(AdminModels::GetTitleDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetTitleDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitleInternalData(AdminModels::GetTitleDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetTitleDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserAccountInfo(AdminModels::LookupUserAccountInfoRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::LookupUserAccountInfoResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserBans(AdminModels::GetUserBansRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetUserBansResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserData(AdminModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserInternalData(AdminModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserInventory(AdminModels::GetUserInventoryRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetUserInventoryResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserPublisherData(AdminModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserPublisherInternalData(AdminModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserPublisherReadOnlyData(AdminModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetUserReadOnlyData(AdminModels::GetUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GetUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void GrantItemsToUsers(AdminModels::GrantItemsToUsersRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::GrantItemsToUsersResult> callback, const ErrorCallback errorCallback = nullptr);
        void IncrementLimitedEditionItemAvailability(AdminModels::IncrementLimitedEditionItemAvailabilityRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::IncrementLimitedEditionItemAvailabilityResult> callback, const ErrorCallback errorCallback = nullptr);
        void IncrementPlayerStatisticVersion(AdminModels::IncrementPlayerStatisticVersionRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::IncrementPlayerStatisticVersionResult> callback, const ErrorCallback errorCallback = nullptr);
        void ListOpenIdConnection(AdminModels::ListOpenIdConnectionRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ListOpenIdConnectionResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListServerBuilds(AdminModels::ListBuildsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ListBuildsResult> callback, const ErrorCallback errorCallback = nullptr);
        void ListVirtualCurrencyTypes(AdminModels::ListVirtualCurrencyTypesRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ListVirtualCurrencyTypesResult> callback, const ErrorCallback errorCallback = nullptr);
        void ModifyMatchmakerGameModes(AdminModels::ModifyMatchmakerGameModesRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ModifyMatchmakerGameModesResult> callback, const ErrorCallback errorCallback = nullptr);
        void ModifyServerBuild(AdminModels::ModifyServerBuildRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ModifyServerBuildResult> callback, const ErrorCallback errorCallback = nullptr);
        void RefundPurchase(AdminModels::RefundPurchaseRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::RefundPurchaseResponse> callback, const ErrorCallback errorCallback = nullptr);
        void RemovePlayerTag(AdminModels::RemovePlayerTagRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::RemovePlayerTagResult> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveServerBuild(AdminModels::RemoveServerBuildRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::RemoveServerBuildResult> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveVirtualCurrencyTypes(AdminModels::RemoveVirtualCurrencyTypesRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::BlankResult> callback, const ErrorCallback errorCallback = nullptr);
        void ResetCharacterStatistics(AdminModels::ResetCharacterStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ResetCharacterStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void ResetPassword(AdminModels::ResetPasswordRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ResetPasswordResult> callback, const ErrorCallback errorCallback = nullptr);
        void ResetUserStatistics(AdminModels::ResetUserStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ResetUserStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void ResolvePurchaseDispute(AdminModels::ResolvePurchaseDisputeRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ResolvePurchaseDisputeResponse> callback, const ErrorCallback errorCallback = nullptr);
        void RevokeAllBansForUser(AdminModels::RevokeAllBansForUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::RevokeAllBansForUserResult> callback, const ErrorCallback errorCallback = nullptr);
        void RevokeBans(AdminModels::RevokeBansRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::RevokeBansResult> callback, const ErrorCallback errorCallback = nullptr);
        void RevokeInventoryItem(AdminModels::RevokeInventoryItemRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::RevokeInventoryResult> callback, const ErrorCallback errorCallback = nullptr);
        void RevokeInventoryItems(AdminModels::RevokeInventoryItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::RevokeInventoryItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void RunTask(AdminModels::RunTaskRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::RunTaskResult> callback, const ErrorCallback errorCallback = nullptr);
        void SendAccountRecoveryEmail(AdminModels::SendAccountRecoveryEmailRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::SendAccountRecoveryEmailResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetCatalogItems(AdminModels::UpdateCatalogItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateCatalogItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetPlayerSecret(AdminModels::SetPlayerSecretRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::SetPlayerSecretResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetPublishedRevision(AdminModels::SetPublishedRevisionRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::SetPublishedRevisionResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetPublisherData(AdminModels::SetPublisherDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::SetPublisherDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetStoreItems(AdminModels::UpdateStoreItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateStoreItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetTitleData(AdminModels::SetTitleDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::SetTitleDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetTitleDataAndOverrides(AdminModels::SetTitleDataAndOverridesRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::SetTitleDataAndOverridesResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetTitleInternalData(AdminModels::SetTitleDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::SetTitleDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetupPushNotification(AdminModels::SetupPushNotificationRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::SetupPushNotificationResult> callback, const ErrorCallback errorCallback = nullptr);
        void SubtractUserVirtualCurrency(AdminModels::SubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::ModifyUserVirtualCurrencyResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateBans(AdminModels::UpdateBansRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateBansResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateCatalogItems(AdminModels::UpdateCatalogItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateCatalogItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateCloudScript(AdminModels::UpdateCloudScriptRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateCloudScriptResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateOpenIdConnection(AdminModels::UpdateOpenIdConnectionRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdatePlayerSharedSecret(AdminModels::UpdatePlayerSharedSecretRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdatePlayerSharedSecretResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdatePlayerStatisticDefinition(AdminModels::UpdatePlayerStatisticDefinitionRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdatePlayerStatisticDefinitionResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdatePolicy(AdminModels::UpdatePolicyRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdatePolicyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateRandomResultTables(AdminModels::UpdateRandomResultTablesRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateRandomResultTablesResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateSegment(AdminModels::UpdateSegmentRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateSegmentResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateStoreItems(AdminModels::UpdateStoreItemsRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateStoreItemsResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateTask(AdminModels::UpdateTaskRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserData(AdminModels::UpdateUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserInternalData(AdminModels::UpdateUserInternalDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserPublisherData(AdminModels::UpdateUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserPublisherInternalData(AdminModels::UpdateUserInternalDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserPublisherReadOnlyData(AdminModels::UpdateUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserReadOnlyData(AdminModels::UpdateUserDataRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateUserDataResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateUserTitleDisplayName(AdminModels::UpdateUserTitleDisplayNameRequest& request, const TaskQueue& queue, const ProcessApiCallback<AdminModels::UpdateUserTitleDisplayNameResult> callback, const ErrorCallback errorCallback = nullptr);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
