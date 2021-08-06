#pragma once

#include "MatchmakingDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class MatchmakingAPI
{
public:
    MatchmakingAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    MatchmakingAPI(const MatchmakingAPI& source) = delete;
    MatchmakingAPI& operator=(const MatchmakingAPI& source) = delete;
    ~MatchmakingAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<MatchmakingModels::GetMatchmakerGameInfoResult> AdminGetMatchmakerGameInfo(const PFMatchmakingGetMatchmakerGameInfoRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::GetMatchmakerGameModesResult> AdminGetMatchmakerGameModes(const PFMatchmakingGetMatchmakerGameModesRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminModifyMatchmakerGameModes(const PFMatchmakingModifyMatchmakerGameModesRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<MatchmakingModels::CurrentGamesResult> ClientGetCurrentGames(const PFMatchmakingCurrentGamesRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::GameServerRegionsResult> ClientGetGameServerRegions(const PFMatchmakingGameServerRegionsRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::MatchmakeResult> ClientMatchmake(const PFMatchmakingMatchmakeRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::StartGameResult> ClientStartGame(const PFMatchmakingClientStartGameRequest& request, const TaskQueue& queue) const;
    static AsyncOp<MatchmakingModels::AuthUserResponse> AuthUser(const PFMatchmakingAuthUserRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> PlayerJoined(const PFMatchmakingPlayerJoinedRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> PlayerLeft(const PFMatchmakingPlayerLeftRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::StartGameResponse> StartGame(const PFMatchmakingMatchmakerStartGameRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::UserInfoResponse> UserInfo(const PFMatchmakingUserInfoRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerDeregisterGame(const PFMatchmakingDeregisterGameRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::NotifyMatchmakerPlayerLeftResult> ServerNotifyMatchmakerPlayerLeft(const PFMatchmakingNotifyMatchmakerPlayerLeftRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::RedeemMatchmakerTicketResult> ServerRedeemMatchmakerTicket(const PFMatchmakingRedeemMatchmakerTicketRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerRefreshGameServerInstanceHeartbeat(const PFMatchmakingRefreshGameServerInstanceHeartbeatRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<MatchmakingModels::RegisterGameResponse> ServerRegisterGame(const PFMatchmakingRegisterGameRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSetGameServerInstanceData(const PFMatchmakingSetGameServerInstanceDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSetGameServerInstanceState(const PFMatchmakingSetGameServerInstanceStateRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSetGameServerInstanceTags(const PFMatchmakingSetGameServerInstanceTagsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<void> CancelAllMatchmakingTicketsForPlayer(const PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> CancelAllServerBackfillTicketsForPlayer(const PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> CancelMatchmakingTicket(const PFMatchmakingCancelMatchmakingTicketRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> CancelServerBackfillTicket(const PFMatchmakingCancelServerBackfillTicketRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::CreateMatchmakingTicketResult> CreateMatchmakingTicket(const PFMatchmakingCreateMatchmakingTicketRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::CreateServerBackfillTicketResult> CreateServerBackfillTicket(const PFMatchmakingCreateServerBackfillTicketRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::CreateMatchmakingTicketResult> CreateServerMatchmakingTicket(const PFMatchmakingCreateServerMatchmakingTicketRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::GetMatchResult> GetMatch(const PFMatchmakingGetMatchRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::GetMatchmakingTicketResult> GetMatchmakingTicket(const PFMatchmakingGetMatchmakingTicketRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::GetQueueStatisticsResult> GetQueueStatistics(const PFMatchmakingGetQueueStatisticsRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::GetServerBackfillTicketResult> GetServerBackfillTicket(const PFMatchmakingGetServerBackfillTicketRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> JoinMatchmakingTicket(const PFMatchmakingJoinMatchmakingTicketRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::ListMatchmakingTicketsForPlayerResult> ListMatchmakingTicketsForPlayer(const PFMatchmakingListMatchmakingTicketsForPlayerRequest& request, const TaskQueue& queue) const;
    AsyncOp<MatchmakingModels::ListServerBackfillTicketsForPlayerResult> ListServerBackfillTicketsForPlayer(const PFMatchmakingListServerBackfillTicketsForPlayerRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
