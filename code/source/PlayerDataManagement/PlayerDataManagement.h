#pragma once

#include "PlayerDataManagementDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class PlayerDataManagementAPI
{
public:
    PlayerDataManagementAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    PlayerDataManagementAPI(const PlayerDataManagementAPI& source) = delete;
    PlayerDataManagementAPI& operator=(const PlayerDataManagementAPI& source) = delete;
    ~PlayerDataManagementAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<PlayerDataManagementModels::CreatePlayerStatisticDefinitionResult> AdminCreatePlayerStatisticDefinition(const PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetDataReportResult> AdminGetDataReport(const PFPlayerDataManagementGetDataReportRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetPlayerStatisticDefinitionsResult> AdminGetPlayerStatisticDefinitions(SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetPlayerStatisticVersionsResult> AdminGetPlayerStatisticVersions(const PFPlayerDataManagementGetPlayerStatisticVersionsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserInternalData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserPublisherData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserPublisherInternalData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserPublisherReadOnlyData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserReadOnlyData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::IncrementPlayerStatisticVersionResult> AdminIncrementPlayerStatisticVersion(const PFPlayerDataManagementIncrementPlayerStatisticVersionRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::RefundPurchaseResponse> AdminRefundPurchase(const PFPlayerDataManagementRefundPurchaseRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminResetUserStatistics(const PFPlayerDataManagementResetUserStatisticsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ResolvePurchaseDisputeResponse> AdminResolvePurchaseDispute(const PFPlayerDataManagementResolvePurchaseDisputeRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdatePlayerStatisticDefinitionResult> AdminUpdatePlayerStatisticDefinition(const PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserData(const PFPlayerDataManagementAdminUpdateUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserInternalData(const PFPlayerDataManagementUpdateUserInternalDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserPublisherData(const PFPlayerDataManagementAdminUpdateUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserPublisherInternalData(const PFPlayerDataManagementUpdateUserInternalDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserPublisherReadOnlyData(const PFPlayerDataManagementAdminUpdateUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserReadOnlyData(const PFPlayerDataManagementAdminUpdateUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<PlayerDataManagementModels::GetLeaderboardResult> ClientGetFriendLeaderboard(const PFPlayerDataManagementClientGetFriendLeaderboardRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::GetFriendLeaderboardAroundPlayerResult> ClientGetFriendLeaderboardAroundPlayer(const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::GetLeaderboardResult> ClientGetLeaderboard(const PFPlayerDataManagementGetLeaderboardRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::GetLeaderboardAroundPlayerResult> ClientGetLeaderboardAroundPlayer(const PFPlayerDataManagementGetLeaderboardAroundPlayerRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::ClientGetPlayerStatisticsResult> ClientGetPlayerStatistics(const PFPlayerDataManagementClientGetPlayerStatisticsRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::GetPlayerStatisticVersionsResult> ClientGetPlayerStatisticVersions(const PFPlayerDataManagementGetPlayerStatisticVersionsRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::ClientGetUserDataResult> ClientGetUserData(const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::ClientGetUserDataResult> ClientGetUserPublisherData(const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::ClientGetUserDataResult> ClientGetUserPublisherReadOnlyData(const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::ClientGetUserDataResult> ClientGetUserReadOnlyData(const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUpdatePlayerStatistics(const PFPlayerDataManagementClientUpdatePlayerStatisticsRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ClientUpdateUserData(const PFPlayerDataManagementClientUpdateUserDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ClientUpdateUserPublisherData(const PFPlayerDataManagementClientUpdateUserDataRequest& request, const TaskQueue& queue) const;
    static AsyncOp<PlayerDataManagementModels::GetLeaderboardResult> ServerGetFriendLeaderboard(const PFPlayerDataManagementServerGetFriendLeaderboardRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetLeaderboardResult> ServerGetLeaderboard(const PFPlayerDataManagementGetLeaderboardRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetLeaderboardAroundUserResult> ServerGetLeaderboardAroundUser(const PFPlayerDataManagementGetLeaderboardAroundUserRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<GetPlayerCombinedInfoResult> ServerGetPlayerCombinedInfo(const PFGetPlayerCombinedInfoRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetPlayerStatisticsResult> ServerGetPlayerStatistics(const PFPlayerDataManagementServerGetPlayerStatisticsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetPlayerStatisticVersionsResult> ServerGetPlayerStatisticVersions(const PFPlayerDataManagementGetPlayerStatisticVersionsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserInternalData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserPublisherData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserPublisherInternalData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserPublisherReadOnlyData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserReadOnlyData(const PFPlayerDataManagementGetUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerUpdatePlayerStatistics(const PFPlayerDataManagementServerUpdatePlayerStatisticsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserData(const PFPlayerDataManagementServerUpdateUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserInternalData(const PFPlayerDataManagementUpdateUserInternalDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserPublisherData(const PFPlayerDataManagementServerUpdateUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserPublisherInternalData(const PFPlayerDataManagementUpdateUserInternalDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserPublisherReadOnlyData(const PFPlayerDataManagementServerUpdateUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserReadOnlyData(const PFPlayerDataManagementServerUpdateUserDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
