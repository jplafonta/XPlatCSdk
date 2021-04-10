#pragma once

#include "GroupsDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
struct AuthTokens;

class GroupsAPI
{
public:
    GroupsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    GroupsAPI(const GroupsAPI& source) = delete;
    GroupsAPI& operator=(const GroupsAPI& source) = delete;
    ~GroupsAPI() = default;

    // ------------ Generated API calls
    AsyncOp<void> AcceptGroupApplication(const PlayFabGroupsAcceptGroupApplicationRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AcceptGroupInvitation(const PlayFabGroupsAcceptGroupInvitationRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> AddMembers(const PlayFabGroupsAddMembersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::ApplyToGroupResponse> ApplyToGroup(const PlayFabGroupsApplyToGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> BlockEntity(const PlayFabGroupsBlockEntityRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> ChangeMemberRole(const PlayFabGroupsChangeMemberRoleRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::CreateGroupResponse> CreateGroup(const PlayFabGroupsCreateGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::CreateGroupRoleResponse> CreateRole(const PlayFabGroupsCreateGroupRoleRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteGroup(const PlayFabGroupsDeleteGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteRole(const PlayFabGroupsDeleteRoleRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::GetGroupResponse> GetGroup(const PlayFabGroupsGetGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::InviteToGroupResponse> InviteToGroup(const PlayFabGroupsInviteToGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::IsMemberResponse> IsMember(const PlayFabGroupsIsMemberRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::ListGroupApplicationsResponse> ListGroupApplications(const PlayFabGroupsListGroupApplicationsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::ListGroupBlocksResponse> ListGroupBlocks(const PlayFabGroupsListGroupBlocksRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::ListGroupInvitationsResponse> ListGroupInvitations(const PlayFabGroupsListGroupInvitationsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::ListGroupMembersResponse> ListGroupMembers(const PlayFabGroupsListGroupMembersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::ListMembershipResponse> ListMembership(const PlayFabGroupsListMembershipRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::ListMembershipOpportunitiesResponse> ListMembershipOpportunities(const PlayFabGroupsListMembershipOpportunitiesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveGroupApplication(const PlayFabGroupsRemoveGroupApplicationRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveGroupInvitation(const PlayFabGroupsRemoveGroupInvitationRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RemoveMembers(const PlayFabGroupsRemoveMembersRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnblockEntity(const PlayFabGroupsUnblockEntityRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::UpdateGroupResponse> UpdateGroup(const PlayFabGroupsUpdateGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<GroupsModels::UpdateGroupRoleResponse> UpdateRole(const PlayFabGroupsUpdateGroupRoleRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
