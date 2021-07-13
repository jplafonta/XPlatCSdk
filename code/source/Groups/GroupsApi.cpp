#include "stdafx.h"
#include "GroupsApi.h"

namespace PlayFab
{

using namespace GroupsModels;

GroupsAPI::GroupsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<void> GroupsAPI::AcceptGroupApplication(
    const PlayFabGroupsAcceptGroupApplicationRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/AcceptGroupApplication",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::AcceptGroupInvitation(
    const PlayFabGroupsAcceptGroupInvitationRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/AcceptGroupInvitation",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::AddMembers(
    const PlayFabGroupsAddMembersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/AddMembers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::ApplyToGroupResponse> GroupsAPI::ApplyToGroup(
    const PlayFabGroupsApplyToGroupRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/ApplyToGroup",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ApplyToGroupResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ApplyToGroupResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ApplyToGroupResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::BlockEntity(
    const PlayFabGroupsBlockEntityRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/BlockEntity",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::ChangeMemberRole(
    const PlayFabGroupsChangeMemberRoleRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/ChangeMemberRole",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::CreateGroupResponse> GroupsAPI::CreateGroup(
    const PlayFabGroupsCreateGroupRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/CreateGroup",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateGroupResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateGroupResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateGroupResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::CreateGroupRoleResponse> GroupsAPI::CreateRole(
    const PlayFabGroupsCreateGroupRoleRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/CreateRole",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateGroupRoleResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateGroupRoleResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateGroupRoleResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::DeleteGroup(
    const PlayFabGroupsDeleteGroupRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/DeleteGroup",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::DeleteRole(
    const PlayFabGroupsDeleteRoleRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/DeleteRole",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::GetGroupResponse> GroupsAPI::GetGroup(
    const PlayFabGroupsGetGroupRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/GetGroup",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetGroupResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetGroupResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetGroupResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::InviteToGroupResponse> GroupsAPI::InviteToGroup(
    const PlayFabGroupsInviteToGroupRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/InviteToGroup",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<InviteToGroupResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            InviteToGroupResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<InviteToGroupResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::IsMemberResponse> GroupsAPI::IsMember(
    const PlayFabGroupsIsMemberRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/IsMember",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<IsMemberResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            IsMemberResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<IsMemberResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::ListGroupApplicationsResponse> GroupsAPI::ListGroupApplications(
    const PlayFabGroupsListGroupApplicationsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/ListGroupApplications",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListGroupApplicationsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListGroupApplicationsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListGroupApplicationsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::ListGroupBlocksResponse> GroupsAPI::ListGroupBlocks(
    const PlayFabGroupsListGroupBlocksRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/ListGroupBlocks",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListGroupBlocksResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListGroupBlocksResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListGroupBlocksResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::ListGroupInvitationsResponse> GroupsAPI::ListGroupInvitations(
    const PlayFabGroupsListGroupInvitationsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/ListGroupInvitations",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListGroupInvitationsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListGroupInvitationsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListGroupInvitationsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::ListGroupMembersResponse> GroupsAPI::ListGroupMembers(
    const PlayFabGroupsListGroupMembersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/ListGroupMembers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListGroupMembersResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListGroupMembersResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListGroupMembersResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::ListMembershipResponse> GroupsAPI::ListMembership(
    const PlayFabGroupsListMembershipRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/ListMembership",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListMembershipResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListMembershipResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListMembershipResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::ListMembershipOpportunitiesResponse> GroupsAPI::ListMembershipOpportunities(
    const PlayFabGroupsListMembershipOpportunitiesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/ListMembershipOpportunities",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListMembershipOpportunitiesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListMembershipOpportunitiesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListMembershipOpportunitiesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::RemoveGroupApplication(
    const PlayFabGroupsRemoveGroupApplicationRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/RemoveGroupApplication",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::RemoveGroupInvitation(
    const PlayFabGroupsRemoveGroupInvitationRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/RemoveGroupInvitation",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::RemoveMembers(
    const PlayFabGroupsRemoveMembersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/RemoveMembers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::UnblockEntity(
    const PlayFabGroupsUnblockEntityRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/UnblockEntity",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::UpdateGroupResponse> GroupsAPI::UpdateGroup(
    const PlayFabGroupsUpdateGroupRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/UpdateGroup",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateGroupResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateGroupResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateGroupResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GroupsModels::UpdateGroupRoleResponse> GroupsAPI::UpdateRole(
    const PlayFabGroupsUpdateGroupRoleRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/Group/UpdateRole",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateGroupRoleResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateGroupRoleResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateGroupRoleResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
