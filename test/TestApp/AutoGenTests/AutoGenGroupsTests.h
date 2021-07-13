#pragma once

#include "TestCase.h"
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>
#include "../../../code/source/Client/GroupsDataModels.h"

namespace PlayFabUnit
{

class AutoGenGroupsTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);
    void TestGroupsAcceptGroupApplication(TestContext& testContext); 
    void TestGroupsAcceptGroupInvitation(TestContext& testContext); 
    void TestGroupsAddMembers(TestContext& testContext); 
    void TestGroupsApplyToGroup(TestContext& testContext); 
    void TestGroupsBlockEntity(TestContext& testContext); 
    void TestGroupsChangeMemberRole(TestContext& testContext); 
    void TestGroupsCreateGroup(TestContext& testContext); 
    void TestGroupsCreateRole(TestContext& testContext); 
    void TestGroupsDeleteGroup(TestContext& testContext); 
    void TestGroupsDeleteRole(TestContext& testContext); 
    void TestGroupsGetGroup(TestContext& testContext); 
    void TestGroupsInviteToGroup(TestContext& testContext); 
    void TestGroupsIsMember(TestContext& testContext); 
    void TestGroupsListGroupApplications(TestContext& testContext); 
    void TestGroupsListGroupBlocks(TestContext& testContext); 
    void TestGroupsListGroupInvitations(TestContext& testContext); 
    void TestGroupsListGroupMembers(TestContext& testContext); 
    void TestGroupsListMembership(TestContext& testContext); 
    void TestGroupsListMembershipOpportunities(TestContext& testContext); 
    void TestGroupsRemoveGroupApplication(TestContext& testContext); 
    void TestGroupsRemoveGroupInvitation(TestContext& testContext); 
    void TestGroupsRemoveMembers(TestContext& testContext); 
    void TestGroupsUnblockEntity(TestContext& testContext); 
    void TestGroupsUpdateGroup(TestContext& testContext); 
    void TestGroupsUpdateRole(TestContext& testContext); 


protected:
    void AddTests();

    static void LogPlayFabGroupsAcceptGroupApplicationRequest( PlayFab::GroupsModels::AcceptGroupApplicationRequest* request, const char* testName );
    static void FillPlayFabGroupsAcceptGroupApplicationRequest( PlayFab::GroupsModels::AcceptGroupApplicationRequest* request );
    static void LogPlayFabGroupsAcceptGroupInvitationRequest( PlayFab::GroupsModels::AcceptGroupInvitationRequest* request, const char* testName );
    static void FillPlayFabGroupsAcceptGroupInvitationRequest( PlayFab::GroupsModels::AcceptGroupInvitationRequest* request );
    static void LogPlayFabGroupsAddMembersRequest( PlayFab::GroupsModels::AddMembersRequest* request, const char* testName );
    static void FillPlayFabGroupsAddMembersRequest( PlayFab::GroupsModels::AddMembersRequest* request );
    static void LogPlayFabGroupsApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request, const char* testName );
    static void FillPlayFabGroupsApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request );
    static HRESULT LogPlayFabGroupsApplyToGroupResponse( PlayFabGroupsApplyToGroupResponse* result );
    static HRESULT ValidatePlayFabGroupsApplyToGroupResponse( PlayFabGroupsApplyToGroupResponse* result );
    static void LogPlayFabGroupsBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request, const char* testName );
    static void FillPlayFabGroupsBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request );
    static void LogPlayFabGroupsChangeMemberRoleRequest( PlayFab::GroupsModels::ChangeMemberRoleRequest* request, const char* testName );
    static void FillPlayFabGroupsChangeMemberRoleRequest( PlayFab::GroupsModels::ChangeMemberRoleRequest* request );
    static void LogPlayFabGroupsCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request, const char* testName );
    static void FillPlayFabGroupsCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request );
    static HRESULT LogPlayFabGroupsCreateGroupResponse( PlayFabGroupsCreateGroupResponse* result );
    static HRESULT ValidatePlayFabGroupsCreateGroupResponse( PlayFabGroupsCreateGroupResponse* result );
    static void LogPlayFabGroupsCreateGroupRoleRequest( PlayFab::GroupsModels::CreateGroupRoleRequest* request, const char* testName );
    static void FillPlayFabGroupsCreateGroupRoleRequest( PlayFab::GroupsModels::CreateGroupRoleRequest* request );
    static HRESULT LogPlayFabGroupsCreateGroupRoleResponse( PlayFabGroupsCreateGroupRoleResponse* result );
    static HRESULT ValidatePlayFabGroupsCreateGroupRoleResponse( PlayFabGroupsCreateGroupRoleResponse* result );
    static void LogPlayFabGroupsDeleteGroupRequest( PlayFab::GroupsModels::DeleteGroupRequest* request, const char* testName );
    static void FillPlayFabGroupsDeleteGroupRequest( PlayFab::GroupsModels::DeleteGroupRequest* request );
    static void LogPlayFabGroupsDeleteRoleRequest( PlayFab::GroupsModels::DeleteRoleRequest* request, const char* testName );
    static void FillPlayFabGroupsDeleteRoleRequest( PlayFab::GroupsModels::DeleteRoleRequest* request );
    static void LogPlayFabGroupsGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request, const char* testName );
    static void FillPlayFabGroupsGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT LogPlayFabGroupsGetGroupResponse( PlayFabGroupsGetGroupResponse* result );
    static HRESULT ValidatePlayFabGroupsGetGroupResponse( PlayFabGroupsGetGroupResponse* result );
    static void LogPlayFabGroupsInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request, const char* testName );
    static void FillPlayFabGroupsInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request );
    static HRESULT LogPlayFabGroupsInviteToGroupResponse( PlayFabGroupsInviteToGroupResponse* result );
    static HRESULT ValidatePlayFabGroupsInviteToGroupResponse( PlayFabGroupsInviteToGroupResponse* result );
    static void LogPlayFabGroupsIsMemberRequest( PlayFab::GroupsModels::IsMemberRequest* request, const char* testName );
    static void FillPlayFabGroupsIsMemberRequest( PlayFab::GroupsModels::IsMemberRequest* request );
    static HRESULT LogPlayFabGroupsIsMemberResponse( PlayFabGroupsIsMemberResponse* result );
    static HRESULT ValidatePlayFabGroupsIsMemberResponse( PlayFabGroupsIsMemberResponse* result );
    static void LogPlayFabGroupsListGroupApplicationsRequest( PlayFab::GroupsModels::ListGroupApplicationsRequest* request, const char* testName );
    static void FillPlayFabGroupsListGroupApplicationsRequest( PlayFab::GroupsModels::ListGroupApplicationsRequest* request );
    static HRESULT LogPlayFabGroupsListGroupApplicationsResponse( PlayFabGroupsListGroupApplicationsResponse* result );
    static HRESULT ValidatePlayFabGroupsListGroupApplicationsResponse( PlayFabGroupsListGroupApplicationsResponse* result );
    static void LogPlayFabGroupsListGroupBlocksRequest( PlayFab::GroupsModels::ListGroupBlocksRequest* request, const char* testName );
    static void FillPlayFabGroupsListGroupBlocksRequest( PlayFab::GroupsModels::ListGroupBlocksRequest* request );
    static HRESULT LogPlayFabGroupsListGroupBlocksResponse( PlayFabGroupsListGroupBlocksResponse* result );
    static HRESULT ValidatePlayFabGroupsListGroupBlocksResponse( PlayFabGroupsListGroupBlocksResponse* result );
    static void LogPlayFabGroupsListGroupInvitationsRequest( PlayFab::GroupsModels::ListGroupInvitationsRequest* request, const char* testName );
    static void FillPlayFabGroupsListGroupInvitationsRequest( PlayFab::GroupsModels::ListGroupInvitationsRequest* request );
    static HRESULT LogPlayFabGroupsListGroupInvitationsResponse( PlayFabGroupsListGroupInvitationsResponse* result );
    static HRESULT ValidatePlayFabGroupsListGroupInvitationsResponse( PlayFabGroupsListGroupInvitationsResponse* result );
    static void LogPlayFabGroupsListGroupMembersRequest( PlayFab::GroupsModels::ListGroupMembersRequest* request, const char* testName );
    static void FillPlayFabGroupsListGroupMembersRequest( PlayFab::GroupsModels::ListGroupMembersRequest* request );
    static HRESULT LogPlayFabGroupsListGroupMembersResponse( PlayFabGroupsListGroupMembersResponse* result );
    static HRESULT ValidatePlayFabGroupsListGroupMembersResponse( PlayFabGroupsListGroupMembersResponse* result );
    static void LogPlayFabGroupsListMembershipRequest( PlayFab::GroupsModels::ListMembershipRequest* request, const char* testName );
    static void FillPlayFabGroupsListMembershipRequest( PlayFab::GroupsModels::ListMembershipRequest* request );
    static HRESULT LogPlayFabGroupsListMembershipResponse( PlayFabGroupsListMembershipResponse* result );
    static HRESULT ValidatePlayFabGroupsListMembershipResponse( PlayFabGroupsListMembershipResponse* result );
    static void LogPlayFabGroupsListMembershipOpportunitiesRequest( PlayFab::GroupsModels::ListMembershipOpportunitiesRequest* request, const char* testName );
    static void FillPlayFabGroupsListMembershipOpportunitiesRequest( PlayFab::GroupsModels::ListMembershipOpportunitiesRequest* request );
    static HRESULT LogPlayFabGroupsListMembershipOpportunitiesResponse( PlayFabGroupsListMembershipOpportunitiesResponse* result );
    static HRESULT ValidatePlayFabGroupsListMembershipOpportunitiesResponse( PlayFabGroupsListMembershipOpportunitiesResponse* result );
    static void LogPlayFabGroupsRemoveGroupApplicationRequest( PlayFab::GroupsModels::RemoveGroupApplicationRequest* request, const char* testName );
    static void FillPlayFabGroupsRemoveGroupApplicationRequest( PlayFab::GroupsModels::RemoveGroupApplicationRequest* request );
    static void LogPlayFabGroupsRemoveGroupInvitationRequest( PlayFab::GroupsModels::RemoveGroupInvitationRequest* request, const char* testName );
    static void FillPlayFabGroupsRemoveGroupInvitationRequest( PlayFab::GroupsModels::RemoveGroupInvitationRequest* request );
    static void LogPlayFabGroupsRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request, const char* testName );
    static void FillPlayFabGroupsRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request );
    static void LogPlayFabGroupsUnblockEntityRequest( PlayFab::GroupsModels::UnblockEntityRequest* request, const char* testName );
    static void FillPlayFabGroupsUnblockEntityRequest( PlayFab::GroupsModels::UnblockEntityRequest* request );
    static void LogPlayFabGroupsUpdateGroupRequest( PlayFab::GroupsModels::UpdateGroupRequest* request, const char* testName );
    static void FillPlayFabGroupsUpdateGroupRequest( PlayFab::GroupsModels::UpdateGroupRequest* request );
    static HRESULT LogPlayFabGroupsUpdateGroupResponse( PlayFabGroupsUpdateGroupResponse* result );
    static HRESULT ValidatePlayFabGroupsUpdateGroupResponse( PlayFabGroupsUpdateGroupResponse* result );
    static void LogPlayFabGroupsUpdateGroupRoleRequest( PlayFab::GroupsModels::UpdateGroupRoleRequest* request, const char* testName );
    static void FillPlayFabGroupsUpdateGroupRoleRequest( PlayFab::GroupsModels::UpdateGroupRoleRequest* request );
    static HRESULT LogPlayFabGroupsUpdateGroupRoleResponse( PlayFabGroupsUpdateGroupRoleResponse* result );
    static HRESULT ValidatePlayFabGroupsUpdateGroupRoleResponse( PlayFabGroupsUpdateGroupRoleResponse* result );


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
