#pragma once

#include "MultiplayerServerDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class MultiplayerServerAPI
{
public:
    MultiplayerServerAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    MultiplayerServerAPI(const MultiplayerServerAPI& source) = delete;
    MultiplayerServerAPI& operator=(const MultiplayerServerAPI& source) = delete;
    ~MultiplayerServerAPI() = default;

    // ------------ Generated API calls
    AsyncOp<MultiplayerServerModels::BuildAliasDetailsResponse> CreateBuildAlias(const PFMultiplayerServerCreateBuildAliasRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::CreateBuildWithCustomContainerResponse> CreateBuildWithCustomContainer(const PFMultiplayerServerCreateBuildWithCustomContainerRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::CreateBuildWithManagedContainerResponse> CreateBuildWithManagedContainer(const PFMultiplayerServerCreateBuildWithManagedContainerRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::CreateBuildWithProcessBasedServerResponse> CreateBuildWithProcessBasedServer(const PFMultiplayerServerCreateBuildWithProcessBasedServerRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::CreateRemoteUserResponse> CreateRemoteUser(const PFMultiplayerServerCreateRemoteUserRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::CreateTitleMultiplayerServersQuotaChangeResponse> CreateTitleMultiplayerServersQuotaChange(const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteAsset(const PFMultiplayerServerDeleteAssetRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteBuild(const PFMultiplayerServerDeleteBuildRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteBuildAlias(const PFMultiplayerServerDeleteBuildAliasRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteBuildRegion(const PFMultiplayerServerDeleteBuildRegionRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteCertificate(const PFMultiplayerServerDeleteCertificateRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteContainerImageRepository(const PFMultiplayerServerDeleteContainerImageRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteRemoteUser(const PFMultiplayerServerDeleteRemoteUserRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::EnableMultiplayerServersForTitleResponse> EnableMultiplayerServersForTitle(const PFMultiplayerServerEnableMultiplayerServersForTitleRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetAssetDownloadUrlResponse> GetAssetDownloadUrl(const PFMultiplayerServerGetAssetDownloadUrlRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetAssetUploadUrlResponse> GetAssetUploadUrl(const PFMultiplayerServerGetAssetUploadUrlRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetBuildResponse> GetBuild(const PFMultiplayerServerGetBuildRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::BuildAliasDetailsResponse> GetBuildAlias(const PFMultiplayerServerGetBuildAliasRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetContainerRegistryCredentialsResponse> GetContainerRegistryCredentials(const PFMultiplayerServerGetContainerRegistryCredentialsRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetMultiplayerServerDetailsResponse> GetMultiplayerServerDetails(const PFMultiplayerServerGetMultiplayerServerDetailsRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetMultiplayerServerLogsResponse> GetMultiplayerServerLogs(const PFMultiplayerServerGetMultiplayerServerLogsRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetMultiplayerServerLogsResponse> GetMultiplayerSessionLogsBySessionId(const PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetRemoteLoginEndpointResponse> GetRemoteLoginEndpoint(const PFMultiplayerServerGetRemoteLoginEndpointRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetTitleEnabledForMultiplayerServersStatusResponse> GetTitleEnabledForMultiplayerServersStatus(const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetTitleMultiplayerServersQuotaChangeResponse> GetTitleMultiplayerServersQuotaChange(const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::GetTitleMultiplayerServersQuotasResponse> GetTitleMultiplayerServersQuotas(const PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::ListMultiplayerServersResponse> ListArchivedMultiplayerServers(const PFMultiplayerServerListMultiplayerServersRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::ListAssetSummariesResponse> ListAssetSummaries(const PFMultiplayerServerListAssetSummariesRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::ListBuildAliasesResponse> ListBuildAliases(const PFMultiplayerServerListBuildAliasesRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::ListBuildSummariesResponse> ListBuildSummariesV2(const PFMultiplayerServerListBuildSummariesRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::ListCertificateSummariesResponse> ListCertificateSummaries(const PFMultiplayerServerListCertificateSummariesRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::ListContainerImagesResponse> ListContainerImages(const PFMultiplayerServerListContainerImagesRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::ListContainerImageTagsResponse> ListContainerImageTags(const PFMultiplayerServerListContainerImageTagsRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::ListMultiplayerServersResponse> ListMultiplayerServers(const PFMultiplayerServerListMultiplayerServersRequest& request, const TaskQueue& queue) const;
    static AsyncOp<MultiplayerServerModels::ListPartyQosServersResponse> ListPartyQosServers(const PFMultiplayerServerListPartyQosServersRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<MultiplayerServerModels::ListQosServersForTitleResponse> ListQosServersForTitle(const PFMultiplayerServerListQosServersForTitleRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::ListTitleMultiplayerServersQuotaChangesResponse> ListTitleMultiplayerServersQuotaChanges(const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::ListVirtualMachineSummariesResponse> ListVirtualMachineSummaries(const PFMultiplayerServerListVirtualMachineSummariesRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::RequestMultiplayerServerResponse> RequestMultiplayerServer(const PFMultiplayerServerRequestMultiplayerServerRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::RolloverContainerRegistryCredentialsResponse> RolloverContainerRegistryCredentials(const PFMultiplayerServerRolloverContainerRegistryCredentialsRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ShutdownMultiplayerServer(const PFMultiplayerServerShutdownMultiplayerServerRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> UntagContainerImage(const PFMultiplayerServerUntagContainerImageRequest& request, const TaskQueue& queue) const;
    AsyncOp<MultiplayerServerModels::BuildAliasDetailsResponse> UpdateBuildAlias(const PFMultiplayerServerUpdateBuildAliasRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> UpdateBuildName(const PFMultiplayerServerUpdateBuildNameRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> UpdateBuildRegion(const PFMultiplayerServerUpdateBuildRegionRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> UpdateBuildRegions(const PFMultiplayerServerUpdateBuildRegionsRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> UploadCertificate(const PFMultiplayerServerUploadCertificateRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
