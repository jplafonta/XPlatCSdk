#include "stdafx.h"
#include "AuthenticationDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace AuthenticationModels
{

EntityLineage::EntityLineage() :
    PlayFabAuthenticationEntityLineage{}
{
}

EntityLineage::EntityLineage(const EntityLineage& src) :
    PlayFabAuthenticationEntityLineage{ src },
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
    PlayFabAuthenticationEntityLineage{ src },
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

EntityLineage::EntityLineage(const PlayFabAuthenticationEntityLineage& src)
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
    return JsonUtils::ToJson<PlayFabAuthenticationEntityLineage>(*this);
}

size_t EntityLineage::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAuthenticationEntityLineage) };
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
    auto serializedStruct = new (buffer) PlayFabAuthenticationEntityLineage{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAuthenticationEntityLineage);
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

GetEntityTokenRequest::GetEntityTokenRequest() :
    PlayFabAuthenticationGetEntityTokenRequest{}
{
}

GetEntityTokenRequest::GetEntityTokenRequest(const GetEntityTokenRequest& src) :
    PlayFabAuthenticationGetEntityTokenRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetEntityTokenRequest::GetEntityTokenRequest(GetEntityTokenRequest&& src) :
    PlayFabAuthenticationGetEntityTokenRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetEntityTokenRequest::GetEntityTokenRequest(const PlayFabAuthenticationGetEntityTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetEntityTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
}

JsonValue GetEntityTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAuthenticationGetEntityTokenRequest>(*this);
}

GetEntityTokenResponse::GetEntityTokenResponse()
{
}

GetEntityTokenResponse::GetEntityTokenResponse(const GetEntityTokenResponse& src) :
    entity{ src.entity },
    entityToken{ src.entityToken },
    tokenExpiration{ src.tokenExpiration }
{
}

GetEntityTokenResponse::GetEntityTokenResponse(GetEntityTokenResponse&& src) :
    entity{ std::move(src.entity) },
    entityToken{ std::move(src.entityToken) },
    tokenExpiration{ std::move(src.tokenExpiration) }
{
}

void GetEntityTokenResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", entity);
    JsonUtils::ObjectGetMember(input, "EntityToken", entityToken);
    JsonUtils::ObjectGetMember(input, "TokenExpiration", tokenExpiration, true);
}

JsonValue GetEntityTokenResponse::ToJson() const
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", entity);
    JsonUtils::ObjectAddMember(output, "EntityToken", entityToken);
    JsonUtils::ObjectAddMember(output, "TokenExpiration", tokenExpiration, true);
    return output;
}

ValidateEntityTokenRequest::ValidateEntityTokenRequest() :
    PlayFabAuthenticationValidateEntityTokenRequest{}
{
}

ValidateEntityTokenRequest::ValidateEntityTokenRequest(const ValidateEntityTokenRequest& src) :
    PlayFabAuthenticationValidateEntityTokenRequest{ src },
    m_customTags{ src.m_customTags },
    m_entityToken{ src.m_entityToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
}

ValidateEntityTokenRequest::ValidateEntityTokenRequest(ValidateEntityTokenRequest&& src) :
    PlayFabAuthenticationValidateEntityTokenRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entityToken{ std::move(src.m_entityToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
}

ValidateEntityTokenRequest::ValidateEntityTokenRequest(const PlayFabAuthenticationValidateEntityTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateEntityTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EntityToken", m_entityToken, entityToken);
}

JsonValue ValidateEntityTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAuthenticationValidateEntityTokenRequest>(*this);
}

ValidateEntityTokenResponse::ValidateEntityTokenResponse() :
    PlayFabAuthenticationValidateEntityTokenResponse{}
{
}

ValidateEntityTokenResponse::ValidateEntityTokenResponse(const ValidateEntityTokenResponse& src) :
    PlayFabAuthenticationValidateEntityTokenResponse{ src },
    m_entity{ src.m_entity },
    m_identifiedDeviceType{ src.m_identifiedDeviceType },
    m_identityProvider{ src.m_identityProvider },
    m_lineage{ src.m_lineage }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    identifiedDeviceType = m_identifiedDeviceType ? m_identifiedDeviceType.operator->() : nullptr;
    identityProvider = m_identityProvider ? m_identityProvider.operator->() : nullptr;
    lineage = m_lineage ? m_lineage.operator->() : nullptr;
}

ValidateEntityTokenResponse::ValidateEntityTokenResponse(ValidateEntityTokenResponse&& src) :
    PlayFabAuthenticationValidateEntityTokenResponse{ src },
    m_entity{ std::move(src.m_entity) },
    m_identifiedDeviceType{ std::move(src.m_identifiedDeviceType) },
    m_identityProvider{ std::move(src.m_identityProvider) },
    m_lineage{ std::move(src.m_lineage) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    identifiedDeviceType = m_identifiedDeviceType ? m_identifiedDeviceType.operator->() : nullptr;
    identityProvider = m_identityProvider ? m_identityProvider.operator->() : nullptr;
    lineage = m_lineage ? m_lineage.operator->() : nullptr;
}

ValidateEntityTokenResponse::ValidateEntityTokenResponse(const PlayFabAuthenticationValidateEntityTokenResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateEntityTokenResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "IdentifiedDeviceType", m_identifiedDeviceType, identifiedDeviceType);
    JsonUtils::ObjectGetMember(input, "IdentityProvider", m_identityProvider, identityProvider);
    JsonUtils::ObjectGetMember(input, "Lineage", m_lineage, lineage);
}

JsonValue ValidateEntityTokenResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAuthenticationValidateEntityTokenResponse>(*this);
}

} // namespace AuthenticationModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabAuthenticationEntityLineage& input)
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
inline JsonValue ToJson<>(const PlayFabAuthenticationGetEntityTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAuthenticationValidateEntityTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EntityToken", input.entityToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAuthenticationValidateEntityTokenResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "IdentifiedDeviceType", input.identifiedDeviceType);
    JsonUtils::ObjectAddMember(output, "IdentityProvider", input.identityProvider);
    JsonUtils::ObjectAddMember(output, "Lineage", input.lineage);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
