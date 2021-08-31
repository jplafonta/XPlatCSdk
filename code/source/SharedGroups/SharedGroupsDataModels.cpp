#include "stdafx.h"
#include "SharedGroupsDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace SharedGroupsModels
{

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest() :
    PFSharedGroupsAddSharedGroupMembersRequest{}
{
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest(const AddSharedGroupMembersRequest& src) :
    PFSharedGroupsAddSharedGroupMembersRequest{ src },
    m_playFabIds{ src.m_playFabIds },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest(AddSharedGroupMembersRequest&& src) :
    PFSharedGroupsAddSharedGroupMembersRequest{ src },
    m_playFabIds{ std::move(src.m_playFabIds) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest(const PFSharedGroupsAddSharedGroupMembersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddSharedGroupMembersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabIds", m_playFabIds, playFabIds, playFabIdsCount);
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue AddSharedGroupMembersRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSharedGroupsAddSharedGroupMembersRequest>(*this);
}

CreateSharedGroupRequest::CreateSharedGroupRequest() :
    PFSharedGroupsCreateSharedGroupRequest{}
{
}

CreateSharedGroupRequest::CreateSharedGroupRequest(const CreateSharedGroupRequest& src) :
    PFSharedGroupsCreateSharedGroupRequest{ src },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupRequest::CreateSharedGroupRequest(CreateSharedGroupRequest&& src) :
    PFSharedGroupsCreateSharedGroupRequest{ src },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupRequest::CreateSharedGroupRequest(const PFSharedGroupsCreateSharedGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateSharedGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue CreateSharedGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSharedGroupsCreateSharedGroupRequest>(*this);
}

size_t CreateSharedGroupRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSharedGroupsCreateSharedGroupRequest) };
    serializedSize += (m_sharedGroupId.size() + 1);
    return serializedSize;
}

void CreateSharedGroupRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSharedGroupsCreateSharedGroupRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSharedGroupsCreateSharedGroupRequest);
    memcpy(stringBuffer, m_sharedGroupId.data(), m_sharedGroupId.size() + 1);
    serializedStruct->sharedGroupId = stringBuffer;
    stringBuffer += m_sharedGroupId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateSharedGroupResult::CreateSharedGroupResult() :
    PFSharedGroupsCreateSharedGroupResult{}
{
}

CreateSharedGroupResult::CreateSharedGroupResult(const CreateSharedGroupResult& src) :
    PFSharedGroupsCreateSharedGroupResult{ src },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupResult::CreateSharedGroupResult(CreateSharedGroupResult&& src) :
    PFSharedGroupsCreateSharedGroupResult{ src },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupResult::CreateSharedGroupResult(const PFSharedGroupsCreateSharedGroupResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateSharedGroupResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue CreateSharedGroupResult::ToJson() const
{
    return JsonUtils::ToJson<PFSharedGroupsCreateSharedGroupResult>(*this);
}

size_t CreateSharedGroupResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSharedGroupsCreateSharedGroupResult) };
    serializedSize += (m_sharedGroupId.size() + 1);
    return serializedSize;
}

void CreateSharedGroupResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSharedGroupsCreateSharedGroupResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSharedGroupsCreateSharedGroupResult);
    memcpy(stringBuffer, m_sharedGroupId.data(), m_sharedGroupId.size() + 1);
    serializedStruct->sharedGroupId = stringBuffer;
    stringBuffer += m_sharedGroupId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest() :
    PFSharedGroupsGetSharedGroupDataRequest{}
{
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest(const GetSharedGroupDataRequest& src) :
    PFSharedGroupsGetSharedGroupDataRequest{ src },
    m_getMembers{ src.m_getMembers },
    m_keys{ src.m_keys },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    getMembers = m_getMembers ? m_getMembers.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest(GetSharedGroupDataRequest&& src) :
    PFSharedGroupsGetSharedGroupDataRequest{ src },
    m_getMembers{ std::move(src.m_getMembers) },
    m_keys{ std::move(src.m_keys) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    getMembers = m_getMembers ? m_getMembers.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest(const PFSharedGroupsGetSharedGroupDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSharedGroupDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GetMembers", m_getMembers, getMembers);
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue GetSharedGroupDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSharedGroupsGetSharedGroupDataRequest>(*this);
}

SharedGroupDataRecord::SharedGroupDataRecord() :
    PFSharedGroupsSharedGroupDataRecord{}
{
}

SharedGroupDataRecord::SharedGroupDataRecord(const SharedGroupDataRecord& src) :
    PFSharedGroupsSharedGroupDataRecord{ src },
    m_lastUpdatedBy{ src.m_lastUpdatedBy },
    m_permission{ src.m_permission },
    m_value{ src.m_value }
{
    lastUpdatedBy = m_lastUpdatedBy.empty() ? nullptr : m_lastUpdatedBy.data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    value = m_value.empty() ? nullptr : m_value.data();
}

SharedGroupDataRecord::SharedGroupDataRecord(SharedGroupDataRecord&& src) :
    PFSharedGroupsSharedGroupDataRecord{ src },
    m_lastUpdatedBy{ std::move(src.m_lastUpdatedBy) },
    m_permission{ std::move(src.m_permission) },
    m_value{ std::move(src.m_value) }
{
    lastUpdatedBy = m_lastUpdatedBy.empty() ? nullptr : m_lastUpdatedBy.data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    value = m_value.empty() ? nullptr : m_value.data();
}

SharedGroupDataRecord::SharedGroupDataRecord(const PFSharedGroupsSharedGroupDataRecord& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SharedGroupDataRecord::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LastUpdated", lastUpdated, true);
    JsonUtils::ObjectGetMember(input, "LastUpdatedBy", m_lastUpdatedBy, lastUpdatedBy);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue SharedGroupDataRecord::ToJson() const
{
    return JsonUtils::ToJson<PFSharedGroupsSharedGroupDataRecord>(*this);
}

GetSharedGroupDataResult::GetSharedGroupDataResult() :
    PFSharedGroupsGetSharedGroupDataResult{}
{
}

GetSharedGroupDataResult::GetSharedGroupDataResult(const GetSharedGroupDataResult& src) :
    PFSharedGroupsGetSharedGroupDataResult{ src },
    m_data{ src.m_data },
    m_members{ src.m_members }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
}

GetSharedGroupDataResult::GetSharedGroupDataResult(GetSharedGroupDataResult&& src) :
    PFSharedGroupsGetSharedGroupDataResult{ src },
    m_data{ std::move(src.m_data) },
    m_members{ std::move(src.m_members) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
}

GetSharedGroupDataResult::GetSharedGroupDataResult(const PFSharedGroupsGetSharedGroupDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSharedGroupDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
}

JsonValue GetSharedGroupDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFSharedGroupsGetSharedGroupDataResult>(*this);
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest() :
    PFSharedGroupsRemoveSharedGroupMembersRequest{}
{
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest(const RemoveSharedGroupMembersRequest& src) :
    PFSharedGroupsRemoveSharedGroupMembersRequest{ src },
    m_playFabIds{ src.m_playFabIds },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest(RemoveSharedGroupMembersRequest&& src) :
    PFSharedGroupsRemoveSharedGroupMembersRequest{ src },
    m_playFabIds{ std::move(src.m_playFabIds) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest(const PFSharedGroupsRemoveSharedGroupMembersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveSharedGroupMembersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabIds", m_playFabIds, playFabIds, playFabIdsCount);
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue RemoveSharedGroupMembersRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSharedGroupsRemoveSharedGroupMembersRequest>(*this);
}

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest() :
    PFSharedGroupsUpdateSharedGroupDataRequest{}
{
}

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest(const UpdateSharedGroupDataRequest& src) :
    PFSharedGroupsUpdateSharedGroupDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest(UpdateSharedGroupDataRequest&& src) :
    PFSharedGroupsUpdateSharedGroupDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest(const PFSharedGroupsUpdateSharedGroupDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateSharedGroupDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue UpdateSharedGroupDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSharedGroupsUpdateSharedGroupDataRequest>(*this);
}

DeleteSharedGroupRequest::DeleteSharedGroupRequest() :
    PFSharedGroupsDeleteSharedGroupRequest{}
{
}

DeleteSharedGroupRequest::DeleteSharedGroupRequest(const DeleteSharedGroupRequest& src) :
    PFSharedGroupsDeleteSharedGroupRequest{ src },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

DeleteSharedGroupRequest::DeleteSharedGroupRequest(DeleteSharedGroupRequest&& src) :
    PFSharedGroupsDeleteSharedGroupRequest{ src },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

DeleteSharedGroupRequest::DeleteSharedGroupRequest(const PFSharedGroupsDeleteSharedGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteSharedGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue DeleteSharedGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSharedGroupsDeleteSharedGroupRequest>(*this);
}

size_t DeleteSharedGroupRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSharedGroupsDeleteSharedGroupRequest) };
    serializedSize += (m_sharedGroupId.size() + 1);
    return serializedSize;
}

void DeleteSharedGroupRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSharedGroupsDeleteSharedGroupRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSharedGroupsDeleteSharedGroupRequest);
    memcpy(stringBuffer, m_sharedGroupId.data(), m_sharedGroupId.size() + 1);
    serializedStruct->sharedGroupId = stringBuffer;
    stringBuffer += m_sharedGroupId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

} // namespace SharedGroupsModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFSharedGroupsAddSharedGroupMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabIds", input.playFabIds, input.playFabIdsCount);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSharedGroupsCreateSharedGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSharedGroupsCreateSharedGroupResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSharedGroupsGetSharedGroupDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GetMembers", input.getMembers);
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSharedGroupsSharedGroupDataRecord& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LastUpdated", input.lastUpdated, true);
    JsonUtils::ObjectAddMember(output, "LastUpdatedBy", input.lastUpdatedBy);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSharedGroupsGetSharedGroupDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSharedGroupsRemoveSharedGroupMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabIds", input.playFabIds, input.playFabIdsCount);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSharedGroupsUpdateSharedGroupDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSharedGroupsDeleteSharedGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
