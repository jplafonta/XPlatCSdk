#pragma once

#include <playfab/PlayFabGroupsDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace GroupsModels
{

// Groups Classes
struct AcceptGroupApplicationRequest : public PlayFabGroupsAcceptGroupApplicationRequest, public BaseModel
{
    AcceptGroupApplicationRequest();
    AcceptGroupApplicationRequest(const AcceptGroupApplicationRequest& src);
    AcceptGroupApplicationRequest(AcceptGroupApplicationRequest&& src);
    AcceptGroupApplicationRequest(const PlayFabGroupsAcceptGroupApplicationRequest& src);
    AcceptGroupApplicationRequest& operator=(const AcceptGroupApplicationRequest&) = delete;
    ~AcceptGroupApplicationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
};

struct AcceptGroupInvitationRequest : public PlayFabGroupsAcceptGroupInvitationRequest, public BaseModel
{
    AcceptGroupInvitationRequest();
    AcceptGroupInvitationRequest(const AcceptGroupInvitationRequest& src);
    AcceptGroupInvitationRequest(AcceptGroupInvitationRequest&& src);
    AcceptGroupInvitationRequest(const PlayFabGroupsAcceptGroupInvitationRequest& src);
    AcceptGroupInvitationRequest& operator=(const AcceptGroupInvitationRequest&) = delete;
    ~AcceptGroupInvitationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    EntityKey m_group;
};

struct AddMembersRequest : public PlayFabGroupsAddMembersRequest, public BaseModel
{
    AddMembersRequest();
    AddMembersRequest(const AddMembersRequest& src);
    AddMembersRequest(AddMembersRequest&& src);
    AddMembersRequest(const PlayFabGroupsAddMembersRequest& src);
    AddMembersRequest& operator=(const AddMembersRequest&) = delete;
    ~AddMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
    PointerArrayModel<PlayFabEntityKey, EntityKey> m_members;
    String m_roleId;
};

struct ApplyToGroupRequest : public PlayFabGroupsApplyToGroupRequest, public BaseModel
{
    ApplyToGroupRequest();
    ApplyToGroupRequest(const ApplyToGroupRequest& src);
    ApplyToGroupRequest(ApplyToGroupRequest&& src);
    ApplyToGroupRequest(const PlayFabGroupsApplyToGroupRequest& src);
    ApplyToGroupRequest& operator=(const ApplyToGroupRequest&) = delete;
    ~ApplyToGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_autoAcceptOutstandingInvite;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    EntityKey m_group;
};

struct EntityWithLineage : public PlayFabGroupsEntityWithLineage, public BaseModel
{
    EntityWithLineage();
    EntityWithLineage(const EntityWithLineage& src);
    EntityWithLineage(EntityWithLineage&& src);
    EntityWithLineage(const PlayFabGroupsEntityWithLineage& src);
    EntityWithLineage& operator=(const EntityWithLineage&) = delete;
    ~EntityWithLineage() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_key;
    AssociativeArrayModel<PlayFabEntityKeyDictionaryEntry, EntityKey> m_lineage;
};

struct ApplyToGroupResponse : public PlayFabGroupsApplyToGroupResponse, public BaseModel, public ApiResult
{
    ApplyToGroupResponse();
    ApplyToGroupResponse(const ApplyToGroupResponse& src);
    ApplyToGroupResponse(ApplyToGroupResponse&& src);
    ApplyToGroupResponse(const PlayFabGroupsApplyToGroupResponse& src);
    ApplyToGroupResponse& operator=(const ApplyToGroupResponse&) = delete;
    ~ApplyToGroupResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityWithLineage> m_entity;
    StdExtra::optional<EntityKey> m_group;
};

struct BlockEntityRequest : public PlayFabGroupsBlockEntityRequest, public BaseModel
{
    BlockEntityRequest();
    BlockEntityRequest(const BlockEntityRequest& src);
    BlockEntityRequest(BlockEntityRequest&& src);
    BlockEntityRequest(const PlayFabGroupsBlockEntityRequest& src);
    BlockEntityRequest& operator=(const BlockEntityRequest&) = delete;
    ~BlockEntityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
};

struct ChangeMemberRoleRequest : public PlayFabGroupsChangeMemberRoleRequest, public BaseModel
{
    ChangeMemberRoleRequest();
    ChangeMemberRoleRequest(const ChangeMemberRoleRequest& src);
    ChangeMemberRoleRequest(ChangeMemberRoleRequest&& src);
    ChangeMemberRoleRequest(const PlayFabGroupsChangeMemberRoleRequest& src);
    ChangeMemberRoleRequest& operator=(const ChangeMemberRoleRequest&) = delete;
    ~ChangeMemberRoleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_destinationRoleId;
    EntityKey m_group;
    PointerArrayModel<PlayFabEntityKey, EntityKey> m_members;
    String m_originRoleId;
};

struct CreateGroupRequest : public PlayFabGroupsCreateGroupRequest, public BaseModel
{
    CreateGroupRequest();
    CreateGroupRequest(const CreateGroupRequest& src);
    CreateGroupRequest(CreateGroupRequest&& src);
    CreateGroupRequest(const PlayFabGroupsCreateGroupRequest& src);
    CreateGroupRequest& operator=(const CreateGroupRequest&) = delete;
    ~CreateGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_groupName;
};

struct CreateGroupResponse : public PlayFabGroupsCreateGroupResponse, public BaseModel, public ApiResult
{
    CreateGroupResponse();
    CreateGroupResponse(const CreateGroupResponse& src);
    CreateGroupResponse(CreateGroupResponse&& src);
    CreateGroupResponse(const PlayFabGroupsCreateGroupResponse& src);
    CreateGroupResponse& operator=(const CreateGroupResponse&) = delete;
    ~CreateGroupResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_adminRoleId;
    EntityKey m_group;
    String m_groupName;
    String m_memberRoleId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_roles;
};

struct CreateGroupRoleRequest : public PlayFabGroupsCreateGroupRoleRequest, public BaseModel
{
    CreateGroupRoleRequest();
    CreateGroupRoleRequest(const CreateGroupRoleRequest& src);
    CreateGroupRoleRequest(CreateGroupRoleRequest&& src);
    CreateGroupRoleRequest(const PlayFabGroupsCreateGroupRoleRequest& src);
    CreateGroupRoleRequest& operator=(const CreateGroupRoleRequest&) = delete;
    ~CreateGroupRoleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
    String m_roleId;
    String m_roleName;
};

struct CreateGroupRoleResponse : public PlayFabGroupsCreateGroupRoleResponse, public SerializableModel, public ApiResult
{
    CreateGroupRoleResponse();
    CreateGroupRoleResponse(const CreateGroupRoleResponse& src);
    CreateGroupRoleResponse(CreateGroupRoleResponse&& src);
    CreateGroupRoleResponse(const PlayFabGroupsCreateGroupRoleResponse& src);
    CreateGroupRoleResponse& operator=(const CreateGroupRoleResponse&) = delete;
    ~CreateGroupRoleResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_roleId;
    String m_roleName;
};

struct DeleteGroupRequest : public PlayFabGroupsDeleteGroupRequest, public BaseModel
{
    DeleteGroupRequest();
    DeleteGroupRequest(const DeleteGroupRequest& src);
    DeleteGroupRequest(DeleteGroupRequest&& src);
    DeleteGroupRequest(const PlayFabGroupsDeleteGroupRequest& src);
    DeleteGroupRequest& operator=(const DeleteGroupRequest&) = delete;
    ~DeleteGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
};

struct DeleteRoleRequest : public PlayFabGroupsDeleteRoleRequest, public BaseModel
{
    DeleteRoleRequest();
    DeleteRoleRequest(const DeleteRoleRequest& src);
    DeleteRoleRequest(DeleteRoleRequest&& src);
    DeleteRoleRequest(const PlayFabGroupsDeleteRoleRequest& src);
    DeleteRoleRequest& operator=(const DeleteRoleRequest&) = delete;
    ~DeleteRoleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
    String m_roleId;
};

struct EntityMemberRole : public PlayFabGroupsEntityMemberRole, public BaseModel
{
    EntityMemberRole();
    EntityMemberRole(const EntityMemberRole& src);
    EntityMemberRole(EntityMemberRole&& src);
    EntityMemberRole(const PlayFabGroupsEntityMemberRole& src);
    EntityMemberRole& operator=(const EntityMemberRole&) = delete;
    ~EntityMemberRole() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabGroupsEntityWithLineage, EntityWithLineage> m_members;
    String m_roleId;
    String m_roleName;
};

struct GetGroupRequest : public PlayFabGroupsGetGroupRequest, public BaseModel
{
    GetGroupRequest();
    GetGroupRequest(const GetGroupRequest& src);
    GetGroupRequest(GetGroupRequest&& src);
    GetGroupRequest(const PlayFabGroupsGetGroupRequest& src);
    GetGroupRequest& operator=(const GetGroupRequest&) = delete;
    ~GetGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_group;
    String m_groupName;
};

struct GetGroupResponse : public PlayFabGroupsGetGroupResponse, public BaseModel, public ApiResult
{
    GetGroupResponse();
    GetGroupResponse(const GetGroupResponse& src);
    GetGroupResponse(GetGroupResponse&& src);
    GetGroupResponse(const PlayFabGroupsGetGroupResponse& src);
    GetGroupResponse& operator=(const GetGroupResponse&) = delete;
    ~GetGroupResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_adminRoleId;
    EntityKey m_group;
    String m_groupName;
    String m_memberRoleId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_roles;
};

struct GroupApplication : public PlayFabGroupsGroupApplication, public BaseModel
{
    GroupApplication();
    GroupApplication(const GroupApplication& src);
    GroupApplication(GroupApplication&& src);
    GroupApplication(const PlayFabGroupsGroupApplication& src);
    GroupApplication& operator=(const GroupApplication&) = delete;
    ~GroupApplication() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityWithLineage> m_entity;
    StdExtra::optional<EntityKey> m_group;
};

struct GroupBlock : public PlayFabGroupsGroupBlock, public BaseModel
{
    GroupBlock();
    GroupBlock(const GroupBlock& src);
    GroupBlock(GroupBlock&& src);
    GroupBlock(const PlayFabGroupsGroupBlock& src);
    GroupBlock& operator=(const GroupBlock&) = delete;
    ~GroupBlock() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityWithLineage> m_entity;
    EntityKey m_group;
};

struct GroupInvitation : public PlayFabGroupsGroupInvitation, public BaseModel
{
    GroupInvitation();
    GroupInvitation(const GroupInvitation& src);
    GroupInvitation(GroupInvitation&& src);
    GroupInvitation(const PlayFabGroupsGroupInvitation& src);
    GroupInvitation& operator=(const GroupInvitation&) = delete;
    ~GroupInvitation() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_group;
    StdExtra::optional<EntityWithLineage> m_invitedByEntity;
    StdExtra::optional<EntityWithLineage> m_invitedEntity;
    String m_roleId;
};

struct GroupRole : public PlayFabGroupsGroupRole, public SerializableModel
{
    GroupRole();
    GroupRole(const GroupRole& src);
    GroupRole(GroupRole&& src);
    GroupRole(const PlayFabGroupsGroupRole& src);
    GroupRole& operator=(const GroupRole&) = delete;
    ~GroupRole() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_roleId;
    String m_roleName;
};

struct GroupWithRoles : public PlayFabGroupsGroupWithRoles, public BaseModel
{
    GroupWithRoles();
    GroupWithRoles(const GroupWithRoles& src);
    GroupWithRoles(GroupWithRoles&& src);
    GroupWithRoles(const PlayFabGroupsGroupWithRoles& src);
    GroupWithRoles& operator=(const GroupWithRoles&) = delete;
    ~GroupWithRoles() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_group;
    String m_groupName;
    PointerArrayModel<PlayFabGroupsGroupRole, GroupRole> m_roles;
};

struct InviteToGroupRequest : public PlayFabGroupsInviteToGroupRequest, public BaseModel
{
    InviteToGroupRequest();
    InviteToGroupRequest(const InviteToGroupRequest& src);
    InviteToGroupRequest(InviteToGroupRequest&& src);
    InviteToGroupRequest(const PlayFabGroupsInviteToGroupRequest& src);
    InviteToGroupRequest& operator=(const InviteToGroupRequest&) = delete;
    ~InviteToGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_autoAcceptOutstandingApplication;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
    String m_roleId;
};

struct InviteToGroupResponse : public PlayFabGroupsInviteToGroupResponse, public BaseModel, public ApiResult
{
    InviteToGroupResponse();
    InviteToGroupResponse(const InviteToGroupResponse& src);
    InviteToGroupResponse(InviteToGroupResponse&& src);
    InviteToGroupResponse(const PlayFabGroupsInviteToGroupResponse& src);
    InviteToGroupResponse& operator=(const InviteToGroupResponse&) = delete;
    ~InviteToGroupResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_group;
    StdExtra::optional<EntityWithLineage> m_invitedByEntity;
    StdExtra::optional<EntityWithLineage> m_invitedEntity;
    String m_roleId;
};

struct IsMemberRequest : public PlayFabGroupsIsMemberRequest, public BaseModel
{
    IsMemberRequest();
    IsMemberRequest(const IsMemberRequest& src);
    IsMemberRequest(IsMemberRequest&& src);
    IsMemberRequest(const PlayFabGroupsIsMemberRequest& src);
    IsMemberRequest& operator=(const IsMemberRequest&) = delete;
    ~IsMemberRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
    String m_roleId;
};

struct IsMemberResponse : public PlayFabGroupsIsMemberResponse, public SerializableModel, public ApiResult
{
    IsMemberResponse();
    IsMemberResponse(const IsMemberResponse&) = default;
    IsMemberResponse(IsMemberResponse&&) = default;
    IsMemberResponse(const PlayFabGroupsIsMemberResponse& src);
    IsMemberResponse& operator=(const IsMemberResponse&) = delete;
    ~IsMemberResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct ListGroupApplicationsRequest : public PlayFabGroupsListGroupApplicationsRequest, public BaseModel
{
    ListGroupApplicationsRequest();
    ListGroupApplicationsRequest(const ListGroupApplicationsRequest& src);
    ListGroupApplicationsRequest(ListGroupApplicationsRequest&& src);
    ListGroupApplicationsRequest(const PlayFabGroupsListGroupApplicationsRequest& src);
    ListGroupApplicationsRequest& operator=(const ListGroupApplicationsRequest&) = delete;
    ~ListGroupApplicationsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
};

struct ListGroupApplicationsResponse : public PlayFabGroupsListGroupApplicationsResponse, public BaseModel, public ApiResult
{
    ListGroupApplicationsResponse();
    ListGroupApplicationsResponse(const ListGroupApplicationsResponse& src);
    ListGroupApplicationsResponse(ListGroupApplicationsResponse&& src);
    ListGroupApplicationsResponse(const PlayFabGroupsListGroupApplicationsResponse& src);
    ListGroupApplicationsResponse& operator=(const ListGroupApplicationsResponse&) = delete;
    ~ListGroupApplicationsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabGroupsGroupApplication, GroupApplication> m_applications;
};

struct ListGroupBlocksRequest : public PlayFabGroupsListGroupBlocksRequest, public BaseModel
{
    ListGroupBlocksRequest();
    ListGroupBlocksRequest(const ListGroupBlocksRequest& src);
    ListGroupBlocksRequest(ListGroupBlocksRequest&& src);
    ListGroupBlocksRequest(const PlayFabGroupsListGroupBlocksRequest& src);
    ListGroupBlocksRequest& operator=(const ListGroupBlocksRequest&) = delete;
    ~ListGroupBlocksRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
};

struct ListGroupBlocksResponse : public PlayFabGroupsListGroupBlocksResponse, public BaseModel, public ApiResult
{
    ListGroupBlocksResponse();
    ListGroupBlocksResponse(const ListGroupBlocksResponse& src);
    ListGroupBlocksResponse(ListGroupBlocksResponse&& src);
    ListGroupBlocksResponse(const PlayFabGroupsListGroupBlocksResponse& src);
    ListGroupBlocksResponse& operator=(const ListGroupBlocksResponse&) = delete;
    ~ListGroupBlocksResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabGroupsGroupBlock, GroupBlock> m_blockedEntities;
};

struct ListGroupInvitationsRequest : public PlayFabGroupsListGroupInvitationsRequest, public BaseModel
{
    ListGroupInvitationsRequest();
    ListGroupInvitationsRequest(const ListGroupInvitationsRequest& src);
    ListGroupInvitationsRequest(ListGroupInvitationsRequest&& src);
    ListGroupInvitationsRequest(const PlayFabGroupsListGroupInvitationsRequest& src);
    ListGroupInvitationsRequest& operator=(const ListGroupInvitationsRequest&) = delete;
    ~ListGroupInvitationsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
};

struct ListGroupInvitationsResponse : public PlayFabGroupsListGroupInvitationsResponse, public BaseModel, public ApiResult
{
    ListGroupInvitationsResponse();
    ListGroupInvitationsResponse(const ListGroupInvitationsResponse& src);
    ListGroupInvitationsResponse(ListGroupInvitationsResponse&& src);
    ListGroupInvitationsResponse(const PlayFabGroupsListGroupInvitationsResponse& src);
    ListGroupInvitationsResponse& operator=(const ListGroupInvitationsResponse&) = delete;
    ~ListGroupInvitationsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabGroupsGroupInvitation, GroupInvitation> m_invitations;
};

struct ListGroupMembersRequest : public PlayFabGroupsListGroupMembersRequest, public BaseModel
{
    ListGroupMembersRequest();
    ListGroupMembersRequest(const ListGroupMembersRequest& src);
    ListGroupMembersRequest(ListGroupMembersRequest&& src);
    ListGroupMembersRequest(const PlayFabGroupsListGroupMembersRequest& src);
    ListGroupMembersRequest& operator=(const ListGroupMembersRequest&) = delete;
    ~ListGroupMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
};

struct ListGroupMembersResponse : public PlayFabGroupsListGroupMembersResponse, public BaseModel, public ApiResult
{
    ListGroupMembersResponse();
    ListGroupMembersResponse(const ListGroupMembersResponse& src);
    ListGroupMembersResponse(ListGroupMembersResponse&& src);
    ListGroupMembersResponse(const PlayFabGroupsListGroupMembersResponse& src);
    ListGroupMembersResponse& operator=(const ListGroupMembersResponse&) = delete;
    ~ListGroupMembersResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabGroupsEntityMemberRole, EntityMemberRole> m_members;
};

struct ListMembershipOpportunitiesRequest : public PlayFabGroupsListMembershipOpportunitiesRequest, public BaseModel
{
    ListMembershipOpportunitiesRequest();
    ListMembershipOpportunitiesRequest(const ListMembershipOpportunitiesRequest& src);
    ListMembershipOpportunitiesRequest(ListMembershipOpportunitiesRequest&& src);
    ListMembershipOpportunitiesRequest(const PlayFabGroupsListMembershipOpportunitiesRequest& src);
    ListMembershipOpportunitiesRequest& operator=(const ListMembershipOpportunitiesRequest&) = delete;
    ~ListMembershipOpportunitiesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
};

struct ListMembershipOpportunitiesResponse : public PlayFabGroupsListMembershipOpportunitiesResponse, public BaseModel, public ApiResult
{
    ListMembershipOpportunitiesResponse();
    ListMembershipOpportunitiesResponse(const ListMembershipOpportunitiesResponse& src);
    ListMembershipOpportunitiesResponse(ListMembershipOpportunitiesResponse&& src);
    ListMembershipOpportunitiesResponse(const PlayFabGroupsListMembershipOpportunitiesResponse& src);
    ListMembershipOpportunitiesResponse& operator=(const ListMembershipOpportunitiesResponse&) = delete;
    ~ListMembershipOpportunitiesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabGroupsGroupApplication, GroupApplication> m_applications;
    PointerArrayModel<PlayFabGroupsGroupInvitation, GroupInvitation> m_invitations;
};

struct ListMembershipRequest : public PlayFabGroupsListMembershipRequest, public BaseModel
{
    ListMembershipRequest();
    ListMembershipRequest(const ListMembershipRequest& src);
    ListMembershipRequest(ListMembershipRequest&& src);
    ListMembershipRequest(const PlayFabGroupsListMembershipRequest& src);
    ListMembershipRequest& operator=(const ListMembershipRequest&) = delete;
    ~ListMembershipRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
};

struct ListMembershipResponse : public PlayFabGroupsListMembershipResponse, public BaseModel, public ApiResult
{
    ListMembershipResponse();
    ListMembershipResponse(const ListMembershipResponse& src);
    ListMembershipResponse(ListMembershipResponse&& src);
    ListMembershipResponse(const PlayFabGroupsListMembershipResponse& src);
    ListMembershipResponse& operator=(const ListMembershipResponse&) = delete;
    ~ListMembershipResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabGroupsGroupWithRoles, GroupWithRoles> m_groups;
};

struct RemoveGroupApplicationRequest : public PlayFabGroupsRemoveGroupApplicationRequest, public BaseModel
{
    RemoveGroupApplicationRequest();
    RemoveGroupApplicationRequest(const RemoveGroupApplicationRequest& src);
    RemoveGroupApplicationRequest(RemoveGroupApplicationRequest&& src);
    RemoveGroupApplicationRequest(const PlayFabGroupsRemoveGroupApplicationRequest& src);
    RemoveGroupApplicationRequest& operator=(const RemoveGroupApplicationRequest&) = delete;
    ~RemoveGroupApplicationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
};

struct RemoveGroupInvitationRequest : public PlayFabGroupsRemoveGroupInvitationRequest, public BaseModel
{
    RemoveGroupInvitationRequest();
    RemoveGroupInvitationRequest(const RemoveGroupInvitationRequest& src);
    RemoveGroupInvitationRequest(RemoveGroupInvitationRequest&& src);
    RemoveGroupInvitationRequest(const PlayFabGroupsRemoveGroupInvitationRequest& src);
    RemoveGroupInvitationRequest& operator=(const RemoveGroupInvitationRequest&) = delete;
    ~RemoveGroupInvitationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
};

struct RemoveMembersRequest : public PlayFabGroupsRemoveMembersRequest, public BaseModel
{
    RemoveMembersRequest();
    RemoveMembersRequest(const RemoveMembersRequest& src);
    RemoveMembersRequest(RemoveMembersRequest&& src);
    RemoveMembersRequest(const PlayFabGroupsRemoveMembersRequest& src);
    RemoveMembersRequest& operator=(const RemoveMembersRequest&) = delete;
    ~RemoveMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
    PointerArrayModel<PlayFabEntityKey, EntityKey> m_members;
    String m_roleId;
};

struct UnblockEntityRequest : public PlayFabGroupsUnblockEntityRequest, public BaseModel
{
    UnblockEntityRequest();
    UnblockEntityRequest(const UnblockEntityRequest& src);
    UnblockEntityRequest(UnblockEntityRequest&& src);
    UnblockEntityRequest(const PlayFabGroupsUnblockEntityRequest& src);
    UnblockEntityRequest& operator=(const UnblockEntityRequest&) = delete;
    ~UnblockEntityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
};

struct UpdateGroupRequest : public PlayFabGroupsUpdateGroupRequest, public BaseModel
{
    UpdateGroupRequest();
    UpdateGroupRequest(const UpdateGroupRequest& src);
    UpdateGroupRequest(UpdateGroupRequest&& src);
    UpdateGroupRequest(const PlayFabGroupsUpdateGroupRequest& src);
    UpdateGroupRequest& operator=(const UpdateGroupRequest&) = delete;
    ~UpdateGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_adminRoleId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_expectedProfileVersion;
    EntityKey m_group;
    String m_groupName;
    String m_memberRoleId;
};

struct UpdateGroupResponse : public PlayFabGroupsUpdateGroupResponse, public BaseModel, public ApiResult
{
    UpdateGroupResponse();
    UpdateGroupResponse(const UpdateGroupResponse& src);
    UpdateGroupResponse(UpdateGroupResponse&& src);
    UpdateGroupResponse(const PlayFabGroupsUpdateGroupResponse& src);
    UpdateGroupResponse& operator=(const UpdateGroupResponse&) = delete;
    ~UpdateGroupResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_operationReason;
    StdExtra::optional<PlayFabGroupsOperationTypes> m_setResult;
};

struct UpdateGroupRoleRequest : public PlayFabGroupsUpdateGroupRoleRequest, public BaseModel
{
    UpdateGroupRoleRequest();
    UpdateGroupRoleRequest(const UpdateGroupRoleRequest& src);
    UpdateGroupRoleRequest(UpdateGroupRoleRequest&& src);
    UpdateGroupRoleRequest(const PlayFabGroupsUpdateGroupRoleRequest& src);
    UpdateGroupRoleRequest& operator=(const UpdateGroupRoleRequest&) = delete;
    ~UpdateGroupRoleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_expectedProfileVersion;
    EntityKey m_group;
    String m_roleId;
    String m_roleName;
};

struct UpdateGroupRoleResponse : public PlayFabGroupsUpdateGroupRoleResponse, public BaseModel, public ApiResult
{
    UpdateGroupRoleResponse();
    UpdateGroupRoleResponse(const UpdateGroupRoleResponse& src);
    UpdateGroupRoleResponse(UpdateGroupRoleResponse&& src);
    UpdateGroupRoleResponse(const PlayFabGroupsUpdateGroupRoleResponse& src);
    UpdateGroupRoleResponse& operator=(const UpdateGroupRoleResponse&) = delete;
    ~UpdateGroupRoleResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_operationReason;
    StdExtra::optional<PlayFabGroupsOperationTypes> m_setResult;
};

} // namespace GroupsModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabGroupsAcceptGroupApplicationRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsAcceptGroupInvitationRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsAddMembersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsApplyToGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsEntityWithLineage& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsApplyToGroupResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsBlockEntityRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsChangeMemberRoleRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupRoleRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupRoleResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsDeleteGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsDeleteRoleRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsEntityMemberRole& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsGetGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsGetGroupResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsGroupApplication& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsGroupBlock& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsGroupInvitation& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsGroupRole& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsGroupWithRoles& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsInviteToGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsInviteToGroupResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsIsMemberRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsIsMemberResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListGroupApplicationsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListGroupApplicationsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListGroupBlocksRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListGroupBlocksResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListGroupInvitationsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListGroupInvitationsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListGroupMembersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListGroupMembersResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListMembershipOpportunitiesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListMembershipOpportunitiesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListMembershipRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsListMembershipResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsRemoveGroupApplicationRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsRemoveGroupInvitationRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsRemoveMembersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsUnblockEntityRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupRoleRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupRoleResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabGroupsOperationTypes>
{
    static constexpr PlayFabGroupsOperationTypes maxValue = PlayFabGroupsOperationTypes::None;
};

} // namespace PlayFab
