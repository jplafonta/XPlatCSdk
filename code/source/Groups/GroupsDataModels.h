#pragma once

#include <playfab/PFGroupsDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace GroupsModels
{

// Groups Classes
struct AcceptGroupApplicationRequest : public PFGroupsAcceptGroupApplicationRequest, public BaseModel
{
    AcceptGroupApplicationRequest();
    AcceptGroupApplicationRequest(const AcceptGroupApplicationRequest& src);
    AcceptGroupApplicationRequest(AcceptGroupApplicationRequest&& src);
    AcceptGroupApplicationRequest(const PFGroupsAcceptGroupApplicationRequest& src);
    AcceptGroupApplicationRequest& operator=(const AcceptGroupApplicationRequest&) = delete;
    ~AcceptGroupApplicationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
};

struct AcceptGroupInvitationRequest : public PFGroupsAcceptGroupInvitationRequest, public BaseModel
{
    AcceptGroupInvitationRequest();
    AcceptGroupInvitationRequest(const AcceptGroupInvitationRequest& src);
    AcceptGroupInvitationRequest(AcceptGroupInvitationRequest&& src);
    AcceptGroupInvitationRequest(const PFGroupsAcceptGroupInvitationRequest& src);
    AcceptGroupInvitationRequest& operator=(const AcceptGroupInvitationRequest&) = delete;
    ~AcceptGroupInvitationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    EntityKey m_group;
};

struct AddMembersRequest : public PFGroupsAddMembersRequest, public BaseModel
{
    AddMembersRequest();
    AddMembersRequest(const AddMembersRequest& src);
    AddMembersRequest(AddMembersRequest&& src);
    AddMembersRequest(const PFGroupsAddMembersRequest& src);
    AddMembersRequest& operator=(const AddMembersRequest&) = delete;
    ~AddMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
    PointerArrayModel<PFEntityKey, EntityKey> m_members;
    String m_roleId;
};

struct ApplyToGroupRequest : public PFGroupsApplyToGroupRequest, public BaseModel
{
    ApplyToGroupRequest();
    ApplyToGroupRequest(const ApplyToGroupRequest& src);
    ApplyToGroupRequest(ApplyToGroupRequest&& src);
    ApplyToGroupRequest(const PFGroupsApplyToGroupRequest& src);
    ApplyToGroupRequest& operator=(const ApplyToGroupRequest&) = delete;
    ~ApplyToGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_autoAcceptOutstandingInvite;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    EntityKey m_group;
};

struct EntityWithLineage : public PFGroupsEntityWithLineage, public BaseModel
{
    EntityWithLineage();
    EntityWithLineage(const EntityWithLineage& src);
    EntityWithLineage(EntityWithLineage&& src);
    EntityWithLineage(const PFGroupsEntityWithLineage& src);
    EntityWithLineage& operator=(const EntityWithLineage&) = delete;
    ~EntityWithLineage() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_key;
    AssociativeArrayModel<PFEntityKeyDictionaryEntry, EntityKey> m_lineage;
};

struct ApplyToGroupResponse : public PFGroupsApplyToGroupResponse, public BaseModel, public ApiResult
{
    ApplyToGroupResponse();
    ApplyToGroupResponse(const ApplyToGroupResponse& src);
    ApplyToGroupResponse(ApplyToGroupResponse&& src);
    ApplyToGroupResponse(const PFGroupsApplyToGroupResponse& src);
    ApplyToGroupResponse& operator=(const ApplyToGroupResponse&) = delete;
    ~ApplyToGroupResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityWithLineage> m_entity;
    StdExtra::optional<EntityKey> m_group;
};

struct BlockEntityRequest : public PFGroupsBlockEntityRequest, public BaseModel
{
    BlockEntityRequest();
    BlockEntityRequest(const BlockEntityRequest& src);
    BlockEntityRequest(BlockEntityRequest&& src);
    BlockEntityRequest(const PFGroupsBlockEntityRequest& src);
    BlockEntityRequest& operator=(const BlockEntityRequest&) = delete;
    ~BlockEntityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
};

struct ChangeMemberRoleRequest : public PFGroupsChangeMemberRoleRequest, public BaseModel
{
    ChangeMemberRoleRequest();
    ChangeMemberRoleRequest(const ChangeMemberRoleRequest& src);
    ChangeMemberRoleRequest(ChangeMemberRoleRequest&& src);
    ChangeMemberRoleRequest(const PFGroupsChangeMemberRoleRequest& src);
    ChangeMemberRoleRequest& operator=(const ChangeMemberRoleRequest&) = delete;
    ~ChangeMemberRoleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_destinationRoleId;
    EntityKey m_group;
    PointerArrayModel<PFEntityKey, EntityKey> m_members;
    String m_originRoleId;
};

struct CreateGroupRequest : public PFGroupsCreateGroupRequest, public BaseModel
{
    CreateGroupRequest();
    CreateGroupRequest(const CreateGroupRequest& src);
    CreateGroupRequest(CreateGroupRequest&& src);
    CreateGroupRequest(const PFGroupsCreateGroupRequest& src);
    CreateGroupRequest& operator=(const CreateGroupRequest&) = delete;
    ~CreateGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_groupName;
};

struct CreateGroupResponse : public PFGroupsCreateGroupResponse, public BaseModel, public ApiResult
{
    CreateGroupResponse();
    CreateGroupResponse(const CreateGroupResponse& src);
    CreateGroupResponse(CreateGroupResponse&& src);
    CreateGroupResponse(const PFGroupsCreateGroupResponse& src);
    CreateGroupResponse& operator=(const CreateGroupResponse&) = delete;
    ~CreateGroupResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_adminRoleId;
    EntityKey m_group;
    String m_groupName;
    String m_memberRoleId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_roles;
};

struct CreateGroupRoleRequest : public PFGroupsCreateGroupRoleRequest, public BaseModel
{
    CreateGroupRoleRequest();
    CreateGroupRoleRequest(const CreateGroupRoleRequest& src);
    CreateGroupRoleRequest(CreateGroupRoleRequest&& src);
    CreateGroupRoleRequest(const PFGroupsCreateGroupRoleRequest& src);
    CreateGroupRoleRequest& operator=(const CreateGroupRoleRequest&) = delete;
    ~CreateGroupRoleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
    String m_roleId;
    String m_roleName;
};

struct CreateGroupRoleResponse : public PFGroupsCreateGroupRoleResponse, public SerializableModel, public ApiResult
{
    CreateGroupRoleResponse();
    CreateGroupRoleResponse(const CreateGroupRoleResponse& src);
    CreateGroupRoleResponse(CreateGroupRoleResponse&& src);
    CreateGroupRoleResponse(const PFGroupsCreateGroupRoleResponse& src);
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

struct DeleteGroupRequest : public PFGroupsDeleteGroupRequest, public BaseModel
{
    DeleteGroupRequest();
    DeleteGroupRequest(const DeleteGroupRequest& src);
    DeleteGroupRequest(DeleteGroupRequest&& src);
    DeleteGroupRequest(const PFGroupsDeleteGroupRequest& src);
    DeleteGroupRequest& operator=(const DeleteGroupRequest&) = delete;
    ~DeleteGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
};

struct DeleteRoleRequest : public PFGroupsDeleteRoleRequest, public BaseModel
{
    DeleteRoleRequest();
    DeleteRoleRequest(const DeleteRoleRequest& src);
    DeleteRoleRequest(DeleteRoleRequest&& src);
    DeleteRoleRequest(const PFGroupsDeleteRoleRequest& src);
    DeleteRoleRequest& operator=(const DeleteRoleRequest&) = delete;
    ~DeleteRoleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
    String m_roleId;
};

struct GetGroupRequest : public PFGroupsGetGroupRequest, public BaseModel
{
    GetGroupRequest();
    GetGroupRequest(const GetGroupRequest& src);
    GetGroupRequest(GetGroupRequest&& src);
    GetGroupRequest(const PFGroupsGetGroupRequest& src);
    GetGroupRequest& operator=(const GetGroupRequest&) = delete;
    ~GetGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_group;
    String m_groupName;
};

struct GetGroupResponse : public PFGroupsGetGroupResponse, public BaseModel, public ApiResult
{
    GetGroupResponse();
    GetGroupResponse(const GetGroupResponse& src);
    GetGroupResponse(GetGroupResponse&& src);
    GetGroupResponse(const PFGroupsGetGroupResponse& src);
    GetGroupResponse& operator=(const GetGroupResponse&) = delete;
    ~GetGroupResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_adminRoleId;
    EntityKey m_group;
    String m_groupName;
    String m_memberRoleId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_roles;
};

struct InviteToGroupRequest : public PFGroupsInviteToGroupRequest, public BaseModel
{
    InviteToGroupRequest();
    InviteToGroupRequest(const InviteToGroupRequest& src);
    InviteToGroupRequest(InviteToGroupRequest&& src);
    InviteToGroupRequest(const PFGroupsInviteToGroupRequest& src);
    InviteToGroupRequest& operator=(const InviteToGroupRequest&) = delete;
    ~InviteToGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_autoAcceptOutstandingApplication;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
    String m_roleId;
};

struct InviteToGroupResponse : public PFGroupsInviteToGroupResponse, public BaseModel, public ApiResult
{
    InviteToGroupResponse();
    InviteToGroupResponse(const InviteToGroupResponse& src);
    InviteToGroupResponse(InviteToGroupResponse&& src);
    InviteToGroupResponse(const PFGroupsInviteToGroupResponse& src);
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

struct IsMemberRequest : public PFGroupsIsMemberRequest, public BaseModel
{
    IsMemberRequest();
    IsMemberRequest(const IsMemberRequest& src);
    IsMemberRequest(IsMemberRequest&& src);
    IsMemberRequest(const PFGroupsIsMemberRequest& src);
    IsMemberRequest& operator=(const IsMemberRequest&) = delete;
    ~IsMemberRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
    String m_roleId;
};

struct IsMemberResponse : public PFGroupsIsMemberResponse, public SerializableModel, public ApiResult
{
    IsMemberResponse();
    IsMemberResponse(const IsMemberResponse&) = default;
    IsMemberResponse(IsMemberResponse&&) = default;
    IsMemberResponse(const PFGroupsIsMemberResponse& src);
    IsMemberResponse& operator=(const IsMemberResponse&) = delete;
    ~IsMemberResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct ListGroupApplicationsRequest : public PFGroupsListGroupApplicationsRequest, public BaseModel
{
    ListGroupApplicationsRequest();
    ListGroupApplicationsRequest(const ListGroupApplicationsRequest& src);
    ListGroupApplicationsRequest(ListGroupApplicationsRequest&& src);
    ListGroupApplicationsRequest(const PFGroupsListGroupApplicationsRequest& src);
    ListGroupApplicationsRequest& operator=(const ListGroupApplicationsRequest&) = delete;
    ~ListGroupApplicationsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
};

struct GroupApplication : public PFGroupsGroupApplication, public BaseModel
{
    GroupApplication();
    GroupApplication(const GroupApplication& src);
    GroupApplication(GroupApplication&& src);
    GroupApplication(const PFGroupsGroupApplication& src);
    GroupApplication& operator=(const GroupApplication&) = delete;
    ~GroupApplication() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityWithLineage> m_entity;
    StdExtra::optional<EntityKey> m_group;
};

struct ListGroupApplicationsResponse : public PFGroupsListGroupApplicationsResponse, public BaseModel, public ApiResult
{
    ListGroupApplicationsResponse();
    ListGroupApplicationsResponse(const ListGroupApplicationsResponse& src);
    ListGroupApplicationsResponse(ListGroupApplicationsResponse&& src);
    ListGroupApplicationsResponse(const PFGroupsListGroupApplicationsResponse& src);
    ListGroupApplicationsResponse& operator=(const ListGroupApplicationsResponse&) = delete;
    ~ListGroupApplicationsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFGroupsGroupApplication, GroupApplication> m_applications;
};

struct ListGroupBlocksRequest : public PFGroupsListGroupBlocksRequest, public BaseModel
{
    ListGroupBlocksRequest();
    ListGroupBlocksRequest(const ListGroupBlocksRequest& src);
    ListGroupBlocksRequest(ListGroupBlocksRequest&& src);
    ListGroupBlocksRequest(const PFGroupsListGroupBlocksRequest& src);
    ListGroupBlocksRequest& operator=(const ListGroupBlocksRequest&) = delete;
    ~ListGroupBlocksRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
};

struct GroupBlock : public PFGroupsGroupBlock, public BaseModel
{
    GroupBlock();
    GroupBlock(const GroupBlock& src);
    GroupBlock(GroupBlock&& src);
    GroupBlock(const PFGroupsGroupBlock& src);
    GroupBlock& operator=(const GroupBlock&) = delete;
    ~GroupBlock() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityWithLineage> m_entity;
    EntityKey m_group;
};

struct ListGroupBlocksResponse : public PFGroupsListGroupBlocksResponse, public BaseModel, public ApiResult
{
    ListGroupBlocksResponse();
    ListGroupBlocksResponse(const ListGroupBlocksResponse& src);
    ListGroupBlocksResponse(ListGroupBlocksResponse&& src);
    ListGroupBlocksResponse(const PFGroupsListGroupBlocksResponse& src);
    ListGroupBlocksResponse& operator=(const ListGroupBlocksResponse&) = delete;
    ~ListGroupBlocksResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFGroupsGroupBlock, GroupBlock> m_blockedEntities;
};

struct ListGroupInvitationsRequest : public PFGroupsListGroupInvitationsRequest, public BaseModel
{
    ListGroupInvitationsRequest();
    ListGroupInvitationsRequest(const ListGroupInvitationsRequest& src);
    ListGroupInvitationsRequest(ListGroupInvitationsRequest&& src);
    ListGroupInvitationsRequest(const PFGroupsListGroupInvitationsRequest& src);
    ListGroupInvitationsRequest& operator=(const ListGroupInvitationsRequest&) = delete;
    ~ListGroupInvitationsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
};

struct GroupInvitation : public PFGroupsGroupInvitation, public BaseModel
{
    GroupInvitation();
    GroupInvitation(const GroupInvitation& src);
    GroupInvitation(GroupInvitation&& src);
    GroupInvitation(const PFGroupsGroupInvitation& src);
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

struct ListGroupInvitationsResponse : public PFGroupsListGroupInvitationsResponse, public BaseModel, public ApiResult
{
    ListGroupInvitationsResponse();
    ListGroupInvitationsResponse(const ListGroupInvitationsResponse& src);
    ListGroupInvitationsResponse(ListGroupInvitationsResponse&& src);
    ListGroupInvitationsResponse(const PFGroupsListGroupInvitationsResponse& src);
    ListGroupInvitationsResponse& operator=(const ListGroupInvitationsResponse&) = delete;
    ~ListGroupInvitationsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFGroupsGroupInvitation, GroupInvitation> m_invitations;
};

struct ListGroupMembersRequest : public PFGroupsListGroupMembersRequest, public BaseModel
{
    ListGroupMembersRequest();
    ListGroupMembersRequest(const ListGroupMembersRequest& src);
    ListGroupMembersRequest(ListGroupMembersRequest&& src);
    ListGroupMembersRequest(const PFGroupsListGroupMembersRequest& src);
    ListGroupMembersRequest& operator=(const ListGroupMembersRequest&) = delete;
    ~ListGroupMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
};

struct EntityMemberRole : public PFGroupsEntityMemberRole, public BaseModel
{
    EntityMemberRole();
    EntityMemberRole(const EntityMemberRole& src);
    EntityMemberRole(EntityMemberRole&& src);
    EntityMemberRole(const PFGroupsEntityMemberRole& src);
    EntityMemberRole& operator=(const EntityMemberRole&) = delete;
    ~EntityMemberRole() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFGroupsEntityWithLineage, EntityWithLineage> m_members;
    String m_roleId;
    String m_roleName;
};

struct ListGroupMembersResponse : public PFGroupsListGroupMembersResponse, public BaseModel, public ApiResult
{
    ListGroupMembersResponse();
    ListGroupMembersResponse(const ListGroupMembersResponse& src);
    ListGroupMembersResponse(ListGroupMembersResponse&& src);
    ListGroupMembersResponse(const PFGroupsListGroupMembersResponse& src);
    ListGroupMembersResponse& operator=(const ListGroupMembersResponse&) = delete;
    ~ListGroupMembersResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFGroupsEntityMemberRole, EntityMemberRole> m_members;
};

struct ListMembershipRequest : public PFGroupsListMembershipRequest, public BaseModel
{
    ListMembershipRequest();
    ListMembershipRequest(const ListMembershipRequest& src);
    ListMembershipRequest(ListMembershipRequest&& src);
    ListMembershipRequest(const PFGroupsListMembershipRequest& src);
    ListMembershipRequest& operator=(const ListMembershipRequest&) = delete;
    ~ListMembershipRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
};

struct GroupRole : public PFGroupsGroupRole, public SerializableModel
{
    GroupRole();
    GroupRole(const GroupRole& src);
    GroupRole(GroupRole&& src);
    GroupRole(const PFGroupsGroupRole& src);
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

struct GroupWithRoles : public PFGroupsGroupWithRoles, public BaseModel
{
    GroupWithRoles();
    GroupWithRoles(const GroupWithRoles& src);
    GroupWithRoles(GroupWithRoles&& src);
    GroupWithRoles(const PFGroupsGroupWithRoles& src);
    GroupWithRoles& operator=(const GroupWithRoles&) = delete;
    ~GroupWithRoles() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_group;
    String m_groupName;
    PointerArrayModel<PFGroupsGroupRole, GroupRole> m_roles;
};

struct ListMembershipResponse : public PFGroupsListMembershipResponse, public BaseModel, public ApiResult
{
    ListMembershipResponse();
    ListMembershipResponse(const ListMembershipResponse& src);
    ListMembershipResponse(ListMembershipResponse&& src);
    ListMembershipResponse(const PFGroupsListMembershipResponse& src);
    ListMembershipResponse& operator=(const ListMembershipResponse&) = delete;
    ~ListMembershipResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFGroupsGroupWithRoles, GroupWithRoles> m_groups;
};

struct ListMembershipOpportunitiesRequest : public PFGroupsListMembershipOpportunitiesRequest, public BaseModel
{
    ListMembershipOpportunitiesRequest();
    ListMembershipOpportunitiesRequest(const ListMembershipOpportunitiesRequest& src);
    ListMembershipOpportunitiesRequest(ListMembershipOpportunitiesRequest&& src);
    ListMembershipOpportunitiesRequest(const PFGroupsListMembershipOpportunitiesRequest& src);
    ListMembershipOpportunitiesRequest& operator=(const ListMembershipOpportunitiesRequest&) = delete;
    ~ListMembershipOpportunitiesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
};

struct ListMembershipOpportunitiesResponse : public PFGroupsListMembershipOpportunitiesResponse, public BaseModel, public ApiResult
{
    ListMembershipOpportunitiesResponse();
    ListMembershipOpportunitiesResponse(const ListMembershipOpportunitiesResponse& src);
    ListMembershipOpportunitiesResponse(ListMembershipOpportunitiesResponse&& src);
    ListMembershipOpportunitiesResponse(const PFGroupsListMembershipOpportunitiesResponse& src);
    ListMembershipOpportunitiesResponse& operator=(const ListMembershipOpportunitiesResponse&) = delete;
    ~ListMembershipOpportunitiesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFGroupsGroupApplication, GroupApplication> m_applications;
    PointerArrayModel<PFGroupsGroupInvitation, GroupInvitation> m_invitations;
};

struct RemoveGroupApplicationRequest : public PFGroupsRemoveGroupApplicationRequest, public BaseModel
{
    RemoveGroupApplicationRequest();
    RemoveGroupApplicationRequest(const RemoveGroupApplicationRequest& src);
    RemoveGroupApplicationRequest(RemoveGroupApplicationRequest&& src);
    RemoveGroupApplicationRequest(const PFGroupsRemoveGroupApplicationRequest& src);
    RemoveGroupApplicationRequest& operator=(const RemoveGroupApplicationRequest&) = delete;
    ~RemoveGroupApplicationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
};

struct RemoveGroupInvitationRequest : public PFGroupsRemoveGroupInvitationRequest, public BaseModel
{
    RemoveGroupInvitationRequest();
    RemoveGroupInvitationRequest(const RemoveGroupInvitationRequest& src);
    RemoveGroupInvitationRequest(RemoveGroupInvitationRequest&& src);
    RemoveGroupInvitationRequest(const PFGroupsRemoveGroupInvitationRequest& src);
    RemoveGroupInvitationRequest& operator=(const RemoveGroupInvitationRequest&) = delete;
    ~RemoveGroupInvitationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
};

struct RemoveMembersRequest : public PFGroupsRemoveMembersRequest, public BaseModel
{
    RemoveMembersRequest();
    RemoveMembersRequest(const RemoveMembersRequest& src);
    RemoveMembersRequest(RemoveMembersRequest&& src);
    RemoveMembersRequest(const PFGroupsRemoveMembersRequest& src);
    RemoveMembersRequest& operator=(const RemoveMembersRequest&) = delete;
    ~RemoveMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_group;
    PointerArrayModel<PFEntityKey, EntityKey> m_members;
    String m_roleId;
};

struct UnblockEntityRequest : public PFGroupsUnblockEntityRequest, public BaseModel
{
    UnblockEntityRequest();
    UnblockEntityRequest(const UnblockEntityRequest& src);
    UnblockEntityRequest(UnblockEntityRequest&& src);
    UnblockEntityRequest(const PFGroupsUnblockEntityRequest& src);
    UnblockEntityRequest& operator=(const UnblockEntityRequest&) = delete;
    ~UnblockEntityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    EntityKey m_group;
};

struct UpdateGroupRequest : public PFGroupsUpdateGroupRequest, public BaseModel
{
    UpdateGroupRequest();
    UpdateGroupRequest(const UpdateGroupRequest& src);
    UpdateGroupRequest(UpdateGroupRequest&& src);
    UpdateGroupRequest(const PFGroupsUpdateGroupRequest& src);
    UpdateGroupRequest& operator=(const UpdateGroupRequest&) = delete;
    ~UpdateGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_adminRoleId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_expectedProfileVersion;
    EntityKey m_group;
    String m_groupName;
    String m_memberRoleId;
};

struct UpdateGroupResponse : public PFGroupsUpdateGroupResponse, public BaseModel, public ApiResult
{
    UpdateGroupResponse();
    UpdateGroupResponse(const UpdateGroupResponse& src);
    UpdateGroupResponse(UpdateGroupResponse&& src);
    UpdateGroupResponse(const PFGroupsUpdateGroupResponse& src);
    UpdateGroupResponse& operator=(const UpdateGroupResponse&) = delete;
    ~UpdateGroupResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_operationReason;
    StdExtra::optional<PFOperationTypes> m_setResult;
};

struct UpdateGroupRoleRequest : public PFGroupsUpdateGroupRoleRequest, public BaseModel
{
    UpdateGroupRoleRequest();
    UpdateGroupRoleRequest(const UpdateGroupRoleRequest& src);
    UpdateGroupRoleRequest(UpdateGroupRoleRequest&& src);
    UpdateGroupRoleRequest(const PFGroupsUpdateGroupRoleRequest& src);
    UpdateGroupRoleRequest& operator=(const UpdateGroupRoleRequest&) = delete;
    ~UpdateGroupRoleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_expectedProfileVersion;
    EntityKey m_group;
    String m_roleId;
    String m_roleName;
};

struct UpdateGroupRoleResponse : public PFGroupsUpdateGroupRoleResponse, public BaseModel, public ApiResult
{
    UpdateGroupRoleResponse();
    UpdateGroupRoleResponse(const UpdateGroupRoleResponse& src);
    UpdateGroupRoleResponse(UpdateGroupRoleResponse&& src);
    UpdateGroupRoleResponse(const PFGroupsUpdateGroupRoleResponse& src);
    UpdateGroupRoleResponse& operator=(const UpdateGroupRoleResponse&) = delete;
    ~UpdateGroupRoleResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_operationReason;
    StdExtra::optional<PFOperationTypes> m_setResult;
};

} // namespace GroupsModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFGroupsAcceptGroupApplicationRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsAcceptGroupInvitationRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsAddMembersRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsApplyToGroupRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsEntityWithLineage& input);
template<> inline JsonValue ToJson<>(const PFGroupsApplyToGroupResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsBlockEntityRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsChangeMemberRoleRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsCreateGroupRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsCreateGroupResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsCreateGroupRoleRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsCreateGroupRoleResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsDeleteGroupRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsDeleteRoleRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsGetGroupRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsGetGroupResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsInviteToGroupRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsInviteToGroupResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsIsMemberRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsIsMemberResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsListGroupApplicationsRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsGroupApplication& input);
template<> inline JsonValue ToJson<>(const PFGroupsListGroupApplicationsResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsListGroupBlocksRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsGroupBlock& input);
template<> inline JsonValue ToJson<>(const PFGroupsListGroupBlocksResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsListGroupInvitationsRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsGroupInvitation& input);
template<> inline JsonValue ToJson<>(const PFGroupsListGroupInvitationsResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsListGroupMembersRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsEntityMemberRole& input);
template<> inline JsonValue ToJson<>(const PFGroupsListGroupMembersResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsListMembershipRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsGroupRole& input);
template<> inline JsonValue ToJson<>(const PFGroupsGroupWithRoles& input);
template<> inline JsonValue ToJson<>(const PFGroupsListMembershipResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsListMembershipOpportunitiesRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsListMembershipOpportunitiesResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsRemoveGroupApplicationRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsRemoveGroupInvitationRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsRemoveMembersRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsUnblockEntityRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsUpdateGroupRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsUpdateGroupResponse& input);
template<> inline JsonValue ToJson<>(const PFGroupsUpdateGroupRoleRequest& input);
template<> inline JsonValue ToJson<>(const PFGroupsUpdateGroupRoleResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
