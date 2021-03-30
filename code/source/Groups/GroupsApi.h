#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <Groups/GroupsDataModels.h>
#include <playfab/HttpClient.h>
#include <playfab/TaskQueue.h>

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
        void AcceptGroupApplication(GroupsModels::AcceptGroupApplicationRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void AcceptGroupInvitation(GroupsModels::AcceptGroupInvitationRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void AddMembers(GroupsModels::AddMembersRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ApplyToGroup(GroupsModels::ApplyToGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::ApplyToGroupResponse> callback, const ErrorCallback errorCallback = nullptr);
        void BlockEntity(GroupsModels::BlockEntityRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ChangeMemberRole(GroupsModels::ChangeMemberRoleRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void CreateGroup(GroupsModels::CreateGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::CreateGroupResponse> callback, const ErrorCallback errorCallback = nullptr);
        void CreateRole(GroupsModels::CreateGroupRoleRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::CreateGroupRoleResponse> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteGroup(GroupsModels::DeleteGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteRole(GroupsModels::DeleteRoleRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetGroup(GroupsModels::GetGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::GetGroupResponse> callback, const ErrorCallback errorCallback = nullptr);
        void InviteToGroup(GroupsModels::InviteToGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::InviteToGroupResponse> callback, const ErrorCallback errorCallback = nullptr);
        void IsMember(GroupsModels::IsMemberRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::IsMemberResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListGroupApplications(GroupsModels::ListGroupApplicationsRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::ListGroupApplicationsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListGroupBlocks(GroupsModels::ListGroupBlocksRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::ListGroupBlocksResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListGroupInvitations(GroupsModels::ListGroupInvitationsRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::ListGroupInvitationsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListGroupMembers(GroupsModels::ListGroupMembersRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::ListGroupMembersResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListMembership(GroupsModels::ListMembershipRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::ListMembershipResponse> callback, const ErrorCallback errorCallback = nullptr);
        void ListMembershipOpportunities(GroupsModels::ListMembershipOpportunitiesRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::ListMembershipOpportunitiesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveGroupApplication(GroupsModels::RemoveGroupApplicationRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveGroupInvitation(GroupsModels::RemoveGroupInvitationRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void RemoveMembers(GroupsModels::RemoveMembersRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UnblockEntity(GroupsModels::UnblockEntityRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateGroup(GroupsModels::UpdateGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::UpdateGroupResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateRole(GroupsModels::UpdateGroupRoleRequest& request, const TaskQueue& queue, const ProcessApiCallback<GroupsModels::UpdateGroupRoleResponse> callback, const ErrorCallback errorCallback = nullptr);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
