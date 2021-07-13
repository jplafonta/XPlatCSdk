#pragma once

#include "TestCase.h"
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>
#include "../../../code/source/Client/MatchmakerDataModels.h"

namespace PlayFabUnit
{

class AutoGenMatchmakerTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);
    void TestMatchmakerAuthUser(TestContext& testContext); 
    void TestMatchmakerPlayerJoined(TestContext& testContext); 
    void TestMatchmakerPlayerLeft(TestContext& testContext); 
    void TestMatchmakerStartGame(TestContext& testContext); 
    void TestMatchmakerUserInfo(TestContext& testContext); 


protected:
    void AddTests();

    static void LogPlayFabMatchmakerAuthUserRequest( PlayFab::MatchmakerModels::AuthUserRequest* request, const char* testName );
    static void FillPlayFabMatchmakerAuthUserRequest( PlayFab::MatchmakerModels::AuthUserRequest* request );
    static HRESULT LogPlayFabMatchmakerAuthUserResponse( PlayFabMatchmakerAuthUserResponse* result );
    static HRESULT ValidatePlayFabMatchmakerAuthUserResponse( PlayFabMatchmakerAuthUserResponse* result );
    static void LogPlayFabMatchmakerPlayerJoinedRequest( PlayFab::MatchmakerModels::PlayerJoinedRequest* request, const char* testName );
    static void FillPlayFabMatchmakerPlayerJoinedRequest( PlayFab::MatchmakerModels::PlayerJoinedRequest* request );
    static void LogPlayFabMatchmakerPlayerLeftRequest( PlayFab::MatchmakerModels::PlayerLeftRequest* request, const char* testName );
    static void FillPlayFabMatchmakerPlayerLeftRequest( PlayFab::MatchmakerModels::PlayerLeftRequest* request );
    static void LogPlayFabMatchmakerStartGameRequest( PlayFab::MatchmakerModels::StartGameRequest* request, const char* testName );
    static void FillPlayFabMatchmakerStartGameRequest( PlayFab::MatchmakerModels::StartGameRequest* request );
    static HRESULT LogPlayFabMatchmakerStartGameResponse( PlayFabMatchmakerStartGameResponse* result );
    static HRESULT ValidatePlayFabMatchmakerStartGameResponse( PlayFabMatchmakerStartGameResponse* result );
    static void LogPlayFabMatchmakerUserInfoRequest( PlayFab::MatchmakerModels::UserInfoRequest* request, const char* testName );
    static void FillPlayFabMatchmakerUserInfoRequest( PlayFab::MatchmakerModels::UserInfoRequest* request );
    static HRESULT LogPlayFabMatchmakerUserInfoResponse( PlayFabMatchmakerUserInfoResponse* result );
    static HRESULT ValidatePlayFabMatchmakerUserInfoResponse( PlayFabMatchmakerUserInfoResponse* result );


public:
    PlayFabStateHandle stateHandle{ nullptr };
    PlayFabEntityHandle entityHandle{ nullptr };
    PlayFabGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
