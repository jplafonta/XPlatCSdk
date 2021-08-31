#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/MultiplayerServer/MultiplayerServerDataModels.h"

namespace PlayFabUnit
{

class AutoGenMultiplayerServerTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestMultiplayerServerCreateBuildAlias(TestContext& testContext);

    void TestMultiplayerServerCreateBuildWithCustomContainer(TestContext& testContext);

    void TestMultiplayerServerCreateBuildWithManagedContainer(TestContext& testContext);

    void TestMultiplayerServerCreateBuildWithProcessBasedServer(TestContext& testContext);

    void TestMultiplayerServerCreateRemoteUser(TestContext& testContext);

    void TestMultiplayerServerCreateTitleMultiplayerServersQuotaChange(TestContext& testContext);

    void TestMultiplayerServerDeleteAsset(TestContext& testContext);

    void TestMultiplayerServerDeleteBuild(TestContext& testContext);

    void TestMultiplayerServerDeleteBuildAlias(TestContext& testContext);

    void TestMultiplayerServerDeleteBuildRegion(TestContext& testContext);

    void TestMultiplayerServerDeleteCertificate(TestContext& testContext);

    void TestMultiplayerServerDeleteContainerImageRepository(TestContext& testContext);

    void TestMultiplayerServerDeleteRemoteUser(TestContext& testContext);

    void TestMultiplayerServerEnableMultiplayerServersForTitle(TestContext& testContext);

    void TestMultiplayerServerGetAssetDownloadUrl(TestContext& testContext);

    void TestMultiplayerServerGetAssetUploadUrl(TestContext& testContext);

    void TestMultiplayerServerGetBuild(TestContext& testContext);

    void TestMultiplayerServerGetBuildAlias(TestContext& testContext);

    void TestMultiplayerServerGetContainerRegistryCredentials(TestContext& testContext);

    void TestMultiplayerServerGetMultiplayerServerDetails(TestContext& testContext);

    void TestMultiplayerServerGetMultiplayerServerLogs(TestContext& testContext);

    void TestMultiplayerServerGetMultiplayerSessionLogsBySessionId(TestContext& testContext);

    void TestMultiplayerServerGetRemoteLoginEndpoint(TestContext& testContext);

    void TestMultiplayerServerGetTitleEnabledForMultiplayerServersStatus(TestContext& testContext);

    void TestMultiplayerServerGetTitleMultiplayerServersQuotaChange(TestContext& testContext);

    void TestMultiplayerServerGetTitleMultiplayerServersQuotas(TestContext& testContext);

    void TestMultiplayerServerListArchivedMultiplayerServers(TestContext& testContext);

    void TestMultiplayerServerListAssetSummaries(TestContext& testContext);

    void TestMultiplayerServerListBuildAliases(TestContext& testContext);

    void TestMultiplayerServerListBuildSummariesV2(TestContext& testContext);

    void TestMultiplayerServerListCertificateSummaries(TestContext& testContext);

    void TestMultiplayerServerListContainerImages(TestContext& testContext);

    void TestMultiplayerServerListContainerImageTags(TestContext& testContext);

    void TestMultiplayerServerListMultiplayerServers(TestContext& testContext);

    void TestMultiplayerServerListPartyQosServers(TestContext& testContext);

    void TestMultiplayerServerListQosServersForTitle(TestContext& testContext);

    void TestMultiplayerServerListTitleMultiplayerServersQuotaChanges(TestContext& testContext);

    void TestMultiplayerServerListVirtualMachineSummaries(TestContext& testContext);

    void TestMultiplayerServerRequestMultiplayerServer(TestContext& testContext);

    void TestMultiplayerServerRolloverContainerRegistryCredentials(TestContext& testContext);

    void TestMultiplayerServerShutdownMultiplayerServer(TestContext& testContext);

    void TestMultiplayerServerUntagContainerImage(TestContext& testContext);

    void TestMultiplayerServerUpdateBuildAlias(TestContext& testContext);

    void TestMultiplayerServerUpdateBuildName(TestContext& testContext);

    void TestMultiplayerServerUpdateBuildRegion(TestContext& testContext);

    void TestMultiplayerServerUpdateBuildRegions(TestContext& testContext);

    void TestMultiplayerServerUploadCertificate(TestContext& testContext);


protected:
    void AddTests();

    static void LogCreateBuildAliasRequest( PlayFab::MultiplayerServerModels::CreateBuildAliasRequest* request, const char* testName );
    static void FillCreateBuildAliasRequest( PlayFab::MultiplayerServerModels::CreateBuildAliasRequest* request );
    static HRESULT LogPFMultiplayerServerBuildAliasDetailsResponse( PFMultiplayerServerBuildAliasDetailsResponse* result );
    static HRESULT ValidatePFMultiplayerServerBuildAliasDetailsResponse( PFMultiplayerServerBuildAliasDetailsResponse* result );

    static void LogCreateBuildWithCustomContainerRequest( PlayFab::MultiplayerServerModels::CreateBuildWithCustomContainerRequest* request, const char* testName );
    static void FillCreateBuildWithCustomContainerRequest( PlayFab::MultiplayerServerModels::CreateBuildWithCustomContainerRequest* request );
    static HRESULT LogPFMultiplayerServerCreateBuildWithCustomContainerResponse( PFMultiplayerServerCreateBuildWithCustomContainerResponse* result );
    static HRESULT ValidatePFMultiplayerServerCreateBuildWithCustomContainerResponse( PFMultiplayerServerCreateBuildWithCustomContainerResponse* result );

    static void LogCreateBuildWithManagedContainerRequest( PlayFab::MultiplayerServerModels::CreateBuildWithManagedContainerRequest* request, const char* testName );
    static void FillCreateBuildWithManagedContainerRequest( PlayFab::MultiplayerServerModels::CreateBuildWithManagedContainerRequest* request );
    static HRESULT LogPFMultiplayerServerCreateBuildWithManagedContainerResponse( PFMultiplayerServerCreateBuildWithManagedContainerResponse* result );
    static HRESULT ValidatePFMultiplayerServerCreateBuildWithManagedContainerResponse( PFMultiplayerServerCreateBuildWithManagedContainerResponse* result );

    static void LogCreateBuildWithProcessBasedServerRequest( PlayFab::MultiplayerServerModels::CreateBuildWithProcessBasedServerRequest* request, const char* testName );
    static void FillCreateBuildWithProcessBasedServerRequest( PlayFab::MultiplayerServerModels::CreateBuildWithProcessBasedServerRequest* request );
    static HRESULT LogPFMultiplayerServerCreateBuildWithProcessBasedServerResponse( PFMultiplayerServerCreateBuildWithProcessBasedServerResponse* result );
    static HRESULT ValidatePFMultiplayerServerCreateBuildWithProcessBasedServerResponse( PFMultiplayerServerCreateBuildWithProcessBasedServerResponse* result );

    static void LogCreateRemoteUserRequest( PlayFab::MultiplayerServerModels::CreateRemoteUserRequest* request, const char* testName );
    static void FillCreateRemoteUserRequest( PlayFab::MultiplayerServerModels::CreateRemoteUserRequest* request );
    static HRESULT LogPFMultiplayerServerCreateRemoteUserResponse( PFMultiplayerServerCreateRemoteUserResponse* result );
    static HRESULT ValidatePFMultiplayerServerCreateRemoteUserResponse( PFMultiplayerServerCreateRemoteUserResponse* result );

    static void LogCreateTitleMultiplayerServersQuotaChangeRequest( PlayFab::MultiplayerServerModels::CreateTitleMultiplayerServersQuotaChangeRequest* request, const char* testName );
    static void FillCreateTitleMultiplayerServersQuotaChangeRequest( PlayFab::MultiplayerServerModels::CreateTitleMultiplayerServersQuotaChangeRequest* request );
    static HRESULT LogPFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse( PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse* result );
    static HRESULT ValidatePFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse( PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse* result );

    static void LogDeleteAssetRequest( PlayFab::MultiplayerServerModels::DeleteAssetRequest* request, const char* testName );
    static void FillDeleteAssetRequest( PlayFab::MultiplayerServerModels::DeleteAssetRequest* request );

    static void LogDeleteBuildRequest( PlayFab::MultiplayerServerModels::DeleteBuildRequest* request, const char* testName );
    static void FillDeleteBuildRequest( PlayFab::MultiplayerServerModels::DeleteBuildRequest* request );

    static void LogDeleteBuildAliasRequest( PlayFab::MultiplayerServerModels::DeleteBuildAliasRequest* request, const char* testName );
    static void FillDeleteBuildAliasRequest( PlayFab::MultiplayerServerModels::DeleteBuildAliasRequest* request );

    static void LogDeleteBuildRegionRequest( PlayFab::MultiplayerServerModels::DeleteBuildRegionRequest* request, const char* testName );
    static void FillDeleteBuildRegionRequest( PlayFab::MultiplayerServerModels::DeleteBuildRegionRequest* request );

    static void LogDeleteCertificateRequest( PlayFab::MultiplayerServerModels::DeleteCertificateRequest* request, const char* testName );
    static void FillDeleteCertificateRequest( PlayFab::MultiplayerServerModels::DeleteCertificateRequest* request );

    static void LogDeleteContainerImageRequest( PlayFab::MultiplayerServerModels::DeleteContainerImageRequest* request, const char* testName );
    static void FillDeleteContainerImageRequest( PlayFab::MultiplayerServerModels::DeleteContainerImageRequest* request );

    static void LogDeleteRemoteUserRequest( PlayFab::MultiplayerServerModels::DeleteRemoteUserRequest* request, const char* testName );
    static void FillDeleteRemoteUserRequest( PlayFab::MultiplayerServerModels::DeleteRemoteUserRequest* request );

    static void LogEnableMultiplayerServersForTitleRequest( PlayFab::MultiplayerServerModels::EnableMultiplayerServersForTitleRequest* request, const char* testName );
    static void FillEnableMultiplayerServersForTitleRequest( PlayFab::MultiplayerServerModels::EnableMultiplayerServersForTitleRequest* request );
    static HRESULT LogPFMultiplayerServerEnableMultiplayerServersForTitleResponse( PFMultiplayerServerEnableMultiplayerServersForTitleResponse* result );
    static HRESULT ValidatePFMultiplayerServerEnableMultiplayerServersForTitleResponse( PFMultiplayerServerEnableMultiplayerServersForTitleResponse* result );

    static void LogGetAssetDownloadUrlRequest( PlayFab::MultiplayerServerModels::GetAssetDownloadUrlRequest* request, const char* testName );
    static void FillGetAssetDownloadUrlRequest( PlayFab::MultiplayerServerModels::GetAssetDownloadUrlRequest* request );
    static HRESULT LogPFMultiplayerServerGetAssetDownloadUrlResponse( PFMultiplayerServerGetAssetDownloadUrlResponse* result );
    static HRESULT ValidatePFMultiplayerServerGetAssetDownloadUrlResponse( PFMultiplayerServerGetAssetDownloadUrlResponse* result );

    static void LogGetAssetUploadUrlRequest( PlayFab::MultiplayerServerModels::GetAssetUploadUrlRequest* request, const char* testName );
    static void FillGetAssetUploadUrlRequest( PlayFab::MultiplayerServerModels::GetAssetUploadUrlRequest* request );
    static HRESULT LogPFMultiplayerServerGetAssetUploadUrlResponse( PFMultiplayerServerGetAssetUploadUrlResponse* result );
    static HRESULT ValidatePFMultiplayerServerGetAssetUploadUrlResponse( PFMultiplayerServerGetAssetUploadUrlResponse* result );

    static void LogGetBuildRequest( PlayFab::MultiplayerServerModels::GetBuildRequest* request, const char* testName );
    static void FillGetBuildRequest( PlayFab::MultiplayerServerModels::GetBuildRequest* request );
    static HRESULT LogPFMultiplayerServerGetBuildResponse( PFMultiplayerServerGetBuildResponse* result );
    static HRESULT ValidatePFMultiplayerServerGetBuildResponse( PFMultiplayerServerGetBuildResponse* result );

    static void LogGetBuildAliasRequest( PlayFab::MultiplayerServerModels::GetBuildAliasRequest* request, const char* testName );
    static void FillGetBuildAliasRequest( PlayFab::MultiplayerServerModels::GetBuildAliasRequest* request );

    static void LogGetContainerRegistryCredentialsRequest( PlayFab::MultiplayerServerModels::GetContainerRegistryCredentialsRequest* request, const char* testName );
    static void FillGetContainerRegistryCredentialsRequest( PlayFab::MultiplayerServerModels::GetContainerRegistryCredentialsRequest* request );
    static HRESULT LogPFMultiplayerServerGetContainerRegistryCredentialsResponse( PFMultiplayerServerGetContainerRegistryCredentialsResponse* result );
    static HRESULT ValidatePFMultiplayerServerGetContainerRegistryCredentialsResponse( PFMultiplayerServerGetContainerRegistryCredentialsResponse* result );

    static void LogGetMultiplayerServerDetailsRequest( PlayFab::MultiplayerServerModels::GetMultiplayerServerDetailsRequest* request, const char* testName );
    static void FillGetMultiplayerServerDetailsRequest( PlayFab::MultiplayerServerModels::GetMultiplayerServerDetailsRequest* request );
    static HRESULT LogPFMultiplayerServerGetMultiplayerServerDetailsResponse( PFMultiplayerServerGetMultiplayerServerDetailsResponse* result );
    static HRESULT ValidatePFMultiplayerServerGetMultiplayerServerDetailsResponse( PFMultiplayerServerGetMultiplayerServerDetailsResponse* result );

    static void LogGetMultiplayerServerLogsRequest( PlayFab::MultiplayerServerModels::GetMultiplayerServerLogsRequest* request, const char* testName );
    static void FillGetMultiplayerServerLogsRequest( PlayFab::MultiplayerServerModels::GetMultiplayerServerLogsRequest* request );
    static HRESULT LogPFMultiplayerServerGetMultiplayerServerLogsResponse( PFMultiplayerServerGetMultiplayerServerLogsResponse* result );
    static HRESULT ValidatePFMultiplayerServerGetMultiplayerServerLogsResponse( PFMultiplayerServerGetMultiplayerServerLogsResponse* result );

    static void LogGetMultiplayerSessionLogsBySessionIdRequest( PlayFab::MultiplayerServerModels::GetMultiplayerSessionLogsBySessionIdRequest* request, const char* testName );
    static void FillGetMultiplayerSessionLogsBySessionIdRequest( PlayFab::MultiplayerServerModels::GetMultiplayerSessionLogsBySessionIdRequest* request );

    static void LogGetRemoteLoginEndpointRequest( PlayFab::MultiplayerServerModels::GetRemoteLoginEndpointRequest* request, const char* testName );
    static void FillGetRemoteLoginEndpointRequest( PlayFab::MultiplayerServerModels::GetRemoteLoginEndpointRequest* request );
    static HRESULT LogPFMultiplayerServerGetRemoteLoginEndpointResponse( PFMultiplayerServerGetRemoteLoginEndpointResponse* result );
    static HRESULT ValidatePFMultiplayerServerGetRemoteLoginEndpointResponse( PFMultiplayerServerGetRemoteLoginEndpointResponse* result );

    static void LogGetTitleEnabledForMultiplayerServersStatusRequest( PlayFab::MultiplayerServerModels::GetTitleEnabledForMultiplayerServersStatusRequest* request, const char* testName );
    static void FillGetTitleEnabledForMultiplayerServersStatusRequest( PlayFab::MultiplayerServerModels::GetTitleEnabledForMultiplayerServersStatusRequest* request );
    static HRESULT LogPFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse( PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse* result );
    static HRESULT ValidatePFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse( PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse* result );

    static void LogGetTitleMultiplayerServersQuotaChangeRequest( PlayFab::MultiplayerServerModels::GetTitleMultiplayerServersQuotaChangeRequest* request, const char* testName );
    static void FillGetTitleMultiplayerServersQuotaChangeRequest( PlayFab::MultiplayerServerModels::GetTitleMultiplayerServersQuotaChangeRequest* request );
    static HRESULT LogPFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse( PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse* result );
    static HRESULT ValidatePFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse( PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse* result );

    static void LogGetTitleMultiplayerServersQuotasRequest( PlayFab::MultiplayerServerModels::GetTitleMultiplayerServersQuotasRequest* request, const char* testName );
    static void FillGetTitleMultiplayerServersQuotasRequest( PlayFab::MultiplayerServerModels::GetTitleMultiplayerServersQuotasRequest* request );
    static HRESULT LogPFMultiplayerServerGetTitleMultiplayerServersQuotasResponse( PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse* result );
    static HRESULT ValidatePFMultiplayerServerGetTitleMultiplayerServersQuotasResponse( PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse* result );

    static void LogListMultiplayerServersRequest( PlayFab::MultiplayerServerModels::ListMultiplayerServersRequest* request, const char* testName );
    static void FillListMultiplayerServersRequest( PlayFab::MultiplayerServerModels::ListMultiplayerServersRequest* request );
    static HRESULT LogPFMultiplayerServerListMultiplayerServersResponse( PFMultiplayerServerListMultiplayerServersResponse* result );
    static HRESULT ValidatePFMultiplayerServerListMultiplayerServersResponse( PFMultiplayerServerListMultiplayerServersResponse* result );

    static void LogListAssetSummariesRequest( PlayFab::MultiplayerServerModels::ListAssetSummariesRequest* request, const char* testName );
    static void FillListAssetSummariesRequest( PlayFab::MultiplayerServerModels::ListAssetSummariesRequest* request );
    static HRESULT LogPFMultiplayerServerListAssetSummariesResponse( PFMultiplayerServerListAssetSummariesResponse* result );
    static HRESULT ValidatePFMultiplayerServerListAssetSummariesResponse( PFMultiplayerServerListAssetSummariesResponse* result );

    static void LogListBuildAliasesRequest( PlayFab::MultiplayerServerModels::ListBuildAliasesRequest* request, const char* testName );
    static void FillListBuildAliasesRequest( PlayFab::MultiplayerServerModels::ListBuildAliasesRequest* request );
    static HRESULT LogPFMultiplayerServerListBuildAliasesResponse( PFMultiplayerServerListBuildAliasesResponse* result );
    static HRESULT ValidatePFMultiplayerServerListBuildAliasesResponse( PFMultiplayerServerListBuildAliasesResponse* result );

    static void LogListBuildSummariesRequest( PlayFab::MultiplayerServerModels::ListBuildSummariesRequest* request, const char* testName );
    static void FillListBuildSummariesRequest( PlayFab::MultiplayerServerModels::ListBuildSummariesRequest* request );
    static HRESULT LogPFMultiplayerServerListBuildSummariesResponse( PFMultiplayerServerListBuildSummariesResponse* result );
    static HRESULT ValidatePFMultiplayerServerListBuildSummariesResponse( PFMultiplayerServerListBuildSummariesResponse* result );

    static void LogListCertificateSummariesRequest( PlayFab::MultiplayerServerModels::ListCertificateSummariesRequest* request, const char* testName );
    static void FillListCertificateSummariesRequest( PlayFab::MultiplayerServerModels::ListCertificateSummariesRequest* request );
    static HRESULT LogPFMultiplayerServerListCertificateSummariesResponse( PFMultiplayerServerListCertificateSummariesResponse* result );
    static HRESULT ValidatePFMultiplayerServerListCertificateSummariesResponse( PFMultiplayerServerListCertificateSummariesResponse* result );

    static void LogListContainerImagesRequest( PlayFab::MultiplayerServerModels::ListContainerImagesRequest* request, const char* testName );
    static void FillListContainerImagesRequest( PlayFab::MultiplayerServerModels::ListContainerImagesRequest* request );
    static HRESULT LogPFMultiplayerServerListContainerImagesResponse( PFMultiplayerServerListContainerImagesResponse* result );
    static HRESULT ValidatePFMultiplayerServerListContainerImagesResponse( PFMultiplayerServerListContainerImagesResponse* result );

    static void LogListContainerImageTagsRequest( PlayFab::MultiplayerServerModels::ListContainerImageTagsRequest* request, const char* testName );
    static void FillListContainerImageTagsRequest( PlayFab::MultiplayerServerModels::ListContainerImageTagsRequest* request );
    static HRESULT LogPFMultiplayerServerListContainerImageTagsResponse( PFMultiplayerServerListContainerImageTagsResponse* result );
    static HRESULT ValidatePFMultiplayerServerListContainerImageTagsResponse( PFMultiplayerServerListContainerImageTagsResponse* result );


    static void LogListPartyQosServersRequest( PlayFab::MultiplayerServerModels::ListPartyQosServersRequest* request, const char* testName );
    static void FillListPartyQosServersRequest( PlayFab::MultiplayerServerModels::ListPartyQosServersRequest* request );
    static HRESULT LogPFMultiplayerServerListPartyQosServersResponse( PFMultiplayerServerListPartyQosServersResponse* result );
    static HRESULT ValidatePFMultiplayerServerListPartyQosServersResponse( PFMultiplayerServerListPartyQosServersResponse* result );

    static void LogListQosServersForTitleRequest( PlayFab::MultiplayerServerModels::ListQosServersForTitleRequest* request, const char* testName );
    static void FillListQosServersForTitleRequest( PlayFab::MultiplayerServerModels::ListQosServersForTitleRequest* request );
    static HRESULT LogPFMultiplayerServerListQosServersForTitleResponse( PFMultiplayerServerListQosServersForTitleResponse* result );
    static HRESULT ValidatePFMultiplayerServerListQosServersForTitleResponse( PFMultiplayerServerListQosServersForTitleResponse* result );

    static void LogListTitleMultiplayerServersQuotaChangesRequest( PlayFab::MultiplayerServerModels::ListTitleMultiplayerServersQuotaChangesRequest* request, const char* testName );
    static void FillListTitleMultiplayerServersQuotaChangesRequest( PlayFab::MultiplayerServerModels::ListTitleMultiplayerServersQuotaChangesRequest* request );
    static HRESULT LogPFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse( PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse* result );
    static HRESULT ValidatePFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse( PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse* result );

    static void LogListVirtualMachineSummariesRequest( PlayFab::MultiplayerServerModels::ListVirtualMachineSummariesRequest* request, const char* testName );
    static void FillListVirtualMachineSummariesRequest( PlayFab::MultiplayerServerModels::ListVirtualMachineSummariesRequest* request );
    static HRESULT LogPFMultiplayerServerListVirtualMachineSummariesResponse( PFMultiplayerServerListVirtualMachineSummariesResponse* result );
    static HRESULT ValidatePFMultiplayerServerListVirtualMachineSummariesResponse( PFMultiplayerServerListVirtualMachineSummariesResponse* result );

    static void LogRequestMultiplayerServerRequest( PlayFab::MultiplayerServerModels::RequestMultiplayerServerRequest* request, const char* testName );
    static void FillRequestMultiplayerServerRequest( PlayFab::MultiplayerServerModels::RequestMultiplayerServerRequest* request );
    static HRESULT LogPFMultiplayerServerRequestMultiplayerServerResponse( PFMultiplayerServerRequestMultiplayerServerResponse* result );
    static HRESULT ValidatePFMultiplayerServerRequestMultiplayerServerResponse( PFMultiplayerServerRequestMultiplayerServerResponse* result );

    static void LogRolloverContainerRegistryCredentialsRequest( PlayFab::MultiplayerServerModels::RolloverContainerRegistryCredentialsRequest* request, const char* testName );
    static void FillRolloverContainerRegistryCredentialsRequest( PlayFab::MultiplayerServerModels::RolloverContainerRegistryCredentialsRequest* request );
    static HRESULT LogPFMultiplayerServerRolloverContainerRegistryCredentialsResponse( PFMultiplayerServerRolloverContainerRegistryCredentialsResponse* result );
    static HRESULT ValidatePFMultiplayerServerRolloverContainerRegistryCredentialsResponse( PFMultiplayerServerRolloverContainerRegistryCredentialsResponse* result );

    static void LogShutdownMultiplayerServerRequest( PlayFab::MultiplayerServerModels::ShutdownMultiplayerServerRequest* request, const char* testName );
    static void FillShutdownMultiplayerServerRequest( PlayFab::MultiplayerServerModels::ShutdownMultiplayerServerRequest* request );

    static void LogUntagContainerImageRequest( PlayFab::MultiplayerServerModels::UntagContainerImageRequest* request, const char* testName );
    static void FillUntagContainerImageRequest( PlayFab::MultiplayerServerModels::UntagContainerImageRequest* request );

    static void LogUpdateBuildAliasRequest( PlayFab::MultiplayerServerModels::UpdateBuildAliasRequest* request, const char* testName );
    static void FillUpdateBuildAliasRequest( PlayFab::MultiplayerServerModels::UpdateBuildAliasRequest* request );

    static void LogUpdateBuildNameRequest( PlayFab::MultiplayerServerModels::UpdateBuildNameRequest* request, const char* testName );
    static void FillUpdateBuildNameRequest( PlayFab::MultiplayerServerModels::UpdateBuildNameRequest* request );

    static void LogUpdateBuildRegionRequest( PlayFab::MultiplayerServerModels::UpdateBuildRegionRequest* request, const char* testName );
    static void FillUpdateBuildRegionRequest( PlayFab::MultiplayerServerModels::UpdateBuildRegionRequest* request );

    static void LogUpdateBuildRegionsRequest( PlayFab::MultiplayerServerModels::UpdateBuildRegionsRequest* request, const char* testName );
    static void FillUpdateBuildRegionsRequest( PlayFab::MultiplayerServerModels::UpdateBuildRegionsRequest* request );

    static void LogUploadCertificateRequest( PlayFab::MultiplayerServerModels::UploadCertificateRequest* request, const char* testName );
    static void FillUploadCertificateRequest( PlayFab::MultiplayerServerModels::UploadCertificateRequest* request );

    struct MultiplayerServerTestData
    {
        ~MultiplayerServerTestData()
        {

        }

    };

    static MultiplayerServerTestData testData;

public:
    PFStateHandle stateHandle{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle2{ nullptr };
    PFEntityHandle entityHandle2{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo2{ nullptr };
    PFEntityHandle titleEntityHandle{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
