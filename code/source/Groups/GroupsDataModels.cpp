#include "stdafx.h"
#include "GroupsDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace GroupsModels
{

AcceptGroupApplicationRequest::AcceptGroupApplicationRequest() :
    PlayFabGroupsAcceptGroupApplicationRequest{}
{
}

AcceptGroupApplicationRequest::AcceptGroupApplicationRequest(const AcceptGroupApplicationRequest& src) :
    PlayFabGroupsAcceptGroupApplicationRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
}

AcceptGroupApplicationRequest::AcceptGroupApplicationRequest(AcceptGroupApplicationRequest&& src) :
    PlayFabGroupsAcceptGroupApplicationRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
}

AcceptGroupApplicationRequest::AcceptGroupApplicationRequest(const PlayFabGroupsAcceptGroupApplicationRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AcceptGroupApplicationRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue AcceptGroupApplicationRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsAcceptGroupApplicationRequest>(*this);
}

AcceptGroupInvitationRequest::AcceptGroupInvitationRequest() :
    PlayFabGroupsAcceptGroupInvitationRequest{}
{
}

AcceptGroupInvitationRequest::AcceptGroupInvitationRequest(const AcceptGroupInvitationRequest& src) :
    PlayFabGroupsAcceptGroupInvitationRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PlayFabEntityKey const*)&m_group;
}

AcceptGroupInvitationRequest::AcceptGroupInvitationRequest(AcceptGroupInvitationRequest&& src) :
    PlayFabGroupsAcceptGroupInvitationRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PlayFabEntityKey const*)&m_group;
}

AcceptGroupInvitationRequest::AcceptGroupInvitationRequest(const PlayFabGroupsAcceptGroupInvitationRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AcceptGroupInvitationRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue AcceptGroupInvitationRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsAcceptGroupInvitationRequest>(*this);
}

AddMembersRequest::AddMembersRequest() :
    PlayFabGroupsAddMembersRequest{}
{
}

AddMembersRequest::AddMembersRequest(const AddMembersRequest& src) :
    PlayFabGroupsAddMembersRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group },
    m_members{ src.m_members },
    m_roleId{ src.m_roleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

AddMembersRequest::AddMembersRequest(AddMembersRequest&& src) :
    PlayFabGroupsAddMembersRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) },
    m_members{ std::move(src.m_members) },
    m_roleId{ std::move(src.m_roleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

AddMembersRequest::AddMembersRequest(const PlayFabGroupsAddMembersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddMembersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
}

JsonValue AddMembersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsAddMembersRequest>(*this);
}

ApplyToGroupRequest::ApplyToGroupRequest() :
    PlayFabGroupsApplyToGroupRequest{}
{
}

ApplyToGroupRequest::ApplyToGroupRequest(const ApplyToGroupRequest& src) :
    PlayFabGroupsApplyToGroupRequest{ src },
    m_autoAcceptOutstandingInvite{ src.m_autoAcceptOutstandingInvite },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    autoAcceptOutstandingInvite = m_autoAcceptOutstandingInvite ? m_autoAcceptOutstandingInvite.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PlayFabEntityKey const*)&m_group;
}

ApplyToGroupRequest::ApplyToGroupRequest(ApplyToGroupRequest&& src) :
    PlayFabGroupsApplyToGroupRequest{ src },
    m_autoAcceptOutstandingInvite{ std::move(src.m_autoAcceptOutstandingInvite) },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    autoAcceptOutstandingInvite = m_autoAcceptOutstandingInvite ? m_autoAcceptOutstandingInvite.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PlayFabEntityKey const*)&m_group;
}

ApplyToGroupRequest::ApplyToGroupRequest(const PlayFabGroupsApplyToGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ApplyToGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AutoAcceptOutstandingInvite", m_autoAcceptOutstandingInvite, autoAcceptOutstandingInvite);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue ApplyToGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsApplyToGroupRequest>(*this);
}

EntityWithLineage::EntityWithLineage() :
    PlayFabGroupsEntityWithLineage{}
{
}

EntityWithLineage::EntityWithLineage(const EntityWithLineage& src) :
    PlayFabGroupsEntityWithLineage{ src },
    m_key{ src.m_key },
    m_lineage{ src.m_lineage }
{
    key = m_key ? m_key.operator->() : nullptr;
    lineage = m_lineage.Empty() ? nullptr : m_lineage.Data();
}

EntityWithLineage::EntityWithLineage(EntityWithLineage&& src) :
    PlayFabGroupsEntityWithLineage{ src },
    m_key{ std::move(src.m_key) },
    m_lineage{ std::move(src.m_lineage) }
{
    key = m_key ? m_key.operator->() : nullptr;
    lineage = m_lineage.Empty() ? nullptr : m_lineage.Data();
}

EntityWithLineage::EntityWithLineage(const PlayFabGroupsEntityWithLineage& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityWithLineage::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Lineage", m_lineage, lineage, lineageCount);
}

JsonValue EntityWithLineage::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsEntityWithLineage>(*this);
}

ApplyToGroupResponse::ApplyToGroupResponse() :
    PlayFabGroupsApplyToGroupResponse{}
{
}

ApplyToGroupResponse::ApplyToGroupResponse(const ApplyToGroupResponse& src) :
    PlayFabGroupsApplyToGroupResponse{ src },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = m_group ? m_group.operator->() : nullptr;
}

ApplyToGroupResponse::ApplyToGroupResponse(ApplyToGroupResponse&& src) :
    PlayFabGroupsApplyToGroupResponse{ src },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = m_group ? m_group.operator->() : nullptr;
}

ApplyToGroupResponse::ApplyToGroupResponse(const PlayFabGroupsApplyToGroupResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ApplyToGroupResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Expires", expires, true);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue ApplyToGroupResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsApplyToGroupResponse>(*this);
}

BlockEntityRequest::BlockEntityRequest() :
    PlayFabGroupsBlockEntityRequest{}
{
}

BlockEntityRequest::BlockEntityRequest(const BlockEntityRequest& src) :
    PlayFabGroupsBlockEntityRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
}

BlockEntityRequest::BlockEntityRequest(BlockEntityRequest&& src) :
    PlayFabGroupsBlockEntityRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
}

BlockEntityRequest::BlockEntityRequest(const PlayFabGroupsBlockEntityRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BlockEntityRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue BlockEntityRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsBlockEntityRequest>(*this);
}

ChangeMemberRoleRequest::ChangeMemberRoleRequest() :
    PlayFabGroupsChangeMemberRoleRequest{}
{
}

ChangeMemberRoleRequest::ChangeMemberRoleRequest(const ChangeMemberRoleRequest& src) :
    PlayFabGroupsChangeMemberRoleRequest{ src },
    m_customTags{ src.m_customTags },
    m_destinationRoleId{ src.m_destinationRoleId },
    m_group{ src.m_group },
    m_members{ src.m_members },
    m_originRoleId{ src.m_originRoleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    destinationRoleId = m_destinationRoleId.empty() ? nullptr : m_destinationRoleId.data();
    group = (PlayFabEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    originRoleId = m_originRoleId.empty() ? nullptr : m_originRoleId.data();
}

ChangeMemberRoleRequest::ChangeMemberRoleRequest(ChangeMemberRoleRequest&& src) :
    PlayFabGroupsChangeMemberRoleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_destinationRoleId{ std::move(src.m_destinationRoleId) },
    m_group{ std::move(src.m_group) },
    m_members{ std::move(src.m_members) },
    m_originRoleId{ std::move(src.m_originRoleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    destinationRoleId = m_destinationRoleId.empty() ? nullptr : m_destinationRoleId.data();
    group = (PlayFabEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    originRoleId = m_originRoleId.empty() ? nullptr : m_originRoleId.data();
}

ChangeMemberRoleRequest::ChangeMemberRoleRequest(const PlayFabGroupsChangeMemberRoleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ChangeMemberRoleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DestinationRoleId", m_destinationRoleId, destinationRoleId);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "OriginRoleId", m_originRoleId, originRoleId);
}

JsonValue ChangeMemberRoleRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsChangeMemberRoleRequest>(*this);
}

CreateGroupRequest::CreateGroupRequest() :
    PlayFabGroupsCreateGroupRequest{}
{
}

CreateGroupRequest::CreateGroupRequest(const CreateGroupRequest& src) :
    PlayFabGroupsCreateGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_groupName{ src.m_groupName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
}

CreateGroupRequest::CreateGroupRequest(CreateGroupRequest&& src) :
    PlayFabGroupsCreateGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_groupName{ std::move(src.m_groupName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
}

CreateGroupRequest::CreateGroupRequest(const PlayFabGroupsCreateGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "GroupName", m_groupName, groupName);
}

JsonValue CreateGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsCreateGroupRequest>(*this);
}

CreateGroupResponse::CreateGroupResponse() :
    PlayFabGroupsCreateGroupResponse{}
{
}

CreateGroupResponse::CreateGroupResponse(const CreateGroupResponse& src) :
    PlayFabGroupsCreateGroupResponse{ src },
    m_adminRoleId{ src.m_adminRoleId },
    m_group{ src.m_group },
    m_groupName{ src.m_groupName },
    m_memberRoleId{ src.m_memberRoleId },
    m_roles{ src.m_roles }
{
    adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
    group = (PlayFabEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

CreateGroupResponse::CreateGroupResponse(CreateGroupResponse&& src) :
    PlayFabGroupsCreateGroupResponse{ src },
    m_adminRoleId{ std::move(src.m_adminRoleId) },
    m_group{ std::move(src.m_group) },
    m_groupName{ std::move(src.m_groupName) },
    m_memberRoleId{ std::move(src.m_memberRoleId) },
    m_roles{ std::move(src.m_roles) }
{
    adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
    group = (PlayFabEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

CreateGroupResponse::CreateGroupResponse(const PlayFabGroupsCreateGroupResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateGroupResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdminRoleId", m_adminRoleId, adminRoleId);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "GroupName", m_groupName, groupName);
    JsonUtils::ObjectGetMember(input, "MemberRoleId", m_memberRoleId, memberRoleId);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
    JsonUtils::ObjectGetMember(input, "Roles", m_roles, roles, rolesCount);
}

JsonValue CreateGroupResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsCreateGroupResponse>(*this);
}

CreateGroupRoleRequest::CreateGroupRoleRequest() :
    PlayFabGroupsCreateGroupRoleRequest{}
{
}

CreateGroupRoleRequest::CreateGroupRoleRequest(const CreateGroupRoleRequest& src) :
    PlayFabGroupsCreateGroupRoleRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group },
    m_roleId{ src.m_roleId },
    m_roleName{ src.m_roleName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

CreateGroupRoleRequest::CreateGroupRoleRequest(CreateGroupRoleRequest&& src) :
    PlayFabGroupsCreateGroupRoleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) },
    m_roleId{ std::move(src.m_roleId) },
    m_roleName{ std::move(src.m_roleName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

CreateGroupRoleRequest::CreateGroupRoleRequest(const PlayFabGroupsCreateGroupRoleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateGroupRoleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
    JsonUtils::ObjectGetMember(input, "RoleName", m_roleName, roleName);
}

JsonValue CreateGroupRoleRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsCreateGroupRoleRequest>(*this);
}

CreateGroupRoleResponse::CreateGroupRoleResponse() :
    PlayFabGroupsCreateGroupRoleResponse{}
{
}

CreateGroupRoleResponse::CreateGroupRoleResponse(const CreateGroupRoleResponse& src) :
    PlayFabGroupsCreateGroupRoleResponse{ src },
    m_roleId{ src.m_roleId },
    m_roleName{ src.m_roleName }
{
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

CreateGroupRoleResponse::CreateGroupRoleResponse(CreateGroupRoleResponse&& src) :
    PlayFabGroupsCreateGroupRoleResponse{ src },
    m_roleId{ std::move(src.m_roleId) },
    m_roleName{ std::move(src.m_roleName) }
{
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

CreateGroupRoleResponse::CreateGroupRoleResponse(const PlayFabGroupsCreateGroupRoleResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateGroupRoleResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
    JsonUtils::ObjectGetMember(input, "RoleName", m_roleName, roleName);
}

JsonValue CreateGroupRoleResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsCreateGroupRoleResponse>(*this);
}

size_t CreateGroupRoleResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabGroupsCreateGroupRoleResponse) };
    serializedSize += (m_roleId.size() + 1);
    serializedSize += (m_roleName.size() + 1);
    return serializedSize;
}

void CreateGroupRoleResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabGroupsCreateGroupRoleResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabGroupsCreateGroupRoleResponse);
    memcpy(stringBuffer, m_roleId.data(), m_roleId.size() + 1);
    serializedStruct->roleId = stringBuffer;
    stringBuffer += m_roleId.size() + 1;
    memcpy(stringBuffer, m_roleName.data(), m_roleName.size() + 1);
    serializedStruct->roleName = stringBuffer;
    stringBuffer += m_roleName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteGroupRequest::DeleteGroupRequest() :
    PlayFabGroupsDeleteGroupRequest{}
{
}

DeleteGroupRequest::DeleteGroupRequest(const DeleteGroupRequest& src) :
    PlayFabGroupsDeleteGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
}

DeleteGroupRequest::DeleteGroupRequest(DeleteGroupRequest&& src) :
    PlayFabGroupsDeleteGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
}

DeleteGroupRequest::DeleteGroupRequest(const PlayFabGroupsDeleteGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue DeleteGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsDeleteGroupRequest>(*this);
}

DeleteRoleRequest::DeleteRoleRequest() :
    PlayFabGroupsDeleteRoleRequest{}
{
}

DeleteRoleRequest::DeleteRoleRequest(const DeleteRoleRequest& src) :
    PlayFabGroupsDeleteRoleRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group },
    m_roleId{ src.m_roleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

DeleteRoleRequest::DeleteRoleRequest(DeleteRoleRequest&& src) :
    PlayFabGroupsDeleteRoleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) },
    m_roleId{ std::move(src.m_roleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

DeleteRoleRequest::DeleteRoleRequest(const PlayFabGroupsDeleteRoleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteRoleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
}

JsonValue DeleteRoleRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsDeleteRoleRequest>(*this);
}

EntityMemberRole::EntityMemberRole() :
    PlayFabGroupsEntityMemberRole{}
{
}

EntityMemberRole::EntityMemberRole(const EntityMemberRole& src) :
    PlayFabGroupsEntityMemberRole{ src },
    m_members{ src.m_members },
    m_roleId{ src.m_roleId },
    m_roleName{ src.m_roleName }
{
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

EntityMemberRole::EntityMemberRole(EntityMemberRole&& src) :
    PlayFabGroupsEntityMemberRole{ src },
    m_members{ std::move(src.m_members) },
    m_roleId{ std::move(src.m_roleId) },
    m_roleName{ std::move(src.m_roleName) }
{
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

EntityMemberRole::EntityMemberRole(const PlayFabGroupsEntityMemberRole& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityMemberRole::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
    JsonUtils::ObjectGetMember(input, "RoleName", m_roleName, roleName);
}

JsonValue EntityMemberRole::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsEntityMemberRole>(*this);
}

GetGroupRequest::GetGroupRequest() :
    PlayFabGroupsGetGroupRequest{}
{
}

GetGroupRequest::GetGroupRequest(const GetGroupRequest& src) :
    PlayFabGroupsGetGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group },
    m_groupName{ src.m_groupName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = m_group ? m_group.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
}

GetGroupRequest::GetGroupRequest(GetGroupRequest&& src) :
    PlayFabGroupsGetGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) },
    m_groupName{ std::move(src.m_groupName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = m_group ? m_group.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
}

GetGroupRequest::GetGroupRequest(const PlayFabGroupsGetGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "GroupName", m_groupName, groupName);
}

JsonValue GetGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsGetGroupRequest>(*this);
}

GetGroupResponse::GetGroupResponse() :
    PlayFabGroupsGetGroupResponse{}
{
}

GetGroupResponse::GetGroupResponse(const GetGroupResponse& src) :
    PlayFabGroupsGetGroupResponse{ src },
    m_adminRoleId{ src.m_adminRoleId },
    m_group{ src.m_group },
    m_groupName{ src.m_groupName },
    m_memberRoleId{ src.m_memberRoleId },
    m_roles{ src.m_roles }
{
    adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
    group = (PlayFabEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

GetGroupResponse::GetGroupResponse(GetGroupResponse&& src) :
    PlayFabGroupsGetGroupResponse{ src },
    m_adminRoleId{ std::move(src.m_adminRoleId) },
    m_group{ std::move(src.m_group) },
    m_groupName{ std::move(src.m_groupName) },
    m_memberRoleId{ std::move(src.m_memberRoleId) },
    m_roles{ std::move(src.m_roles) }
{
    adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
    group = (PlayFabEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

GetGroupResponse::GetGroupResponse(const PlayFabGroupsGetGroupResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetGroupResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdminRoleId", m_adminRoleId, adminRoleId);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "GroupName", m_groupName, groupName);
    JsonUtils::ObjectGetMember(input, "MemberRoleId", m_memberRoleId, memberRoleId);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
    JsonUtils::ObjectGetMember(input, "Roles", m_roles, roles, rolesCount);
}

JsonValue GetGroupResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsGetGroupResponse>(*this);
}

GroupApplication::GroupApplication() :
    PlayFabGroupsGroupApplication{}
{
}

GroupApplication::GroupApplication(const GroupApplication& src) :
    PlayFabGroupsGroupApplication{ src },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = m_group ? m_group.operator->() : nullptr;
}

GroupApplication::GroupApplication(GroupApplication&& src) :
    PlayFabGroupsGroupApplication{ src },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = m_group ? m_group.operator->() : nullptr;
}

GroupApplication::GroupApplication(const PlayFabGroupsGroupApplication& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GroupApplication::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Expires", expires, true);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue GroupApplication::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsGroupApplication>(*this);
}

GroupBlock::GroupBlock() :
    PlayFabGroupsGroupBlock{}
{
}

GroupBlock::GroupBlock(const GroupBlock& src) :
    PlayFabGroupsGroupBlock{ src },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PlayFabEntityKey const*)&m_group;
}

GroupBlock::GroupBlock(GroupBlock&& src) :
    PlayFabGroupsGroupBlock{ src },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PlayFabEntityKey const*)&m_group;
}

GroupBlock::GroupBlock(const PlayFabGroupsGroupBlock& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GroupBlock::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue GroupBlock::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsGroupBlock>(*this);
}

GroupInvitation::GroupInvitation() :
    PlayFabGroupsGroupInvitation{}
{
}

GroupInvitation::GroupInvitation(const GroupInvitation& src) :
    PlayFabGroupsGroupInvitation{ src },
    m_group{ src.m_group },
    m_invitedByEntity{ src.m_invitedByEntity },
    m_invitedEntity{ src.m_invitedEntity },
    m_roleId{ src.m_roleId }
{
    group = m_group ? m_group.operator->() : nullptr;
    invitedByEntity = m_invitedByEntity ? m_invitedByEntity.operator->() : nullptr;
    invitedEntity = m_invitedEntity ? m_invitedEntity.operator->() : nullptr;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

GroupInvitation::GroupInvitation(GroupInvitation&& src) :
    PlayFabGroupsGroupInvitation{ src },
    m_group{ std::move(src.m_group) },
    m_invitedByEntity{ std::move(src.m_invitedByEntity) },
    m_invitedEntity{ std::move(src.m_invitedEntity) },
    m_roleId{ std::move(src.m_roleId) }
{
    group = m_group ? m_group.operator->() : nullptr;
    invitedByEntity = m_invitedByEntity ? m_invitedByEntity.operator->() : nullptr;
    invitedEntity = m_invitedEntity ? m_invitedEntity.operator->() : nullptr;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

GroupInvitation::GroupInvitation(const PlayFabGroupsGroupInvitation& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GroupInvitation::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Expires", expires, true);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "InvitedByEntity", m_invitedByEntity, invitedByEntity);
    JsonUtils::ObjectGetMember(input, "InvitedEntity", m_invitedEntity, invitedEntity);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
}

JsonValue GroupInvitation::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsGroupInvitation>(*this);
}

GroupRole::GroupRole() :
    PlayFabGroupsGroupRole{}
{
}

GroupRole::GroupRole(const GroupRole& src) :
    PlayFabGroupsGroupRole{ src },
    m_roleId{ src.m_roleId },
    m_roleName{ src.m_roleName }
{
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

GroupRole::GroupRole(GroupRole&& src) :
    PlayFabGroupsGroupRole{ src },
    m_roleId{ std::move(src.m_roleId) },
    m_roleName{ std::move(src.m_roleName) }
{
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

GroupRole::GroupRole(const PlayFabGroupsGroupRole& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GroupRole::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
    JsonUtils::ObjectGetMember(input, "RoleName", m_roleName, roleName);
}

JsonValue GroupRole::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsGroupRole>(*this);
}

size_t GroupRole::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabGroupsGroupRole) };
    serializedSize += (m_roleId.size() + 1);
    serializedSize += (m_roleName.size() + 1);
    return serializedSize;
}

void GroupRole::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabGroupsGroupRole{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabGroupsGroupRole);
    memcpy(stringBuffer, m_roleId.data(), m_roleId.size() + 1);
    serializedStruct->roleId = stringBuffer;
    stringBuffer += m_roleId.size() + 1;
    memcpy(stringBuffer, m_roleName.data(), m_roleName.size() + 1);
    serializedStruct->roleName = stringBuffer;
    stringBuffer += m_roleName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GroupWithRoles::GroupWithRoles() :
    PlayFabGroupsGroupWithRoles{}
{
}

GroupWithRoles::GroupWithRoles(const GroupWithRoles& src) :
    PlayFabGroupsGroupWithRoles{ src },
    m_group{ src.m_group },
    m_groupName{ src.m_groupName },
    m_roles{ src.m_roles }
{
    group = m_group ? m_group.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

GroupWithRoles::GroupWithRoles(GroupWithRoles&& src) :
    PlayFabGroupsGroupWithRoles{ src },
    m_group{ std::move(src.m_group) },
    m_groupName{ std::move(src.m_groupName) },
    m_roles{ std::move(src.m_roles) }
{
    group = m_group ? m_group.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

GroupWithRoles::GroupWithRoles(const PlayFabGroupsGroupWithRoles& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GroupWithRoles::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "GroupName", m_groupName, groupName);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
    JsonUtils::ObjectGetMember(input, "Roles", m_roles, roles, rolesCount);
}

JsonValue GroupWithRoles::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsGroupWithRoles>(*this);
}

InviteToGroupRequest::InviteToGroupRequest() :
    PlayFabGroupsInviteToGroupRequest{}
{
}

InviteToGroupRequest::InviteToGroupRequest(const InviteToGroupRequest& src) :
    PlayFabGroupsInviteToGroupRequest{ src },
    m_autoAcceptOutstandingApplication{ src.m_autoAcceptOutstandingApplication },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group },
    m_roleId{ src.m_roleId }
{
    autoAcceptOutstandingApplication = m_autoAcceptOutstandingApplication ? m_autoAcceptOutstandingApplication.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

InviteToGroupRequest::InviteToGroupRequest(InviteToGroupRequest&& src) :
    PlayFabGroupsInviteToGroupRequest{ src },
    m_autoAcceptOutstandingApplication{ std::move(src.m_autoAcceptOutstandingApplication) },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) },
    m_roleId{ std::move(src.m_roleId) }
{
    autoAcceptOutstandingApplication = m_autoAcceptOutstandingApplication ? m_autoAcceptOutstandingApplication.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

InviteToGroupRequest::InviteToGroupRequest(const PlayFabGroupsInviteToGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InviteToGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AutoAcceptOutstandingApplication", m_autoAcceptOutstandingApplication, autoAcceptOutstandingApplication);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
}

JsonValue InviteToGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsInviteToGroupRequest>(*this);
}

InviteToGroupResponse::InviteToGroupResponse() :
    PlayFabGroupsInviteToGroupResponse{}
{
}

InviteToGroupResponse::InviteToGroupResponse(const InviteToGroupResponse& src) :
    PlayFabGroupsInviteToGroupResponse{ src },
    m_group{ src.m_group },
    m_invitedByEntity{ src.m_invitedByEntity },
    m_invitedEntity{ src.m_invitedEntity },
    m_roleId{ src.m_roleId }
{
    group = m_group ? m_group.operator->() : nullptr;
    invitedByEntity = m_invitedByEntity ? m_invitedByEntity.operator->() : nullptr;
    invitedEntity = m_invitedEntity ? m_invitedEntity.operator->() : nullptr;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

InviteToGroupResponse::InviteToGroupResponse(InviteToGroupResponse&& src) :
    PlayFabGroupsInviteToGroupResponse{ src },
    m_group{ std::move(src.m_group) },
    m_invitedByEntity{ std::move(src.m_invitedByEntity) },
    m_invitedEntity{ std::move(src.m_invitedEntity) },
    m_roleId{ std::move(src.m_roleId) }
{
    group = m_group ? m_group.operator->() : nullptr;
    invitedByEntity = m_invitedByEntity ? m_invitedByEntity.operator->() : nullptr;
    invitedEntity = m_invitedEntity ? m_invitedEntity.operator->() : nullptr;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

InviteToGroupResponse::InviteToGroupResponse(const PlayFabGroupsInviteToGroupResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InviteToGroupResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Expires", expires, true);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "InvitedByEntity", m_invitedByEntity, invitedByEntity);
    JsonUtils::ObjectGetMember(input, "InvitedEntity", m_invitedEntity, invitedEntity);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
}

JsonValue InviteToGroupResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsInviteToGroupResponse>(*this);
}

IsMemberRequest::IsMemberRequest() :
    PlayFabGroupsIsMemberRequest{}
{
}

IsMemberRequest::IsMemberRequest(const IsMemberRequest& src) :
    PlayFabGroupsIsMemberRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group },
    m_roleId{ src.m_roleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

IsMemberRequest::IsMemberRequest(IsMemberRequest&& src) :
    PlayFabGroupsIsMemberRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) },
    m_roleId{ std::move(src.m_roleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

IsMemberRequest::IsMemberRequest(const PlayFabGroupsIsMemberRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IsMemberRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
}

JsonValue IsMemberRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsIsMemberRequest>(*this);
}

IsMemberResponse::IsMemberResponse() :
    PlayFabGroupsIsMemberResponse{}
{
}


IsMemberResponse::IsMemberResponse(const PlayFabGroupsIsMemberResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IsMemberResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsMember", isMember);
}

JsonValue IsMemberResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsIsMemberResponse>(*this);
}

size_t IsMemberResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabGroupsIsMemberResponse) };
    return serializedSize;
}

void IsMemberResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabGroupsIsMemberResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabGroupsIsMemberResponse);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

ListGroupApplicationsRequest::ListGroupApplicationsRequest() :
    PlayFabGroupsListGroupApplicationsRequest{}
{
}

ListGroupApplicationsRequest::ListGroupApplicationsRequest(const ListGroupApplicationsRequest& src) :
    PlayFabGroupsListGroupApplicationsRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
}

ListGroupApplicationsRequest::ListGroupApplicationsRequest(ListGroupApplicationsRequest&& src) :
    PlayFabGroupsListGroupApplicationsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
}

ListGroupApplicationsRequest::ListGroupApplicationsRequest(const PlayFabGroupsListGroupApplicationsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupApplicationsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue ListGroupApplicationsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListGroupApplicationsRequest>(*this);
}

ListGroupApplicationsResponse::ListGroupApplicationsResponse() :
    PlayFabGroupsListGroupApplicationsResponse{}
{
}

ListGroupApplicationsResponse::ListGroupApplicationsResponse(const ListGroupApplicationsResponse& src) :
    PlayFabGroupsListGroupApplicationsResponse{ src },
    m_applications{ src.m_applications }
{
    applications = m_applications.Empty() ? nullptr : m_applications.Data();
}

ListGroupApplicationsResponse::ListGroupApplicationsResponse(ListGroupApplicationsResponse&& src) :
    PlayFabGroupsListGroupApplicationsResponse{ src },
    m_applications{ std::move(src.m_applications) }
{
    applications = m_applications.Empty() ? nullptr : m_applications.Data();
}

ListGroupApplicationsResponse::ListGroupApplicationsResponse(const PlayFabGroupsListGroupApplicationsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupApplicationsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Applications", m_applications, applications, applicationsCount);
}

JsonValue ListGroupApplicationsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListGroupApplicationsResponse>(*this);
}

ListGroupBlocksRequest::ListGroupBlocksRequest() :
    PlayFabGroupsListGroupBlocksRequest{}
{
}

ListGroupBlocksRequest::ListGroupBlocksRequest(const ListGroupBlocksRequest& src) :
    PlayFabGroupsListGroupBlocksRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
}

ListGroupBlocksRequest::ListGroupBlocksRequest(ListGroupBlocksRequest&& src) :
    PlayFabGroupsListGroupBlocksRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
}

ListGroupBlocksRequest::ListGroupBlocksRequest(const PlayFabGroupsListGroupBlocksRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupBlocksRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue ListGroupBlocksRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListGroupBlocksRequest>(*this);
}

ListGroupBlocksResponse::ListGroupBlocksResponse() :
    PlayFabGroupsListGroupBlocksResponse{}
{
}

ListGroupBlocksResponse::ListGroupBlocksResponse(const ListGroupBlocksResponse& src) :
    PlayFabGroupsListGroupBlocksResponse{ src },
    m_blockedEntities{ src.m_blockedEntities }
{
    blockedEntities = m_blockedEntities.Empty() ? nullptr : m_blockedEntities.Data();
}

ListGroupBlocksResponse::ListGroupBlocksResponse(ListGroupBlocksResponse&& src) :
    PlayFabGroupsListGroupBlocksResponse{ src },
    m_blockedEntities{ std::move(src.m_blockedEntities) }
{
    blockedEntities = m_blockedEntities.Empty() ? nullptr : m_blockedEntities.Data();
}

ListGroupBlocksResponse::ListGroupBlocksResponse(const PlayFabGroupsListGroupBlocksResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupBlocksResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BlockedEntities", m_blockedEntities, blockedEntities, blockedEntitiesCount);
}

JsonValue ListGroupBlocksResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListGroupBlocksResponse>(*this);
}

ListGroupInvitationsRequest::ListGroupInvitationsRequest() :
    PlayFabGroupsListGroupInvitationsRequest{}
{
}

ListGroupInvitationsRequest::ListGroupInvitationsRequest(const ListGroupInvitationsRequest& src) :
    PlayFabGroupsListGroupInvitationsRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
}

ListGroupInvitationsRequest::ListGroupInvitationsRequest(ListGroupInvitationsRequest&& src) :
    PlayFabGroupsListGroupInvitationsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
}

ListGroupInvitationsRequest::ListGroupInvitationsRequest(const PlayFabGroupsListGroupInvitationsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupInvitationsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue ListGroupInvitationsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListGroupInvitationsRequest>(*this);
}

ListGroupInvitationsResponse::ListGroupInvitationsResponse() :
    PlayFabGroupsListGroupInvitationsResponse{}
{
}

ListGroupInvitationsResponse::ListGroupInvitationsResponse(const ListGroupInvitationsResponse& src) :
    PlayFabGroupsListGroupInvitationsResponse{ src },
    m_invitations{ src.m_invitations }
{
    invitations = m_invitations.Empty() ? nullptr : m_invitations.Data();
}

ListGroupInvitationsResponse::ListGroupInvitationsResponse(ListGroupInvitationsResponse&& src) :
    PlayFabGroupsListGroupInvitationsResponse{ src },
    m_invitations{ std::move(src.m_invitations) }
{
    invitations = m_invitations.Empty() ? nullptr : m_invitations.Data();
}

ListGroupInvitationsResponse::ListGroupInvitationsResponse(const PlayFabGroupsListGroupInvitationsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupInvitationsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Invitations", m_invitations, invitations, invitationsCount);
}

JsonValue ListGroupInvitationsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListGroupInvitationsResponse>(*this);
}

ListGroupMembersRequest::ListGroupMembersRequest() :
    PlayFabGroupsListGroupMembersRequest{}
{
}

ListGroupMembersRequest::ListGroupMembersRequest(const ListGroupMembersRequest& src) :
    PlayFabGroupsListGroupMembersRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
}

ListGroupMembersRequest::ListGroupMembersRequest(ListGroupMembersRequest&& src) :
    PlayFabGroupsListGroupMembersRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
}

ListGroupMembersRequest::ListGroupMembersRequest(const PlayFabGroupsListGroupMembersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupMembersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue ListGroupMembersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListGroupMembersRequest>(*this);
}

ListGroupMembersResponse::ListGroupMembersResponse() :
    PlayFabGroupsListGroupMembersResponse{}
{
}

ListGroupMembersResponse::ListGroupMembersResponse(const ListGroupMembersResponse& src) :
    PlayFabGroupsListGroupMembersResponse{ src },
    m_members{ src.m_members }
{
    members = m_members.Empty() ? nullptr : m_members.Data();
}

ListGroupMembersResponse::ListGroupMembersResponse(ListGroupMembersResponse&& src) :
    PlayFabGroupsListGroupMembersResponse{ src },
    m_members{ std::move(src.m_members) }
{
    members = m_members.Empty() ? nullptr : m_members.Data();
}

ListGroupMembersResponse::ListGroupMembersResponse(const PlayFabGroupsListGroupMembersResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupMembersResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
}

JsonValue ListGroupMembersResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListGroupMembersResponse>(*this);
}

ListMembershipOpportunitiesRequest::ListMembershipOpportunitiesRequest() :
    PlayFabGroupsListMembershipOpportunitiesRequest{}
{
}

ListMembershipOpportunitiesRequest::ListMembershipOpportunitiesRequest(const ListMembershipOpportunitiesRequest& src) :
    PlayFabGroupsListMembershipOpportunitiesRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

ListMembershipOpportunitiesRequest::ListMembershipOpportunitiesRequest(ListMembershipOpportunitiesRequest&& src) :
    PlayFabGroupsListMembershipOpportunitiesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

ListMembershipOpportunitiesRequest::ListMembershipOpportunitiesRequest(const PlayFabGroupsListMembershipOpportunitiesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMembershipOpportunitiesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
}

JsonValue ListMembershipOpportunitiesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListMembershipOpportunitiesRequest>(*this);
}

ListMembershipOpportunitiesResponse::ListMembershipOpportunitiesResponse() :
    PlayFabGroupsListMembershipOpportunitiesResponse{}
{
}

ListMembershipOpportunitiesResponse::ListMembershipOpportunitiesResponse(const ListMembershipOpportunitiesResponse& src) :
    PlayFabGroupsListMembershipOpportunitiesResponse{ src },
    m_applications{ src.m_applications },
    m_invitations{ src.m_invitations }
{
    applications = m_applications.Empty() ? nullptr : m_applications.Data();
    invitations = m_invitations.Empty() ? nullptr : m_invitations.Data();
}

ListMembershipOpportunitiesResponse::ListMembershipOpportunitiesResponse(ListMembershipOpportunitiesResponse&& src) :
    PlayFabGroupsListMembershipOpportunitiesResponse{ src },
    m_applications{ std::move(src.m_applications) },
    m_invitations{ std::move(src.m_invitations) }
{
    applications = m_applications.Empty() ? nullptr : m_applications.Data();
    invitations = m_invitations.Empty() ? nullptr : m_invitations.Data();
}

ListMembershipOpportunitiesResponse::ListMembershipOpportunitiesResponse(const PlayFabGroupsListMembershipOpportunitiesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMembershipOpportunitiesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Applications", m_applications, applications, applicationsCount);
    JsonUtils::ObjectGetMember(input, "Invitations", m_invitations, invitations, invitationsCount);
}

JsonValue ListMembershipOpportunitiesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListMembershipOpportunitiesResponse>(*this);
}

ListMembershipRequest::ListMembershipRequest() :
    PlayFabGroupsListMembershipRequest{}
{
}

ListMembershipRequest::ListMembershipRequest(const ListMembershipRequest& src) :
    PlayFabGroupsListMembershipRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

ListMembershipRequest::ListMembershipRequest(ListMembershipRequest&& src) :
    PlayFabGroupsListMembershipRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

ListMembershipRequest::ListMembershipRequest(const PlayFabGroupsListMembershipRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMembershipRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
}

JsonValue ListMembershipRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListMembershipRequest>(*this);
}

ListMembershipResponse::ListMembershipResponse() :
    PlayFabGroupsListMembershipResponse{}
{
}

ListMembershipResponse::ListMembershipResponse(const ListMembershipResponse& src) :
    PlayFabGroupsListMembershipResponse{ src },
    m_groups{ src.m_groups }
{
    groups = m_groups.Empty() ? nullptr : m_groups.Data();
}

ListMembershipResponse::ListMembershipResponse(ListMembershipResponse&& src) :
    PlayFabGroupsListMembershipResponse{ src },
    m_groups{ std::move(src.m_groups) }
{
    groups = m_groups.Empty() ? nullptr : m_groups.Data();
}

ListMembershipResponse::ListMembershipResponse(const PlayFabGroupsListMembershipResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMembershipResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Groups", m_groups, groups, groupsCount);
}

JsonValue ListMembershipResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsListMembershipResponse>(*this);
}

RemoveGroupApplicationRequest::RemoveGroupApplicationRequest() :
    PlayFabGroupsRemoveGroupApplicationRequest{}
{
}

RemoveGroupApplicationRequest::RemoveGroupApplicationRequest(const RemoveGroupApplicationRequest& src) :
    PlayFabGroupsRemoveGroupApplicationRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
}

RemoveGroupApplicationRequest::RemoveGroupApplicationRequest(RemoveGroupApplicationRequest&& src) :
    PlayFabGroupsRemoveGroupApplicationRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
}

RemoveGroupApplicationRequest::RemoveGroupApplicationRequest(const PlayFabGroupsRemoveGroupApplicationRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveGroupApplicationRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue RemoveGroupApplicationRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsRemoveGroupApplicationRequest>(*this);
}

RemoveGroupInvitationRequest::RemoveGroupInvitationRequest() :
    PlayFabGroupsRemoveGroupInvitationRequest{}
{
}

RemoveGroupInvitationRequest::RemoveGroupInvitationRequest(const RemoveGroupInvitationRequest& src) :
    PlayFabGroupsRemoveGroupInvitationRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
}

RemoveGroupInvitationRequest::RemoveGroupInvitationRequest(RemoveGroupInvitationRequest&& src) :
    PlayFabGroupsRemoveGroupInvitationRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
}

RemoveGroupInvitationRequest::RemoveGroupInvitationRequest(const PlayFabGroupsRemoveGroupInvitationRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveGroupInvitationRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue RemoveGroupInvitationRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsRemoveGroupInvitationRequest>(*this);
}

RemoveMembersRequest::RemoveMembersRequest() :
    PlayFabGroupsRemoveMembersRequest{}
{
}

RemoveMembersRequest::RemoveMembersRequest(const RemoveMembersRequest& src) :
    PlayFabGroupsRemoveMembersRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group },
    m_members{ src.m_members },
    m_roleId{ src.m_roleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

RemoveMembersRequest::RemoveMembersRequest(RemoveMembersRequest&& src) :
    PlayFabGroupsRemoveMembersRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) },
    m_members{ std::move(src.m_members) },
    m_roleId{ std::move(src.m_roleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PlayFabEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

RemoveMembersRequest::RemoveMembersRequest(const PlayFabGroupsRemoveMembersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveMembersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
}

JsonValue RemoveMembersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsRemoveMembersRequest>(*this);
}

UnblockEntityRequest::UnblockEntityRequest() :
    PlayFabGroupsUnblockEntityRequest{}
{
}

UnblockEntityRequest::UnblockEntityRequest(const UnblockEntityRequest& src) :
    PlayFabGroupsUnblockEntityRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
}

UnblockEntityRequest::UnblockEntityRequest(UnblockEntityRequest&& src) :
    PlayFabGroupsUnblockEntityRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    group = (PlayFabEntityKey const*)&m_group;
}

UnblockEntityRequest::UnblockEntityRequest(const PlayFabGroupsUnblockEntityRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnblockEntityRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
}

JsonValue UnblockEntityRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsUnblockEntityRequest>(*this);
}

UpdateGroupRequest::UpdateGroupRequest() :
    PlayFabGroupsUpdateGroupRequest{}
{
}

UpdateGroupRequest::UpdateGroupRequest(const UpdateGroupRequest& src) :
    PlayFabGroupsUpdateGroupRequest{ src },
    m_adminRoleId{ src.m_adminRoleId },
    m_customTags{ src.m_customTags },
    m_expectedProfileVersion{ src.m_expectedProfileVersion },
    m_group{ src.m_group },
    m_groupName{ src.m_groupName },
    m_memberRoleId{ src.m_memberRoleId }
{
    adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
    group = (PlayFabEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
}

UpdateGroupRequest::UpdateGroupRequest(UpdateGroupRequest&& src) :
    PlayFabGroupsUpdateGroupRequest{ src },
    m_adminRoleId{ std::move(src.m_adminRoleId) },
    m_customTags{ std::move(src.m_customTags) },
    m_expectedProfileVersion{ std::move(src.m_expectedProfileVersion) },
    m_group{ std::move(src.m_group) },
    m_groupName{ std::move(src.m_groupName) },
    m_memberRoleId{ std::move(src.m_memberRoleId) }
{
    adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
    group = (PlayFabEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
}

UpdateGroupRequest::UpdateGroupRequest(const PlayFabGroupsUpdateGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdminRoleId", m_adminRoleId, adminRoleId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExpectedProfileVersion", m_expectedProfileVersion, expectedProfileVersion);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "GroupName", m_groupName, groupName);
    JsonUtils::ObjectGetMember(input, "MemberRoleId", m_memberRoleId, memberRoleId);
}

JsonValue UpdateGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsUpdateGroupRequest>(*this);
}

UpdateGroupResponse::UpdateGroupResponse() :
    PlayFabGroupsUpdateGroupResponse{}
{
}

UpdateGroupResponse::UpdateGroupResponse(const UpdateGroupResponse& src) :
    PlayFabGroupsUpdateGroupResponse{ src },
    m_operationReason{ src.m_operationReason },
    m_setResult{ src.m_setResult }
{
    operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
    setResult = m_setResult ? m_setResult.operator->() : nullptr;
}

UpdateGroupResponse::UpdateGroupResponse(UpdateGroupResponse&& src) :
    PlayFabGroupsUpdateGroupResponse{ src },
    m_operationReason{ std::move(src.m_operationReason) },
    m_setResult{ std::move(src.m_setResult) }
{
    operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
    setResult = m_setResult ? m_setResult.operator->() : nullptr;
}

UpdateGroupResponse::UpdateGroupResponse(const PlayFabGroupsUpdateGroupResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateGroupResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OperationReason", m_operationReason, operationReason);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
    JsonUtils::ObjectGetMember(input, "SetResult", m_setResult, setResult);
}

JsonValue UpdateGroupResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsUpdateGroupResponse>(*this);
}

UpdateGroupRoleRequest::UpdateGroupRoleRequest() :
    PlayFabGroupsUpdateGroupRoleRequest{}
{
}

UpdateGroupRoleRequest::UpdateGroupRoleRequest(const UpdateGroupRoleRequest& src) :
    PlayFabGroupsUpdateGroupRoleRequest{ src },
    m_customTags{ src.m_customTags },
    m_expectedProfileVersion{ src.m_expectedProfileVersion },
    m_group{ src.m_group },
    m_roleId{ src.m_roleId },
    m_roleName{ src.m_roleName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
    group = (PlayFabEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

UpdateGroupRoleRequest::UpdateGroupRoleRequest(UpdateGroupRoleRequest&& src) :
    PlayFabGroupsUpdateGroupRoleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_expectedProfileVersion{ std::move(src.m_expectedProfileVersion) },
    m_group{ std::move(src.m_group) },
    m_roleId{ std::move(src.m_roleId) },
    m_roleName{ std::move(src.m_roleName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
    group = (PlayFabEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

UpdateGroupRoleRequest::UpdateGroupRoleRequest(const PlayFabGroupsUpdateGroupRoleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateGroupRoleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExpectedProfileVersion", m_expectedProfileVersion, expectedProfileVersion);
    JsonUtils::ObjectGetMember(input, "Group", m_group, group);
    JsonUtils::ObjectGetMember(input, "RoleId", m_roleId, roleId);
    JsonUtils::ObjectGetMember(input, "RoleName", m_roleName, roleName);
}

JsonValue UpdateGroupRoleRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsUpdateGroupRoleRequest>(*this);
}

UpdateGroupRoleResponse::UpdateGroupRoleResponse() :
    PlayFabGroupsUpdateGroupRoleResponse{}
{
}

UpdateGroupRoleResponse::UpdateGroupRoleResponse(const UpdateGroupRoleResponse& src) :
    PlayFabGroupsUpdateGroupRoleResponse{ src },
    m_operationReason{ src.m_operationReason },
    m_setResult{ src.m_setResult }
{
    operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
    setResult = m_setResult ? m_setResult.operator->() : nullptr;
}

UpdateGroupRoleResponse::UpdateGroupRoleResponse(UpdateGroupRoleResponse&& src) :
    PlayFabGroupsUpdateGroupRoleResponse{ src },
    m_operationReason{ std::move(src.m_operationReason) },
    m_setResult{ std::move(src.m_setResult) }
{
    operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
    setResult = m_setResult ? m_setResult.operator->() : nullptr;
}

UpdateGroupRoleResponse::UpdateGroupRoleResponse(const PlayFabGroupsUpdateGroupRoleResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateGroupRoleResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OperationReason", m_operationReason, operationReason);
    JsonUtils::ObjectGetMember(input, "ProfileVersion", profileVersion);
    JsonUtils::ObjectGetMember(input, "SetResult", m_setResult, setResult);
}

JsonValue UpdateGroupRoleResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGroupsUpdateGroupRoleResponse>(*this);
}

} // namespace GroupsModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabGroupsAcceptGroupApplicationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsAcceptGroupInvitationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsAddMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsApplyToGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AutoAcceptOutstandingInvite", input.autoAcceptOutstandingInvite);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsEntityWithLineage& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Lineage", input.lineage, input.lineageCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsApplyToGroupResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsBlockEntityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsChangeMemberRoleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DestinationRoleId", input.destinationRoleId);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "OriginRoleId", input.originRoleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdminRoleId", input.adminRoleId);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
    JsonUtils::ObjectAddMember(output, "MemberRoleId", input.memberRoleId);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "Roles", input.roles, input.rolesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupRoleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupRoleResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsDeleteGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsDeleteRoleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsEntityMemberRole& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsGetGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsGetGroupResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdminRoleId", input.adminRoleId);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
    JsonUtils::ObjectAddMember(output, "MemberRoleId", input.memberRoleId);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "Roles", input.roles, input.rolesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsGroupApplication& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsGroupBlock& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsGroupInvitation& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "InvitedByEntity", input.invitedByEntity);
    JsonUtils::ObjectAddMember(output, "InvitedEntity", input.invitedEntity);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsGroupRole& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsGroupWithRoles& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "Roles", input.roles, input.rolesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsInviteToGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AutoAcceptOutstandingApplication", input.autoAcceptOutstandingApplication);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsInviteToGroupResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "InvitedByEntity", input.invitedByEntity);
    JsonUtils::ObjectAddMember(output, "InvitedEntity", input.invitedEntity);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsIsMemberRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsIsMemberResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsMember", input.isMember);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListGroupApplicationsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListGroupApplicationsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Applications", input.applications, input.applicationsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListGroupBlocksRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListGroupBlocksResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BlockedEntities", input.blockedEntities, input.blockedEntitiesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListGroupInvitationsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListGroupInvitationsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Invitations", input.invitations, input.invitationsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListGroupMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListGroupMembersResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListMembershipOpportunitiesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListMembershipOpportunitiesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Applications", input.applications, input.applicationsCount);
    JsonUtils::ObjectAddMember(output, "Invitations", input.invitations, input.invitationsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListMembershipRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsListMembershipResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Groups", input.groups, input.groupsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsRemoveGroupApplicationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsRemoveGroupInvitationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsRemoveMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsUnblockEntityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdminRoleId", input.adminRoleId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExpectedProfileVersion", input.expectedProfileVersion);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
    JsonUtils::ObjectAddMember(output, "MemberRoleId", input.memberRoleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OperationReason", input.operationReason);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "SetResult", input.setResult);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupRoleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExpectedProfileVersion", input.expectedProfileVersion);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupRoleResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OperationReason", input.operationReason);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "SetResult", input.setResult);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
