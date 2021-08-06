// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFGroupsDataModels.h>
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>

extern "C"
{

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Updates the key-value store of custom publisher settings
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// This API is designed to store publisher-specific values which can be read, but not written to, by
/// the client. This data is shared across all titles assigned to a particular publisher, and can be used
/// for cross-game coordination. Only titles assigned to a publisher can use this API. This operation
/// is additive. If a Key does not exist in the current dataset, it will be added with the specified Value.
/// If it already exists, the Value for that key will be overwritten with the new Value. For more information
/// email helloplayfab@microsoft.com See also PFAdminGetPublisherDataAsync
/// </remarks>
HRESULT PFGroupsAdminSetPublisherDataAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFSetPublisherDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

/// <summary>
/// Adds users to the set of those able to update both the shared data, as well as the set of users in
/// the group. Only users in the group can add new members. Shared Groups are designed for sharing data
/// between a very small number of players, please see our guide: https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PFGroupsClientAddSharedGroupMembersAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsAddSharedGroupMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Requests the creation of a shared group object, containing key/value pairs which may be updated by
/// all members of the group. Upon creation, the current user will be the only member of the group. Shared
/// Groups are designed for sharing data between a very small number of players, please see our guide:
/// https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If SharedGroupId is specified, the service will attempt to create a group with that identifier, and
/// will return an error if it is already in use. If no SharedGroupId is specified, a random identifier
/// will be assigned.
/// </remarks>
HRESULT PFGroupsClientCreateSharedGroupAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsCreateSharedGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a ClientCreateSharedGroup call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFGroupsClientCreateSharedGroupGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsClientCreateSharedGroupAsync call.
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
HRESULT PFGroupsClientCreateSharedGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFGroupsCreateSharedGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// Retrieves data stored in a shared group object, as well as the list of members in the group. Non-members
/// of the group may use this to retrieve group data, including membership, but they will not receive
/// data for keys marked as private. Shared Groups are designed for sharing data between a very small
/// number of players, please see our guide: https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFGroupsClientGetSharedGroupDataGetResult"/> to get the result.
/// </remarks>
HRESULT PFGroupsClientGetSharedGroupDataAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsGetSharedGroupDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsClientGetSharedGroupDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsClientGetSharedGroupDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsGetSharedGroupDataResult** result
) noexcept;

/// <summary>
/// Removes users from the set of those able to update the shared data and the set of users in the group.
/// Only users in the group can remove members. If as a result of the call, zero users remain with access,
/// the group and its associated data will be deleted. Shared Groups are designed for sharing data between
/// a very small number of players, please see our guide: https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PFGroupsClientRemoveSharedGroupMembersAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsRemoveSharedGroupMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Adds, updates, and removes data keys for a shared group object. If the permission is set to Public,
/// all fields updated or added in this call will be readable by users not in the group. By default, data
/// permissions are set to Private. Regardless of the permission setting, only members of the group can
/// update the data. Shared Groups are designed for sharing data between a very small number of players,
/// please see our guide: https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Note that in the case of multiple calls to write to the same shared group data keys, the last write
/// received by the PlayFab service will determine the value available to subsequent read operations.
/// For scenarios requiring coordination of data updates, it is recommended that titles make use of user
/// data with read permission set to public, or a combination of user data and shared group data.
/// </remarks>
HRESULT PFGroupsClientUpdateSharedGroupDataAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsUpdateSharedGroupDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Adds users to the set of those able to update both the shared data, as well as the set of users in
/// the group. Only users in the group (and the server) can add new members. Shared Groups are designed
/// for sharing data between a very small number of players, please see our guide: https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PFGroupsServerAddSharedGroupMembersAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFGroupsAddSharedGroupMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Requests the creation of a shared group object, containing key/value pairs which may be updated by
/// all members of the group. When created by a server, the group will initially have no members. Shared
/// Groups are designed for sharing data between a very small number of players, please see our guide:
/// https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If SharedGroupId is specified, the service will attempt to create a group with that identifier, and
/// will return an error if it is already in use. If no SharedGroupId is specified, a random identifier
/// will be assigned.
/// </remarks>
HRESULT PFGroupsServerCreateSharedGroupAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFGroupsCreateSharedGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a ServerCreateSharedGroup call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFGroupsServerCreateSharedGroupGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsServerCreateSharedGroupAsync call.
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
HRESULT PFGroupsServerCreateSharedGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFGroupsCreateSharedGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// Deletes a shared group, freeing up the shared group ID to be reused for a new group. Shared Groups
/// are designed for sharing data between a very small number of players, please see our guide: https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PFGroupsServerDeleteSharedGroupAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFGroupsDeleteSharedGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Retrieves data stored in a shared group object, as well as the list of members in the group. The
/// server can access all public and private group data. Shared Groups are designed for sharing data between
/// a very small number of players, please see our guide: https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFGroupsServerGetSharedGroupDataGetResult"/> to get the result.
/// </remarks>
HRESULT PFGroupsServerGetSharedGroupDataAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFGroupsGetSharedGroupDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsServerGetSharedGroupDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsServerGetSharedGroupDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsGetSharedGroupDataResult** result
) noexcept;

/// <summary>
/// Removes users from the set of those able to update the shared data and the set of users in the group.
/// Only users in the group can remove members. If as a result of the call, zero users remain with access,
/// the group and its associated data will be deleted. Shared Groups are designed for sharing data between
/// a very small number of players, please see our guide: https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PFGroupsServerRemoveSharedGroupMembersAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFGroupsRemoveSharedGroupMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Adds, updates, and removes data keys for a shared group object. If the permission is set to Public,
/// all fields updated or added in this call will be readable by users not in the group. By default, data
/// permissions are set to Private. Regardless of the permission setting, only members of the group (and
/// the server) can update the data. Shared Groups are designed for sharing data between a very small
/// number of players, please see our guide: https://docs.microsoft.com/gaming/playfab/features/social/groups/using-shared-group-data
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Note that in the case of multiple calls to write to the same shared group data keys, the last write
/// received by the PlayFab service will determine the value available to subsequent read operations.
/// For scenarios requiring coordination of data updates, it is recommended that titles make use of user
/// data with read permission set to public, or a combination of user data and shared group data.
/// </remarks>
HRESULT PFGroupsServerUpdateSharedGroupDataAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFGroupsUpdateSharedGroupDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Accepts an outstanding invitation to to join a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Accepts an outstanding invitation to to join a group if the invited entity is not blocked by the
/// group. Nothing is returned in the case of success. See also PFGroupApplyToGroupAsync, PFGroupListGroupApplicationsAsync,
/// PFGroupRemoveGroupApplicationAsync
/// </remarks>
HRESULT PFGroupsAcceptGroupApplicationAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsAcceptGroupApplicationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Accepts an invitation to join a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Accepts an outstanding invitation to join the group if the invited entity is not blocked by the group.
/// Only the invited entity or a parent in its chain (e.g. title) may accept the invitation on the invited
/// entity's behalf. Nothing is returned in the case of success. See also PFGroupInviteToGroupAsync, PFGroupListGroupInvitationsAsync,
/// PFGroupListMembershipOpportunitiesAsync, PFGroupRemoveGroupInvitationAsync
/// </remarks>
HRESULT PFGroupsAcceptGroupInvitationAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsAcceptGroupInvitationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Adds members to a group or role.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Adds members to a group or role. Existing members of the group will added to roles within the group,
/// but if the user is not already a member of the group, only title claimants may add them to the group,
/// and others must use the group application or invite system to add new members to a group. Returns
/// nothing if successful. See also PFGroupApplyToGroupAsync, PFGroupInviteToGroupAsync, PFGroupListGroupMembersAsync,
/// PFGroupRemoveMembersAsync
/// </remarks>
HRESULT PFGroupsAddMembersAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsAddMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Applies to join a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Creates an application to join a group. Calling this while a group application already exists will
/// return the same application instead of an error and will not refresh the time before the application
/// expires. By default, if the entity has an invitation to join the group outstanding, this will accept
/// the invitation to join the group instead and return an error indicating such, rather than creating
/// a duplicate application to join that will need to be cleaned up later. Returns information about the
/// application or an error indicating an invitation was accepted instead. See also PFGroupAcceptGroupApplicationAsync,
/// PFGroupListGroupApplicationsAsync, PFGroupRemoveGroupApplicationAsync
/// </remarks>
HRESULT PFGroupsApplyToGroupAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsApplyToGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsApplyToGroupAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsApplyToGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsApplyToGroupResponse** result
) noexcept;

/// <summary>
/// Blocks a list of entities from joining a group.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Blocks a list of entities from joining a group. Blocked entities may not create new applications
/// to join, be invited to join, accept an invitation, or have an application accepted. Failure due to
/// being blocked does not clean up existing applications or invitations to the group. No data is returned
/// in the case of success. See also PFGroupListGroupBlocksAsync, PFGroupUnblockEntityAsync
/// </remarks>
HRESULT PFGroupsBlockEntityAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsBlockEntityRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Changes the role membership of a list of entities from one role to another.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Changes the role membership of a list of entities from one role to another in in a single operation.
/// The destination role must already exist. This is equivalent to adding the entities to the destination
/// role and removing from the origin role. Returns nothing if successful. See also PFGroupAddMembersAsync,
/// PFGroupCreateRoleAsync, PFGroupRemoveMembersAsync
/// </remarks>
HRESULT PFGroupsChangeMemberRoleAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsChangeMemberRoleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Creates a new group.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Creates a new group, as well as administration and member roles, based off of a title's group template.
/// Returns information about the group that was created. See also PFGroupAddMembersAsync, PFGroupApplyToGroupAsync,
/// PFGroupDeleteGroupAsync, PFGroupInviteToGroupAsync, PFGroupListGroupMembersAsync, PFGroupRemoveMembersAsync
/// </remarks>
HRESULT PFGroupsCreateGroupAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsCreateGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsCreateGroupAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsCreateGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsCreateGroupResponse** result
) noexcept;

/// <summary>
/// Creates a new group role.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Creates a new role within an existing group, with no members. Both the role ID and role name must
/// be unique within the group, but the name can be the same as the ID. The role ID is set at creation
/// and cannot be changed. Returns information about the role that was created. See also PFGroupDeleteRoleAsync
/// </remarks>
HRESULT PFGroupsCreateRoleAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsCreateGroupRoleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateRole call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFGroupsCreateRoleGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsCreateRoleAsync call.
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
HRESULT PFGroupsCreateRoleGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFGroupsCreateGroupRoleResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// Deletes a group and all roles, invitations, join requests, and blocks associated with it.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Deletes a group and all roles, invitations, join requests, and blocks associated with it. Permission
/// to delete is only required the group itself to execute this action. The group and data cannot be cannot
/// be recovered once removed, but any abuse reports about the group will remain. No data is returned
/// in the case of success. See also PFGroupCreateGroupAsync
/// </remarks>
HRESULT PFGroupsDeleteGroupAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsDeleteGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Deletes an existing role in a group.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Returns information about the role See also PFGroupCreateRoleAsync
/// </remarks>
HRESULT PFGroupsDeleteRoleAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsDeleteRoleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets information about a group and its roles
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Returns the ID, name, role list and other non-membership related information about a group. See also
/// PFGroupUpdateGroupAsync
/// </remarks>
HRESULT PFGroupsGetGroupAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsGetGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsGetGroupAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsGetGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsGetGroupResponse** result
) noexcept;

/// <summary>
/// Invites a player to join a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Invites a player to join a group, if they are not blocked by the group. An optional role can be provided
/// to automatically assign the player to the role if they accept the invitation. By default, if the entity
/// has an application to the group outstanding, this will accept the application instead and return an
/// error indicating such, rather than creating a duplicate invitation to join that will need to be cleaned
/// up later. Returns information about the new invitation or an error indicating an existing application
/// to join was accepted. See also PFGroupAcceptGroupInvitationAsync, PFGroupListGroupInvitationsAsync,
/// PFGroupListMembershipOpportunitiesAsync, PFGroupRemoveGroupInvitationAsync
/// </remarks>
HRESULT PFGroupsInviteToGroupAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsInviteToGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsInviteToGroupAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsInviteToGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsInviteToGroupResponse** result
) noexcept;

/// <summary>
/// Checks to see if an entity is a member of a group or role within the group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Checks to see if an entity is a member of a group or role within the group. A result indicating if
/// the entity is a member of the group is returned, or a permission error if the caller does not have
/// permission to read the group's member list. See also PFGroupGetGroupAsync
/// </remarks>
HRESULT PFGroupsIsMemberAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsIsMemberRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsIsMemberAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PFGroupsIsMemberResponse object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFGroupsIsMemberGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFGroupsIsMemberResponse* result
) noexcept;

/// <summary>
/// Lists all outstanding requests to join a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Lists all outstanding requests to join a group. Returns a list of all requests to join, as well as
/// when the request will expire. To get the group applications for a specific entity, use ListMembershipOpportunities.
/// See also PFGroupAcceptGroupApplicationAsync, PFGroupApplyToGroupAsync, PFGroupRemoveGroupApplicationAsync
/// </remarks>
HRESULT PFGroupsListGroupApplicationsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsListGroupApplicationsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsListGroupApplicationsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsListGroupApplicationsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListGroupApplicationsResponse** result
) noexcept;

/// <summary>
/// Lists all entities blocked from joining a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Lists all entities blocked from joining a group. A list of blocked entities is returned See also
/// PFGroupBlockEntityAsync, PFGroupUnblockEntityAsync
/// </remarks>
HRESULT PFGroupsListGroupBlocksAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsListGroupBlocksRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsListGroupBlocksAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsListGroupBlocksGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListGroupBlocksResponse** result
) noexcept;

/// <summary>
/// Lists all outstanding invitations for a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Lists all outstanding invitations for a group. Returns a list of entities that have been invited,
/// as well as when the invitation will expire. To get the group invitations for a specific entity, use
/// ListMembershipOpportunities. See also PFGroupAcceptGroupInvitationAsync, PFGroupInviteToGroupAsync,
/// PFGroupListMembershipOpportunitiesAsync, PFGroupRemoveGroupInvitationAsync
/// </remarks>
HRESULT PFGroupsListGroupInvitationsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsListGroupInvitationsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsListGroupInvitationsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsListGroupInvitationsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListGroupInvitationsResponse** result
) noexcept;

/// <summary>
/// Lists all members for a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Gets a list of members and the roles they belong to within the group. If the caller does not have
/// permission to view the role, and the member is in no other role, the member is not displayed. Returns
/// a list of entities that are members of the group. See also PFGroupListMembershipAsync
/// </remarks>
HRESULT PFGroupsListGroupMembersAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsListGroupMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsListGroupMembersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsListGroupMembersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListGroupMembersResponse** result
) noexcept;

/// <summary>
/// Lists all groups and roles for an entity
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Lists the groups and roles that an entity is a part of, checking to see if group and role metadata
/// and memberships should be visible to the caller. If the entity is not in any roles that are visible
/// to the caller, the group is not returned in the results, even if the caller otherwise has permission
/// to see that the entity is a member of that group. See also PFGroupListGroupMembersAsync, PFGroupListMembershipOpportunitiesAsync
/// </remarks>
HRESULT PFGroupsListMembershipAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsListMembershipRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsListMembershipAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsListMembershipGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListMembershipResponse** result
) noexcept;

/// <summary>
/// Lists all outstanding invitations and group applications for an entity
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Lists all outstanding group applications and invitations for an entity. Anyone may call this for
/// any entity, but data will only be returned for the entity or a parent of that entity. To list invitations
/// or applications for a group to check if a player is trying to join, use ListGroupInvitations and ListGroupApplications.
/// See also PFGroupListGroupApplicationsAsync, PFGroupListGroupInvitationsAsync
/// </remarks>
HRESULT PFGroupsListMembershipOpportunitiesAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsListMembershipOpportunitiesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsListMembershipOpportunitiesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsListMembershipOpportunitiesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsListMembershipOpportunitiesResponse** result
) noexcept;

/// <summary>
/// Removes an application to join a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Removes an existing application to join the group. This is used for both rejection of an application
/// as well as withdrawing an application. The applying entity or a parent in its chain (e.g. title) may
/// withdraw the application, and any caller with appropriate access in the group may reject an application.
/// No data is returned in the case of success. See also PFGroupAcceptGroupApplicationAsync, PFGroupApplyToGroupAsync,
/// PFGroupListGroupApplicationsAsync
/// </remarks>
HRESULT PFGroupsRemoveGroupApplicationAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsRemoveGroupApplicationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Removes an invitation join a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Removes an existing invitation to join the group. This is used for both rejection of an invitation
/// as well as rescinding an invitation. The invited entity or a parent in its chain (e.g. title) may
/// reject the invitation by calling this method, and any caller with appropriate access in the group
/// may rescind an invitation. No data is returned in the case of success. See also PFGroupAcceptGroupInvitationAsync,
/// PFGroupInviteToGroupAsync, PFGroupListGroupInvitationsAsync, PFGroupListMembershipOpportunitiesAsync
/// </remarks>
HRESULT PFGroupsRemoveGroupInvitationAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsRemoveGroupInvitationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Removes members from a group.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Removes members from a group. A member can always remove themselves from a group, regardless of permissions.
/// Returns nothing if successful. See also PFGroupAddMembersAsync, PFGroupListGroupMembersAsync
/// </remarks>
HRESULT PFGroupsRemoveMembersAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsRemoveMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Unblocks a list of entities from joining a group
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Unblocks a list of entities from joining a group. No data is returned in the case of success. See
/// also PFGroupBlockEntityAsync, PFGroupListGroupBlocksAsync
/// </remarks>
HRESULT PFGroupsUnblockEntityAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsUnblockEntityRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Updates non-membership data about a group.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Updates data about a group, such as the name or default member role. Returns information about whether
/// the update was successful. Only title claimants may modify the administration role for a group. See
/// also PFGroupCreateGroupAsync, PFGroupDeleteGroupAsync, PFGroupGetGroupAsync
/// </remarks>
HRESULT PFGroupsUpdateGroupAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsUpdateGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsUpdateGroupAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsUpdateGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsUpdateGroupResponse** result
) noexcept;

/// <summary>
/// Updates metadata about a role.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Updates the role name. Returns information about whether the update was successful. See also PFGroupCreateRoleAsync,
/// PFGroupDeleteRoleAsync
/// </remarks>
HRESULT PFGroupsUpdateRoleAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFGroupsUpdateGroupRoleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFGroupsUpdateRoleAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFGroupsUpdateRoleGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGroupsUpdateGroupRoleResponse** result
) noexcept;


}