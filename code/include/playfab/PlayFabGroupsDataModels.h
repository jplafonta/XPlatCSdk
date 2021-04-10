// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabBaseModel.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

// Groups enums
enum class PlayFabGroupsOperationTypes : uint32_t
{
    Created,
    Updated,
    Deleted,
    None
};


// Groups structs
typedef struct PlayFabGroupsEntityKey
{
    const char* id;
    const char* type;
} PlayFabGroupsEntityKey;

typedef struct PlayFabGroupsAcceptGroupApplicationRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* entity;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsAcceptGroupApplicationRequest;

typedef struct PlayFabGroupsAcceptGroupInvitationRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabGroupsEntityKey* entity;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsAcceptGroupInvitationRequest;

typedef struct PlayFabGroupsAddMembersRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* group;
    PF_ARRAY PlayFabGroupsEntityKey** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
    const char* roleId;
} PlayFabGroupsAddMembersRequest;

typedef struct PlayFabGroupsApplyToGroupRequest
{
    PF_OPTIONAL bool* autoAcceptOutstandingInvite;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabGroupsEntityKey* entity;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsApplyToGroupRequest;

typedef struct PlayFabGroupsEntityWithLineage
{
    PF_OPTIONAL PlayFabGroupsEntityKey* key;
    PF_MAP struct PlayFabGroupsEntityKeyDictionaryEntry* lineage;
    PF_COLLECTION_COUNT uint32_t lineageCount;
} PlayFabGroupsEntityWithLineage;

typedef struct PlayFabGroupsApplyToGroupResponse
{
    PF_OPTIONAL PlayFabGroupsEntityWithLineage* entity;
    time_t expires;
    PF_OPTIONAL PlayFabGroupsEntityKey* group;
} PlayFabGroupsApplyToGroupResponse;

typedef struct PlayFabGroupsBlockEntityRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* entity;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsBlockEntityRequest;

typedef struct PlayFabGroupsChangeMemberRoleRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* destinationRoleId;
    PlayFabGroupsEntityKey* group;
    PF_ARRAY PlayFabGroupsEntityKey** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
    const char* originRoleId;
} PlayFabGroupsChangeMemberRoleRequest;

typedef struct PlayFabGroupsCreateGroupRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabGroupsEntityKey* entity;
    const char* groupName;
} PlayFabGroupsCreateGroupRequest;

typedef struct PlayFabGroupsCreateGroupResponse
{
    const char* adminRoleId;
    time_t created;
    PlayFabGroupsEntityKey* group;
    const char* groupName;
    const char* memberRoleId;
    int32_t profileVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* roles;
    PF_COLLECTION_COUNT uint32_t rolesCount;
} PlayFabGroupsCreateGroupResponse;

typedef struct PlayFabGroupsCreateGroupRoleRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* group;
    const char* roleId;
    const char* roleName;
} PlayFabGroupsCreateGroupRoleRequest;

typedef struct PlayFabGroupsCreateGroupRoleResponse
{
    int32_t profileVersion;
    const char* roleId;
    const char* roleName;
} PlayFabGroupsCreateGroupRoleResponse;

typedef struct PlayFabGroupsDeleteGroupRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsDeleteGroupRequest;

typedef struct PlayFabGroupsDeleteRoleRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* group;
    const char* roleId;
} PlayFabGroupsDeleteRoleRequest;

typedef struct PlayFabGroupsEntityMemberRole
{
    PF_ARRAY PlayFabGroupsEntityWithLineage** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
    const char* roleId;
    const char* roleName;
} PlayFabGroupsEntityMemberRole;

typedef struct PlayFabGroupsGetGroupRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabGroupsEntityKey* group;
    const char* groupName;
} PlayFabGroupsGetGroupRequest;

typedef struct PlayFabGroupsGetGroupResponse
{
    const char* adminRoleId;
    time_t created;
    PlayFabGroupsEntityKey* group;
    const char* groupName;
    const char* memberRoleId;
    int32_t profileVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* roles;
    PF_COLLECTION_COUNT uint32_t rolesCount;
} PlayFabGroupsGetGroupResponse;

typedef struct PlayFabGroupsGroupApplication
{
    PF_OPTIONAL PlayFabGroupsEntityWithLineage* entity;
    time_t expires;
    PF_OPTIONAL PlayFabGroupsEntityKey* group;
} PlayFabGroupsGroupApplication;

typedef struct PlayFabGroupsGroupBlock
{
    PF_OPTIONAL PlayFabGroupsEntityWithLineage* entity;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsGroupBlock;

typedef struct PlayFabGroupsGroupInvitation
{
    time_t expires;
    PF_OPTIONAL PlayFabGroupsEntityKey* group;
    PF_OPTIONAL PlayFabGroupsEntityWithLineage* invitedByEntity;
    PF_OPTIONAL PlayFabGroupsEntityWithLineage* invitedEntity;
    const char* roleId;
} PlayFabGroupsGroupInvitation;

typedef struct PlayFabGroupsGroupRole
{
    const char* roleId;
    const char* roleName;
} PlayFabGroupsGroupRole;

typedef struct PlayFabGroupsGroupWithRoles
{
    PF_OPTIONAL PlayFabGroupsEntityKey* group;
    const char* groupName;
    int32_t profileVersion;
    PF_ARRAY PlayFabGroupsGroupRole** roles;
    PF_COLLECTION_COUNT uint32_t rolesCount;
} PlayFabGroupsGroupWithRoles;

typedef struct PlayFabGroupsInviteToGroupRequest
{
    PF_OPTIONAL bool* autoAcceptOutstandingApplication;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* entity;
    PlayFabGroupsEntityKey* group;
    const char* roleId;
} PlayFabGroupsInviteToGroupRequest;

typedef struct PlayFabGroupsInviteToGroupResponse
{
    time_t expires;
    PF_OPTIONAL PlayFabGroupsEntityKey* group;
    PF_OPTIONAL PlayFabGroupsEntityWithLineage* invitedByEntity;
    PF_OPTIONAL PlayFabGroupsEntityWithLineage* invitedEntity;
    const char* roleId;
} PlayFabGroupsInviteToGroupResponse;

typedef struct PlayFabGroupsIsMemberRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* entity;
    PlayFabGroupsEntityKey* group;
    const char* roleId;
} PlayFabGroupsIsMemberRequest;

typedef struct PlayFabGroupsIsMemberResponse
{
    bool isMember;
} PlayFabGroupsIsMemberResponse;

typedef struct PlayFabGroupsListGroupApplicationsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsListGroupApplicationsRequest;

typedef struct PlayFabGroupsListGroupApplicationsResponse
{
    PF_ARRAY PlayFabGroupsGroupApplication** applications;
    PF_COLLECTION_COUNT uint32_t applicationsCount;
} PlayFabGroupsListGroupApplicationsResponse;

typedef struct PlayFabGroupsListGroupBlocksRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsListGroupBlocksRequest;

typedef struct PlayFabGroupsListGroupBlocksResponse
{
    PF_ARRAY PlayFabGroupsGroupBlock** blockedEntities;
    PF_COLLECTION_COUNT uint32_t blockedEntitiesCount;
} PlayFabGroupsListGroupBlocksResponse;

typedef struct PlayFabGroupsListGroupInvitationsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsListGroupInvitationsRequest;

typedef struct PlayFabGroupsListGroupInvitationsResponse
{
    PF_ARRAY PlayFabGroupsGroupInvitation** invitations;
    PF_COLLECTION_COUNT uint32_t invitationsCount;
} PlayFabGroupsListGroupInvitationsResponse;

typedef struct PlayFabGroupsListGroupMembersRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsListGroupMembersRequest;

typedef struct PlayFabGroupsListGroupMembersResponse
{
    PF_ARRAY PlayFabGroupsEntityMemberRole** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
} PlayFabGroupsListGroupMembersResponse;

typedef struct PlayFabGroupsListMembershipOpportunitiesRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabGroupsEntityKey* entity;
} PlayFabGroupsListMembershipOpportunitiesRequest;

typedef struct PlayFabGroupsListMembershipOpportunitiesResponse
{
    PF_ARRAY PlayFabGroupsGroupApplication** applications;
    PF_COLLECTION_COUNT uint32_t applicationsCount;
    PF_ARRAY PlayFabGroupsGroupInvitation** invitations;
    PF_COLLECTION_COUNT uint32_t invitationsCount;
} PlayFabGroupsListMembershipOpportunitiesResponse;

typedef struct PlayFabGroupsListMembershipRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabGroupsEntityKey* entity;
} PlayFabGroupsListMembershipRequest;

typedef struct PlayFabGroupsListMembershipResponse
{
    PF_ARRAY PlayFabGroupsGroupWithRoles** groups;
    PF_COLLECTION_COUNT uint32_t groupsCount;
} PlayFabGroupsListMembershipResponse;

typedef struct PlayFabGroupsRemoveGroupApplicationRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* entity;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsRemoveGroupApplicationRequest;

typedef struct PlayFabGroupsRemoveGroupInvitationRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* entity;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsRemoveGroupInvitationRequest;

typedef struct PlayFabGroupsRemoveMembersRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* group;
    PF_ARRAY PlayFabGroupsEntityKey** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
    const char* roleId;
} PlayFabGroupsRemoveMembersRequest;

typedef struct PlayFabGroupsUnblockEntityRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabGroupsEntityKey* entity;
    PlayFabGroupsEntityKey* group;
} PlayFabGroupsUnblockEntityRequest;

typedef struct PlayFabGroupsUpdateGroupRequest
{
    const char* adminRoleId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL int32_t* expectedProfileVersion;
    PlayFabGroupsEntityKey* group;
    const char* groupName;
    const char* memberRoleId;
} PlayFabGroupsUpdateGroupRequest;

typedef struct PlayFabGroupsUpdateGroupResponse
{
    const char* operationReason;
    int32_t profileVersion;
    PF_OPTIONAL PlayFabGroupsOperationTypes* setResult;
} PlayFabGroupsUpdateGroupResponse;

typedef struct PlayFabGroupsUpdateGroupRoleRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL int32_t* expectedProfileVersion;
    PlayFabGroupsEntityKey* group;
    const char* roleId;
    const char* roleName;
} PlayFabGroupsUpdateGroupRoleRequest;

typedef struct PlayFabGroupsUpdateGroupRoleResponse
{
    const char* operationReason;
    int32_t profileVersion;
    PF_OPTIONAL PlayFabGroupsOperationTypes* setResult;
} PlayFabGroupsUpdateGroupRoleResponse;


// Groups dictionary entry structs
typedef struct PlayFabGroupsEntityKeyDictionaryEntry
{
    const char* key;
    PlayFabGroupsEntityKey* value;
} PlayFabGroupsEntityKeyDictionaryEntry;


#pragma pop_macro("IN")

}
