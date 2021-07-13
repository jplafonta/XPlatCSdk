#include "stdafx.h"
#include "SharedDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{

EntityKey::EntityKey() :
    PlayFabEntityKey{}
{
}

EntityKey::EntityKey(const EntityKey& src) :
    PlayFabEntityKey{ src },
    m_id{ src.m_id },
    m_type{ src.m_type }
{
    id = m_id.empty() ? nullptr : m_id.data();
    type = m_type.empty() ? nullptr : m_type.data();
}

EntityKey::EntityKey(EntityKey&& src) :
    PlayFabEntityKey{ src },
    m_id{ std::move(src.m_id) },
    m_type{ std::move(src.m_type) }
{
    id = m_id.empty() ? nullptr : m_id.data();
    type = m_type.empty() ? nullptr : m_type.data();
}

EntityKey::EntityKey(const PlayFabEntityKey& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityKey::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Type", m_type, type);
}

JsonValue EntityKey::ToJson() const
{
    return JsonUtils::ToJson<PlayFabEntityKey>(*this);
}

size_t EntityKey::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabEntityKey) };
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_type.size() + 1);
    return serializedSize;
}

void EntityKey::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabEntityKey{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabEntityKey);
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_type.data(), m_type.size() + 1);
    serializedStruct->type = stringBuffer;
    stringBuffer += m_type.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EntityTokenResponse::EntityTokenResponse() :
    PlayFabEntityTokenResponse{}
{
}

EntityTokenResponse::EntityTokenResponse(const EntityTokenResponse& src) :
    PlayFabEntityTokenResponse{ src },
    m_entity{ src.m_entity },
    m_entityToken{ src.m_entityToken },
    m_tokenExpiration{ src.m_tokenExpiration }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
    tokenExpiration = m_tokenExpiration ? m_tokenExpiration.operator->() : nullptr;
}

EntityTokenResponse::EntityTokenResponse(EntityTokenResponse&& src) :
    PlayFabEntityTokenResponse{ src },
    m_entity{ std::move(src.m_entity) },
    m_entityToken{ std::move(src.m_entityToken) },
    m_tokenExpiration{ std::move(src.m_tokenExpiration) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
    tokenExpiration = m_tokenExpiration ? m_tokenExpiration.operator->() : nullptr;
}

EntityTokenResponse::EntityTokenResponse(const PlayFabEntityTokenResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityTokenResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "EntityToken", m_entityToken, entityToken);
    JsonUtils::ObjectGetMember(input, "TokenExpiration", m_tokenExpiration, tokenExpiration, true);
}

JsonValue EntityTokenResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabEntityTokenResponse>(*this);
}

UserAndroidDeviceInfo::UserAndroidDeviceInfo() :
    PlayFabUserAndroidDeviceInfo{}
{
}

UserAndroidDeviceInfo::UserAndroidDeviceInfo(const UserAndroidDeviceInfo& src) :
    PlayFabUserAndroidDeviceInfo{ src },
    m_androidDeviceId{ src.m_androidDeviceId }
{
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
}

UserAndroidDeviceInfo::UserAndroidDeviceInfo(UserAndroidDeviceInfo&& src) :
    PlayFabUserAndroidDeviceInfo{ src },
    m_androidDeviceId{ std::move(src.m_androidDeviceId) }
{
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
}

UserAndroidDeviceInfo::UserAndroidDeviceInfo(const PlayFabUserAndroidDeviceInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserAndroidDeviceInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
}

JsonValue UserAndroidDeviceInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserAndroidDeviceInfo>(*this);
}

size_t UserAndroidDeviceInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserAndroidDeviceInfo) };
    serializedSize += (m_androidDeviceId.size() + 1);
    return serializedSize;
}

void UserAndroidDeviceInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserAndroidDeviceInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserAndroidDeviceInfo);
    memcpy(stringBuffer, m_androidDeviceId.data(), m_androidDeviceId.size() + 1);
    serializedStruct->androidDeviceId = stringBuffer;
    stringBuffer += m_androidDeviceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserAppleIdInfo::UserAppleIdInfo() :
    PlayFabUserAppleIdInfo{}
{
}

UserAppleIdInfo::UserAppleIdInfo(const UserAppleIdInfo& src) :
    PlayFabUserAppleIdInfo{ src },
    m_appleSubjectId{ src.m_appleSubjectId }
{
    appleSubjectId = m_appleSubjectId.empty() ? nullptr : m_appleSubjectId.data();
}

UserAppleIdInfo::UserAppleIdInfo(UserAppleIdInfo&& src) :
    PlayFabUserAppleIdInfo{ src },
    m_appleSubjectId{ std::move(src.m_appleSubjectId) }
{
    appleSubjectId = m_appleSubjectId.empty() ? nullptr : m_appleSubjectId.data();
}

UserAppleIdInfo::UserAppleIdInfo(const PlayFabUserAppleIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserAppleIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AppleSubjectId", m_appleSubjectId, appleSubjectId);
}

JsonValue UserAppleIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserAppleIdInfo>(*this);
}

size_t UserAppleIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserAppleIdInfo) };
    serializedSize += (m_appleSubjectId.size() + 1);
    return serializedSize;
}

void UserAppleIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserAppleIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserAppleIdInfo);
    memcpy(stringBuffer, m_appleSubjectId.data(), m_appleSubjectId.size() + 1);
    serializedStruct->appleSubjectId = stringBuffer;
    stringBuffer += m_appleSubjectId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserCustomIdInfo::UserCustomIdInfo() :
    PlayFabUserCustomIdInfo{}
{
}

UserCustomIdInfo::UserCustomIdInfo(const UserCustomIdInfo& src) :
    PlayFabUserCustomIdInfo{ src },
    m_customId{ src.m_customId }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
}

UserCustomIdInfo::UserCustomIdInfo(UserCustomIdInfo&& src) :
    PlayFabUserCustomIdInfo{ src },
    m_customId{ std::move(src.m_customId) }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
}

UserCustomIdInfo::UserCustomIdInfo(const PlayFabUserCustomIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserCustomIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomId", m_customId, customId);
}

JsonValue UserCustomIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserCustomIdInfo>(*this);
}

size_t UserCustomIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserCustomIdInfo) };
    serializedSize += (m_customId.size() + 1);
    return serializedSize;
}

void UserCustomIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserCustomIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserCustomIdInfo);
    memcpy(stringBuffer, m_customId.data(), m_customId.size() + 1);
    serializedStruct->customId = stringBuffer;
    stringBuffer += m_customId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserFacebookInfo::UserFacebookInfo() :
    PlayFabUserFacebookInfo{}
{
}

UserFacebookInfo::UserFacebookInfo(const UserFacebookInfo& src) :
    PlayFabUserFacebookInfo{ src },
    m_facebookId{ src.m_facebookId },
    m_fullName{ src.m_fullName }
{
    facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
    fullName = m_fullName.empty() ? nullptr : m_fullName.data();
}

UserFacebookInfo::UserFacebookInfo(UserFacebookInfo&& src) :
    PlayFabUserFacebookInfo{ src },
    m_facebookId{ std::move(src.m_facebookId) },
    m_fullName{ std::move(src.m_fullName) }
{
    facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
    fullName = m_fullName.empty() ? nullptr : m_fullName.data();
}

UserFacebookInfo::UserFacebookInfo(const PlayFabUserFacebookInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserFacebookInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookId", m_facebookId, facebookId);
    JsonUtils::ObjectGetMember(input, "FullName", m_fullName, fullName);
}

JsonValue UserFacebookInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserFacebookInfo>(*this);
}

size_t UserFacebookInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserFacebookInfo) };
    serializedSize += (m_facebookId.size() + 1);
    serializedSize += (m_fullName.size() + 1);
    return serializedSize;
}

void UserFacebookInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserFacebookInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserFacebookInfo);
    memcpy(stringBuffer, m_facebookId.data(), m_facebookId.size() + 1);
    serializedStruct->facebookId = stringBuffer;
    stringBuffer += m_facebookId.size() + 1;
    memcpy(stringBuffer, m_fullName.data(), m_fullName.size() + 1);
    serializedStruct->fullName = stringBuffer;
    stringBuffer += m_fullName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserFacebookInstantGamesIdInfo::UserFacebookInstantGamesIdInfo() :
    PlayFabUserFacebookInstantGamesIdInfo{}
{
}

UserFacebookInstantGamesIdInfo::UserFacebookInstantGamesIdInfo(const UserFacebookInstantGamesIdInfo& src) :
    PlayFabUserFacebookInstantGamesIdInfo{ src },
    m_facebookInstantGamesId{ src.m_facebookInstantGamesId }
{
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
}

UserFacebookInstantGamesIdInfo::UserFacebookInstantGamesIdInfo(UserFacebookInstantGamesIdInfo&& src) :
    PlayFabUserFacebookInstantGamesIdInfo{ src },
    m_facebookInstantGamesId{ std::move(src.m_facebookInstantGamesId) }
{
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
}

UserFacebookInstantGamesIdInfo::UserFacebookInstantGamesIdInfo(const PlayFabUserFacebookInstantGamesIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserFacebookInstantGamesIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
}

JsonValue UserFacebookInstantGamesIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserFacebookInstantGamesIdInfo>(*this);
}

size_t UserFacebookInstantGamesIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserFacebookInstantGamesIdInfo) };
    serializedSize += (m_facebookInstantGamesId.size() + 1);
    return serializedSize;
}

void UserFacebookInstantGamesIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserFacebookInstantGamesIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserFacebookInstantGamesIdInfo);
    memcpy(stringBuffer, m_facebookInstantGamesId.data(), m_facebookInstantGamesId.size() + 1);
    serializedStruct->facebookInstantGamesId = stringBuffer;
    stringBuffer += m_facebookInstantGamesId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserGameCenterInfo::UserGameCenterInfo() :
    PlayFabUserGameCenterInfo{}
{
}

UserGameCenterInfo::UserGameCenterInfo(const UserGameCenterInfo& src) :
    PlayFabUserGameCenterInfo{ src },
    m_gameCenterId{ src.m_gameCenterId }
{
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
}

UserGameCenterInfo::UserGameCenterInfo(UserGameCenterInfo&& src) :
    PlayFabUserGameCenterInfo{ src },
    m_gameCenterId{ std::move(src.m_gameCenterId) }
{
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
}

UserGameCenterInfo::UserGameCenterInfo(const PlayFabUserGameCenterInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserGameCenterInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameCenterId", m_gameCenterId, gameCenterId);
}

JsonValue UserGameCenterInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserGameCenterInfo>(*this);
}

size_t UserGameCenterInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserGameCenterInfo) };
    serializedSize += (m_gameCenterId.size() + 1);
    return serializedSize;
}

void UserGameCenterInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserGameCenterInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserGameCenterInfo);
    memcpy(stringBuffer, m_gameCenterId.data(), m_gameCenterId.size() + 1);
    serializedStruct->gameCenterId = stringBuffer;
    stringBuffer += m_gameCenterId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserGoogleInfo::UserGoogleInfo() :
    PlayFabUserGoogleInfo{}
{
}

UserGoogleInfo::UserGoogleInfo(const UserGoogleInfo& src) :
    PlayFabUserGoogleInfo{ src },
    m_googleEmail{ src.m_googleEmail },
    m_googleGender{ src.m_googleGender },
    m_googleId{ src.m_googleId },
    m_googleLocale{ src.m_googleLocale },
    m_googleName{ src.m_googleName }
{
    googleEmail = m_googleEmail.empty() ? nullptr : m_googleEmail.data();
    googleGender = m_googleGender.empty() ? nullptr : m_googleGender.data();
    googleId = m_googleId.empty() ? nullptr : m_googleId.data();
    googleLocale = m_googleLocale.empty() ? nullptr : m_googleLocale.data();
    googleName = m_googleName.empty() ? nullptr : m_googleName.data();
}

UserGoogleInfo::UserGoogleInfo(UserGoogleInfo&& src) :
    PlayFabUserGoogleInfo{ src },
    m_googleEmail{ std::move(src.m_googleEmail) },
    m_googleGender{ std::move(src.m_googleGender) },
    m_googleId{ std::move(src.m_googleId) },
    m_googleLocale{ std::move(src.m_googleLocale) },
    m_googleName{ std::move(src.m_googleName) }
{
    googleEmail = m_googleEmail.empty() ? nullptr : m_googleEmail.data();
    googleGender = m_googleGender.empty() ? nullptr : m_googleGender.data();
    googleId = m_googleId.empty() ? nullptr : m_googleId.data();
    googleLocale = m_googleLocale.empty() ? nullptr : m_googleLocale.data();
    googleName = m_googleName.empty() ? nullptr : m_googleName.data();
}

UserGoogleInfo::UserGoogleInfo(const PlayFabUserGoogleInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserGoogleInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GoogleEmail", m_googleEmail, googleEmail);
    JsonUtils::ObjectGetMember(input, "GoogleGender", m_googleGender, googleGender);
    JsonUtils::ObjectGetMember(input, "GoogleId", m_googleId, googleId);
    JsonUtils::ObjectGetMember(input, "GoogleLocale", m_googleLocale, googleLocale);
    JsonUtils::ObjectGetMember(input, "GoogleName", m_googleName, googleName);
}

JsonValue UserGoogleInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserGoogleInfo>(*this);
}

size_t UserGoogleInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserGoogleInfo) };
    serializedSize += (m_googleEmail.size() + 1);
    serializedSize += (m_googleGender.size() + 1);
    serializedSize += (m_googleId.size() + 1);
    serializedSize += (m_googleLocale.size() + 1);
    serializedSize += (m_googleName.size() + 1);
    return serializedSize;
}

void UserGoogleInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserGoogleInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserGoogleInfo);
    memcpy(stringBuffer, m_googleEmail.data(), m_googleEmail.size() + 1);
    serializedStruct->googleEmail = stringBuffer;
    stringBuffer += m_googleEmail.size() + 1;
    memcpy(stringBuffer, m_googleGender.data(), m_googleGender.size() + 1);
    serializedStruct->googleGender = stringBuffer;
    stringBuffer += m_googleGender.size() + 1;
    memcpy(stringBuffer, m_googleId.data(), m_googleId.size() + 1);
    serializedStruct->googleId = stringBuffer;
    stringBuffer += m_googleId.size() + 1;
    memcpy(stringBuffer, m_googleLocale.data(), m_googleLocale.size() + 1);
    serializedStruct->googleLocale = stringBuffer;
    stringBuffer += m_googleLocale.size() + 1;
    memcpy(stringBuffer, m_googleName.data(), m_googleName.size() + 1);
    serializedStruct->googleName = stringBuffer;
    stringBuffer += m_googleName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserIosDeviceInfo::UserIosDeviceInfo() :
    PlayFabUserIosDeviceInfo{}
{
}

UserIosDeviceInfo::UserIosDeviceInfo(const UserIosDeviceInfo& src) :
    PlayFabUserIosDeviceInfo{ src },
    m_iosDeviceId{ src.m_iosDeviceId }
{
    iosDeviceId = m_iosDeviceId.empty() ? nullptr : m_iosDeviceId.data();
}

UserIosDeviceInfo::UserIosDeviceInfo(UserIosDeviceInfo&& src) :
    PlayFabUserIosDeviceInfo{ src },
    m_iosDeviceId{ std::move(src.m_iosDeviceId) }
{
    iosDeviceId = m_iosDeviceId.empty() ? nullptr : m_iosDeviceId.data();
}

UserIosDeviceInfo::UserIosDeviceInfo(const PlayFabUserIosDeviceInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserIosDeviceInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IosDeviceId", m_iosDeviceId, iosDeviceId);
}

JsonValue UserIosDeviceInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserIosDeviceInfo>(*this);
}

size_t UserIosDeviceInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserIosDeviceInfo) };
    serializedSize += (m_iosDeviceId.size() + 1);
    return serializedSize;
}

void UserIosDeviceInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserIosDeviceInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserIosDeviceInfo);
    memcpy(stringBuffer, m_iosDeviceId.data(), m_iosDeviceId.size() + 1);
    serializedStruct->iosDeviceId = stringBuffer;
    stringBuffer += m_iosDeviceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserKongregateInfo::UserKongregateInfo() :
    PlayFabUserKongregateInfo{}
{
}

UserKongregateInfo::UserKongregateInfo(const UserKongregateInfo& src) :
    PlayFabUserKongregateInfo{ src },
    m_kongregateId{ src.m_kongregateId },
    m_kongregateName{ src.m_kongregateName }
{
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    kongregateName = m_kongregateName.empty() ? nullptr : m_kongregateName.data();
}

UserKongregateInfo::UserKongregateInfo(UserKongregateInfo&& src) :
    PlayFabUserKongregateInfo{ src },
    m_kongregateId{ std::move(src.m_kongregateId) },
    m_kongregateName{ std::move(src.m_kongregateName) }
{
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    kongregateName = m_kongregateName.empty() ? nullptr : m_kongregateName.data();
}

UserKongregateInfo::UserKongregateInfo(const PlayFabUserKongregateInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserKongregateInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
    JsonUtils::ObjectGetMember(input, "KongregateName", m_kongregateName, kongregateName);
}

JsonValue UserKongregateInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserKongregateInfo>(*this);
}

size_t UserKongregateInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserKongregateInfo) };
    serializedSize += (m_kongregateId.size() + 1);
    serializedSize += (m_kongregateName.size() + 1);
    return serializedSize;
}

void UserKongregateInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserKongregateInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserKongregateInfo);
    memcpy(stringBuffer, m_kongregateId.data(), m_kongregateId.size() + 1);
    serializedStruct->kongregateId = stringBuffer;
    stringBuffer += m_kongregateId.size() + 1;
    memcpy(stringBuffer, m_kongregateName.data(), m_kongregateName.size() + 1);
    serializedStruct->kongregateName = stringBuffer;
    stringBuffer += m_kongregateName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserNintendoSwitchAccountIdInfo::UserNintendoSwitchAccountIdInfo() :
    PlayFabUserNintendoSwitchAccountIdInfo{}
{
}

UserNintendoSwitchAccountIdInfo::UserNintendoSwitchAccountIdInfo(const UserNintendoSwitchAccountIdInfo& src) :
    PlayFabUserNintendoSwitchAccountIdInfo{ src },
    m_nintendoSwitchAccountSubjectId{ src.m_nintendoSwitchAccountSubjectId }
{
    nintendoSwitchAccountSubjectId = m_nintendoSwitchAccountSubjectId.empty() ? nullptr : m_nintendoSwitchAccountSubjectId.data();
}

UserNintendoSwitchAccountIdInfo::UserNintendoSwitchAccountIdInfo(UserNintendoSwitchAccountIdInfo&& src) :
    PlayFabUserNintendoSwitchAccountIdInfo{ src },
    m_nintendoSwitchAccountSubjectId{ std::move(src.m_nintendoSwitchAccountSubjectId) }
{
    nintendoSwitchAccountSubjectId = m_nintendoSwitchAccountSubjectId.empty() ? nullptr : m_nintendoSwitchAccountSubjectId.data();
}

UserNintendoSwitchAccountIdInfo::UserNintendoSwitchAccountIdInfo(const PlayFabUserNintendoSwitchAccountIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserNintendoSwitchAccountIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NintendoSwitchAccountSubjectId", m_nintendoSwitchAccountSubjectId, nintendoSwitchAccountSubjectId);
}

JsonValue UserNintendoSwitchAccountIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserNintendoSwitchAccountIdInfo>(*this);
}

size_t UserNintendoSwitchAccountIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserNintendoSwitchAccountIdInfo) };
    serializedSize += (m_nintendoSwitchAccountSubjectId.size() + 1);
    return serializedSize;
}

void UserNintendoSwitchAccountIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserNintendoSwitchAccountIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserNintendoSwitchAccountIdInfo);
    memcpy(stringBuffer, m_nintendoSwitchAccountSubjectId.data(), m_nintendoSwitchAccountSubjectId.size() + 1);
    serializedStruct->nintendoSwitchAccountSubjectId = stringBuffer;
    stringBuffer += m_nintendoSwitchAccountSubjectId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserNintendoSwitchDeviceIdInfo::UserNintendoSwitchDeviceIdInfo() :
    PlayFabUserNintendoSwitchDeviceIdInfo{}
{
}

UserNintendoSwitchDeviceIdInfo::UserNintendoSwitchDeviceIdInfo(const UserNintendoSwitchDeviceIdInfo& src) :
    PlayFabUserNintendoSwitchDeviceIdInfo{ src },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId }
{
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

UserNintendoSwitchDeviceIdInfo::UserNintendoSwitchDeviceIdInfo(UserNintendoSwitchDeviceIdInfo&& src) :
    PlayFabUserNintendoSwitchDeviceIdInfo{ src },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) }
{
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

UserNintendoSwitchDeviceIdInfo::UserNintendoSwitchDeviceIdInfo(const PlayFabUserNintendoSwitchDeviceIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserNintendoSwitchDeviceIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
}

JsonValue UserNintendoSwitchDeviceIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserNintendoSwitchDeviceIdInfo>(*this);
}

size_t UserNintendoSwitchDeviceIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserNintendoSwitchDeviceIdInfo) };
    serializedSize += (m_nintendoSwitchDeviceId.size() + 1);
    return serializedSize;
}

void UserNintendoSwitchDeviceIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserNintendoSwitchDeviceIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserNintendoSwitchDeviceIdInfo);
    memcpy(stringBuffer, m_nintendoSwitchDeviceId.data(), m_nintendoSwitchDeviceId.size() + 1);
    serializedStruct->nintendoSwitchDeviceId = stringBuffer;
    stringBuffer += m_nintendoSwitchDeviceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserOpenIdInfo::UserOpenIdInfo() :
    PlayFabUserOpenIdInfo{}
{
}

UserOpenIdInfo::UserOpenIdInfo(const UserOpenIdInfo& src) :
    PlayFabUserOpenIdInfo{ src },
    m_connectionId{ src.m_connectionId },
    m_issuer{ src.m_issuer },
    m_subject{ src.m_subject }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuer = m_issuer.empty() ? nullptr : m_issuer.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
}

UserOpenIdInfo::UserOpenIdInfo(UserOpenIdInfo&& src) :
    PlayFabUserOpenIdInfo{ src },
    m_connectionId{ std::move(src.m_connectionId) },
    m_issuer{ std::move(src.m_issuer) },
    m_subject{ std::move(src.m_subject) }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuer = m_issuer.empty() ? nullptr : m_issuer.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
}

UserOpenIdInfo::UserOpenIdInfo(const PlayFabUserOpenIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserOpenIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "Issuer", m_issuer, issuer);
    JsonUtils::ObjectGetMember(input, "Subject", m_subject, subject);
}

JsonValue UserOpenIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserOpenIdInfo>(*this);
}

size_t UserOpenIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserOpenIdInfo) };
    serializedSize += (m_connectionId.size() + 1);
    serializedSize += (m_issuer.size() + 1);
    serializedSize += (m_subject.size() + 1);
    return serializedSize;
}

void UserOpenIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserOpenIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserOpenIdInfo);
    memcpy(stringBuffer, m_connectionId.data(), m_connectionId.size() + 1);
    serializedStruct->connectionId = stringBuffer;
    stringBuffer += m_connectionId.size() + 1;
    memcpy(stringBuffer, m_issuer.data(), m_issuer.size() + 1);
    serializedStruct->issuer = stringBuffer;
    stringBuffer += m_issuer.size() + 1;
    memcpy(stringBuffer, m_subject.data(), m_subject.size() + 1);
    serializedStruct->subject = stringBuffer;
    stringBuffer += m_subject.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserPrivateAccountInfo::UserPrivateAccountInfo() :
    PlayFabUserPrivateAccountInfo{}
{
}

UserPrivateAccountInfo::UserPrivateAccountInfo(const UserPrivateAccountInfo& src) :
    PlayFabUserPrivateAccountInfo{ src },
    m_email{ src.m_email }
{
    email = m_email.empty() ? nullptr : m_email.data();
}

UserPrivateAccountInfo::UserPrivateAccountInfo(UserPrivateAccountInfo&& src) :
    PlayFabUserPrivateAccountInfo{ src },
    m_email{ std::move(src.m_email) }
{
    email = m_email.empty() ? nullptr : m_email.data();
}

UserPrivateAccountInfo::UserPrivateAccountInfo(const PlayFabUserPrivateAccountInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserPrivateAccountInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
}

JsonValue UserPrivateAccountInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserPrivateAccountInfo>(*this);
}

size_t UserPrivateAccountInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserPrivateAccountInfo) };
    serializedSize += (m_email.size() + 1);
    return serializedSize;
}

void UserPrivateAccountInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserPrivateAccountInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserPrivateAccountInfo);
    memcpy(stringBuffer, m_email.data(), m_email.size() + 1);
    serializedStruct->email = stringBuffer;
    stringBuffer += m_email.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserPsnInfo::UserPsnInfo() :
    PlayFabUserPsnInfo{}
{
}

UserPsnInfo::UserPsnInfo(const UserPsnInfo& src) :
    PlayFabUserPsnInfo{ src },
    m_psnAccountId{ src.m_psnAccountId },
    m_psnOnlineId{ src.m_psnOnlineId }
{
    psnAccountId = m_psnAccountId.empty() ? nullptr : m_psnAccountId.data();
    psnOnlineId = m_psnOnlineId.empty() ? nullptr : m_psnOnlineId.data();
}

UserPsnInfo::UserPsnInfo(UserPsnInfo&& src) :
    PlayFabUserPsnInfo{ src },
    m_psnAccountId{ std::move(src.m_psnAccountId) },
    m_psnOnlineId{ std::move(src.m_psnOnlineId) }
{
    psnAccountId = m_psnAccountId.empty() ? nullptr : m_psnAccountId.data();
    psnOnlineId = m_psnOnlineId.empty() ? nullptr : m_psnOnlineId.data();
}

UserPsnInfo::UserPsnInfo(const PlayFabUserPsnInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserPsnInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PsnAccountId", m_psnAccountId, psnAccountId);
    JsonUtils::ObjectGetMember(input, "PsnOnlineId", m_psnOnlineId, psnOnlineId);
}

JsonValue UserPsnInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserPsnInfo>(*this);
}

size_t UserPsnInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserPsnInfo) };
    serializedSize += (m_psnAccountId.size() + 1);
    serializedSize += (m_psnOnlineId.size() + 1);
    return serializedSize;
}

void UserPsnInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserPsnInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserPsnInfo);
    memcpy(stringBuffer, m_psnAccountId.data(), m_psnAccountId.size() + 1);
    serializedStruct->psnAccountId = stringBuffer;
    stringBuffer += m_psnAccountId.size() + 1;
    memcpy(stringBuffer, m_psnOnlineId.data(), m_psnOnlineId.size() + 1);
    serializedStruct->psnOnlineId = stringBuffer;
    stringBuffer += m_psnOnlineId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserSteamInfo::UserSteamInfo() :
    PlayFabUserSteamInfo{}
{
}

UserSteamInfo::UserSteamInfo(const UserSteamInfo& src) :
    PlayFabUserSteamInfo{ src },
    m_steamActivationStatus{ src.m_steamActivationStatus },
    m_steamCountry{ src.m_steamCountry },
    m_steamCurrency{ src.m_steamCurrency },
    m_steamId{ src.m_steamId },
    m_steamName{ src.m_steamName }
{
    steamActivationStatus = m_steamActivationStatus ? m_steamActivationStatus.operator->() : nullptr;
    steamCountry = m_steamCountry.empty() ? nullptr : m_steamCountry.data();
    steamCurrency = m_steamCurrency ? m_steamCurrency.operator->() : nullptr;
    steamId = m_steamId.empty() ? nullptr : m_steamId.data();
    steamName = m_steamName.empty() ? nullptr : m_steamName.data();
}

UserSteamInfo::UserSteamInfo(UserSteamInfo&& src) :
    PlayFabUserSteamInfo{ src },
    m_steamActivationStatus{ std::move(src.m_steamActivationStatus) },
    m_steamCountry{ std::move(src.m_steamCountry) },
    m_steamCurrency{ std::move(src.m_steamCurrency) },
    m_steamId{ std::move(src.m_steamId) },
    m_steamName{ std::move(src.m_steamName) }
{
    steamActivationStatus = m_steamActivationStatus ? m_steamActivationStatus.operator->() : nullptr;
    steamCountry = m_steamCountry.empty() ? nullptr : m_steamCountry.data();
    steamCurrency = m_steamCurrency ? m_steamCurrency.operator->() : nullptr;
    steamId = m_steamId.empty() ? nullptr : m_steamId.data();
    steamName = m_steamName.empty() ? nullptr : m_steamName.data();
}

UserSteamInfo::UserSteamInfo(const PlayFabUserSteamInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserSteamInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SteamActivationStatus", m_steamActivationStatus, steamActivationStatus);
    JsonUtils::ObjectGetMember(input, "SteamCountry", m_steamCountry, steamCountry);
    JsonUtils::ObjectGetMember(input, "SteamCurrency", m_steamCurrency, steamCurrency);
    JsonUtils::ObjectGetMember(input, "SteamId", m_steamId, steamId);
    JsonUtils::ObjectGetMember(input, "SteamName", m_steamName, steamName);
}

JsonValue UserSteamInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserSteamInfo>(*this);
}

UserTitleInfo::UserTitleInfo() :
    PlayFabUserTitleInfo{}
{
}

UserTitleInfo::UserTitleInfo(const UserTitleInfo& src) :
    PlayFabUserTitleInfo{ src },
    m_avatarUrl{ src.m_avatarUrl },
    m_displayName{ src.m_displayName },
    m_firstLogin{ src.m_firstLogin },
    m_isBanned{ src.m_isBanned },
    m_lastLogin{ src.m_lastLogin },
    m_origination{ src.m_origination },
    m_titlePlayerAccount{ src.m_titlePlayerAccount }
{
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    firstLogin = m_firstLogin ? m_firstLogin.operator->() : nullptr;
    isBanned = m_isBanned ? m_isBanned.operator->() : nullptr;
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    origination = m_origination ? m_origination.operator->() : nullptr;
    titlePlayerAccount = m_titlePlayerAccount ? m_titlePlayerAccount.operator->() : nullptr;
}

UserTitleInfo::UserTitleInfo(UserTitleInfo&& src) :
    PlayFabUserTitleInfo{ src },
    m_avatarUrl{ std::move(src.m_avatarUrl) },
    m_displayName{ std::move(src.m_displayName) },
    m_firstLogin{ std::move(src.m_firstLogin) },
    m_isBanned{ std::move(src.m_isBanned) },
    m_lastLogin{ std::move(src.m_lastLogin) },
    m_origination{ std::move(src.m_origination) },
    m_titlePlayerAccount{ std::move(src.m_titlePlayerAccount) }
{
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    firstLogin = m_firstLogin ? m_firstLogin.operator->() : nullptr;
    isBanned = m_isBanned ? m_isBanned.operator->() : nullptr;
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    origination = m_origination ? m_origination.operator->() : nullptr;
    titlePlayerAccount = m_titlePlayerAccount ? m_titlePlayerAccount.operator->() : nullptr;
}

UserTitleInfo::UserTitleInfo(const PlayFabUserTitleInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserTitleInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "FirstLogin", m_firstLogin, firstLogin, true);
    JsonUtils::ObjectGetMember(input, "isBanned", m_isBanned, isBanned);
    JsonUtils::ObjectGetMember(input, "LastLogin", m_lastLogin, lastLogin, true);
    JsonUtils::ObjectGetMember(input, "Origination", m_origination, origination);
    JsonUtils::ObjectGetMember(input, "TitlePlayerAccount", m_titlePlayerAccount, titlePlayerAccount);
}

JsonValue UserTitleInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserTitleInfo>(*this);
}

UserTwitchInfo::UserTwitchInfo() :
    PlayFabUserTwitchInfo{}
{
}

UserTwitchInfo::UserTwitchInfo(const UserTwitchInfo& src) :
    PlayFabUserTwitchInfo{ src },
    m_twitchId{ src.m_twitchId },
    m_twitchUserName{ src.m_twitchUserName }
{
    twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
    twitchUserName = m_twitchUserName.empty() ? nullptr : m_twitchUserName.data();
}

UserTwitchInfo::UserTwitchInfo(UserTwitchInfo&& src) :
    PlayFabUserTwitchInfo{ src },
    m_twitchId{ std::move(src.m_twitchId) },
    m_twitchUserName{ std::move(src.m_twitchUserName) }
{
    twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
    twitchUserName = m_twitchUserName.empty() ? nullptr : m_twitchUserName.data();
}

UserTwitchInfo::UserTwitchInfo(const PlayFabUserTwitchInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserTwitchInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TwitchId", m_twitchId, twitchId);
    JsonUtils::ObjectGetMember(input, "TwitchUserName", m_twitchUserName, twitchUserName);
}

JsonValue UserTwitchInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserTwitchInfo>(*this);
}

size_t UserTwitchInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserTwitchInfo) };
    serializedSize += (m_twitchId.size() + 1);
    serializedSize += (m_twitchUserName.size() + 1);
    return serializedSize;
}

void UserTwitchInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserTwitchInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserTwitchInfo);
    memcpy(stringBuffer, m_twitchId.data(), m_twitchId.size() + 1);
    serializedStruct->twitchId = stringBuffer;
    stringBuffer += m_twitchId.size() + 1;
    memcpy(stringBuffer, m_twitchUserName.data(), m_twitchUserName.size() + 1);
    serializedStruct->twitchUserName = stringBuffer;
    stringBuffer += m_twitchUserName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserWindowsHelloInfo::UserWindowsHelloInfo() :
    PlayFabUserWindowsHelloInfo{}
{
}

UserWindowsHelloInfo::UserWindowsHelloInfo(const UserWindowsHelloInfo& src) :
    PlayFabUserWindowsHelloInfo{ src },
    m_windowsHelloDeviceName{ src.m_windowsHelloDeviceName },
    m_windowsHelloPublicKeyHash{ src.m_windowsHelloPublicKeyHash }
{
    windowsHelloDeviceName = m_windowsHelloDeviceName.empty() ? nullptr : m_windowsHelloDeviceName.data();
    windowsHelloPublicKeyHash = m_windowsHelloPublicKeyHash.empty() ? nullptr : m_windowsHelloPublicKeyHash.data();
}

UserWindowsHelloInfo::UserWindowsHelloInfo(UserWindowsHelloInfo&& src) :
    PlayFabUserWindowsHelloInfo{ src },
    m_windowsHelloDeviceName{ std::move(src.m_windowsHelloDeviceName) },
    m_windowsHelloPublicKeyHash{ std::move(src.m_windowsHelloPublicKeyHash) }
{
    windowsHelloDeviceName = m_windowsHelloDeviceName.empty() ? nullptr : m_windowsHelloDeviceName.data();
    windowsHelloPublicKeyHash = m_windowsHelloPublicKeyHash.empty() ? nullptr : m_windowsHelloPublicKeyHash.data();
}

UserWindowsHelloInfo::UserWindowsHelloInfo(const PlayFabUserWindowsHelloInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserWindowsHelloInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "WindowsHelloDeviceName", m_windowsHelloDeviceName, windowsHelloDeviceName);
    JsonUtils::ObjectGetMember(input, "WindowsHelloPublicKeyHash", m_windowsHelloPublicKeyHash, windowsHelloPublicKeyHash);
}

JsonValue UserWindowsHelloInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserWindowsHelloInfo>(*this);
}

size_t UserWindowsHelloInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserWindowsHelloInfo) };
    serializedSize += (m_windowsHelloDeviceName.size() + 1);
    serializedSize += (m_windowsHelloPublicKeyHash.size() + 1);
    return serializedSize;
}

void UserWindowsHelloInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserWindowsHelloInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserWindowsHelloInfo);
    memcpy(stringBuffer, m_windowsHelloDeviceName.data(), m_windowsHelloDeviceName.size() + 1);
    serializedStruct->windowsHelloDeviceName = stringBuffer;
    stringBuffer += m_windowsHelloDeviceName.size() + 1;
    memcpy(stringBuffer, m_windowsHelloPublicKeyHash.data(), m_windowsHelloPublicKeyHash.size() + 1);
    serializedStruct->windowsHelloPublicKeyHash = stringBuffer;
    stringBuffer += m_windowsHelloPublicKeyHash.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserXboxInfo::UserXboxInfo() :
    PlayFabUserXboxInfo{}
{
}

UserXboxInfo::UserXboxInfo(const UserXboxInfo& src) :
    PlayFabUserXboxInfo{ src },
    m_xboxUserId{ src.m_xboxUserId }
{
    xboxUserId = m_xboxUserId.empty() ? nullptr : m_xboxUserId.data();
}

UserXboxInfo::UserXboxInfo(UserXboxInfo&& src) :
    PlayFabUserXboxInfo{ src },
    m_xboxUserId{ std::move(src.m_xboxUserId) }
{
    xboxUserId = m_xboxUserId.empty() ? nullptr : m_xboxUserId.data();
}

UserXboxInfo::UserXboxInfo(const PlayFabUserXboxInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserXboxInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "XboxUserId", m_xboxUserId, xboxUserId);
}

JsonValue UserXboxInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserXboxInfo>(*this);
}

size_t UserXboxInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserXboxInfo) };
    serializedSize += (m_xboxUserId.size() + 1);
    return serializedSize;
}

void UserXboxInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserXboxInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserXboxInfo);
    memcpy(stringBuffer, m_xboxUserId.data(), m_xboxUserId.size() + 1);
    serializedStruct->xboxUserId = stringBuffer;
    stringBuffer += m_xboxUserId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserAccountInfo::UserAccountInfo() :
    PlayFabUserAccountInfo{}
{
}

UserAccountInfo::UserAccountInfo(const UserAccountInfo& src) :
    PlayFabUserAccountInfo{ src },
    m_androidDeviceInfo{ src.m_androidDeviceInfo },
    m_appleAccountInfo{ src.m_appleAccountInfo },
    m_customIdInfo{ src.m_customIdInfo },
    m_facebookInfo{ src.m_facebookInfo },
    m_facebookInstantGamesIdInfo{ src.m_facebookInstantGamesIdInfo },
    m_gameCenterInfo{ src.m_gameCenterInfo },
    m_googleInfo{ src.m_googleInfo },
    m_iosDeviceInfo{ src.m_iosDeviceInfo },
    m_kongregateInfo{ src.m_kongregateInfo },
    m_nintendoSwitchAccountInfo{ src.m_nintendoSwitchAccountInfo },
    m_nintendoSwitchDeviceIdInfo{ src.m_nintendoSwitchDeviceIdInfo },
    m_openIdInfo{ src.m_openIdInfo },
    m_playFabId{ src.m_playFabId },
    m_privateInfo{ src.m_privateInfo },
    m_psnInfo{ src.m_psnInfo },
    m_steamInfo{ src.m_steamInfo },
    m_titleInfo{ src.m_titleInfo },
    m_twitchInfo{ src.m_twitchInfo },
    m_username{ src.m_username },
    m_windowsHelloInfo{ src.m_windowsHelloInfo },
    m_xboxInfo{ src.m_xboxInfo }
{
    androidDeviceInfo = m_androidDeviceInfo ? m_androidDeviceInfo.operator->() : nullptr;
    appleAccountInfo = m_appleAccountInfo ? m_appleAccountInfo.operator->() : nullptr;
    customIdInfo = m_customIdInfo ? m_customIdInfo.operator->() : nullptr;
    facebookInfo = m_facebookInfo ? m_facebookInfo.operator->() : nullptr;
    facebookInstantGamesIdInfo = m_facebookInstantGamesIdInfo ? m_facebookInstantGamesIdInfo.operator->() : nullptr;
    gameCenterInfo = m_gameCenterInfo ? m_gameCenterInfo.operator->() : nullptr;
    googleInfo = m_googleInfo ? m_googleInfo.operator->() : nullptr;
    iosDeviceInfo = m_iosDeviceInfo ? m_iosDeviceInfo.operator->() : nullptr;
    kongregateInfo = m_kongregateInfo ? m_kongregateInfo.operator->() : nullptr;
    nintendoSwitchAccountInfo = m_nintendoSwitchAccountInfo ? m_nintendoSwitchAccountInfo.operator->() : nullptr;
    nintendoSwitchDeviceIdInfo = m_nintendoSwitchDeviceIdInfo ? m_nintendoSwitchDeviceIdInfo.operator->() : nullptr;
    openIdInfo = m_openIdInfo.Empty() ? nullptr : m_openIdInfo.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    privateInfo = m_privateInfo ? m_privateInfo.operator->() : nullptr;
    psnInfo = m_psnInfo ? m_psnInfo.operator->() : nullptr;
    steamInfo = m_steamInfo ? m_steamInfo.operator->() : nullptr;
    titleInfo = m_titleInfo ? m_titleInfo.operator->() : nullptr;
    twitchInfo = m_twitchInfo ? m_twitchInfo.operator->() : nullptr;
    username = m_username.empty() ? nullptr : m_username.data();
    windowsHelloInfo = m_windowsHelloInfo ? m_windowsHelloInfo.operator->() : nullptr;
    xboxInfo = m_xboxInfo ? m_xboxInfo.operator->() : nullptr;
}

UserAccountInfo::UserAccountInfo(UserAccountInfo&& src) :
    PlayFabUserAccountInfo{ src },
    m_androidDeviceInfo{ std::move(src.m_androidDeviceInfo) },
    m_appleAccountInfo{ std::move(src.m_appleAccountInfo) },
    m_customIdInfo{ std::move(src.m_customIdInfo) },
    m_facebookInfo{ std::move(src.m_facebookInfo) },
    m_facebookInstantGamesIdInfo{ std::move(src.m_facebookInstantGamesIdInfo) },
    m_gameCenterInfo{ std::move(src.m_gameCenterInfo) },
    m_googleInfo{ std::move(src.m_googleInfo) },
    m_iosDeviceInfo{ std::move(src.m_iosDeviceInfo) },
    m_kongregateInfo{ std::move(src.m_kongregateInfo) },
    m_nintendoSwitchAccountInfo{ std::move(src.m_nintendoSwitchAccountInfo) },
    m_nintendoSwitchDeviceIdInfo{ std::move(src.m_nintendoSwitchDeviceIdInfo) },
    m_openIdInfo{ std::move(src.m_openIdInfo) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_privateInfo{ std::move(src.m_privateInfo) },
    m_psnInfo{ std::move(src.m_psnInfo) },
    m_steamInfo{ std::move(src.m_steamInfo) },
    m_titleInfo{ std::move(src.m_titleInfo) },
    m_twitchInfo{ std::move(src.m_twitchInfo) },
    m_username{ std::move(src.m_username) },
    m_windowsHelloInfo{ std::move(src.m_windowsHelloInfo) },
    m_xboxInfo{ std::move(src.m_xboxInfo) }
{
    androidDeviceInfo = m_androidDeviceInfo ? m_androidDeviceInfo.operator->() : nullptr;
    appleAccountInfo = m_appleAccountInfo ? m_appleAccountInfo.operator->() : nullptr;
    customIdInfo = m_customIdInfo ? m_customIdInfo.operator->() : nullptr;
    facebookInfo = m_facebookInfo ? m_facebookInfo.operator->() : nullptr;
    facebookInstantGamesIdInfo = m_facebookInstantGamesIdInfo ? m_facebookInstantGamesIdInfo.operator->() : nullptr;
    gameCenterInfo = m_gameCenterInfo ? m_gameCenterInfo.operator->() : nullptr;
    googleInfo = m_googleInfo ? m_googleInfo.operator->() : nullptr;
    iosDeviceInfo = m_iosDeviceInfo ? m_iosDeviceInfo.operator->() : nullptr;
    kongregateInfo = m_kongregateInfo ? m_kongregateInfo.operator->() : nullptr;
    nintendoSwitchAccountInfo = m_nintendoSwitchAccountInfo ? m_nintendoSwitchAccountInfo.operator->() : nullptr;
    nintendoSwitchDeviceIdInfo = m_nintendoSwitchDeviceIdInfo ? m_nintendoSwitchDeviceIdInfo.operator->() : nullptr;
    openIdInfo = m_openIdInfo.Empty() ? nullptr : m_openIdInfo.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    privateInfo = m_privateInfo ? m_privateInfo.operator->() : nullptr;
    psnInfo = m_psnInfo ? m_psnInfo.operator->() : nullptr;
    steamInfo = m_steamInfo ? m_steamInfo.operator->() : nullptr;
    titleInfo = m_titleInfo ? m_titleInfo.operator->() : nullptr;
    twitchInfo = m_twitchInfo ? m_twitchInfo.operator->() : nullptr;
    username = m_username.empty() ? nullptr : m_username.data();
    windowsHelloInfo = m_windowsHelloInfo ? m_windowsHelloInfo.operator->() : nullptr;
    xboxInfo = m_xboxInfo ? m_xboxInfo.operator->() : nullptr;
}

UserAccountInfo::UserAccountInfo(const PlayFabUserAccountInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserAccountInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidDeviceInfo", m_androidDeviceInfo, androidDeviceInfo);
    JsonUtils::ObjectGetMember(input, "AppleAccountInfo", m_appleAccountInfo, appleAccountInfo);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "CustomIdInfo", m_customIdInfo, customIdInfo);
    JsonUtils::ObjectGetMember(input, "FacebookInfo", m_facebookInfo, facebookInfo);
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesIdInfo", m_facebookInstantGamesIdInfo, facebookInstantGamesIdInfo);
    JsonUtils::ObjectGetMember(input, "GameCenterInfo", m_gameCenterInfo, gameCenterInfo);
    JsonUtils::ObjectGetMember(input, "GoogleInfo", m_googleInfo, googleInfo);
    JsonUtils::ObjectGetMember(input, "IosDeviceInfo", m_iosDeviceInfo, iosDeviceInfo);
    JsonUtils::ObjectGetMember(input, "KongregateInfo", m_kongregateInfo, kongregateInfo);
    JsonUtils::ObjectGetMember(input, "NintendoSwitchAccountInfo", m_nintendoSwitchAccountInfo, nintendoSwitchAccountInfo);
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceIdInfo", m_nintendoSwitchDeviceIdInfo, nintendoSwitchDeviceIdInfo);
    JsonUtils::ObjectGetMember(input, "OpenIdInfo", m_openIdInfo, openIdInfo, openIdInfoCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "PrivateInfo", m_privateInfo, privateInfo);
    JsonUtils::ObjectGetMember(input, "PsnInfo", m_psnInfo, psnInfo);
    JsonUtils::ObjectGetMember(input, "SteamInfo", m_steamInfo, steamInfo);
    JsonUtils::ObjectGetMember(input, "TitleInfo", m_titleInfo, titleInfo);
    JsonUtils::ObjectGetMember(input, "TwitchInfo", m_twitchInfo, twitchInfo);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
    JsonUtils::ObjectGetMember(input, "WindowsHelloInfo", m_windowsHelloInfo, windowsHelloInfo);
    JsonUtils::ObjectGetMember(input, "XboxInfo", m_xboxInfo, xboxInfo);
}

JsonValue UserAccountInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserAccountInfo>(*this);
}

ItemInstance::ItemInstance() :
    PlayFabItemInstance{}
{
}

ItemInstance::ItemInstance(const ItemInstance& src) :
    PlayFabItemInstance{ src },
    m_annotation{ src.m_annotation },
    m_bundleContents{ src.m_bundleContents },
    m_bundleParent{ src.m_bundleParent },
    m_catalogVersion{ src.m_catalogVersion },
    m_customData{ src.m_customData },
    m_displayName{ src.m_displayName },
    m_expiration{ src.m_expiration },
    m_itemClass{ src.m_itemClass },
    m_itemId{ src.m_itemId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_purchaseDate{ src.m_purchaseDate },
    m_remainingUses{ src.m_remainingUses },
    m_unitCurrency{ src.m_unitCurrency },
    m_usesIncrementedBy{ src.m_usesIncrementedBy }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
    bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customData = m_customData.Empty() ? nullptr : m_customData.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    expiration = m_expiration ? m_expiration.operator->() : nullptr;
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
    remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
    unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
    usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
}

ItemInstance::ItemInstance(ItemInstance&& src) :
    PlayFabItemInstance{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_bundleContents{ std::move(src.m_bundleContents) },
    m_bundleParent{ std::move(src.m_bundleParent) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customData{ std::move(src.m_customData) },
    m_displayName{ std::move(src.m_displayName) },
    m_expiration{ std::move(src.m_expiration) },
    m_itemClass{ std::move(src.m_itemClass) },
    m_itemId{ std::move(src.m_itemId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_purchaseDate{ std::move(src.m_purchaseDate) },
    m_remainingUses{ std::move(src.m_remainingUses) },
    m_unitCurrency{ std::move(src.m_unitCurrency) },
    m_usesIncrementedBy{ std::move(src.m_usesIncrementedBy) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
    bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customData = m_customData.Empty() ? nullptr : m_customData.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    expiration = m_expiration ? m_expiration.operator->() : nullptr;
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
    remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
    unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
    usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
}

ItemInstance::ItemInstance(const PlayFabItemInstance& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ItemInstance::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "BundleContents", m_bundleContents, bundleContents, bundleContentsCount);
    JsonUtils::ObjectGetMember(input, "BundleParent", m_bundleParent, bundleParent);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData, customDataCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Expiration", m_expiration, expiration, true);
    JsonUtils::ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PurchaseDate", m_purchaseDate, purchaseDate, true);
    JsonUtils::ObjectGetMember(input, "RemainingUses", m_remainingUses, remainingUses);
    JsonUtils::ObjectGetMember(input, "UnitCurrency", m_unitCurrency, unitCurrency);
    JsonUtils::ObjectGetMember(input, "UnitPrice", unitPrice);
    JsonUtils::ObjectGetMember(input, "UsesIncrementedBy", m_usesIncrementedBy, usesIncrementedBy);
}

JsonValue ItemInstance::ToJson() const
{
    return JsonUtils::ToJson<PlayFabItemInstance>(*this);
}

CharacterInventory::CharacterInventory() :
    PlayFabCharacterInventory{}
{
}

CharacterInventory::CharacterInventory(const CharacterInventory& src) :
    PlayFabCharacterInventory{ src },
    m_characterId{ src.m_characterId },
    m_inventory{ src.m_inventory }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
}

CharacterInventory::CharacterInventory(CharacterInventory&& src) :
    PlayFabCharacterInventory{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_inventory{ std::move(src.m_inventory) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
}

CharacterInventory::CharacterInventory(const PlayFabCharacterInventory& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CharacterInventory::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
}

JsonValue CharacterInventory::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCharacterInventory>(*this);
}

CharacterResult::CharacterResult() :
    PlayFabCharacterResult{}
{
}

CharacterResult::CharacterResult(const CharacterResult& src) :
    PlayFabCharacterResult{ src },
    m_characterId{ src.m_characterId },
    m_characterName{ src.m_characterName },
    m_characterType{ src.m_characterType }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
}

CharacterResult::CharacterResult(CharacterResult&& src) :
    PlayFabCharacterResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterName{ std::move(src.m_characterName) },
    m_characterType{ std::move(src.m_characterType) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
}

CharacterResult::CharacterResult(const PlayFabCharacterResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CharacterResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterName", m_characterName, characterName);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
}

JsonValue CharacterResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCharacterResult>(*this);
}

size_t CharacterResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabCharacterResult) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_characterName.size() + 1);
    serializedSize += (m_characterType.size() + 1);
    return serializedSize;
}

void CharacterResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabCharacterResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabCharacterResult);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_characterName.data(), m_characterName.size() + 1);
    serializedStruct->characterName = stringBuffer;
    stringBuffer += m_characterName.size() + 1;
    memcpy(stringBuffer, m_characterType.data(), m_characterType.size() + 1);
    serializedStruct->characterType = stringBuffer;
    stringBuffer += m_characterType.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AdCampaignAttributionModel::AdCampaignAttributionModel() :
    PlayFabAdCampaignAttributionModel{}
{
}

AdCampaignAttributionModel::AdCampaignAttributionModel(const AdCampaignAttributionModel& src) :
    PlayFabAdCampaignAttributionModel{ src },
    m_campaignId{ src.m_campaignId },
    m_platform{ src.m_platform }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    platform = m_platform.empty() ? nullptr : m_platform.data();
}

AdCampaignAttributionModel::AdCampaignAttributionModel(AdCampaignAttributionModel&& src) :
    PlayFabAdCampaignAttributionModel{ src },
    m_campaignId{ std::move(src.m_campaignId) },
    m_platform{ std::move(src.m_platform) }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    platform = m_platform.empty() ? nullptr : m_platform.data();
}

AdCampaignAttributionModel::AdCampaignAttributionModel(const PlayFabAdCampaignAttributionModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdCampaignAttributionModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AttributedAt", attributedAt, true);
    JsonUtils::ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
}

JsonValue AdCampaignAttributionModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdCampaignAttributionModel>(*this);
}

size_t AdCampaignAttributionModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdCampaignAttributionModel) };
    serializedSize += (m_campaignId.size() + 1);
    serializedSize += (m_platform.size() + 1);
    return serializedSize;
}

void AdCampaignAttributionModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdCampaignAttributionModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdCampaignAttributionModel);
    memcpy(stringBuffer, m_campaignId.data(), m_campaignId.size() + 1);
    serializedStruct->campaignId = stringBuffer;
    stringBuffer += m_campaignId.size() + 1;
    memcpy(stringBuffer, m_platform.data(), m_platform.size() + 1);
    serializedStruct->platform = stringBuffer;
    stringBuffer += m_platform.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ContactEmailInfoModel::ContactEmailInfoModel() :
    PlayFabContactEmailInfoModel{}
{
}

ContactEmailInfoModel::ContactEmailInfoModel(const ContactEmailInfoModel& src) :
    PlayFabContactEmailInfoModel{ src },
    m_emailAddress{ src.m_emailAddress },
    m_name{ src.m_name },
    m_verificationStatus{ src.m_verificationStatus }
{
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
    name = m_name.empty() ? nullptr : m_name.data();
    verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
}

ContactEmailInfoModel::ContactEmailInfoModel(ContactEmailInfoModel&& src) :
    PlayFabContactEmailInfoModel{ src },
    m_emailAddress{ std::move(src.m_emailAddress) },
    m_name{ std::move(src.m_name) },
    m_verificationStatus{ std::move(src.m_verificationStatus) }
{
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
    name = m_name.empty() ? nullptr : m_name.data();
    verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
}

ContactEmailInfoModel::ContactEmailInfoModel(const PlayFabContactEmailInfoModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ContactEmailInfoModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "VerificationStatus", m_verificationStatus, verificationStatus);
}

JsonValue ContactEmailInfoModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabContactEmailInfoModel>(*this);
}

LinkedPlatformAccountModel::LinkedPlatformAccountModel() :
    PlayFabLinkedPlatformAccountModel{}
{
}

LinkedPlatformAccountModel::LinkedPlatformAccountModel(const LinkedPlatformAccountModel& src) :
    PlayFabLinkedPlatformAccountModel{ src },
    m_email{ src.m_email },
    m_platform{ src.m_platform },
    m_platformUserId{ src.m_platformUserId },
    m_username{ src.m_username }
{
    email = m_email.empty() ? nullptr : m_email.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
    platformUserId = m_platformUserId.empty() ? nullptr : m_platformUserId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LinkedPlatformAccountModel::LinkedPlatformAccountModel(LinkedPlatformAccountModel&& src) :
    PlayFabLinkedPlatformAccountModel{ src },
    m_email{ std::move(src.m_email) },
    m_platform{ std::move(src.m_platform) },
    m_platformUserId{ std::move(src.m_platformUserId) },
    m_username{ std::move(src.m_username) }
{
    email = m_email.empty() ? nullptr : m_email.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
    platformUserId = m_platformUserId.empty() ? nullptr : m_platformUserId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LinkedPlatformAccountModel::LinkedPlatformAccountModel(const PlayFabLinkedPlatformAccountModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkedPlatformAccountModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
    JsonUtils::ObjectGetMember(input, "PlatformUserId", m_platformUserId, platformUserId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue LinkedPlatformAccountModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabLinkedPlatformAccountModel>(*this);
}

LocationModel::LocationModel() :
    PlayFabLocationModel{}
{
}

LocationModel::LocationModel(const LocationModel& src) :
    PlayFabLocationModel{ src },
    m_city{ src.m_city },
    m_continentCode{ src.m_continentCode },
    m_countryCode{ src.m_countryCode },
    m_latitude{ src.m_latitude },
    m_longitude{ src.m_longitude }
{
    city = m_city.empty() ? nullptr : m_city.data();
    continentCode = m_continentCode ? m_continentCode.operator->() : nullptr;
    countryCode = m_countryCode ? m_countryCode.operator->() : nullptr;
    latitude = m_latitude ? m_latitude.operator->() : nullptr;
    longitude = m_longitude ? m_longitude.operator->() : nullptr;
}

LocationModel::LocationModel(LocationModel&& src) :
    PlayFabLocationModel{ src },
    m_city{ std::move(src.m_city) },
    m_continentCode{ std::move(src.m_continentCode) },
    m_countryCode{ std::move(src.m_countryCode) },
    m_latitude{ std::move(src.m_latitude) },
    m_longitude{ std::move(src.m_longitude) }
{
    city = m_city.empty() ? nullptr : m_city.data();
    continentCode = m_continentCode ? m_continentCode.operator->() : nullptr;
    countryCode = m_countryCode ? m_countryCode.operator->() : nullptr;
    latitude = m_latitude ? m_latitude.operator->() : nullptr;
    longitude = m_longitude ? m_longitude.operator->() : nullptr;
}

LocationModel::LocationModel(const PlayFabLocationModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LocationModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "City", m_city, city);
    JsonUtils::ObjectGetMember(input, "ContinentCode", m_continentCode, continentCode);
    JsonUtils::ObjectGetMember(input, "CountryCode", m_countryCode, countryCode);
    JsonUtils::ObjectGetMember(input, "Latitude", m_latitude, latitude);
    JsonUtils::ObjectGetMember(input, "Longitude", m_longitude, longitude);
}

JsonValue LocationModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabLocationModel>(*this);
}

SubscriptionModel::SubscriptionModel() :
    PlayFabSubscriptionModel{}
{
}

SubscriptionModel::SubscriptionModel(const SubscriptionModel& src) :
    PlayFabSubscriptionModel{ src },
    m_status{ src.m_status },
    m_subscriptionId{ src.m_subscriptionId },
    m_subscriptionItemId{ src.m_subscriptionItemId },
    m_subscriptionProvider{ src.m_subscriptionProvider }
{
    status = m_status ? m_status.operator->() : nullptr;
    subscriptionId = m_subscriptionId.empty() ? nullptr : m_subscriptionId.data();
    subscriptionItemId = m_subscriptionItemId.empty() ? nullptr : m_subscriptionItemId.data();
    subscriptionProvider = m_subscriptionProvider.empty() ? nullptr : m_subscriptionProvider.data();
}

SubscriptionModel::SubscriptionModel(SubscriptionModel&& src) :
    PlayFabSubscriptionModel{ src },
    m_status{ std::move(src.m_status) },
    m_subscriptionId{ std::move(src.m_subscriptionId) },
    m_subscriptionItemId{ std::move(src.m_subscriptionItemId) },
    m_subscriptionProvider{ std::move(src.m_subscriptionProvider) }
{
    status = m_status ? m_status.operator->() : nullptr;
    subscriptionId = m_subscriptionId.empty() ? nullptr : m_subscriptionId.data();
    subscriptionItemId = m_subscriptionItemId.empty() ? nullptr : m_subscriptionItemId.data();
    subscriptionProvider = m_subscriptionProvider.empty() ? nullptr : m_subscriptionProvider.data();
}

SubscriptionModel::SubscriptionModel(const PlayFabSubscriptionModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SubscriptionModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Expiration", expiration, true);
    JsonUtils::ObjectGetMember(input, "InitialSubscriptionTime", initialSubscriptionTime, true);
    JsonUtils::ObjectGetMember(input, "IsActive", isActive);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "SubscriptionId", m_subscriptionId, subscriptionId);
    JsonUtils::ObjectGetMember(input, "SubscriptionItemId", m_subscriptionItemId, subscriptionItemId);
    JsonUtils::ObjectGetMember(input, "SubscriptionProvider", m_subscriptionProvider, subscriptionProvider);
}

JsonValue SubscriptionModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabSubscriptionModel>(*this);
}

MembershipModel::MembershipModel() :
    PlayFabMembershipModel{}
{
}

MembershipModel::MembershipModel(const MembershipModel& src) :
    PlayFabMembershipModel{ src },
    m_membershipId{ src.m_membershipId },
    m_overrideExpiration{ src.m_overrideExpiration },
    m_subscriptions{ src.m_subscriptions }
{
    membershipId = m_membershipId.empty() ? nullptr : m_membershipId.data();
    overrideExpiration = m_overrideExpiration ? m_overrideExpiration.operator->() : nullptr;
    subscriptions = m_subscriptions.Empty() ? nullptr : m_subscriptions.Data();
}

MembershipModel::MembershipModel(MembershipModel&& src) :
    PlayFabMembershipModel{ src },
    m_membershipId{ std::move(src.m_membershipId) },
    m_overrideExpiration{ std::move(src.m_overrideExpiration) },
    m_subscriptions{ std::move(src.m_subscriptions) }
{
    membershipId = m_membershipId.empty() ? nullptr : m_membershipId.data();
    overrideExpiration = m_overrideExpiration ? m_overrideExpiration.operator->() : nullptr;
    subscriptions = m_subscriptions.Empty() ? nullptr : m_subscriptions.Data();
}

MembershipModel::MembershipModel(const PlayFabMembershipModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MembershipModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsActive", isActive);
    JsonUtils::ObjectGetMember(input, "MembershipExpiration", membershipExpiration, true);
    JsonUtils::ObjectGetMember(input, "MembershipId", m_membershipId, membershipId);
    JsonUtils::ObjectGetMember(input, "OverrideExpiration", m_overrideExpiration, overrideExpiration, true);
    JsonUtils::ObjectGetMember(input, "Subscriptions", m_subscriptions, subscriptions, subscriptionsCount);
}

JsonValue MembershipModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMembershipModel>(*this);
}

PushNotificationRegistrationModel::PushNotificationRegistrationModel() :
    PlayFabPushNotificationRegistrationModel{}
{
}

PushNotificationRegistrationModel::PushNotificationRegistrationModel(const PushNotificationRegistrationModel& src) :
    PlayFabPushNotificationRegistrationModel{ src },
    m_notificationEndpointARN{ src.m_notificationEndpointARN },
    m_platform{ src.m_platform }
{
    notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
}

PushNotificationRegistrationModel::PushNotificationRegistrationModel(PushNotificationRegistrationModel&& src) :
    PlayFabPushNotificationRegistrationModel{ src },
    m_notificationEndpointARN{ std::move(src.m_notificationEndpointARN) },
    m_platform{ std::move(src.m_platform) }
{
    notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
}

PushNotificationRegistrationModel::PushNotificationRegistrationModel(const PlayFabPushNotificationRegistrationModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationRegistrationModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NotificationEndpointARN", m_notificationEndpointARN, notificationEndpointARN);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
}

JsonValue PushNotificationRegistrationModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabPushNotificationRegistrationModel>(*this);
}

StatisticModel::StatisticModel() :
    PlayFabStatisticModel{}
{
}

StatisticModel::StatisticModel(const StatisticModel& src) :
    PlayFabStatisticModel{ src },
    m_name{ src.m_name }
{
    name = m_name.empty() ? nullptr : m_name.data();
}

StatisticModel::StatisticModel(StatisticModel&& src) :
    PlayFabStatisticModel{ src },
    m_name{ std::move(src.m_name) }
{
    name = m_name.empty() ? nullptr : m_name.data();
}

StatisticModel::StatisticModel(const PlayFabStatisticModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StatisticModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Value", value);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue StatisticModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabStatisticModel>(*this);
}

size_t StatisticModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabStatisticModel) };
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void StatisticModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabStatisticModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabStatisticModel);
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

TagModel::TagModel() :
    PlayFabTagModel{}
{
}

TagModel::TagModel(const TagModel& src) :
    PlayFabTagModel{ src },
    m_tagValue{ src.m_tagValue }
{
    tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
}

TagModel::TagModel(TagModel&& src) :
    PlayFabTagModel{ src },
    m_tagValue{ std::move(src.m_tagValue) }
{
    tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
}

TagModel::TagModel(const PlayFabTagModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TagModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TagValue", m_tagValue, tagValue);
}

JsonValue TagModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabTagModel>(*this);
}

size_t TagModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabTagModel) };
    serializedSize += (m_tagValue.size() + 1);
    return serializedSize;
}

void TagModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabTagModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabTagModel);
    memcpy(stringBuffer, m_tagValue.data(), m_tagValue.size() + 1);
    serializedStruct->tagValue = stringBuffer;
    stringBuffer += m_tagValue.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ValueToDateModel::ValueToDateModel() :
    PlayFabValueToDateModel{}
{
}

ValueToDateModel::ValueToDateModel(const ValueToDateModel& src) :
    PlayFabValueToDateModel{ src },
    m_currency{ src.m_currency },
    m_totalValueAsDecimal{ src.m_totalValueAsDecimal }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    totalValueAsDecimal = m_totalValueAsDecimal.empty() ? nullptr : m_totalValueAsDecimal.data();
}

ValueToDateModel::ValueToDateModel(ValueToDateModel&& src) :
    PlayFabValueToDateModel{ src },
    m_currency{ std::move(src.m_currency) },
    m_totalValueAsDecimal{ std::move(src.m_totalValueAsDecimal) }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    totalValueAsDecimal = m_totalValueAsDecimal.empty() ? nullptr : m_totalValueAsDecimal.data();
}

ValueToDateModel::ValueToDateModel(const PlayFabValueToDateModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValueToDateModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Currency", m_currency, currency);
    JsonUtils::ObjectGetMember(input, "TotalValue", totalValue);
    JsonUtils::ObjectGetMember(input, "TotalValueAsDecimal", m_totalValueAsDecimal, totalValueAsDecimal);
}

JsonValue ValueToDateModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabValueToDateModel>(*this);
}

size_t ValueToDateModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabValueToDateModel) };
    serializedSize += (m_currency.size() + 1);
    serializedSize += (m_totalValueAsDecimal.size() + 1);
    return serializedSize;
}

void ValueToDateModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabValueToDateModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabValueToDateModel);
    memcpy(stringBuffer, m_currency.data(), m_currency.size() + 1);
    serializedStruct->currency = stringBuffer;
    stringBuffer += m_currency.size() + 1;
    memcpy(stringBuffer, m_totalValueAsDecimal.data(), m_totalValueAsDecimal.size() + 1);
    serializedStruct->totalValueAsDecimal = stringBuffer;
    stringBuffer += m_totalValueAsDecimal.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PlayerProfileModel::PlayerProfileModel() :
    PlayFabPlayerProfileModel{}
{
}

PlayerProfileModel::PlayerProfileModel(const PlayerProfileModel& src) :
    PlayFabPlayerProfileModel{ src },
    m_adCampaignAttributions{ src.m_adCampaignAttributions },
    m_avatarUrl{ src.m_avatarUrl },
    m_bannedUntil{ src.m_bannedUntil },
    m_contactEmailAddresses{ src.m_contactEmailAddresses },
    m_created{ src.m_created },
    m_displayName{ src.m_displayName },
    m_experimentVariants{ src.m_experimentVariants },
    m_lastLogin{ src.m_lastLogin },
    m_linkedAccounts{ src.m_linkedAccounts },
    m_locations{ src.m_locations },
    m_memberships{ src.m_memberships },
    m_origination{ src.m_origination },
    m_playerId{ src.m_playerId },
    m_publisherId{ src.m_publisherId },
    m_pushNotificationRegistrations{ src.m_pushNotificationRegistrations },
    m_statistics{ src.m_statistics },
    m_tags{ src.m_tags },
    m_titleId{ src.m_titleId },
    m_totalValueToDateInUSD{ src.m_totalValueToDateInUSD },
    m_valuesToDate{ src.m_valuesToDate }
{
    adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
    contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
    created = m_created ? m_created.operator->() : nullptr;
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    experimentVariants = m_experimentVariants.Empty() ? nullptr : m_experimentVariants.Data();
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
    locations = m_locations.Empty() ? nullptr : m_locations.Data();
    memberships = m_memberships.Empty() ? nullptr : m_memberships.Data();
    origination = m_origination ? m_origination.operator->() : nullptr;
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
    pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
    valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
}

PlayerProfileModel::PlayerProfileModel(PlayerProfileModel&& src) :
    PlayFabPlayerProfileModel{ src },
    m_adCampaignAttributions{ std::move(src.m_adCampaignAttributions) },
    m_avatarUrl{ std::move(src.m_avatarUrl) },
    m_bannedUntil{ std::move(src.m_bannedUntil) },
    m_contactEmailAddresses{ std::move(src.m_contactEmailAddresses) },
    m_created{ std::move(src.m_created) },
    m_displayName{ std::move(src.m_displayName) },
    m_experimentVariants{ std::move(src.m_experimentVariants) },
    m_lastLogin{ std::move(src.m_lastLogin) },
    m_linkedAccounts{ std::move(src.m_linkedAccounts) },
    m_locations{ std::move(src.m_locations) },
    m_memberships{ std::move(src.m_memberships) },
    m_origination{ std::move(src.m_origination) },
    m_playerId{ std::move(src.m_playerId) },
    m_publisherId{ std::move(src.m_publisherId) },
    m_pushNotificationRegistrations{ std::move(src.m_pushNotificationRegistrations) },
    m_statistics{ std::move(src.m_statistics) },
    m_tags{ std::move(src.m_tags) },
    m_titleId{ std::move(src.m_titleId) },
    m_totalValueToDateInUSD{ std::move(src.m_totalValueToDateInUSD) },
    m_valuesToDate{ std::move(src.m_valuesToDate) }
{
    adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
    contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
    created = m_created ? m_created.operator->() : nullptr;
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    experimentVariants = m_experimentVariants.Empty() ? nullptr : m_experimentVariants.Data();
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
    locations = m_locations.Empty() ? nullptr : m_locations.Data();
    memberships = m_memberships.Empty() ? nullptr : m_memberships.Data();
    origination = m_origination ? m_origination.operator->() : nullptr;
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
    pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
    valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
}

PlayerProfileModel::PlayerProfileModel(const PlayFabPlayerProfileModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerProfileModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdCampaignAttributions", m_adCampaignAttributions, adCampaignAttributions, adCampaignAttributionsCount);
    JsonUtils::ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
    JsonUtils::ObjectGetMember(input, "BannedUntil", m_bannedUntil, bannedUntil, true);
    JsonUtils::ObjectGetMember(input, "ContactEmailAddresses", m_contactEmailAddresses, contactEmailAddresses, contactEmailAddressesCount);
    JsonUtils::ObjectGetMember(input, "Created", m_created, created, true);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "ExperimentVariants", m_experimentVariants, experimentVariants, experimentVariantsCount);
    JsonUtils::ObjectGetMember(input, "LastLogin", m_lastLogin, lastLogin, true);
    JsonUtils::ObjectGetMember(input, "LinkedAccounts", m_linkedAccounts, linkedAccounts, linkedAccountsCount);
    JsonUtils::ObjectGetMember(input, "Locations", m_locations, locations, locationsCount);
    JsonUtils::ObjectGetMember(input, "Memberships", m_memberships, memberships, membershipsCount);
    JsonUtils::ObjectGetMember(input, "Origination", m_origination, origination);
    JsonUtils::ObjectGetMember(input, "PlayerId", m_playerId, playerId);
    JsonUtils::ObjectGetMember(input, "PublisherId", m_publisherId, publisherId);
    JsonUtils::ObjectGetMember(input, "PushNotificationRegistrations", m_pushNotificationRegistrations, pushNotificationRegistrations, pushNotificationRegistrationsCount);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "TotalValueToDateInUSD", m_totalValueToDateInUSD, totalValueToDateInUSD);
    JsonUtils::ObjectGetMember(input, "ValuesToDate", m_valuesToDate, valuesToDate, valuesToDateCount);
}

JsonValue PlayerProfileModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabPlayerProfileModel>(*this);
}

StatisticValue::StatisticValue() :
    PlayFabStatisticValue{}
{
}

StatisticValue::StatisticValue(const StatisticValue& src) :
    PlayFabStatisticValue{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StatisticValue::StatisticValue(StatisticValue&& src) :
    PlayFabStatisticValue{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StatisticValue::StatisticValue(const PlayFabStatisticValue& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StatisticValue::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Value", value);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue StatisticValue::ToJson() const
{
    return JsonUtils::ToJson<PlayFabStatisticValue>(*this);
}

size_t StatisticValue::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabStatisticValue) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void StatisticValue::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabStatisticValue{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabStatisticValue);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserDataRecord::UserDataRecord() :
    PlayFabUserDataRecord{}
{
}

UserDataRecord::UserDataRecord(const UserDataRecord& src) :
    PlayFabUserDataRecord{ src },
    m_permission{ src.m_permission },
    m_value{ src.m_value }
{
    permission = m_permission ? m_permission.operator->() : nullptr;
    value = m_value.empty() ? nullptr : m_value.data();
}

UserDataRecord::UserDataRecord(UserDataRecord&& src) :
    PlayFabUserDataRecord{ src },
    m_permission{ std::move(src.m_permission) },
    m_value{ std::move(src.m_value) }
{
    permission = m_permission ? m_permission.operator->() : nullptr;
    value = m_value.empty() ? nullptr : m_value.data();
}

UserDataRecord::UserDataRecord(const PlayFabUserDataRecord& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserDataRecord::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LastUpdated", lastUpdated, true);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue UserDataRecord::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserDataRecord>(*this);
}

VirtualCurrencyRechargeTime::VirtualCurrencyRechargeTime() :
    PlayFabVirtualCurrencyRechargeTime{}
{
}


VirtualCurrencyRechargeTime::VirtualCurrencyRechargeTime(const PlayFabVirtualCurrencyRechargeTime& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void VirtualCurrencyRechargeTime::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "RechargeMax", rechargeMax);
    JsonUtils::ObjectGetMember(input, "RechargeTime", rechargeTime, true);
    JsonUtils::ObjectGetMember(input, "SecondsToRecharge", secondsToRecharge);
}

JsonValue VirtualCurrencyRechargeTime::ToJson() const
{
    return JsonUtils::ToJson<PlayFabVirtualCurrencyRechargeTime>(*this);
}

size_t VirtualCurrencyRechargeTime::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabVirtualCurrencyRechargeTime) };
    return serializedSize;
}

void VirtualCurrencyRechargeTime::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabVirtualCurrencyRechargeTime{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabVirtualCurrencyRechargeTime);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerCombinedInfoResultPayload::GetPlayerCombinedInfoResultPayload() :
    PlayFabGetPlayerCombinedInfoResultPayload{}
{
}

GetPlayerCombinedInfoResultPayload::GetPlayerCombinedInfoResultPayload(const GetPlayerCombinedInfoResultPayload& src) :
    PlayFabGetPlayerCombinedInfoResultPayload{ src },
    m_accountInfo{ src.m_accountInfo },
    m_characterInventories{ src.m_characterInventories },
    m_characterList{ src.m_characterList },
    m_playerProfile{ src.m_playerProfile },
    m_playerStatistics{ src.m_playerStatistics },
    m_titleData{ src.m_titleData },
    m_userData{ src.m_userData },
    m_userInventory{ src.m_userInventory },
    m_userReadOnlyData{ src.m_userReadOnlyData },
    m_userVirtualCurrency{ src.m_userVirtualCurrency },
    m_userVirtualCurrencyRechargeTimes{ src.m_userVirtualCurrencyRechargeTimes }
{
    accountInfo = m_accountInfo ? m_accountInfo.operator->() : nullptr;
    characterInventories = m_characterInventories.Empty() ? nullptr : m_characterInventories.Data();
    characterList = m_characterList.Empty() ? nullptr : m_characterList.Data();
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
    playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
    titleData = m_titleData.Empty() ? nullptr : m_titleData.Data();
    userData = m_userData.Empty() ? nullptr : m_userData.Data();
    userInventory = m_userInventory.Empty() ? nullptr : m_userInventory.Data();
    userReadOnlyData = m_userReadOnlyData.Empty() ? nullptr : m_userReadOnlyData.Data();
    userVirtualCurrency = m_userVirtualCurrency.Empty() ? nullptr : m_userVirtualCurrency.Data();
    userVirtualCurrencyRechargeTimes = m_userVirtualCurrencyRechargeTimes.Empty() ? nullptr : m_userVirtualCurrencyRechargeTimes.Data();
}

GetPlayerCombinedInfoResultPayload::GetPlayerCombinedInfoResultPayload(GetPlayerCombinedInfoResultPayload&& src) :
    PlayFabGetPlayerCombinedInfoResultPayload{ src },
    m_accountInfo{ std::move(src.m_accountInfo) },
    m_characterInventories{ std::move(src.m_characterInventories) },
    m_characterList{ std::move(src.m_characterList) },
    m_playerProfile{ std::move(src.m_playerProfile) },
    m_playerStatistics{ std::move(src.m_playerStatistics) },
    m_titleData{ std::move(src.m_titleData) },
    m_userData{ std::move(src.m_userData) },
    m_userInventory{ std::move(src.m_userInventory) },
    m_userReadOnlyData{ std::move(src.m_userReadOnlyData) },
    m_userVirtualCurrency{ std::move(src.m_userVirtualCurrency) },
    m_userVirtualCurrencyRechargeTimes{ std::move(src.m_userVirtualCurrencyRechargeTimes) }
{
    accountInfo = m_accountInfo ? m_accountInfo.operator->() : nullptr;
    characterInventories = m_characterInventories.Empty() ? nullptr : m_characterInventories.Data();
    characterList = m_characterList.Empty() ? nullptr : m_characterList.Data();
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
    playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
    titleData = m_titleData.Empty() ? nullptr : m_titleData.Data();
    userData = m_userData.Empty() ? nullptr : m_userData.Data();
    userInventory = m_userInventory.Empty() ? nullptr : m_userInventory.Data();
    userReadOnlyData = m_userReadOnlyData.Empty() ? nullptr : m_userReadOnlyData.Data();
    userVirtualCurrency = m_userVirtualCurrency.Empty() ? nullptr : m_userVirtualCurrency.Data();
    userVirtualCurrencyRechargeTimes = m_userVirtualCurrencyRechargeTimes.Empty() ? nullptr : m_userVirtualCurrencyRechargeTimes.Data();
}

GetPlayerCombinedInfoResultPayload::GetPlayerCombinedInfoResultPayload(const PlayFabGetPlayerCombinedInfoResultPayload& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerCombinedInfoResultPayload::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccountInfo", m_accountInfo, accountInfo);
    JsonUtils::ObjectGetMember(input, "CharacterInventories", m_characterInventories, characterInventories, characterInventoriesCount);
    JsonUtils::ObjectGetMember(input, "CharacterList", m_characterList, characterList, characterListCount);
    JsonUtils::ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
    JsonUtils::ObjectGetMember(input, "PlayerStatistics", m_playerStatistics, playerStatistics, playerStatisticsCount);
    JsonUtils::ObjectGetMember(input, "TitleData", m_titleData, titleData, titleDataCount);
    JsonUtils::ObjectGetMember(input, "UserData", m_userData, userData, userDataCount);
    JsonUtils::ObjectGetMember(input, "UserDataVersion", userDataVersion);
    JsonUtils::ObjectGetMember(input, "UserInventory", m_userInventory, userInventory, userInventoryCount);
    JsonUtils::ObjectGetMember(input, "UserReadOnlyData", m_userReadOnlyData, userReadOnlyData, userReadOnlyDataCount);
    JsonUtils::ObjectGetMember(input, "UserReadOnlyDataVersion", userReadOnlyDataVersion);
    JsonUtils::ObjectGetMember(input, "UserVirtualCurrency", m_userVirtualCurrency, userVirtualCurrency, userVirtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "UserVirtualCurrencyRechargeTimes", m_userVirtualCurrencyRechargeTimes, userVirtualCurrencyRechargeTimes, userVirtualCurrencyRechargeTimesCount);
}

JsonValue GetPlayerCombinedInfoResultPayload::ToJson() const
{
    return JsonUtils::ToJson<PlayFabGetPlayerCombinedInfoResultPayload>(*this);
}

UserSettings::UserSettings() :
    PlayFabUserSettings{}
{
}


UserSettings::UserSettings(const PlayFabUserSettings& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserSettings::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GatherDeviceInfo", gatherDeviceInfo);
    JsonUtils::ObjectGetMember(input, "GatherFocusInfo", gatherFocusInfo);
    JsonUtils::ObjectGetMember(input, "NeedsAttribution", needsAttribution);
}

JsonValue UserSettings::ToJson() const
{
    return JsonUtils::ToJson<PlayFabUserSettings>(*this);
}

size_t UserSettings::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabUserSettings) };
    return serializedSize;
}

void UserSettings::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabUserSettings{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabUserSettings);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

Variable::Variable() :
    PlayFabVariable{}
{
}

Variable::Variable(const Variable& src) :
    PlayFabVariable{ src },
    m_name{ src.m_name },
    m_value{ src.m_value }
{
    name = m_name.empty() ? nullptr : m_name.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

Variable::Variable(Variable&& src) :
    PlayFabVariable{ src },
    m_name{ std::move(src.m_name) },
    m_value{ std::move(src.m_value) }
{
    name = m_name.empty() ? nullptr : m_name.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

Variable::Variable(const PlayFabVariable& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Variable::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue Variable::ToJson() const
{
    return JsonUtils::ToJson<PlayFabVariable>(*this);
}

size_t Variable::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabVariable) };
    serializedSize += (m_name.size() + 1);
    serializedSize += (m_value.size() + 1);
    return serializedSize;
}

void Variable::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabVariable{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabVariable);
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
    serializedStruct->value = stringBuffer;
    stringBuffer += m_value.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

TreatmentAssignment::TreatmentAssignment() :
    PlayFabTreatmentAssignment{}
{
}

TreatmentAssignment::TreatmentAssignment(const TreatmentAssignment& src) :
    PlayFabTreatmentAssignment{ src },
    m_variables{ src.m_variables },
    m_variants{ src.m_variants }
{
    variables = m_variables.Empty() ? nullptr : m_variables.Data();
    variants = m_variants.Empty() ? nullptr : m_variants.Data();
}

TreatmentAssignment::TreatmentAssignment(TreatmentAssignment&& src) :
    PlayFabTreatmentAssignment{ src },
    m_variables{ std::move(src.m_variables) },
    m_variants{ std::move(src.m_variants) }
{
    variables = m_variables.Empty() ? nullptr : m_variables.Data();
    variants = m_variants.Empty() ? nullptr : m_variants.Data();
}

TreatmentAssignment::TreatmentAssignment(const PlayFabTreatmentAssignment& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TreatmentAssignment::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Variables", m_variables, variables, variablesCount);
    JsonUtils::ObjectGetMember(input, "Variants", m_variants, variants, variantsCount);
}

JsonValue TreatmentAssignment::ToJson() const
{
    return JsonUtils::ToJson<PlayFabTreatmentAssignment>(*this);
}

LoginResult::LoginResult()
{
}

LoginResult::LoginResult(const LoginResult& src) :
    entityToken{ src.entityToken },
    infoResultPayload{ src.infoResultPayload },
    lastLoginTime{ src.lastLoginTime },
    newlyCreated{ src.newlyCreated },
    playFabId{ src.playFabId },
    sessionTicket{ src.sessionTicket },
    settingsForUser{ src.settingsForUser },
    treatmentAssignment{ src.treatmentAssignment }
{
}

LoginResult::LoginResult(LoginResult&& src) :
    entityToken{ std::move(src.entityToken) },
    infoResultPayload{ std::move(src.infoResultPayload) },
    lastLoginTime{ std::move(src.lastLoginTime) },
    newlyCreated{ std::move(src.newlyCreated) },
    playFabId{ std::move(src.playFabId) },
    sessionTicket{ std::move(src.sessionTicket) },
    settingsForUser{ std::move(src.settingsForUser) },
    treatmentAssignment{ std::move(src.treatmentAssignment) }
{
}

void LoginResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EntityToken", entityToken);
    JsonUtils::ObjectGetMember(input, "InfoResultPayload", infoResultPayload);
    JsonUtils::ObjectGetMember(input, "LastLoginTime", lastLoginTime, true);
    JsonUtils::ObjectGetMember(input, "NewlyCreated", newlyCreated);
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    JsonUtils::ObjectGetMember(input, "SessionTicket", sessionTicket);
    JsonUtils::ObjectGetMember(input, "SettingsForUser", settingsForUser);
    JsonUtils::ObjectGetMember(input, "TreatmentAssignment", treatmentAssignment);
}

JsonValue LoginResult::ToJson() const
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EntityToken", entityToken);
    JsonUtils::ObjectAddMember(output, "InfoResultPayload", infoResultPayload);
    JsonUtils::ObjectAddMember(output, "LastLoginTime", lastLoginTime, true);
    JsonUtils::ObjectAddMember(output, "NewlyCreated", newlyCreated);
    JsonUtils::ObjectAddMember(output, "PlayFabId", playFabId);
    JsonUtils::ObjectAddMember(output, "SessionTicket", sessionTicket);
    JsonUtils::ObjectAddMember(output, "SettingsForUser", settingsForUser);
    JsonUtils::ObjectAddMember(output, "TreatmentAssignment", treatmentAssignment);
    return output;
}


namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabEntityKey& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Type", input.type);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabEntityTokenResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "EntityToken", input.entityToken);
    JsonUtils::ObjectAddMember(output, "TokenExpiration", input.tokenExpiration, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserAndroidDeviceInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserAppleIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AppleSubjectId", input.appleSubjectId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserCustomIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserFacebookInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookId", input.facebookId);
    JsonUtils::ObjectAddMember(output, "FullName", input.fullName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserFacebookInstantGamesIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserGameCenterInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserGoogleInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GoogleEmail", input.googleEmail);
    JsonUtils::ObjectAddMember(output, "GoogleGender", input.googleGender);
    JsonUtils::ObjectAddMember(output, "GoogleId", input.googleId);
    JsonUtils::ObjectAddMember(output, "GoogleLocale", input.googleLocale);
    JsonUtils::ObjectAddMember(output, "GoogleName", input.googleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserIosDeviceInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IosDeviceId", input.iosDeviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserKongregateInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
    JsonUtils::ObjectAddMember(output, "KongregateName", input.kongregateName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserNintendoSwitchAccountIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NintendoSwitchAccountSubjectId", input.nintendoSwitchAccountSubjectId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserNintendoSwitchDeviceIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserOpenIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "Issuer", input.issuer);
    JsonUtils::ObjectAddMember(output, "Subject", input.subject);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserPrivateAccountInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserPsnInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PsnAccountId", input.psnAccountId);
    JsonUtils::ObjectAddMember(output, "PsnOnlineId", input.psnOnlineId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserSteamInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SteamActivationStatus", input.steamActivationStatus);
    JsonUtils::ObjectAddMember(output, "SteamCountry", input.steamCountry);
    JsonUtils::ObjectAddMember(output, "SteamCurrency", input.steamCurrency);
    JsonUtils::ObjectAddMember(output, "SteamId", input.steamId);
    JsonUtils::ObjectAddMember(output, "SteamName", input.steamName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserTitleInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "FirstLogin", input.firstLogin, true);
    JsonUtils::ObjectAddMember(output, "isBanned", input.isBanned);
    JsonUtils::ObjectAddMember(output, "LastLogin", input.lastLogin, true);
    JsonUtils::ObjectAddMember(output, "Origination", input.origination);
    JsonUtils::ObjectAddMember(output, "TitlePlayerAccount", input.titlePlayerAccount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserTwitchInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TwitchId", input.twitchId);
    JsonUtils::ObjectAddMember(output, "TwitchUserName", input.twitchUserName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserWindowsHelloInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "WindowsHelloDeviceName", input.windowsHelloDeviceName);
    JsonUtils::ObjectAddMember(output, "WindowsHelloPublicKeyHash", input.windowsHelloPublicKeyHash);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserXboxInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "XboxUserId", input.xboxUserId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserAccountInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDeviceInfo", input.androidDeviceInfo);
    JsonUtils::ObjectAddMember(output, "AppleAccountInfo", input.appleAccountInfo);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "CustomIdInfo", input.customIdInfo);
    JsonUtils::ObjectAddMember(output, "FacebookInfo", input.facebookInfo);
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesIdInfo", input.facebookInstantGamesIdInfo);
    JsonUtils::ObjectAddMember(output, "GameCenterInfo", input.gameCenterInfo);
    JsonUtils::ObjectAddMember(output, "GoogleInfo", input.googleInfo);
    JsonUtils::ObjectAddMember(output, "IosDeviceInfo", input.iosDeviceInfo);
    JsonUtils::ObjectAddMember(output, "KongregateInfo", input.kongregateInfo);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchAccountInfo", input.nintendoSwitchAccountInfo);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceIdInfo", input.nintendoSwitchDeviceIdInfo);
    JsonUtils::ObjectAddMember(output, "OpenIdInfo", input.openIdInfo, input.openIdInfoCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "PrivateInfo", input.privateInfo);
    JsonUtils::ObjectAddMember(output, "PsnInfo", input.psnInfo);
    JsonUtils::ObjectAddMember(output, "SteamInfo", input.steamInfo);
    JsonUtils::ObjectAddMember(output, "TitleInfo", input.titleInfo);
    JsonUtils::ObjectAddMember(output, "TwitchInfo", input.twitchInfo);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    JsonUtils::ObjectAddMember(output, "WindowsHelloInfo", input.windowsHelloInfo);
    JsonUtils::ObjectAddMember(output, "XboxInfo", input.xboxInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabItemInstance& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "BundleContents", input.bundleContents, input.bundleContentsCount);
    JsonUtils::ObjectAddMember(output, "BundleParent", input.bundleParent);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData, input.customDataCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Expiration", input.expiration, true);
    JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
    JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
    JsonUtils::ObjectAddMember(output, "UnitCurrency", input.unitCurrency);
    JsonUtils::ObjectAddMember(output, "UnitPrice", input.unitPrice);
    JsonUtils::ObjectAddMember(output, "UsesIncrementedBy", input.usesIncrementedBy);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCharacterInventory& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCharacterResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdCampaignAttributionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
    JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabContactEmailInfoModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabLinkedPlatformAccountModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    JsonUtils::ObjectAddMember(output, "PlatformUserId", input.platformUserId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabLocationModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "City", input.city);
    JsonUtils::ObjectAddMember(output, "ContinentCode", input.continentCode);
    JsonUtils::ObjectAddMember(output, "CountryCode", input.countryCode);
    JsonUtils::ObjectAddMember(output, "Latitude", input.latitude);
    JsonUtils::ObjectAddMember(output, "Longitude", input.longitude);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabSubscriptionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Expiration", input.expiration, true);
    JsonUtils::ObjectAddMember(output, "InitialSubscriptionTime", input.initialSubscriptionTime, true);
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "SubscriptionId", input.subscriptionId);
    JsonUtils::ObjectAddMember(output, "SubscriptionItemId", input.subscriptionItemId);
    JsonUtils::ObjectAddMember(output, "SubscriptionProvider", input.subscriptionProvider);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabMembershipModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMember(output, "MembershipExpiration", input.membershipExpiration, true);
    JsonUtils::ObjectAddMember(output, "MembershipId", input.membershipId);
    JsonUtils::ObjectAddMember(output, "OverrideExpiration", input.overrideExpiration, true);
    JsonUtils::ObjectAddMember(output, "Subscriptions", input.subscriptions, input.subscriptionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabPushNotificationRegistrationModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabStatisticModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabTagModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TagValue", input.tagValue);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabValueToDateModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Currency", input.currency);
    JsonUtils::ObjectAddMember(output, "TotalValue", input.totalValue);
    JsonUtils::ObjectAddMember(output, "TotalValueAsDecimal", input.totalValueAsDecimal);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabPlayerProfileModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdCampaignAttributions", input.adCampaignAttributions, input.adCampaignAttributionsCount);
    JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
    JsonUtils::ObjectAddMember(output, "BannedUntil", input.bannedUntil, true);
    JsonUtils::ObjectAddMember(output, "ContactEmailAddresses", input.contactEmailAddresses, input.contactEmailAddressesCount);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "ExperimentVariants", input.experimentVariants, input.experimentVariantsCount);
    JsonUtils::ObjectAddMember(output, "LastLogin", input.lastLogin, true);
    JsonUtils::ObjectAddMember(output, "LinkedAccounts", input.linkedAccounts, input.linkedAccountsCount);
    JsonUtils::ObjectAddMember(output, "Locations", input.locations, input.locationsCount);
    JsonUtils::ObjectAddMember(output, "Memberships", input.memberships, input.membershipsCount);
    JsonUtils::ObjectAddMember(output, "Origination", input.origination);
    JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
    JsonUtils::ObjectAddMember(output, "PublisherId", input.publisherId);
    JsonUtils::ObjectAddMember(output, "PushNotificationRegistrations", input.pushNotificationRegistrations, input.pushNotificationRegistrationsCount);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TotalValueToDateInUSD", input.totalValueToDateInUSD);
    JsonUtils::ObjectAddMember(output, "ValuesToDate", input.valuesToDate, input.valuesToDateCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabStatisticValue& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserDataRecord& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LastUpdated", input.lastUpdated, true);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabVirtualCurrencyRechargeTime& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "RechargeMax", input.rechargeMax);
    JsonUtils::ObjectAddMember(output, "RechargeTime", input.rechargeTime, true);
    JsonUtils::ObjectAddMember(output, "SecondsToRecharge", input.secondsToRecharge);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabGetPlayerCombinedInfoResultPayload& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccountInfo", input.accountInfo);
    JsonUtils::ObjectAddMember(output, "CharacterInventories", input.characterInventories, input.characterInventoriesCount);
    JsonUtils::ObjectAddMember(output, "CharacterList", input.characterList, input.characterListCount);
    JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
    JsonUtils::ObjectAddMember(output, "PlayerStatistics", input.playerStatistics, input.playerStatisticsCount);
    JsonUtils::ObjectAddMember(output, "TitleData", input.titleData, input.titleDataCount);
    JsonUtils::ObjectAddMember(output, "UserData", input.userData, input.userDataCount);
    JsonUtils::ObjectAddMember(output, "UserDataVersion", input.userDataVersion);
    JsonUtils::ObjectAddMember(output, "UserInventory", input.userInventory, input.userInventoryCount);
    JsonUtils::ObjectAddMember(output, "UserReadOnlyData", input.userReadOnlyData, input.userReadOnlyDataCount);
    JsonUtils::ObjectAddMember(output, "UserReadOnlyDataVersion", input.userReadOnlyDataVersion);
    JsonUtils::ObjectAddMember(output, "UserVirtualCurrency", input.userVirtualCurrency, input.userVirtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "UserVirtualCurrencyRechargeTimes", input.userVirtualCurrencyRechargeTimes, input.userVirtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabUserSettings& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GatherDeviceInfo", input.gatherDeviceInfo);
    JsonUtils::ObjectAddMember(output, "GatherFocusInfo", input.gatherFocusInfo);
    JsonUtils::ObjectAddMember(output, "NeedsAttribution", input.needsAttribution);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabVariable& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabTreatmentAssignment& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Variables", input.variables, input.variablesCount);
    JsonUtils::ObjectAddMember(output, "Variants", input.variants, input.variantsCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
