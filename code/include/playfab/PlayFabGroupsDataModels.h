// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabSharedDataModels.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// OperationTypes enum.
/// </summary>
enum class PlayFabGroupsOperationTypes : uint32_t
{
    Created,
    Updated,
    Deleted,
    None
};

/// <summary>
/// PlayFabGroupsAcceptGroupApplicationRequest data model. Accepts an outstanding invitation to to join
/// a group if the invited entity is not blocked by the group. Nothing is returned in the case of success.
/// Request object for PlayFabGroupsAcceptGroupApplicationAsync.
/// </summary>
typedef struct PlayFabGroupsAcceptGroupApplicationRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// Optional. Type of the entity to accept as. If specified, must be the same entity as the claimant
    /// or an entity that is a child of the claimant entity. Defaults to the claimant entity.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsAcceptGroupApplicationRequest;

/// <summary>
/// PlayFabGroupsAcceptGroupInvitationRequest data model. Accepts an outstanding invitation to join the
/// group if the invited entity is not blocked by the group. Only the invited entity or a parent in its
/// chain (e.g. title) may accept the invitation on the invited entity's behalf. Nothing is returned in
/// the case of success. Request object for PlayFabGroupsAcceptGroupInvitationAsync.
/// </summary>
typedef struct PlayFabGroupsAcceptGroupInvitationRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsAcceptGroupInvitationRequest;

/// <summary>
/// PlayFabGroupsAddMembersRequest data model. Adds members to a group or role. Existing members of the
/// group will added to roles within the group, but if the user is not already a member of the group,
/// only title claimants may add them to the group, and others must use the group application or invite
/// system to add new members to a group. Returns nothing if successful. Request object for PlayFabGroupsAddMembersAsync.
/// </summary>
typedef struct PlayFabGroupsAddMembersRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// List of entities to add to the group. Only entities of type title_player_account and character
    /// may be added to groups.
    /// </summary>
    PlayFabEntityKey const* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

    /// <summary>
    /// (Optional) Optional: The ID of the existing role to add the entities to. If this is not specified,
    /// the default member role for the group will be used. Role IDs must be between 1 and 64 characters
    /// long.
    /// </summary>
    const char* roleId;

} PlayFabGroupsAddMembersRequest;

/// <summary>
/// PlayFabGroupsApplyToGroupRequest data model. Creates an application to join a group. Calling this
/// while a group application already exists will return the same application instead of an error and
/// will not refresh the time before the application expires. By default, if the entity has an invitation
/// to join the group outstanding, this will accept the invitation to join the group instead and return
/// an error indicating such, rather than creating a duplicate application to join that will need to be
/// cleaned up later. Returns information about the application or an error indicating an invitation was
/// accepted instead. Request object for PlayFabGroupsApplyToGroupAsync.
/// </summary>
typedef struct PlayFabGroupsApplyToGroupRequest
{
    /// <summary>
    /// (Optional) Optional, default true. Automatically accept an outstanding invitation if one exists
    /// instead of creating an application.
    /// </summary>
    bool const* autoAcceptOutstandingInvite;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsApplyToGroupRequest;

/// <summary>
/// PlayFabGroupsEntityWithLineage data model. Entity wrapper class that contains the entity key and
/// the entities that make up the lineage of the entity.
/// </summary>
typedef struct PlayFabGroupsEntityWithLineage
{
    /// <summary>
    /// (Optional) The entity key for the specified entity.
    /// </summary>
    PlayFabEntityKey const* key;

    /// <summary>
    /// (Optional) Dictionary of entity keys for related entities. Dictionary key is entity type.
    /// </summary>
    struct PlayFabEntityKeyDictionaryEntry const* lineage;

    /// <summary>
    /// Count of lineage
    /// </summary>
    uint32_t lineageCount;

} PlayFabGroupsEntityWithLineage;

/// <summary>
/// PlayFabGroupsApplyToGroupResponse data model. Describes an application to join a group. Result payload
/// for PlayFabGroupsApplyToGroupAsync.
/// </summary>
typedef struct PlayFabGroupsApplyToGroupResponse
{
    /// <summary>
    /// (Optional) Type of entity that requested membership.
    /// </summary>
    PlayFabGroupsEntityWithLineage const* entity;

    /// <summary>
    /// When the application to join will expire and be deleted.
    /// </summary>
    time_t expires;

    /// <summary>
    /// (Optional) ID of the group that the entity requesting membership to.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsApplyToGroupResponse;

/// <summary>
/// PlayFabGroupsBlockEntityRequest data model. Blocks a list of entities from joining a group. Blocked
/// entities may not create new applications to join, be invited to join, accept an invitation, or have
/// an application accepted. Failure due to being blocked does not clean up existing applications or invitations
/// to the group. No data is returned in the case of success. Request object for PlayFabGroupsBlockEntityAsync.
/// </summary>
typedef struct PlayFabGroupsBlockEntityRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsBlockEntityRequest;

/// <summary>
/// PlayFabGroupsChangeMemberRoleRequest data model. Changes the role membership of a list of entities
/// from one role to another in in a single operation. The destination role must already exist. This is
/// equivalent to adding the entities to the destination role and removing from the origin role. Returns
/// nothing if successful. Request object for PlayFabGroupsChangeMemberRoleAsync.
/// </summary>
typedef struct PlayFabGroupsChangeMemberRoleRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The ID of the role that the entities will become a member of. This must be an existing
    /// role. Role IDs must be between 1 and 64 characters long.
    /// </summary>
    const char* destinationRoleId;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// List of entities to move between roles in the group. All entities in this list must be members
    /// of the group and origin role.
    /// </summary>
    PlayFabEntityKey const* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

    /// <summary>
    /// The ID of the role that the entities currently are a member of. Role IDs must be between 1 and
    /// 64 characters long.
    /// </summary>
    const char* originRoleId;

} PlayFabGroupsChangeMemberRoleRequest;

/// <summary>
/// PlayFabGroupsCreateGroupRequest data model. Creates a new group, as well as administration and member
/// roles, based off of a title's group template. Returns information about the group that was created.
/// Request object for PlayFabGroupsCreateGroupAsync.
/// </summary>
typedef struct PlayFabGroupsCreateGroupRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The name of the group. This is unique at the title level by default.
    /// </summary>
    const char* groupName;

} PlayFabGroupsCreateGroupRequest;

/// <summary>
/// PlayFabGroupsCreateGroupResponse data model. Result payload for PlayFabGroupsCreateGroupAsync.
/// </summary>
typedef struct PlayFabGroupsCreateGroupResponse
{
    /// <summary>
    /// (Optional) The ID of the administrator role for the group.
    /// </summary>
    const char* adminRoleId;

    /// <summary>
    /// The server date and time the group was created.
    /// </summary>
    time_t created;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) The name of the group.
    /// </summary>
    const char* groupName;

    /// <summary>
    /// (Optional) The ID of the default member role for the group.
    /// </summary>
    const char* memberRoleId;

    /// <summary>
    /// The current version of the profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

    /// <summary>
    /// (Optional) The list of roles and names that belong to the group.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* roles;

    /// <summary>
    /// Count of roles
    /// </summary>
    uint32_t rolesCount;

} PlayFabGroupsCreateGroupResponse;

/// <summary>
/// PlayFabGroupsCreateGroupRoleRequest data model. Creates a new role within an existing group, with
/// no members. Both the role ID and role name must be unique within the group, but the name can be the
/// same as the ID. The role ID is set at creation and cannot be changed. Returns information about the
/// role that was created. Request object for PlayFabGroupsCreateRoleAsync.
/// </summary>
typedef struct PlayFabGroupsCreateGroupRoleRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// The ID of the role. This must be unique within the group and cannot be changed. Role IDs must
    /// be between 1 and 64 characters long.
    /// </summary>
    const char* roleId;

    /// <summary>
    /// The name of the role. This must be unique within the group and can be changed later. Role names
    /// must be between 1 and 100 characters long.
    /// </summary>
    const char* roleName;

} PlayFabGroupsCreateGroupRoleRequest;

/// <summary>
/// PlayFabGroupsCreateGroupRoleResponse data model. Result payload for PlayFabGroupsCreateRoleAsync.
/// </summary>
typedef struct PlayFabGroupsCreateGroupRoleResponse
{
    /// <summary>
    /// The current version of the group profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

    /// <summary>
    /// (Optional) ID for the role.
    /// </summary>
    const char* roleId;

    /// <summary>
    /// (Optional) The name of the role.
    /// </summary>
    const char* roleName;

} PlayFabGroupsCreateGroupRoleResponse;

/// <summary>
/// PlayFabGroupsDeleteGroupRequest data model. Deletes a group and all roles, invitations, join requests,
/// and blocks associated with it. Permission to delete is only required the group itself to execute this
/// action. The group and data cannot be cannot be recovered once removed, but any abuse reports about
/// the group will remain. No data is returned in the case of success. Request object for PlayFabGroupsDeleteGroupAsync.
/// </summary>
typedef struct PlayFabGroupsDeleteGroupRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// ID of the group or role to remove.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsDeleteGroupRequest;

/// <summary>
/// PlayFabGroupsDeleteRoleRequest data model. Returns information about the role. Request object for
/// PlayFabGroupsDeleteRoleAsync.
/// </summary>
typedef struct PlayFabGroupsDeleteRoleRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) The ID of the role to delete. Role IDs must be between 1 and 64 characters long.
    /// </summary>
    const char* roleId;

} PlayFabGroupsDeleteRoleRequest;

/// <summary>
/// PlayFabGroupsEntityMemberRole data model.
/// </summary>
typedef struct PlayFabGroupsEntityMemberRole
{
    /// <summary>
    /// (Optional) The list of members in the role.
    /// </summary>
    PlayFabGroupsEntityWithLineage const* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

    /// <summary>
    /// (Optional) The ID of the role.
    /// </summary>
    const char* roleId;

    /// <summary>
    /// (Optional) The name of the role.
    /// </summary>
    const char* roleName;

} PlayFabGroupsEntityMemberRole;

/// <summary>
/// PlayFabGroupsGetGroupRequest data model. Returns the ID, name, role list and other non-membership
/// related information about a group. Request object for PlayFabGroupsGetGroupAsync.
/// </summary>
typedef struct PlayFabGroupsGetGroupRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) The full name of the group.
    /// </summary>
    const char* groupName;

} PlayFabGroupsGetGroupRequest;

/// <summary>
/// PlayFabGroupsGetGroupResponse data model. Result payload for PlayFabGroupsGetGroupAsync.
/// </summary>
typedef struct PlayFabGroupsGetGroupResponse
{
    /// <summary>
    /// (Optional) The ID of the administrator role for the group.
    /// </summary>
    const char* adminRoleId;

    /// <summary>
    /// The server date and time the group was created.
    /// </summary>
    time_t created;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) The name of the group.
    /// </summary>
    const char* groupName;

    /// <summary>
    /// (Optional) The ID of the default member role for the group.
    /// </summary>
    const char* memberRoleId;

    /// <summary>
    /// The current version of the profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

    /// <summary>
    /// (Optional) The list of roles and names that belong to the group.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* roles;

    /// <summary>
    /// Count of roles
    /// </summary>
    uint32_t rolesCount;

} PlayFabGroupsGetGroupResponse;

/// <summary>
/// PlayFabGroupsGroupApplication data model. Describes an application to join a group.
/// </summary>
typedef struct PlayFabGroupsGroupApplication
{
    /// <summary>
    /// (Optional) Type of entity that requested membership.
    /// </summary>
    PlayFabGroupsEntityWithLineage const* entity;

    /// <summary>
    /// When the application to join will expire and be deleted.
    /// </summary>
    time_t expires;

    /// <summary>
    /// (Optional) ID of the group that the entity requesting membership to.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsGroupApplication;

/// <summary>
/// PlayFabGroupsGroupBlock data model. Describes an entity that is blocked from joining a group.
/// </summary>
typedef struct PlayFabGroupsGroupBlock
{
    /// <summary>
    /// (Optional) The entity that is blocked.
    /// </summary>
    PlayFabGroupsEntityWithLineage const* entity;

    /// <summary>
    /// ID of the group that the entity is blocked from.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsGroupBlock;

/// <summary>
/// PlayFabGroupsGroupInvitation data model. Describes an invitation to a group.
/// </summary>
typedef struct PlayFabGroupsGroupInvitation
{
    /// <summary>
    /// When the invitation will expire and be deleted.
    /// </summary>
    time_t expires;

    /// <summary>
    /// (Optional) The group that the entity invited to.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) The entity that created the invitation.
    /// </summary>
    PlayFabGroupsEntityWithLineage const* invitedByEntity;

    /// <summary>
    /// (Optional) The entity that is invited.
    /// </summary>
    PlayFabGroupsEntityWithLineage const* invitedEntity;

    /// <summary>
    /// (Optional) ID of the role in the group to assign the user to.
    /// </summary>
    const char* roleId;

} PlayFabGroupsGroupInvitation;

/// <summary>
/// PlayFabGroupsGroupRole data model. Describes a group role.
/// </summary>
typedef struct PlayFabGroupsGroupRole
{
    /// <summary>
    /// (Optional) ID for the role.
    /// </summary>
    const char* roleId;

    /// <summary>
    /// (Optional) The name of the role.
    /// </summary>
    const char* roleName;

} PlayFabGroupsGroupRole;

/// <summary>
/// PlayFabGroupsGroupWithRoles data model. Describes a group and the roles that it contains.
/// </summary>
typedef struct PlayFabGroupsGroupWithRoles
{
    /// <summary>
    /// (Optional) ID for the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) The name of the group.
    /// </summary>
    const char* groupName;

    /// <summary>
    /// The current version of the profile, can be used for concurrency control during updates.
    /// </summary>
    int32_t profileVersion;

    /// <summary>
    /// (Optional) The list of roles within the group.
    /// </summary>
    PlayFabGroupsGroupRole const* const* roles;

    /// <summary>
    /// Count of roles
    /// </summary>
    uint32_t rolesCount;

} PlayFabGroupsGroupWithRoles;

/// <summary>
/// PlayFabGroupsInviteToGroupRequest data model. Invites a player to join a group, if they are not blocked
/// by the group. An optional role can be provided to automatically assign the player to the role if they
/// accept the invitation. By default, if the entity has an application to the group outstanding, this
/// will accept the application instead and return an error indicating such, rather than creating a duplicate
/// invitation to join that will need to be cleaned up later. Returns information about the new invitation
/// or an error indicating an existing application to join was accepted. Request object for PlayFabGroupsInviteToGroupAsync.
/// </summary>
typedef struct PlayFabGroupsInviteToGroupRequest
{
    /// <summary>
    /// (Optional) Optional, default true. Automatically accept an application if one exists instead
    /// of creating an invitation.
    /// </summary>
    bool const* autoAcceptOutstandingApplication;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) Optional. ID of an existing a role in the group to assign the user to. The group's
    /// default member role is used if this is not specified. Role IDs must be between 1 and 64 characters
    /// long.
    /// </summary>
    const char* roleId;

} PlayFabGroupsInviteToGroupRequest;

/// <summary>
/// PlayFabGroupsInviteToGroupResponse data model. Describes an invitation to a group. Result payload
/// for PlayFabGroupsInviteToGroupAsync.
/// </summary>
typedef struct PlayFabGroupsInviteToGroupResponse
{
    /// <summary>
    /// When the invitation will expire and be deleted.
    /// </summary>
    time_t expires;

    /// <summary>
    /// (Optional) The group that the entity invited to.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) The entity that created the invitation.
    /// </summary>
    PlayFabGroupsEntityWithLineage const* invitedByEntity;

    /// <summary>
    /// (Optional) The entity that is invited.
    /// </summary>
    PlayFabGroupsEntityWithLineage const* invitedEntity;

    /// <summary>
    /// (Optional) ID of the role in the group to assign the user to.
    /// </summary>
    const char* roleId;

} PlayFabGroupsInviteToGroupResponse;

/// <summary>
/// PlayFabGroupsIsMemberRequest data model. Checks to see if an entity is a member of a group or role
/// within the group. A result indicating if the entity is a member of the group is returned, or a permission
/// error if the caller does not have permission to read the group's member list. Request object for
/// PlayFabGroupsIsMemberAsync.
/// </summary>
typedef struct PlayFabGroupsIsMemberRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) Optional: ID of the role to check membership of. Defaults to any role (that is, check
    /// to see if the entity is a member of the group in any capacity) if not specified.
    /// </summary>
    const char* roleId;

} PlayFabGroupsIsMemberRequest;

/// <summary>
/// PlayFabGroupsIsMemberResponse data model. Result payload for PlayFabGroupsIsMemberAsync.
/// </summary>
typedef struct PlayFabGroupsIsMemberResponse
{
    /// <summary>
    /// A value indicating whether or not the entity is a member.
    /// </summary>
    bool isMember;

} PlayFabGroupsIsMemberResponse;

/// <summary>
/// PlayFabGroupsListGroupApplicationsRequest data model. Lists all outstanding requests to join a group.
/// Returns a list of all requests to join, as well as when the request will expire. To get the group
/// applications for a specific entity, use ListMembershipOpportunities. Request object for PlayFabGroupsListGroupApplicationsAsync.
/// </summary>
typedef struct PlayFabGroupsListGroupApplicationsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsListGroupApplicationsRequest;

/// <summary>
/// PlayFabGroupsListGroupApplicationsResponse data model. Result payload for PlayFabGroupsListGroupApplicationsAsync.
/// </summary>
typedef struct PlayFabGroupsListGroupApplicationsResponse
{
    /// <summary>
    /// (Optional) The requested list of applications to the group.
    /// </summary>
    PlayFabGroupsGroupApplication const* const* applications;

    /// <summary>
    /// Count of applications
    /// </summary>
    uint32_t applicationsCount;

} PlayFabGroupsListGroupApplicationsResponse;

/// <summary>
/// PlayFabGroupsListGroupBlocksRequest data model. Lists all entities blocked from joining a group.
/// A list of blocked entities is returned. Request object for PlayFabGroupsListGroupBlocksAsync.
/// </summary>
typedef struct PlayFabGroupsListGroupBlocksRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsListGroupBlocksRequest;

/// <summary>
/// PlayFabGroupsListGroupBlocksResponse data model. Result payload for PlayFabGroupsListGroupBlocksAsync.
/// </summary>
typedef struct PlayFabGroupsListGroupBlocksResponse
{
    /// <summary>
    /// (Optional) The requested list blocked entities.
    /// </summary>
    PlayFabGroupsGroupBlock const* const* blockedEntities;

    /// <summary>
    /// Count of blockedEntities
    /// </summary>
    uint32_t blockedEntitiesCount;

} PlayFabGroupsListGroupBlocksResponse;

/// <summary>
/// PlayFabGroupsListGroupInvitationsRequest data model. Lists all outstanding invitations for a group.
/// Returns a list of entities that have been invited, as well as when the invitation will expire. To
/// get the group invitations for a specific entity, use ListMembershipOpportunities. Request object
/// for PlayFabGroupsListGroupInvitationsAsync.
/// </summary>
typedef struct PlayFabGroupsListGroupInvitationsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsListGroupInvitationsRequest;

/// <summary>
/// PlayFabGroupsListGroupInvitationsResponse data model. Result payload for PlayFabGroupsListGroupInvitationsAsync.
/// </summary>
typedef struct PlayFabGroupsListGroupInvitationsResponse
{
    /// <summary>
    /// (Optional) The requested list of group invitations.
    /// </summary>
    PlayFabGroupsGroupInvitation const* const* invitations;

    /// <summary>
    /// Count of invitations
    /// </summary>
    uint32_t invitationsCount;

} PlayFabGroupsListGroupInvitationsResponse;

/// <summary>
/// PlayFabGroupsListGroupMembersRequest data model. Gets a list of members and the roles they belong
/// to within the group. If the caller does not have permission to view the role, and the member is in
/// no other role, the member is not displayed. Returns a list of entities that are members of the group.
/// Request object for PlayFabGroupsListGroupMembersAsync.
/// </summary>
typedef struct PlayFabGroupsListGroupMembersRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// ID of the group to list the members and roles for.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsListGroupMembersRequest;

/// <summary>
/// PlayFabGroupsListGroupMembersResponse data model. Result payload for PlayFabGroupsListGroupMembersAsync.
/// </summary>
typedef struct PlayFabGroupsListGroupMembersResponse
{
    /// <summary>
    /// (Optional) The requested list of roles and member entity IDs.
    /// </summary>
    PlayFabGroupsEntityMemberRole const* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

} PlayFabGroupsListGroupMembersResponse;

/// <summary>
/// PlayFabGroupsListMembershipOpportunitiesRequest data model. Lists all outstanding group applications
/// and invitations for an entity. Anyone may call this for any entity, but data will only be returned
/// for the entity or a parent of that entity. To list invitations or applications for a group to check
/// if a player is trying to join, use ListGroupInvitations and ListGroupApplications. Request object
/// for PlayFabGroupsListMembershipOpportunitiesAsync.
/// </summary>
typedef struct PlayFabGroupsListMembershipOpportunitiesRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

} PlayFabGroupsListMembershipOpportunitiesRequest;

/// <summary>
/// PlayFabGroupsListMembershipOpportunitiesResponse data model. Result payload for PlayFabGroupsListMembershipOpportunitiesAsync.
/// </summary>
typedef struct PlayFabGroupsListMembershipOpportunitiesResponse
{
    /// <summary>
    /// (Optional) The requested list of group applications.
    /// </summary>
    PlayFabGroupsGroupApplication const* const* applications;

    /// <summary>
    /// Count of applications
    /// </summary>
    uint32_t applicationsCount;

    /// <summary>
    /// (Optional) The requested list of group invitations.
    /// </summary>
    PlayFabGroupsGroupInvitation const* const* invitations;

    /// <summary>
    /// Count of invitations
    /// </summary>
    uint32_t invitationsCount;

} PlayFabGroupsListMembershipOpportunitiesResponse;

/// <summary>
/// PlayFabGroupsListMembershipRequest data model. Lists the groups and roles that an entity is a part
/// of, checking to see if group and role metadata and memberships should be visible to the caller. If
/// the entity is not in any roles that are visible to the caller, the group is not returned in the results,
/// even if the caller otherwise has permission to see that the entity is a member of that group. Request
/// object for PlayFabGroupsListMembershipAsync.
/// </summary>
typedef struct PlayFabGroupsListMembershipRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

} PlayFabGroupsListMembershipRequest;

/// <summary>
/// PlayFabGroupsListMembershipResponse data model. Result payload for PlayFabGroupsListMembershipAsync.
/// </summary>
typedef struct PlayFabGroupsListMembershipResponse
{
    /// <summary>
    /// (Optional) The list of groups.
    /// </summary>
    PlayFabGroupsGroupWithRoles const* const* groups;

    /// <summary>
    /// Count of groups
    /// </summary>
    uint32_t groupsCount;

} PlayFabGroupsListMembershipResponse;

/// <summary>
/// PlayFabGroupsRemoveGroupApplicationRequest data model. Removes an existing application to join the
/// group. This is used for both rejection of an application as well as withdrawing an application. The
/// applying entity or a parent in its chain (e.g. title) may withdraw the application, and any caller
/// with appropriate access in the group may reject an application. No data is returned in the case of
/// success. Request object for PlayFabGroupsRemoveGroupApplicationAsync.
/// </summary>
typedef struct PlayFabGroupsRemoveGroupApplicationRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsRemoveGroupApplicationRequest;

/// <summary>
/// PlayFabGroupsRemoveGroupInvitationRequest data model. Removes an existing invitation to join the
/// group. This is used for both rejection of an invitation as well as rescinding an invitation. The invited
/// entity or a parent in its chain (e.g. title) may reject the invitation by calling this method, and
/// any caller with appropriate access in the group may rescind an invitation. No data is returned in
/// the case of success. Request object for PlayFabGroupsRemoveGroupInvitationAsync.
/// </summary>
typedef struct PlayFabGroupsRemoveGroupInvitationRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsRemoveGroupInvitationRequest;

/// <summary>
/// PlayFabGroupsRemoveMembersRequest data model. Removes members from a group. A member can always remove
/// themselves from a group, regardless of permissions. Returns nothing if successful. Request object
/// for PlayFabGroupsRemoveMembersAsync.
/// </summary>
typedef struct PlayFabGroupsRemoveMembersRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// List of entities to remove.
    /// </summary>
    PlayFabEntityKey const* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

    /// <summary>
    /// (Optional) The ID of the role to remove the entities from.
    /// </summary>
    const char* roleId;

} PlayFabGroupsRemoveMembersRequest;

/// <summary>
/// PlayFabGroupsUnblockEntityRequest data model. Unblocks a list of entities from joining a group. No
/// data is returned in the case of success. Request object for PlayFabGroupsUnblockEntityAsync.
/// </summary>
typedef struct PlayFabGroupsUnblockEntityRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

} PlayFabGroupsUnblockEntityRequest;

/// <summary>
/// PlayFabGroupsUpdateGroupRequest data model. Updates data about a group, such as the name or default
/// member role. Returns information about whether the update was successful. Only title claimants may
/// modify the administration role for a group. Request object for PlayFabGroupsUpdateGroupAsync.
/// </summary>
typedef struct PlayFabGroupsUpdateGroupRequest
{
    /// <summary>
    /// (Optional) Optional: the ID of an existing role to set as the new administrator role for the
    /// group.
    /// </summary>
    const char* adminRoleId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Optional field used for concurrency control. By specifying the previously returned
    /// value of ProfileVersion from the GetGroup API, you can ensure that the group data update will
    /// only be performed if the group has not been updated by any other clients since the version you
    /// last loaded.
    /// </summary>
    int32_t const* expectedProfileVersion;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) Optional: the new name of the group.
    /// </summary>
    const char* groupName;

    /// <summary>
    /// (Optional) Optional: the ID of an existing role to set as the new member role for the group.
    /// </summary>
    const char* memberRoleId;

} PlayFabGroupsUpdateGroupRequest;

/// <summary>
/// PlayFabGroupsUpdateGroupResponse data model. Result payload for PlayFabGroupsUpdateGroupAsync.
/// </summary>
typedef struct PlayFabGroupsUpdateGroupResponse
{
    /// <summary>
    /// (Optional) Optional reason to explain why the operation was the result that it was.
    /// </summary>
    const char* operationReason;

    /// <summary>
    /// New version of the group data.
    /// </summary>
    int32_t profileVersion;

    /// <summary>
    /// (Optional) Indicates which operation was completed, either Created, Updated, Deleted or None.
    /// </summary>
    PlayFabGroupsOperationTypes const* setResult;

} PlayFabGroupsUpdateGroupResponse;

/// <summary>
/// PlayFabGroupsUpdateGroupRoleRequest data model. Updates the role name. Returns information about
/// whether the update was successful. Request object for PlayFabGroupsUpdateRoleAsync.
/// </summary>
typedef struct PlayFabGroupsUpdateGroupRoleRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Optional field used for concurrency control. By specifying the previously returned
    /// value of ProfileVersion from the GetGroup API, you can ensure that the group data update will
    /// only be performed if the group has not been updated by any other clients since the version you
    /// last loaded.
    /// </summary>
    int32_t const* expectedProfileVersion;

    /// <summary>
    /// The identifier of the group.
    /// </summary>
    PlayFabEntityKey const* group;

    /// <summary>
    /// (Optional) ID of the role to update. Role IDs must be between 1 and 64 characters long.
    /// </summary>
    const char* roleId;

    /// <summary>
    /// The new name of the role.
    /// </summary>
    const char* roleName;

} PlayFabGroupsUpdateGroupRoleRequest;

/// <summary>
/// PlayFabGroupsUpdateGroupRoleResponse data model. Result payload for PlayFabGroupsUpdateRoleAsync.
/// </summary>
typedef struct PlayFabGroupsUpdateGroupRoleResponse
{
    /// <summary>
    /// (Optional) Optional reason to explain why the operation was the result that it was.
    /// </summary>
    const char* operationReason;

    /// <summary>
    /// New version of the role data.
    /// </summary>
    int32_t profileVersion;

    /// <summary>
    /// (Optional) Indicates which operation was completed, either Created, Updated, Deleted or None.
    /// </summary>
    PlayFabGroupsOperationTypes const* setResult;

} PlayFabGroupsUpdateGroupRoleResponse;

#pragma pop_macro("IN")

}
