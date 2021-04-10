#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "GroupsDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Groups APIs
    /// </summary>
    class PlayFabGroupsInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabGroupsInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabGroupsInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabGroupsInstanceAPI() = default;
        PlayFabGroupsInstanceAPI(const PlayFabGroupsInstanceAPI& source) = delete; // disable copy
        PlayFabGroupsInstanceAPI(PlayFabGroupsInstanceAPI&&) = delete; // disable move
        PlayFabGroupsInstanceAPI& operator=(const PlayFabGroupsInstanceAPI& source) = delete; // disable assignment
        PlayFabGroupsInstanceAPI& operator=(PlayFabGroupsInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        AsyncOp<BaseResult> AcceptGroupApplication(const PlayFabGroupsAcceptGroupApplicationRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AcceptGroupInvitation(const PlayFabGroupsAcceptGroupInvitationRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> AddMembers(const PlayFabGroupsAddMembersRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::ApplyToGroupResponse> ApplyToGroup(const PlayFabGroupsApplyToGroupRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> BlockEntity(const PlayFabGroupsBlockEntityRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> ChangeMemberRole(const PlayFabGroupsChangeMemberRoleRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::CreateGroupResponse> CreateGroup(const PlayFabGroupsCreateGroupRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::CreateGroupRoleResponse> CreateRole(const PlayFabGroupsCreateGroupRoleRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteGroup(const PlayFabGroupsDeleteGroupRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteRole(const PlayFabGroupsDeleteRoleRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::GetGroupResponse> GetGroup(const PlayFabGroupsGetGroupRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::InviteToGroupResponse> InviteToGroup(const PlayFabGroupsInviteToGroupRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::IsMemberResponse> IsMember(const PlayFabGroupsIsMemberRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::ListGroupApplicationsResponse> ListGroupApplications(const PlayFabGroupsListGroupApplicationsRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::ListGroupBlocksResponse> ListGroupBlocks(const PlayFabGroupsListGroupBlocksRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::ListGroupInvitationsResponse> ListGroupInvitations(const PlayFabGroupsListGroupInvitationsRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::ListGroupMembersResponse> ListGroupMembers(const PlayFabGroupsListGroupMembersRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::ListMembershipResponse> ListMembership(const PlayFabGroupsListMembershipRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::ListMembershipOpportunitiesResponse> ListMembershipOpportunities(const PlayFabGroupsListMembershipOpportunitiesRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveGroupApplication(const PlayFabGroupsRemoveGroupApplicationRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveGroupInvitation(const PlayFabGroupsRemoveGroupInvitationRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RemoveMembers(const PlayFabGroupsRemoveMembersRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnblockEntity(const PlayFabGroupsUnblockEntityRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::UpdateGroupResponse> UpdateGroup(const PlayFabGroupsUpdateGroupRequest& request, const TaskQueue& queue);
        AsyncOp<GroupsModels::UpdateGroupRoleResponse> UpdateRole(const PlayFabGroupsUpdateGroupRoleRequest& request, const TaskQueue& queue);

    };
}

#endif
