#include "stdafx.h"
#include <playfab/PlayFabGroupsApi.h>
#include "GroupsApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::GroupsModels;

HRESULT PlayFabGroupsAcceptGroupApplicationAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsAcceptGroupApplicationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::AcceptGroupApplication, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsAcceptGroupInvitationAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsAcceptGroupInvitationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::AcceptGroupInvitation, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsAddMembersAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsAddMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::AddMembers, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsApplyToGroupAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsApplyToGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::ApplyToGroup, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsApplyToGroupGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsApplyToGroupResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsApplyToGroupResponse*)(std::dynamic_pointer_cast<ApplyToGroupResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsBlockEntityAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsBlockEntityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::BlockEntity, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsChangeMemberRoleAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsChangeMemberRoleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::ChangeMemberRole, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsCreateGroupAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsCreateGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::CreateGroup, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsCreateGroupGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsCreateGroupResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsCreateGroupResponse*)(std::dynamic_pointer_cast<CreateGroupResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsCreateRoleAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsCreateGroupRoleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::CreateRole, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsCreateRoleGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabGroupsCreateRoleGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabGroupsCreateGroupRoleResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabGroupsCreateGroupRoleResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabGroupsDeleteGroupAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsDeleteGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::DeleteGroup, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsDeleteRoleAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsDeleteRoleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::DeleteRole, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsGetGroupAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsGetGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::GetGroup, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsGetGroupGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsGetGroupResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsGetGroupResponse*)(std::dynamic_pointer_cast<GetGroupResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsInviteToGroupAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsInviteToGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::InviteToGroup, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsInviteToGroupGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsInviteToGroupResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsInviteToGroupResponse*)(std::dynamic_pointer_cast<InviteToGroupResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsIsMemberAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsIsMemberRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::IsMember, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsIsMemberGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabGroupsIsMemberResponse* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabGroupsIsMemberResponse), result, nullptr);
}
HRESULT PlayFabGroupsListGroupApplicationsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsListGroupApplicationsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::ListGroupApplications, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsListGroupApplicationsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListGroupApplicationsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsListGroupApplicationsResponse*)(std::dynamic_pointer_cast<ListGroupApplicationsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsListGroupBlocksAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsListGroupBlocksRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::ListGroupBlocks, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsListGroupBlocksGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListGroupBlocksResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsListGroupBlocksResponse*)(std::dynamic_pointer_cast<ListGroupBlocksResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsListGroupInvitationsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsListGroupInvitationsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::ListGroupInvitations, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsListGroupInvitationsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListGroupInvitationsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsListGroupInvitationsResponse*)(std::dynamic_pointer_cast<ListGroupInvitationsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsListGroupMembersAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsListGroupMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::ListGroupMembers, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsListGroupMembersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListGroupMembersResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsListGroupMembersResponse*)(std::dynamic_pointer_cast<ListGroupMembersResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsListMembershipAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsListMembershipRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::ListMembership, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsListMembershipGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListMembershipResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsListMembershipResponse*)(std::dynamic_pointer_cast<ListMembershipResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsListMembershipOpportunitiesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsListMembershipOpportunitiesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::ListMembershipOpportunities, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsListMembershipOpportunitiesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListMembershipOpportunitiesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsListMembershipOpportunitiesResponse*)(std::dynamic_pointer_cast<ListMembershipOpportunitiesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsRemoveGroupApplicationAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsRemoveGroupApplicationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::RemoveGroupApplication, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsRemoveGroupInvitationAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsRemoveGroupInvitationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::RemoveGroupInvitation, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsRemoveMembersAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsRemoveMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::RemoveMembers, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsUnblockEntityAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsUnblockEntityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::UnblockEntity, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsUpdateGroupAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsUpdateGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::UpdateGroup, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsUpdateGroupGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsUpdateGroupResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsUpdateGroupResponse*)(std::dynamic_pointer_cast<UpdateGroupResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabGroupsUpdateRoleAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabGroupsUpdateGroupRoleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&GroupsAPI::UpdateRole, &contextHandle->entity->groupsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabGroupsUpdateRoleGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsUpdateGroupRoleResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabGroupsUpdateGroupRoleResponse*)(std::dynamic_pointer_cast<UpdateGroupRoleResponse>((*resultHandle)->model).get());

    return S_OK;
}

