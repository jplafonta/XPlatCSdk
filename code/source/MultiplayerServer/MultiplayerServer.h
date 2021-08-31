#pragma once

#include "MultiplayerServerDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class MultiplayerServerAPI
{
public:
    MultiplayerServerAPI() = delete;
    MultiplayerServerAPI(const MultiplayerServerAPI& source) = delete;
    MultiplayerServerAPI& operator=(const MultiplayerServerAPI& source) = delete;
    ~MultiplayerServerAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<MultiplayerServerModels::BuildAliasDetailsResponse> CreateBuildAlias(SharedPtr<Entity> entity, const PFMultiplayerServerCreateBuildAliasRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::CreateBuildWithCustomContainerResponse> CreateBuildWithCustomContainer(SharedPtr<Entity> entity, const PFMultiplayerServerCreateBuildWithCustomContainerRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::CreateBuildWithManagedContainerResponse> CreateBuildWithManagedContainer(SharedPtr<Entity> entity, const PFMultiplayerServerCreateBuildWithManagedContainerRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::CreateBuildWithProcessBasedServerResponse> CreateBuildWithProcessBasedServer(SharedPtr<Entity> entity, const PFMultiplayerServerCreateBuildWithProcessBasedServerRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::CreateRemoteUserResponse> CreateRemoteUser(SharedPtr<Entity> entity, const PFMultiplayerServerCreateRemoteUserRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::CreateTitleMultiplayerServersQuotaChangeResponse> CreateTitleMultiplayerServersQuotaChange(SharedPtr<Entity> entity, const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteAsset(SharedPtr<Entity> entity, const PFMultiplayerServerDeleteAssetRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteBuild(SharedPtr<Entity> entity, const PFMultiplayerServerDeleteBuildRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteBuildAlias(SharedPtr<Entity> entity, const PFMultiplayerServerDeleteBuildAliasRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteBuildRegion(SharedPtr<Entity> entity, const PFMultiplayerServerDeleteBuildRegionRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteCertificate(SharedPtr<Entity> entity, const PFMultiplayerServerDeleteCertificateRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteContainerImageRepository(SharedPtr<Entity> entity, const PFMultiplayerServerDeleteContainerImageRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteRemoteUser(SharedPtr<Entity> entity, const PFMultiplayerServerDeleteRemoteUserRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::EnableMultiplayerServersForTitleResponse> EnableMultiplayerServersForTitle(SharedPtr<Entity> entity, const PFMultiplayerServerEnableMultiplayerServersForTitleRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetAssetDownloadUrlResponse> GetAssetDownloadUrl(SharedPtr<Entity> entity, const PFMultiplayerServerGetAssetDownloadUrlRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetAssetUploadUrlResponse> GetAssetUploadUrl(SharedPtr<Entity> entity, const PFMultiplayerServerGetAssetUploadUrlRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetBuildResponse> GetBuild(SharedPtr<Entity> entity, const PFMultiplayerServerGetBuildRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::BuildAliasDetailsResponse> GetBuildAlias(SharedPtr<Entity> entity, const PFMultiplayerServerGetBuildAliasRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetContainerRegistryCredentialsResponse> GetContainerRegistryCredentials(SharedPtr<Entity> entity, const PFMultiplayerServerGetContainerRegistryCredentialsRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetMultiplayerServerDetailsResponse> GetMultiplayerServerDetails(SharedPtr<Entity> entity, const PFMultiplayerServerGetMultiplayerServerDetailsRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetMultiplayerServerLogsResponse> GetMultiplayerServerLogs(SharedPtr<Entity> entity, const PFMultiplayerServerGetMultiplayerServerLogsRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetMultiplayerServerLogsResponse> GetMultiplayerSessionLogsBySessionId(SharedPtr<Entity> entity, const PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetRemoteLoginEndpointResponse> GetRemoteLoginEndpoint(SharedPtr<Entity> entity, const PFMultiplayerServerGetRemoteLoginEndpointRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetTitleEnabledForMultiplayerServersStatusResponse> GetTitleEnabledForMultiplayerServersStatus(SharedPtr<Entity> entity, const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetTitleMultiplayerServersQuotaChangeResponse> GetTitleMultiplayerServersQuotaChange(SharedPtr<Entity> entity, const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::GetTitleMultiplayerServersQuotasResponse> GetTitleMultiplayerServersQuotas(SharedPtr<Entity> entity, const PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListMultiplayerServersResponse> ListArchivedMultiplayerServers(SharedPtr<Entity> entity, const PFMultiplayerServerListMultiplayerServersRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListAssetSummariesResponse> ListAssetSummaries(SharedPtr<Entity> entity, const PFMultiplayerServerListAssetSummariesRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListBuildAliasesResponse> ListBuildAliases(SharedPtr<Entity> entity, const PFMultiplayerServerListBuildAliasesRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListBuildSummariesResponse> ListBuildSummariesV2(SharedPtr<Entity> entity, const PFMultiplayerServerListBuildSummariesRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListCertificateSummariesResponse> ListCertificateSummaries(SharedPtr<Entity> entity, const PFMultiplayerServerListCertificateSummariesRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListContainerImagesResponse> ListContainerImages(SharedPtr<Entity> entity, const PFMultiplayerServerListContainerImagesRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListContainerImageTagsResponse> ListContainerImageTags(SharedPtr<Entity> entity, const PFMultiplayerServerListContainerImageTagsRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListMultiplayerServersResponse> ListMultiplayerServers(SharedPtr<Entity> entity, const PFMultiplayerServerListMultiplayerServersRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListPartyQosServersResponse> ListPartyQosServers(SharedPtr<GlobalState const> state, const PFMultiplayerServerListPartyQosServersRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListQosServersForTitleResponse> ListQosServersForTitle(SharedPtr<Entity> entity, const PFMultiplayerServerListQosServersForTitleRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListTitleMultiplayerServersQuotaChangesResponse> ListTitleMultiplayerServersQuotaChanges(SharedPtr<Entity> entity, const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::ListVirtualMachineSummariesResponse> ListVirtualMachineSummaries(SharedPtr<Entity> entity, const PFMultiplayerServerListVirtualMachineSummariesRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::RequestMultiplayerServerResponse> RequestMultiplayerServer(SharedPtr<Entity> entity, const PFMultiplayerServerRequestMultiplayerServerRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::RolloverContainerRegistryCredentialsResponse> RolloverContainerRegistryCredentials(SharedPtr<Entity> entity, const PFMultiplayerServerRolloverContainerRegistryCredentialsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ShutdownMultiplayerServer(SharedPtr<Entity> entity, const PFMultiplayerServerShutdownMultiplayerServerRequest& request, const TaskQueue& queue);
    static AsyncOp<void> UntagContainerImage(SharedPtr<Entity> entity, const PFMultiplayerServerUntagContainerImageRequest& request, const TaskQueue& queue);
    static AsyncOp<MultiplayerServerModels::BuildAliasDetailsResponse> UpdateBuildAlias(SharedPtr<Entity> entity, const PFMultiplayerServerUpdateBuildAliasRequest& request, const TaskQueue& queue);
    static AsyncOp<void> UpdateBuildName(SharedPtr<Entity> entity, const PFMultiplayerServerUpdateBuildNameRequest& request, const TaskQueue& queue);
    static AsyncOp<void> UpdateBuildRegion(SharedPtr<Entity> entity, const PFMultiplayerServerUpdateBuildRegionRequest& request, const TaskQueue& queue);
    static AsyncOp<void> UpdateBuildRegions(SharedPtr<Entity> entity, const PFMultiplayerServerUpdateBuildRegionsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> UploadCertificate(SharedPtr<Entity> entity, const PFMultiplayerServerUploadCertificateRequest& request, const TaskQueue& queue);
};

}
