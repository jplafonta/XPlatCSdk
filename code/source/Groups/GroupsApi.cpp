#include "stdafx.h"

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "GroupsApi.h"
#include "PlayFabSettings.h"

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace GroupsModels;

    PlayFabGroupsInstanceAPI::PlayFabGroupsInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    PlayFabGroupsInstanceAPI::PlayFabGroupsInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    SharedPtr<PlayFabApiSettings> PlayFabGroupsInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabGroupsInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabGroupsInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabGroups instance APIs

    void PlayFabGroupsInstanceAPI::AcceptGroupApplication(
        AcceptGroupApplicationRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/AcceptGroupApplication",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::AcceptGroupInvitation(
        AcceptGroupInvitationRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/AcceptGroupInvitation",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::AddMembers(
        AddMembersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/AddMembers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::ApplyToGroup(
        ApplyToGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ApplyToGroupResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ApplyToGroupResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/ApplyToGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::BlockEntity(
        BlockEntityRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/BlockEntity",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::ChangeMemberRole(
        ChangeMemberRoleRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/ChangeMemberRole",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::CreateGroup(
        CreateGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateGroupResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateGroupResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/CreateGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::CreateRole(
        CreateGroupRoleRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateGroupRoleResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateGroupRoleResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/CreateRole",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::DeleteGroup(
        DeleteGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/DeleteGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::DeleteRole(
        DeleteRoleRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/DeleteRole",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::GetGroup(
        GetGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetGroupResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetGroupResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/GetGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::InviteToGroup(
        InviteToGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<InviteToGroupResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            InviteToGroupResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/InviteToGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::IsMember(
        IsMemberRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<IsMemberResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            IsMemberResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/IsMember",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::ListGroupApplications(
        ListGroupApplicationsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListGroupApplicationsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListGroupApplicationsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/ListGroupApplications",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::ListGroupBlocks(
        ListGroupBlocksRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListGroupBlocksResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListGroupBlocksResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/ListGroupBlocks",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::ListGroupInvitations(
        ListGroupInvitationsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListGroupInvitationsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListGroupInvitationsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/ListGroupInvitations",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::ListGroupMembers(
        ListGroupMembersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListGroupMembersResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListGroupMembersResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/ListGroupMembers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::ListMembership(
        ListMembershipRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListMembershipResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListMembershipResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/ListMembership",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::ListMembershipOpportunities(
        ListMembershipOpportunitiesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListMembershipOpportunitiesResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListMembershipOpportunitiesResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/ListMembershipOpportunities",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::RemoveGroupApplication(
        RemoveGroupApplicationRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/RemoveGroupApplication",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::RemoveGroupInvitation(
        RemoveGroupInvitationRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/RemoveGroupInvitation",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::RemoveMembers(
        RemoveMembersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/RemoveMembers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::UnblockEntity(
        UnblockEntityRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/UnblockEntity",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::UpdateGroup(
        UpdateGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateGroupResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateGroupResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/UpdateGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabGroupsInstanceAPI::UpdateRole(
        UpdateGroupRoleRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateGroupRoleResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateGroupRoleResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Group/UpdateRole",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    bool PlayFabGroupsInstanceAPI::ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler)
    {
        if (httpResult.serviceResponse.HttpCode == 200)
        {
            result.FromJson(httpResult.serviceResponse.Data);
            return true;
        }
        else // Process the error case
        {
            if (PlayFabSettings::globalErrorHandler != nullptr)
            {
                PlayFabSettings::globalErrorHandler(httpResult.serviceResponse);
            }
            if (errorHandler)
            {
                errorHandler(httpResult.serviceResponse);
            }
            return false;
        }
    }
}

#endif

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (default: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)
