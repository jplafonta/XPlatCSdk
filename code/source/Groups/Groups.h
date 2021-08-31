#pragma once

#include "GroupsDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class GroupsAPI
{
public:
    GroupsAPI() = delete;
    GroupsAPI(const GroupsAPI& source) = delete;
    GroupsAPI& operator=(const GroupsAPI& source) = delete;
    ~GroupsAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AcceptGroupApplication(SharedPtr<Entity> entity, const PFGroupsAcceptGroupApplicationRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AcceptGroupInvitation(SharedPtr<Entity> entity, const PFGroupsAcceptGroupInvitationRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AddMembers(SharedPtr<Entity> entity, const PFGroupsAddMembersRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::ApplyToGroupResponse> ApplyToGroup(SharedPtr<Entity> entity, const PFGroupsApplyToGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<void> BlockEntity(SharedPtr<Entity> entity, const PFGroupsBlockEntityRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ChangeMemberRole(SharedPtr<Entity> entity, const PFGroupsChangeMemberRoleRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::CreateGroupResponse> CreateGroup(SharedPtr<Entity> entity, const PFGroupsCreateGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::CreateGroupRoleResponse> CreateRole(SharedPtr<Entity> entity, const PFGroupsCreateGroupRoleRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteGroup(SharedPtr<Entity> entity, const PFGroupsDeleteGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteRole(SharedPtr<Entity> entity, const PFGroupsDeleteRoleRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::GetGroupResponse> GetGroup(SharedPtr<Entity> entity, const PFGroupsGetGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::InviteToGroupResponse> InviteToGroup(SharedPtr<Entity> entity, const PFGroupsInviteToGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::IsMemberResponse> IsMember(SharedPtr<Entity> entity, const PFGroupsIsMemberRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::ListGroupApplicationsResponse> ListGroupApplications(SharedPtr<Entity> entity, const PFGroupsListGroupApplicationsRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::ListGroupBlocksResponse> ListGroupBlocks(SharedPtr<Entity> entity, const PFGroupsListGroupBlocksRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::ListGroupInvitationsResponse> ListGroupInvitations(SharedPtr<Entity> entity, const PFGroupsListGroupInvitationsRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::ListGroupMembersResponse> ListGroupMembers(SharedPtr<Entity> entity, const PFGroupsListGroupMembersRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::ListMembershipResponse> ListMembership(SharedPtr<Entity> entity, const PFGroupsListMembershipRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::ListMembershipOpportunitiesResponse> ListMembershipOpportunities(SharedPtr<Entity> entity, const PFGroupsListMembershipOpportunitiesRequest& request, const TaskQueue& queue);
    static AsyncOp<void> RemoveGroupApplication(SharedPtr<Entity> entity, const PFGroupsRemoveGroupApplicationRequest& request, const TaskQueue& queue);
    static AsyncOp<void> RemoveGroupInvitation(SharedPtr<Entity> entity, const PFGroupsRemoveGroupInvitationRequest& request, const TaskQueue& queue);
    static AsyncOp<void> RemoveMembers(SharedPtr<Entity> entity, const PFGroupsRemoveMembersRequest& request, const TaskQueue& queue);
    static AsyncOp<void> UnblockEntity(SharedPtr<Entity> entity, const PFGroupsUnblockEntityRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::UpdateGroupResponse> UpdateGroup(SharedPtr<Entity> entity, const PFGroupsUpdateGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<GroupsModels::UpdateGroupRoleResponse> UpdateRole(SharedPtr<Entity> entity, const PFGroupsUpdateGroupRoleRequest& request, const TaskQueue& queue);
};

}
