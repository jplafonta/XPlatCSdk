#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/GameServer/GameServerDataModels.h"

namespace PlayFabUnit
{

class AutoGenGameServerTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestGameServerAdminAddServerBuild(TestContext& testContext);

    void TestGameServerAdminGetServerBuildInfo(TestContext& testContext);

    void TestGameServerAdminGetServerBuildUploadUrl(TestContext& testContext);

    void TestGameServerAdminListServerBuilds(TestContext& testContext);

    void TestGameServerAdminModifyServerBuild(TestContext& testContext);

    void TestGameServerAdminRemoveServerBuild(TestContext& testContext);


protected:
    void AddTests();

    static void LogAddServerBuildRequest( PlayFab::GameServerModels::AddServerBuildRequest* request, const char* testName );
    static void FillAddServerBuildRequest( PlayFab::GameServerModels::AddServerBuildRequest* request );
    static HRESULT LogPFGameServerAddServerBuildResult( PFGameServerAddServerBuildResult* result );
    static HRESULT ValidatePFGameServerAddServerBuildResult( PFGameServerAddServerBuildResult* result );

    static void LogGetServerBuildInfoRequest( PlayFab::GameServerModels::GetServerBuildInfoRequest* request, const char* testName );
    static void FillGetServerBuildInfoRequest( PlayFab::GameServerModels::GetServerBuildInfoRequest* request );
    static HRESULT LogPFGameServerGetServerBuildInfoResult( PFGameServerGetServerBuildInfoResult* result );
    static HRESULT ValidatePFGameServerGetServerBuildInfoResult( PFGameServerGetServerBuildInfoResult* result );

    static void LogGetServerBuildUploadURLRequest( PlayFab::GameServerModels::GetServerBuildUploadURLRequest* request, const char* testName );
    static void FillGetServerBuildUploadURLRequest( PlayFab::GameServerModels::GetServerBuildUploadURLRequest* request );
    static HRESULT LogPFGameServerGetServerBuildUploadURLResult( PFGameServerGetServerBuildUploadURLResult* result );
    static HRESULT ValidatePFGameServerGetServerBuildUploadURLResult( PFGameServerGetServerBuildUploadURLResult* result );

    static HRESULT LogPFGameServerListBuildsResult( PFGameServerListBuildsResult* result );
    static HRESULT ValidatePFGameServerListBuildsResult( PFGameServerListBuildsResult* result );

    static void LogModifyServerBuildRequest( PlayFab::GameServerModels::ModifyServerBuildRequest* request, const char* testName );
    static void FillModifyServerBuildRequest( PlayFab::GameServerModels::ModifyServerBuildRequest* request );
    static HRESULT LogPFGameServerModifyServerBuildResult( PFGameServerModifyServerBuildResult* result );
    static HRESULT ValidatePFGameServerModifyServerBuildResult( PFGameServerModifyServerBuildResult* result );

    static void LogRemoveServerBuildRequest( PlayFab::GameServerModels::RemoveServerBuildRequest* request, const char* testName );
    static void FillRemoveServerBuildRequest( PlayFab::GameServerModels::RemoveServerBuildRequest* request );

    struct GameServerTestData
    {
        ~GameServerTestData()
        {

        }

    };

    static GameServerTestData testData;

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
