#include "stdafx.h"
#include "Groups.h"

namespace PlayFab
{

using namespace GroupsModels;

GroupsAPI::GroupsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<void> GroupsAPI::AdminSetPublisherData(
    const PFSetPublisherDataRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/SetPublisherData" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<void> GroupsAPI::ClientAddSharedGroupMembers(
    const PFGroupsAddSharedGroupMembersRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/AddSharedGroupMembers" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<CreateSharedGroupResult> GroupsAPI::ClientCreateSharedGroup(
    const PFGroupsCreateSharedGroupRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/CreateSharedGroup" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateSharedGroupResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateSharedGroupResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateSharedGroupResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetSharedGroupDataResult> GroupsAPI::ClientGetSharedGroupData(
    const PFGroupsGetSharedGroupDataRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/GetSharedGroupData" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetSharedGroupDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetSharedGroupDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetSharedGroupDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::ClientRemoveSharedGroupMembers(
    const PFGroupsRemoveSharedGroupMembersRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/RemoveSharedGroupMembers" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<void> GroupsAPI::ClientUpdateSharedGroupData(
    const PFGroupsUpdateSharedGroupDataRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/UpdateSharedGroupData" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<void> GroupsAPI::ServerAddSharedGroupMembers(
    const PFGroupsAddSharedGroupMembersRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/AddSharedGroupMembers" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<CreateSharedGroupResult> GroupsAPI::ServerCreateSharedGroup(
    const PFGroupsCreateSharedGroupRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/CreateSharedGroup" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateSharedGroupResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateSharedGroupResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateSharedGroupResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::ServerDeleteSharedGroup(
    const PFGroupsDeleteSharedGroupRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/DeleteSharedGroup" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<GetSharedGroupDataResult> GroupsAPI::ServerGetSharedGroupData(
    const PFGroupsGetSharedGroupDataRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/GetSharedGroupData" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetSharedGroupDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetSharedGroupDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetSharedGroupDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> GroupsAPI::ServerRemoveSharedGroupMembers(
    const PFGroupsRemoveSharedGroupMembersRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/RemoveSharedGroupMembers" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<void> GroupsAPI::ServerUpdateSharedGroupData(
    const PFGroupsUpdateSharedGroupDataRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/UpdateSharedGroupData" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<void> GroupsAPI::AcceptGroupApplication(
    const PFGroupsAcceptGroupApplicationRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/AcceptGroupApplication" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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
    const PFGroupsAcceptGroupInvitationRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/AcceptGroupInvitation" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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
    const PFGroupsAddMembersRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/AddMembers" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<ApplyToGroupResponse> GroupsAPI::ApplyToGroup(
    const PFGroupsApplyToGroupRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/ApplyToGroup" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ApplyToGroupResponse>
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
    const PFGroupsBlockEntityRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/BlockEntity" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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
    const PFGroupsChangeMemberRoleRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/ChangeMemberRole" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<CreateGroupResponse> GroupsAPI::CreateGroup(
    const PFGroupsCreateGroupRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/CreateGroup" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateGroupResponse>
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

AsyncOp<CreateGroupRoleResponse> GroupsAPI::CreateRole(
    const PFGroupsCreateGroupRoleRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/CreateRole" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateGroupRoleResponse>
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
    const PFGroupsDeleteGroupRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/DeleteGroup" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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
    const PFGroupsDeleteRoleRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/DeleteRole" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<GetGroupResponse> GroupsAPI::GetGroup(
    const PFGroupsGetGroupRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/GetGroup" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetGroupResponse>
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

AsyncOp<InviteToGroupResponse> GroupsAPI::InviteToGroup(
    const PFGroupsInviteToGroupRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/InviteToGroup" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<InviteToGroupResponse>
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

AsyncOp<IsMemberResponse> GroupsAPI::IsMember(
    const PFGroupsIsMemberRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/IsMember" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<IsMemberResponse>
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

AsyncOp<ListGroupApplicationsResponse> GroupsAPI::ListGroupApplications(
    const PFGroupsListGroupApplicationsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/ListGroupApplications" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListGroupApplicationsResponse>
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

AsyncOp<ListGroupBlocksResponse> GroupsAPI::ListGroupBlocks(
    const PFGroupsListGroupBlocksRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/ListGroupBlocks" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListGroupBlocksResponse>
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

AsyncOp<ListGroupInvitationsResponse> GroupsAPI::ListGroupInvitations(
    const PFGroupsListGroupInvitationsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/ListGroupInvitations" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListGroupInvitationsResponse>
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

AsyncOp<ListGroupMembersResponse> GroupsAPI::ListGroupMembers(
    const PFGroupsListGroupMembersRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/ListGroupMembers" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListGroupMembersResponse>
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

AsyncOp<ListMembershipResponse> GroupsAPI::ListMembership(
    const PFGroupsListMembershipRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/ListMembership" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListMembershipResponse>
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

AsyncOp<ListMembershipOpportunitiesResponse> GroupsAPI::ListMembershipOpportunities(
    const PFGroupsListMembershipOpportunitiesRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/ListMembershipOpportunities" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListMembershipOpportunitiesResponse>
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
    const PFGroupsRemoveGroupApplicationRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/RemoveGroupApplication" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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
    const PFGroupsRemoveGroupInvitationRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/RemoveGroupInvitation" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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
    const PFGroupsRemoveMembersRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/RemoveMembers" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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
    const PFGroupsUnblockEntityRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/UnblockEntity" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<UpdateGroupResponse> GroupsAPI::UpdateGroup(
    const PFGroupsUpdateGroupRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/UpdateGroup" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<UpdateGroupResponse>
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

AsyncOp<UpdateGroupRoleResponse> GroupsAPI::UpdateRole(
    const PFGroupsUpdateGroupRoleRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Group/UpdateRole" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<UpdateGroupRoleResponse>
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
