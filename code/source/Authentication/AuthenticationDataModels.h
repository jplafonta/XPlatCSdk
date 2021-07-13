#pragma once

#include <playfab/PlayFabAuthenticationDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace AuthenticationModels
{

// Authentication Classes
struct EntityLineage : public PlayFabAuthenticationEntityLineage, public SerializableModel
{
    EntityLineage();
    EntityLineage(const EntityLineage& src);
    EntityLineage(EntityLineage&& src);
    EntityLineage(const PlayFabAuthenticationEntityLineage& src);
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

struct GetEntityTokenRequest : public PlayFabAuthenticationGetEntityTokenRequest, public BaseModel
{
    GetEntityTokenRequest();
    GetEntityTokenRequest(const GetEntityTokenRequest& src);
    GetEntityTokenRequest(GetEntityTokenRequest&& src);
    GetEntityTokenRequest(const PlayFabAuthenticationGetEntityTokenRequest& src);
    GetEntityTokenRequest& operator=(const GetEntityTokenRequest&) = delete;
    ~GetEntityTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
};

struct GetEntityTokenResponse : public BaseModel, public ApiResult
{
    GetEntityTokenResponse();
    GetEntityTokenResponse(const GetEntityTokenResponse& src);
    GetEntityTokenResponse(GetEntityTokenResponse&& src);
    GetEntityTokenResponse& operator=(const GetEntityTokenResponse&) = delete;
    ~GetEntityTokenResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

public:
    StdExtra::optional<EntityKey> entity;
    String entityToken;
    StdExtra::optional<time_t> tokenExpiration;
};

struct ValidateEntityTokenRequest : public PlayFabAuthenticationValidateEntityTokenRequest, public BaseModel
{
    ValidateEntityTokenRequest();
    ValidateEntityTokenRequest(const ValidateEntityTokenRequest& src);
    ValidateEntityTokenRequest(ValidateEntityTokenRequest&& src);
    ValidateEntityTokenRequest(const PlayFabAuthenticationValidateEntityTokenRequest& src);
    ValidateEntityTokenRequest& operator=(const ValidateEntityTokenRequest&) = delete;
    ~ValidateEntityTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_entityToken;
};

struct ValidateEntityTokenResponse : public PlayFabAuthenticationValidateEntityTokenResponse, public BaseModel, public ApiResult
{
    ValidateEntityTokenResponse();
    ValidateEntityTokenResponse(const ValidateEntityTokenResponse& src);
    ValidateEntityTokenResponse(ValidateEntityTokenResponse&& src);
    ValidateEntityTokenResponse(const PlayFabAuthenticationValidateEntityTokenResponse& src);
    ValidateEntityTokenResponse& operator=(const ValidateEntityTokenResponse&) = delete;
    ~ValidateEntityTokenResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    StdExtra::optional<PlayFabAuthenticationIdentifiedDeviceType> m_identifiedDeviceType;
    StdExtra::optional<PlayFabLoginIdentityProvider> m_identityProvider;
    StdExtra::optional<EntityLineage> m_lineage;
};

} // namespace AuthenticationModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabAuthenticationEntityLineage& input);
template<> inline JsonValue ToJson<>(const PlayFabAuthenticationGetEntityTokenRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAuthenticationValidateEntityTokenRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAuthenticationValidateEntityTokenResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabAuthenticationIdentifiedDeviceType>
{
    static constexpr PlayFabAuthenticationIdentifiedDeviceType maxValue = PlayFabAuthenticationIdentifiedDeviceType::Scarlett;
};

} // namespace PlayFab
