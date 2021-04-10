// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabGroupsDataModels.h>
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>

extern "C"
{

/// <summary>
/// <AcceptGroupApplication documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsAcceptGroupApplicationAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsAcceptGroupApplicationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <AcceptGroupInvitation documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsAcceptGroupInvitationAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsAcceptGroupInvitationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <AddMembers documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsAddMembersAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsAddMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <ApplyToGroup documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsApplyToGroupGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsApplyToGroupAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsApplyToGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful ApplyToGroup call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsApplyToGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsApplyToGroupResponse** result
) noexcept;

/// <summary>
/// <BlockEntity documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsBlockEntityAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsBlockEntityRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <ChangeMemberRole documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsChangeMemberRoleAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsChangeMemberRoleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <CreateGroup documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsCreateGroupGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsCreateGroupAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsCreateGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful CreateGroup call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsCreateGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsCreateGroupResponse** result
) noexcept;

/// <summary>
/// <CreateRole documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsCreateRoleGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsCreateRoleAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsCreateGroupRoleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateRole call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabGroupsCreateRoleGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful CreateRole call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The size of the buffer for the result object.</param>
/// <param name="buffer">Byte buffer used for the result value and its fields.</param>
/// <param name="result">Pointer to the result object.</param>
/// <param name="bufferUsed">The number of bytes in the provided buffer that were used.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// result is a pointer within buffer and does not need to be freed separately.
/// </remarks>
HRESULT PlayFabGroupsCreateRoleGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabGroupsCreateGroupRoleResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;
    
/// <summary>
/// <DeleteGroup documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsDeleteGroupAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsDeleteGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <DeleteRole documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsDeleteRoleAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsDeleteRoleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <GetGroup documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsGetGroupGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsGetGroupAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsGetGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetGroup call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsGetGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsGetGroupResponse** result
) noexcept;

/// <summary>
/// <InviteToGroup documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsInviteToGroupGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsInviteToGroupAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsInviteToGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful InviteToGroup call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsInviteToGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsInviteToGroupResponse** result
) noexcept;

/// <summary>
/// <IsMember documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsIsMemberGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsIsMemberAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsIsMemberRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful IsMember call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabGroupsIsMemberResponse object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabGroupsIsMemberGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabGroupsIsMemberResponse* result
) noexcept;
    
/// <summary>
/// <ListGroupApplications documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsListGroupApplicationsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsListGroupApplicationsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsListGroupApplicationsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful ListGroupApplications call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsListGroupApplicationsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListGroupApplicationsResponse** result
) noexcept;

/// <summary>
/// <ListGroupBlocks documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsListGroupBlocksGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsListGroupBlocksAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsListGroupBlocksRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful ListGroupBlocks call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsListGroupBlocksGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListGroupBlocksResponse** result
) noexcept;

/// <summary>
/// <ListGroupInvitations documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsListGroupInvitationsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsListGroupInvitationsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsListGroupInvitationsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful ListGroupInvitations call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsListGroupInvitationsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListGroupInvitationsResponse** result
) noexcept;

/// <summary>
/// <ListGroupMembers documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsListGroupMembersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsListGroupMembersAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsListGroupMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful ListGroupMembers call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsListGroupMembersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListGroupMembersResponse** result
) noexcept;

/// <summary>
/// <ListMembership documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsListMembershipGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsListMembershipAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsListMembershipRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful ListMembership call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsListMembershipGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListMembershipResponse** result
) noexcept;

/// <summary>
/// <ListMembershipOpportunities documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsListMembershipOpportunitiesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsListMembershipOpportunitiesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsListMembershipOpportunitiesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful ListMembershipOpportunities call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsListMembershipOpportunitiesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsListMembershipOpportunitiesResponse** result
) noexcept;

/// <summary>
/// <RemoveGroupApplication documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsRemoveGroupApplicationAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsRemoveGroupApplicationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <RemoveGroupInvitation documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsRemoveGroupInvitationAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsRemoveGroupInvitationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <RemoveMembers documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsRemoveMembersAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsRemoveMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <UnblockEntity documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabGroupsUnblockEntityAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsUnblockEntityRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <UpdateGroup documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsUpdateGroupGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsUpdateGroupAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsUpdateGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful UpdateGroup call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsUpdateGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsUpdateGroupResponse** result
) noexcept;

/// <summary>
/// <UpdateRole documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGroupsUpdateRoleGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabGroupsUpdateRoleAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabGroupsUpdateGroupRoleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful UpdateRole call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabGroupsUpdateRoleGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabGroupsUpdateGroupRoleResponse** result
) noexcept;


}