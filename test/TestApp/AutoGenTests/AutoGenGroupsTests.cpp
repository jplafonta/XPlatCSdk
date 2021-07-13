#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenGroupsTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenGroupsTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenClientTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenGroupsTests::AddTests()
{
    // Generated tests 
    AddTest("TestGroupsAcceptGroupApplication", &AutoGenGroupsTests::TestGroupsAcceptGroupApplication);
    AddTest("TestGroupsAcceptGroupInvitation", &AutoGenGroupsTests::TestGroupsAcceptGroupInvitation);
    AddTest("TestGroupsAddMembers", &AutoGenGroupsTests::TestGroupsAddMembers);
    AddTest("TestGroupsApplyToGroup", &AutoGenGroupsTests::TestGroupsApplyToGroup);
    AddTest("TestGroupsBlockEntity", &AutoGenGroupsTests::TestGroupsBlockEntity);
    AddTest("TestGroupsChangeMemberRole", &AutoGenGroupsTests::TestGroupsChangeMemberRole);
    AddTest("TestGroupsCreateGroup", &AutoGenGroupsTests::TestGroupsCreateGroup);
    AddTest("TestGroupsCreateRole", &AutoGenGroupsTests::TestGroupsCreateRole);
    AddTest("TestGroupsDeleteGroup", &AutoGenGroupsTests::TestGroupsDeleteGroup);
    AddTest("TestGroupsDeleteRole", &AutoGenGroupsTests::TestGroupsDeleteRole);
    AddTest("TestGroupsGetGroup", &AutoGenGroupsTests::TestGroupsGetGroup);
    AddTest("TestGroupsInviteToGroup", &AutoGenGroupsTests::TestGroupsInviteToGroup);
    AddTest("TestGroupsIsMember", &AutoGenGroupsTests::TestGroupsIsMember);
    AddTest("TestGroupsListGroupApplications", &AutoGenGroupsTests::TestGroupsListGroupApplications);
    AddTest("TestGroupsListGroupBlocks", &AutoGenGroupsTests::TestGroupsListGroupBlocks);
    AddTest("TestGroupsListGroupInvitations", &AutoGenGroupsTests::TestGroupsListGroupInvitations);
    AddTest("TestGroupsListGroupMembers", &AutoGenGroupsTests::TestGroupsListGroupMembers);
    AddTest("TestGroupsListMembership", &AutoGenGroupsTests::TestGroupsListMembership);
    AddTest("TestGroupsListMembershipOpportunities", &AutoGenGroupsTests::TestGroupsListMembershipOpportunities);
    AddTest("TestGroupsRemoveGroupApplication", &AutoGenGroupsTests::TestGroupsRemoveGroupApplication);
    AddTest("TestGroupsRemoveGroupInvitation", &AutoGenGroupsTests::TestGroupsRemoveGroupInvitation);
    AddTest("TestGroupsRemoveMembers", &AutoGenGroupsTests::TestGroupsRemoveMembers);
    AddTest("TestGroupsUnblockEntity", &AutoGenGroupsTests::TestGroupsUnblockEntity);
    AddTest("TestGroupsUpdateGroup", &AutoGenGroupsTests::TestGroupsUpdateGroup);
    AddTest("TestGroupsUpdateRole", &AutoGenGroupsTests::TestGroupsUpdateRole);
}

void AutoGenGroupsTests::ClassSetUp()
{
    HRESULT hr = PlayFabAdminInitialize(testTitleData.titleId.data(), testTitleData.developerSecretKey.data(), nullptr, &stateHandle);
    assert(SUCCEEDED(hr));
    if (SUCCEEDED(hr))
    {
        PlayFabClientLoginWithCustomIDRequest request{};
        request.customId = "CustomId";
        bool createAccount = true;
        request.createAccount = &createAccount;
        request.titleId = testTitleData.titleId.data();

        PlayFabClientGetPlayerCombinedInfoRequestParams combinedInfoRequestParams{};
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
        hr = PlayFabClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PlayFabGetAuthResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PlayFabEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenGroupsTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
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
    FillPlayFabGroupsAcceptGroupApplicationRequest( &request );
    LogPlayFabGroupsAcceptGroupApplicationRequest( &request, "TestGroupsAcceptGroupApplication" );
    HRESULT hr = PlayFabGroupsAcceptGroupApplicationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsAcceptGroupApplicationAsync", hr);
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
    FillPlayFabGroupsAcceptGroupInvitationRequest( &request );
    LogPlayFabGroupsAcceptGroupInvitationRequest( &request, "TestGroupsAcceptGroupInvitation" );
    HRESULT hr = PlayFabGroupsAcceptGroupInvitationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsAcceptGroupInvitationAsync", hr);
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
    FillPlayFabGroupsAddMembersRequest( &request );
    LogPlayFabGroupsAddMembersRequest( &request, "TestGroupsAddMembers" );
    HRESULT hr = PlayFabGroupsAddMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsAddMembersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsApplyToGroup(TestContext& testContext)
{
    struct ApplyToGroupResult : public XAsyncResult
    {
        PlayFabGroupsApplyToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsApplyToGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsApplyToGroupResponse( result );
            return ValidatePlayFabGroupsApplyToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ApplyToGroupResult>>(testContext);

    PlayFab::GroupsModels::ApplyToGroupRequest request;
    FillPlayFabGroupsApplyToGroupRequest( &request );
    LogPlayFabGroupsApplyToGroupRequest( &request, "TestGroupsApplyToGroup" );
    HRESULT hr = PlayFabGroupsApplyToGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsApplyToGroupAsync", hr);
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
    FillPlayFabGroupsBlockEntityRequest( &request );
    LogPlayFabGroupsBlockEntityRequest( &request, "TestGroupsBlockEntity" );
    HRESULT hr = PlayFabGroupsBlockEntityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsBlockEntityAsync", hr);
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
    FillPlayFabGroupsChangeMemberRoleRequest( &request );
    LogPlayFabGroupsChangeMemberRoleRequest( &request, "TestGroupsChangeMemberRole" );
    HRESULT hr = PlayFabGroupsChangeMemberRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsChangeMemberRoleAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsCreateGroup(TestContext& testContext)
{
    struct CreateGroupResult : public XAsyncResult
    {
        PlayFabGroupsCreateGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsCreateGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsCreateGroupResponse( result );
            return ValidatePlayFabGroupsCreateGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateGroupResult>>(testContext);

    PlayFab::GroupsModels::CreateGroupRequest request;
    FillPlayFabGroupsCreateGroupRequest( &request );
    LogPlayFabGroupsCreateGroupRequest( &request, "TestGroupsCreateGroup" );
    HRESULT hr = PlayFabGroupsCreateGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsCreateGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsCreateRole(TestContext& testContext)
{
    struct CreateRoleResult : public XAsyncResult
    {
        PlayFabGroupsCreateGroupRoleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabGroupsCreateRoleGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabGroupsCreateRoleGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsCreateGroupRoleResponse( result );
            return ValidatePlayFabGroupsCreateGroupRoleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateRoleResult>>(testContext);

    PlayFab::GroupsModels::CreateGroupRoleRequest request;
    FillPlayFabGroupsCreateGroupRoleRequest( &request );
    LogPlayFabGroupsCreateGroupRoleRequest( &request, "TestGroupsCreateRole" );
    HRESULT hr = PlayFabGroupsCreateRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsCreateRoleAsync", hr);
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
    FillPlayFabGroupsDeleteGroupRequest( &request );
    LogPlayFabGroupsDeleteGroupRequest( &request, "TestGroupsDeleteGroup" );
    HRESULT hr = PlayFabGroupsDeleteGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsDeleteGroupAsync", hr);
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
    FillPlayFabGroupsDeleteRoleRequest( &request );
    LogPlayFabGroupsDeleteRoleRequest( &request, "TestGroupsDeleteRole" );
    HRESULT hr = PlayFabGroupsDeleteRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsDeleteRoleAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PlayFabGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsGetGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsGetGroupResponse( result );
            return ValidatePlayFabGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillPlayFabGroupsGetGroupRequest( &request );
    LogPlayFabGroupsGetGroupRequest( &request, "TestGroupsGetGroup" );
    HRESULT hr = PlayFabGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsInviteToGroup(TestContext& testContext)
{
    struct InviteToGroupResult : public XAsyncResult
    {
        PlayFabGroupsInviteToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsInviteToGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsInviteToGroupResponse( result );
            return ValidatePlayFabGroupsInviteToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<InviteToGroupResult>>(testContext);

    PlayFab::GroupsModels::InviteToGroupRequest request;
    FillPlayFabGroupsInviteToGroupRequest( &request );
    LogPlayFabGroupsInviteToGroupRequest( &request, "TestGroupsInviteToGroup" );
    HRESULT hr = PlayFabGroupsInviteToGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsInviteToGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsIsMember(TestContext& testContext)
{
    struct IsMemberResult : public XAsyncResult
    {
        PlayFabGroupsIsMemberResponse result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsIsMemberGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsIsMemberResponse( &result );
            return ValidatePlayFabGroupsIsMemberResponse( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<IsMemberResult>>(testContext);

    PlayFab::GroupsModels::IsMemberRequest request;
    FillPlayFabGroupsIsMemberRequest( &request );
    LogPlayFabGroupsIsMemberRequest( &request, "TestGroupsIsMember" );
    HRESULT hr = PlayFabGroupsIsMemberAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsIsMemberAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsListGroupApplications(TestContext& testContext)
{
    struct ListGroupApplicationsResult : public XAsyncResult
    {
        PlayFabGroupsListGroupApplicationsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsListGroupApplicationsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsListGroupApplicationsResponse( result );
            return ValidatePlayFabGroupsListGroupApplicationsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupApplicationsResult>>(testContext);

    PlayFab::GroupsModels::ListGroupApplicationsRequest request;
    FillPlayFabGroupsListGroupApplicationsRequest( &request );
    LogPlayFabGroupsListGroupApplicationsRequest( &request, "TestGroupsListGroupApplications" );
    HRESULT hr = PlayFabGroupsListGroupApplicationsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsListGroupApplicationsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsListGroupBlocks(TestContext& testContext)
{
    struct ListGroupBlocksResult : public XAsyncResult
    {
        PlayFabGroupsListGroupBlocksResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsListGroupBlocksGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsListGroupBlocksResponse( result );
            return ValidatePlayFabGroupsListGroupBlocksResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupBlocksResult>>(testContext);

    PlayFab::GroupsModels::ListGroupBlocksRequest request;
    FillPlayFabGroupsListGroupBlocksRequest( &request );
    LogPlayFabGroupsListGroupBlocksRequest( &request, "TestGroupsListGroupBlocks" );
    HRESULT hr = PlayFabGroupsListGroupBlocksAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsListGroupBlocksAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsListGroupInvitations(TestContext& testContext)
{
    struct ListGroupInvitationsResult : public XAsyncResult
    {
        PlayFabGroupsListGroupInvitationsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsListGroupInvitationsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsListGroupInvitationsResponse( result );
            return ValidatePlayFabGroupsListGroupInvitationsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupInvitationsResult>>(testContext);

    PlayFab::GroupsModels::ListGroupInvitationsRequest request;
    FillPlayFabGroupsListGroupInvitationsRequest( &request );
    LogPlayFabGroupsListGroupInvitationsRequest( &request, "TestGroupsListGroupInvitations" );
    HRESULT hr = PlayFabGroupsListGroupInvitationsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsListGroupInvitationsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsListGroupMembers(TestContext& testContext)
{
    struct ListGroupMembersResult : public XAsyncResult
    {
        PlayFabGroupsListGroupMembersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsListGroupMembersGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsListGroupMembersResponse( result );
            return ValidatePlayFabGroupsListGroupMembersResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupMembersResult>>(testContext);

    PlayFab::GroupsModels::ListGroupMembersRequest request;
    FillPlayFabGroupsListGroupMembersRequest( &request );
    LogPlayFabGroupsListGroupMembersRequest( &request, "TestGroupsListGroupMembers" );
    HRESULT hr = PlayFabGroupsListGroupMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsListGroupMembersAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsListMembership(TestContext& testContext)
{
    struct ListMembershipResult : public XAsyncResult
    {
        PlayFabGroupsListMembershipResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsListMembershipGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsListMembershipResponse( result );
            return ValidatePlayFabGroupsListMembershipResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListMembershipResult>>(testContext);

    PlayFab::GroupsModels::ListMembershipRequest request;
    FillPlayFabGroupsListMembershipRequest( &request );
    LogPlayFabGroupsListMembershipRequest( &request, "TestGroupsListMembership" );
    HRESULT hr = PlayFabGroupsListMembershipAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsListMembershipAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsListMembershipOpportunities(TestContext& testContext)
{
    struct ListMembershipOpportunitiesResult : public XAsyncResult
    {
        PlayFabGroupsListMembershipOpportunitiesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsListMembershipOpportunitiesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsListMembershipOpportunitiesResponse( result );
            return ValidatePlayFabGroupsListMembershipOpportunitiesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListMembershipOpportunitiesResult>>(testContext);

    PlayFab::GroupsModels::ListMembershipOpportunitiesRequest request;
    FillPlayFabGroupsListMembershipOpportunitiesRequest( &request );
    LogPlayFabGroupsListMembershipOpportunitiesRequest( &request, "TestGroupsListMembershipOpportunities" );
    HRESULT hr = PlayFabGroupsListMembershipOpportunitiesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsListMembershipOpportunitiesAsync", hr);
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
    FillPlayFabGroupsRemoveGroupApplicationRequest( &request );
    LogPlayFabGroupsRemoveGroupApplicationRequest( &request, "TestGroupsRemoveGroupApplication" );
    HRESULT hr = PlayFabGroupsRemoveGroupApplicationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsRemoveGroupApplicationAsync", hr);
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
    FillPlayFabGroupsRemoveGroupInvitationRequest( &request );
    LogPlayFabGroupsRemoveGroupInvitationRequest( &request, "TestGroupsRemoveGroupInvitation" );
    HRESULT hr = PlayFabGroupsRemoveGroupInvitationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsRemoveGroupInvitationAsync", hr);
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
    FillPlayFabGroupsRemoveMembersRequest( &request );
    LogPlayFabGroupsRemoveMembersRequest( &request, "TestGroupsRemoveMembers" );
    HRESULT hr = PlayFabGroupsRemoveMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsRemoveMembersAsync", hr);
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
    FillPlayFabGroupsUnblockEntityRequest( &request );
    LogPlayFabGroupsUnblockEntityRequest( &request, "TestGroupsUnblockEntity" );
    HRESULT hr = PlayFabGroupsUnblockEntityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsUnblockEntityAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsUpdateGroup(TestContext& testContext)
{
    struct UpdateGroupResult : public XAsyncResult
    {
        PlayFabGroupsUpdateGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsUpdateGroupGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsUpdateGroupResponse( result );
            return ValidatePlayFabGroupsUpdateGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateGroupResult>>(testContext);

    PlayFab::GroupsModels::UpdateGroupRequest request;
    FillPlayFabGroupsUpdateGroupRequest( &request );
    LogPlayFabGroupsUpdateGroupRequest( &request, "TestGroupsUpdateGroup" );
    HRESULT hr = PlayFabGroupsUpdateGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsUpdateGroupAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenGroupsTests::TestGroupsUpdateRole(TestContext& testContext)
{
    struct UpdateRoleResult : public XAsyncResult
    {
        PlayFabGroupsUpdateGroupRoleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabGroupsUpdateRoleGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabGroupsUpdateGroupRoleResponse( result );
            return ValidatePlayFabGroupsUpdateGroupRoleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateRoleResult>>(testContext);

    PlayFab::GroupsModels::UpdateGroupRoleRequest request;
    FillPlayFabGroupsUpdateGroupRoleRequest( &request );
    LogPlayFabGroupsUpdateGroupRoleRequest( &request, "TestGroupsUpdateRole" );
    HRESULT hr = PlayFabGroupsUpdateRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabGroupsUpdateRoleAsync", hr);
        return;
    }
    async.release(); 
} 


}
