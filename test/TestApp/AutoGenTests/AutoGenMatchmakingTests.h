#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Matchmaking/MatchmakingDataModels.h"

namespace PlayFabUnit
{

class AutoGenMatchmakingTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestMatchmakingAdminGetMatchmakerGameInfo(TestContext& testContext); 
    void TestMatchmakingAdminGetMatchmakerGameModes(TestContext& testContext); 
    void TestMatchmakingAdminModifyMatchmakerGameModes(TestContext& testContext); 
    void TestMatchmakingClientGetCurrentGames(TestContext& testContext); 
    void TestMatchmakingClientGetGameServerRegions(TestContext& testContext); 
    void TestMatchmakingClientMatchmake(TestContext& testContext); 
    void TestMatchmakingClientStartGame(TestContext& testContext); 
    void TestMatchmakingAuthUser(TestContext& testContext); 
    void TestMatchmakingPlayerJoined(TestContext& testContext); 
    void TestMatchmakingPlayerLeft(TestContext& testContext); 
    void TestMatchmakingStartGame(TestContext& testContext); 
    void TestMatchmakingUserInfo(TestContext& testContext); 
    void TestMatchmakingServerDeregisterGame(TestContext& testContext); 
    void TestMatchmakingServerNotifyMatchmakerPlayerLeft(TestContext& testContext); 
    void TestMatchmakingServerRedeemMatchmakerTicket(TestContext& testContext); 
    void TestMatchmakingServerRefreshGameServerInstanceHeartbeat(TestContext& testContext); 
    void TestMatchmakingServerRegisterGame(TestContext& testContext); 
    void TestMatchmakingServerSetGameServerInstanceData(TestContext& testContext); 
    void TestMatchmakingServerSetGameServerInstanceState(TestContext& testContext); 
    void TestMatchmakingServerSetGameServerInstanceTags(TestContext& testContext); 
    void TestMatchmakingCancelAllMatchmakingTicketsForPlayer(TestContext& testContext); 
    void TestMatchmakingCancelAllServerBackfillTicketsForPlayer(TestContext& testContext); 
    void TestMatchmakingCancelMatchmakingTicket(TestContext& testContext); 
    void TestMatchmakingCancelServerBackfillTicket(TestContext& testContext); 
    void TestMatchmakingCreateMatchmakingTicket(TestContext& testContext); 
    void TestMatchmakingCreateServerBackfillTicket(TestContext& testContext); 
    void TestMatchmakingCreateServerMatchmakingTicket(TestContext& testContext); 
    void TestMatchmakingGetMatch(TestContext& testContext); 
    void TestMatchmakingGetMatchmakingTicket(TestContext& testContext); 
    void TestMatchmakingGetQueueStatistics(TestContext& testContext); 
    void TestMatchmakingGetServerBackfillTicket(TestContext& testContext); 
    void TestMatchmakingJoinMatchmakingTicket(TestContext& testContext); 
    void TestMatchmakingListMatchmakingTicketsForPlayer(TestContext& testContext); 
    void TestMatchmakingListServerBackfillTicketsForPlayer(TestContext& testContext); 


protected:
    void AddTests();


    static void LogGetMatchmakerGameInfoRequest( PlayFab::MatchmakingModels::GetMatchmakerGameInfoRequest* request, const char* testName );
    static void FillGetMatchmakerGameInfoRequest( PlayFab::MatchmakingModels::GetMatchmakerGameInfoRequest* request );
    static HRESULT LogPFMatchmakingGetMatchmakerGameInfoResult( PFMatchmakingGetMatchmakerGameInfoResult* result );
    static HRESULT ValidatePFMatchmakingGetMatchmakerGameInfoResult( PFMatchmakingGetMatchmakerGameInfoResult* result );
    static void LogGetMatchmakerGameModesRequest( PlayFab::MatchmakingModels::GetMatchmakerGameModesRequest* request, const char* testName );
    static void FillGetMatchmakerGameModesRequest( PlayFab::MatchmakingModels::GetMatchmakerGameModesRequest* request );
    static HRESULT LogPFMatchmakingGetMatchmakerGameModesResult( PFMatchmakingGetMatchmakerGameModesResult* result );
    static HRESULT ValidatePFMatchmakingGetMatchmakerGameModesResult( PFMatchmakingGetMatchmakerGameModesResult* result );
    static void LogModifyMatchmakerGameModesRequest( PlayFab::MatchmakingModels::ModifyMatchmakerGameModesRequest* request, const char* testName );
    static void FillModifyMatchmakerGameModesRequest( PlayFab::MatchmakingModels::ModifyMatchmakerGameModesRequest* request );
    static void LogCurrentGamesRequest( PlayFab::MatchmakingModels::CurrentGamesRequest* request, const char* testName );
    static void FillCurrentGamesRequest( PlayFab::MatchmakingModels::CurrentGamesRequest* request );
    static HRESULT LogPFMatchmakingCurrentGamesResult( PFMatchmakingCurrentGamesResult* result );
    static HRESULT ValidatePFMatchmakingCurrentGamesResult( PFMatchmakingCurrentGamesResult* result );
    static void LogGameServerRegionsRequest( PlayFab::MatchmakingModels::GameServerRegionsRequest* request, const char* testName );
    static void FillGameServerRegionsRequest( PlayFab::MatchmakingModels::GameServerRegionsRequest* request );
    static HRESULT LogPFMatchmakingGameServerRegionsResult( PFMatchmakingGameServerRegionsResult* result );
    static HRESULT ValidatePFMatchmakingGameServerRegionsResult( PFMatchmakingGameServerRegionsResult* result );
    static void LogMatchmakeRequest( PlayFab::MatchmakingModels::MatchmakeRequest* request, const char* testName );
    static void FillMatchmakeRequest( PlayFab::MatchmakingModels::MatchmakeRequest* request );
    static HRESULT LogPFMatchmakingMatchmakeResult( PFMatchmakingMatchmakeResult* result );
    static HRESULT ValidatePFMatchmakingMatchmakeResult( PFMatchmakingMatchmakeResult* result );
    static void LogClientStartGameRequest( PlayFab::MatchmakingModels::ClientStartGameRequest* request, const char* testName );
    static void FillClientStartGameRequest( PlayFab::MatchmakingModels::ClientStartGameRequest* request );
    static HRESULT LogPFMatchmakingStartGameResult( PFMatchmakingStartGameResult* result );
    static HRESULT ValidatePFMatchmakingStartGameResult( PFMatchmakingStartGameResult* result );
    static void LogAuthUserRequest( PlayFab::MatchmakingModels::AuthUserRequest* request, const char* testName );
    static void FillAuthUserRequest( PlayFab::MatchmakingModels::AuthUserRequest* request );
    static HRESULT LogPFMatchmakingAuthUserResponse( PFMatchmakingAuthUserResponse* result );
    static HRESULT ValidatePFMatchmakingAuthUserResponse( PFMatchmakingAuthUserResponse* result );
    static void LogPlayerJoinedRequest( PlayFab::MatchmakingModels::PlayerJoinedRequest* request, const char* testName );
    static void FillPlayerJoinedRequest( PlayFab::MatchmakingModels::PlayerJoinedRequest* request );
    static void LogPlayerLeftRequest( PlayFab::MatchmakingModels::PlayerLeftRequest* request, const char* testName );
    static void FillPlayerLeftRequest( PlayFab::MatchmakingModels::PlayerLeftRequest* request );
    static void LogMatchmakerStartGameRequest( PlayFab::MatchmakingModels::MatchmakerStartGameRequest* request, const char* testName );
    static void FillMatchmakerStartGameRequest( PlayFab::MatchmakingModels::MatchmakerStartGameRequest* request );
    static HRESULT LogPFMatchmakingStartGameResponse( PFMatchmakingStartGameResponse* result );
    static HRESULT ValidatePFMatchmakingStartGameResponse( PFMatchmakingStartGameResponse* result );
    static void LogUserInfoRequest( PlayFab::MatchmakingModels::UserInfoRequest* request, const char* testName );
    static void FillUserInfoRequest( PlayFab::MatchmakingModels::UserInfoRequest* request );
    static HRESULT LogPFMatchmakingUserInfoResponse( PFMatchmakingUserInfoResponse* result );
    static HRESULT ValidatePFMatchmakingUserInfoResponse( PFMatchmakingUserInfoResponse* result );
    static void LogDeregisterGameRequest( PlayFab::MatchmakingModels::DeregisterGameRequest* request, const char* testName );
    static void FillDeregisterGameRequest( PlayFab::MatchmakingModels::DeregisterGameRequest* request );
    static void LogNotifyMatchmakerPlayerLeftRequest( PlayFab::MatchmakingModels::NotifyMatchmakerPlayerLeftRequest* request, const char* testName );
    static void FillNotifyMatchmakerPlayerLeftRequest( PlayFab::MatchmakingModels::NotifyMatchmakerPlayerLeftRequest* request );
    static HRESULT LogPFMatchmakingNotifyMatchmakerPlayerLeftResult( PFMatchmakingNotifyMatchmakerPlayerLeftResult* result );
    static HRESULT ValidatePFMatchmakingNotifyMatchmakerPlayerLeftResult( PFMatchmakingNotifyMatchmakerPlayerLeftResult* result );
    static void LogRedeemMatchmakerTicketRequest( PlayFab::MatchmakingModels::RedeemMatchmakerTicketRequest* request, const char* testName );
    static void FillRedeemMatchmakerTicketRequest( PlayFab::MatchmakingModels::RedeemMatchmakerTicketRequest* request );
    static HRESULT LogPFMatchmakingRedeemMatchmakerTicketResult( PFMatchmakingRedeemMatchmakerTicketResult* result );
    static HRESULT ValidatePFMatchmakingRedeemMatchmakerTicketResult( PFMatchmakingRedeemMatchmakerTicketResult* result );
    static void LogRefreshGameServerInstanceHeartbeatRequest( PlayFab::MatchmakingModels::RefreshGameServerInstanceHeartbeatRequest* request, const char* testName );
    static void FillRefreshGameServerInstanceHeartbeatRequest( PlayFab::MatchmakingModels::RefreshGameServerInstanceHeartbeatRequest* request );
    static void LogRegisterGameRequest( PlayFab::MatchmakingModels::RegisterGameRequest* request, const char* testName );
    static void FillRegisterGameRequest( PlayFab::MatchmakingModels::RegisterGameRequest* request );
    static HRESULT LogPFMatchmakingRegisterGameResponse( PFMatchmakingRegisterGameResponse* result );
    static HRESULT ValidatePFMatchmakingRegisterGameResponse( PFMatchmakingRegisterGameResponse* result );
    static void LogSetGameServerInstanceDataRequest( PlayFab::MatchmakingModels::SetGameServerInstanceDataRequest* request, const char* testName );
    static void FillSetGameServerInstanceDataRequest( PlayFab::MatchmakingModels::SetGameServerInstanceDataRequest* request );
    static void LogSetGameServerInstanceStateRequest( PlayFab::MatchmakingModels::SetGameServerInstanceStateRequest* request, const char* testName );
    static void FillSetGameServerInstanceStateRequest( PlayFab::MatchmakingModels::SetGameServerInstanceStateRequest* request );
    static void LogSetGameServerInstanceTagsRequest( PlayFab::MatchmakingModels::SetGameServerInstanceTagsRequest* request, const char* testName );
    static void FillSetGameServerInstanceTagsRequest( PlayFab::MatchmakingModels::SetGameServerInstanceTagsRequest* request );
    static void LogCancelAllMatchmakingTicketsForPlayerRequest( PlayFab::MatchmakingModels::CancelAllMatchmakingTicketsForPlayerRequest* request, const char* testName );
    static void FillCancelAllMatchmakingTicketsForPlayerRequest( PlayFab::MatchmakingModels::CancelAllMatchmakingTicketsForPlayerRequest* request );
    static void LogCancelAllServerBackfillTicketsForPlayerRequest( PlayFab::MatchmakingModels::CancelAllServerBackfillTicketsForPlayerRequest* request, const char* testName );
    static void FillCancelAllServerBackfillTicketsForPlayerRequest( PlayFab::MatchmakingModels::CancelAllServerBackfillTicketsForPlayerRequest* request );
    static void LogCancelMatchmakingTicketRequest( PlayFab::MatchmakingModels::CancelMatchmakingTicketRequest* request, const char* testName );
    static void FillCancelMatchmakingTicketRequest( PlayFab::MatchmakingModels::CancelMatchmakingTicketRequest* request );
    static void LogCancelServerBackfillTicketRequest( PlayFab::MatchmakingModels::CancelServerBackfillTicketRequest* request, const char* testName );
    static void FillCancelServerBackfillTicketRequest( PlayFab::MatchmakingModels::CancelServerBackfillTicketRequest* request );
    static void LogCreateMatchmakingTicketRequest( PlayFab::MatchmakingModels::CreateMatchmakingTicketRequest* request, const char* testName );
    static void FillCreateMatchmakingTicketRequest( PlayFab::MatchmakingModels::CreateMatchmakingTicketRequest* request );
    static HRESULT LogPFMatchmakingCreateMatchmakingTicketResult( PFMatchmakingCreateMatchmakingTicketResult* result );
    static HRESULT ValidatePFMatchmakingCreateMatchmakingTicketResult( PFMatchmakingCreateMatchmakingTicketResult* result );
    static void LogCreateServerBackfillTicketRequest( PlayFab::MatchmakingModels::CreateServerBackfillTicketRequest* request, const char* testName );
    static void FillCreateServerBackfillTicketRequest( PlayFab::MatchmakingModels::CreateServerBackfillTicketRequest* request );
    static HRESULT LogPFMatchmakingCreateServerBackfillTicketResult( PFMatchmakingCreateServerBackfillTicketResult* result );
    static HRESULT ValidatePFMatchmakingCreateServerBackfillTicketResult( PFMatchmakingCreateServerBackfillTicketResult* result );
    static void LogCreateServerMatchmakingTicketRequest( PlayFab::MatchmakingModels::CreateServerMatchmakingTicketRequest* request, const char* testName );
    static void FillCreateServerMatchmakingTicketRequest( PlayFab::MatchmakingModels::CreateServerMatchmakingTicketRequest* request );
    static void LogGetMatchRequest( PlayFab::MatchmakingModels::GetMatchRequest* request, const char* testName );
    static void FillGetMatchRequest( PlayFab::MatchmakingModels::GetMatchRequest* request );
    static HRESULT LogPFMatchmakingGetMatchResult( PFMatchmakingGetMatchResult* result );
    static HRESULT ValidatePFMatchmakingGetMatchResult( PFMatchmakingGetMatchResult* result );
    static void LogGetMatchmakingTicketRequest( PlayFab::MatchmakingModels::GetMatchmakingTicketRequest* request, const char* testName );
    static void FillGetMatchmakingTicketRequest( PlayFab::MatchmakingModels::GetMatchmakingTicketRequest* request );
    static HRESULT LogPFMatchmakingGetMatchmakingTicketResult( PFMatchmakingGetMatchmakingTicketResult* result );
    static HRESULT ValidatePFMatchmakingGetMatchmakingTicketResult( PFMatchmakingGetMatchmakingTicketResult* result );
    static void LogGetQueueStatisticsRequest( PlayFab::MatchmakingModels::GetQueueStatisticsRequest* request, const char* testName );
    static void FillGetQueueStatisticsRequest( PlayFab::MatchmakingModels::GetQueueStatisticsRequest* request );
    static HRESULT LogPFMatchmakingGetQueueStatisticsResult( PFMatchmakingGetQueueStatisticsResult* result );
    static HRESULT ValidatePFMatchmakingGetQueueStatisticsResult( PFMatchmakingGetQueueStatisticsResult* result );
    static void LogGetServerBackfillTicketRequest( PlayFab::MatchmakingModels::GetServerBackfillTicketRequest* request, const char* testName );
    static void FillGetServerBackfillTicketRequest( PlayFab::MatchmakingModels::GetServerBackfillTicketRequest* request );
    static HRESULT LogPFMatchmakingGetServerBackfillTicketResult( PFMatchmakingGetServerBackfillTicketResult* result );
    static HRESULT ValidatePFMatchmakingGetServerBackfillTicketResult( PFMatchmakingGetServerBackfillTicketResult* result );
    static void LogJoinMatchmakingTicketRequest( PlayFab::MatchmakingModels::JoinMatchmakingTicketRequest* request, const char* testName );
    static void FillJoinMatchmakingTicketRequest( PlayFab::MatchmakingModels::JoinMatchmakingTicketRequest* request );
    static void LogListMatchmakingTicketsForPlayerRequest( PlayFab::MatchmakingModels::ListMatchmakingTicketsForPlayerRequest* request, const char* testName );
    static void FillListMatchmakingTicketsForPlayerRequest( PlayFab::MatchmakingModels::ListMatchmakingTicketsForPlayerRequest* request );
    static HRESULT LogPFMatchmakingListMatchmakingTicketsForPlayerResult( PFMatchmakingListMatchmakingTicketsForPlayerResult* result );
    static HRESULT ValidatePFMatchmakingListMatchmakingTicketsForPlayerResult( PFMatchmakingListMatchmakingTicketsForPlayerResult* result );
    static void LogListServerBackfillTicketsForPlayerRequest( PlayFab::MatchmakingModels::ListServerBackfillTicketsForPlayerRequest* request, const char* testName );
    static void FillListServerBackfillTicketsForPlayerRequest( PlayFab::MatchmakingModels::ListServerBackfillTicketsForPlayerRequest* request );
    static HRESULT LogPFMatchmakingListServerBackfillTicketsForPlayerResult( PFMatchmakingListServerBackfillTicketsForPlayerResult* result );
    static HRESULT ValidatePFMatchmakingListServerBackfillTicketsForPlayerResult( PFMatchmakingListServerBackfillTicketsForPlayerResult* result );

public:
    PFStateHandle stateHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
