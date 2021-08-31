#include "stdafx.h"
#include "GroupsDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace GroupsModels
{

AcceptGroupApplicationRequest::AcceptGroupApplicationRequest() :
    PFGroupsAcceptGroupApplicationRequest{}
{
}

AcceptGroupApplicationRequest::AcceptGroupApplicationRequest(const AcceptGroupApplicationRequest& src) :
    PFGroupsAcceptGroupApplicationRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
}

AcceptGroupApplicationRequest::AcceptGroupApplicationRequest(AcceptGroupApplicationRequest&& src) :
    PFGroupsAcceptGroupApplicationRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
}

AcceptGroupApplicationRequest::AcceptGroupApplicationRequest(const PFGroupsAcceptGroupApplicationRequest& src)
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
    return JsonUtils::ToJson<PFGroupsAcceptGroupApplicationRequest>(*this);
}

AcceptGroupInvitationRequest::AcceptGroupInvitationRequest() :
    PFGroupsAcceptGroupInvitationRequest{}
{
}

AcceptGroupInvitationRequest::AcceptGroupInvitationRequest(const AcceptGroupInvitationRequest& src) :
    PFGroupsAcceptGroupInvitationRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PFEntityKey const*)&m_group;
}

AcceptGroupInvitationRequest::AcceptGroupInvitationRequest(AcceptGroupInvitationRequest&& src) :
    PFGroupsAcceptGroupInvitationRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PFEntityKey const*)&m_group;
}

AcceptGroupInvitationRequest::AcceptGroupInvitationRequest(const PFGroupsAcceptGroupInvitationRequest& src)
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
    return JsonUtils::ToJson<PFGroupsAcceptGroupInvitationRequest>(*this);
}

AddMembersRequest::AddMembersRequest() :
    PFGroupsAddMembersRequest{}
{
}

AddMembersRequest::AddMembersRequest(const AddMembersRequest& src) :
    PFGroupsAddMembersRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group },
    m_members{ src.m_members },
    m_roleId{ src.m_roleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

AddMembersRequest::AddMembersRequest(AddMembersRequest&& src) :
    PFGroupsAddMembersRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) },
    m_members{ std::move(src.m_members) },
    m_roleId{ std::move(src.m_roleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

AddMembersRequest::AddMembersRequest(const PFGroupsAddMembersRequest& src)
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
    return JsonUtils::ToJson<PFGroupsAddMembersRequest>(*this);
}

ApplyToGroupRequest::ApplyToGroupRequest() :
    PFGroupsApplyToGroupRequest{}
{
}

ApplyToGroupRequest::ApplyToGroupRequest(const ApplyToGroupRequest& src) :
    PFGroupsApplyToGroupRequest{ src },
    m_autoAcceptOutstandingInvite{ src.m_autoAcceptOutstandingInvite },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    autoAcceptOutstandingInvite = m_autoAcceptOutstandingInvite ? m_autoAcceptOutstandingInvite.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PFEntityKey const*)&m_group;
}

ApplyToGroupRequest::ApplyToGroupRequest(ApplyToGroupRequest&& src) :
    PFGroupsApplyToGroupRequest{ src },
    m_autoAcceptOutstandingInvite{ std::move(src.m_autoAcceptOutstandingInvite) },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    autoAcceptOutstandingInvite = m_autoAcceptOutstandingInvite ? m_autoAcceptOutstandingInvite.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PFEntityKey const*)&m_group;
}

ApplyToGroupRequest::ApplyToGroupRequest(const PFGroupsApplyToGroupRequest& src)
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
    return JsonUtils::ToJson<PFGroupsApplyToGroupRequest>(*this);
}

EntityWithLineage::EntityWithLineage() :
    PFGroupsEntityWithLineage{}
{
}

EntityWithLineage::EntityWithLineage(const EntityWithLineage& src) :
    PFGroupsEntityWithLineage{ src },
    m_key{ src.m_key },
    m_lineage{ src.m_lineage }
{
    key = m_key ? m_key.operator->() : nullptr;
    lineage = m_lineage.Empty() ? nullptr : m_lineage.Data();
}

EntityWithLineage::EntityWithLineage(EntityWithLineage&& src) :
    PFGroupsEntityWithLineage{ src },
    m_key{ std::move(src.m_key) },
    m_lineage{ std::move(src.m_lineage) }
{
    key = m_key ? m_key.operator->() : nullptr;
    lineage = m_lineage.Empty() ? nullptr : m_lineage.Data();
}

EntityWithLineage::EntityWithLineage(const PFGroupsEntityWithLineage& src)
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
    return JsonUtils::ToJson<PFGroupsEntityWithLineage>(*this);
}

ApplyToGroupResponse::ApplyToGroupResponse() :
    PFGroupsApplyToGroupResponse{}
{
}

ApplyToGroupResponse::ApplyToGroupResponse(const ApplyToGroupResponse& src) :
    PFGroupsApplyToGroupResponse{ src },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = m_group ? m_group.operator->() : nullptr;
}

ApplyToGroupResponse::ApplyToGroupResponse(ApplyToGroupResponse&& src) :
    PFGroupsApplyToGroupResponse{ src },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = m_group ? m_group.operator->() : nullptr;
}

ApplyToGroupResponse::ApplyToGroupResponse(const PFGroupsApplyToGroupResponse& src)
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
    return JsonUtils::ToJson<PFGroupsApplyToGroupResponse>(*this);
}

BlockEntityRequest::BlockEntityRequest() :
    PFGroupsBlockEntityRequest{}
{
}

BlockEntityRequest::BlockEntityRequest(const BlockEntityRequest& src) :
    PFGroupsBlockEntityRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
}

BlockEntityRequest::BlockEntityRequest(BlockEntityRequest&& src) :
    PFGroupsBlockEntityRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
}

BlockEntityRequest::BlockEntityRequest(const PFGroupsBlockEntityRequest& src)
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
    return JsonUtils::ToJson<PFGroupsBlockEntityRequest>(*this);
}

ChangeMemberRoleRequest::ChangeMemberRoleRequest() :
    PFGroupsChangeMemberRoleRequest{}
{
}

ChangeMemberRoleRequest::ChangeMemberRoleRequest(const ChangeMemberRoleRequest& src) :
    PFGroupsChangeMemberRoleRequest{ src },
    m_customTags{ src.m_customTags },
    m_destinationRoleId{ src.m_destinationRoleId },
    m_group{ src.m_group },
    m_members{ src.m_members },
    m_originRoleId{ src.m_originRoleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    destinationRoleId = m_destinationRoleId.empty() ? nullptr : m_destinationRoleId.data();
    group = (PFEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    originRoleId = m_originRoleId.empty() ? nullptr : m_originRoleId.data();
}

ChangeMemberRoleRequest::ChangeMemberRoleRequest(ChangeMemberRoleRequest&& src) :
    PFGroupsChangeMemberRoleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_destinationRoleId{ std::move(src.m_destinationRoleId) },
    m_group{ std::move(src.m_group) },
    m_members{ std::move(src.m_members) },
    m_originRoleId{ std::move(src.m_originRoleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    destinationRoleId = m_destinationRoleId.empty() ? nullptr : m_destinationRoleId.data();
    group = (PFEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    originRoleId = m_originRoleId.empty() ? nullptr : m_originRoleId.data();
}

ChangeMemberRoleRequest::ChangeMemberRoleRequest(const PFGroupsChangeMemberRoleRequest& src)
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
    return JsonUtils::ToJson<PFGroupsChangeMemberRoleRequest>(*this);
}

CreateGroupRequest::CreateGroupRequest() :
    PFGroupsCreateGroupRequest{}
{
}

CreateGroupRequest::CreateGroupRequest(const CreateGroupRequest& src) :
    PFGroupsCreateGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_groupName{ src.m_groupName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
}

CreateGroupRequest::CreateGroupRequest(CreateGroupRequest&& src) :
    PFGroupsCreateGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_groupName{ std::move(src.m_groupName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
}

CreateGroupRequest::CreateGroupRequest(const PFGroupsCreateGroupRequest& src)
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
    return JsonUtils::ToJson<PFGroupsCreateGroupRequest>(*this);
}

CreateGroupResponse::CreateGroupResponse() :
    PFGroupsCreateGroupResponse{}
{
}

CreateGroupResponse::CreateGroupResponse(const CreateGroupResponse& src) :
    PFGroupsCreateGroupResponse{ src },
    m_adminRoleId{ src.m_adminRoleId },
    m_group{ src.m_group },
    m_groupName{ src.m_groupName },
    m_memberRoleId{ src.m_memberRoleId },
    m_roles{ src.m_roles }
{
    adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
    group = (PFEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

CreateGroupResponse::CreateGroupResponse(CreateGroupResponse&& src) :
    PFGroupsCreateGroupResponse{ src },
    m_adminRoleId{ std::move(src.m_adminRoleId) },
    m_group{ std::move(src.m_group) },
    m_groupName{ std::move(src.m_groupName) },
    m_memberRoleId{ std::move(src.m_memberRoleId) },
    m_roles{ std::move(src.m_roles) }
{
    adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
    group = (PFEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

CreateGroupResponse::CreateGroupResponse(const PFGroupsCreateGroupResponse& src)
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
    return JsonUtils::ToJson<PFGroupsCreateGroupResponse>(*this);
}

CreateGroupRoleRequest::CreateGroupRoleRequest() :
    PFGroupsCreateGroupRoleRequest{}
{
}

CreateGroupRoleRequest::CreateGroupRoleRequest(const CreateGroupRoleRequest& src) :
    PFGroupsCreateGroupRoleRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group },
    m_roleId{ src.m_roleId },
    m_roleName{ src.m_roleName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

CreateGroupRoleRequest::CreateGroupRoleRequest(CreateGroupRoleRequest&& src) :
    PFGroupsCreateGroupRoleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) },
    m_roleId{ std::move(src.m_roleId) },
    m_roleName{ std::move(src.m_roleName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

CreateGroupRoleRequest::CreateGroupRoleRequest(const PFGroupsCreateGroupRoleRequest& src)
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
    return JsonUtils::ToJson<PFGroupsCreateGroupRoleRequest>(*this);
}

CreateGroupRoleResponse::CreateGroupRoleResponse() :
    PFGroupsCreateGroupRoleResponse{}
{
}

CreateGroupRoleResponse::CreateGroupRoleResponse(const CreateGroupRoleResponse& src) :
    PFGroupsCreateGroupRoleResponse{ src },
    m_roleId{ src.m_roleId },
    m_roleName{ src.m_roleName }
{
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

CreateGroupRoleResponse::CreateGroupRoleResponse(CreateGroupRoleResponse&& src) :
    PFGroupsCreateGroupRoleResponse{ src },
    m_roleId{ std::move(src.m_roleId) },
    m_roleName{ std::move(src.m_roleName) }
{
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

CreateGroupRoleResponse::CreateGroupRoleResponse(const PFGroupsCreateGroupRoleResponse& src)
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
    return JsonUtils::ToJson<PFGroupsCreateGroupRoleResponse>(*this);
}

size_t CreateGroupRoleResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFGroupsCreateGroupRoleResponse) };
    serializedSize += (m_roleId.size() + 1);
    serializedSize += (m_roleName.size() + 1);
    return serializedSize;
}

void CreateGroupRoleResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFGroupsCreateGroupRoleResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFGroupsCreateGroupRoleResponse);
    memcpy(stringBuffer, m_roleId.data(), m_roleId.size() + 1);
    serializedStruct->roleId = stringBuffer;
    stringBuffer += m_roleId.size() + 1;
    memcpy(stringBuffer, m_roleName.data(), m_roleName.size() + 1);
    serializedStruct->roleName = stringBuffer;
    stringBuffer += m_roleName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteGroupRequest::DeleteGroupRequest() :
    PFGroupsDeleteGroupRequest{}
{
}

DeleteGroupRequest::DeleteGroupRequest(const DeleteGroupRequest& src) :
    PFGroupsDeleteGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
}

DeleteGroupRequest::DeleteGroupRequest(DeleteGroupRequest&& src) :
    PFGroupsDeleteGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
}

DeleteGroupRequest::DeleteGroupRequest(const PFGroupsDeleteGroupRequest& src)
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
    return JsonUtils::ToJson<PFGroupsDeleteGroupRequest>(*this);
}

DeleteRoleRequest::DeleteRoleRequest() :
    PFGroupsDeleteRoleRequest{}
{
}

DeleteRoleRequest::DeleteRoleRequest(const DeleteRoleRequest& src) :
    PFGroupsDeleteRoleRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group },
    m_roleId{ src.m_roleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

DeleteRoleRequest::DeleteRoleRequest(DeleteRoleRequest&& src) :
    PFGroupsDeleteRoleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) },
    m_roleId{ std::move(src.m_roleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

DeleteRoleRequest::DeleteRoleRequest(const PFGroupsDeleteRoleRequest& src)
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
    return JsonUtils::ToJson<PFGroupsDeleteRoleRequest>(*this);
}

GetGroupRequest::GetGroupRequest() :
    PFGroupsGetGroupRequest{}
{
}

GetGroupRequest::GetGroupRequest(const GetGroupRequest& src) :
    PFGroupsGetGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group },
    m_groupName{ src.m_groupName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = m_group ? m_group.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
}

GetGroupRequest::GetGroupRequest(GetGroupRequest&& src) :
    PFGroupsGetGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) },
    m_groupName{ std::move(src.m_groupName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = m_group ? m_group.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
}

GetGroupRequest::GetGroupRequest(const PFGroupsGetGroupRequest& src)
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
    return JsonUtils::ToJson<PFGroupsGetGroupRequest>(*this);
}

GetGroupResponse::GetGroupResponse() :
    PFGroupsGetGroupResponse{}
{
}

GetGroupResponse::GetGroupResponse(const GetGroupResponse& src) :
    PFGroupsGetGroupResponse{ src },
    m_adminRoleId{ src.m_adminRoleId },
    m_group{ src.m_group },
    m_groupName{ src.m_groupName },
    m_memberRoleId{ src.m_memberRoleId },
    m_roles{ src.m_roles }
{
    adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
    group = (PFEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

GetGroupResponse::GetGroupResponse(GetGroupResponse&& src) :
    PFGroupsGetGroupResponse{ src },
    m_adminRoleId{ std::move(src.m_adminRoleId) },
    m_group{ std::move(src.m_group) },
    m_groupName{ std::move(src.m_groupName) },
    m_memberRoleId{ std::move(src.m_memberRoleId) },
    m_roles{ std::move(src.m_roles) }
{
    adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
    group = (PFEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

GetGroupResponse::GetGroupResponse(const PFGroupsGetGroupResponse& src)
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
    return JsonUtils::ToJson<PFGroupsGetGroupResponse>(*this);
}

InviteToGroupRequest::InviteToGroupRequest() :
    PFGroupsInviteToGroupRequest{}
{
}

InviteToGroupRequest::InviteToGroupRequest(const InviteToGroupRequest& src) :
    PFGroupsInviteToGroupRequest{ src },
    m_autoAcceptOutstandingApplication{ src.m_autoAcceptOutstandingApplication },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group },
    m_roleId{ src.m_roleId }
{
    autoAcceptOutstandingApplication = m_autoAcceptOutstandingApplication ? m_autoAcceptOutstandingApplication.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

InviteToGroupRequest::InviteToGroupRequest(InviteToGroupRequest&& src) :
    PFGroupsInviteToGroupRequest{ src },
    m_autoAcceptOutstandingApplication{ std::move(src.m_autoAcceptOutstandingApplication) },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) },
    m_roleId{ std::move(src.m_roleId) }
{
    autoAcceptOutstandingApplication = m_autoAcceptOutstandingApplication ? m_autoAcceptOutstandingApplication.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

InviteToGroupRequest::InviteToGroupRequest(const PFGroupsInviteToGroupRequest& src)
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
    return JsonUtils::ToJson<PFGroupsInviteToGroupRequest>(*this);
}

InviteToGroupResponse::InviteToGroupResponse() :
    PFGroupsInviteToGroupResponse{}
{
}

InviteToGroupResponse::InviteToGroupResponse(const InviteToGroupResponse& src) :
    PFGroupsInviteToGroupResponse{ src },
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
    PFGroupsInviteToGroupResponse{ src },
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

InviteToGroupResponse::InviteToGroupResponse(const PFGroupsInviteToGroupResponse& src)
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
    return JsonUtils::ToJson<PFGroupsInviteToGroupResponse>(*this);
}

IsMemberRequest::IsMemberRequest() :
    PFGroupsIsMemberRequest{}
{
}

IsMemberRequest::IsMemberRequest(const IsMemberRequest& src) :
    PFGroupsIsMemberRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group },
    m_roleId{ src.m_roleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

IsMemberRequest::IsMemberRequest(IsMemberRequest&& src) :
    PFGroupsIsMemberRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) },
    m_roleId{ std::move(src.m_roleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

IsMemberRequest::IsMemberRequest(const PFGroupsIsMemberRequest& src)
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
    return JsonUtils::ToJson<PFGroupsIsMemberRequest>(*this);
}

IsMemberResponse::IsMemberResponse() :
    PFGroupsIsMemberResponse{}
{
}


IsMemberResponse::IsMemberResponse(const PFGroupsIsMemberResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IsMemberResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsMember", isMember);
}

JsonValue IsMemberResponse::ToJson() const
{
    return JsonUtils::ToJson<PFGroupsIsMemberResponse>(*this);
}

size_t IsMemberResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFGroupsIsMemberResponse) };
    return serializedSize;
}

void IsMemberResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFGroupsIsMemberResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFGroupsIsMemberResponse);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

ListGroupApplicationsRequest::ListGroupApplicationsRequest() :
    PFGroupsListGroupApplicationsRequest{}
{
}

ListGroupApplicationsRequest::ListGroupApplicationsRequest(const ListGroupApplicationsRequest& src) :
    PFGroupsListGroupApplicationsRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
}

ListGroupApplicationsRequest::ListGroupApplicationsRequest(ListGroupApplicationsRequest&& src) :
    PFGroupsListGroupApplicationsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
}

ListGroupApplicationsRequest::ListGroupApplicationsRequest(const PFGroupsListGroupApplicationsRequest& src)
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
    return JsonUtils::ToJson<PFGroupsListGroupApplicationsRequest>(*this);
}

GroupApplication::GroupApplication() :
    PFGroupsGroupApplication{}
{
}

GroupApplication::GroupApplication(const GroupApplication& src) :
    PFGroupsGroupApplication{ src },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = m_group ? m_group.operator->() : nullptr;
}

GroupApplication::GroupApplication(GroupApplication&& src) :
    PFGroupsGroupApplication{ src },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = m_group ? m_group.operator->() : nullptr;
}

GroupApplication::GroupApplication(const PFGroupsGroupApplication& src)
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
    return JsonUtils::ToJson<PFGroupsGroupApplication>(*this);
}

ListGroupApplicationsResponse::ListGroupApplicationsResponse() :
    PFGroupsListGroupApplicationsResponse{}
{
}

ListGroupApplicationsResponse::ListGroupApplicationsResponse(const ListGroupApplicationsResponse& src) :
    PFGroupsListGroupApplicationsResponse{ src },
    m_applications{ src.m_applications }
{
    applications = m_applications.Empty() ? nullptr : m_applications.Data();
}

ListGroupApplicationsResponse::ListGroupApplicationsResponse(ListGroupApplicationsResponse&& src) :
    PFGroupsListGroupApplicationsResponse{ src },
    m_applications{ std::move(src.m_applications) }
{
    applications = m_applications.Empty() ? nullptr : m_applications.Data();
}

ListGroupApplicationsResponse::ListGroupApplicationsResponse(const PFGroupsListGroupApplicationsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupApplicationsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Applications", m_applications, applications, applicationsCount);
}

JsonValue ListGroupApplicationsResponse::ToJson() const
{
    return JsonUtils::ToJson<PFGroupsListGroupApplicationsResponse>(*this);
}

ListGroupBlocksRequest::ListGroupBlocksRequest() :
    PFGroupsListGroupBlocksRequest{}
{
}

ListGroupBlocksRequest::ListGroupBlocksRequest(const ListGroupBlocksRequest& src) :
    PFGroupsListGroupBlocksRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
}

ListGroupBlocksRequest::ListGroupBlocksRequest(ListGroupBlocksRequest&& src) :
    PFGroupsListGroupBlocksRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
}

ListGroupBlocksRequest::ListGroupBlocksRequest(const PFGroupsListGroupBlocksRequest& src)
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
    return JsonUtils::ToJson<PFGroupsListGroupBlocksRequest>(*this);
}

GroupBlock::GroupBlock() :
    PFGroupsGroupBlock{}
{
}

GroupBlock::GroupBlock(const GroupBlock& src) :
    PFGroupsGroupBlock{ src },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PFEntityKey const*)&m_group;
}

GroupBlock::GroupBlock(GroupBlock&& src) :
    PFGroupsGroupBlock{ src },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    group = (PFEntityKey const*)&m_group;
}

GroupBlock::GroupBlock(const PFGroupsGroupBlock& src)
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
    return JsonUtils::ToJson<PFGroupsGroupBlock>(*this);
}

ListGroupBlocksResponse::ListGroupBlocksResponse() :
    PFGroupsListGroupBlocksResponse{}
{
}

ListGroupBlocksResponse::ListGroupBlocksResponse(const ListGroupBlocksResponse& src) :
    PFGroupsListGroupBlocksResponse{ src },
    m_blockedEntities{ src.m_blockedEntities }
{
    blockedEntities = m_blockedEntities.Empty() ? nullptr : m_blockedEntities.Data();
}

ListGroupBlocksResponse::ListGroupBlocksResponse(ListGroupBlocksResponse&& src) :
    PFGroupsListGroupBlocksResponse{ src },
    m_blockedEntities{ std::move(src.m_blockedEntities) }
{
    blockedEntities = m_blockedEntities.Empty() ? nullptr : m_blockedEntities.Data();
}

ListGroupBlocksResponse::ListGroupBlocksResponse(const PFGroupsListGroupBlocksResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupBlocksResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BlockedEntities", m_blockedEntities, blockedEntities, blockedEntitiesCount);
}

JsonValue ListGroupBlocksResponse::ToJson() const
{
    return JsonUtils::ToJson<PFGroupsListGroupBlocksResponse>(*this);
}

ListGroupInvitationsRequest::ListGroupInvitationsRequest() :
    PFGroupsListGroupInvitationsRequest{}
{
}

ListGroupInvitationsRequest::ListGroupInvitationsRequest(const ListGroupInvitationsRequest& src) :
    PFGroupsListGroupInvitationsRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
}

ListGroupInvitationsRequest::ListGroupInvitationsRequest(ListGroupInvitationsRequest&& src) :
    PFGroupsListGroupInvitationsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
}

ListGroupInvitationsRequest::ListGroupInvitationsRequest(const PFGroupsListGroupInvitationsRequest& src)
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
    return JsonUtils::ToJson<PFGroupsListGroupInvitationsRequest>(*this);
}

GroupInvitation::GroupInvitation() :
    PFGroupsGroupInvitation{}
{
}

GroupInvitation::GroupInvitation(const GroupInvitation& src) :
    PFGroupsGroupInvitation{ src },
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
    PFGroupsGroupInvitation{ src },
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

GroupInvitation::GroupInvitation(const PFGroupsGroupInvitation& src)
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
    return JsonUtils::ToJson<PFGroupsGroupInvitation>(*this);
}

ListGroupInvitationsResponse::ListGroupInvitationsResponse() :
    PFGroupsListGroupInvitationsResponse{}
{
}

ListGroupInvitationsResponse::ListGroupInvitationsResponse(const ListGroupInvitationsResponse& src) :
    PFGroupsListGroupInvitationsResponse{ src },
    m_invitations{ src.m_invitations }
{
    invitations = m_invitations.Empty() ? nullptr : m_invitations.Data();
}

ListGroupInvitationsResponse::ListGroupInvitationsResponse(ListGroupInvitationsResponse&& src) :
    PFGroupsListGroupInvitationsResponse{ src },
    m_invitations{ std::move(src.m_invitations) }
{
    invitations = m_invitations.Empty() ? nullptr : m_invitations.Data();
}

ListGroupInvitationsResponse::ListGroupInvitationsResponse(const PFGroupsListGroupInvitationsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupInvitationsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Invitations", m_invitations, invitations, invitationsCount);
}

JsonValue ListGroupInvitationsResponse::ToJson() const
{
    return JsonUtils::ToJson<PFGroupsListGroupInvitationsResponse>(*this);
}

ListGroupMembersRequest::ListGroupMembersRequest() :
    PFGroupsListGroupMembersRequest{}
{
}

ListGroupMembersRequest::ListGroupMembersRequest(const ListGroupMembersRequest& src) :
    PFGroupsListGroupMembersRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
}

ListGroupMembersRequest::ListGroupMembersRequest(ListGroupMembersRequest&& src) :
    PFGroupsListGroupMembersRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
}

ListGroupMembersRequest::ListGroupMembersRequest(const PFGroupsListGroupMembersRequest& src)
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
    return JsonUtils::ToJson<PFGroupsListGroupMembersRequest>(*this);
}

EntityMemberRole::EntityMemberRole() :
    PFGroupsEntityMemberRole{}
{
}

EntityMemberRole::EntityMemberRole(const EntityMemberRole& src) :
    PFGroupsEntityMemberRole{ src },
    m_members{ src.m_members },
    m_roleId{ src.m_roleId },
    m_roleName{ src.m_roleName }
{
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

EntityMemberRole::EntityMemberRole(EntityMemberRole&& src) :
    PFGroupsEntityMemberRole{ src },
    m_members{ std::move(src.m_members) },
    m_roleId{ std::move(src.m_roleId) },
    m_roleName{ std::move(src.m_roleName) }
{
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

EntityMemberRole::EntityMemberRole(const PFGroupsEntityMemberRole& src)
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
    return JsonUtils::ToJson<PFGroupsEntityMemberRole>(*this);
}

ListGroupMembersResponse::ListGroupMembersResponse() :
    PFGroupsListGroupMembersResponse{}
{
}

ListGroupMembersResponse::ListGroupMembersResponse(const ListGroupMembersResponse& src) :
    PFGroupsListGroupMembersResponse{ src },
    m_members{ src.m_members }
{
    members = m_members.Empty() ? nullptr : m_members.Data();
}

ListGroupMembersResponse::ListGroupMembersResponse(ListGroupMembersResponse&& src) :
    PFGroupsListGroupMembersResponse{ src },
    m_members{ std::move(src.m_members) }
{
    members = m_members.Empty() ? nullptr : m_members.Data();
}

ListGroupMembersResponse::ListGroupMembersResponse(const PFGroupsListGroupMembersResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListGroupMembersResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
}

JsonValue ListGroupMembersResponse::ToJson() const
{
    return JsonUtils::ToJson<PFGroupsListGroupMembersResponse>(*this);
}

ListMembershipRequest::ListMembershipRequest() :
    PFGroupsListMembershipRequest{}
{
}

ListMembershipRequest::ListMembershipRequest(const ListMembershipRequest& src) :
    PFGroupsListMembershipRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

ListMembershipRequest::ListMembershipRequest(ListMembershipRequest&& src) :
    PFGroupsListMembershipRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

ListMembershipRequest::ListMembershipRequest(const PFGroupsListMembershipRequest& src)
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
    return JsonUtils::ToJson<PFGroupsListMembershipRequest>(*this);
}

GroupRole::GroupRole() :
    PFGroupsGroupRole{}
{
}

GroupRole::GroupRole(const GroupRole& src) :
    PFGroupsGroupRole{ src },
    m_roleId{ src.m_roleId },
    m_roleName{ src.m_roleName }
{
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

GroupRole::GroupRole(GroupRole&& src) :
    PFGroupsGroupRole{ src },
    m_roleId{ std::move(src.m_roleId) },
    m_roleName{ std::move(src.m_roleName) }
{
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

GroupRole::GroupRole(const PFGroupsGroupRole& src)
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
    return JsonUtils::ToJson<PFGroupsGroupRole>(*this);
}

size_t GroupRole::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFGroupsGroupRole) };
    serializedSize += (m_roleId.size() + 1);
    serializedSize += (m_roleName.size() + 1);
    return serializedSize;
}

void GroupRole::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFGroupsGroupRole{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFGroupsGroupRole);
    memcpy(stringBuffer, m_roleId.data(), m_roleId.size() + 1);
    serializedStruct->roleId = stringBuffer;
    stringBuffer += m_roleId.size() + 1;
    memcpy(stringBuffer, m_roleName.data(), m_roleName.size() + 1);
    serializedStruct->roleName = stringBuffer;
    stringBuffer += m_roleName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GroupWithRoles::GroupWithRoles() :
    PFGroupsGroupWithRoles{}
{
}

GroupWithRoles::GroupWithRoles(const GroupWithRoles& src) :
    PFGroupsGroupWithRoles{ src },
    m_group{ src.m_group },
    m_groupName{ src.m_groupName },
    m_roles{ src.m_roles }
{
    group = m_group ? m_group.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

GroupWithRoles::GroupWithRoles(GroupWithRoles&& src) :
    PFGroupsGroupWithRoles{ src },
    m_group{ std::move(src.m_group) },
    m_groupName{ std::move(src.m_groupName) },
    m_roles{ std::move(src.m_roles) }
{
    group = m_group ? m_group.operator->() : nullptr;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    roles = m_roles.Empty() ? nullptr : m_roles.Data();
}

GroupWithRoles::GroupWithRoles(const PFGroupsGroupWithRoles& src)
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
    return JsonUtils::ToJson<PFGroupsGroupWithRoles>(*this);
}

ListMembershipResponse::ListMembershipResponse() :
    PFGroupsListMembershipResponse{}
{
}

ListMembershipResponse::ListMembershipResponse(const ListMembershipResponse& src) :
    PFGroupsListMembershipResponse{ src },
    m_groups{ src.m_groups }
{
    groups = m_groups.Empty() ? nullptr : m_groups.Data();
}

ListMembershipResponse::ListMembershipResponse(ListMembershipResponse&& src) :
    PFGroupsListMembershipResponse{ src },
    m_groups{ std::move(src.m_groups) }
{
    groups = m_groups.Empty() ? nullptr : m_groups.Data();
}

ListMembershipResponse::ListMembershipResponse(const PFGroupsListMembershipResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMembershipResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Groups", m_groups, groups, groupsCount);
}

JsonValue ListMembershipResponse::ToJson() const
{
    return JsonUtils::ToJson<PFGroupsListMembershipResponse>(*this);
}

ListMembershipOpportunitiesRequest::ListMembershipOpportunitiesRequest() :
    PFGroupsListMembershipOpportunitiesRequest{}
{
}

ListMembershipOpportunitiesRequest::ListMembershipOpportunitiesRequest(const ListMembershipOpportunitiesRequest& src) :
    PFGroupsListMembershipOpportunitiesRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

ListMembershipOpportunitiesRequest::ListMembershipOpportunitiesRequest(ListMembershipOpportunitiesRequest&& src) :
    PFGroupsListMembershipOpportunitiesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

ListMembershipOpportunitiesRequest::ListMembershipOpportunitiesRequest(const PFGroupsListMembershipOpportunitiesRequest& src)
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
    return JsonUtils::ToJson<PFGroupsListMembershipOpportunitiesRequest>(*this);
}

ListMembershipOpportunitiesResponse::ListMembershipOpportunitiesResponse() :
    PFGroupsListMembershipOpportunitiesResponse{}
{
}

ListMembershipOpportunitiesResponse::ListMembershipOpportunitiesResponse(const ListMembershipOpportunitiesResponse& src) :
    PFGroupsListMembershipOpportunitiesResponse{ src },
    m_applications{ src.m_applications },
    m_invitations{ src.m_invitations }
{
    applications = m_applications.Empty() ? nullptr : m_applications.Data();
    invitations = m_invitations.Empty() ? nullptr : m_invitations.Data();
}

ListMembershipOpportunitiesResponse::ListMembershipOpportunitiesResponse(ListMembershipOpportunitiesResponse&& src) :
    PFGroupsListMembershipOpportunitiesResponse{ src },
    m_applications{ std::move(src.m_applications) },
    m_invitations{ std::move(src.m_invitations) }
{
    applications = m_applications.Empty() ? nullptr : m_applications.Data();
    invitations = m_invitations.Empty() ? nullptr : m_invitations.Data();
}

ListMembershipOpportunitiesResponse::ListMembershipOpportunitiesResponse(const PFGroupsListMembershipOpportunitiesResponse& src)
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
    return JsonUtils::ToJson<PFGroupsListMembershipOpportunitiesResponse>(*this);
}

RemoveGroupApplicationRequest::RemoveGroupApplicationRequest() :
    PFGroupsRemoveGroupApplicationRequest{}
{
}

RemoveGroupApplicationRequest::RemoveGroupApplicationRequest(const RemoveGroupApplicationRequest& src) :
    PFGroupsRemoveGroupApplicationRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
}

RemoveGroupApplicationRequest::RemoveGroupApplicationRequest(RemoveGroupApplicationRequest&& src) :
    PFGroupsRemoveGroupApplicationRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
}

RemoveGroupApplicationRequest::RemoveGroupApplicationRequest(const PFGroupsRemoveGroupApplicationRequest& src)
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
    return JsonUtils::ToJson<PFGroupsRemoveGroupApplicationRequest>(*this);
}

RemoveGroupInvitationRequest::RemoveGroupInvitationRequest() :
    PFGroupsRemoveGroupInvitationRequest{}
{
}

RemoveGroupInvitationRequest::RemoveGroupInvitationRequest(const RemoveGroupInvitationRequest& src) :
    PFGroupsRemoveGroupInvitationRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
}

RemoveGroupInvitationRequest::RemoveGroupInvitationRequest(RemoveGroupInvitationRequest&& src) :
    PFGroupsRemoveGroupInvitationRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
}

RemoveGroupInvitationRequest::RemoveGroupInvitationRequest(const PFGroupsRemoveGroupInvitationRequest& src)
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
    return JsonUtils::ToJson<PFGroupsRemoveGroupInvitationRequest>(*this);
}

RemoveMembersRequest::RemoveMembersRequest() :
    PFGroupsRemoveMembersRequest{}
{
}

RemoveMembersRequest::RemoveMembersRequest(const RemoveMembersRequest& src) :
    PFGroupsRemoveMembersRequest{ src },
    m_customTags{ src.m_customTags },
    m_group{ src.m_group },
    m_members{ src.m_members },
    m_roleId{ src.m_roleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

RemoveMembersRequest::RemoveMembersRequest(RemoveMembersRequest&& src) :
    PFGroupsRemoveMembersRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_group{ std::move(src.m_group) },
    m_members{ std::move(src.m_members) },
    m_roleId{ std::move(src.m_roleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    group = (PFEntityKey const*)&m_group;
    members = m_members.Empty() ? nullptr : m_members.Data();
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
}

RemoveMembersRequest::RemoveMembersRequest(const PFGroupsRemoveMembersRequest& src)
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
    return JsonUtils::ToJson<PFGroupsRemoveMembersRequest>(*this);
}

UnblockEntityRequest::UnblockEntityRequest() :
    PFGroupsUnblockEntityRequest{}
{
}

UnblockEntityRequest::UnblockEntityRequest(const UnblockEntityRequest& src) :
    PFGroupsUnblockEntityRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_group{ src.m_group }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
}

UnblockEntityRequest::UnblockEntityRequest(UnblockEntityRequest&& src) :
    PFGroupsUnblockEntityRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_group{ std::move(src.m_group) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    group = (PFEntityKey const*)&m_group;
}

UnblockEntityRequest::UnblockEntityRequest(const PFGroupsUnblockEntityRequest& src)
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
    return JsonUtils::ToJson<PFGroupsUnblockEntityRequest>(*this);
}

UpdateGroupRequest::UpdateGroupRequest() :
    PFGroupsUpdateGroupRequest{}
{
}

UpdateGroupRequest::UpdateGroupRequest(const UpdateGroupRequest& src) :
    PFGroupsUpdateGroupRequest{ src },
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
    group = (PFEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
}

UpdateGroupRequest::UpdateGroupRequest(UpdateGroupRequest&& src) :
    PFGroupsUpdateGroupRequest{ src },
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
    group = (PFEntityKey const*)&m_group;
    groupName = m_groupName.empty() ? nullptr : m_groupName.data();
    memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
}

UpdateGroupRequest::UpdateGroupRequest(const PFGroupsUpdateGroupRequest& src)
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
    return JsonUtils::ToJson<PFGroupsUpdateGroupRequest>(*this);
}

UpdateGroupResponse::UpdateGroupResponse() :
    PFGroupsUpdateGroupResponse{}
{
}

UpdateGroupResponse::UpdateGroupResponse(const UpdateGroupResponse& src) :
    PFGroupsUpdateGroupResponse{ src },
    m_operationReason{ src.m_operationReason },
    m_setResult{ src.m_setResult }
{
    operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
    setResult = m_setResult ? m_setResult.operator->() : nullptr;
}

UpdateGroupResponse::UpdateGroupResponse(UpdateGroupResponse&& src) :
    PFGroupsUpdateGroupResponse{ src },
    m_operationReason{ std::move(src.m_operationReason) },
    m_setResult{ std::move(src.m_setResult) }
{
    operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
    setResult = m_setResult ? m_setResult.operator->() : nullptr;
}

UpdateGroupResponse::UpdateGroupResponse(const PFGroupsUpdateGroupResponse& src)
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
    return JsonUtils::ToJson<PFGroupsUpdateGroupResponse>(*this);
}

UpdateGroupRoleRequest::UpdateGroupRoleRequest() :
    PFGroupsUpdateGroupRoleRequest{}
{
}

UpdateGroupRoleRequest::UpdateGroupRoleRequest(const UpdateGroupRoleRequest& src) :
    PFGroupsUpdateGroupRoleRequest{ src },
    m_customTags{ src.m_customTags },
    m_expectedProfileVersion{ src.m_expectedProfileVersion },
    m_group{ src.m_group },
    m_roleId{ src.m_roleId },
    m_roleName{ src.m_roleName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
    group = (PFEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

UpdateGroupRoleRequest::UpdateGroupRoleRequest(UpdateGroupRoleRequest&& src) :
    PFGroupsUpdateGroupRoleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_expectedProfileVersion{ std::move(src.m_expectedProfileVersion) },
    m_group{ std::move(src.m_group) },
    m_roleId{ std::move(src.m_roleId) },
    m_roleName{ std::move(src.m_roleName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
    group = (PFEntityKey const*)&m_group;
    roleId = m_roleId.empty() ? nullptr : m_roleId.data();
    roleName = m_roleName.empty() ? nullptr : m_roleName.data();
}

UpdateGroupRoleRequest::UpdateGroupRoleRequest(const PFGroupsUpdateGroupRoleRequest& src)
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
    return JsonUtils::ToJson<PFGroupsUpdateGroupRoleRequest>(*this);
}

UpdateGroupRoleResponse::UpdateGroupRoleResponse() :
    PFGroupsUpdateGroupRoleResponse{}
{
}

UpdateGroupRoleResponse::UpdateGroupRoleResponse(const UpdateGroupRoleResponse& src) :
    PFGroupsUpdateGroupRoleResponse{ src },
    m_operationReason{ src.m_operationReason },
    m_setResult{ src.m_setResult }
{
    operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
    setResult = m_setResult ? m_setResult.operator->() : nullptr;
}

UpdateGroupRoleResponse::UpdateGroupRoleResponse(UpdateGroupRoleResponse&& src) :
    PFGroupsUpdateGroupRoleResponse{ src },
    m_operationReason{ std::move(src.m_operationReason) },
    m_setResult{ std::move(src.m_setResult) }
{
    operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
    setResult = m_setResult ? m_setResult.operator->() : nullptr;
}

UpdateGroupRoleResponse::UpdateGroupRoleResponse(const PFGroupsUpdateGroupRoleResponse& src)
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
    return JsonUtils::ToJson<PFGroupsUpdateGroupRoleResponse>(*this);
}

} // namespace GroupsModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFGroupsAcceptGroupApplicationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsAcceptGroupInvitationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsAddMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsApplyToGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AutoAcceptOutstandingInvite", input.autoAcceptOutstandingInvite);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsEntityWithLineage& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Lineage", input.lineage, input.lineageCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsApplyToGroupResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsBlockEntityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsChangeMemberRoleRequest& input)
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
inline JsonValue ToJson<>(const PFGroupsCreateGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsCreateGroupResponse& input)
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
inline JsonValue ToJson<>(const PFGroupsCreateGroupRoleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsCreateGroupRoleResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsDeleteGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsDeleteRoleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsGetGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsGetGroupResponse& input)
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
inline JsonValue ToJson<>(const PFGroupsInviteToGroupRequest& input)
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
inline JsonValue ToJson<>(const PFGroupsInviteToGroupResponse& input)
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
inline JsonValue ToJson<>(const PFGroupsIsMemberRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsIsMemberResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsMember", input.isMember);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListGroupApplicationsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsGroupApplication& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListGroupApplicationsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Applications", input.applications, input.applicationsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListGroupBlocksRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsGroupBlock& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListGroupBlocksResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BlockedEntities", input.blockedEntities, input.blockedEntitiesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListGroupInvitationsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsGroupInvitation& input)
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
inline JsonValue ToJson<>(const PFGroupsListGroupInvitationsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Invitations", input.invitations, input.invitationsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListGroupMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsEntityMemberRole& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListGroupMembersResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListMembershipRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsGroupRole& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsGroupWithRoles& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "Roles", input.roles, input.rolesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListMembershipResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Groups", input.groups, input.groupsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListMembershipOpportunitiesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsListMembershipOpportunitiesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Applications", input.applications, input.applicationsCount);
    JsonUtils::ObjectAddMember(output, "Invitations", input.invitations, input.invitationsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsRemoveGroupApplicationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsRemoveGroupInvitationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsRemoveMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsUnblockEntityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Group", input.group);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsUpdateGroupRequest& input)
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
inline JsonValue ToJson<>(const PFGroupsUpdateGroupResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OperationReason", input.operationReason);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "SetResult", input.setResult);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGroupsUpdateGroupRoleRequest& input)
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
inline JsonValue ToJson<>(const PFGroupsUpdateGroupRoleResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OperationReason", input.operationReason);
    JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
    JsonUtils::ObjectAddMember(output, "SetResult", input.setResult);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
