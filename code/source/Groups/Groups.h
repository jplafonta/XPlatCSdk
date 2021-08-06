#pragma once

#include "GroupsDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class GroupsAPI
{
public:
    GroupsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    GroupsAPI(const GroupsAPI& source) = delete;
    GroupsAPI& operator=(const GroupsAPI& source) = delete;
    ~GroupsAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminSetPublisherData(const PFSetPublisherDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<void> ClientAddSharedGroupMembers(const PFGroupsAddSharedGroupMembersRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::CreateSharedGroupResult> ClientCreateSharedGroup(const PFGroupsCreateSharedGroupRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::GetSharedGroupDataResult> ClientGetSharedGroupData(const PFGroupsGetSharedGroupDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientRemoveSharedGroupMembers(const PFGroupsRemoveSharedGroupMembersRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUpdateSharedGroupData(const PFGroupsUpdateSharedGroupDataRequest& request, const TaskQueue& queue) const;
    static AsyncOp<void> ServerAddSharedGroupMembers(const PFGroupsAddSharedGroupMembersRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<GroupsModels::CreateSharedGroupResult> ServerCreateSharedGroup(const PFGroupsCreateSharedGroupRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerDeleteSharedGroup(const PFGroupsDeleteSharedGroupRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<GroupsModels::GetSharedGroupDataResult> ServerGetSharedGroupData(const PFGroupsGetSharedGroupDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerRemoveSharedGroupMembers(const PFGroupsRemoveSharedGroupMembersRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerUpdateSharedGroupData(const PFGroupsUpdateSharedGroupDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<void> AcceptGroupApplication(const PFGroupsAcceptGroupApplicationRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> AcceptGroupInvitation(const PFGroupsAcceptGroupInvitationRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> AddMembers(const PFGroupsAddMembersRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::ApplyToGroupResponse> ApplyToGroup(const PFGroupsApplyToGroupRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> BlockEntity(const PFGroupsBlockEntityRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ChangeMemberRole(const PFGroupsChangeMemberRoleRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::CreateGroupResponse> CreateGroup(const PFGroupsCreateGroupRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::CreateGroupRoleResponse> CreateRole(const PFGroupsCreateGroupRoleRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteGroup(const PFGroupsDeleteGroupRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteRole(const PFGroupsDeleteRoleRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::GetGroupResponse> GetGroup(const PFGroupsGetGroupRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::InviteToGroupResponse> InviteToGroup(const PFGroupsInviteToGroupRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::IsMemberResponse> IsMember(const PFGroupsIsMemberRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::ListGroupApplicationsResponse> ListGroupApplications(const PFGroupsListGroupApplicationsRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::ListGroupBlocksResponse> ListGroupBlocks(const PFGroupsListGroupBlocksRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::ListGroupInvitationsResponse> ListGroupInvitations(const PFGroupsListGroupInvitationsRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::ListGroupMembersResponse> ListGroupMembers(const PFGroupsListGroupMembersRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::ListMembershipResponse> ListMembership(const PFGroupsListMembershipRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::ListMembershipOpportunitiesResponse> ListMembershipOpportunities(const PFGroupsListMembershipOpportunitiesRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> RemoveGroupApplication(const PFGroupsRemoveGroupApplicationRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> RemoveGroupInvitation(const PFGroupsRemoveGroupInvitationRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> RemoveMembers(const PFGroupsRemoveMembersRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> UnblockEntity(const PFGroupsUnblockEntityRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::UpdateGroupResponse> UpdateGroup(const PFGroupsUpdateGroupRequest& request, const TaskQueue& queue) const;
    AsyncOp<GroupsModels::UpdateGroupRoleResponse> UpdateRole(const PFGroupsUpdateGroupRoleRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
