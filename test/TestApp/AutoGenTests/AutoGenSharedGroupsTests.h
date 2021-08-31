#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/SharedGroups/SharedGroupsDataModels.h"

namespace PlayFabUnit
{

class AutoGenSharedGroupsTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestSharedGroupsAdminSetPublisherData(TestContext& testContext);

    void TestSharedGroupsClientAddSharedGroupMembers(TestContext& testContext);

    void TestSharedGroupsClientCreateSharedGroup(TestContext& testContext);

    void TestSharedGroupsClientGetSharedGroupData(TestContext& testContext);

    void TestSharedGroupsClientRemoveSharedGroupMembers(TestContext& testContext);

    void TestSharedGroupsClientUpdateSharedGroupData(TestContext& testContext);

    void TestSharedGroupsServerAddSharedGroupMembers(TestContext& testContext);

    void TestSharedGroupsServerCreateSharedGroup(TestContext& testContext);

    void TestSharedGroupsServerDeleteSharedGroup(TestContext& testContext);

    void TestSharedGroupsServerGetSharedGroupData(TestContext& testContext);

    void TestSharedGroupsServerRemoveSharedGroupMembers(TestContext& testContext);

    void TestSharedGroupsServerUpdateSharedGroupData(TestContext& testContext);


protected:
    void AddTests();

    static void LogSetPublisherDataRequest( PlayFab::SetPublisherDataRequest* request, const char* testName );
    static void FillSetPublisherDataRequest( PlayFab::SetPublisherDataRequest* request );

    static void LogAddSharedGroupMembersRequest( PlayFab::SharedGroupsModels::AddSharedGroupMembersRequest* request, const char* testName );
    static void FillAddSharedGroupMembersRequest( PlayFab::SharedGroupsModels::AddSharedGroupMembersRequest* request );

    static void LogCreateSharedGroupRequest( PlayFab::SharedGroupsModels::CreateSharedGroupRequest* request, const char* testName );
    static void FillCreateSharedGroupRequest( PlayFab::SharedGroupsModels::CreateSharedGroupRequest* request );
    static HRESULT LogPFSharedGroupsCreateSharedGroupResult( PFSharedGroupsCreateSharedGroupResult* result );
    static HRESULT ValidatePFSharedGroupsCreateSharedGroupResult( PFSharedGroupsCreateSharedGroupResult* result );

    static void LogGetSharedGroupDataRequest( PlayFab::SharedGroupsModels::GetSharedGroupDataRequest* request, const char* testName );
    static void FillGetSharedGroupDataRequest( PlayFab::SharedGroupsModels::GetSharedGroupDataRequest* request );
    static HRESULT LogPFSharedGroupsGetSharedGroupDataResult( PFSharedGroupsGetSharedGroupDataResult* result );
    static HRESULT ValidatePFSharedGroupsGetSharedGroupDataResult( PFSharedGroupsGetSharedGroupDataResult* result );

    static void LogRemoveSharedGroupMembersRequest( PlayFab::SharedGroupsModels::RemoveSharedGroupMembersRequest* request, const char* testName );
    static void FillRemoveSharedGroupMembersRequest( PlayFab::SharedGroupsModels::RemoveSharedGroupMembersRequest* request );

    static void LogUpdateSharedGroupDataRequest( PlayFab::SharedGroupsModels::UpdateSharedGroupDataRequest* request, const char* testName );
    static void FillUpdateSharedGroupDataRequest( PlayFab::SharedGroupsModels::UpdateSharedGroupDataRequest* request );



    static void LogDeleteSharedGroupRequest( PlayFab::SharedGroupsModels::DeleteSharedGroupRequest* request, const char* testName );
    static void FillDeleteSharedGroupRequest( PlayFab::SharedGroupsModels::DeleteSharedGroupRequest* request );




    struct SharedGroupsTestData
    {
        ~SharedGroupsTestData()
        {

        }

    };

    static SharedGroupsTestData testData;

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
