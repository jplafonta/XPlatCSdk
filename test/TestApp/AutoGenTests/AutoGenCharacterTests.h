#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Character/CharacterDataModels.h"

namespace PlayFabUnit
{

class AutoGenCharacterTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestCharacterAdminResetCharacterStatistics(TestContext& testContext); 
    void TestCharacterClientGetAllUsersCharacters(TestContext& testContext); 
    void TestCharacterClientGetCharacterData(TestContext& testContext); 
    void TestCharacterClientGetCharacterLeaderboard(TestContext& testContext); 
    void TestCharacterClientGetCharacterReadOnlyData(TestContext& testContext); 
    void TestCharacterClientGetCharacterStatistics(TestContext& testContext); 
    void TestCharacterClientGetLeaderboardAroundCharacter(TestContext& testContext); 
    void TestCharacterClientGetLeaderboardForUserCharacters(TestContext& testContext); 
    void TestCharacterClientGrantCharacterToUser(TestContext& testContext); 
    void TestCharacterClientUpdateCharacterData(TestContext& testContext); 
    void TestCharacterClientUpdateCharacterStatistics(TestContext& testContext); 
    void TestCharacterServerDeleteCharacterFromUser(TestContext& testContext); 
    void TestCharacterServerGetAllUsersCharacters(TestContext& testContext); 
    void TestCharacterServerGetCharacterData(TestContext& testContext); 
    void TestCharacterServerGetCharacterInternalData(TestContext& testContext); 
    void TestCharacterServerGetCharacterLeaderboard(TestContext& testContext); 
    void TestCharacterServerGetCharacterReadOnlyData(TestContext& testContext); 
    void TestCharacterServerGetCharacterStatistics(TestContext& testContext); 
    void TestCharacterServerGetLeaderboardAroundCharacter(TestContext& testContext); 
    void TestCharacterServerGetLeaderboardForUserCharacters(TestContext& testContext); 
    void TestCharacterServerGrantCharacterToUser(TestContext& testContext); 
    void TestCharacterServerUpdateCharacterData(TestContext& testContext); 
    void TestCharacterServerUpdateCharacterInternalData(TestContext& testContext); 
    void TestCharacterServerUpdateCharacterReadOnlyData(TestContext& testContext); 
    void TestCharacterServerUpdateCharacterStatistics(TestContext& testContext); 


protected:
    void AddTests();


    static void LogResetCharacterStatisticsRequest( PlayFab::CharacterModels::ResetCharacterStatisticsRequest* request, const char* testName );
    static void FillResetCharacterStatisticsRequest( PlayFab::CharacterModels::ResetCharacterStatisticsRequest* request );
    static void LogListUsersCharactersRequest( PlayFab::CharacterModels::ListUsersCharactersRequest* request, const char* testName );
    static void FillListUsersCharactersRequest( PlayFab::CharacterModels::ListUsersCharactersRequest* request );
    static HRESULT LogPFCharacterListUsersCharactersResult( PFCharacterListUsersCharactersResult* result );
    static HRESULT ValidatePFCharacterListUsersCharactersResult( PFCharacterListUsersCharactersResult* result );
    static void LogGetCharacterDataRequest( PlayFab::CharacterModels::GetCharacterDataRequest* request, const char* testName );
    static void FillGetCharacterDataRequest( PlayFab::CharacterModels::GetCharacterDataRequest* request );
    static HRESULT LogPFCharacterClientGetCharacterDataResult( PFCharacterClientGetCharacterDataResult* result );
    static HRESULT ValidatePFCharacterClientGetCharacterDataResult( PFCharacterClientGetCharacterDataResult* result );
    static void LogGetCharacterLeaderboardRequest( PlayFab::CharacterModels::GetCharacterLeaderboardRequest* request, const char* testName );
    static void FillGetCharacterLeaderboardRequest( PlayFab::CharacterModels::GetCharacterLeaderboardRequest* request );
    static HRESULT LogPFCharacterGetCharacterLeaderboardResult( PFCharacterGetCharacterLeaderboardResult* result );
    static HRESULT ValidatePFCharacterGetCharacterLeaderboardResult( PFCharacterGetCharacterLeaderboardResult* result );
    static void LogClientGetCharacterStatisticsRequest( PlayFab::CharacterModels::ClientGetCharacterStatisticsRequest* request, const char* testName );
    static void FillClientGetCharacterStatisticsRequest( PlayFab::CharacterModels::ClientGetCharacterStatisticsRequest* request );
    static HRESULT LogPFCharacterClientGetCharacterStatisticsResult( PFCharacterClientGetCharacterStatisticsResult* result );
    static HRESULT ValidatePFCharacterClientGetCharacterStatisticsResult( PFCharacterClientGetCharacterStatisticsResult* result );
    static void LogClientGetLeaderboardAroundCharacterRequest( PlayFab::CharacterModels::ClientGetLeaderboardAroundCharacterRequest* request, const char* testName );
    static void FillClientGetLeaderboardAroundCharacterRequest( PlayFab::CharacterModels::ClientGetLeaderboardAroundCharacterRequest* request );
    static HRESULT LogPFCharacterGetLeaderboardAroundCharacterResult( PFCharacterGetLeaderboardAroundCharacterResult* result );
    static HRESULT ValidatePFCharacterGetLeaderboardAroundCharacterResult( PFCharacterGetLeaderboardAroundCharacterResult* result );
    static void LogClientGetLeaderboardForUsersCharactersRequest( PlayFab::CharacterModels::ClientGetLeaderboardForUsersCharactersRequest* request, const char* testName );
    static void FillClientGetLeaderboardForUsersCharactersRequest( PlayFab::CharacterModels::ClientGetLeaderboardForUsersCharactersRequest* request );
    static HRESULT LogPFCharacterGetLeaderboardForUsersCharactersResult( PFCharacterGetLeaderboardForUsersCharactersResult* result );
    static HRESULT ValidatePFCharacterGetLeaderboardForUsersCharactersResult( PFCharacterGetLeaderboardForUsersCharactersResult* result );
    static void LogClientGrantCharacterToUserRequest( PlayFab::CharacterModels::ClientGrantCharacterToUserRequest* request, const char* testName );
    static void FillClientGrantCharacterToUserRequest( PlayFab::CharacterModels::ClientGrantCharacterToUserRequest* request );
    static HRESULT LogPFCharacterClientGrantCharacterToUserResult( PFCharacterClientGrantCharacterToUserResult* result );
    static HRESULT ValidatePFCharacterClientGrantCharacterToUserResult( PFCharacterClientGrantCharacterToUserResult* result );
    static void LogClientUpdateCharacterDataRequest( PlayFab::CharacterModels::ClientUpdateCharacterDataRequest* request, const char* testName );
    static void FillClientUpdateCharacterDataRequest( PlayFab::CharacterModels::ClientUpdateCharacterDataRequest* request );
    static HRESULT LogPFCharacterUpdateCharacterDataResult( PFCharacterUpdateCharacterDataResult* result );
    static HRESULT ValidatePFCharacterUpdateCharacterDataResult( PFCharacterUpdateCharacterDataResult* result );
    static void LogClientUpdateCharacterStatisticsRequest( PlayFab::CharacterModels::ClientUpdateCharacterStatisticsRequest* request, const char* testName );
    static void FillClientUpdateCharacterStatisticsRequest( PlayFab::CharacterModels::ClientUpdateCharacterStatisticsRequest* request );
    static void LogDeleteCharacterFromUserRequest( PlayFab::CharacterModels::DeleteCharacterFromUserRequest* request, const char* testName );
    static void FillDeleteCharacterFromUserRequest( PlayFab::CharacterModels::DeleteCharacterFromUserRequest* request );
    static HRESULT LogPFCharacterServerGetCharacterDataResult( PFCharacterServerGetCharacterDataResult* result );
    static HRESULT ValidatePFCharacterServerGetCharacterDataResult( PFCharacterServerGetCharacterDataResult* result );
    static void LogServerGetCharacterStatisticsRequest( PlayFab::CharacterModels::ServerGetCharacterStatisticsRequest* request, const char* testName );
    static void FillServerGetCharacterStatisticsRequest( PlayFab::CharacterModels::ServerGetCharacterStatisticsRequest* request );
    static HRESULT LogPFCharacterServerGetCharacterStatisticsResult( PFCharacterServerGetCharacterStatisticsResult* result );
    static HRESULT ValidatePFCharacterServerGetCharacterStatisticsResult( PFCharacterServerGetCharacterStatisticsResult* result );
    static void LogServerGetLeaderboardAroundCharacterRequest( PlayFab::CharacterModels::ServerGetLeaderboardAroundCharacterRequest* request, const char* testName );
    static void FillServerGetLeaderboardAroundCharacterRequest( PlayFab::CharacterModels::ServerGetLeaderboardAroundCharacterRequest* request );
    static void LogServerGetLeaderboardForUsersCharactersRequest( PlayFab::CharacterModels::ServerGetLeaderboardForUsersCharactersRequest* request, const char* testName );
    static void FillServerGetLeaderboardForUsersCharactersRequest( PlayFab::CharacterModels::ServerGetLeaderboardForUsersCharactersRequest* request );
    static void LogServerGrantCharacterToUserRequest( PlayFab::CharacterModels::ServerGrantCharacterToUserRequest* request, const char* testName );
    static void FillServerGrantCharacterToUserRequest( PlayFab::CharacterModels::ServerGrantCharacterToUserRequest* request );
    static HRESULT LogPFCharacterServerGrantCharacterToUserResult( PFCharacterServerGrantCharacterToUserResult* result );
    static HRESULT ValidatePFCharacterServerGrantCharacterToUserResult( PFCharacterServerGrantCharacterToUserResult* result );
    static void LogServerUpdateCharacterDataRequest( PlayFab::CharacterModels::ServerUpdateCharacterDataRequest* request, const char* testName );
    static void FillServerUpdateCharacterDataRequest( PlayFab::CharacterModels::ServerUpdateCharacterDataRequest* request );
    static void LogServerUpdateCharacterStatisticsRequest( PlayFab::CharacterModels::ServerUpdateCharacterStatisticsRequest* request, const char* testName );
    static void FillServerUpdateCharacterStatisticsRequest( PlayFab::CharacterModels::ServerUpdateCharacterStatisticsRequest* request );

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
