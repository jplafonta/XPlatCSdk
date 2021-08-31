#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/PlayerDataManagement/PlayerDataManagementDataModels.h"

namespace PlayFabUnit
{

class AutoGenPlayerDataManagementTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestPlayerDataManagementAdminCreatePlayerStatisticDefinition(TestContext& testContext);

    void TestPlayerDataManagementAdminGetDataReport(TestContext& testContext);

    void TestPlayerDataManagementAdminGetPlayerStatisticDefinitions(TestContext& testContext);

    void TestPlayerDataManagementAdminGetPlayerStatisticVersions(TestContext& testContext);

    void TestPlayerDataManagementAdminGetUserData(TestContext& testContext);

    void TestPlayerDataManagementAdminGetUserInternalData(TestContext& testContext);

    void TestPlayerDataManagementAdminGetUserPublisherData(TestContext& testContext);

    void TestPlayerDataManagementAdminGetUserPublisherInternalData(TestContext& testContext);

    void TestPlayerDataManagementAdminGetUserPublisherReadOnlyData(TestContext& testContext);

    void TestPlayerDataManagementAdminGetUserReadOnlyData(TestContext& testContext);

    void TestPlayerDataManagementAdminIncrementPlayerStatisticVersion(TestContext& testContext);

    void TestPlayerDataManagementAdminRefundPurchase(TestContext& testContext);

    void TestPlayerDataManagementAdminResetUserStatistics(TestContext& testContext);

    void TestPlayerDataManagementAdminResolvePurchaseDispute(TestContext& testContext);

    void TestPlayerDataManagementAdminUpdatePlayerStatisticDefinition(TestContext& testContext);

    void TestPlayerDataManagementAdminUpdateUserData(TestContext& testContext);

    void TestPlayerDataManagementAdminUpdateUserInternalData(TestContext& testContext);

    void TestPlayerDataManagementAdminUpdateUserPublisherData(TestContext& testContext);

    void TestPlayerDataManagementAdminUpdateUserPublisherInternalData(TestContext& testContext);

    void TestPlayerDataManagementAdminUpdateUserPublisherReadOnlyData(TestContext& testContext);

    void TestPlayerDataManagementAdminUpdateUserReadOnlyData(TestContext& testContext);

    void TestPlayerDataManagementClientGetFriendLeaderboard(TestContext& testContext);

    void TestPlayerDataManagementClientGetFriendLeaderboardAroundPlayer(TestContext& testContext);

    void TestPlayerDataManagementClientGetLeaderboard(TestContext& testContext);

    void TestPlayerDataManagementClientGetLeaderboardAroundPlayer(TestContext& testContext);

    void TestPlayerDataManagementClientGetPlayerStatistics(TestContext& testContext);

    void TestPlayerDataManagementClientGetPlayerStatisticVersions(TestContext& testContext);

    void TestPlayerDataManagementClientGetUserData(TestContext& testContext);

    void TestPlayerDataManagementClientGetUserPublisherData(TestContext& testContext);

    void TestPlayerDataManagementClientGetUserPublisherReadOnlyData(TestContext& testContext);

    void TestPlayerDataManagementClientGetUserReadOnlyData(TestContext& testContext);

    void TestPlayerDataManagementClientUpdatePlayerStatistics(TestContext& testContext);

    void TestPlayerDataManagementClientUpdateUserData(TestContext& testContext);

    void TestPlayerDataManagementClientUpdateUserPublisherData(TestContext& testContext);

    void TestPlayerDataManagementServerGetFriendLeaderboard(TestContext& testContext);

    void TestPlayerDataManagementServerGetLeaderboard(TestContext& testContext);

    void TestPlayerDataManagementServerGetLeaderboardAroundUser(TestContext& testContext);

    void TestPlayerDataManagementServerGetPlayerCombinedInfo(TestContext& testContext);

    void TestPlayerDataManagementServerGetPlayerStatistics(TestContext& testContext);

    void TestPlayerDataManagementServerGetPlayerStatisticVersions(TestContext& testContext);

    void TestPlayerDataManagementServerGetUserData(TestContext& testContext);

    void TestPlayerDataManagementServerGetUserInternalData(TestContext& testContext);

    void TestPlayerDataManagementServerGetUserPublisherData(TestContext& testContext);

    void TestPlayerDataManagementServerGetUserPublisherInternalData(TestContext& testContext);

    void TestPlayerDataManagementServerGetUserPublisherReadOnlyData(TestContext& testContext);

    void TestPlayerDataManagementServerGetUserReadOnlyData(TestContext& testContext);

    void TestPlayerDataManagementServerUpdatePlayerStatistics(TestContext& testContext);

    void TestPlayerDataManagementServerUpdateUserData(TestContext& testContext);

    void TestPlayerDataManagementServerUpdateUserInternalData(TestContext& testContext);

    void TestPlayerDataManagementServerUpdateUserPublisherData(TestContext& testContext);

    void TestPlayerDataManagementServerUpdateUserPublisherInternalData(TestContext& testContext);

    void TestPlayerDataManagementServerUpdateUserPublisherReadOnlyData(TestContext& testContext);

    void TestPlayerDataManagementServerUpdateUserReadOnlyData(TestContext& testContext);


protected:
    void AddTests();

    static void LogCreatePlayerStatisticDefinitionRequest( PlayFab::PlayerDataManagementModels::CreatePlayerStatisticDefinitionRequest* request, const char* testName );
    static void FillCreatePlayerStatisticDefinitionRequest( PlayFab::PlayerDataManagementModels::CreatePlayerStatisticDefinitionRequest* request );
    static HRESULT LogPFPlayerDataManagementCreatePlayerStatisticDefinitionResult( PFPlayerDataManagementCreatePlayerStatisticDefinitionResult* result );
    static HRESULT ValidatePFPlayerDataManagementCreatePlayerStatisticDefinitionResult( PFPlayerDataManagementCreatePlayerStatisticDefinitionResult* result );

    static void LogGetDataReportRequest( PlayFab::PlayerDataManagementModels::GetDataReportRequest* request, const char* testName );
    static void FillGetDataReportRequest( PlayFab::PlayerDataManagementModels::GetDataReportRequest* request );
    static HRESULT LogPFPlayerDataManagementGetDataReportResult( PFPlayerDataManagementGetDataReportResult* result );
    static HRESULT ValidatePFPlayerDataManagementGetDataReportResult( PFPlayerDataManagementGetDataReportResult* result );

    static HRESULT LogPFPlayerDataManagementGetPlayerStatisticDefinitionsResult( PFPlayerDataManagementGetPlayerStatisticDefinitionsResult* result );
    static HRESULT ValidatePFPlayerDataManagementGetPlayerStatisticDefinitionsResult( PFPlayerDataManagementGetPlayerStatisticDefinitionsResult* result );

    static void LogGetPlayerStatisticVersionsRequest( PlayFab::PlayerDataManagementModels::GetPlayerStatisticVersionsRequest* request, const char* testName );
    static void FillGetPlayerStatisticVersionsRequest( PlayFab::PlayerDataManagementModels::GetPlayerStatisticVersionsRequest* request );
    static HRESULT LogPFPlayerDataManagementGetPlayerStatisticVersionsResult( PFPlayerDataManagementGetPlayerStatisticVersionsResult* result );
    static HRESULT ValidatePFPlayerDataManagementGetPlayerStatisticVersionsResult( PFPlayerDataManagementGetPlayerStatisticVersionsResult* result );

    static void LogGetUserDataRequest( PlayFab::PlayerDataManagementModels::GetUserDataRequest* request, const char* testName );
    static void FillGetUserDataRequest( PlayFab::PlayerDataManagementModels::GetUserDataRequest* request );
    static HRESULT LogPFPlayerDataManagementAdminGetUserDataResult( PFPlayerDataManagementAdminGetUserDataResult* result );
    static HRESULT ValidatePFPlayerDataManagementAdminGetUserDataResult( PFPlayerDataManagementAdminGetUserDataResult* result );






    static void LogIncrementPlayerStatisticVersionRequest( PlayFab::PlayerDataManagementModels::IncrementPlayerStatisticVersionRequest* request, const char* testName );
    static void FillIncrementPlayerStatisticVersionRequest( PlayFab::PlayerDataManagementModels::IncrementPlayerStatisticVersionRequest* request );
    static HRESULT LogPFPlayerDataManagementIncrementPlayerStatisticVersionResult( PFPlayerDataManagementIncrementPlayerStatisticVersionResult* result );
    static HRESULT ValidatePFPlayerDataManagementIncrementPlayerStatisticVersionResult( PFPlayerDataManagementIncrementPlayerStatisticVersionResult* result );

    static void LogRefundPurchaseRequest( PlayFab::PlayerDataManagementModels::RefundPurchaseRequest* request, const char* testName );
    static void FillRefundPurchaseRequest( PlayFab::PlayerDataManagementModels::RefundPurchaseRequest* request );
    static HRESULT LogPFPlayerDataManagementRefundPurchaseResponse( PFPlayerDataManagementRefundPurchaseResponse* result );
    static HRESULT ValidatePFPlayerDataManagementRefundPurchaseResponse( PFPlayerDataManagementRefundPurchaseResponse* result );

    static void LogResetUserStatisticsRequest( PlayFab::PlayerDataManagementModels::ResetUserStatisticsRequest* request, const char* testName );
    static void FillResetUserStatisticsRequest( PlayFab::PlayerDataManagementModels::ResetUserStatisticsRequest* request );

    static void LogResolvePurchaseDisputeRequest( PlayFab::PlayerDataManagementModels::ResolvePurchaseDisputeRequest* request, const char* testName );
    static void FillResolvePurchaseDisputeRequest( PlayFab::PlayerDataManagementModels::ResolvePurchaseDisputeRequest* request );
    static HRESULT LogPFPlayerDataManagementResolvePurchaseDisputeResponse( PFPlayerDataManagementResolvePurchaseDisputeResponse* result );
    static HRESULT ValidatePFPlayerDataManagementResolvePurchaseDisputeResponse( PFPlayerDataManagementResolvePurchaseDisputeResponse* result );

    static void LogUpdatePlayerStatisticDefinitionRequest( PlayFab::PlayerDataManagementModels::UpdatePlayerStatisticDefinitionRequest* request, const char* testName );
    static void FillUpdatePlayerStatisticDefinitionRequest( PlayFab::PlayerDataManagementModels::UpdatePlayerStatisticDefinitionRequest* request );
    static HRESULT LogPFPlayerDataManagementUpdatePlayerStatisticDefinitionResult( PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult* result );
    static HRESULT ValidatePFPlayerDataManagementUpdatePlayerStatisticDefinitionResult( PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult* result );

    static void LogAdminUpdateUserDataRequest( PlayFab::PlayerDataManagementModels::AdminUpdateUserDataRequest* request, const char* testName );
    static void FillAdminUpdateUserDataRequest( PlayFab::PlayerDataManagementModels::AdminUpdateUserDataRequest* request );
    static HRESULT LogPFPlayerDataManagementUpdateUserDataResult( PFPlayerDataManagementUpdateUserDataResult* result );
    static HRESULT ValidatePFPlayerDataManagementUpdateUserDataResult( PFPlayerDataManagementUpdateUserDataResult* result );

    static void LogUpdateUserInternalDataRequest( PlayFab::PlayerDataManagementModels::UpdateUserInternalDataRequest* request, const char* testName );
    static void FillUpdateUserInternalDataRequest( PlayFab::PlayerDataManagementModels::UpdateUserInternalDataRequest* request );





    static void LogClientGetFriendLeaderboardRequest( PlayFab::PlayerDataManagementModels::ClientGetFriendLeaderboardRequest* request, const char* testName );
    static void FillClientGetFriendLeaderboardRequest( PlayFab::PlayerDataManagementModels::ClientGetFriendLeaderboardRequest* request );
    static HRESULT LogPFPlayerDataManagementGetLeaderboardResult( PFPlayerDataManagementGetLeaderboardResult* result );
    static HRESULT ValidatePFPlayerDataManagementGetLeaderboardResult( PFPlayerDataManagementGetLeaderboardResult* result );

    static void LogGetFriendLeaderboardAroundPlayerRequest( PlayFab::PlayerDataManagementModels::GetFriendLeaderboardAroundPlayerRequest* request, const char* testName );
    static void FillGetFriendLeaderboardAroundPlayerRequest( PlayFab::PlayerDataManagementModels::GetFriendLeaderboardAroundPlayerRequest* request );
    static HRESULT LogPFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult( PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult* result );
    static HRESULT ValidatePFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult( PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult* result );

    static void LogGetLeaderboardRequest( PlayFab::PlayerDataManagementModels::GetLeaderboardRequest* request, const char* testName );
    static void FillGetLeaderboardRequest( PlayFab::PlayerDataManagementModels::GetLeaderboardRequest* request );

    static void LogGetLeaderboardAroundPlayerRequest( PlayFab::PlayerDataManagementModels::GetLeaderboardAroundPlayerRequest* request, const char* testName );
    static void FillGetLeaderboardAroundPlayerRequest( PlayFab::PlayerDataManagementModels::GetLeaderboardAroundPlayerRequest* request );
    static HRESULT LogPFPlayerDataManagementGetLeaderboardAroundPlayerResult( PFPlayerDataManagementGetLeaderboardAroundPlayerResult* result );
    static HRESULT ValidatePFPlayerDataManagementGetLeaderboardAroundPlayerResult( PFPlayerDataManagementGetLeaderboardAroundPlayerResult* result );

    static void LogClientGetPlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ClientGetPlayerStatisticsRequest* request, const char* testName );
    static void FillClientGetPlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ClientGetPlayerStatisticsRequest* request );
    static HRESULT LogPFPlayerDataManagementClientGetPlayerStatisticsResult( PFPlayerDataManagementClientGetPlayerStatisticsResult* result );
    static HRESULT ValidatePFPlayerDataManagementClientGetPlayerStatisticsResult( PFPlayerDataManagementClientGetPlayerStatisticsResult* result );


    static HRESULT LogPFPlayerDataManagementClientGetUserDataResult( PFPlayerDataManagementClientGetUserDataResult* result );
    static HRESULT ValidatePFPlayerDataManagementClientGetUserDataResult( PFPlayerDataManagementClientGetUserDataResult* result );




    static void LogClientUpdatePlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ClientUpdatePlayerStatisticsRequest* request, const char* testName );
    static void FillClientUpdatePlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ClientUpdatePlayerStatisticsRequest* request );

    static void LogClientUpdateUserDataRequest( PlayFab::PlayerDataManagementModels::ClientUpdateUserDataRequest* request, const char* testName );
    static void FillClientUpdateUserDataRequest( PlayFab::PlayerDataManagementModels::ClientUpdateUserDataRequest* request );


    static void LogServerGetFriendLeaderboardRequest( PlayFab::PlayerDataManagementModels::ServerGetFriendLeaderboardRequest* request, const char* testName );
    static void FillServerGetFriendLeaderboardRequest( PlayFab::PlayerDataManagementModels::ServerGetFriendLeaderboardRequest* request );


    static void LogGetLeaderboardAroundUserRequest( PlayFab::PlayerDataManagementModels::GetLeaderboardAroundUserRequest* request, const char* testName );
    static void FillGetLeaderboardAroundUserRequest( PlayFab::PlayerDataManagementModels::GetLeaderboardAroundUserRequest* request );
    static HRESULT LogPFPlayerDataManagementGetLeaderboardAroundUserResult( PFPlayerDataManagementGetLeaderboardAroundUserResult* result );
    static HRESULT ValidatePFPlayerDataManagementGetLeaderboardAroundUserResult( PFPlayerDataManagementGetLeaderboardAroundUserResult* result );

    static void LogGetPlayerCombinedInfoRequest( PlayFab::GetPlayerCombinedInfoRequest* request, const char* testName );
    static void FillGetPlayerCombinedInfoRequest( PlayFab::GetPlayerCombinedInfoRequest* request );
    static HRESULT LogPFGetPlayerCombinedInfoResult( PFGetPlayerCombinedInfoResult* result );
    static HRESULT ValidatePFGetPlayerCombinedInfoResult( PFGetPlayerCombinedInfoResult* result );

    static void LogServerGetPlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ServerGetPlayerStatisticsRequest* request, const char* testName );
    static void FillServerGetPlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ServerGetPlayerStatisticsRequest* request );
    static HRESULT LogPFPlayerDataManagementServerGetPlayerStatisticsResult( PFPlayerDataManagementServerGetPlayerStatisticsResult* result );
    static HRESULT ValidatePFPlayerDataManagementServerGetPlayerStatisticsResult( PFPlayerDataManagementServerGetPlayerStatisticsResult* result );


    static HRESULT LogPFPlayerDataManagementServerGetUserDataResult( PFPlayerDataManagementServerGetUserDataResult* result );
    static HRESULT ValidatePFPlayerDataManagementServerGetUserDataResult( PFPlayerDataManagementServerGetUserDataResult* result );






    static void LogServerUpdatePlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ServerUpdatePlayerStatisticsRequest* request, const char* testName );
    static void FillServerUpdatePlayerStatisticsRequest( PlayFab::PlayerDataManagementModels::ServerUpdatePlayerStatisticsRequest* request );

    static void LogServerUpdateUserDataRequest( PlayFab::PlayerDataManagementModels::ServerUpdateUserDataRequest* request, const char* testName );
    static void FillServerUpdateUserDataRequest( PlayFab::PlayerDataManagementModels::ServerUpdateUserDataRequest* request );






    struct PlayerDataManagementTestData
    {
        ~PlayerDataManagementTestData()
        {

        }

    };

    static PlayerDataManagementTestData testData;

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
