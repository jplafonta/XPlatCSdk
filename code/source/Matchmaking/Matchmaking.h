#pragma once

#include "MatchmakingDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class MatchmakingAPI
{
public:
    MatchmakingAPI() = delete;
    MatchmakingAPI(const MatchmakingAPI& source) = delete;
    MatchmakingAPI& operator=(const MatchmakingAPI& source) = delete;
    ~MatchmakingAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<MatchmakingModels::GetMatchmakerGameInfoResult> AdminGetMatchmakerGameInfo(SharedPtr<GlobalState const> state, const PFMatchmakingGetMatchmakerGameInfoRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::GetMatchmakerGameModesResult> AdminGetMatchmakerGameModes(SharedPtr<GlobalState const> state, const PFMatchmakingGetMatchmakerGameModesRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminModifyMatchmakerGameModes(SharedPtr<GlobalState const> state, const PFMatchmakingModifyMatchmakerGameModesRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::CurrentGamesResult> ClientGetCurrentGames(SharedPtr<TitlePlayer> entity, const PFMatchmakingCurrentGamesRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::GameServerRegionsResult> ClientGetGameServerRegions(SharedPtr<TitlePlayer> entity, const PFMatchmakingGameServerRegionsRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::MatchmakeResult> ClientMatchmake(SharedPtr<TitlePlayer> entity, const PFMatchmakingMatchmakeRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::StartGameResult> ClientStartGame(SharedPtr<TitlePlayer> entity, const PFMatchmakingClientStartGameRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::AuthUserResponse> AuthUser(SharedPtr<GlobalState const> state, const PFMatchmakingAuthUserRequest& request, const TaskQueue& queue);
    static AsyncOp<void> PlayerJoined(SharedPtr<GlobalState const> state, const PFMatchmakingPlayerJoinedRequest& request, const TaskQueue& queue);
    static AsyncOp<void> PlayerLeft(SharedPtr<GlobalState const> state, const PFMatchmakingPlayerLeftRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::StartGameResponse> StartGame(SharedPtr<GlobalState const> state, const PFMatchmakingMatchmakerStartGameRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::UserInfoResponse> UserInfo(SharedPtr<GlobalState const> state, const PFMatchmakingUserInfoRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerDeregisterGame(SharedPtr<GlobalState const> state, const PFMatchmakingDeregisterGameRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::NotifyMatchmakerPlayerLeftResult> ServerNotifyMatchmakerPlayerLeft(SharedPtr<GlobalState const> state, const PFMatchmakingNotifyMatchmakerPlayerLeftRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::RedeemMatchmakerTicketResult> ServerRedeemMatchmakerTicket(SharedPtr<GlobalState const> state, const PFMatchmakingRedeemMatchmakerTicketRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerRefreshGameServerInstanceHeartbeat(SharedPtr<GlobalState const> state, const PFMatchmakingRefreshGameServerInstanceHeartbeatRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::RegisterGameResponse> ServerRegisterGame(SharedPtr<GlobalState const> state, const PFMatchmakingRegisterGameRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSetGameServerInstanceData(SharedPtr<GlobalState const> state, const PFMatchmakingSetGameServerInstanceDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSetGameServerInstanceState(SharedPtr<GlobalState const> state, const PFMatchmakingSetGameServerInstanceStateRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSetGameServerInstanceTags(SharedPtr<GlobalState const> state, const PFMatchmakingSetGameServerInstanceTagsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> CancelAllMatchmakingTicketsForPlayer(SharedPtr<Entity> entity, const PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest& request, const TaskQueue& queue);
    static AsyncOp<void> CancelAllServerBackfillTicketsForPlayer(SharedPtr<Entity> entity, const PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest& request, const TaskQueue& queue);
    static AsyncOp<void> CancelMatchmakingTicket(SharedPtr<Entity> entity, const PFMatchmakingCancelMatchmakingTicketRequest& request, const TaskQueue& queue);
    static AsyncOp<void> CancelServerBackfillTicket(SharedPtr<Entity> entity, const PFMatchmakingCancelServerBackfillTicketRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::CreateMatchmakingTicketResult> CreateMatchmakingTicket(SharedPtr<Entity> entity, const PFMatchmakingCreateMatchmakingTicketRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::CreateServerBackfillTicketResult> CreateServerBackfillTicket(SharedPtr<Entity> entity, const PFMatchmakingCreateServerBackfillTicketRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::CreateMatchmakingTicketResult> CreateServerMatchmakingTicket(SharedPtr<Entity> entity, const PFMatchmakingCreateServerMatchmakingTicketRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::GetMatchResult> GetMatch(SharedPtr<Entity> entity, const PFMatchmakingGetMatchRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::GetMatchmakingTicketResult> GetMatchmakingTicket(SharedPtr<Entity> entity, const PFMatchmakingGetMatchmakingTicketRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::GetQueueStatisticsResult> GetQueueStatistics(SharedPtr<Entity> entity, const PFMatchmakingGetQueueStatisticsRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::GetServerBackfillTicketResult> GetServerBackfillTicket(SharedPtr<Entity> entity, const PFMatchmakingGetServerBackfillTicketRequest& request, const TaskQueue& queue);
    static AsyncOp<void> JoinMatchmakingTicket(SharedPtr<Entity> entity, const PFMatchmakingJoinMatchmakingTicketRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::ListMatchmakingTicketsForPlayerResult> ListMatchmakingTicketsForPlayer(SharedPtr<Entity> entity, const PFMatchmakingListMatchmakingTicketsForPlayerRequest& request, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::ListServerBackfillTicketsForPlayerResult> ListServerBackfillTicketsForPlayer(SharedPtr<Entity> entity, const PFMatchmakingListServerBackfillTicketsForPlayerRequest& request, const TaskQueue& queue);
};

}
