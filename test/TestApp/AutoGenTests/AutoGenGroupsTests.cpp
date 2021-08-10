#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenGroupsTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenGroupsTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenGroupsTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenGroupsTests::AddTests()
{
    // Generated prerequisites
    AddTest("PrerequisiteGroupsCreateGroup", &AutoGenGroupsTests::PrerequisiteGroupsCreateGroup);
    AddTest("PrerequisiteGroupsGetGroup", &AutoGenGroupsTests::PrerequisiteGroupsGetGroup);
    AddTest("PrerequisiteGroupsApplyToGroup", &AutoGenGroupsTests::PrerequisiteGroupsApplyToGroup);
    AddTest("PrerequisiteGroupsInviteToGroup", &AutoGenGroupsTests::PrerequisiteGroupsInviteToGroup);
    AddTest("PrerequisiteGroupsBlockEntity", &AutoGenGroupsTests::PrerequisiteGroupsBlockEntity);

    // Generated tests 
    AddTest("TestGroupsAdminSetPublisherData", &AutoGenGroupsTests::TestGroupsAdminSetPublisherData); // TODO: debug passing test but no data
    //AddTest("TestGroupsClientAddSharedGroupMembers", &AutoGenGroupsTests::TestGroupsClientAddSharedGroupMembers); // TODO: debug failing test
    AddTest("TestGroupsClientCreateSharedGroup", &AutoGenGroupsTests::TestGroupsClientCreateSharedGroup); // TODO: debug passing test but no data
    AddTest("TestGroupsClientGetSharedGroupData", &AutoGenGroupsTests::TestGroupsClientGetSharedGroupData); // TODO: debug passing test but no data
    AddTest("TestGroupsClientRemoveSharedGroupMembers", &AutoGenGroupsTests::TestGroupsClientRemoveSharedGroupMembers); // TODO: debug passing test but no data
    AddTest("TestGroupsClientUpdateSharedGroupData", &AutoGenGroupsTests::TestGroupsClientUpdateSharedGroupData); // TODO: debug passing test but no data
    //AddTest("TestGroupsServerAddSharedGroupMembers", &AutoGenGroupsTests::TestGroupsServerAddSharedGroupMembers); // TODO: debug failing test
    //AddTest("TestGroupsServerCreateSharedGroup", &AutoGenGroupsTests::TestGroupsServerCreateSharedGroup); // TODO: debug failing test
    AddTest("TestGroupsServerDeleteSharedGroup", &AutoGenGroupsTests::TestGroupsServerDeleteSharedGroup); // TODO: debug passing test but no data
    //AddTest("TestGroupsServerGetSharedGroupData", &AutoGenGroupsTests::TestGroupsServerGetSharedGroupData); // TODO: debug failing test
    //AddTest("TestGroupsServerRemoveSharedGroupMembers", &AutoGenGroupsTests::TestGroupsServerRemoveSharedGroupMembers); // TODO: debug failing test
    //AddTest("TestGroupsServerUpdateSharedGroupData", &AutoGenGroupsTests::TestGroupsServerUpdateSharedGroupData); // TODO: debug failing test
    //AddTest("TestGroupsAcceptGroupApplication", &AutoGenGroupsTests::TestGroupsAcceptGroupApplication); // TODO: debug failing test
    //AddTest("TestGroupsAcceptGroupInvitation", &AutoGenGroupsTests::TestGroupsAcceptGroupInvitation); // TODO: debug failing test
    //AddTest("TestGroupsAddMembers", &AutoGenGroupsTests::TestGroupsAddMembers); // TODO: debug failing test
    //AddTest("TestGroupsApplyToGroup", &AutoGenGroupsTests::TestGroupsApplyToGroup); // TODO: debug failing test
    //AddTest("TestGroupsBlockEntity", &AutoGenGroupsTests::TestGroupsBlockEntity); // TODO: debug failing test
    //AddTest("TestGroupsChangeMemberRole", &AutoGenGroupsTests::TestGroupsChangeMemberRole); // TODO: debug failing test
    AddTest("TestGroupsCreateGroup", &AutoGenGroupsTests::TestGroupsCreateGroup);
    AddTest("TestGroupsCreateRole", &AutoGenGroupsTests::TestGroupsCreateRole);
    AddTest("TestGroupsDeleteGroup", &AutoGenGroupsTests::TestGroupsDeleteGroup);
    //AddTest("TestGroupsDeleteRole", &AutoGenGroupsTests::TestGroupsDeleteRole); // TODO: debug failing test
    //AddTest("TestGroupsGetGroup", &AutoGenGroupsTests::TestGroupsGetGroup); // TODO: debug failing test
    //AddTest("TestGroupsInviteToGroup", &AutoGenGroupsTests::TestGroupsInviteToGroup); // TODO: debug failing test
    //AddTest("TestGroupsIsMember", &AutoGenGroupsTests::TestGroupsIsMember); // TODO: debug failing test
    AddTest("TestGroupsListGroupApplications", &AutoGenGroupsTests::TestGroupsListGroupApplications);
    AddTest("TestGroupsListGroupBlocks", &AutoGenGroupsTests::TestGroupsListGroupBlocks);
    AddTest("TestGroupsListGroupInvitations", &AutoGenGroupsTests::TestGroupsListGroupInvitations);
    AddTest("TestGroupsListGroupMembers", &AutoGenGroupsTests::TestGroupsListGroupMembers);
    AddTest("TestGroupsListMembership", &AutoGenGroupsTests::TestGroupsListMembership);
    AddTest("TestGroupsListMembershipOpportunities", &AutoGenGroupsTests::TestGroupsListMembershipOpportunities); // TODO: debug passing test but no data
    //AddTest("TestGroupsRemoveGroupApplication", &AutoGenGroupsTests::TestGroupsRemoveGroupApplication); // TODO: debug failing test
    //AddTest("TestGroupsRemoveGroupInvitation", &AutoGenGroupsTests::TestGroupsRemoveGroupInvitation); // TODO: debug failing test
    //AddTest("TestGroupsRemoveMembers", &AutoGenGroupsTests::TestGroupsRemoveMembers); // TODO: debug failing test
    //AddTest("TestGroupsUnblockEntity", &AutoGenGroupsTests::TestGroupsUnblockEntity); // TODO: debug failing test
    //AddTest("TestGroupsUpdateGroup", &AutoGenGroupsTests::TestGroupsUpdateGroup); // TODO: debug failing test
    //AddTest("TestGroupsUpdateRole", &AutoGenGroupsTests::TestGroupsUpdateRole); // TODO: debug failing test
}

void AutoGenGroupsTests::ClassSetUp()
{
    HRESULT hr = PFAdminInitialize(testTitleData.titleId.data(), testTitleData.developerSecretKey.data(), nullptr, &stateHandle);
    assert(SUCCEEDED(hr));
    if (SUCCEEDED(hr))
    {
        PFAuthenticationLoginWithCustomIDRequest request{};
        request.customId = "CustomId";
        bool createAccount = true;
        request.createAccount = &createAccount;
        request.titleId = testTitleData.titleId.data();

        PFGetPlayerCombinedInfoRequestParams combinedInfoRequestParams{};
        combinedInfoRequestParams.getCharacterInventories = true;
        combinedInfoRequestParams.getCharacterList = true;
        combinedInfoRequestParams.getPlayerProfile = true;
        combinedInfoRequestParams.getPlayerStatistics = true;
        combinedInfoRequestParams.getTitleData = true;
        combinedInfoRequestParams.getUserAccountInfo = true;
        combinedInfoRequestParams.getUserData = true;
        combinedInfoRequestParams.getUserInventory = true;
        combinedInfoRequestParams.getUserReadOnlyData = true;
        combinedInfoRequestParams.getUserVirtualCurrency = true;
        request.infoRequestParameters = &combinedInfoRequestParams;

        XAsyncBlock async{};
        hr = PFAuthenticationClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PFAuthenticationClientLoginGetResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PFEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenGroupsTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenGroupsTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}

void AutoGenGroupsTests::PrerequisiteGroupsCreateGroup(TestContext& prereqContext)
{
    struct CreateGroupResult : public XAsyncResult
    {
        PFGroupsCreateGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsCreateGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPrerequisitePFGroupsCreateGroupResponse( result );
            return StorePrerequisitePFGroupsCreateGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateGroupResult>>(prereqContext);

    PlayFab::GroupsModels::CreateGroupRequest request;
    FillPrerequisiteCreateGroupRequest( &request );
    LogPrerequisiteCreateGroupRequest( &request, "PrerequisiteGroupsCreateGroup" );
    HRESULT hr = PFGroupsCreateGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        prereqContext.Fail("PFGroupsGroupsCreateGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::PrerequisiteGroupsGetGroup(TestContext& prereqContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsGetGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPrerequisitePFGroupsGetGroupResponse( result );
            return StorePrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(prereqContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillPrerequisiteGetGroupRequest( &request );
    LogPrerequisiteGetGroupRequest( &request, "PrerequisiteGroupsGetGroup" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        prereqContext.Fail("PFGroupsGroupsGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::PrerequisiteGroupsApplyToGroup(TestContext& prereqContext)
{
    struct ApplyToGroupResult : public XAsyncResult
    {
        PFGroupsApplyToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsApplyToGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPrerequisitePFGroupsApplyToGroupResponse( result );
            return StorePrerequisitePFGroupsApplyToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ApplyToGroupResult>>(prereqContext);

    PlayFab::GroupsModels::ApplyToGroupRequest request;
    FillPrerequisiteApplyToGroupRequest( &request );
    LogPrerequisiteApplyToGroupRequest( &request, "PrerequisiteGroupsApplyToGroup" );
    HRESULT hr = PFGroupsApplyToGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        prereqContext.Fail("PFGroupsGroupsApplyToGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::PrerequisiteGroupsInviteToGroup(TestContext& prereqContext)
{
    struct InviteToGroupResult : public XAsyncResult
    {
        PFGroupsInviteToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsInviteToGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPrerequisitePFGroupsInviteToGroupResponse( result );
            return StorePrerequisitePFGroupsInviteToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<InviteToGroupResult>>(prereqContext);

    PlayFab::GroupsModels::InviteToGroupRequest request;
    FillPrerequisiteInviteToGroupRequest( &request );
    LogPrerequisiteInviteToGroupRequest( &request, "PrerequisiteGroupsInviteToGroup" );
    HRESULT hr = PFGroupsInviteToGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        prereqContext.Fail("PFGroupsGroupsInviteToGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::PrerequisiteGroupsBlockEntity(TestContext& prereqContext)
{
    struct BlockEntityResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<BlockEntityResult>>(prereqContext);

    PlayFab::GroupsModels::BlockEntityRequest request;
    FillPrerequisiteBlockEntityRequest( &request );
    LogPrerequisiteBlockEntityRequest( &request, "PrerequisiteGroupsBlockEntity" );
    HRESULT hr = PFGroupsBlockEntityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        prereqContext.Fail("PFGroupsGroupsBlockEntityAsync", hr);
        return;
    }
    async.release(); 
} 


void AutoGenGroupsTests::TestGroupsAdminSetPublisherData(TestContext& testContext)
{
    struct AdminSetPublisherDataResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminSetPublisherDataResult>>(testContext);

    PlayFab::SetPublisherDataRequest request;
    FillSetPublisherDataRequest( &request );
    LogSetPublisherDataRequest( &request, "TestGroupsAdminSetPublisherData" );
    HRESULT hr = PFGroupsAdminSetPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAdminSetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsClientAddSharedGroupMembers(TestContext& testContext)
{
    struct ClientAddSharedGroupMembersResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientAddSharedGroupMembersResult>>(testContext);

    PlayFab::GroupsModels::AddSharedGroupMembersRequest request;
    FillAddSharedGroupMembersRequest( &request );
    LogAddSharedGroupMembersRequest( &request, "TestGroupsClientAddSharedGroupMembers" );
    HRESULT hr = PFGroupsClientAddSharedGroupMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsClientAddSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsClientCreateSharedGroup(TestContext& testContext)
{
    struct ClientCreateSharedGroupResult : public XAsyncResult
    {
        PFGroupsCreateSharedGroupResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsClientCreateSharedGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsClientCreateSharedGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsCreateSharedGroupResult( result );
            return ValidatePFGroupsCreateSharedGroupResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientCreateSharedGroupResult>>(testContext);

    PlayFab::GroupsModels::CreateSharedGroupRequest request;
    FillCreateSharedGroupRequest( &request );
    LogCreateSharedGroupRequest( &request, "TestGroupsClientCreateSharedGroup" );
    HRESULT hr = PFGroupsClientCreateSharedGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsClientCreateSharedGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsClientGetSharedGroupData(TestContext& testContext)
{
    struct ClientGetSharedGroupDataResult : public XAsyncResult
    {
        PFGroupsGetSharedGroupDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsClientGetSharedGroupDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsGetSharedGroupDataResult( result );
            return ValidatePFGroupsGetSharedGroupDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetSharedGroupDataResult>>(testContext);

    PlayFab::GroupsModels::GetSharedGroupDataRequest request;
    FillGetSharedGroupDataRequest( &request );
    LogGetSharedGroupDataRequest( &request, "TestGroupsClientGetSharedGroupData" );
    HRESULT hr = PFGroupsClientGetSharedGroupDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsClientGetSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsClientRemoveSharedGroupMembers(TestContext& testContext)
{
    struct ClientRemoveSharedGroupMembersResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientRemoveSharedGroupMembersResult>>(testContext);

    PlayFab::GroupsModels::RemoveSharedGroupMembersRequest request;
    FillRemoveSharedGroupMembersRequest( &request );
    LogRemoveSharedGroupMembersRequest( &request, "TestGroupsClientRemoveSharedGroupMembers" );
    HRESULT hr = PFGroupsClientRemoveSharedGroupMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsClientRemoveSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsClientUpdateSharedGroupData(TestContext& testContext)
{
    struct ClientUpdateSharedGroupDataResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientUpdateSharedGroupDataResult>>(testContext);

    PlayFab::GroupsModels::UpdateSharedGroupDataRequest request;
    FillUpdateSharedGroupDataRequest( &request );
    LogUpdateSharedGroupDataRequest( &request, "TestGroupsClientUpdateSharedGroupData" );
    HRESULT hr = PFGroupsClientUpdateSharedGroupDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsClientUpdateSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsServerAddSharedGroupMembers(TestContext& testContext)
{
    struct ServerAddSharedGroupMembersResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerAddSharedGroupMembersResult>>(testContext);

    PlayFab::GroupsModels::AddSharedGroupMembersRequest request;
    FillAddSharedGroupMembersRequest( &request );
    LogAddSharedGroupMembersRequest( &request, "TestGroupsServerAddSharedGroupMembers" );
    HRESULT hr = PFGroupsServerAddSharedGroupMembersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsServerAddSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsServerCreateSharedGroup(TestContext& testContext)
{
    struct ServerCreateSharedGroupResult : public XAsyncResult
    {
        PFGroupsCreateSharedGroupResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsServerCreateSharedGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsServerCreateSharedGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsCreateSharedGroupResult( result );
            return ValidatePFGroupsCreateSharedGroupResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerCreateSharedGroupResult>>(testContext);

    PlayFab::GroupsModels::CreateSharedGroupRequest request;
    FillCreateSharedGroupRequest( &request );
    LogCreateSharedGroupRequest( &request, "TestGroupsServerCreateSharedGroup" );
    HRESULT hr = PFGroupsServerCreateSharedGroupAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsServerCreateSharedGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsServerDeleteSharedGroup(TestContext& testContext)
{
    struct ServerDeleteSharedGroupResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerDeleteSharedGroupResult>>(testContext);

    PlayFab::GroupsModels::DeleteSharedGroupRequest request;
    FillDeleteSharedGroupRequest( &request );
    LogDeleteSharedGroupRequest( &request, "TestGroupsServerDeleteSharedGroup" );
    HRESULT hr = PFGroupsServerDeleteSharedGroupAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsServerDeleteSharedGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsServerGetSharedGroupData(TestContext& testContext)
{
    struct ServerGetSharedGroupDataResult : public XAsyncResult
    {
        PFGroupsGetSharedGroupDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsServerGetSharedGroupDataGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsGetSharedGroupDataResult( result );
            return ValidatePFGroupsGetSharedGroupDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetSharedGroupDataResult>>(testContext);

    PlayFab::GroupsModels::GetSharedGroupDataRequest request;
    FillGetSharedGroupDataRequest( &request );
    LogGetSharedGroupDataRequest( &request, "TestGroupsServerGetSharedGroupData" );
    HRESULT hr = PFGroupsServerGetSharedGroupDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsServerGetSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsServerRemoveSharedGroupMembers(TestContext& testContext)
{
    struct ServerRemoveSharedGroupMembersResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerRemoveSharedGroupMembersResult>>(testContext);

    PlayFab::GroupsModels::RemoveSharedGroupMembersRequest request;
    FillRemoveSharedGroupMembersRequest( &request );
    LogRemoveSharedGroupMembersRequest( &request, "TestGroupsServerRemoveSharedGroupMembers" );
    HRESULT hr = PFGroupsServerRemoveSharedGroupMembersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsServerRemoveSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsServerUpdateSharedGroupData(TestContext& testContext)
{
    struct ServerUpdateSharedGroupDataResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateSharedGroupDataResult>>(testContext);

    PlayFab::GroupsModels::UpdateSharedGroupDataRequest request;
    FillUpdateSharedGroupDataRequest( &request );
    LogUpdateSharedGroupDataRequest( &request, "TestGroupsServerUpdateSharedGroupData" );
    HRESULT hr = PFGroupsServerUpdateSharedGroupDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsServerUpdateSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsAcceptGroupApplication(TestContext& testContext)
{
    struct AcceptGroupApplicationResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<AcceptGroupApplicationResult>>(testContext);

    PlayFab::GroupsModels::AcceptGroupApplicationRequest request;
    FillAcceptGroupApplicationRequest( &request );
    LogAcceptGroupApplicationRequest( &request, "TestGroupsAcceptGroupApplication" );
    HRESULT hr = PFGroupsAcceptGroupApplicationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAcceptGroupApplicationAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsAcceptGroupInvitation(TestContext& testContext)
{
    struct AcceptGroupInvitationResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<AcceptGroupInvitationResult>>(testContext);

    PlayFab::GroupsModels::AcceptGroupInvitationRequest request;
    FillAcceptGroupInvitationRequest( &request );
    LogAcceptGroupInvitationRequest( &request, "TestGroupsAcceptGroupInvitation" );
    HRESULT hr = PFGroupsAcceptGroupInvitationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAcceptGroupInvitationAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsAddMembers(TestContext& testContext)
{
    struct AddMembersResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<AddMembersResult>>(testContext);

    PlayFab::GroupsModels::AddMembersRequest request;
    FillAddMembersRequest( &request );
    LogAddMembersRequest( &request, "TestGroupsAddMembers" );
    HRESULT hr = PFGroupsAddMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAddMembersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsApplyToGroup(TestContext& testContext)
{
    struct ApplyToGroupResult : public XAsyncResult
    {
        PFGroupsApplyToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsApplyToGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsApplyToGroupResponse( result );
            return ValidatePFGroupsApplyToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ApplyToGroupResult>>(testContext);

    PlayFab::GroupsModels::ApplyToGroupRequest request;
    FillApplyToGroupRequest( &request );
    LogApplyToGroupRequest( &request, "TestGroupsApplyToGroup" );
    HRESULT hr = PFGroupsApplyToGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsApplyToGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsBlockEntity(TestContext& testContext)
{
    struct BlockEntityResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<BlockEntityResult>>(testContext);

    PlayFab::GroupsModels::BlockEntityRequest request;
    FillBlockEntityRequest( &request );
    LogBlockEntityRequest( &request, "TestGroupsBlockEntity" );
    HRESULT hr = PFGroupsBlockEntityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsBlockEntityAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsChangeMemberRole(TestContext& testContext)
{
    struct ChangeMemberRoleResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ChangeMemberRoleResult>>(testContext);

    PlayFab::GroupsModels::ChangeMemberRoleRequest request;
    FillChangeMemberRoleRequest( &request );
    LogChangeMemberRoleRequest( &request, "TestGroupsChangeMemberRole" );
    HRESULT hr = PFGroupsChangeMemberRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsChangeMemberRoleAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsCreateGroup(TestContext& testContext)
{
    struct CreateGroupResult : public XAsyncResult
    {
        PFGroupsCreateGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsCreateGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsCreateGroupResponse( result );
            return ValidatePFGroupsCreateGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateGroupResult>>(testContext);

    PlayFab::GroupsModels::CreateGroupRequest request;
    FillCreateGroupRequest( &request );
    LogCreateGroupRequest( &request, "TestGroupsCreateGroup" );
    HRESULT hr = PFGroupsCreateGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsCreateGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsCreateRole(TestContext& testContext)
{
    struct CreateRoleResult : public XAsyncResult
    {
        PFGroupsCreateGroupRoleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsCreateRoleGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsCreateRoleGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsCreateGroupRoleResponse( result );
            return ValidatePFGroupsCreateGroupRoleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateRoleResult>>(testContext);

    PlayFab::GroupsModels::CreateGroupRoleRequest request;
    FillCreateGroupRoleRequest( &request );
    LogCreateGroupRoleRequest( &request, "TestGroupsCreateRole" );
    HRESULT hr = PFGroupsCreateRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsCreateRoleAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsDeleteGroup(TestContext& testContext)
{
    struct DeleteGroupResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<DeleteGroupResult>>(testContext);

    PlayFab::GroupsModels::DeleteGroupRequest request;
    FillDeleteGroupRequest( &request );
    LogDeleteGroupRequest( &request, "TestGroupsDeleteGroup" );
    HRESULT hr = PFGroupsDeleteGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsDeleteGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsDeleteRole(TestContext& testContext)
{
    struct DeleteRoleResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<DeleteRoleResult>>(testContext);

    PlayFab::GroupsModels::DeleteRoleRequest request;
    FillDeleteRoleRequest( &request );
    LogDeleteRoleRequest( &request, "TestGroupsDeleteRole" );
    HRESULT hr = PFGroupsDeleteRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsDeleteRoleAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsGetGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return ValidatePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsGetGroup" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsInviteToGroup(TestContext& testContext)
{
    struct InviteToGroupResult : public XAsyncResult
    {
        PFGroupsInviteToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsInviteToGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsInviteToGroupResponse( result );
            return ValidatePFGroupsInviteToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<InviteToGroupResult>>(testContext);

    PlayFab::GroupsModels::InviteToGroupRequest request;
    FillInviteToGroupRequest( &request );
    LogInviteToGroupRequest( &request, "TestGroupsInviteToGroup" );
    HRESULT hr = PFGroupsInviteToGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsInviteToGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsIsMember(TestContext& testContext)
{
    struct IsMemberResult : public XAsyncResult
    {
        PFGroupsIsMemberResponse result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsIsMemberGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsIsMemberResponse( &result );
            return ValidatePFGroupsIsMemberResponse( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<IsMemberResult>>(testContext);

    PlayFab::GroupsModels::IsMemberRequest request;
    FillIsMemberRequest( &request );
    LogIsMemberRequest( &request, "TestGroupsIsMember" );
    HRESULT hr = PFGroupsIsMemberAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsIsMemberAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListGroupApplications(TestContext& testContext)
{
    struct ListGroupApplicationsResult : public XAsyncResult
    {
        PFGroupsListGroupApplicationsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsListGroupApplicationsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListGroupApplicationsResponse( result );
            return ValidatePFGroupsListGroupApplicationsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupApplicationsResult>>(testContext);

    PlayFab::GroupsModels::ListGroupApplicationsRequest request;
    FillListGroupApplicationsRequest( &request );
    LogListGroupApplicationsRequest( &request, "TestGroupsListGroupApplications" );
    HRESULT hr = PFGroupsListGroupApplicationsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupApplicationsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListGroupBlocks(TestContext& testContext)
{
    struct ListGroupBlocksResult : public XAsyncResult
    {
        PFGroupsListGroupBlocksResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsListGroupBlocksGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListGroupBlocksResponse( result );
            return ValidatePFGroupsListGroupBlocksResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupBlocksResult>>(testContext);

    PlayFab::GroupsModels::ListGroupBlocksRequest request;
    FillListGroupBlocksRequest( &request );
    LogListGroupBlocksRequest( &request, "TestGroupsListGroupBlocks" );
    HRESULT hr = PFGroupsListGroupBlocksAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupBlocksAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListGroupInvitations(TestContext& testContext)
{
    struct ListGroupInvitationsResult : public XAsyncResult
    {
        PFGroupsListGroupInvitationsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsListGroupInvitationsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListGroupInvitationsResponse( result );
            return ValidatePFGroupsListGroupInvitationsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupInvitationsResult>>(testContext);

    PlayFab::GroupsModels::ListGroupInvitationsRequest request;
    FillListGroupInvitationsRequest( &request );
    LogListGroupInvitationsRequest( &request, "TestGroupsListGroupInvitations" );
    HRESULT hr = PFGroupsListGroupInvitationsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupInvitationsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListGroupMembers(TestContext& testContext)
{
    struct ListGroupMembersResult : public XAsyncResult
    {
        PFGroupsListGroupMembersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsListGroupMembersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListGroupMembersResponse( result );
            return ValidatePFGroupsListGroupMembersResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupMembersResult>>(testContext);

    PlayFab::GroupsModels::ListGroupMembersRequest request;
    FillListGroupMembersRequest( &request );
    LogListGroupMembersRequest( &request, "TestGroupsListGroupMembers" );
    HRESULT hr = PFGroupsListGroupMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupMembersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListMembership(TestContext& testContext)
{
    struct ListMembershipResult : public XAsyncResult
    {
        PFGroupsListMembershipResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsListMembershipGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListMembershipResponse( result );
            return ValidatePFGroupsListMembershipResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListMembershipResult>>(testContext);

    PlayFab::GroupsModels::ListMembershipRequest request;
    FillListMembershipRequest( &request );
    LogListMembershipRequest( &request, "TestGroupsListMembership" );
    HRESULT hr = PFGroupsListMembershipAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListMembershipAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListMembershipOpportunities(TestContext& testContext)
{
    struct ListMembershipOpportunitiesResult : public XAsyncResult
    {
        PFGroupsListMembershipOpportunitiesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsListMembershipOpportunitiesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListMembershipOpportunitiesResponse( result );
            return ValidatePFGroupsListMembershipOpportunitiesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListMembershipOpportunitiesResult>>(testContext);

    PlayFab::GroupsModels::ListMembershipOpportunitiesRequest request;
    FillListMembershipOpportunitiesRequest( &request );
    LogListMembershipOpportunitiesRequest( &request, "TestGroupsListMembershipOpportunities" );
    HRESULT hr = PFGroupsListMembershipOpportunitiesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListMembershipOpportunitiesAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsRemoveGroupApplication(TestContext& testContext)
{
    struct RemoveGroupApplicationResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<RemoveGroupApplicationResult>>(testContext);

    PlayFab::GroupsModels::RemoveGroupApplicationRequest request;
    FillRemoveGroupApplicationRequest( &request );
    LogRemoveGroupApplicationRequest( &request, "TestGroupsRemoveGroupApplication" );
    HRESULT hr = PFGroupsRemoveGroupApplicationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveGroupApplicationAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsRemoveGroupInvitation(TestContext& testContext)
{
    struct RemoveGroupInvitationResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<RemoveGroupInvitationResult>>(testContext);

    PlayFab::GroupsModels::RemoveGroupInvitationRequest request;
    FillRemoveGroupInvitationRequest( &request );
    LogRemoveGroupInvitationRequest( &request, "TestGroupsRemoveGroupInvitation" );
    HRESULT hr = PFGroupsRemoveGroupInvitationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveGroupInvitationAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsRemoveMembers(TestContext& testContext)
{
    struct RemoveMembersResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<RemoveMembersResult>>(testContext);

    PlayFab::GroupsModels::RemoveMembersRequest request;
    FillRemoveMembersRequest( &request );
    LogRemoveMembersRequest( &request, "TestGroupsRemoveMembers" );
    HRESULT hr = PFGroupsRemoveMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveMembersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsUnblockEntity(TestContext& testContext)
{
    struct UnblockEntityResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<UnblockEntityResult>>(testContext);

    PlayFab::GroupsModels::UnblockEntityRequest request;
    FillUnblockEntityRequest( &request );
    LogUnblockEntityRequest( &request, "TestGroupsUnblockEntity" );
    HRESULT hr = PFGroupsUnblockEntityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUnblockEntityAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsUpdateGroup(TestContext& testContext)
{
    struct UpdateGroupResult : public XAsyncResult
    {
        PFGroupsUpdateGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsUpdateGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsUpdateGroupResponse( result );
            return ValidatePFGroupsUpdateGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateGroupResult>>(testContext);

    PlayFab::GroupsModels::UpdateGroupRequest request;
    FillUpdateGroupRequest( &request );
    LogUpdateGroupRequest( &request, "TestGroupsUpdateGroup" );
    HRESULT hr = PFGroupsUpdateGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUpdateGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsUpdateRole(TestContext& testContext)
{
    struct UpdateRoleResult : public XAsyncResult
    {
        PFGroupsUpdateGroupRoleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsUpdateRoleGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsUpdateGroupRoleResponse( result );
            return ValidatePFGroupsUpdateGroupRoleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateRoleResult>>(testContext);

    PlayFab::GroupsModels::UpdateGroupRoleRequest request;
    FillUpdateGroupRoleRequest( &request );
    LogUpdateGroupRoleRequest( &request, "TestGroupsUpdateRole" );
    HRESULT hr = PFGroupsUpdateRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUpdateRoleAsync", hr);
        return;
    }
    async.release(); 
} 

}
