#pragma once

#include "MultiplayerDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
struct AuthTokens;

class MultiplayerAPI
{
public:
    MultiplayerAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    MultiplayerAPI(const MultiplayerAPI& source) = delete;
    MultiplayerAPI& operator=(const MultiplayerAPI& source) = delete;
    ~MultiplayerAPI() = default;

    // ------------ Generated API calls
    AsyncOp<void> CancelAllMatchmakingTicketsForPlayer(const PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> CancelAllServerBackfillTicketsForPlayer(const PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> CancelMatchmakingTicket(const PlayFabMultiplayerCancelMatchmakingTicketRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> CancelServerBackfillTicket(const PlayFabMultiplayerCancelServerBackfillTicketRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::BuildAliasDetailsResponse> CreateBuildAlias(const PlayFabMultiplayerCreateBuildAliasRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::CreateBuildWithCustomContainerResponse> CreateBuildWithCustomContainer(const PlayFabMultiplayerCreateBuildWithCustomContainerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::CreateBuildWithManagedContainerResponse> CreateBuildWithManagedContainer(const PlayFabMultiplayerCreateBuildWithManagedContainerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::CreateBuildWithProcessBasedServerResponse> CreateBuildWithProcessBasedServer(const PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::CreateMatchmakingTicketResult> CreateMatchmakingTicket(const PlayFabMultiplayerCreateMatchmakingTicketRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::CreateRemoteUserResponse> CreateRemoteUser(const PlayFabMultiplayerCreateRemoteUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::CreateServerBackfillTicketResult> CreateServerBackfillTicket(const PlayFabMultiplayerCreateServerBackfillTicketRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::CreateMatchmakingTicketResult> CreateServerMatchmakingTicket(const PlayFabMultiplayerCreateServerMatchmakingTicketRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::CreateTitleMultiplayerServersQuotaChangeResponse> CreateTitleMultiplayerServersQuotaChange(const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteAsset(const PlayFabMultiplayerDeleteAssetRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteBuild(const PlayFabMultiplayerDeleteBuildRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteBuildAlias(const PlayFabMultiplayerDeleteBuildAliasRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteBuildRegion(const PlayFabMultiplayerDeleteBuildRegionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteCertificate(const PlayFabMultiplayerDeleteCertificateRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteContainerImageRepository(const PlayFabMultiplayerDeleteContainerImageRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteRemoteUser(const PlayFabMultiplayerDeleteRemoteUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::EnableMultiplayerServersForTitleResponse> EnableMultiplayerServersForTitle(const PlayFabMultiplayerEnableMultiplayerServersForTitleRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetAssetUploadUrlResponse> GetAssetUploadUrl(const PlayFabMultiplayerGetAssetUploadUrlRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetBuildResponse> GetBuild(const PlayFabMultiplayerGetBuildRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::BuildAliasDetailsResponse> GetBuildAlias(const PlayFabMultiplayerGetBuildAliasRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetContainerRegistryCredentialsResponse> GetContainerRegistryCredentials(const PlayFabMultiplayerGetContainerRegistryCredentialsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetMatchResult> GetMatch(const PlayFabMultiplayerGetMatchRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetMatchmakingTicketResult> GetMatchmakingTicket(const PlayFabMultiplayerGetMatchmakingTicketRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetMultiplayerServerDetailsResponse> GetMultiplayerServerDetails(const PlayFabMultiplayerGetMultiplayerServerDetailsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetMultiplayerServerLogsResponse> GetMultiplayerServerLogs(const PlayFabMultiplayerGetMultiplayerServerLogsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetMultiplayerServerLogsResponse> GetMultiplayerSessionLogsBySessionId(const PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetQueueStatisticsResult> GetQueueStatistics(const PlayFabMultiplayerGetQueueStatisticsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetRemoteLoginEndpointResponse> GetRemoteLoginEndpoint(const PlayFabMultiplayerGetRemoteLoginEndpointRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetServerBackfillTicketResult> GetServerBackfillTicket(const PlayFabMultiplayerGetServerBackfillTicketRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse> GetTitleEnabledForMultiplayerServersStatus(const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetTitleMultiplayerServersQuotaChangeResponse> GetTitleMultiplayerServersQuotaChange(const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::GetTitleMultiplayerServersQuotasResponse> GetTitleMultiplayerServersQuotas(const PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> JoinMatchmakingTicket(const PlayFabMultiplayerJoinMatchmakingTicketRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListMultiplayerServersResponse> ListArchivedMultiplayerServers(const PlayFabMultiplayerListMultiplayerServersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListAssetSummariesResponse> ListAssetSummaries(const PlayFabMultiplayerListAssetSummariesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListBuildAliasesResponse> ListBuildAliases(const PlayFabMultiplayerListBuildAliasesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListBuildSummariesResponse> ListBuildSummariesV2(const PlayFabMultiplayerListBuildSummariesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListCertificateSummariesResponse> ListCertificateSummaries(const PlayFabMultiplayerListCertificateSummariesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListContainerImagesResponse> ListContainerImages(const PlayFabMultiplayerListContainerImagesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListContainerImageTagsResponse> ListContainerImageTags(const PlayFabMultiplayerListContainerImageTagsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListMatchmakingTicketsForPlayerResult> ListMatchmakingTicketsForPlayer(const PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListMultiplayerServersResponse> ListMultiplayerServers(const PlayFabMultiplayerListMultiplayerServersRequest& request, const TaskQueue& queue) const; 
    static AsyncOp<MultiplayerModels::ListPartyQosServersResponse> ListPartyQosServers(const PlayFabMultiplayerListPartyQosServersRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue); 
    AsyncOp<MultiplayerModels::ListQosServersForTitleResponse> ListQosServersForTitle(const PlayFabMultiplayerListQosServersForTitleRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListServerBackfillTicketsForPlayerResult> ListServerBackfillTicketsForPlayer(const PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListTitleMultiplayerServersQuotaChangesResponse> ListTitleMultiplayerServersQuotaChanges(const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::ListVirtualMachineSummariesResponse> ListVirtualMachineSummaries(const PlayFabMultiplayerListVirtualMachineSummariesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::RequestMultiplayerServerResponse> RequestMultiplayerServer(const PlayFabMultiplayerRequestMultiplayerServerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::RolloverContainerRegistryCredentialsResponse> RolloverContainerRegistryCredentials(const PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> ShutdownMultiplayerServer(const PlayFabMultiplayerShutdownMultiplayerServerRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UntagContainerImage(const PlayFabMultiplayerUntagContainerImageRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MultiplayerModels::BuildAliasDetailsResponse> UpdateBuildAlias(const PlayFabMultiplayerUpdateBuildAliasRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateBuildName(const PlayFabMultiplayerUpdateBuildNameRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateBuildRegion(const PlayFabMultiplayerUpdateBuildRegionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateBuildRegions(const PlayFabMultiplayerUpdateBuildRegionsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UploadCertificate(const PlayFabMultiplayerUploadCertificateRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
