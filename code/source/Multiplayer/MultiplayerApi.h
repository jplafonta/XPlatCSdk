#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "MultiplayerDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Multiplayer APIs
    /// </summary>
    class PlayFabMultiplayerInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabMultiplayerInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabMultiplayerInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabMultiplayerInstanceAPI() = default;
        PlayFabMultiplayerInstanceAPI(const PlayFabMultiplayerInstanceAPI& source) = delete; // disable copy
        PlayFabMultiplayerInstanceAPI(PlayFabMultiplayerInstanceAPI&&) = delete; // disable move
        PlayFabMultiplayerInstanceAPI& operator=(const PlayFabMultiplayerInstanceAPI& source) = delete; // disable assignment
        PlayFabMultiplayerInstanceAPI& operator=(PlayFabMultiplayerInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        void CancelAllMatchmakingTicketsForPlayer(MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void CancelAllServerBackfillTicketsForPlayer(MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void CancelMatchmakingTicket(MultiplayerModels::CancelMatchmakingTicketRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void CancelServerBackfillTicket(MultiplayerModels::CancelServerBackfillTicketRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateBuildAlias(MultiplayerModels::CreateBuildAliasRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::BuildAliasDetailsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void CreateBuildWithCustomContainer(MultiplayerModels::CreateBuildWithCustomContainerRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::CreateBuildWithCustomContainerResponse> callback, const ErrorCallback errorCallback = nullptr);
        void CreateBuildWithManagedContainer(MultiplayerModels::CreateBuildWithManagedContainerRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::CreateBuildWithManagedContainerResponse> callback, const ErrorCallback errorCallback = nullptr);
        void CreateBuildWithProcessBasedServer(MultiplayerModels::CreateBuildWithProcessBasedServerRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::CreateBuildWithProcessBasedServerResponse> callback, const ErrorCallback errorCallback = nullptr);
        void CreateMatchmakingTicket(MultiplayerModels::CreateMatchmakingTicketRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::CreateMatchmakingTicketResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateRemoteUser(MultiplayerModels::CreateRemoteUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::CreateRemoteUserResponse> callback, const ErrorCallback errorCallback = nullptr);
        void CreateServerBackfillTicket(MultiplayerModels::CreateServerBackfillTicketRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::CreateServerBackfillTicketResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateServerMatchmakingTicket(MultiplayerModels::CreateServerMatchmakingTicketRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::CreateMatchmakingTicketResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateTitleMultiplayerServersQuotaChange(MultiplayerModels::CreateTitleMultiplayerServersQuotaChangeRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::CreateTitleMultiplayerServersQuotaChangeResponse> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteAsset(MultiplayerModels::DeleteAssetRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteBuild(MultiplayerModels::DeleteBuildRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteBuildAlias(MultiplayerModels::DeleteBuildAliasRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteBuildRegion(MultiplayerModels::DeleteBuildRegionRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteCertificate(MultiplayerModels::DeleteCertificateRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteContainerImageRepository(MultiplayerModels::DeleteContainerImageRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteRemoteUser(MultiplayerModels::DeleteRemoteUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void EnableMultiplayerServersForTitle(MultiplayerModels::EnableMultiplayerServersForTitleRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::EnableMultiplayerServersForTitleResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetAssetUploadUrl(MultiplayerModels::GetAssetUploadUrlRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetAssetUploadUrlResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetBuild(MultiplayerModels::GetBuildRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetBuildResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetBuildAlias(MultiplayerModels::GetBuildAliasRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::BuildAliasDetailsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetContainerRegistryCredentials(MultiplayerModels::GetContainerRegistryCredentialsRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetContainerRegistryCredentialsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetMatch(MultiplayerModels::GetMatchRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetMatchResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetMatchmakingTicket(MultiplayerModels::GetMatchmakingTicketRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetMatchmakingTicketResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetMultiplayerServerDetails(MultiplayerModels::GetMultiplayerServerDetailsRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetMultiplayerServerDetailsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetMultiplayerServerLogs(MultiplayerModels::GetMultiplayerServerLogsRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetMultiplayerServerLogsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetMultiplayerSessionLogsBySessionId(MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetMultiplayerServerLogsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetQueueStatistics(MultiplayerModels::GetQueueStatisticsRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetQueueStatisticsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetRemoteLoginEndpoint(MultiplayerModels::GetRemoteLoginEndpointRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetRemoteLoginEndpointResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetServerBackfillTicket(MultiplayerModels::GetServerBackfillTicketRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetServerBackfillTicketResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitleEnabledForMultiplayerServersStatus(MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitleMultiplayerServersQuotaChange(MultiplayerModels::GetTitleMultiplayerServersQuotaChangeRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetTitleMultiplayerServersQuotaChangeResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitleMultiplayerServersQuotas(MultiplayerModels::GetTitleMultiplayerServersQuotasRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::GetTitleMultiplayerServersQuotasResponse> callback, const ErrorCallback errorCallback = nullptr);
        void JoinMatchmakingTicket(MultiplayerModels::JoinMatchmakingTicketRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void ListArchivedMultiplayerServers(MultiplayerModels::ListMultiplayerServersRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListMultiplayerServersResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListAssetSummaries(MultiplayerModels::ListAssetSummariesRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListAssetSummariesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListBuildAliases(MultiplayerModels::MultiplayerEmptyRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListBuildAliasesForTitleResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListBuildSummariesV2(MultiplayerModels::ListBuildSummariesRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListBuildSummariesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListCertificateSummaries(MultiplayerModels::ListCertificateSummariesRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListCertificateSummariesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListContainerImages(MultiplayerModels::ListContainerImagesRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListContainerImagesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListContainerImageTags(MultiplayerModels::ListContainerImageTagsRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListContainerImageTagsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListMatchmakingTicketsForPlayer(MultiplayerModels::ListMatchmakingTicketsForPlayerRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListMatchmakingTicketsForPlayerResult> callback, const ErrorCallback errorCallback = nullptr);
        void ListMultiplayerServers(MultiplayerModels::ListMultiplayerServersRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListMultiplayerServersResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListPartyQosServers(MultiplayerModels::ListPartyQosServersRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListPartyQosServersResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListQosServersForTitle(MultiplayerModels::ListQosServersForTitleRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListQosServersForTitleResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListServerBackfillTicketsForPlayer(MultiplayerModels::ListServerBackfillTicketsForPlayerRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListServerBackfillTicketsForPlayerResult> callback, const ErrorCallback errorCallback = nullptr);
        void ListTitleMultiplayerServersQuotaChanges(MultiplayerModels::ListTitleMultiplayerServersQuotaChangesRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListTitleMultiplayerServersQuotaChangesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListVirtualMachineSummaries(MultiplayerModels::ListVirtualMachineSummariesRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::ListVirtualMachineSummariesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void RequestMultiplayerServer(MultiplayerModels::RequestMultiplayerServerRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::RequestMultiplayerServerResponse> callback, const ErrorCallback errorCallback = nullptr);
        void RolloverContainerRegistryCredentials(MultiplayerModels::RolloverContainerRegistryCredentialsRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::RolloverContainerRegistryCredentialsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ShutdownMultiplayerServer(MultiplayerModels::ShutdownMultiplayerServerRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void UntagContainerImage(MultiplayerModels::UntagContainerImageRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateBuildAlias(MultiplayerModels::UpdateBuildAliasRequest& request, const TaskQueue& queue, const ProcessApiCallback<MultiplayerModels::BuildAliasDetailsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateBuildName(MultiplayerModels::UpdateBuildNameRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateBuildRegion(MultiplayerModels::UpdateBuildRegionRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateBuildRegions(MultiplayerModels::UpdateBuildRegionsRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void UploadCertificate(MultiplayerModels::UploadCertificateRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
