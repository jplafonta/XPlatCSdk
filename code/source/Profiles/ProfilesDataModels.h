#pragma once

#include <playfab/PlayFabProfilesDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace ProfilesModels
{

// Profiles Classes
struct EntityDataObject : public PlayFabProfilesEntityDataObject, public BaseModel
{
    EntityDataObject();
    EntityDataObject(const EntityDataObject& src);
    EntityDataObject(EntityDataObject&& src);
    EntityDataObject(const PlayFabProfilesEntityDataObject& src);
    EntityDataObject& operator=(const EntityDataObject&) = delete;
    ~EntityDataObject() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_dataObject;
    String m_escapedDataObject;
    String m_objectName;
};

struct EntityLineage : public PlayFabProfilesEntityLineage, public SerializableModel
{
    EntityLineage();
    EntityLineage(const EntityLineage& src);
    EntityLineage(EntityLineage&& src);
    EntityLineage(const PlayFabProfilesEntityLineage& src);
    EntityLineage& operator=(const EntityLineage&) = delete;
    ~EntityLineage() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_groupId;
    String m_masterPlayerAccountId;
    String m_namespaceId;
    String m_titleId;
    String m_titlePlayerAccountId;
};

struct EntityPermissionStatement : public PlayFabProfilesEntityPermissionStatement, public BaseModel
{
    EntityPermissionStatement();
    EntityPermissionStatement(const EntityPermissionStatement& src);
    EntityPermissionStatement(EntityPermissionStatement&& src);
    EntityPermissionStatement(const PlayFabProfilesEntityPermissionStatement& src);
    EntityPermissionStatement& operator=(const EntityPermissionStatement&) = delete;
    ~EntityPermissionStatement() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_action;
    String m_comment;
    JsonObject m_condition;
    JsonObject m_principal;
    String m_resource;
};

struct EntityProfileFileMetadata : public PlayFabProfilesEntityProfileFileMetadata, public SerializableModel
{
    EntityProfileFileMetadata();
    EntityProfileFileMetadata(const EntityProfileFileMetadata& src);
    EntityProfileFileMetadata(EntityProfileFileMetadata&& src);
    EntityProfileFileMetadata(const PlayFabProfilesEntityProfileFileMetadata& src);
    EntityProfileFileMetadata& operator=(const EntityProfileFileMetadata&) = delete;
    ~EntityProfileFileMetadata() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_checksum;
    String m_fileName;
};

struct EntityStatisticChildValue : public PlayFabProfilesEntityStatisticChildValue, public SerializableModel
{
    EntityStatisticChildValue();
    EntityStatisticChildValue(const EntityStatisticChildValue& src);
    EntityStatisticChildValue(EntityStatisticChildValue&& src);
    EntityStatisticChildValue(const PlayFabProfilesEntityStatisticChildValue& src);
    EntityStatisticChildValue& operator=(const EntityStatisticChildValue&) = delete;
    ~EntityStatisticChildValue() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_childName;
    String m_metadata;
};

struct EntityStatisticValue : public PlayFabProfilesEntityStatisticValue, public BaseModel
{
    EntityStatisticValue();
    EntityStatisticValue(const EntityStatisticValue& src);
    EntityStatisticValue(EntityStatisticValue&& src);
    EntityStatisticValue(const PlayFabProfilesEntityStatisticValue& src);
    EntityStatisticValue& operator=(const EntityStatisticValue&) = delete;
    ~EntityStatisticValue() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabProfilesEntityStatisticChildValueDictionaryEntry, EntityStatisticChildValue> m_childStatistics;
    String m_metadata;
    String m_name;
    StdExtra::optional<int32_t> m_value;
};

struct EntityProfileBody : public PlayFabProfilesEntityProfileBody, public BaseModel
{
    EntityProfileBody();
    EntityProfileBody(const EntityProfileBody& src);
    EntityProfileBody(EntityProfileBody&& src);
    EntityProfileBody(const PlayFabProfilesEntityProfileBody& src);
    EntityProfileBody& operator=(const EntityProfileBody&) = delete;
    ~EntityProfileBody() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_avatarUrl;
    String m_displayName;
    StdExtra::optional<EntityKey> m_entity;
    String m_entityChain;
    PointerArrayModel<char, String> m_experimentVariants;
    AssociativeArrayModel<PlayFabProfilesEntityProfileFileMetadataDictionaryEntry, EntityProfileFileMetadata> m_files;
    String m_language;
    String m_leaderboardMetadata;
    StdExtra::optional<EntityLineage> m_lineage;
    AssociativeArrayModel<PlayFabProfilesEntityDataObjectDictionaryEntry, EntityDataObject> m_objects;
    PointerArrayModel<PlayFabProfilesEntityPermissionStatement, EntityPermissionStatement> m_permissions;
    AssociativeArrayModel<PlayFabProfilesEntityStatisticValueDictionaryEntry, EntityStatisticValue> m_statistics;
};

struct GetEntityProfileRequest : public PlayFabProfilesGetEntityProfileRequest, public BaseModel
{
    GetEntityProfileRequest();
    GetEntityProfileRequest(const GetEntityProfileRequest& src);
    GetEntityProfileRequest(GetEntityProfileRequest&& src);
    GetEntityProfileRequest(const PlayFabProfilesGetEntityProfileRequest& src);
    GetEntityProfileRequest& operator=(const GetEntityProfileRequest&) = delete;
    ~GetEntityProfileRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_dataAsObject;
    StdExtra::optional<EntityKey> m_entity;
};

struct GetEntityProfileResponse : public PlayFabProfilesGetEntityProfileResponse, public BaseModel, public ApiResult
{
    GetEntityProfileResponse();
    GetEntityProfileResponse(const GetEntityProfileResponse& src);
    GetEntityProfileResponse(GetEntityProfileResponse&& src);
    GetEntityProfileResponse(const PlayFabProfilesGetEntityProfileResponse& src);
    GetEntityProfileResponse& operator=(const GetEntityProfileResponse&) = delete;
    ~GetEntityProfileResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityProfileBody> m_profile;
};

struct GetEntityProfilesRequest : public PlayFabProfilesGetEntityProfilesRequest, public BaseModel
{
    GetEntityProfilesRequest();
    GetEntityProfilesRequest(const GetEntityProfilesRequest& src);
    GetEntityProfilesRequest(GetEntityProfilesRequest&& src);
    GetEntityProfilesRequest(const PlayFabProfilesGetEntityProfilesRequest& src);
    GetEntityProfilesRequest& operator=(const GetEntityProfilesRequest&) = delete;
    ~GetEntityProfilesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_dataAsObject;
    PointerArrayModel<PlayFabEntityKey, EntityKey> m_entities;
};

struct GetEntityProfilesResponse : public PlayFabProfilesGetEntityProfilesResponse, public BaseModel, public ApiResult
{
    GetEntityProfilesResponse();
    GetEntityProfilesResponse(const GetEntityProfilesResponse& src);
    GetEntityProfilesResponse(GetEntityProfilesResponse&& src);
    GetEntityProfilesResponse(const PlayFabProfilesGetEntityProfilesResponse& src);
    GetEntityProfilesResponse& operator=(const GetEntityProfilesResponse&) = delete;
    ~GetEntityProfilesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabProfilesEntityProfileBody, EntityProfileBody> m_profiles;
};

struct GetGlobalPolicyRequest : public PlayFabProfilesGetGlobalPolicyRequest, public BaseModel
{
    GetGlobalPolicyRequest();
    GetGlobalPolicyRequest(const GetGlobalPolicyRequest& src);
    GetGlobalPolicyRequest(GetGlobalPolicyRequest&& src);
    GetGlobalPolicyRequest(const PlayFabProfilesGetGlobalPolicyRequest& src);
    GetGlobalPolicyRequest& operator=(const GetGlobalPolicyRequest&) = delete;
    ~GetGlobalPolicyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct GetGlobalPolicyResponse : public PlayFabProfilesGetGlobalPolicyResponse, public BaseModel, public ApiResult
{
    GetGlobalPolicyResponse();
    GetGlobalPolicyResponse(const GetGlobalPolicyResponse& src);
    GetGlobalPolicyResponse(GetGlobalPolicyResponse&& src);
    GetGlobalPolicyResponse(const PlayFabProfilesGetGlobalPolicyResponse& src);
    GetGlobalPolicyResponse& operator=(const GetGlobalPolicyResponse&) = delete;
    ~GetGlobalPolicyResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabProfilesEntityPermissionStatement, EntityPermissionStatement> m_permissions;
};

struct GetTitlePlayersFromMasterPlayerAccountIdsRequest : public PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, public BaseModel
{
    GetTitlePlayersFromMasterPlayerAccountIdsRequest();
    GetTitlePlayersFromMasterPlayerAccountIdsRequest(const GetTitlePlayersFromMasterPlayerAccountIdsRequest& src);
    GetTitlePlayersFromMasterPlayerAccountIdsRequest(GetTitlePlayersFromMasterPlayerAccountIdsRequest&& src);
    GetTitlePlayersFromMasterPlayerAccountIdsRequest(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest& src);
    GetTitlePlayersFromMasterPlayerAccountIdsRequest& operator=(const GetTitlePlayersFromMasterPlayerAccountIdsRequest&) = delete;
    ~GetTitlePlayersFromMasterPlayerAccountIdsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<char, String> m_masterPlayerAccountIds;
    String m_titleId;
};

struct GetTitlePlayersFromMasterPlayerAccountIdsResponse : public PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, public BaseModel, public ApiResult
{
    GetTitlePlayersFromMasterPlayerAccountIdsResponse();
    GetTitlePlayersFromMasterPlayerAccountIdsResponse(const GetTitlePlayersFromMasterPlayerAccountIdsResponse& src);
    GetTitlePlayersFromMasterPlayerAccountIdsResponse(GetTitlePlayersFromMasterPlayerAccountIdsResponse&& src);
    GetTitlePlayersFromMasterPlayerAccountIdsResponse(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse& src);
    GetTitlePlayersFromMasterPlayerAccountIdsResponse& operator=(const GetTitlePlayersFromMasterPlayerAccountIdsResponse&) = delete;
    ~GetTitlePlayersFromMasterPlayerAccountIdsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_titleId;
    AssociativeArrayModel<PlayFabEntityKeyDictionaryEntry, EntityKey> m_titlePlayerAccounts;
};

struct SetEntityProfilePolicyRequest : public PlayFabProfilesSetEntityProfilePolicyRequest, public BaseModel
{
    SetEntityProfilePolicyRequest();
    SetEntityProfilePolicyRequest(const SetEntityProfilePolicyRequest& src);
    SetEntityProfilePolicyRequest(SetEntityProfilePolicyRequest&& src);
    SetEntityProfilePolicyRequest(const PlayFabProfilesSetEntityProfilePolicyRequest& src);
    SetEntityProfilePolicyRequest& operator=(const SetEntityProfilePolicyRequest&) = delete;
    ~SetEntityProfilePolicyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    PointerArrayModel<PlayFabProfilesEntityPermissionStatement, EntityPermissionStatement> m_statements;
};

struct SetEntityProfilePolicyResponse : public PlayFabProfilesSetEntityProfilePolicyResponse, public BaseModel, public ApiResult
{
    SetEntityProfilePolicyResponse();
    SetEntityProfilePolicyResponse(const SetEntityProfilePolicyResponse& src);
    SetEntityProfilePolicyResponse(SetEntityProfilePolicyResponse&& src);
    SetEntityProfilePolicyResponse(const PlayFabProfilesSetEntityProfilePolicyResponse& src);
    SetEntityProfilePolicyResponse& operator=(const SetEntityProfilePolicyResponse&) = delete;
    ~SetEntityProfilePolicyResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabProfilesEntityPermissionStatement, EntityPermissionStatement> m_permissions;
};

struct SetGlobalPolicyRequest : public PlayFabProfilesSetGlobalPolicyRequest, public BaseModel
{
    SetGlobalPolicyRequest();
    SetGlobalPolicyRequest(const SetGlobalPolicyRequest& src);
    SetGlobalPolicyRequest(SetGlobalPolicyRequest&& src);
    SetGlobalPolicyRequest(const PlayFabProfilesSetGlobalPolicyRequest& src);
    SetGlobalPolicyRequest& operator=(const SetGlobalPolicyRequest&) = delete;
    ~SetGlobalPolicyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabProfilesEntityPermissionStatement, EntityPermissionStatement> m_permissions;
};

struct SetProfileLanguageRequest : public PlayFabProfilesSetProfileLanguageRequest, public BaseModel
{
    SetProfileLanguageRequest();
    SetProfileLanguageRequest(const SetProfileLanguageRequest& src);
    SetProfileLanguageRequest(SetProfileLanguageRequest&& src);
    SetProfileLanguageRequest(const PlayFabProfilesSetProfileLanguageRequest& src);
    SetProfileLanguageRequest& operator=(const SetProfileLanguageRequest&) = delete;
    ~SetProfileLanguageRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    StdExtra::optional<int32_t> m_expectedVersion;
    String m_language;
};

struct SetProfileLanguageResponse : public PlayFabProfilesSetProfileLanguageResponse, public BaseModel, public ApiResult
{
    SetProfileLanguageResponse();
    SetProfileLanguageResponse(const SetProfileLanguageResponse& src);
    SetProfileLanguageResponse(SetProfileLanguageResponse&& src);
    SetProfileLanguageResponse(const PlayFabProfilesSetProfileLanguageResponse& src);
    SetProfileLanguageResponse& operator=(const SetProfileLanguageResponse&) = delete;
    ~SetProfileLanguageResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabProfilesOperationTypes> m_operationResult;
    StdExtra::optional<int32_t> m_versionNumber;
};

} // namespace ProfilesModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabProfilesEntityDataObject& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesEntityLineage& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesEntityPermissionStatement& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesEntityProfileFileMetadata& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesEntityStatisticChildValue& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesEntityStatisticValue& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesEntityProfileBody& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfileRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfileResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfilesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfilesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesGetGlobalPolicyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesGetGlobalPolicyResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesSetEntityProfilePolicyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesSetEntityProfilePolicyResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesSetGlobalPolicyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesSetProfileLanguageRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabProfilesSetProfileLanguageResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabProfilesEffectType>
{
    static constexpr PlayFabProfilesEffectType maxValue = PlayFabProfilesEffectType::Deny;
};

template<> struct EnumRange<PlayFabProfilesOperationTypes>
{
    static constexpr PlayFabProfilesOperationTypes maxValue = PlayFabProfilesOperationTypes::None;
};

} // namespace PlayFab
