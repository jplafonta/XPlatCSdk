#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Friends/FriendsDataModels.h"

namespace PlayFabUnit
{

class AutoGenFriendsTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestFriendsClientAddFriend(TestContext& testContext); 
    void TestFriendsClientGetFriendsList(TestContext& testContext); 
    void TestFriendsClientRemoveFriend(TestContext& testContext); 
    void TestFriendsClientSetFriendTags(TestContext& testContext); 
    void TestFriendsServerAddFriend(TestContext& testContext); 
    void TestFriendsServerGetFriendsList(TestContext& testContext); 
    void TestFriendsServerRemoveFriend(TestContext& testContext); 
    void TestFriendsServerSetFriendTags(TestContext& testContext); 


protected:
    void AddTests();


    static void LogClientAddFriendRequest( PlayFab::FriendsModels::ClientAddFriendRequest* request, const char* testName );
    static void FillClientAddFriendRequest( PlayFab::FriendsModels::ClientAddFriendRequest* request );
    static HRESULT LogPFFriendsAddFriendResult( PFFriendsAddFriendResult* result );
    static HRESULT ValidatePFFriendsAddFriendResult( PFFriendsAddFriendResult* result );
    static void LogClientGetFriendsListRequest( PlayFab::FriendsModels::ClientGetFriendsListRequest* request, const char* testName );
    static void FillClientGetFriendsListRequest( PlayFab::FriendsModels::ClientGetFriendsListRequest* request );
    static HRESULT LogPFFriendsGetFriendsListResult( PFFriendsGetFriendsListResult* result );
    static HRESULT ValidatePFFriendsGetFriendsListResult( PFFriendsGetFriendsListResult* result );
    static void LogClientRemoveFriendRequest( PlayFab::FriendsModels::ClientRemoveFriendRequest* request, const char* testName );
    static void FillClientRemoveFriendRequest( PlayFab::FriendsModels::ClientRemoveFriendRequest* request );
    static void LogClientSetFriendTagsRequest( PlayFab::FriendsModels::ClientSetFriendTagsRequest* request, const char* testName );
    static void FillClientSetFriendTagsRequest( PlayFab::FriendsModels::ClientSetFriendTagsRequest* request );
    static void LogServerAddFriendRequest( PlayFab::FriendsModels::ServerAddFriendRequest* request, const char* testName );
    static void FillServerAddFriendRequest( PlayFab::FriendsModels::ServerAddFriendRequest* request );
    static void LogServerGetFriendsListRequest( PlayFab::FriendsModels::ServerGetFriendsListRequest* request, const char* testName );
    static void FillServerGetFriendsListRequest( PlayFab::FriendsModels::ServerGetFriendsListRequest* request );
    static void LogServerRemoveFriendRequest( PlayFab::FriendsModels::ServerRemoveFriendRequest* request, const char* testName );
    static void FillServerRemoveFriendRequest( PlayFab::FriendsModels::ServerRemoveFriendRequest* request );
    static void LogServerSetFriendTagsRequest( PlayFab::FriendsModels::ServerSetFriendTagsRequest* request, const char* testName );
    static void FillServerSetFriendTagsRequest( PlayFab::FriendsModels::ServerSetFriendTagsRequest* request );

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
