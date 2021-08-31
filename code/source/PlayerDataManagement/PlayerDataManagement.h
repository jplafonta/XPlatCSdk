#pragma once

#include "PlayerDataManagementDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class PlayerDataManagementAPI
{
public:
    PlayerDataManagementAPI() = delete;
    PlayerDataManagementAPI(const PlayerDataManagementAPI& source) = delete;
    PlayerDataManagementAPI& operator=(const PlayerDataManagementAPI& source) = delete;
    ~PlayerDataManagementAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<PlayerDataManagementModels::CreatePlayerStatisticDefinitionResult> AdminCreatePlayerStatisticDefinition(SharedPtr<GlobalState const> state, const PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetDataReportResult> AdminGetDataReport(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetDataReportRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetPlayerStatisticDefinitionsResult> AdminGetPlayerStatisticDefinitions(SharedPtr<GlobalState const> state, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetPlayerStatisticVersionsResult> AdminGetPlayerStatisticVersions(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetPlayerStatisticVersionsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserInternalData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserPublisherData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserPublisherInternalData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserPublisherReadOnlyData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::AdminGetUserDataResult> AdminGetUserReadOnlyData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::IncrementPlayerStatisticVersionResult> AdminIncrementPlayerStatisticVersion(SharedPtr<GlobalState const> state, const PFPlayerDataManagementIncrementPlayerStatisticVersionRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::RefundPurchaseResponse> AdminRefundPurchase(SharedPtr<GlobalState const> state, const PFPlayerDataManagementRefundPurchaseRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminResetUserStatistics(SharedPtr<GlobalState const> state, const PFPlayerDataManagementResetUserStatisticsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ResolvePurchaseDisputeResponse> AdminResolvePurchaseDispute(SharedPtr<GlobalState const> state, const PFPlayerDataManagementResolvePurchaseDisputeRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdatePlayerStatisticDefinitionResult> AdminUpdatePlayerStatisticDefinition(SharedPtr<GlobalState const> state, const PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementAdminUpdateUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserInternalData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementUpdateUserInternalDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserPublisherData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementAdminUpdateUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserPublisherInternalData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementUpdateUserInternalDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserPublisherReadOnlyData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementAdminUpdateUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> AdminUpdateUserReadOnlyData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementAdminUpdateUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetLeaderboardResult> ClientGetFriendLeaderboard(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementClientGetFriendLeaderboardRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetFriendLeaderboardAroundPlayerResult> ClientGetFriendLeaderboardAroundPlayer(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetLeaderboardResult> ClientGetLeaderboard(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementGetLeaderboardRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetLeaderboardAroundPlayerResult> ClientGetLeaderboardAroundPlayer(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementGetLeaderboardAroundPlayerRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ClientGetPlayerStatisticsResult> ClientGetPlayerStatistics(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementClientGetPlayerStatisticsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetPlayerStatisticVersionsResult> ClientGetPlayerStatisticVersions(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementGetPlayerStatisticVersionsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ClientGetUserDataResult> ClientGetUserData(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ClientGetUserDataResult> ClientGetUserPublisherData(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ClientGetUserDataResult> ClientGetUserPublisherReadOnlyData(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ClientGetUserDataResult> ClientGetUserReadOnlyData(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUpdatePlayerStatistics(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementClientUpdatePlayerStatisticsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ClientUpdateUserData(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementClientUpdateUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ClientUpdateUserPublisherData(SharedPtr<TitlePlayer> entity, const PFPlayerDataManagementClientUpdateUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetLeaderboardResult> ServerGetFriendLeaderboard(SharedPtr<GlobalState const> state, const PFPlayerDataManagementServerGetFriendLeaderboardRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetLeaderboardResult> ServerGetLeaderboard(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetLeaderboardRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetLeaderboardAroundUserResult> ServerGetLeaderboardAroundUser(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetLeaderboardAroundUserRequest& request, const TaskQueue& queue);
    static AsyncOp<GetPlayerCombinedInfoResult> ServerGetPlayerCombinedInfo(SharedPtr<GlobalState const> state, const PFGetPlayerCombinedInfoRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetPlayerStatisticsResult> ServerGetPlayerStatistics(SharedPtr<GlobalState const> state, const PFPlayerDataManagementServerGetPlayerStatisticsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::GetPlayerStatisticVersionsResult> ServerGetPlayerStatisticVersions(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetPlayerStatisticVersionsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserInternalData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserPublisherData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserPublisherInternalData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserPublisherReadOnlyData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::ServerGetUserDataResult> ServerGetUserReadOnlyData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementGetUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerUpdatePlayerStatistics(SharedPtr<GlobalState const> state, const PFPlayerDataManagementServerUpdatePlayerStatisticsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementServerUpdateUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserInternalData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementUpdateUserInternalDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserPublisherData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementServerUpdateUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserPublisherInternalData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementUpdateUserInternalDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserPublisherReadOnlyData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementServerUpdateUserDataRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerDataManagementModels::UpdateUserDataResult> ServerUpdateUserReadOnlyData(SharedPtr<GlobalState const> state, const PFPlayerDataManagementServerUpdateUserDataRequest& request, const TaskQueue& queue);
};

}
