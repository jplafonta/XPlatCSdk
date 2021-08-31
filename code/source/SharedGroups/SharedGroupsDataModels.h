#pragma once

#include <playfab/PFSharedGroupsDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace SharedGroupsModels
{

// SharedGroups Classes
struct AddSharedGroupMembersRequest : public PFSharedGroupsAddSharedGroupMembersRequest, public BaseModel
{
    AddSharedGroupMembersRequest();
    AddSharedGroupMembersRequest(const AddSharedGroupMembersRequest& src);
    AddSharedGroupMembersRequest(AddSharedGroupMembersRequest&& src);
    AddSharedGroupMembersRequest(const PFSharedGroupsAddSharedGroupMembersRequest& src);
    AddSharedGroupMembersRequest& operator=(const AddSharedGroupMembersRequest&) = delete;
    ~AddSharedGroupMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_playFabIds;
    String m_sharedGroupId;
};

struct CreateSharedGroupRequest : public PFSharedGroupsCreateSharedGroupRequest, public SerializableModel
{
    CreateSharedGroupRequest();
    CreateSharedGroupRequest(const CreateSharedGroupRequest& src);
    CreateSharedGroupRequest(CreateSharedGroupRequest&& src);
    CreateSharedGroupRequest(const PFSharedGroupsCreateSharedGroupRequest& src);
    CreateSharedGroupRequest& operator=(const CreateSharedGroupRequest&) = delete;
    ~CreateSharedGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_sharedGroupId;
};

struct CreateSharedGroupResult : public PFSharedGroupsCreateSharedGroupResult, public SerializableModel, public ApiResult
{
    CreateSharedGroupResult();
    CreateSharedGroupResult(const CreateSharedGroupResult& src);
    CreateSharedGroupResult(CreateSharedGroupResult&& src);
    CreateSharedGroupResult(const PFSharedGroupsCreateSharedGroupResult& src);
    CreateSharedGroupResult& operator=(const CreateSharedGroupResult&) = delete;
    ~CreateSharedGroupResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_sharedGroupId;
};

struct GetSharedGroupDataRequest : public PFSharedGroupsGetSharedGroupDataRequest, public BaseModel
{
    GetSharedGroupDataRequest();
    GetSharedGroupDataRequest(const GetSharedGroupDataRequest& src);
    GetSharedGroupDataRequest(GetSharedGroupDataRequest&& src);
    GetSharedGroupDataRequest(const PFSharedGroupsGetSharedGroupDataRequest& src);
    GetSharedGroupDataRequest& operator=(const GetSharedGroupDataRequest&) = delete;
    ~GetSharedGroupDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_getMembers;
    PointerArrayModel<char, String> m_keys;
    String m_sharedGroupId;
};

struct SharedGroupDataRecord : public PFSharedGroupsSharedGroupDataRecord, public BaseModel
{
    SharedGroupDataRecord();
    SharedGroupDataRecord(const SharedGroupDataRecord& src);
    SharedGroupDataRecord(SharedGroupDataRecord&& src);
    SharedGroupDataRecord(const PFSharedGroupsSharedGroupDataRecord& src);
    SharedGroupDataRecord& operator=(const SharedGroupDataRecord&) = delete;
    ~SharedGroupDataRecord() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_lastUpdatedBy;
    StdExtra::optional<PFUserDataPermission> m_permission;
    String m_value;
};

struct GetSharedGroupDataResult : public PFSharedGroupsGetSharedGroupDataResult, public BaseModel, public ApiResult
{
    GetSharedGroupDataResult();
    GetSharedGroupDataResult(const GetSharedGroupDataResult& src);
    GetSharedGroupDataResult(GetSharedGroupDataResult&& src);
    GetSharedGroupDataResult(const PFSharedGroupsGetSharedGroupDataResult& src);
    GetSharedGroupDataResult& operator=(const GetSharedGroupDataResult&) = delete;
    ~GetSharedGroupDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFSharedGroupsSharedGroupDataRecordDictionaryEntry, SharedGroupDataRecord> m_data;
    PointerArrayModel<char, String> m_members;
};

struct RemoveSharedGroupMembersRequest : public PFSharedGroupsRemoveSharedGroupMembersRequest, public BaseModel
{
    RemoveSharedGroupMembersRequest();
    RemoveSharedGroupMembersRequest(const RemoveSharedGroupMembersRequest& src);
    RemoveSharedGroupMembersRequest(RemoveSharedGroupMembersRequest&& src);
    RemoveSharedGroupMembersRequest(const PFSharedGroupsRemoveSharedGroupMembersRequest& src);
    RemoveSharedGroupMembersRequest& operator=(const RemoveSharedGroupMembersRequest&) = delete;
    ~RemoveSharedGroupMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_playFabIds;
    String m_sharedGroupId;
};

struct UpdateSharedGroupDataRequest : public PFSharedGroupsUpdateSharedGroupDataRequest, public BaseModel
{
    UpdateSharedGroupDataRequest();
    UpdateSharedGroupDataRequest(const UpdateSharedGroupDataRequest& src);
    UpdateSharedGroupDataRequest(UpdateSharedGroupDataRequest&& src);
    UpdateSharedGroupDataRequest(const PFSharedGroupsUpdateSharedGroupDataRequest& src);
    UpdateSharedGroupDataRequest& operator=(const UpdateSharedGroupDataRequest&) = delete;
    ~UpdateSharedGroupDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PFUserDataPermission> m_permission;
    String m_sharedGroupId;
};

struct DeleteSharedGroupRequest : public PFSharedGroupsDeleteSharedGroupRequest, public SerializableModel
{
    DeleteSharedGroupRequest();
    DeleteSharedGroupRequest(const DeleteSharedGroupRequest& src);
    DeleteSharedGroupRequest(DeleteSharedGroupRequest&& src);
    DeleteSharedGroupRequest(const PFSharedGroupsDeleteSharedGroupRequest& src);
    DeleteSharedGroupRequest& operator=(const DeleteSharedGroupRequest&) = delete;
    ~DeleteSharedGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_sharedGroupId;
};

} // namespace SharedGroupsModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFSharedGroupsAddSharedGroupMembersRequest& input);
template<> inline JsonValue ToJson<>(const PFSharedGroupsCreateSharedGroupRequest& input);
template<> inline JsonValue ToJson<>(const PFSharedGroupsCreateSharedGroupResult& input);
template<> inline JsonValue ToJson<>(const PFSharedGroupsGetSharedGroupDataRequest& input);
template<> inline JsonValue ToJson<>(const PFSharedGroupsSharedGroupDataRecord& input);
template<> inline JsonValue ToJson<>(const PFSharedGroupsGetSharedGroupDataResult& input);
template<> inline JsonValue ToJson<>(const PFSharedGroupsRemoveSharedGroupMembersRequest& input);
template<> inline JsonValue ToJson<>(const PFSharedGroupsUpdateSharedGroupDataRequest& input);
template<> inline JsonValue ToJson<>(const PFSharedGroupsDeleteSharedGroupRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
