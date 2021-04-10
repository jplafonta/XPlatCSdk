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
        AsyncOp<BaseResult> CancelAllMatchmakingTicketsForPlayer(const PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> CancelAllServerBackfillTicketsForPlayer(const PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> CancelMatchmakingTicket(const PlayFabMultiplayerCancelMatchmakingTicketRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> CancelServerBackfillTicket(const PlayFabMultiplayerCancelServerBackfillTicketRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::BuildAliasDetailsResponse> CreateBuildAlias(const PlayFabMultiplayerCreateBuildAliasRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::CreateBuildWithCustomContainerResponse> CreateBuildWithCustomContainer(const PlayFabMultiplayerCreateBuildWithCustomContainerRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::CreateBuildWithManagedContainerResponse> CreateBuildWithManagedContainer(const PlayFabMultiplayerCreateBuildWithManagedContainerRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::CreateBuildWithProcessBasedServerResponse> CreateBuildWithProcessBasedServer(const PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::CreateMatchmakingTicketResult> CreateMatchmakingTicket(const PlayFabMultiplayerCreateMatchmakingTicketRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::CreateRemoteUserResponse> CreateRemoteUser(const PlayFabMultiplayerCreateRemoteUserRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::CreateServerBackfillTicketResult> CreateServerBackfillTicket(const PlayFabMultiplayerCreateServerBackfillTicketRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::CreateMatchmakingTicketResult> CreateServerMatchmakingTicket(const PlayFabMultiplayerCreateServerMatchmakingTicketRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::CreateTitleMultiplayerServersQuotaChangeResponse> CreateTitleMultiplayerServersQuotaChange(const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteAsset(const PlayFabMultiplayerDeleteAssetRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteBuild(const PlayFabMultiplayerDeleteBuildRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteBuildAlias(const PlayFabMultiplayerDeleteBuildAliasRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteBuildRegion(const PlayFabMultiplayerDeleteBuildRegionRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteCertificate(const PlayFabMultiplayerDeleteCertificateRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteContainerImageRepository(const PlayFabMultiplayerDeleteContainerImageRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteRemoteUser(const PlayFabMultiplayerDeleteRemoteUserRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::EnableMultiplayerServersForTitleResponse> EnableMultiplayerServersForTitle(const PlayFabMultiplayerEnableMultiplayerServersForTitleRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetAssetUploadUrlResponse> GetAssetUploadUrl(const PlayFabMultiplayerGetAssetUploadUrlRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetBuildResponse> GetBuild(const PlayFabMultiplayerGetBuildRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::BuildAliasDetailsResponse> GetBuildAlias(const PlayFabMultiplayerGetBuildAliasRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetContainerRegistryCredentialsResponse> GetContainerRegistryCredentials(const PlayFabMultiplayerGetContainerRegistryCredentialsRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetMatchResult> GetMatch(const PlayFabMultiplayerGetMatchRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetMatchmakingTicketResult> GetMatchmakingTicket(const PlayFabMultiplayerGetMatchmakingTicketRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetMultiplayerServerDetailsResponse> GetMultiplayerServerDetails(const PlayFabMultiplayerGetMultiplayerServerDetailsRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetMultiplayerServerLogsResponse> GetMultiplayerServerLogs(const PlayFabMultiplayerGetMultiplayerServerLogsRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetMultiplayerServerLogsResponse> GetMultiplayerSessionLogsBySessionId(const PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetQueueStatisticsResult> GetQueueStatistics(const PlayFabMultiplayerGetQueueStatisticsRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetRemoteLoginEndpointResponse> GetRemoteLoginEndpoint(const PlayFabMultiplayerGetRemoteLoginEndpointRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetServerBackfillTicketResult> GetServerBackfillTicket(const PlayFabMultiplayerGetServerBackfillTicketRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse> GetTitleEnabledForMultiplayerServersStatus(const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetTitleMultiplayerServersQuotaChangeResponse> GetTitleMultiplayerServersQuotaChange(const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::GetTitleMultiplayerServersQuotasResponse> GetTitleMultiplayerServersQuotas(const PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> JoinMatchmakingTicket(const PlayFabMultiplayerJoinMatchmakingTicketRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListMultiplayerServersResponse> ListArchivedMultiplayerServers(const PlayFabMultiplayerListMultiplayerServersRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListAssetSummariesResponse> ListAssetSummaries(const PlayFabMultiplayerListAssetSummariesRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListBuildAliasesResponse> ListBuildAliases(const PlayFabMultiplayerListBuildAliasesRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListBuildSummariesResponse> ListBuildSummariesV2(const PlayFabMultiplayerListBuildSummariesRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListCertificateSummariesResponse> ListCertificateSummaries(const PlayFabMultiplayerListCertificateSummariesRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListContainerImagesResponse> ListContainerImages(const PlayFabMultiplayerListContainerImagesRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListContainerImageTagsResponse> ListContainerImageTags(const PlayFabMultiplayerListContainerImageTagsRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListMatchmakingTicketsForPlayerResult> ListMatchmakingTicketsForPlayer(const PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListMultiplayerServersResponse> ListMultiplayerServers(const PlayFabMultiplayerListMultiplayerServersRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListPartyQosServersResponse> ListPartyQosServers(const PlayFabMultiplayerListPartyQosServersRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListQosServersForTitleResponse> ListQosServersForTitle(const PlayFabMultiplayerListQosServersForTitleRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListServerBackfillTicketsForPlayerResult> ListServerBackfillTicketsForPlayer(const PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListTitleMultiplayerServersQuotaChangesResponse> ListTitleMultiplayerServersQuotaChanges(const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::ListVirtualMachineSummariesResponse> ListVirtualMachineSummaries(const PlayFabMultiplayerListVirtualMachineSummariesRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::RequestMultiplayerServerResponse> RequestMultiplayerServer(const PlayFabMultiplayerRequestMultiplayerServerRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::RolloverContainerRegistryCredentialsResponse> RolloverContainerRegistryCredentials(const PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> ShutdownMultiplayerServer(const PlayFabMultiplayerShutdownMultiplayerServerRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UntagContainerImage(const PlayFabMultiplayerUntagContainerImageRequest& request, const TaskQueue& queue);
        AsyncOp<MultiplayerModels::BuildAliasDetailsResponse> UpdateBuildAlias(const PlayFabMultiplayerUpdateBuildAliasRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateBuildName(const PlayFabMultiplayerUpdateBuildNameRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateBuildRegion(const PlayFabMultiplayerUpdateBuildRegionRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateBuildRegions(const PlayFabMultiplayerUpdateBuildRegionsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UploadCertificate(const PlayFabMultiplayerUploadCertificateRequest& request, const TaskQueue& queue);

    };
}

#endif
