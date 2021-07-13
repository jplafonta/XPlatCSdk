#include "stdafx.h"
#include "ProfilesDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace ProfilesModels
{

EntityDataObject::EntityDataObject() :
    PlayFabProfilesEntityDataObject{}
{
}

EntityDataObject::EntityDataObject(const EntityDataObject& src) :
    PlayFabProfilesEntityDataObject{ src },
    m_dataObject{ src.m_dataObject },
    m_escapedDataObject{ src.m_escapedDataObject },
    m_objectName{ src.m_objectName }
{
    dataObject.stringValue = m_dataObject.StringValue();
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
    objectName = m_objectName.empty() ? nullptr : m_objectName.data();
}

EntityDataObject::EntityDataObject(EntityDataObject&& src) :
    PlayFabProfilesEntityDataObject{ src },
    m_dataObject{ std::move(src.m_dataObject) },
    m_escapedDataObject{ std::move(src.m_escapedDataObject) },
    m_objectName{ std::move(src.m_objectName) }
{
    dataObject.stringValue = m_dataObject.StringValue();
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
    objectName = m_objectName.empty() ? nullptr : m_objectName.data();
}

EntityDataObject::EntityDataObject(const PlayFabProfilesEntityDataObject& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityDataObject::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataObject", m_dataObject, dataObject);
    JsonUtils::ObjectGetMember(input, "EscapedDataObject", m_escapedDataObject, escapedDataObject);
    JsonUtils::ObjectGetMember(input, "ObjectName", m_objectName, objectName);
}

JsonValue EntityDataObject::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesEntityDataObject>(*this);
}

EntityLineage::EntityLineage() :
    PlayFabProfilesEntityLineage{}
{
}

EntityLineage::EntityLineage(const EntityLineage& src) :
    PlayFabProfilesEntityLineage{ src },
    m_characterId{ src.m_characterId },
    m_groupId{ src.m_groupId },
    m_masterPlayerAccountId{ src.m_masterPlayerAccountId },
    m_namespaceId{ src.m_namespaceId },
    m_titleId{ src.m_titleId },
    m_titlePlayerAccountId{ src.m_titlePlayerAccountId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    groupId = m_groupId.empty() ? nullptr : m_groupId.data();
    masterPlayerAccountId = m_masterPlayerAccountId.empty() ? nullptr : m_masterPlayerAccountId.data();
    namespaceId = m_namespaceId.empty() ? nullptr : m_namespaceId.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titlePlayerAccountId = m_titlePlayerAccountId.empty() ? nullptr : m_titlePlayerAccountId.data();
}

EntityLineage::EntityLineage(EntityLineage&& src) :
    PlayFabProfilesEntityLineage{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_groupId{ std::move(src.m_groupId) },
    m_masterPlayerAccountId{ std::move(src.m_masterPlayerAccountId) },
    m_namespaceId{ std::move(src.m_namespaceId) },
    m_titleId{ std::move(src.m_titleId) },
    m_titlePlayerAccountId{ std::move(src.m_titlePlayerAccountId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    groupId = m_groupId.empty() ? nullptr : m_groupId.data();
    masterPlayerAccountId = m_masterPlayerAccountId.empty() ? nullptr : m_masterPlayerAccountId.data();
    namespaceId = m_namespaceId.empty() ? nullptr : m_namespaceId.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titlePlayerAccountId = m_titlePlayerAccountId.empty() ? nullptr : m_titlePlayerAccountId.data();
}

EntityLineage::EntityLineage(const PlayFabProfilesEntityLineage& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityLineage::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "GroupId", m_groupId, groupId);
    JsonUtils::ObjectGetMember(input, "MasterPlayerAccountId", m_masterPlayerAccountId, masterPlayerAccountId);
    JsonUtils::ObjectGetMember(input, "NamespaceId", m_namespaceId, namespaceId);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "TitlePlayerAccountId", m_titlePlayerAccountId, titlePlayerAccountId);
}

JsonValue EntityLineage::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesEntityLineage>(*this);
}

size_t EntityLineage::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabProfilesEntityLineage) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_groupId.size() + 1);
    serializedSize += (m_masterPlayerAccountId.size() + 1);
    serializedSize += (m_namespaceId.size() + 1);
    serializedSize += (m_titleId.size() + 1);
    serializedSize += (m_titlePlayerAccountId.size() + 1);
    return serializedSize;
}

void EntityLineage::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabProfilesEntityLineage{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabProfilesEntityLineage);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_groupId.data(), m_groupId.size() + 1);
    serializedStruct->groupId = stringBuffer;
    stringBuffer += m_groupId.size() + 1;
    memcpy(stringBuffer, m_masterPlayerAccountId.data(), m_masterPlayerAccountId.size() + 1);
    serializedStruct->masterPlayerAccountId = stringBuffer;
    stringBuffer += m_masterPlayerAccountId.size() + 1;
    memcpy(stringBuffer, m_namespaceId.data(), m_namespaceId.size() + 1);
    serializedStruct->namespaceId = stringBuffer;
    stringBuffer += m_namespaceId.size() + 1;
    memcpy(stringBuffer, m_titleId.data(), m_titleId.size() + 1);
    serializedStruct->titleId = stringBuffer;
    stringBuffer += m_titleId.size() + 1;
    memcpy(stringBuffer, m_titlePlayerAccountId.data(), m_titlePlayerAccountId.size() + 1);
    serializedStruct->titlePlayerAccountId = stringBuffer;
    stringBuffer += m_titlePlayerAccountId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EntityPermissionStatement::EntityPermissionStatement() :
    PlayFabProfilesEntityPermissionStatement{}
{
}

EntityPermissionStatement::EntityPermissionStatement(const EntityPermissionStatement& src) :
    PlayFabProfilesEntityPermissionStatement{ src },
    m_action{ src.m_action },
    m_comment{ src.m_comment },
    m_condition{ src.m_condition },
    m_principal{ src.m_principal },
    m_resource{ src.m_resource }
{
    action = m_action.empty() ? nullptr : m_action.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    condition.stringValue = m_condition.StringValue();
    principal.stringValue = m_principal.StringValue();
    resource = m_resource.empty() ? nullptr : m_resource.data();
}

EntityPermissionStatement::EntityPermissionStatement(EntityPermissionStatement&& src) :
    PlayFabProfilesEntityPermissionStatement{ src },
    m_action{ std::move(src.m_action) },
    m_comment{ std::move(src.m_comment) },
    m_condition{ std::move(src.m_condition) },
    m_principal{ std::move(src.m_principal) },
    m_resource{ std::move(src.m_resource) }
{
    action = m_action.empty() ? nullptr : m_action.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    condition.stringValue = m_condition.StringValue();
    principal.stringValue = m_principal.StringValue();
    resource = m_resource.empty() ? nullptr : m_resource.data();
}

EntityPermissionStatement::EntityPermissionStatement(const PlayFabProfilesEntityPermissionStatement& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityPermissionStatement::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Action", m_action, action);
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "Condition", m_condition, condition);
    JsonUtils::ObjectGetMember(input, "Effect", effect);
    JsonUtils::ObjectGetMember(input, "Principal", m_principal, principal);
    JsonUtils::ObjectGetMember(input, "Resource", m_resource, resource);
}

JsonValue EntityPermissionStatement::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesEntityPermissionStatement>(*this);
}

EntityProfileFileMetadata::EntityProfileFileMetadata() :
    PlayFabProfilesEntityProfileFileMetadata{}
{
}

EntityProfileFileMetadata::EntityProfileFileMetadata(const EntityProfileFileMetadata& src) :
    PlayFabProfilesEntityProfileFileMetadata{ src },
    m_checksum{ src.m_checksum },
    m_fileName{ src.m_fileName }
{
    checksum = m_checksum.empty() ? nullptr : m_checksum.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

EntityProfileFileMetadata::EntityProfileFileMetadata(EntityProfileFileMetadata&& src) :
    PlayFabProfilesEntityProfileFileMetadata{ src },
    m_checksum{ std::move(src.m_checksum) },
    m_fileName{ std::move(src.m_fileName) }
{
    checksum = m_checksum.empty() ? nullptr : m_checksum.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

EntityProfileFileMetadata::EntityProfileFileMetadata(const PlayFabProfilesEntityProfileFileMetadata& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityProfileFileMetadata::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Checksum", m_checksum, checksum);
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
    JsonUtils::ObjectGetMember(input, "LastModified", lastModified, true);
    JsonUtils::ObjectGetMember(input, "Size", size);
}

JsonValue EntityProfileFileMetadata::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesEntityProfileFileMetadata>(*this);
}

size_t EntityProfileFileMetadata::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabProfilesEntityProfileFileMetadata) };
    serializedSize += (m_checksum.size() + 1);
    serializedSize += (m_fileName.size() + 1);
    return serializedSize;
}

void EntityProfileFileMetadata::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabProfilesEntityProfileFileMetadata{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabProfilesEntityProfileFileMetadata);
    memcpy(stringBuffer, m_checksum.data(), m_checksum.size() + 1);
    serializedStruct->checksum = stringBuffer;
    stringBuffer += m_checksum.size() + 1;
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EntityStatisticChildValue::EntityStatisticChildValue() :
    PlayFabProfilesEntityStatisticChildValue{}
{
}

EntityStatisticChildValue::EntityStatisticChildValue(const EntityStatisticChildValue& src) :
    PlayFabProfilesEntityStatisticChildValue{ src },
    m_childName{ src.m_childName },
    m_metadata{ src.m_metadata }
{
    childName = m_childName.empty() ? nullptr : m_childName.data();
    metadata = m_metadata.empty() ? nullptr : m_metadata.data();
}

EntityStatisticChildValue::EntityStatisticChildValue(EntityStatisticChildValue&& src) :
    PlayFabProfilesEntityStatisticChildValue{ src },
    m_childName{ std::move(src.m_childName) },
    m_metadata{ std::move(src.m_metadata) }
{
    childName = m_childName.empty() ? nullptr : m_childName.data();
    metadata = m_metadata.empty() ? nullptr : m_metadata.data();
}

EntityStatisticChildValue::EntityStatisticChildValue(const PlayFabProfilesEntityStatisticChildValue& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityStatisticChildValue::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ChildName", m_childName, childName);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata);
    JsonUtils::ObjectGetMember(input, "Value", value);
}

JsonValue EntityStatisticChildValue::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesEntityStatisticChildValue>(*this);
}

size_t EntityStatisticChildValue::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabProfilesEntityStatisticChildValue) };
    serializedSize += (m_childName.size() + 1);
    serializedSize += (m_metadata.size() + 1);
    return serializedSize;
}

void EntityStatisticChildValue::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabProfilesEntityStatisticChildValue{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabProfilesEntityStatisticChildValue);
    memcpy(stringBuffer, m_childName.data(), m_childName.size() + 1);
    serializedStruct->childName = stringBuffer;
    stringBuffer += m_childName.size() + 1;
    memcpy(stringBuffer, m_metadata.data(), m_metadata.size() + 1);
    serializedStruct->metadata = stringBuffer;
    stringBuffer += m_metadata.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EntityStatisticValue::EntityStatisticValue() :
    PlayFabProfilesEntityStatisticValue{}
{
}

EntityStatisticValue::EntityStatisticValue(const EntityStatisticValue& src) :
    PlayFabProfilesEntityStatisticValue{ src },
    m_childStatistics{ src.m_childStatistics },
    m_metadata{ src.m_metadata },
    m_name{ src.m_name },
    m_value{ src.m_value }
{
    childStatistics = m_childStatistics.Empty() ? nullptr : m_childStatistics.Data();
    metadata = m_metadata.empty() ? nullptr : m_metadata.data();
    name = m_name.empty() ? nullptr : m_name.data();
    value = m_value ? m_value.operator->() : nullptr;
}

EntityStatisticValue::EntityStatisticValue(EntityStatisticValue&& src) :
    PlayFabProfilesEntityStatisticValue{ src },
    m_childStatistics{ std::move(src.m_childStatistics) },
    m_metadata{ std::move(src.m_metadata) },
    m_name{ std::move(src.m_name) },
    m_value{ std::move(src.m_value) }
{
    childStatistics = m_childStatistics.Empty() ? nullptr : m_childStatistics.Data();
    metadata = m_metadata.empty() ? nullptr : m_metadata.data();
    name = m_name.empty() ? nullptr : m_name.data();
    value = m_value ? m_value.operator->() : nullptr;
}

EntityStatisticValue::EntityStatisticValue(const PlayFabProfilesEntityStatisticValue& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityStatisticValue::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ChildStatistics", m_childStatistics, childStatistics, childStatisticsCount);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue EntityStatisticValue::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesEntityStatisticValue>(*this);
}

EntityProfileBody::EntityProfileBody() :
    PlayFabProfilesEntityProfileBody{}
{
}

EntityProfileBody::EntityProfileBody(const EntityProfileBody& src) :
    PlayFabProfilesEntityProfileBody{ src },
    m_avatarUrl{ src.m_avatarUrl },
    m_displayName{ src.m_displayName },
    m_entity{ src.m_entity },
    m_entityChain{ src.m_entityChain },
    m_experimentVariants{ src.m_experimentVariants },
    m_files{ src.m_files },
    m_language{ src.m_language },
    m_leaderboardMetadata{ src.m_leaderboardMetadata },
    m_lineage{ src.m_lineage },
    m_objects{ src.m_objects },
    m_permissions{ src.m_permissions },
    m_statistics{ src.m_statistics }
{
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    entityChain = m_entityChain.empty() ? nullptr : m_entityChain.data();
    experimentVariants = m_experimentVariants.Empty() ? nullptr : m_experimentVariants.Data();
    files = m_files.Empty() ? nullptr : m_files.Data();
    language = m_language.empty() ? nullptr : m_language.data();
    leaderboardMetadata = m_leaderboardMetadata.empty() ? nullptr : m_leaderboardMetadata.data();
    lineage = m_lineage ? m_lineage.operator->() : nullptr;
    objects = m_objects.Empty() ? nullptr : m_objects.Data();
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

EntityProfileBody::EntityProfileBody(EntityProfileBody&& src) :
    PlayFabProfilesEntityProfileBody{ src },
    m_avatarUrl{ std::move(src.m_avatarUrl) },
    m_displayName{ std::move(src.m_displayName) },
    m_entity{ std::move(src.m_entity) },
    m_entityChain{ std::move(src.m_entityChain) },
    m_experimentVariants{ std::move(src.m_experimentVariants) },
    m_files{ std::move(src.m_files) },
    m_language{ std::move(src.m_language) },
    m_leaderboardMetadata{ std::move(src.m_leaderboardMetadata) },
    m_lineage{ std::move(src.m_lineage) },
    m_objects{ std::move(src.m_objects) },
    m_permissions{ std::move(src.m_permissions) },
    m_statistics{ std::move(src.m_statistics) }
{
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    entityChain = m_entityChain.empty() ? nullptr : m_entityChain.data();
    experimentVariants = m_experimentVariants.Empty() ? nullptr : m_experimentVariants.Data();
    files = m_files.Empty() ? nullptr : m_files.Data();
    language = m_language.empty() ? nullptr : m_language.data();
    leaderboardMetadata = m_leaderboardMetadata.empty() ? nullptr : m_leaderboardMetadata.data();
    lineage = m_lineage ? m_lineage.operator->() : nullptr;
    objects = m_objects.Empty() ? nullptr : m_objects.Data();
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

EntityProfileBody::EntityProfileBody(const PlayFabProfilesEntityProfileBody& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityProfileBody::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "EntityChain", m_entityChain, entityChain);
    JsonUtils::ObjectGetMember(input, "ExperimentVariants", m_experimentVariants, experimentVariants, experimentVariantsCount);
    JsonUtils::ObjectGetMember(input, "Files", m_files, files, filesCount);
    JsonUtils::ObjectGetMember(input, "Language", m_language, language);
    JsonUtils::ObjectGetMember(input, "LeaderboardMetadata", m_leaderboardMetadata, leaderboardMetadata);
    JsonUtils::ObjectGetMember(input, "Lineage", m_lineage, lineage);
    JsonUtils::ObjectGetMember(input, "Objects", m_objects, objects, objectsCount);
    JsonUtils::ObjectGetMember(input, "Permissions", m_permissions, permissions, permissionsCount);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
    JsonUtils::ObjectGetMember(input, "VersionNumber", versionNumber);
}

JsonValue EntityProfileBody::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesEntityProfileBody>(*this);
}

GetEntityProfileRequest::GetEntityProfileRequest() :
    PlayFabProfilesGetEntityProfileRequest{}
{
}

GetEntityProfileRequest::GetEntityProfileRequest(const GetEntityProfileRequest& src) :
    PlayFabProfilesGetEntityProfileRequest{ src },
    m_customTags{ src.m_customTags },
    m_dataAsObject{ src.m_dataAsObject },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    dataAsObject = m_dataAsObject ? m_dataAsObject.operator->() : nullptr;
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetEntityProfileRequest::GetEntityProfileRequest(GetEntityProfileRequest&& src) :
    PlayFabProfilesGetEntityProfileRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_dataAsObject{ std::move(src.m_dataAsObject) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    dataAsObject = m_dataAsObject ? m_dataAsObject.operator->() : nullptr;
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetEntityProfileRequest::GetEntityProfileRequest(const PlayFabProfilesGetEntityProfileRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetEntityProfileRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DataAsObject", m_dataAsObject, dataAsObject);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
}

JsonValue GetEntityProfileRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesGetEntityProfileRequest>(*this);
}

GetEntityProfileResponse::GetEntityProfileResponse() :
    PlayFabProfilesGetEntityProfileResponse{}
{
}

GetEntityProfileResponse::GetEntityProfileResponse(const GetEntityProfileResponse& src) :
    PlayFabProfilesGetEntityProfileResponse{ src },
    m_profile{ src.m_profile }
{
    profile = m_profile ? m_profile.operator->() : nullptr;
}

GetEntityProfileResponse::GetEntityProfileResponse(GetEntityProfileResponse&& src) :
    PlayFabProfilesGetEntityProfileResponse{ src },
    m_profile{ std::move(src.m_profile) }
{
    profile = m_profile ? m_profile.operator->() : nullptr;
}

GetEntityProfileResponse::GetEntityProfileResponse(const PlayFabProfilesGetEntityProfileResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetEntityProfileResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Profile", m_profile, profile);
}

JsonValue GetEntityProfileResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesGetEntityProfileResponse>(*this);
}

GetEntityProfilesRequest::GetEntityProfilesRequest() :
    PlayFabProfilesGetEntityProfilesRequest{}
{
}

GetEntityProfilesRequest::GetEntityProfilesRequest(const GetEntityProfilesRequest& src) :
    PlayFabProfilesGetEntityProfilesRequest{ src },
    m_customTags{ src.m_customTags },
    m_dataAsObject{ src.m_dataAsObject },
    m_entities{ src.m_entities }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    dataAsObject = m_dataAsObject ? m_dataAsObject.operator->() : nullptr;
    entities = m_entities.Empty() ? nullptr : m_entities.Data();
}

GetEntityProfilesRequest::GetEntityProfilesRequest(GetEntityProfilesRequest&& src) :
    PlayFabProfilesGetEntityProfilesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_dataAsObject{ std::move(src.m_dataAsObject) },
    m_entities{ std::move(src.m_entities) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    dataAsObject = m_dataAsObject ? m_dataAsObject.operator->() : nullptr;
    entities = m_entities.Empty() ? nullptr : m_entities.Data();
}

GetEntityProfilesRequest::GetEntityProfilesRequest(const PlayFabProfilesGetEntityProfilesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetEntityProfilesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DataAsObject", m_dataAsObject, dataAsObject);
    JsonUtils::ObjectGetMember(input, "Entities", m_entities, entities, entitiesCount);
}

JsonValue GetEntityProfilesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesGetEntityProfilesRequest>(*this);
}

GetEntityProfilesResponse::GetEntityProfilesResponse() :
    PlayFabProfilesGetEntityProfilesResponse{}
{
}

GetEntityProfilesResponse::GetEntityProfilesResponse(const GetEntityProfilesResponse& src) :
    PlayFabProfilesGetEntityProfilesResponse{ src },
    m_profiles{ src.m_profiles }
{
    profiles = m_profiles.Empty() ? nullptr : m_profiles.Data();
}

GetEntityProfilesResponse::GetEntityProfilesResponse(GetEntityProfilesResponse&& src) :
    PlayFabProfilesGetEntityProfilesResponse{ src },
    m_profiles{ std::move(src.m_profiles) }
{
    profiles = m_profiles.Empty() ? nullptr : m_profiles.Data();
}

GetEntityProfilesResponse::GetEntityProfilesResponse(const PlayFabProfilesGetEntityProfilesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetEntityProfilesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Profiles", m_profiles, profiles, profilesCount);
}

JsonValue GetEntityProfilesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesGetEntityProfilesResponse>(*this);
}

GetGlobalPolicyRequest::GetGlobalPolicyRequest() :
    PlayFabProfilesGetGlobalPolicyRequest{}
{
}

GetGlobalPolicyRequest::GetGlobalPolicyRequest(const GetGlobalPolicyRequest& src) :
    PlayFabProfilesGetGlobalPolicyRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetGlobalPolicyRequest::GetGlobalPolicyRequest(GetGlobalPolicyRequest&& src) :
    PlayFabProfilesGetGlobalPolicyRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetGlobalPolicyRequest::GetGlobalPolicyRequest(const PlayFabProfilesGetGlobalPolicyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetGlobalPolicyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetGlobalPolicyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesGetGlobalPolicyRequest>(*this);
}

GetGlobalPolicyResponse::GetGlobalPolicyResponse() :
    PlayFabProfilesGetGlobalPolicyResponse{}
{
}

GetGlobalPolicyResponse::GetGlobalPolicyResponse(const GetGlobalPolicyResponse& src) :
    PlayFabProfilesGetGlobalPolicyResponse{ src },
    m_permissions{ src.m_permissions }
{
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

GetGlobalPolicyResponse::GetGlobalPolicyResponse(GetGlobalPolicyResponse&& src) :
    PlayFabProfilesGetGlobalPolicyResponse{ src },
    m_permissions{ std::move(src.m_permissions) }
{
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

GetGlobalPolicyResponse::GetGlobalPolicyResponse(const PlayFabProfilesGetGlobalPolicyResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetGlobalPolicyResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Permissions", m_permissions, permissions, permissionsCount);
}

JsonValue GetGlobalPolicyResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesGetGlobalPolicyResponse>(*this);
}

GetTitlePlayersFromMasterPlayerAccountIdsRequest::GetTitlePlayersFromMasterPlayerAccountIdsRequest() :
    PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest{}
{
}

GetTitlePlayersFromMasterPlayerAccountIdsRequest::GetTitlePlayersFromMasterPlayerAccountIdsRequest(const GetTitlePlayersFromMasterPlayerAccountIdsRequest& src) :
    PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest{ src },
    m_customTags{ src.m_customTags },
    m_masterPlayerAccountIds{ src.m_masterPlayerAccountIds },
    m_titleId{ src.m_titleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    masterPlayerAccountIds = m_masterPlayerAccountIds.Empty() ? nullptr : m_masterPlayerAccountIds.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GetTitlePlayersFromMasterPlayerAccountIdsRequest::GetTitlePlayersFromMasterPlayerAccountIdsRequest(GetTitlePlayersFromMasterPlayerAccountIdsRequest&& src) :
    PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_masterPlayerAccountIds{ std::move(src.m_masterPlayerAccountIds) },
    m_titleId{ std::move(src.m_titleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    masterPlayerAccountIds = m_masterPlayerAccountIds.Empty() ? nullptr : m_masterPlayerAccountIds.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GetTitlePlayersFromMasterPlayerAccountIdsRequest::GetTitlePlayersFromMasterPlayerAccountIdsRequest(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitlePlayersFromMasterPlayerAccountIdsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MasterPlayerAccountIds", m_masterPlayerAccountIds, masterPlayerAccountIds, masterPlayerAccountIdsCount);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue GetTitlePlayersFromMasterPlayerAccountIdsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>(*this);
}

GetTitlePlayersFromMasterPlayerAccountIdsResponse::GetTitlePlayersFromMasterPlayerAccountIdsResponse() :
    PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse{}
{
}

GetTitlePlayersFromMasterPlayerAccountIdsResponse::GetTitlePlayersFromMasterPlayerAccountIdsResponse(const GetTitlePlayersFromMasterPlayerAccountIdsResponse& src) :
    PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse{ src },
    m_titleId{ src.m_titleId },
    m_titlePlayerAccounts{ src.m_titlePlayerAccounts }
{
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titlePlayerAccounts = m_titlePlayerAccounts.Empty() ? nullptr : m_titlePlayerAccounts.Data();
}

GetTitlePlayersFromMasterPlayerAccountIdsResponse::GetTitlePlayersFromMasterPlayerAccountIdsResponse(GetTitlePlayersFromMasterPlayerAccountIdsResponse&& src) :
    PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse{ src },
    m_titleId{ std::move(src.m_titleId) },
    m_titlePlayerAccounts{ std::move(src.m_titlePlayerAccounts) }
{
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titlePlayerAccounts = m_titlePlayerAccounts.Empty() ? nullptr : m_titlePlayerAccounts.Data();
}

GetTitlePlayersFromMasterPlayerAccountIdsResponse::GetTitlePlayersFromMasterPlayerAccountIdsResponse(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitlePlayersFromMasterPlayerAccountIdsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "TitlePlayerAccounts", m_titlePlayerAccounts, titlePlayerAccounts, titlePlayerAccountsCount);
}

JsonValue GetTitlePlayersFromMasterPlayerAccountIdsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>(*this);
}

SetEntityProfilePolicyRequest::SetEntityProfilePolicyRequest() :
    PlayFabProfilesSetEntityProfilePolicyRequest{}
{
}

SetEntityProfilePolicyRequest::SetEntityProfilePolicyRequest(const SetEntityProfilePolicyRequest& src) :
    PlayFabProfilesSetEntityProfilePolicyRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_statements{ src.m_statements }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

SetEntityProfilePolicyRequest::SetEntityProfilePolicyRequest(SetEntityProfilePolicyRequest&& src) :
    PlayFabProfilesSetEntityProfilePolicyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_statements{ std::move(src.m_statements) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

SetEntityProfilePolicyRequest::SetEntityProfilePolicyRequest(const PlayFabProfilesSetEntityProfilePolicyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetEntityProfilePolicyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
}

JsonValue SetEntityProfilePolicyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesSetEntityProfilePolicyRequest>(*this);
}

SetEntityProfilePolicyResponse::SetEntityProfilePolicyResponse() :
    PlayFabProfilesSetEntityProfilePolicyResponse{}
{
}

SetEntityProfilePolicyResponse::SetEntityProfilePolicyResponse(const SetEntityProfilePolicyResponse& src) :
    PlayFabProfilesSetEntityProfilePolicyResponse{ src },
    m_permissions{ src.m_permissions }
{
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

SetEntityProfilePolicyResponse::SetEntityProfilePolicyResponse(SetEntityProfilePolicyResponse&& src) :
    PlayFabProfilesSetEntityProfilePolicyResponse{ src },
    m_permissions{ std::move(src.m_permissions) }
{
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

SetEntityProfilePolicyResponse::SetEntityProfilePolicyResponse(const PlayFabProfilesSetEntityProfilePolicyResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetEntityProfilePolicyResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Permissions", m_permissions, permissions, permissionsCount);
}

JsonValue SetEntityProfilePolicyResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesSetEntityProfilePolicyResponse>(*this);
}

SetGlobalPolicyRequest::SetGlobalPolicyRequest() :
    PlayFabProfilesSetGlobalPolicyRequest{}
{
}

SetGlobalPolicyRequest::SetGlobalPolicyRequest(const SetGlobalPolicyRequest& src) :
    PlayFabProfilesSetGlobalPolicyRequest{ src },
    m_customTags{ src.m_customTags },
    m_permissions{ src.m_permissions }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

SetGlobalPolicyRequest::SetGlobalPolicyRequest(SetGlobalPolicyRequest&& src) :
    PlayFabProfilesSetGlobalPolicyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_permissions{ std::move(src.m_permissions) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

SetGlobalPolicyRequest::SetGlobalPolicyRequest(const PlayFabProfilesSetGlobalPolicyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetGlobalPolicyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Permissions", m_permissions, permissions, permissionsCount);
}

JsonValue SetGlobalPolicyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesSetGlobalPolicyRequest>(*this);
}

SetProfileLanguageRequest::SetProfileLanguageRequest() :
    PlayFabProfilesSetProfileLanguageRequest{}
{
}

SetProfileLanguageRequest::SetProfileLanguageRequest(const SetProfileLanguageRequest& src) :
    PlayFabProfilesSetProfileLanguageRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_expectedVersion{ src.m_expectedVersion },
    m_language{ src.m_language }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    expectedVersion = m_expectedVersion ? m_expectedVersion.operator->() : nullptr;
    language = m_language.empty() ? nullptr : m_language.data();
}

SetProfileLanguageRequest::SetProfileLanguageRequest(SetProfileLanguageRequest&& src) :
    PlayFabProfilesSetProfileLanguageRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_expectedVersion{ std::move(src.m_expectedVersion) },
    m_language{ std::move(src.m_language) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    expectedVersion = m_expectedVersion ? m_expectedVersion.operator->() : nullptr;
    language = m_language.empty() ? nullptr : m_language.data();
}

SetProfileLanguageRequest::SetProfileLanguageRequest(const PlayFabProfilesSetProfileLanguageRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetProfileLanguageRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "ExpectedVersion", m_expectedVersion, expectedVersion);
    JsonUtils::ObjectGetMember(input, "Language", m_language, language);
}

JsonValue SetProfileLanguageRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesSetProfileLanguageRequest>(*this);
}

SetProfileLanguageResponse::SetProfileLanguageResponse() :
    PlayFabProfilesSetProfileLanguageResponse{}
{
}

SetProfileLanguageResponse::SetProfileLanguageResponse(const SetProfileLanguageResponse& src) :
    PlayFabProfilesSetProfileLanguageResponse{ src },
    m_operationResult{ src.m_operationResult },
    m_versionNumber{ src.m_versionNumber }
{
    operationResult = m_operationResult ? m_operationResult.operator->() : nullptr;
    versionNumber = m_versionNumber ? m_versionNumber.operator->() : nullptr;
}

SetProfileLanguageResponse::SetProfileLanguageResponse(SetProfileLanguageResponse&& src) :
    PlayFabProfilesSetProfileLanguageResponse{ src },
    m_operationResult{ std::move(src.m_operationResult) },
    m_versionNumber{ std::move(src.m_versionNumber) }
{
    operationResult = m_operationResult ? m_operationResult.operator->() : nullptr;
    versionNumber = m_versionNumber ? m_versionNumber.operator->() : nullptr;
}

SetProfileLanguageResponse::SetProfileLanguageResponse(const PlayFabProfilesSetProfileLanguageResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetProfileLanguageResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OperationResult", m_operationResult, operationResult);
    JsonUtils::ObjectGetMember(input, "VersionNumber", m_versionNumber, versionNumber);
}

JsonValue SetProfileLanguageResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabProfilesSetProfileLanguageResponse>(*this);
}

} // namespace ProfilesModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabProfilesEntityDataObject& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataObject", input.dataObject);
    JsonUtils::ObjectAddMember(output, "EscapedDataObject", input.escapedDataObject);
    JsonUtils::ObjectAddMember(output, "ObjectName", input.objectName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesEntityLineage& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "GroupId", input.groupId);
    JsonUtils::ObjectAddMember(output, "MasterPlayerAccountId", input.masterPlayerAccountId);
    JsonUtils::ObjectAddMember(output, "NamespaceId", input.namespaceId);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TitlePlayerAccountId", input.titlePlayerAccountId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesEntityPermissionStatement& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Action", input.action);
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "Condition", input.condition);
    JsonUtils::ObjectAddMember(output, "Effect", input.effect);
    JsonUtils::ObjectAddMember(output, "Principal", input.principal);
    JsonUtils::ObjectAddMember(output, "Resource", input.resource);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesEntityProfileFileMetadata& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Checksum", input.checksum);
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    JsonUtils::ObjectAddMember(output, "LastModified", input.lastModified, true);
    JsonUtils::ObjectAddMember(output, "Size", input.size);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesEntityStatisticChildValue& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ChildName", input.childName);
    JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesEntityStatisticValue& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ChildStatistics", input.childStatistics, input.childStatisticsCount);
    JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesEntityProfileBody& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "EntityChain", input.entityChain);
    JsonUtils::ObjectAddMember(output, "ExperimentVariants", input.experimentVariants, input.experimentVariantsCount);
    JsonUtils::ObjectAddMember(output, "Files", input.files, input.filesCount);
    JsonUtils::ObjectAddMember(output, "Language", input.language);
    JsonUtils::ObjectAddMember(output, "LeaderboardMetadata", input.leaderboardMetadata);
    JsonUtils::ObjectAddMember(output, "Lineage", input.lineage);
    JsonUtils::ObjectAddMember(output, "Objects", input.objects, input.objectsCount);
    JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    JsonUtils::ObjectAddMember(output, "VersionNumber", input.versionNumber);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfileRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DataAsObject", input.dataAsObject);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfileResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Profile", input.profile);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfilesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DataAsObject", input.dataAsObject);
    JsonUtils::ObjectAddMember(output, "Entities", input.entities, input.entitiesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfilesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Profiles", input.profiles, input.profilesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesGetGlobalPolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesGetGlobalPolicyResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MasterPlayerAccountIds", input.masterPlayerAccountIds, input.masterPlayerAccountIdsCount);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TitlePlayerAccounts", input.titlePlayerAccounts, input.titlePlayerAccountsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesSetEntityProfilePolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesSetEntityProfilePolicyResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesSetGlobalPolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesSetProfileLanguageRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "ExpectedVersion", input.expectedVersion);
    JsonUtils::ObjectAddMember(output, "Language", input.language);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabProfilesSetProfileLanguageResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OperationResult", input.operationResult);
    JsonUtils::ObjectAddMember(output, "VersionNumber", input.versionNumber);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
