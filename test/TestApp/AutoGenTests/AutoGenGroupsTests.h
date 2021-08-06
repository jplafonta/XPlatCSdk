#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Groups/GroupsDataModels.h"

namespace PlayFabUnit
{

class AutoGenGroupsTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void PrerequisiteGroupsCreateGroup(TestContext& testContext);
    void PrerequisiteGroupsGetGroup(TestContext& testContext);
    void PrerequisiteGroupsApplyToGroup(TestContext& testContext);
    void PrerequisiteGroupsInviteToGroup(TestContext& testContext);
    void PrerequisiteGroupsBlockEntity(TestContext& testContext);

    void TestGroupsAdminSetPublisherData(TestContext& testContext); 
    void TestGroupsClientAddSharedGroupMembers(TestContext& testContext); 
    void TestGroupsClientCreateSharedGroup(TestContext& testContext); 
    void TestGroupsClientGetSharedGroupData(TestContext& testContext); 
    void TestGroupsClientRemoveSharedGroupMembers(TestContext& testContext); 
    void TestGroupsClientUpdateSharedGroupData(TestContext& testContext); 
    void TestGroupsServerAddSharedGroupMembers(TestContext& testContext); 
    void TestGroupsServerCreateSharedGroup(TestContext& testContext); 
    void TestGroupsServerDeleteSharedGroup(TestContext& testContext); 
    void TestGroupsServerGetSharedGroupData(TestContext& testContext); 
    void TestGroupsServerRemoveSharedGroupMembers(TestContext& testContext); 
    void TestGroupsServerUpdateSharedGroupData(TestContext& testContext); 
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

    static void LogPrerequisiteCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request, const char* prereqName );
    static void FillPrerequisiteCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request );
    static HRESULT LogPrerequisitePFGroupsCreateGroupResponse( PFGroupsCreateGroupResponse* result );
    static HRESULT StorePrerequisitePFGroupsCreateGroupResponse( PFGroupsCreateGroupResponse* result );
    static void LogPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request, const char* prereqName );
    static void FillPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT LogPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static HRESULT StorePrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogPrerequisiteApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request, const char* prereqName );
    static void FillPrerequisiteApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request );
    static HRESULT LogPrerequisitePFGroupsApplyToGroupResponse( PFGroupsApplyToGroupResponse* result );
    static HRESULT StorePrerequisitePFGroupsApplyToGroupResponse( PFGroupsApplyToGroupResponse* result );
    static void LogPrerequisiteInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request, const char* prereqName );
    static void FillPrerequisiteInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request );
    static HRESULT LogPrerequisitePFGroupsInviteToGroupResponse( PFGroupsInviteToGroupResponse* result );
    static HRESULT StorePrerequisitePFGroupsInviteToGroupResponse( PFGroupsInviteToGroupResponse* result );
    static void LogPrerequisiteBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request, const char* prereqName );
    static void FillPrerequisiteBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request );

    static void LogSetPublisherDataRequest( PlayFab::SetPublisherDataRequest* request, const char* testName );
    static void FillSetPublisherDataRequest( PlayFab::SetPublisherDataRequest* request );
    static void LogAddSharedGroupMembersRequest( PlayFab::GroupsModels::AddSharedGroupMembersRequest* request, const char* testName );
    static void FillAddSharedGroupMembersRequest( PlayFab::GroupsModels::AddSharedGroupMembersRequest* request );
    static void LogCreateSharedGroupRequest( PlayFab::GroupsModels::CreateSharedGroupRequest* request, const char* testName );
    static void FillCreateSharedGroupRequest( PlayFab::GroupsModels::CreateSharedGroupRequest* request );
    static HRESULT LogPFGroupsCreateSharedGroupResult( PFGroupsCreateSharedGroupResult* result );
    static HRESULT ValidatePFGroupsCreateSharedGroupResult( PFGroupsCreateSharedGroupResult* result );
    static void LogGetSharedGroupDataRequest( PlayFab::GroupsModels::GetSharedGroupDataRequest* request, const char* testName );
    static void FillGetSharedGroupDataRequest( PlayFab::GroupsModels::GetSharedGroupDataRequest* request );
    static HRESULT LogPFGroupsGetSharedGroupDataResult( PFGroupsGetSharedGroupDataResult* result );
    static HRESULT ValidatePFGroupsGetSharedGroupDataResult( PFGroupsGetSharedGroupDataResult* result );
    static void LogRemoveSharedGroupMembersRequest( PlayFab::GroupsModels::RemoveSharedGroupMembersRequest* request, const char* testName );
    static void FillRemoveSharedGroupMembersRequest( PlayFab::GroupsModels::RemoveSharedGroupMembersRequest* request );
    static void LogUpdateSharedGroupDataRequest( PlayFab::GroupsModels::UpdateSharedGroupDataRequest* request, const char* testName );
    static void FillUpdateSharedGroupDataRequest( PlayFab::GroupsModels::UpdateSharedGroupDataRequest* request );
    static void LogDeleteSharedGroupRequest( PlayFab::GroupsModels::DeleteSharedGroupRequest* request, const char* testName );
    static void FillDeleteSharedGroupRequest( PlayFab::GroupsModels::DeleteSharedGroupRequest* request );
    static void LogAcceptGroupApplicationRequest( PlayFab::GroupsModels::AcceptGroupApplicationRequest* request, const char* testName );
    static void FillAcceptGroupApplicationRequest( PlayFab::GroupsModels::AcceptGroupApplicationRequest* request );
    static void LogAcceptGroupInvitationRequest( PlayFab::GroupsModels::AcceptGroupInvitationRequest* request, const char* testName );
    static void FillAcceptGroupInvitationRequest( PlayFab::GroupsModels::AcceptGroupInvitationRequest* request );
    static void LogAddMembersRequest( PlayFab::GroupsModels::AddMembersRequest* request, const char* testName );
    static void FillAddMembersRequest( PlayFab::GroupsModels::AddMembersRequest* request );
    static void LogApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request, const char* testName );
    static void FillApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request );
    static HRESULT LogPFGroupsApplyToGroupResponse( PFGroupsApplyToGroupResponse* result );
    static HRESULT ValidatePFGroupsApplyToGroupResponse( PFGroupsApplyToGroupResponse* result );
    static void LogBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request, const char* testName );
    static void FillBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request );
    static void LogChangeMemberRoleRequest( PlayFab::GroupsModels::ChangeMemberRoleRequest* request, const char* testName );
    static void FillChangeMemberRoleRequest( PlayFab::GroupsModels::ChangeMemberRoleRequest* request );
    static void LogCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request, const char* testName );
    static void FillCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request );
    static HRESULT LogPFGroupsCreateGroupResponse( PFGroupsCreateGroupResponse* result );
    static HRESULT ValidatePFGroupsCreateGroupResponse( PFGroupsCreateGroupResponse* result );
    static void LogCreateGroupRoleRequest( PlayFab::GroupsModels::CreateGroupRoleRequest* request, const char* testName );
    static void FillCreateGroupRoleRequest( PlayFab::GroupsModels::CreateGroupRoleRequest* request );
    static HRESULT LogPFGroupsCreateGroupRoleResponse( PFGroupsCreateGroupRoleResponse* result );
    static HRESULT ValidatePFGroupsCreateGroupRoleResponse( PFGroupsCreateGroupRoleResponse* result );
    static void LogDeleteGroupRequest( PlayFab::GroupsModels::DeleteGroupRequest* request, const char* testName );
    static void FillDeleteGroupRequest( PlayFab::GroupsModels::DeleteGroupRequest* request );
    static void LogDeleteRoleRequest( PlayFab::GroupsModels::DeleteRoleRequest* request, const char* testName );
    static void FillDeleteRoleRequest( PlayFab::GroupsModels::DeleteRoleRequest* request );
    static void LogGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request, const char* testName );
    static void FillGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT LogPFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static HRESULT ValidatePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request, const char* testName );
    static void FillInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request );
    static HRESULT LogPFGroupsInviteToGroupResponse( PFGroupsInviteToGroupResponse* result );
    static HRESULT ValidatePFGroupsInviteToGroupResponse( PFGroupsInviteToGroupResponse* result );
    static void LogIsMemberRequest( PlayFab::GroupsModels::IsMemberRequest* request, const char* testName );
    static void FillIsMemberRequest( PlayFab::GroupsModels::IsMemberRequest* request );
    static HRESULT LogPFGroupsIsMemberResponse( PFGroupsIsMemberResponse* result );
    static HRESULT ValidatePFGroupsIsMemberResponse( PFGroupsIsMemberResponse* result );
    static void LogListGroupApplicationsRequest( PlayFab::GroupsModels::ListGroupApplicationsRequest* request, const char* testName );
    static void FillListGroupApplicationsRequest( PlayFab::GroupsModels::ListGroupApplicationsRequest* request );
    static HRESULT LogPFGroupsListGroupApplicationsResponse( PFGroupsListGroupApplicationsResponse* result );
    static HRESULT ValidatePFGroupsListGroupApplicationsResponse( PFGroupsListGroupApplicationsResponse* result );
    static void LogListGroupBlocksRequest( PlayFab::GroupsModels::ListGroupBlocksRequest* request, const char* testName );
    static void FillListGroupBlocksRequest( PlayFab::GroupsModels::ListGroupBlocksRequest* request );
    static HRESULT LogPFGroupsListGroupBlocksResponse( PFGroupsListGroupBlocksResponse* result );
    static HRESULT ValidatePFGroupsListGroupBlocksResponse( PFGroupsListGroupBlocksResponse* result );
    static void LogListGroupInvitationsRequest( PlayFab::GroupsModels::ListGroupInvitationsRequest* request, const char* testName );
    static void FillListGroupInvitationsRequest( PlayFab::GroupsModels::ListGroupInvitationsRequest* request );
    static HRESULT LogPFGroupsListGroupInvitationsResponse( PFGroupsListGroupInvitationsResponse* result );
    static HRESULT ValidatePFGroupsListGroupInvitationsResponse( PFGroupsListGroupInvitationsResponse* result );
    static void LogListGroupMembersRequest( PlayFab::GroupsModels::ListGroupMembersRequest* request, const char* testName );
    static void FillListGroupMembersRequest( PlayFab::GroupsModels::ListGroupMembersRequest* request );
    static HRESULT LogPFGroupsListGroupMembersResponse( PFGroupsListGroupMembersResponse* result );
    static HRESULT ValidatePFGroupsListGroupMembersResponse( PFGroupsListGroupMembersResponse* result );
    static void LogListMembershipRequest( PlayFab::GroupsModels::ListMembershipRequest* request, const char* testName );
    static void FillListMembershipRequest( PlayFab::GroupsModels::ListMembershipRequest* request );
    static HRESULT LogPFGroupsListMembershipResponse( PFGroupsListMembershipResponse* result );
    static HRESULT ValidatePFGroupsListMembershipResponse( PFGroupsListMembershipResponse* result );
    static void LogListMembershipOpportunitiesRequest( PlayFab::GroupsModels::ListMembershipOpportunitiesRequest* request, const char* testName );
    static void FillListMembershipOpportunitiesRequest( PlayFab::GroupsModels::ListMembershipOpportunitiesRequest* request );
    static HRESULT LogPFGroupsListMembershipOpportunitiesResponse( PFGroupsListMembershipOpportunitiesResponse* result );
    static HRESULT ValidatePFGroupsListMembershipOpportunitiesResponse( PFGroupsListMembershipOpportunitiesResponse* result );
    static void LogRemoveGroupApplicationRequest( PlayFab::GroupsModels::RemoveGroupApplicationRequest* request, const char* testName );
    static void FillRemoveGroupApplicationRequest( PlayFab::GroupsModels::RemoveGroupApplicationRequest* request );
    static void LogRemoveGroupInvitationRequest( PlayFab::GroupsModels::RemoveGroupInvitationRequest* request, const char* testName );
    static void FillRemoveGroupInvitationRequest( PlayFab::GroupsModels::RemoveGroupInvitationRequest* request );
    static void LogRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request, const char* testName );
    static void FillRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request );
    static void LogUnblockEntityRequest( PlayFab::GroupsModels::UnblockEntityRequest* request, const char* testName );
    static void FillUnblockEntityRequest( PlayFab::GroupsModels::UnblockEntityRequest* request );
    static void LogUpdateGroupRequest( PlayFab::GroupsModels::UpdateGroupRequest* request, const char* testName );
    static void FillUpdateGroupRequest( PlayFab::GroupsModels::UpdateGroupRequest* request );
    static HRESULT LogPFGroupsUpdateGroupResponse( PFGroupsUpdateGroupResponse* result );
    static HRESULT ValidatePFGroupsUpdateGroupResponse( PFGroupsUpdateGroupResponse* result );
    static void LogUpdateGroupRoleRequest( PlayFab::GroupsModels::UpdateGroupRoleRequest* request, const char* testName );
    static void FillUpdateGroupRoleRequest( PlayFab::GroupsModels::UpdateGroupRoleRequest* request );
    static HRESULT LogPFGroupsUpdateGroupRoleResponse( PFGroupsUpdateGroupRoleResponse* result );
    static HRESULT ValidatePFGroupsUpdateGroupRoleResponse( PFGroupsUpdateGroupRoleResponse* result );

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
