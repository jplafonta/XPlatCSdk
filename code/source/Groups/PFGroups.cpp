#include "stdafx.h"
#include <playfab/PFGroups.h>
#include "Groups.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::GroupsModels;

HRESULT PFGroupsAdminSetPublisherDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFSetPublisherDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GroupsAPI::AdminSetPublisherData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsClientAddSharedGroupMembersAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsAddSharedGroupMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ClientAddSharedGroupMembers, &contextHandle->entity->groupsAPI, AddSharedGroupMembersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsClientCreateSharedGroupAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsCreateSharedGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ClientCreateSharedGroup, &contextHandle->entity->groupsAPI, CreateSharedGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsClientCreateSharedGroupGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFGroupsClientCreateSharedGroupGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFGroupsCreateSharedGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFGroupsCreateSharedGroupResult*>(buffer);

    return S_OK;
}

HRESULT PFGroupsClientGetSharedGroupDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsGetSharedGroupDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ClientGetSharedGroupData, &contextHandle->entity->groupsAPI, GetSharedGroupDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsClientGetSharedGroupDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsGetSharedGroupDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsGetSharedGroupDataResult*)(std::dynamic_pointer_cast<GetSharedGroupDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsClientRemoveSharedGroupMembersAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsRemoveSharedGroupMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ClientRemoveSharedGroupMembers, &contextHandle->entity->groupsAPI, RemoveSharedGroupMembersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsClientUpdateSharedGroupDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsUpdateSharedGroupDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ClientUpdateSharedGroupData, &contextHandle->entity->groupsAPI, UpdateSharedGroupDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsServerAddSharedGroupMembersAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGroupsAddSharedGroupMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GroupsAPI::ServerAddSharedGroupMembers, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsServerCreateSharedGroupAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGroupsCreateSharedGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GroupsAPI::ServerCreateSharedGroup, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsServerCreateSharedGroupGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFGroupsServerCreateSharedGroupGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFGroupsCreateSharedGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFGroupsCreateSharedGroupResult*>(buffer);

    return S_OK;
}

HRESULT PFGroupsServerDeleteSharedGroupAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGroupsDeleteSharedGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GroupsAPI::ServerDeleteSharedGroup, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsServerGetSharedGroupDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGroupsGetSharedGroupDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GroupsAPI::ServerGetSharedGroupData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsServerGetSharedGroupDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsGetSharedGroupDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsGetSharedGroupDataResult*)(std::dynamic_pointer_cast<GetSharedGroupDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsServerRemoveSharedGroupMembersAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGroupsRemoveSharedGroupMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GroupsAPI::ServerRemoveSharedGroupMembers, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsServerUpdateSharedGroupDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGroupsUpdateSharedGroupDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GroupsAPI::ServerUpdateSharedGroupData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsAcceptGroupApplicationAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsAcceptGroupApplicationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::AcceptGroupApplication, &contextHandle->entity->groupsAPI, AcceptGroupApplicationRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsAcceptGroupInvitationAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsAcceptGroupInvitationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::AcceptGroupInvitation, &contextHandle->entity->groupsAPI, AcceptGroupInvitationRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsAddMembersAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsAddMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::AddMembers, &contextHandle->entity->groupsAPI, AddMembersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsApplyToGroupAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsApplyToGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ApplyToGroup, &contextHandle->entity->groupsAPI, ApplyToGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsApplyToGroupGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsApplyToGroupResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsApplyToGroupResponse*)(std::dynamic_pointer_cast<ApplyToGroupResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsBlockEntityAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsBlockEntityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::BlockEntity, &contextHandle->entity->groupsAPI, BlockEntityRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsChangeMemberRoleAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsChangeMemberRoleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ChangeMemberRole, &contextHandle->entity->groupsAPI, ChangeMemberRoleRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsCreateGroupAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsCreateGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::CreateGroup, &contextHandle->entity->groupsAPI, CreateGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsCreateGroupGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsCreateGroupResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsCreateGroupResponse*)(std::dynamic_pointer_cast<CreateGroupResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsCreateRoleAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsCreateGroupRoleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::CreateRole, &contextHandle->entity->groupsAPI, CreateGroupRoleRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsCreateRoleGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFGroupsCreateRoleGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFGroupsCreateGroupRoleResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFGroupsCreateGroupRoleResponse*>(buffer);

    return S_OK;
}

HRESULT PFGroupsDeleteGroupAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsDeleteGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::DeleteGroup, &contextHandle->entity->groupsAPI, DeleteGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsDeleteRoleAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsDeleteRoleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::DeleteRole, &contextHandle->entity->groupsAPI, DeleteRoleRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsGetGroupAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsGetGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::GetGroup, &contextHandle->entity->groupsAPI, GetGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsGetGroupGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsGetGroupResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsGetGroupResponse*)(std::dynamic_pointer_cast<GetGroupResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsInviteToGroupAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsInviteToGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::InviteToGroup, &contextHandle->entity->groupsAPI, InviteToGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsInviteToGroupGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsInviteToGroupResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsInviteToGroupResponse*)(std::dynamic_pointer_cast<InviteToGroupResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsIsMemberAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsIsMemberRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::IsMember, &contextHandle->entity->groupsAPI, IsMemberRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsIsMemberGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFGroupsIsMemberResponse* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFGroupsIsMemberResponse), result, nullptr);
}

HRESULT PFGroupsListGroupApplicationsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsListGroupApplicationsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ListGroupApplications, &contextHandle->entity->groupsAPI, ListGroupApplicationsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsListGroupApplicationsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListGroupApplicationsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsListGroupApplicationsResponse*)(std::dynamic_pointer_cast<ListGroupApplicationsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsListGroupBlocksAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsListGroupBlocksRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ListGroupBlocks, &contextHandle->entity->groupsAPI, ListGroupBlocksRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsListGroupBlocksGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListGroupBlocksResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsListGroupBlocksResponse*)(std::dynamic_pointer_cast<ListGroupBlocksResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsListGroupInvitationsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsListGroupInvitationsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ListGroupInvitations, &contextHandle->entity->groupsAPI, ListGroupInvitationsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsListGroupInvitationsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListGroupInvitationsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsListGroupInvitationsResponse*)(std::dynamic_pointer_cast<ListGroupInvitationsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsListGroupMembersAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsListGroupMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ListGroupMembers, &contextHandle->entity->groupsAPI, ListGroupMembersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsListGroupMembersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListGroupMembersResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsListGroupMembersResponse*)(std::dynamic_pointer_cast<ListGroupMembersResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsListMembershipAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsListMembershipRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ListMembership, &contextHandle->entity->groupsAPI, ListMembershipRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsListMembershipGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListMembershipResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsListMembershipResponse*)(std::dynamic_pointer_cast<ListMembershipResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsListMembershipOpportunitiesAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsListMembershipOpportunitiesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::ListMembershipOpportunities, &contextHandle->entity->groupsAPI, ListMembershipOpportunitiesRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsListMembershipOpportunitiesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListMembershipOpportunitiesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsListMembershipOpportunitiesResponse*)(std::dynamic_pointer_cast<ListMembershipOpportunitiesResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsRemoveGroupApplicationAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsRemoveGroupApplicationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::RemoveGroupApplication, &contextHandle->entity->groupsAPI, RemoveGroupApplicationRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsRemoveGroupInvitationAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsRemoveGroupInvitationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::RemoveGroupInvitation, &contextHandle->entity->groupsAPI, RemoveGroupInvitationRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsRemoveMembersAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsRemoveMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::RemoveMembers, &contextHandle->entity->groupsAPI, RemoveMembersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsUnblockEntityAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsUnblockEntityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::UnblockEntity, &contextHandle->entity->groupsAPI, UnblockEntityRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsUpdateGroupAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsUpdateGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::UpdateGroup, &contextHandle->entity->groupsAPI, UpdateGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsUpdateGroupGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsUpdateGroupResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsUpdateGroupResponse*)(std::dynamic_pointer_cast<UpdateGroupResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGroupsUpdateRoleAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGroupsUpdateGroupRoleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&GroupsAPI::UpdateRole, &contextHandle->entity->groupsAPI, UpdateGroupRoleRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGroupsUpdateRoleGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsUpdateGroupRoleResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGroupsUpdateGroupRoleResponse*)(std::dynamic_pointer_cast<UpdateGroupRoleResponse>((*resultHandle)->result).get());

    return S_OK;
}

