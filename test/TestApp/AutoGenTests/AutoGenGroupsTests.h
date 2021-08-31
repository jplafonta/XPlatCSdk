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

    void TestGroupsAcceptGroupApplicationPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsAcceptGroupApplicationPrerequisiteApplyToGroup(TestContext& testContext);
    void TestGroupsAcceptGroupApplication(TestContext& testContext);
    void TestGroupsAcceptGroupApplicationCleanupRemoveMembers(TestContext& testContext);

    void TestGroupsAcceptGroupInvitationPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsAcceptGroupInvitationPrerequisiteInviteToGroup(TestContext& testContext);
    void TestGroupsAcceptGroupInvitation(TestContext& testContext);
    void TestGroupsAcceptGroupInvitationCleanupRemoveMembers(TestContext& testContext);

    void TestGroupsAddMembersPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsAddMembers(TestContext& testContext);
    void TestGroupsAddMembersCleanupRemoveMembers(TestContext& testContext);

    void TestGroupsApplyToGroupPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsApplyToGroup(TestContext& testContext);
    void TestGroupsApplyToGroupCleanupRemoveGroupApplication(TestContext& testContext);

    void TestGroupsBlockEntityPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsBlockEntity(TestContext& testContext);
    void TestGroupsBlockEntityCleanupUnblockEntity(TestContext& testContext);

    void TestGroupsChangeMemberRolePrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsChangeMemberRole(TestContext& testContext);
    void TestGroupsChangeMemberRoleCleanupChangeMemberRole(TestContext& testContext);

    void TestGroupsCreateGroup(TestContext& testContext);
    void TestGroupsCreateGroupCleanupGetGroup(TestContext& testContext);
    void TestGroupsCreateGroupCleanupDeleteGroup(TestContext& testContext);

    void TestGroupsCreateRolePrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsCreateRole(TestContext& testContext);
    void TestGroupsCreateRoleCleanupDeleteRole(TestContext& testContext);

    void TestGroupsDeleteGroupPrerequisiteCreateGroup(TestContext& testContext);
    void TestGroupsDeleteGroup(TestContext& testContext);

    void TestGroupsDeleteRolePrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsDeleteRolePrerequisiteCreateRole(TestContext& testContext);
    void TestGroupsDeleteRole(TestContext& testContext);

    void TestGroupsGetGroup(TestContext& testContext);

    void TestGroupsInviteToGroupPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsInviteToGroup(TestContext& testContext);
    void TestGroupsInviteToGroupCleanupRemoveGroupInvitation(TestContext& testContext);

    void TestGroupsIsMemberPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsIsMember(TestContext& testContext);

    void TestGroupsListGroupApplicationsPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsListGroupApplications(TestContext& testContext);

    void TestGroupsListGroupBlocksPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsListGroupBlocks(TestContext& testContext);

    void TestGroupsListGroupInvitationsPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsListGroupInvitations(TestContext& testContext);

    void TestGroupsListGroupMembersPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsListGroupMembers(TestContext& testContext);

    void TestGroupsListMembershipPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsListMembership(TestContext& testContext);

    void TestGroupsListMembershipOpportunitiesPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsListMembershipOpportunitiesPrerequisiteApplyToGroup(TestContext& testContext);
    void TestGroupsListMembershipOpportunities(TestContext& testContext);
    void TestGroupsListMembershipOpportunitiesCleanupRemoveGroupApplication(TestContext& testContext);

    void TestGroupsRemoveGroupApplicationPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsRemoveGroupApplicationPrerequisiteApplyToGroup(TestContext& testContext);
    void TestGroupsRemoveGroupApplication(TestContext& testContext);

    void TestGroupsRemoveGroupInvitationPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsRemoveGroupInvitationPrerequisiteInviteToGroup(TestContext& testContext);
    void TestGroupsRemoveGroupInvitation(TestContext& testContext);

    void TestGroupsRemoveMembersPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsRemoveMembersPrerequisiteAddMembers(TestContext& testContext);
    void TestGroupsRemoveMembers(TestContext& testContext);

    void TestGroupsUnblockEntityPrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsUnblockEntityPrerequisiteBlockEntity(TestContext& testContext);
    void TestGroupsUnblockEntity(TestContext& testContext);

    void TestGroupsUpdateGroupPrerequisiteCreateGroup(TestContext& testContext);
    void TestGroupsUpdateGroup(TestContext& testContext);
    void TestGroupsUpdateGroupCleanupDeleteGroup(TestContext& testContext);

    void TestGroupsUpdateRolePrerequisiteGetGroup(TestContext& testContext);
    void TestGroupsUpdateRolePrerequisiteUpdateRole(TestContext& testContext);
    void TestGroupsUpdateRole(TestContext& testContext);


protected:
    void AddTests();

    static void FillAcceptGroupApplicationPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreAcceptGroupApplicationPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void FillAcceptGroupApplicationPrerequisiteApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request );
    static HRESULT StoreAcceptGroupApplicationPrerequisitePFGroupsApplyToGroupResponse( PFGroupsApplyToGroupResponse* result );
    static void LogAcceptGroupApplicationRequest( PlayFab::GroupsModels::AcceptGroupApplicationRequest* request, const char* testName );
    static void FillAcceptGroupApplicationRequest( PlayFab::GroupsModels::AcceptGroupApplicationRequest* request );
    static void FillAcceptGroupApplicationCleanupRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request );

    static void FillAcceptGroupInvitationPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreAcceptGroupInvitationPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void FillAcceptGroupInvitationPrerequisiteInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request );
    static HRESULT StoreAcceptGroupInvitationPrerequisitePFGroupsInviteToGroupResponse( PFGroupsInviteToGroupResponse* result );
    static void LogAcceptGroupInvitationRequest( PlayFab::GroupsModels::AcceptGroupInvitationRequest* request, const char* testName );
    static void FillAcceptGroupInvitationRequest( PlayFab::GroupsModels::AcceptGroupInvitationRequest* request );
    static void FillAcceptGroupInvitationCleanupRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request );

    static void FillAddMembersPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreAddMembersPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogAddMembersRequest( PlayFab::GroupsModels::AddMembersRequest* request, const char* testName );
    static void FillAddMembersRequest( PlayFab::GroupsModels::AddMembersRequest* request );
    static void FillAddMembersCleanupRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request );

    static void FillApplyToGroupPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreApplyToGroupPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request, const char* testName );
    static void FillApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request );
    static HRESULT LogPFGroupsApplyToGroupResponse( PFGroupsApplyToGroupResponse* result );
    static HRESULT ValidatePFGroupsApplyToGroupResponse( PFGroupsApplyToGroupResponse* result );
    static void FillApplyToGroupCleanupRemoveGroupApplicationRequest( PlayFab::GroupsModels::RemoveGroupApplicationRequest* request );

    static void FillBlockEntityPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreBlockEntityPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request, const char* testName );
    static void FillBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request );
    static void FillBlockEntityCleanupUnblockEntityRequest( PlayFab::GroupsModels::UnblockEntityRequest* request );

    static void FillChangeMemberRolePrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreChangeMemberRolePrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogChangeMemberRoleRequest( PlayFab::GroupsModels::ChangeMemberRoleRequest* request, const char* testName );
    static void FillChangeMemberRoleRequest( PlayFab::GroupsModels::ChangeMemberRoleRequest* request );
    static void FillChangeMemberRoleCleanupChangeMemberRoleRequest( PlayFab::GroupsModels::ChangeMemberRoleRequest* request );

    static void LogCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request, const char* testName );
    static void FillCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request );
    static HRESULT LogPFGroupsCreateGroupResponse( PFGroupsCreateGroupResponse* result );
    static HRESULT ValidatePFGroupsCreateGroupResponse( PFGroupsCreateGroupResponse* result );
    static void FillCreateGroupCleanupGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreCreateGroupCleanupPFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void FillCreateGroupCleanupDeleteGroupRequest( PlayFab::GroupsModels::DeleteGroupRequest* request );

    static void FillCreateRolePrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreCreateRolePrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogCreateGroupRoleRequest( PlayFab::GroupsModels::CreateGroupRoleRequest* request, const char* testName );
    static void FillCreateGroupRoleRequest( PlayFab::GroupsModels::CreateGroupRoleRequest* request );
    static HRESULT LogPFGroupsCreateGroupRoleResponse( PFGroupsCreateGroupRoleResponse* result );
    static HRESULT ValidatePFGroupsCreateGroupRoleResponse( PFGroupsCreateGroupRoleResponse* result );
    static void FillCreateRoleCleanupDeleteRoleRequest( PlayFab::GroupsModels::DeleteRoleRequest* request );

    static void FillDeleteGroupPrerequisiteCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request );
    static HRESULT StoreDeleteGroupPrerequisitePFGroupsCreateGroupResponse( PFGroupsCreateGroupResponse* result );
    static void LogDeleteGroupRequest( PlayFab::GroupsModels::DeleteGroupRequest* request, const char* testName );
    static void FillDeleteGroupRequest( PlayFab::GroupsModels::DeleteGroupRequest* request );

    static void FillDeleteRolePrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreDeleteRolePrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void FillDeleteRolePrerequisiteCreateGroupRoleRequest( PlayFab::GroupsModels::CreateGroupRoleRequest* request );
    static HRESULT StoreDeleteRolePrerequisitePFGroupsCreateGroupRoleResponse( PFGroupsCreateGroupRoleResponse* result );
    static void LogDeleteRoleRequest( PlayFab::GroupsModels::DeleteRoleRequest* request, const char* testName );
    static void FillDeleteRoleRequest( PlayFab::GroupsModels::DeleteRoleRequest* request );

    static void LogGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request, const char* testName );
    static void FillGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT LogPFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static HRESULT ValidatePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );

    static void FillInviteToGroupPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreInviteToGroupPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request, const char* testName );
    static void FillInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request );
    static HRESULT LogPFGroupsInviteToGroupResponse( PFGroupsInviteToGroupResponse* result );
    static HRESULT ValidatePFGroupsInviteToGroupResponse( PFGroupsInviteToGroupResponse* result );
    static void FillInviteToGroupCleanupRemoveGroupInvitationRequest( PlayFab::GroupsModels::RemoveGroupInvitationRequest* request );

    static void FillIsMemberPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreIsMemberPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogIsMemberRequest( PlayFab::GroupsModels::IsMemberRequest* request, const char* testName );
    static void FillIsMemberRequest( PlayFab::GroupsModels::IsMemberRequest* request );
    static HRESULT LogPFGroupsIsMemberResponse( PFGroupsIsMemberResponse* result );
    static HRESULT ValidatePFGroupsIsMemberResponse( PFGroupsIsMemberResponse* result );

    static void FillListGroupApplicationsPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreListGroupApplicationsPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogListGroupApplicationsRequest( PlayFab::GroupsModels::ListGroupApplicationsRequest* request, const char* testName );
    static void FillListGroupApplicationsRequest( PlayFab::GroupsModels::ListGroupApplicationsRequest* request );
    static HRESULT LogPFGroupsListGroupApplicationsResponse( PFGroupsListGroupApplicationsResponse* result );
    static HRESULT ValidatePFGroupsListGroupApplicationsResponse( PFGroupsListGroupApplicationsResponse* result );

    static void FillListGroupBlocksPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreListGroupBlocksPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogListGroupBlocksRequest( PlayFab::GroupsModels::ListGroupBlocksRequest* request, const char* testName );
    static void FillListGroupBlocksRequest( PlayFab::GroupsModels::ListGroupBlocksRequest* request );
    static HRESULT LogPFGroupsListGroupBlocksResponse( PFGroupsListGroupBlocksResponse* result );
    static HRESULT ValidatePFGroupsListGroupBlocksResponse( PFGroupsListGroupBlocksResponse* result );

    static void FillListGroupInvitationsPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreListGroupInvitationsPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogListGroupInvitationsRequest( PlayFab::GroupsModels::ListGroupInvitationsRequest* request, const char* testName );
    static void FillListGroupInvitationsRequest( PlayFab::GroupsModels::ListGroupInvitationsRequest* request );
    static HRESULT LogPFGroupsListGroupInvitationsResponse( PFGroupsListGroupInvitationsResponse* result );
    static HRESULT ValidatePFGroupsListGroupInvitationsResponse( PFGroupsListGroupInvitationsResponse* result );

    static void FillListGroupMembersPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreListGroupMembersPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogListGroupMembersRequest( PlayFab::GroupsModels::ListGroupMembersRequest* request, const char* testName );
    static void FillListGroupMembersRequest( PlayFab::GroupsModels::ListGroupMembersRequest* request );
    static HRESULT LogPFGroupsListGroupMembersResponse( PFGroupsListGroupMembersResponse* result );
    static HRESULT ValidatePFGroupsListGroupMembersResponse( PFGroupsListGroupMembersResponse* result );

    static void FillListMembershipPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreListMembershipPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void LogListMembershipRequest( PlayFab::GroupsModels::ListMembershipRequest* request, const char* testName );
    static void FillListMembershipRequest( PlayFab::GroupsModels::ListMembershipRequest* request );
    static HRESULT LogPFGroupsListMembershipResponse( PFGroupsListMembershipResponse* result );
    static HRESULT ValidatePFGroupsListMembershipResponse( PFGroupsListMembershipResponse* result );

    static void FillListMembershipOpportunitiesPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreListMembershipOpportunitiesPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void FillListMembershipOpportunitiesPrerequisiteApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request );
    static HRESULT StoreListMembershipOpportunitiesPrerequisitePFGroupsApplyToGroupResponse( PFGroupsApplyToGroupResponse* result );
    static void LogListMembershipOpportunitiesRequest( PlayFab::GroupsModels::ListMembershipOpportunitiesRequest* request, const char* testName );
    static void FillListMembershipOpportunitiesRequest( PlayFab::GroupsModels::ListMembershipOpportunitiesRequest* request );
    static HRESULT LogPFGroupsListMembershipOpportunitiesResponse( PFGroupsListMembershipOpportunitiesResponse* result );
    static HRESULT ValidatePFGroupsListMembershipOpportunitiesResponse( PFGroupsListMembershipOpportunitiesResponse* result );
    static void FillListMembershipOpportunitiesCleanupRemoveGroupApplicationRequest( PlayFab::GroupsModels::RemoveGroupApplicationRequest* request );

    static void FillRemoveGroupApplicationPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreRemoveGroupApplicationPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void FillRemoveGroupApplicationPrerequisiteApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request );
    static HRESULT StoreRemoveGroupApplicationPrerequisitePFGroupsApplyToGroupResponse( PFGroupsApplyToGroupResponse* result );
    static void LogRemoveGroupApplicationRequest( PlayFab::GroupsModels::RemoveGroupApplicationRequest* request, const char* testName );
    static void FillRemoveGroupApplicationRequest( PlayFab::GroupsModels::RemoveGroupApplicationRequest* request );

    static void FillRemoveGroupInvitationPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreRemoveGroupInvitationPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void FillRemoveGroupInvitationPrerequisiteInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request );
    static HRESULT StoreRemoveGroupInvitationPrerequisitePFGroupsInviteToGroupResponse( PFGroupsInviteToGroupResponse* result );
    static void LogRemoveGroupInvitationRequest( PlayFab::GroupsModels::RemoveGroupInvitationRequest* request, const char* testName );
    static void FillRemoveGroupInvitationRequest( PlayFab::GroupsModels::RemoveGroupInvitationRequest* request );

    static void FillRemoveMembersPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreRemoveMembersPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void FillRemoveMembersPrerequisiteAddMembersRequest( PlayFab::GroupsModels::AddMembersRequest* request );
    static void LogRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request, const char* testName );
    static void FillRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request );

    static void FillUnblockEntityPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreUnblockEntityPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void FillUnblockEntityPrerequisiteBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request );
    static void LogUnblockEntityRequest( PlayFab::GroupsModels::UnblockEntityRequest* request, const char* testName );
    static void FillUnblockEntityRequest( PlayFab::GroupsModels::UnblockEntityRequest* request );

    static void FillUpdateGroupPrerequisiteCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request );
    static HRESULT StoreUpdateGroupPrerequisitePFGroupsCreateGroupResponse( PFGroupsCreateGroupResponse* result );
    static void LogUpdateGroupRequest( PlayFab::GroupsModels::UpdateGroupRequest* request, const char* testName );
    static void FillUpdateGroupRequest( PlayFab::GroupsModels::UpdateGroupRequest* request );
    static HRESULT LogPFGroupsUpdateGroupResponse( PFGroupsUpdateGroupResponse* result );
    static HRESULT ValidatePFGroupsUpdateGroupResponse( PFGroupsUpdateGroupResponse* result );
    static void FillUpdateGroupCleanupDeleteGroupRequest( PlayFab::GroupsModels::DeleteGroupRequest* request );

    static void FillUpdateRolePrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request );
    static HRESULT StoreUpdateRolePrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result );
    static void FillUpdateRolePrerequisiteUpdateGroupRoleRequest( PlayFab::GroupsModels::UpdateGroupRoleRequest* request );
    static HRESULT StoreUpdateRolePrerequisitePFGroupsUpdateGroupRoleResponse( PFGroupsUpdateGroupRoleResponse* result );
    static void LogUpdateGroupRoleRequest( PlayFab::GroupsModels::UpdateGroupRoleRequest* request, const char* testName );
    static void FillUpdateGroupRoleRequest( PlayFab::GroupsModels::UpdateGroupRoleRequest* request );
    static HRESULT LogPFGroupsUpdateGroupRoleResponse( PFGroupsUpdateGroupRoleResponse* result );
    static HRESULT ValidatePFGroupsUpdateGroupRoleResponse( PFGroupsUpdateGroupRoleResponse* result );

    struct GroupsTestData
    {
        ~GroupsTestData()
        {

        }

        PlayFab::GroupsModels::GetGroupResponse m_GetGroupResponse;
        PlayFab::GroupsModels::ApplyToGroupResponse m_ApplyToGroupResponse;
        PlayFab::GroupsModels::InviteToGroupResponse m_InviteToGroupResponse;
        PlayFab::GroupsModels::CreateGroupResponse m_CreateGroupResponse;
        PlayFab::GroupsModels::CreateGroupRoleResponse m_CreateGroupRoleResponse;
        PlayFab::GroupsModels::UpdateGroupRoleResponse m_UpdateGroupRoleResponse;
    };

    static GroupsTestData testData;

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
