#include "stdafx.h"
#include "AccountManagementDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace AccountManagementModels
{

BanRequest::BanRequest() :
    PFAccountManagementBanRequest{}
{
}

BanRequest::BanRequest(const BanRequest& src) :
    PFAccountManagementBanRequest{ src },
    m_durationInHours{ src.m_durationInHours },
    m_IPAddress{ src.m_IPAddress },
    m_MACAddress{ src.m_MACAddress },
    m_playFabId{ src.m_playFabId },
    m_reason{ src.m_reason }
{
    durationInHours = m_durationInHours ? m_durationInHours.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanRequest::BanRequest(BanRequest&& src) :
    PFAccountManagementBanRequest{ src },
    m_durationInHours{ std::move(src.m_durationInHours) },
    m_IPAddress{ std::move(src.m_IPAddress) },
    m_MACAddress{ std::move(src.m_MACAddress) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_reason{ std::move(src.m_reason) }
{
    durationInHours = m_durationInHours ? m_durationInHours.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanRequest::BanRequest(const PFAccountManagementBanRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DurationInHours", m_durationInHours, durationInHours);
    JsonUtils::ObjectGetMember(input, "IPAddress", m_IPAddress, IPAddress);
    JsonUtils::ObjectGetMember(input, "MACAddress", m_MACAddress, MACAddress);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue BanRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementBanRequest>(*this);
}

BanUsersRequest::BanUsersRequest() :
    PFAccountManagementBanUsersRequest{}
{
}

BanUsersRequest::BanUsersRequest(const BanUsersRequest& src) :
    PFAccountManagementBanUsersRequest{ src },
    m_bans{ src.m_bans },
    m_customTags{ src.m_customTags }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

BanUsersRequest::BanUsersRequest(BanUsersRequest&& src) :
    PFAccountManagementBanUsersRequest{ src },
    m_bans{ std::move(src.m_bans) },
    m_customTags{ std::move(src.m_customTags) }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

BanUsersRequest::BanUsersRequest(const PFAccountManagementBanUsersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanUsersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Bans", m_bans, bans, bansCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue BanUsersRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementBanUsersRequest>(*this);
}

BanInfo::BanInfo() :
    PFAccountManagementBanInfo{}
{
}

BanInfo::BanInfo(const BanInfo& src) :
    PFAccountManagementBanInfo{ src },
    m_banId{ src.m_banId },
    m_created{ src.m_created },
    m_expires{ src.m_expires },
    m_IPAddress{ src.m_IPAddress },
    m_MACAddress{ src.m_MACAddress },
    m_playFabId{ src.m_playFabId },
    m_reason{ src.m_reason }
{
    banId = m_banId.empty() ? nullptr : m_banId.data();
    created = m_created ? m_created.operator->() : nullptr;
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanInfo::BanInfo(BanInfo&& src) :
    PFAccountManagementBanInfo{ src },
    m_banId{ std::move(src.m_banId) },
    m_created{ std::move(src.m_created) },
    m_expires{ std::move(src.m_expires) },
    m_IPAddress{ std::move(src.m_IPAddress) },
    m_MACAddress{ std::move(src.m_MACAddress) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_reason{ std::move(src.m_reason) }
{
    banId = m_banId.empty() ? nullptr : m_banId.data();
    created = m_created ? m_created.operator->() : nullptr;
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanInfo::BanInfo(const PFAccountManagementBanInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Active", active);
    JsonUtils::ObjectGetMember(input, "BanId", m_banId, banId);
    JsonUtils::ObjectGetMember(input, "Created", m_created, created, true);
    JsonUtils::ObjectGetMember(input, "Expires", m_expires, expires, true);
    JsonUtils::ObjectGetMember(input, "IPAddress", m_IPAddress, IPAddress);
    JsonUtils::ObjectGetMember(input, "MACAddress", m_MACAddress, MACAddress);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue BanInfo::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementBanInfo>(*this);
}

BanUsersResult::BanUsersResult() :
    PFAccountManagementBanUsersResult{}
{
}

BanUsersResult::BanUsersResult(const BanUsersResult& src) :
    PFAccountManagementBanUsersResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

BanUsersResult::BanUsersResult(BanUsersResult&& src) :
    PFAccountManagementBanUsersResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

BanUsersResult::BanUsersResult(const PFAccountManagementBanUsersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanUsersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue BanUsersResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementBanUsersResult>(*this);
}

DeleteMasterPlayerAccountRequest::DeleteMasterPlayerAccountRequest() :
    PFAccountManagementDeleteMasterPlayerAccountRequest{}
{
}

DeleteMasterPlayerAccountRequest::DeleteMasterPlayerAccountRequest(const DeleteMasterPlayerAccountRequest& src) :
    PFAccountManagementDeleteMasterPlayerAccountRequest{ src },
    m_metaData{ src.m_metaData },
    m_playFabId{ src.m_playFabId }
{
    metaData = m_metaData.empty() ? nullptr : m_metaData.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeleteMasterPlayerAccountRequest::DeleteMasterPlayerAccountRequest(DeleteMasterPlayerAccountRequest&& src) :
    PFAccountManagementDeleteMasterPlayerAccountRequest{ src },
    m_metaData{ std::move(src.m_metaData) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    metaData = m_metaData.empty() ? nullptr : m_metaData.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeleteMasterPlayerAccountRequest::DeleteMasterPlayerAccountRequest(const PFAccountManagementDeleteMasterPlayerAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteMasterPlayerAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "MetaData", m_metaData, metaData);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue DeleteMasterPlayerAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementDeleteMasterPlayerAccountRequest>(*this);
}

size_t DeleteMasterPlayerAccountRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementDeleteMasterPlayerAccountRequest) };
    serializedSize += (m_metaData.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void DeleteMasterPlayerAccountRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementDeleteMasterPlayerAccountRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementDeleteMasterPlayerAccountRequest);
    memcpy(stringBuffer, m_metaData.data(), m_metaData.size() + 1);
    serializedStruct->metaData = stringBuffer;
    stringBuffer += m_metaData.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteMasterPlayerAccountResult::DeleteMasterPlayerAccountResult() :
    PFAccountManagementDeleteMasterPlayerAccountResult{}
{
}

DeleteMasterPlayerAccountResult::DeleteMasterPlayerAccountResult(const DeleteMasterPlayerAccountResult& src) :
    PFAccountManagementDeleteMasterPlayerAccountResult{ src },
    m_jobReceiptId{ src.m_jobReceiptId },
    m_titleIds{ src.m_titleIds }
{
    jobReceiptId = m_jobReceiptId.empty() ? nullptr : m_jobReceiptId.data();
    titleIds = m_titleIds.Empty() ? nullptr : m_titleIds.Data();
}

DeleteMasterPlayerAccountResult::DeleteMasterPlayerAccountResult(DeleteMasterPlayerAccountResult&& src) :
    PFAccountManagementDeleteMasterPlayerAccountResult{ src },
    m_jobReceiptId{ std::move(src.m_jobReceiptId) },
    m_titleIds{ std::move(src.m_titleIds) }
{
    jobReceiptId = m_jobReceiptId.empty() ? nullptr : m_jobReceiptId.data();
    titleIds = m_titleIds.Empty() ? nullptr : m_titleIds.Data();
}

DeleteMasterPlayerAccountResult::DeleteMasterPlayerAccountResult(const PFAccountManagementDeleteMasterPlayerAccountResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteMasterPlayerAccountResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "JobReceiptId", m_jobReceiptId, jobReceiptId);
    JsonUtils::ObjectGetMember(input, "TitleIds", m_titleIds, titleIds, titleIdsCount);
}

JsonValue DeleteMasterPlayerAccountResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementDeleteMasterPlayerAccountResult>(*this);
}

DeletePlayerRequest::DeletePlayerRequest() :
    PFAccountManagementDeletePlayerRequest{}
{
}

DeletePlayerRequest::DeletePlayerRequest(const DeletePlayerRequest& src) :
    PFAccountManagementDeletePlayerRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeletePlayerRequest::DeletePlayerRequest(DeletePlayerRequest&& src) :
    PFAccountManagementDeletePlayerRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeletePlayerRequest::DeletePlayerRequest(const PFAccountManagementDeletePlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeletePlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue DeletePlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementDeletePlayerRequest>(*this);
}

size_t DeletePlayerRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementDeletePlayerRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void DeletePlayerRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementDeletePlayerRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementDeletePlayerRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ExportMasterPlayerDataRequest::ExportMasterPlayerDataRequest() :
    PFAccountManagementExportMasterPlayerDataRequest{}
{
}

ExportMasterPlayerDataRequest::ExportMasterPlayerDataRequest(const ExportMasterPlayerDataRequest& src) :
    PFAccountManagementExportMasterPlayerDataRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ExportMasterPlayerDataRequest::ExportMasterPlayerDataRequest(ExportMasterPlayerDataRequest&& src) :
    PFAccountManagementExportMasterPlayerDataRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ExportMasterPlayerDataRequest::ExportMasterPlayerDataRequest(const PFAccountManagementExportMasterPlayerDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExportMasterPlayerDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ExportMasterPlayerDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementExportMasterPlayerDataRequest>(*this);
}

size_t ExportMasterPlayerDataRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementExportMasterPlayerDataRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void ExportMasterPlayerDataRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementExportMasterPlayerDataRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementExportMasterPlayerDataRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ExportMasterPlayerDataResult::ExportMasterPlayerDataResult() :
    PFAccountManagementExportMasterPlayerDataResult{}
{
}

ExportMasterPlayerDataResult::ExportMasterPlayerDataResult(const ExportMasterPlayerDataResult& src) :
    PFAccountManagementExportMasterPlayerDataResult{ src },
    m_jobReceiptId{ src.m_jobReceiptId }
{
    jobReceiptId = m_jobReceiptId.empty() ? nullptr : m_jobReceiptId.data();
}

ExportMasterPlayerDataResult::ExportMasterPlayerDataResult(ExportMasterPlayerDataResult&& src) :
    PFAccountManagementExportMasterPlayerDataResult{ src },
    m_jobReceiptId{ std::move(src.m_jobReceiptId) }
{
    jobReceiptId = m_jobReceiptId.empty() ? nullptr : m_jobReceiptId.data();
}

ExportMasterPlayerDataResult::ExportMasterPlayerDataResult(const PFAccountManagementExportMasterPlayerDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExportMasterPlayerDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "JobReceiptId", m_jobReceiptId, jobReceiptId);
}

JsonValue ExportMasterPlayerDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementExportMasterPlayerDataResult>(*this);
}

size_t ExportMasterPlayerDataResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementExportMasterPlayerDataResult) };
    serializedSize += (m_jobReceiptId.size() + 1);
    return serializedSize;
}

void ExportMasterPlayerDataResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementExportMasterPlayerDataResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementExportMasterPlayerDataResult);
    memcpy(stringBuffer, m_jobReceiptId.data(), m_jobReceiptId.size() + 1);
    serializedStruct->jobReceiptId = stringBuffer;
    stringBuffer += m_jobReceiptId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayedTitleListRequest::GetPlayedTitleListRequest() :
    PFAccountManagementGetPlayedTitleListRequest{}
{
}

GetPlayedTitleListRequest::GetPlayedTitleListRequest(const GetPlayedTitleListRequest& src) :
    PFAccountManagementGetPlayedTitleListRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayedTitleListRequest::GetPlayedTitleListRequest(GetPlayedTitleListRequest&& src) :
    PFAccountManagementGetPlayedTitleListRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayedTitleListRequest::GetPlayedTitleListRequest(const PFAccountManagementGetPlayedTitleListRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayedTitleListRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayedTitleListRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayedTitleListRequest>(*this);
}

size_t GetPlayedTitleListRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementGetPlayedTitleListRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GetPlayedTitleListRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementGetPlayedTitleListRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementGetPlayedTitleListRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayedTitleListResult::GetPlayedTitleListResult() :
    PFAccountManagementGetPlayedTitleListResult{}
{
}

GetPlayedTitleListResult::GetPlayedTitleListResult(const GetPlayedTitleListResult& src) :
    PFAccountManagementGetPlayedTitleListResult{ src },
    m_titleIds{ src.m_titleIds }
{
    titleIds = m_titleIds.Empty() ? nullptr : m_titleIds.Data();
}

GetPlayedTitleListResult::GetPlayedTitleListResult(GetPlayedTitleListResult&& src) :
    PFAccountManagementGetPlayedTitleListResult{ src },
    m_titleIds{ std::move(src.m_titleIds) }
{
    titleIds = m_titleIds.Empty() ? nullptr : m_titleIds.Data();
}

GetPlayedTitleListResult::GetPlayedTitleListResult(const PFAccountManagementGetPlayedTitleListResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayedTitleListResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TitleIds", m_titleIds, titleIds, titleIdsCount);
}

JsonValue GetPlayedTitleListResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayedTitleListResult>(*this);
}

GetPlayerIdFromAuthTokenRequest::GetPlayerIdFromAuthTokenRequest() :
    PFAccountManagementGetPlayerIdFromAuthTokenRequest{}
{
}

GetPlayerIdFromAuthTokenRequest::GetPlayerIdFromAuthTokenRequest(const GetPlayerIdFromAuthTokenRequest& src) :
    PFAccountManagementGetPlayerIdFromAuthTokenRequest{ src },
    m_token{ src.m_token }
{
    token = m_token.empty() ? nullptr : m_token.data();
}

GetPlayerIdFromAuthTokenRequest::GetPlayerIdFromAuthTokenRequest(GetPlayerIdFromAuthTokenRequest&& src) :
    PFAccountManagementGetPlayerIdFromAuthTokenRequest{ src },
    m_token{ std::move(src.m_token) }
{
    token = m_token.empty() ? nullptr : m_token.data();
}

GetPlayerIdFromAuthTokenRequest::GetPlayerIdFromAuthTokenRequest(const PFAccountManagementGetPlayerIdFromAuthTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerIdFromAuthTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Token", m_token, token);
    JsonUtils::ObjectGetMember(input, "TokenType", tokenType);
}

JsonValue GetPlayerIdFromAuthTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayerIdFromAuthTokenRequest>(*this);
}

size_t GetPlayerIdFromAuthTokenRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementGetPlayerIdFromAuthTokenRequest) };
    serializedSize += (m_token.size() + 1);
    return serializedSize;
}

void GetPlayerIdFromAuthTokenRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementGetPlayerIdFromAuthTokenRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementGetPlayerIdFromAuthTokenRequest);
    memcpy(stringBuffer, m_token.data(), m_token.size() + 1);
    serializedStruct->token = stringBuffer;
    stringBuffer += m_token.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerIdFromAuthTokenResult::GetPlayerIdFromAuthTokenResult() :
    PFAccountManagementGetPlayerIdFromAuthTokenResult{}
{
}

GetPlayerIdFromAuthTokenResult::GetPlayerIdFromAuthTokenResult(const GetPlayerIdFromAuthTokenResult& src) :
    PFAccountManagementGetPlayerIdFromAuthTokenResult{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerIdFromAuthTokenResult::GetPlayerIdFromAuthTokenResult(GetPlayerIdFromAuthTokenResult&& src) :
    PFAccountManagementGetPlayerIdFromAuthTokenResult{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerIdFromAuthTokenResult::GetPlayerIdFromAuthTokenResult(const PFAccountManagementGetPlayerIdFromAuthTokenResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerIdFromAuthTokenResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayerIdFromAuthTokenResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayerIdFromAuthTokenResult>(*this);
}

size_t GetPlayerIdFromAuthTokenResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementGetPlayerIdFromAuthTokenResult) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GetPlayerIdFromAuthTokenResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementGetPlayerIdFromAuthTokenResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementGetPlayerIdFromAuthTokenResult);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerProfileRequest::GetPlayerProfileRequest() :
    PFAccountManagementGetPlayerProfileRequest{}
{
}

GetPlayerProfileRequest::GetPlayerProfileRequest(const GetPlayerProfileRequest& src) :
    PFAccountManagementGetPlayerProfileRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
}

GetPlayerProfileRequest::GetPlayerProfileRequest(GetPlayerProfileRequest&& src) :
    PFAccountManagementGetPlayerProfileRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
}

GetPlayerProfileRequest::GetPlayerProfileRequest(const PFAccountManagementGetPlayerProfileRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerProfileRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
}

JsonValue GetPlayerProfileRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayerProfileRequest>(*this);
}

GetPlayerProfileResult::GetPlayerProfileResult() :
    PFAccountManagementGetPlayerProfileResult{}
{
}

GetPlayerProfileResult::GetPlayerProfileResult(const GetPlayerProfileResult& src) :
    PFAccountManagementGetPlayerProfileResult{ src },
    m_playerProfile{ src.m_playerProfile }
{
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
}

GetPlayerProfileResult::GetPlayerProfileResult(GetPlayerProfileResult&& src) :
    PFAccountManagementGetPlayerProfileResult{ src },
    m_playerProfile{ std::move(src.m_playerProfile) }
{
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
}

GetPlayerProfileResult::GetPlayerProfileResult(const PFAccountManagementGetPlayerProfileResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerProfileResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
}

JsonValue GetPlayerProfileResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayerProfileResult>(*this);
}

LookupUserAccountInfoRequest::LookupUserAccountInfoRequest() :
    PFAccountManagementLookupUserAccountInfoRequest{}
{
}

LookupUserAccountInfoRequest::LookupUserAccountInfoRequest(const LookupUserAccountInfoRequest& src) :
    PFAccountManagementLookupUserAccountInfoRequest{ src },
    m_email{ src.m_email },
    m_playFabId{ src.m_playFabId },
    m_titleDisplayName{ src.m_titleDisplayName },
    m_username{ src.m_username }
{
    email = m_email.empty() ? nullptr : m_email.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LookupUserAccountInfoRequest::LookupUserAccountInfoRequest(LookupUserAccountInfoRequest&& src) :
    PFAccountManagementLookupUserAccountInfoRequest{ src },
    m_email{ std::move(src.m_email) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_titleDisplayName{ std::move(src.m_titleDisplayName) },
    m_username{ std::move(src.m_username) }
{
    email = m_email.empty() ? nullptr : m_email.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LookupUserAccountInfoRequest::LookupUserAccountInfoRequest(const PFAccountManagementLookupUserAccountInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LookupUserAccountInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TitleDisplayName", m_titleDisplayName, titleDisplayName);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue LookupUserAccountInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLookupUserAccountInfoRequest>(*this);
}

size_t LookupUserAccountInfoRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementLookupUserAccountInfoRequest) };
    serializedSize += (m_email.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_titleDisplayName.size() + 1);
    serializedSize += (m_username.size() + 1);
    return serializedSize;
}

void LookupUserAccountInfoRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementLookupUserAccountInfoRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementLookupUserAccountInfoRequest);
    memcpy(stringBuffer, m_email.data(), m_email.size() + 1);
    serializedStruct->email = stringBuffer;
    stringBuffer += m_email.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_titleDisplayName.data(), m_titleDisplayName.size() + 1);
    serializedStruct->titleDisplayName = stringBuffer;
    stringBuffer += m_titleDisplayName.size() + 1;
    memcpy(stringBuffer, m_username.data(), m_username.size() + 1);
    serializedStruct->username = stringBuffer;
    stringBuffer += m_username.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

LookupUserAccountInfoResult::LookupUserAccountInfoResult() :
    PFAccountManagementLookupUserAccountInfoResult{}
{
}

LookupUserAccountInfoResult::LookupUserAccountInfoResult(const LookupUserAccountInfoResult& src) :
    PFAccountManagementLookupUserAccountInfoResult{ src },
    m_userInfo{ src.m_userInfo }
{
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

LookupUserAccountInfoResult::LookupUserAccountInfoResult(LookupUserAccountInfoResult&& src) :
    PFAccountManagementLookupUserAccountInfoResult{ src },
    m_userInfo{ std::move(src.m_userInfo) }
{
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

LookupUserAccountInfoResult::LookupUserAccountInfoResult(const PFAccountManagementLookupUserAccountInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LookupUserAccountInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
}

JsonValue LookupUserAccountInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLookupUserAccountInfoResult>(*this);
}

GetUserBansRequest::GetUserBansRequest() :
    PFAccountManagementGetUserBansRequest{}
{
}

GetUserBansRequest::GetUserBansRequest(const GetUserBansRequest& src) :
    PFAccountManagementGetUserBansRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserBansRequest::GetUserBansRequest(GetUserBansRequest&& src) :
    PFAccountManagementGetUserBansRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserBansRequest::GetUserBansRequest(const PFAccountManagementGetUserBansRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserBansRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserBansRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetUserBansRequest>(*this);
}

size_t GetUserBansRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementGetUserBansRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GetUserBansRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementGetUserBansRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementGetUserBansRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetUserBansResult::GetUserBansResult() :
    PFAccountManagementGetUserBansResult{}
{
}

GetUserBansResult::GetUserBansResult(const GetUserBansResult& src) :
    PFAccountManagementGetUserBansResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

GetUserBansResult::GetUserBansResult(GetUserBansResult&& src) :
    PFAccountManagementGetUserBansResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

GetUserBansResult::GetUserBansResult(const PFAccountManagementGetUserBansResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserBansResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue GetUserBansResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetUserBansResult>(*this);
}

ResetPasswordRequest::ResetPasswordRequest() :
    PFAccountManagementResetPasswordRequest{}
{
}

ResetPasswordRequest::ResetPasswordRequest(const ResetPasswordRequest& src) :
    PFAccountManagementResetPasswordRequest{ src },
    m_customTags{ src.m_customTags },
    m_password{ src.m_password },
    m_token{ src.m_token }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    password = m_password.empty() ? nullptr : m_password.data();
    token = m_token.empty() ? nullptr : m_token.data();
}

ResetPasswordRequest::ResetPasswordRequest(ResetPasswordRequest&& src) :
    PFAccountManagementResetPasswordRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_password{ std::move(src.m_password) },
    m_token{ std::move(src.m_token) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    password = m_password.empty() ? nullptr : m_password.data();
    token = m_token.empty() ? nullptr : m_token.data();
}

ResetPasswordRequest::ResetPasswordRequest(const PFAccountManagementResetPasswordRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResetPasswordRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "Token", m_token, token);
}

JsonValue ResetPasswordRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementResetPasswordRequest>(*this);
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest() :
    PFAccountManagementRevokeAllBansForUserRequest{}
{
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest(const RevokeAllBansForUserRequest& src) :
    PFAccountManagementRevokeAllBansForUserRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest(RevokeAllBansForUserRequest&& src) :
    PFAccountManagementRevokeAllBansForUserRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest(const PFAccountManagementRevokeAllBansForUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeAllBansForUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RevokeAllBansForUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementRevokeAllBansForUserRequest>(*this);
}

size_t RevokeAllBansForUserRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementRevokeAllBansForUserRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void RevokeAllBansForUserRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementRevokeAllBansForUserRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementRevokeAllBansForUserRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult() :
    PFAccountManagementRevokeAllBansForUserResult{}
{
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult(const RevokeAllBansForUserResult& src) :
    PFAccountManagementRevokeAllBansForUserResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult(RevokeAllBansForUserResult&& src) :
    PFAccountManagementRevokeAllBansForUserResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult(const PFAccountManagementRevokeAllBansForUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeAllBansForUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue RevokeAllBansForUserResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementRevokeAllBansForUserResult>(*this);
}

RevokeBansRequest::RevokeBansRequest() :
    PFAccountManagementRevokeBansRequest{}
{
}

RevokeBansRequest::RevokeBansRequest(const RevokeBansRequest& src) :
    PFAccountManagementRevokeBansRequest{ src },
    m_banIds{ src.m_banIds }
{
    banIds = m_banIds.Empty() ? nullptr : m_banIds.Data();
}

RevokeBansRequest::RevokeBansRequest(RevokeBansRequest&& src) :
    PFAccountManagementRevokeBansRequest{ src },
    m_banIds{ std::move(src.m_banIds) }
{
    banIds = m_banIds.Empty() ? nullptr : m_banIds.Data();
}

RevokeBansRequest::RevokeBansRequest(const PFAccountManagementRevokeBansRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeBansRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanIds", m_banIds, banIds, banIdsCount);
}

JsonValue RevokeBansRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementRevokeBansRequest>(*this);
}

RevokeBansResult::RevokeBansResult() :
    PFAccountManagementRevokeBansResult{}
{
}

RevokeBansResult::RevokeBansResult(const RevokeBansResult& src) :
    PFAccountManagementRevokeBansResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeBansResult::RevokeBansResult(RevokeBansResult&& src) :
    PFAccountManagementRevokeBansResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeBansResult::RevokeBansResult(const PFAccountManagementRevokeBansResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeBansResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue RevokeBansResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementRevokeBansResult>(*this);
}

AdminSendAccountRecoveryEmailRequest::AdminSendAccountRecoveryEmailRequest() :
    PFAccountManagementAdminSendAccountRecoveryEmailRequest{}
{
}

AdminSendAccountRecoveryEmailRequest::AdminSendAccountRecoveryEmailRequest(const AdminSendAccountRecoveryEmailRequest& src) :
    PFAccountManagementAdminSendAccountRecoveryEmailRequest{ src },
    m_customTags{ src.m_customTags },
    m_email{ src.m_email },
    m_emailTemplateId{ src.m_emailTemplateId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
}

AdminSendAccountRecoveryEmailRequest::AdminSendAccountRecoveryEmailRequest(AdminSendAccountRecoveryEmailRequest&& src) :
    PFAccountManagementAdminSendAccountRecoveryEmailRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_email{ std::move(src.m_email) },
    m_emailTemplateId{ std::move(src.m_emailTemplateId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
}

AdminSendAccountRecoveryEmailRequest::AdminSendAccountRecoveryEmailRequest(const PFAccountManagementAdminSendAccountRecoveryEmailRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdminSendAccountRecoveryEmailRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
}

JsonValue AdminSendAccountRecoveryEmailRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementAdminSendAccountRecoveryEmailRequest>(*this);
}

UpdateBanRequest::UpdateBanRequest() :
    PFAccountManagementUpdateBanRequest{}
{
}

UpdateBanRequest::UpdateBanRequest(const UpdateBanRequest& src) :
    PFAccountManagementUpdateBanRequest{ src },
    m_active{ src.m_active },
    m_banId{ src.m_banId },
    m_expires{ src.m_expires },
    m_IPAddress{ src.m_IPAddress },
    m_MACAddress{ src.m_MACAddress },
    m_permanent{ src.m_permanent },
    m_reason{ src.m_reason }
{
    active = m_active ? m_active.operator->() : nullptr;
    banId = m_banId.empty() ? nullptr : m_banId.data();
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    permanent = m_permanent ? m_permanent.operator->() : nullptr;
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

UpdateBanRequest::UpdateBanRequest(UpdateBanRequest&& src) :
    PFAccountManagementUpdateBanRequest{ src },
    m_active{ std::move(src.m_active) },
    m_banId{ std::move(src.m_banId) },
    m_expires{ std::move(src.m_expires) },
    m_IPAddress{ std::move(src.m_IPAddress) },
    m_MACAddress{ std::move(src.m_MACAddress) },
    m_permanent{ std::move(src.m_permanent) },
    m_reason{ std::move(src.m_reason) }
{
    active = m_active ? m_active.operator->() : nullptr;
    banId = m_banId.empty() ? nullptr : m_banId.data();
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    permanent = m_permanent ? m_permanent.operator->() : nullptr;
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

UpdateBanRequest::UpdateBanRequest(const PFAccountManagementUpdateBanRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBanRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Active", m_active, active);
    JsonUtils::ObjectGetMember(input, "BanId", m_banId, banId);
    JsonUtils::ObjectGetMember(input, "Expires", m_expires, expires, true);
    JsonUtils::ObjectGetMember(input, "IPAddress", m_IPAddress, IPAddress);
    JsonUtils::ObjectGetMember(input, "MACAddress", m_MACAddress, MACAddress);
    JsonUtils::ObjectGetMember(input, "Permanent", m_permanent, permanent);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue UpdateBanRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUpdateBanRequest>(*this);
}

UpdateBansRequest::UpdateBansRequest() :
    PFAccountManagementUpdateBansRequest{}
{
}

UpdateBansRequest::UpdateBansRequest(const UpdateBansRequest& src) :
    PFAccountManagementUpdateBansRequest{ src },
    m_bans{ src.m_bans }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
}

UpdateBansRequest::UpdateBansRequest(UpdateBansRequest&& src) :
    PFAccountManagementUpdateBansRequest{ src },
    m_bans{ std::move(src.m_bans) }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
}

UpdateBansRequest::UpdateBansRequest(const PFAccountManagementUpdateBansRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBansRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Bans", m_bans, bans, bansCount);
}

JsonValue UpdateBansRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUpdateBansRequest>(*this);
}

UpdateBansResult::UpdateBansResult() :
    PFAccountManagementUpdateBansResult{}
{
}

UpdateBansResult::UpdateBansResult(const UpdateBansResult& src) :
    PFAccountManagementUpdateBansResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

UpdateBansResult::UpdateBansResult(UpdateBansResult&& src) :
    PFAccountManagementUpdateBansResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

UpdateBansResult::UpdateBansResult(const PFAccountManagementUpdateBansResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBansResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue UpdateBansResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUpdateBansResult>(*this);
}

AdminUpdateUserTitleDisplayNameRequest::AdminUpdateUserTitleDisplayNameRequest() :
    PFAccountManagementAdminUpdateUserTitleDisplayNameRequest{}
{
}

AdminUpdateUserTitleDisplayNameRequest::AdminUpdateUserTitleDisplayNameRequest(const AdminUpdateUserTitleDisplayNameRequest& src) :
    PFAccountManagementAdminUpdateUserTitleDisplayNameRequest{ src },
    m_customTags{ src.m_customTags },
    m_displayName{ src.m_displayName },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AdminUpdateUserTitleDisplayNameRequest::AdminUpdateUserTitleDisplayNameRequest(AdminUpdateUserTitleDisplayNameRequest&& src) :
    PFAccountManagementAdminUpdateUserTitleDisplayNameRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_displayName{ std::move(src.m_displayName) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AdminUpdateUserTitleDisplayNameRequest::AdminUpdateUserTitleDisplayNameRequest(const PFAccountManagementAdminUpdateUserTitleDisplayNameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdminUpdateUserTitleDisplayNameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue AdminUpdateUserTitleDisplayNameRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementAdminUpdateUserTitleDisplayNameRequest>(*this);
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult() :
    PFAccountManagementUpdateUserTitleDisplayNameResult{}
{
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src) :
    PFAccountManagementUpdateUserTitleDisplayNameResult{ src },
    m_displayName{ src.m_displayName }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult(UpdateUserTitleDisplayNameResult&& src) :
    PFAccountManagementUpdateUserTitleDisplayNameResult{ src },
    m_displayName{ std::move(src.m_displayName) }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult(const PFAccountManagementUpdateUserTitleDisplayNameResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserTitleDisplayNameResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
}

JsonValue UpdateUserTitleDisplayNameResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUpdateUserTitleDisplayNameResult>(*this);
}

size_t UpdateUserTitleDisplayNameResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementUpdateUserTitleDisplayNameResult) };
    serializedSize += (m_displayName.size() + 1);
    return serializedSize;
}

void UpdateUserTitleDisplayNameResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementUpdateUserTitleDisplayNameResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementUpdateUserTitleDisplayNameResult);
    memcpy(stringBuffer, m_displayName.data(), m_displayName.size() + 1);
    serializedStruct->displayName = stringBuffer;
    stringBuffer += m_displayName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GenericServiceId::GenericServiceId() :
    PFAccountManagementGenericServiceId{}
{
}

GenericServiceId::GenericServiceId(const GenericServiceId& src) :
    PFAccountManagementGenericServiceId{ src },
    m_serviceName{ src.m_serviceName },
    m_userId{ src.m_userId }
{
    serviceName = m_serviceName.empty() ? nullptr : m_serviceName.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
}

GenericServiceId::GenericServiceId(GenericServiceId&& src) :
    PFAccountManagementGenericServiceId{ src },
    m_serviceName{ std::move(src.m_serviceName) },
    m_userId{ std::move(src.m_userId) }
{
    serviceName = m_serviceName.empty() ? nullptr : m_serviceName.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
}

GenericServiceId::GenericServiceId(const PFAccountManagementGenericServiceId& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GenericServiceId::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ServiceName", m_serviceName, serviceName);
    JsonUtils::ObjectGetMember(input, "UserId", m_userId, userId);
}

JsonValue GenericServiceId::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGenericServiceId>(*this);
}

size_t GenericServiceId::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementGenericServiceId) };
    serializedSize += (m_serviceName.size() + 1);
    serializedSize += (m_userId.size() + 1);
    return serializedSize;
}

void GenericServiceId::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementGenericServiceId{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementGenericServiceId);
    memcpy(stringBuffer, m_serviceName.data(), m_serviceName.size() + 1);
    serializedStruct->serviceName = stringBuffer;
    stringBuffer += m_serviceName.size() + 1;
    memcpy(stringBuffer, m_userId.data(), m_userId.size() + 1);
    serializedStruct->userId = stringBuffer;
    stringBuffer += m_userId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ClientAddGenericIDRequest::ClientAddGenericIDRequest() :
    PFAccountManagementClientAddGenericIDRequest{}
{
}

ClientAddGenericIDRequest::ClientAddGenericIDRequest(const ClientAddGenericIDRequest& src) :
    PFAccountManagementClientAddGenericIDRequest{ src },
    m_genericId{ src.m_genericId }
{
    genericId = (PFAccountManagementGenericServiceId const*)&m_genericId;
}

ClientAddGenericIDRequest::ClientAddGenericIDRequest(ClientAddGenericIDRequest&& src) :
    PFAccountManagementClientAddGenericIDRequest{ src },
    m_genericId{ std::move(src.m_genericId) }
{
    genericId = (PFAccountManagementGenericServiceId const*)&m_genericId;
}

ClientAddGenericIDRequest::ClientAddGenericIDRequest(const PFAccountManagementClientAddGenericIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientAddGenericIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericId", m_genericId, genericId);
}

JsonValue ClientAddGenericIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementClientAddGenericIDRequest>(*this);
}

AddOrUpdateContactEmailRequest::AddOrUpdateContactEmailRequest() :
    PFAccountManagementAddOrUpdateContactEmailRequest{}
{
}

AddOrUpdateContactEmailRequest::AddOrUpdateContactEmailRequest(const AddOrUpdateContactEmailRequest& src) :
    PFAccountManagementAddOrUpdateContactEmailRequest{ src },
    m_customTags{ src.m_customTags },
    m_emailAddress{ src.m_emailAddress }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
}

AddOrUpdateContactEmailRequest::AddOrUpdateContactEmailRequest(AddOrUpdateContactEmailRequest&& src) :
    PFAccountManagementAddOrUpdateContactEmailRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_emailAddress{ std::move(src.m_emailAddress) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
}

AddOrUpdateContactEmailRequest::AddOrUpdateContactEmailRequest(const PFAccountManagementAddOrUpdateContactEmailRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddOrUpdateContactEmailRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
}

JsonValue AddOrUpdateContactEmailRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementAddOrUpdateContactEmailRequest>(*this);
}

AddUsernamePasswordRequest::AddUsernamePasswordRequest() :
    PFAccountManagementAddUsernamePasswordRequest{}
{
}

AddUsernamePasswordRequest::AddUsernamePasswordRequest(const AddUsernamePasswordRequest& src) :
    PFAccountManagementAddUsernamePasswordRequest{ src },
    m_customTags{ src.m_customTags },
    m_email{ src.m_email },
    m_password{ src.m_password },
    m_username{ src.m_username }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

AddUsernamePasswordRequest::AddUsernamePasswordRequest(AddUsernamePasswordRequest&& src) :
    PFAccountManagementAddUsernamePasswordRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_email{ std::move(src.m_email) },
    m_password{ std::move(src.m_password) },
    m_username{ std::move(src.m_username) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

AddUsernamePasswordRequest::AddUsernamePasswordRequest(const PFAccountManagementAddUsernamePasswordRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddUsernamePasswordRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue AddUsernamePasswordRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementAddUsernamePasswordRequest>(*this);
}

AddUsernamePasswordResult::AddUsernamePasswordResult() :
    PFAccountManagementAddUsernamePasswordResult{}
{
}

AddUsernamePasswordResult::AddUsernamePasswordResult(const AddUsernamePasswordResult& src) :
    PFAccountManagementAddUsernamePasswordResult{ src },
    m_username{ src.m_username }
{
    username = m_username.empty() ? nullptr : m_username.data();
}

AddUsernamePasswordResult::AddUsernamePasswordResult(AddUsernamePasswordResult&& src) :
    PFAccountManagementAddUsernamePasswordResult{ src },
    m_username{ std::move(src.m_username) }
{
    username = m_username.empty() ? nullptr : m_username.data();
}

AddUsernamePasswordResult::AddUsernamePasswordResult(const PFAccountManagementAddUsernamePasswordResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddUsernamePasswordResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue AddUsernamePasswordResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementAddUsernamePasswordResult>(*this);
}

size_t AddUsernamePasswordResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementAddUsernamePasswordResult) };
    serializedSize += (m_username.size() + 1);
    return serializedSize;
}

void AddUsernamePasswordResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementAddUsernamePasswordResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementAddUsernamePasswordResult);
    memcpy(stringBuffer, m_username.data(), m_username.size() + 1);
    serializedStruct->username = stringBuffer;
    stringBuffer += m_username.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetAccountInfoRequest::GetAccountInfoRequest() :
    PFAccountManagementGetAccountInfoRequest{}
{
}

GetAccountInfoRequest::GetAccountInfoRequest(const GetAccountInfoRequest& src) :
    PFAccountManagementGetAccountInfoRequest{ src },
    m_email{ src.m_email },
    m_playFabId{ src.m_playFabId },
    m_titleDisplayName{ src.m_titleDisplayName },
    m_username{ src.m_username }
{
    email = m_email.empty() ? nullptr : m_email.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

GetAccountInfoRequest::GetAccountInfoRequest(GetAccountInfoRequest&& src) :
    PFAccountManagementGetAccountInfoRequest{ src },
    m_email{ std::move(src.m_email) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_titleDisplayName{ std::move(src.m_titleDisplayName) },
    m_username{ std::move(src.m_username) }
{
    email = m_email.empty() ? nullptr : m_email.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

GetAccountInfoRequest::GetAccountInfoRequest(const PFAccountManagementGetAccountInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAccountInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TitleDisplayName", m_titleDisplayName, titleDisplayName);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue GetAccountInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetAccountInfoRequest>(*this);
}

size_t GetAccountInfoRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementGetAccountInfoRequest) };
    serializedSize += (m_email.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_titleDisplayName.size() + 1);
    serializedSize += (m_username.size() + 1);
    return serializedSize;
}

void GetAccountInfoRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementGetAccountInfoRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementGetAccountInfoRequest);
    memcpy(stringBuffer, m_email.data(), m_email.size() + 1);
    serializedStruct->email = stringBuffer;
    stringBuffer += m_email.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_titleDisplayName.data(), m_titleDisplayName.size() + 1);
    serializedStruct->titleDisplayName = stringBuffer;
    stringBuffer += m_titleDisplayName.size() + 1;
    memcpy(stringBuffer, m_username.data(), m_username.size() + 1);
    serializedStruct->username = stringBuffer;
    stringBuffer += m_username.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetAccountInfoResult::GetAccountInfoResult() :
    PFAccountManagementGetAccountInfoResult{}
{
}

GetAccountInfoResult::GetAccountInfoResult(const GetAccountInfoResult& src) :
    PFAccountManagementGetAccountInfoResult{ src },
    m_accountInfo{ src.m_accountInfo }
{
    accountInfo = m_accountInfo ? m_accountInfo.operator->() : nullptr;
}

GetAccountInfoResult::GetAccountInfoResult(GetAccountInfoResult&& src) :
    PFAccountManagementGetAccountInfoResult{ src },
    m_accountInfo{ std::move(src.m_accountInfo) }
{
    accountInfo = m_accountInfo ? m_accountInfo.operator->() : nullptr;
}

GetAccountInfoResult::GetAccountInfoResult(const PFAccountManagementGetAccountInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAccountInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccountInfo", m_accountInfo, accountInfo);
}

JsonValue GetAccountInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetAccountInfoResult>(*this);
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest() :
    PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest{}
{
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest(const GetPlayFabIDsFromFacebookIDsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest{ src },
    m_facebookIDs{ src.m_facebookIDs }
{
    facebookIDs = m_facebookIDs.Empty() ? nullptr : m_facebookIDs.Data();
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest(GetPlayFabIDsFromFacebookIDsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest{ src },
    m_facebookIDs{ std::move(src.m_facebookIDs) }
{
    facebookIDs = m_facebookIDs.Empty() ? nullptr : m_facebookIDs.Data();
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest(const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookIDs", m_facebookIDs, facebookIDs, facebookIDsCount);
}

JsonValue GetPlayFabIDsFromFacebookIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest>(*this);
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair() :
    PFAccountManagementFacebookPlayFabIdPair{}
{
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair(const FacebookPlayFabIdPair& src) :
    PFAccountManagementFacebookPlayFabIdPair{ src },
    m_facebookId{ src.m_facebookId },
    m_playFabId{ src.m_playFabId }
{
    facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair(FacebookPlayFabIdPair&& src) :
    PFAccountManagementFacebookPlayFabIdPair{ src },
    m_facebookId{ std::move(src.m_facebookId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair(const PFAccountManagementFacebookPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FacebookPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookId", m_facebookId, facebookId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue FacebookPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementFacebookPlayFabIdPair>(*this);
}

size_t FacebookPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementFacebookPlayFabIdPair) };
    serializedSize += (m_facebookId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void FacebookPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementFacebookPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementFacebookPlayFabIdPair);
    memcpy(stringBuffer, m_facebookId.data(), m_facebookId.size() + 1);
    serializedStruct->facebookId = stringBuffer;
    stringBuffer += m_facebookId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult() :
    PFAccountManagementGetPlayFabIDsFromFacebookIDsResult{}
{
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult(const GetPlayFabIDsFromFacebookIDsResult& src) :
    PFAccountManagementGetPlayFabIDsFromFacebookIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult(GetPlayFabIDsFromFacebookIDsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromFacebookIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult(const PFAccountManagementGetPlayFabIDsFromFacebookIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromFacebookIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromFacebookIDsResult>(*this);
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest() :
    PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest{}
{
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest{ src },
    m_facebookInstantGamesIds{ src.m_facebookInstantGamesIds }
{
    facebookInstantGamesIds = m_facebookInstantGamesIds.Empty() ? nullptr : m_facebookInstantGamesIds.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest(GetPlayFabIDsFromFacebookInstantGamesIdsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest{ src },
    m_facebookInstantGamesIds{ std::move(src.m_facebookInstantGamesIds) }
{
    facebookInstantGamesIds = m_facebookInstantGamesIds.Empty() ? nullptr : m_facebookInstantGamesIds.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookInstantGamesIdsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesIds", m_facebookInstantGamesIds, facebookInstantGamesIds, facebookInstantGamesIdsCount);
}

JsonValue GetPlayFabIDsFromFacebookInstantGamesIdsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest>(*this);
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair() :
    PFAccountManagementFacebookInstantGamesPlayFabIdPair{}
{
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair(const FacebookInstantGamesPlayFabIdPair& src) :
    PFAccountManagementFacebookInstantGamesPlayFabIdPair{ src },
    m_facebookInstantGamesId{ src.m_facebookInstantGamesId },
    m_playFabId{ src.m_playFabId }
{
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair(FacebookInstantGamesPlayFabIdPair&& src) :
    PFAccountManagementFacebookInstantGamesPlayFabIdPair{ src },
    m_facebookInstantGamesId{ std::move(src.m_facebookInstantGamesId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair(const PFAccountManagementFacebookInstantGamesPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FacebookInstantGamesPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue FacebookInstantGamesPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementFacebookInstantGamesPlayFabIdPair>(*this);
}

size_t FacebookInstantGamesPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementFacebookInstantGamesPlayFabIdPair) };
    serializedSize += (m_facebookInstantGamesId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void FacebookInstantGamesPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementFacebookInstantGamesPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementFacebookInstantGamesPlayFabIdPair);
    memcpy(stringBuffer, m_facebookInstantGamesId.data(), m_facebookInstantGamesId.size() + 1);
    serializedStruct->facebookInstantGamesId = stringBuffer;
    stringBuffer += m_facebookInstantGamesId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult() :
    PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult{}
{
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult(const GetPlayFabIDsFromFacebookInstantGamesIdsResult& src) :
    PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult(GetPlayFabIDsFromFacebookInstantGamesIdsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookInstantGamesIdsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromFacebookInstantGamesIdsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult>(*this);
}

GetPlayFabIDsFromGameCenterIDsRequest::GetPlayFabIDsFromGameCenterIDsRequest() :
    PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest{}
{
}

GetPlayFabIDsFromGameCenterIDsRequest::GetPlayFabIDsFromGameCenterIDsRequest(const GetPlayFabIDsFromGameCenterIDsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest{ src },
    m_gameCenterIDs{ src.m_gameCenterIDs }
{
    gameCenterIDs = m_gameCenterIDs.Empty() ? nullptr : m_gameCenterIDs.Data();
}

GetPlayFabIDsFromGameCenterIDsRequest::GetPlayFabIDsFromGameCenterIDsRequest(GetPlayFabIDsFromGameCenterIDsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest{ src },
    m_gameCenterIDs{ std::move(src.m_gameCenterIDs) }
{
    gameCenterIDs = m_gameCenterIDs.Empty() ? nullptr : m_gameCenterIDs.Data();
}

GetPlayFabIDsFromGameCenterIDsRequest::GetPlayFabIDsFromGameCenterIDsRequest(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGameCenterIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameCenterIDs", m_gameCenterIDs, gameCenterIDs, gameCenterIDsCount);
}

JsonValue GetPlayFabIDsFromGameCenterIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest>(*this);
}

GameCenterPlayFabIdPair::GameCenterPlayFabIdPair() :
    PFAccountManagementGameCenterPlayFabIdPair{}
{
}

GameCenterPlayFabIdPair::GameCenterPlayFabIdPair(const GameCenterPlayFabIdPair& src) :
    PFAccountManagementGameCenterPlayFabIdPair{ src },
    m_gameCenterId{ src.m_gameCenterId },
    m_playFabId{ src.m_playFabId }
{
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GameCenterPlayFabIdPair::GameCenterPlayFabIdPair(GameCenterPlayFabIdPair&& src) :
    PFAccountManagementGameCenterPlayFabIdPair{ src },
    m_gameCenterId{ std::move(src.m_gameCenterId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GameCenterPlayFabIdPair::GameCenterPlayFabIdPair(const PFAccountManagementGameCenterPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GameCenterPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameCenterId", m_gameCenterId, gameCenterId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GameCenterPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGameCenterPlayFabIdPair>(*this);
}

size_t GameCenterPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementGameCenterPlayFabIdPair) };
    serializedSize += (m_gameCenterId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GameCenterPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementGameCenterPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementGameCenterPlayFabIdPair);
    memcpy(stringBuffer, m_gameCenterId.data(), m_gameCenterId.size() + 1);
    serializedStruct->gameCenterId = stringBuffer;
    stringBuffer += m_gameCenterId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromGameCenterIDsResult::GetPlayFabIDsFromGameCenterIDsResult() :
    PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult{}
{
}

GetPlayFabIDsFromGameCenterIDsResult::GetPlayFabIDsFromGameCenterIDsResult(const GetPlayFabIDsFromGameCenterIDsResult& src) :
    PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGameCenterIDsResult::GetPlayFabIDsFromGameCenterIDsResult(GetPlayFabIDsFromGameCenterIDsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGameCenterIDsResult::GetPlayFabIDsFromGameCenterIDsResult(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGameCenterIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromGameCenterIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult>(*this);
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest() :
    PFAccountManagementGetPlayFabIDsFromGenericIDsRequest{}
{
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest(const GetPlayFabIDsFromGenericIDsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromGenericIDsRequest{ src },
    m_genericIDs{ src.m_genericIDs }
{
    genericIDs = m_genericIDs.Empty() ? nullptr : m_genericIDs.Data();
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest(GetPlayFabIDsFromGenericIDsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromGenericIDsRequest{ src },
    m_genericIDs{ std::move(src.m_genericIDs) }
{
    genericIDs = m_genericIDs.Empty() ? nullptr : m_genericIDs.Data();
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest(const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGenericIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericIDs", m_genericIDs, genericIDs, genericIDsCount);
}

JsonValue GetPlayFabIDsFromGenericIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromGenericIDsRequest>(*this);
}

GenericPlayFabIdPair::GenericPlayFabIdPair() :
    PFAccountManagementGenericPlayFabIdPair{}
{
}

GenericPlayFabIdPair::GenericPlayFabIdPair(const GenericPlayFabIdPair& src) :
    PFAccountManagementGenericPlayFabIdPair{ src },
    m_genericId{ src.m_genericId },
    m_playFabId{ src.m_playFabId }
{
    genericId = m_genericId ? m_genericId.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GenericPlayFabIdPair::GenericPlayFabIdPair(GenericPlayFabIdPair&& src) :
    PFAccountManagementGenericPlayFabIdPair{ src },
    m_genericId{ std::move(src.m_genericId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    genericId = m_genericId ? m_genericId.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GenericPlayFabIdPair::GenericPlayFabIdPair(const PFAccountManagementGenericPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GenericPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericId", m_genericId, genericId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GenericPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGenericPlayFabIdPair>(*this);
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult() :
    PFAccountManagementGetPlayFabIDsFromGenericIDsResult{}
{
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult(const GetPlayFabIDsFromGenericIDsResult& src) :
    PFAccountManagementGetPlayFabIDsFromGenericIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult(GetPlayFabIDsFromGenericIDsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromGenericIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult(const PFAccountManagementGetPlayFabIDsFromGenericIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGenericIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromGenericIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromGenericIDsResult>(*this);
}

GetPlayFabIDsFromGoogleIDsRequest::GetPlayFabIDsFromGoogleIDsRequest() :
    PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest{}
{
}

GetPlayFabIDsFromGoogleIDsRequest::GetPlayFabIDsFromGoogleIDsRequest(const GetPlayFabIDsFromGoogleIDsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest{ src },
    m_googleIDs{ src.m_googleIDs }
{
    googleIDs = m_googleIDs.Empty() ? nullptr : m_googleIDs.Data();
}

GetPlayFabIDsFromGoogleIDsRequest::GetPlayFabIDsFromGoogleIDsRequest(GetPlayFabIDsFromGoogleIDsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest{ src },
    m_googleIDs{ std::move(src.m_googleIDs) }
{
    googleIDs = m_googleIDs.Empty() ? nullptr : m_googleIDs.Data();
}

GetPlayFabIDsFromGoogleIDsRequest::GetPlayFabIDsFromGoogleIDsRequest(const PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGoogleIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GoogleIDs", m_googleIDs, googleIDs, googleIDsCount);
}

JsonValue GetPlayFabIDsFromGoogleIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest>(*this);
}

GooglePlayFabIdPair::GooglePlayFabIdPair() :
    PFAccountManagementGooglePlayFabIdPair{}
{
}

GooglePlayFabIdPair::GooglePlayFabIdPair(const GooglePlayFabIdPair& src) :
    PFAccountManagementGooglePlayFabIdPair{ src },
    m_googleId{ src.m_googleId },
    m_playFabId{ src.m_playFabId }
{
    googleId = m_googleId.empty() ? nullptr : m_googleId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GooglePlayFabIdPair::GooglePlayFabIdPair(GooglePlayFabIdPair&& src) :
    PFAccountManagementGooglePlayFabIdPair{ src },
    m_googleId{ std::move(src.m_googleId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    googleId = m_googleId.empty() ? nullptr : m_googleId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GooglePlayFabIdPair::GooglePlayFabIdPair(const PFAccountManagementGooglePlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GooglePlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GoogleId", m_googleId, googleId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GooglePlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGooglePlayFabIdPair>(*this);
}

size_t GooglePlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementGooglePlayFabIdPair) };
    serializedSize += (m_googleId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GooglePlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementGooglePlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementGooglePlayFabIdPair);
    memcpy(stringBuffer, m_googleId.data(), m_googleId.size() + 1);
    serializedStruct->googleId = stringBuffer;
    stringBuffer += m_googleId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromGoogleIDsResult::GetPlayFabIDsFromGoogleIDsResult() :
    PFAccountManagementGetPlayFabIDsFromGoogleIDsResult{}
{
}

GetPlayFabIDsFromGoogleIDsResult::GetPlayFabIDsFromGoogleIDsResult(const GetPlayFabIDsFromGoogleIDsResult& src) :
    PFAccountManagementGetPlayFabIDsFromGoogleIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGoogleIDsResult::GetPlayFabIDsFromGoogleIDsResult(GetPlayFabIDsFromGoogleIDsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromGoogleIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGoogleIDsResult::GetPlayFabIDsFromGoogleIDsResult(const PFAccountManagementGetPlayFabIDsFromGoogleIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGoogleIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromGoogleIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromGoogleIDsResult>(*this);
}

GetPlayFabIDsFromKongregateIDsRequest::GetPlayFabIDsFromKongregateIDsRequest() :
    PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest{}
{
}

GetPlayFabIDsFromKongregateIDsRequest::GetPlayFabIDsFromKongregateIDsRequest(const GetPlayFabIDsFromKongregateIDsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest{ src },
    m_kongregateIDs{ src.m_kongregateIDs }
{
    kongregateIDs = m_kongregateIDs.Empty() ? nullptr : m_kongregateIDs.Data();
}

GetPlayFabIDsFromKongregateIDsRequest::GetPlayFabIDsFromKongregateIDsRequest(GetPlayFabIDsFromKongregateIDsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest{ src },
    m_kongregateIDs{ std::move(src.m_kongregateIDs) }
{
    kongregateIDs = m_kongregateIDs.Empty() ? nullptr : m_kongregateIDs.Data();
}

GetPlayFabIDsFromKongregateIDsRequest::GetPlayFabIDsFromKongregateIDsRequest(const PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromKongregateIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "KongregateIDs", m_kongregateIDs, kongregateIDs, kongregateIDsCount);
}

JsonValue GetPlayFabIDsFromKongregateIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest>(*this);
}

KongregatePlayFabIdPair::KongregatePlayFabIdPair() :
    PFAccountManagementKongregatePlayFabIdPair{}
{
}

KongregatePlayFabIdPair::KongregatePlayFabIdPair(const KongregatePlayFabIdPair& src) :
    PFAccountManagementKongregatePlayFabIdPair{ src },
    m_kongregateId{ src.m_kongregateId },
    m_playFabId{ src.m_playFabId }
{
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

KongregatePlayFabIdPair::KongregatePlayFabIdPair(KongregatePlayFabIdPair&& src) :
    PFAccountManagementKongregatePlayFabIdPair{ src },
    m_kongregateId{ std::move(src.m_kongregateId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

KongregatePlayFabIdPair::KongregatePlayFabIdPair(const PFAccountManagementKongregatePlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void KongregatePlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue KongregatePlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementKongregatePlayFabIdPair>(*this);
}

size_t KongregatePlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementKongregatePlayFabIdPair) };
    serializedSize += (m_kongregateId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void KongregatePlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementKongregatePlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementKongregatePlayFabIdPair);
    memcpy(stringBuffer, m_kongregateId.data(), m_kongregateId.size() + 1);
    serializedStruct->kongregateId = stringBuffer;
    stringBuffer += m_kongregateId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromKongregateIDsResult::GetPlayFabIDsFromKongregateIDsResult() :
    PFAccountManagementGetPlayFabIDsFromKongregateIDsResult{}
{
}

GetPlayFabIDsFromKongregateIDsResult::GetPlayFabIDsFromKongregateIDsResult(const GetPlayFabIDsFromKongregateIDsResult& src) :
    PFAccountManagementGetPlayFabIDsFromKongregateIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromKongregateIDsResult::GetPlayFabIDsFromKongregateIDsResult(GetPlayFabIDsFromKongregateIDsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromKongregateIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromKongregateIDsResult::GetPlayFabIDsFromKongregateIDsResult(const PFAccountManagementGetPlayFabIDsFromKongregateIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromKongregateIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromKongregateIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromKongregateIDsResult>(*this);
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() :
    PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{}
{
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{ src },
    m_nintendoSwitchDeviceIds{ src.m_nintendoSwitchDeviceIds }
{
    nintendoSwitchDeviceIds = m_nintendoSwitchDeviceIds.Empty() ? nullptr : m_nintendoSwitchDeviceIds.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{ src },
    m_nintendoSwitchDeviceIds{ std::move(src.m_nintendoSwitchDeviceIds) }
{
    nintendoSwitchDeviceIds = m_nintendoSwitchDeviceIds.Empty() ? nullptr : m_nintendoSwitchDeviceIds.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceIds", m_nintendoSwitchDeviceIds, nintendoSwitchDeviceIds, nintendoSwitchDeviceIdsCount);
}

JsonValue GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>(*this);
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair() :
    PFAccountManagementNintendoSwitchPlayFabIdPair{}
{
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair(const NintendoSwitchPlayFabIdPair& src) :
    PFAccountManagementNintendoSwitchPlayFabIdPair{ src },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId },
    m_playFabId{ src.m_playFabId }
{
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair(NintendoSwitchPlayFabIdPair&& src) :
    PFAccountManagementNintendoSwitchPlayFabIdPair{ src },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair(const PFAccountManagementNintendoSwitchPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void NintendoSwitchPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue NintendoSwitchPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementNintendoSwitchPlayFabIdPair>(*this);
}

size_t NintendoSwitchPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementNintendoSwitchPlayFabIdPair) };
    serializedSize += (m_nintendoSwitchDeviceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void NintendoSwitchPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementNintendoSwitchPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementNintendoSwitchPlayFabIdPair);
    memcpy(stringBuffer, m_nintendoSwitchDeviceId.data(), m_nintendoSwitchDeviceId.size() + 1);
    serializedStruct->nintendoSwitchDeviceId = stringBuffer;
    stringBuffer += m_nintendoSwitchDeviceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult() :
    PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{}
{
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src) :
    PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(GetPlayFabIDsFromNintendoSwitchDeviceIdsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult>(*this);
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest() :
    PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest{}
{
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest(const GetPlayFabIDsFromPSNAccountIDsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest{ src },
    m_issuerId{ src.m_issuerId },
    m_PSNAccountIDs{ src.m_PSNAccountIDs }
{
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    PSNAccountIDs = m_PSNAccountIDs.Empty() ? nullptr : m_PSNAccountIDs.Data();
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest(GetPlayFabIDsFromPSNAccountIDsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest{ src },
    m_issuerId{ std::move(src.m_issuerId) },
    m_PSNAccountIDs{ std::move(src.m_PSNAccountIDs) }
{
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    PSNAccountIDs = m_PSNAccountIDs.Empty() ? nullptr : m_PSNAccountIDs.Data();
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromPSNAccountIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
    JsonUtils::ObjectGetMember(input, "PSNAccountIDs", m_PSNAccountIDs, PSNAccountIDs, PSNAccountIDsCount);
}

JsonValue GetPlayFabIDsFromPSNAccountIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest>(*this);
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair() :
    PFAccountManagementPSNAccountPlayFabIdPair{}
{
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair(const PSNAccountPlayFabIdPair& src) :
    PFAccountManagementPSNAccountPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_PSNAccountId{ src.m_PSNAccountId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    PSNAccountId = m_PSNAccountId.empty() ? nullptr : m_PSNAccountId.data();
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair(PSNAccountPlayFabIdPair&& src) :
    PFAccountManagementPSNAccountPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_PSNAccountId{ std::move(src.m_PSNAccountId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    PSNAccountId = m_PSNAccountId.empty() ? nullptr : m_PSNAccountId.data();
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair(const PFAccountManagementPSNAccountPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PSNAccountPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "PSNAccountId", m_PSNAccountId, PSNAccountId);
}

JsonValue PSNAccountPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementPSNAccountPlayFabIdPair>(*this);
}

size_t PSNAccountPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementPSNAccountPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_PSNAccountId.size() + 1);
    return serializedSize;
}

void PSNAccountPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementPSNAccountPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementPSNAccountPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_PSNAccountId.data(), m_PSNAccountId.size() + 1);
    serializedStruct->PSNAccountId = stringBuffer;
    stringBuffer += m_PSNAccountId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult() :
    PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult{}
{
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult(const GetPlayFabIDsFromPSNAccountIDsResult& src) :
    PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult(GetPlayFabIDsFromPSNAccountIDsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromPSNAccountIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromPSNAccountIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult>(*this);
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest() :
    PFAccountManagementGetPlayFabIDsFromSteamIDsRequest{}
{
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest(const GetPlayFabIDsFromSteamIDsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromSteamIDsRequest{ src },
    m_steamStringIDs{ src.m_steamStringIDs }
{
    steamStringIDs = m_steamStringIDs.Empty() ? nullptr : m_steamStringIDs.Data();
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest(GetPlayFabIDsFromSteamIDsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromSteamIDsRequest{ src },
    m_steamStringIDs{ std::move(src.m_steamStringIDs) }
{
    steamStringIDs = m_steamStringIDs.Empty() ? nullptr : m_steamStringIDs.Data();
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest(const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromSteamIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SteamStringIDs", m_steamStringIDs, steamStringIDs, steamStringIDsCount);
}

JsonValue GetPlayFabIDsFromSteamIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromSteamIDsRequest>(*this);
}

SteamPlayFabIdPair::SteamPlayFabIdPair() :
    PFAccountManagementSteamPlayFabIdPair{}
{
}

SteamPlayFabIdPair::SteamPlayFabIdPair(const SteamPlayFabIdPair& src) :
    PFAccountManagementSteamPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_steamStringId{ src.m_steamStringId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    steamStringId = m_steamStringId.empty() ? nullptr : m_steamStringId.data();
}

SteamPlayFabIdPair::SteamPlayFabIdPair(SteamPlayFabIdPair&& src) :
    PFAccountManagementSteamPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_steamStringId{ std::move(src.m_steamStringId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    steamStringId = m_steamStringId.empty() ? nullptr : m_steamStringId.data();
}

SteamPlayFabIdPair::SteamPlayFabIdPair(const PFAccountManagementSteamPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SteamPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "SteamStringId", m_steamStringId, steamStringId);
}

JsonValue SteamPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementSteamPlayFabIdPair>(*this);
}

size_t SteamPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementSteamPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_steamStringId.size() + 1);
    return serializedSize;
}

void SteamPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementSteamPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementSteamPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_steamStringId.data(), m_steamStringId.size() + 1);
    serializedStruct->steamStringId = stringBuffer;
    stringBuffer += m_steamStringId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult() :
    PFAccountManagementGetPlayFabIDsFromSteamIDsResult{}
{
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult(const GetPlayFabIDsFromSteamIDsResult& src) :
    PFAccountManagementGetPlayFabIDsFromSteamIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult(GetPlayFabIDsFromSteamIDsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromSteamIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult(const PFAccountManagementGetPlayFabIDsFromSteamIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromSteamIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromSteamIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromSteamIDsResult>(*this);
}

GetPlayFabIDsFromTwitchIDsRequest::GetPlayFabIDsFromTwitchIDsRequest() :
    PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest{}
{
}

GetPlayFabIDsFromTwitchIDsRequest::GetPlayFabIDsFromTwitchIDsRequest(const GetPlayFabIDsFromTwitchIDsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest{ src },
    m_twitchIds{ src.m_twitchIds }
{
    twitchIds = m_twitchIds.Empty() ? nullptr : m_twitchIds.Data();
}

GetPlayFabIDsFromTwitchIDsRequest::GetPlayFabIDsFromTwitchIDsRequest(GetPlayFabIDsFromTwitchIDsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest{ src },
    m_twitchIds{ std::move(src.m_twitchIds) }
{
    twitchIds = m_twitchIds.Empty() ? nullptr : m_twitchIds.Data();
}

GetPlayFabIDsFromTwitchIDsRequest::GetPlayFabIDsFromTwitchIDsRequest(const PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromTwitchIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TwitchIds", m_twitchIds, twitchIds, twitchIdsCount);
}

JsonValue GetPlayFabIDsFromTwitchIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest>(*this);
}

TwitchPlayFabIdPair::TwitchPlayFabIdPair() :
    PFAccountManagementTwitchPlayFabIdPair{}
{
}

TwitchPlayFabIdPair::TwitchPlayFabIdPair(const TwitchPlayFabIdPair& src) :
    PFAccountManagementTwitchPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_twitchId{ src.m_twitchId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
}

TwitchPlayFabIdPair::TwitchPlayFabIdPair(TwitchPlayFabIdPair&& src) :
    PFAccountManagementTwitchPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_twitchId{ std::move(src.m_twitchId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
}

TwitchPlayFabIdPair::TwitchPlayFabIdPair(const PFAccountManagementTwitchPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TwitchPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TwitchId", m_twitchId, twitchId);
}

JsonValue TwitchPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementTwitchPlayFabIdPair>(*this);
}

size_t TwitchPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementTwitchPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_twitchId.size() + 1);
    return serializedSize;
}

void TwitchPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementTwitchPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementTwitchPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_twitchId.data(), m_twitchId.size() + 1);
    serializedStruct->twitchId = stringBuffer;
    stringBuffer += m_twitchId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromTwitchIDsResult::GetPlayFabIDsFromTwitchIDsResult() :
    PFAccountManagementGetPlayFabIDsFromTwitchIDsResult{}
{
}

GetPlayFabIDsFromTwitchIDsResult::GetPlayFabIDsFromTwitchIDsResult(const GetPlayFabIDsFromTwitchIDsResult& src) :
    PFAccountManagementGetPlayFabIDsFromTwitchIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromTwitchIDsResult::GetPlayFabIDsFromTwitchIDsResult(GetPlayFabIDsFromTwitchIDsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromTwitchIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromTwitchIDsResult::GetPlayFabIDsFromTwitchIDsResult(const PFAccountManagementGetPlayFabIDsFromTwitchIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromTwitchIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromTwitchIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromTwitchIDsResult>(*this);
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest() :
    PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest{}
{
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest(const GetPlayFabIDsFromXboxLiveIDsRequest& src) :
    PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest{ src },
    m_sandbox{ src.m_sandbox },
    m_xboxLiveAccountIDs{ src.m_xboxLiveAccountIDs }
{
    sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
    xboxLiveAccountIDs = m_xboxLiveAccountIDs.Empty() ? nullptr : m_xboxLiveAccountIDs.Data();
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest(GetPlayFabIDsFromXboxLiveIDsRequest&& src) :
    PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest{ src },
    m_sandbox{ std::move(src.m_sandbox) },
    m_xboxLiveAccountIDs{ std::move(src.m_xboxLiveAccountIDs) }
{
    sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
    xboxLiveAccountIDs = m_xboxLiveAccountIDs.Empty() ? nullptr : m_xboxLiveAccountIDs.Data();
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromXboxLiveIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Sandbox", m_sandbox, sandbox);
    JsonUtils::ObjectGetMember(input, "XboxLiveAccountIDs", m_xboxLiveAccountIDs, xboxLiveAccountIDs, xboxLiveAccountIDsCount);
}

JsonValue GetPlayFabIDsFromXboxLiveIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest>(*this);
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair() :
    PFAccountManagementXboxLiveAccountPlayFabIdPair{}
{
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair(const XboxLiveAccountPlayFabIdPair& src) :
    PFAccountManagementXboxLiveAccountPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_xboxLiveAccountId{ src.m_xboxLiveAccountId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    xboxLiveAccountId = m_xboxLiveAccountId.empty() ? nullptr : m_xboxLiveAccountId.data();
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair(XboxLiveAccountPlayFabIdPair&& src) :
    PFAccountManagementXboxLiveAccountPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_xboxLiveAccountId{ std::move(src.m_xboxLiveAccountId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    xboxLiveAccountId = m_xboxLiveAccountId.empty() ? nullptr : m_xboxLiveAccountId.data();
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair(const PFAccountManagementXboxLiveAccountPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void XboxLiveAccountPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "XboxLiveAccountId", m_xboxLiveAccountId, xboxLiveAccountId);
}

JsonValue XboxLiveAccountPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementXboxLiveAccountPlayFabIdPair>(*this);
}

size_t XboxLiveAccountPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementXboxLiveAccountPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_xboxLiveAccountId.size() + 1);
    return serializedSize;
}

void XboxLiveAccountPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementXboxLiveAccountPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementXboxLiveAccountPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_xboxLiveAccountId.data(), m_xboxLiveAccountId.size() + 1);
    serializedStruct->xboxLiveAccountId = stringBuffer;
    stringBuffer += m_xboxLiveAccountId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult() :
    PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult{}
{
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult(const GetPlayFabIDsFromXboxLiveIDsResult& src) :
    PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult(GetPlayFabIDsFromXboxLiveIDsResult&& src) :
    PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromXboxLiveIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromXboxLiveIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult>(*this);
}

LinkAndroidDeviceIDRequest::LinkAndroidDeviceIDRequest() :
    PFAccountManagementLinkAndroidDeviceIDRequest{}
{
}

LinkAndroidDeviceIDRequest::LinkAndroidDeviceIDRequest(const LinkAndroidDeviceIDRequest& src) :
    PFAccountManagementLinkAndroidDeviceIDRequest{ src },
    m_androidDevice{ src.m_androidDevice },
    m_androidDeviceId{ src.m_androidDeviceId },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_OS{ src.m_OS }
{
    androidDevice = m_androidDevice.empty() ? nullptr : m_androidDevice.data();
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
}

LinkAndroidDeviceIDRequest::LinkAndroidDeviceIDRequest(LinkAndroidDeviceIDRequest&& src) :
    PFAccountManagementLinkAndroidDeviceIDRequest{ src },
    m_androidDevice{ std::move(src.m_androidDevice) },
    m_androidDeviceId{ std::move(src.m_androidDeviceId) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_OS{ std::move(src.m_OS) }
{
    androidDevice = m_androidDevice.empty() ? nullptr : m_androidDevice.data();
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
}

LinkAndroidDeviceIDRequest::LinkAndroidDeviceIDRequest(const PFAccountManagementLinkAndroidDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkAndroidDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidDevice", m_androidDevice, androidDevice);
    JsonUtils::ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "OS", m_OS, OS);
}

JsonValue LinkAndroidDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkAndroidDeviceIDRequest>(*this);
}

LinkAppleRequest::LinkAppleRequest() :
    PFAccountManagementLinkAppleRequest{}
{
}

LinkAppleRequest::LinkAppleRequest(const LinkAppleRequest& src) :
    PFAccountManagementLinkAppleRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_identityToken{ src.m_identityToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
}

LinkAppleRequest::LinkAppleRequest(LinkAppleRequest&& src) :
    PFAccountManagementLinkAppleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_identityToken{ std::move(src.m_identityToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
}

LinkAppleRequest::LinkAppleRequest(const PFAccountManagementLinkAppleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkAppleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
}

JsonValue LinkAppleRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkAppleRequest>(*this);
}

LinkCustomIDRequest::LinkCustomIDRequest() :
    PFAccountManagementLinkCustomIDRequest{}
{
}

LinkCustomIDRequest::LinkCustomIDRequest(const LinkCustomIDRequest& src) :
    PFAccountManagementLinkCustomIDRequest{ src },
    m_customId{ src.m_customId },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkCustomIDRequest::LinkCustomIDRequest(LinkCustomIDRequest&& src) :
    PFAccountManagementLinkCustomIDRequest{ src },
    m_customId{ std::move(src.m_customId) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkCustomIDRequest::LinkCustomIDRequest(const PFAccountManagementLinkCustomIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkCustomIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomId", m_customId, customId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
}

JsonValue LinkCustomIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkCustomIDRequest>(*this);
}

LinkFacebookAccountRequest::LinkFacebookAccountRequest() :
    PFAccountManagementLinkFacebookAccountRequest{}
{
}

LinkFacebookAccountRequest::LinkFacebookAccountRequest(const LinkFacebookAccountRequest& src) :
    PFAccountManagementLinkFacebookAccountRequest{ src },
    m_accessToken{ src.m_accessToken },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkFacebookAccountRequest::LinkFacebookAccountRequest(LinkFacebookAccountRequest&& src) :
    PFAccountManagementLinkFacebookAccountRequest{ src },
    m_accessToken{ std::move(src.m_accessToken) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkFacebookAccountRequest::LinkFacebookAccountRequest(const PFAccountManagementLinkFacebookAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkFacebookAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
}

JsonValue LinkFacebookAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkFacebookAccountRequest>(*this);
}

LinkFacebookInstantGamesIdRequest::LinkFacebookInstantGamesIdRequest() :
    PFAccountManagementLinkFacebookInstantGamesIdRequest{}
{
}

LinkFacebookInstantGamesIdRequest::LinkFacebookInstantGamesIdRequest(const LinkFacebookInstantGamesIdRequest& src) :
    PFAccountManagementLinkFacebookInstantGamesIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_facebookInstantGamesSignature{ src.m_facebookInstantGamesSignature },
    m_forceLink{ src.m_forceLink }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    facebookInstantGamesSignature = m_facebookInstantGamesSignature.empty() ? nullptr : m_facebookInstantGamesSignature.data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkFacebookInstantGamesIdRequest::LinkFacebookInstantGamesIdRequest(LinkFacebookInstantGamesIdRequest&& src) :
    PFAccountManagementLinkFacebookInstantGamesIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_facebookInstantGamesSignature{ std::move(src.m_facebookInstantGamesSignature) },
    m_forceLink{ std::move(src.m_forceLink) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    facebookInstantGamesSignature = m_facebookInstantGamesSignature.empty() ? nullptr : m_facebookInstantGamesSignature.data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkFacebookInstantGamesIdRequest::LinkFacebookInstantGamesIdRequest(const PFAccountManagementLinkFacebookInstantGamesIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkFacebookInstantGamesIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesSignature", m_facebookInstantGamesSignature, facebookInstantGamesSignature);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
}

JsonValue LinkFacebookInstantGamesIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkFacebookInstantGamesIdRequest>(*this);
}

LinkGameCenterAccountRequest::LinkGameCenterAccountRequest() :
    PFAccountManagementLinkGameCenterAccountRequest{}
{
}

LinkGameCenterAccountRequest::LinkGameCenterAccountRequest(const LinkGameCenterAccountRequest& src) :
    PFAccountManagementLinkGameCenterAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_gameCenterId{ src.m_gameCenterId },
    m_publicKeyUrl{ src.m_publicKeyUrl },
    m_salt{ src.m_salt },
    m_signature{ src.m_signature },
    m_timestamp{ src.m_timestamp }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
    publicKeyUrl = m_publicKeyUrl.empty() ? nullptr : m_publicKeyUrl.data();
    salt = m_salt.empty() ? nullptr : m_salt.data();
    signature = m_signature.empty() ? nullptr : m_signature.data();
    timestamp = m_timestamp.empty() ? nullptr : m_timestamp.data();
}

LinkGameCenterAccountRequest::LinkGameCenterAccountRequest(LinkGameCenterAccountRequest&& src) :
    PFAccountManagementLinkGameCenterAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_gameCenterId{ std::move(src.m_gameCenterId) },
    m_publicKeyUrl{ std::move(src.m_publicKeyUrl) },
    m_salt{ std::move(src.m_salt) },
    m_signature{ std::move(src.m_signature) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
    publicKeyUrl = m_publicKeyUrl.empty() ? nullptr : m_publicKeyUrl.data();
    salt = m_salt.empty() ? nullptr : m_salt.data();
    signature = m_signature.empty() ? nullptr : m_signature.data();
    timestamp = m_timestamp.empty() ? nullptr : m_timestamp.data();
}

LinkGameCenterAccountRequest::LinkGameCenterAccountRequest(const PFAccountManagementLinkGameCenterAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkGameCenterAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "GameCenterId", m_gameCenterId, gameCenterId);
    JsonUtils::ObjectGetMember(input, "PublicKeyUrl", m_publicKeyUrl, publicKeyUrl);
    JsonUtils::ObjectGetMember(input, "Salt", m_salt, salt);
    JsonUtils::ObjectGetMember(input, "Signature", m_signature, signature);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp);
}

JsonValue LinkGameCenterAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkGameCenterAccountRequest>(*this);
}

LinkGoogleAccountRequest::LinkGoogleAccountRequest() :
    PFAccountManagementLinkGoogleAccountRequest{}
{
}

LinkGoogleAccountRequest::LinkGoogleAccountRequest(const LinkGoogleAccountRequest& src) :
    PFAccountManagementLinkGoogleAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_serverAuthCode{ src.m_serverAuthCode }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    serverAuthCode = m_serverAuthCode.empty() ? nullptr : m_serverAuthCode.data();
}

LinkGoogleAccountRequest::LinkGoogleAccountRequest(LinkGoogleAccountRequest&& src) :
    PFAccountManagementLinkGoogleAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_serverAuthCode{ std::move(src.m_serverAuthCode) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    serverAuthCode = m_serverAuthCode.empty() ? nullptr : m_serverAuthCode.data();
}

LinkGoogleAccountRequest::LinkGoogleAccountRequest(const PFAccountManagementLinkGoogleAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkGoogleAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "ServerAuthCode", m_serverAuthCode, serverAuthCode);
}

JsonValue LinkGoogleAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkGoogleAccountRequest>(*this);
}

LinkIOSDeviceIDRequest::LinkIOSDeviceIDRequest() :
    PFAccountManagementLinkIOSDeviceIDRequest{}
{
}

LinkIOSDeviceIDRequest::LinkIOSDeviceIDRequest(const LinkIOSDeviceIDRequest& src) :
    PFAccountManagementLinkIOSDeviceIDRequest{ src },
    m_customTags{ src.m_customTags },
    m_deviceId{ src.m_deviceId },
    m_deviceModel{ src.m_deviceModel },
    m_forceLink{ src.m_forceLink },
    m_OS{ src.m_OS }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
    deviceModel = m_deviceModel.empty() ? nullptr : m_deviceModel.data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
}

LinkIOSDeviceIDRequest::LinkIOSDeviceIDRequest(LinkIOSDeviceIDRequest&& src) :
    PFAccountManagementLinkIOSDeviceIDRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_deviceId{ std::move(src.m_deviceId) },
    m_deviceModel{ std::move(src.m_deviceModel) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_OS{ std::move(src.m_OS) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
    deviceModel = m_deviceModel.empty() ? nullptr : m_deviceModel.data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
}

LinkIOSDeviceIDRequest::LinkIOSDeviceIDRequest(const PFAccountManagementLinkIOSDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkIOSDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DeviceId", m_deviceId, deviceId);
    JsonUtils::ObjectGetMember(input, "DeviceModel", m_deviceModel, deviceModel);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "OS", m_OS, OS);
}

JsonValue LinkIOSDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkIOSDeviceIDRequest>(*this);
}

LinkKongregateAccountRequest::LinkKongregateAccountRequest() :
    PFAccountManagementLinkKongregateAccountRequest{}
{
}

LinkKongregateAccountRequest::LinkKongregateAccountRequest(const LinkKongregateAccountRequest& src) :
    PFAccountManagementLinkKongregateAccountRequest{ src },
    m_authTicket{ src.m_authTicket },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_kongregateId{ src.m_kongregateId }
{
    authTicket = m_authTicket.empty() ? nullptr : m_authTicket.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
}

LinkKongregateAccountRequest::LinkKongregateAccountRequest(LinkKongregateAccountRequest&& src) :
    PFAccountManagementLinkKongregateAccountRequest{ src },
    m_authTicket{ std::move(src.m_authTicket) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_kongregateId{ std::move(src.m_kongregateId) }
{
    authTicket = m_authTicket.empty() ? nullptr : m_authTicket.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
}

LinkKongregateAccountRequest::LinkKongregateAccountRequest(const PFAccountManagementLinkKongregateAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkKongregateAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthTicket", m_authTicket, authTicket);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
}

JsonValue LinkKongregateAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkKongregateAccountRequest>(*this);
}

LinkNintendoServiceAccountRequest::LinkNintendoServiceAccountRequest() :
    PFAccountManagementLinkNintendoServiceAccountRequest{}
{
}

LinkNintendoServiceAccountRequest::LinkNintendoServiceAccountRequest(const LinkNintendoServiceAccountRequest& src) :
    PFAccountManagementLinkNintendoServiceAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_identityToken{ src.m_identityToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
}

LinkNintendoServiceAccountRequest::LinkNintendoServiceAccountRequest(LinkNintendoServiceAccountRequest&& src) :
    PFAccountManagementLinkNintendoServiceAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_identityToken{ std::move(src.m_identityToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
}

LinkNintendoServiceAccountRequest::LinkNintendoServiceAccountRequest(const PFAccountManagementLinkNintendoServiceAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkNintendoServiceAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
}

JsonValue LinkNintendoServiceAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkNintendoServiceAccountRequest>(*this);
}

LinkNintendoSwitchDeviceIdRequest::LinkNintendoSwitchDeviceIdRequest() :
    PFAccountManagementLinkNintendoSwitchDeviceIdRequest{}
{
}

LinkNintendoSwitchDeviceIdRequest::LinkNintendoSwitchDeviceIdRequest(const LinkNintendoSwitchDeviceIdRequest& src) :
    PFAccountManagementLinkNintendoSwitchDeviceIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

LinkNintendoSwitchDeviceIdRequest::LinkNintendoSwitchDeviceIdRequest(LinkNintendoSwitchDeviceIdRequest&& src) :
    PFAccountManagementLinkNintendoSwitchDeviceIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

LinkNintendoSwitchDeviceIdRequest::LinkNintendoSwitchDeviceIdRequest(const PFAccountManagementLinkNintendoSwitchDeviceIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkNintendoSwitchDeviceIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
}

JsonValue LinkNintendoSwitchDeviceIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkNintendoSwitchDeviceIdRequest>(*this);
}

LinkOpenIdConnectRequest::LinkOpenIdConnectRequest() :
    PFAccountManagementLinkOpenIdConnectRequest{}
{
}

LinkOpenIdConnectRequest::LinkOpenIdConnectRequest(const LinkOpenIdConnectRequest& src) :
    PFAccountManagementLinkOpenIdConnectRequest{ src },
    m_connectionId{ src.m_connectionId },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_idToken{ src.m_idToken }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    idToken = m_idToken.empty() ? nullptr : m_idToken.data();
}

LinkOpenIdConnectRequest::LinkOpenIdConnectRequest(LinkOpenIdConnectRequest&& src) :
    PFAccountManagementLinkOpenIdConnectRequest{ src },
    m_connectionId{ std::move(src.m_connectionId) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_idToken{ std::move(src.m_idToken) }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    idToken = m_idToken.empty() ? nullptr : m_idToken.data();
}

LinkOpenIdConnectRequest::LinkOpenIdConnectRequest(const PFAccountManagementLinkOpenIdConnectRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkOpenIdConnectRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "IdToken", m_idToken, idToken);
}

JsonValue LinkOpenIdConnectRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkOpenIdConnectRequest>(*this);
}

ClientLinkPSNAccountRequest::ClientLinkPSNAccountRequest() :
    PFAccountManagementClientLinkPSNAccountRequest{}
{
}

ClientLinkPSNAccountRequest::ClientLinkPSNAccountRequest(const ClientLinkPSNAccountRequest& src) :
    PFAccountManagementClientLinkPSNAccountRequest{ src },
    m_authCode{ src.m_authCode },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_issuerId{ src.m_issuerId },
    m_redirectUri{ src.m_redirectUri }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

ClientLinkPSNAccountRequest::ClientLinkPSNAccountRequest(ClientLinkPSNAccountRequest&& src) :
    PFAccountManagementClientLinkPSNAccountRequest{ src },
    m_authCode{ std::move(src.m_authCode) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_issuerId{ std::move(src.m_issuerId) },
    m_redirectUri{ std::move(src.m_redirectUri) }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

ClientLinkPSNAccountRequest::ClientLinkPSNAccountRequest(const PFAccountManagementClientLinkPSNAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientLinkPSNAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthCode", m_authCode, authCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
    JsonUtils::ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
}

JsonValue ClientLinkPSNAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementClientLinkPSNAccountRequest>(*this);
}

LinkSteamAccountRequest::LinkSteamAccountRequest() :
    PFAccountManagementLinkSteamAccountRequest{}
{
}

LinkSteamAccountRequest::LinkSteamAccountRequest(const LinkSteamAccountRequest& src) :
    PFAccountManagementLinkSteamAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_steamTicket{ src.m_steamTicket }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    steamTicket = m_steamTicket.empty() ? nullptr : m_steamTicket.data();
}

LinkSteamAccountRequest::LinkSteamAccountRequest(LinkSteamAccountRequest&& src) :
    PFAccountManagementLinkSteamAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_steamTicket{ std::move(src.m_steamTicket) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    steamTicket = m_steamTicket.empty() ? nullptr : m_steamTicket.data();
}

LinkSteamAccountRequest::LinkSteamAccountRequest(const PFAccountManagementLinkSteamAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkSteamAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "SteamTicket", m_steamTicket, steamTicket);
}

JsonValue LinkSteamAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkSteamAccountRequest>(*this);
}

LinkTwitchAccountRequest::LinkTwitchAccountRequest() :
    PFAccountManagementLinkTwitchAccountRequest{}
{
}

LinkTwitchAccountRequest::LinkTwitchAccountRequest(const LinkTwitchAccountRequest& src) :
    PFAccountManagementLinkTwitchAccountRequest{ src },
    m_accessToken{ src.m_accessToken },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkTwitchAccountRequest::LinkTwitchAccountRequest(LinkTwitchAccountRequest&& src) :
    PFAccountManagementLinkTwitchAccountRequest{ src },
    m_accessToken{ std::move(src.m_accessToken) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkTwitchAccountRequest::LinkTwitchAccountRequest(const PFAccountManagementLinkTwitchAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkTwitchAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
}

JsonValue LinkTwitchAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkTwitchAccountRequest>(*this);
}

ClientLinkXboxAccountRequest::ClientLinkXboxAccountRequest() :
    PFAccountManagementClientLinkXboxAccountRequest{}
{
}

ClientLinkXboxAccountRequest::ClientLinkXboxAccountRequest(const ClientLinkXboxAccountRequest& src) :
    PFAccountManagementClientLinkXboxAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ClientLinkXboxAccountRequest::ClientLinkXboxAccountRequest(ClientLinkXboxAccountRequest&& src) :
    PFAccountManagementClientLinkXboxAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ClientLinkXboxAccountRequest::ClientLinkXboxAccountRequest(const PFAccountManagementClientLinkXboxAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientLinkXboxAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue ClientLinkXboxAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementClientLinkXboxAccountRequest>(*this);
}

RemoveContactEmailRequest::RemoveContactEmailRequest() :
    PFAccountManagementRemoveContactEmailRequest{}
{
}

RemoveContactEmailRequest::RemoveContactEmailRequest(const RemoveContactEmailRequest& src) :
    PFAccountManagementRemoveContactEmailRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

RemoveContactEmailRequest::RemoveContactEmailRequest(RemoveContactEmailRequest&& src) :
    PFAccountManagementRemoveContactEmailRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

RemoveContactEmailRequest::RemoveContactEmailRequest(const PFAccountManagementRemoveContactEmailRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveContactEmailRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue RemoveContactEmailRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementRemoveContactEmailRequest>(*this);
}

ClientRemoveGenericIDRequest::ClientRemoveGenericIDRequest() :
    PFAccountManagementClientRemoveGenericIDRequest{}
{
}

ClientRemoveGenericIDRequest::ClientRemoveGenericIDRequest(const ClientRemoveGenericIDRequest& src) :
    PFAccountManagementClientRemoveGenericIDRequest{ src },
    m_genericId{ src.m_genericId }
{
    genericId = (PFAccountManagementGenericServiceId const*)&m_genericId;
}

ClientRemoveGenericIDRequest::ClientRemoveGenericIDRequest(ClientRemoveGenericIDRequest&& src) :
    PFAccountManagementClientRemoveGenericIDRequest{ src },
    m_genericId{ std::move(src.m_genericId) }
{
    genericId = (PFAccountManagementGenericServiceId const*)&m_genericId;
}

ClientRemoveGenericIDRequest::ClientRemoveGenericIDRequest(const PFAccountManagementClientRemoveGenericIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientRemoveGenericIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericId", m_genericId, genericId);
}

JsonValue ClientRemoveGenericIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementClientRemoveGenericIDRequest>(*this);
}

ReportPlayerClientRequest::ReportPlayerClientRequest() :
    PFAccountManagementReportPlayerClientRequest{}
{
}

ReportPlayerClientRequest::ReportPlayerClientRequest(const ReportPlayerClientRequest& src) :
    PFAccountManagementReportPlayerClientRequest{ src },
    m_comment{ src.m_comment },
    m_customTags{ src.m_customTags },
    m_reporteeId{ src.m_reporteeId }
{
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    reporteeId = m_reporteeId.empty() ? nullptr : m_reporteeId.data();
}

ReportPlayerClientRequest::ReportPlayerClientRequest(ReportPlayerClientRequest&& src) :
    PFAccountManagementReportPlayerClientRequest{ src },
    m_comment{ std::move(src.m_comment) },
    m_customTags{ std::move(src.m_customTags) },
    m_reporteeId{ std::move(src.m_reporteeId) }
{
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    reporteeId = m_reporteeId.empty() ? nullptr : m_reporteeId.data();
}

ReportPlayerClientRequest::ReportPlayerClientRequest(const PFAccountManagementReportPlayerClientRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ReportPlayerClientRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ReporteeId", m_reporteeId, reporteeId);
}

JsonValue ReportPlayerClientRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementReportPlayerClientRequest>(*this);
}

ReportPlayerClientResult::ReportPlayerClientResult() :
    PFAccountManagementReportPlayerClientResult{}
{
}


ReportPlayerClientResult::ReportPlayerClientResult(const PFAccountManagementReportPlayerClientResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ReportPlayerClientResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SubmissionsRemaining", submissionsRemaining);
}

JsonValue ReportPlayerClientResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementReportPlayerClientResult>(*this);
}

size_t ReportPlayerClientResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementReportPlayerClientResult) };
    return serializedSize;
}

void ReportPlayerClientResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementReportPlayerClientResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementReportPlayerClientResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

ClientSendAccountRecoveryEmailRequest::ClientSendAccountRecoveryEmailRequest() :
    PFAccountManagementClientSendAccountRecoveryEmailRequest{}
{
}

ClientSendAccountRecoveryEmailRequest::ClientSendAccountRecoveryEmailRequest(const ClientSendAccountRecoveryEmailRequest& src) :
    PFAccountManagementClientSendAccountRecoveryEmailRequest{ src },
    m_customTags{ src.m_customTags },
    m_email{ src.m_email },
    m_emailTemplateId{ src.m_emailTemplateId },
    m_titleId{ src.m_titleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

ClientSendAccountRecoveryEmailRequest::ClientSendAccountRecoveryEmailRequest(ClientSendAccountRecoveryEmailRequest&& src) :
    PFAccountManagementClientSendAccountRecoveryEmailRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_email{ std::move(src.m_email) },
    m_emailTemplateId{ std::move(src.m_emailTemplateId) },
    m_titleId{ std::move(src.m_titleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

ClientSendAccountRecoveryEmailRequest::ClientSendAccountRecoveryEmailRequest(const PFAccountManagementClientSendAccountRecoveryEmailRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientSendAccountRecoveryEmailRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue ClientSendAccountRecoveryEmailRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementClientSendAccountRecoveryEmailRequest>(*this);
}

UnlinkAndroidDeviceIDRequest::UnlinkAndroidDeviceIDRequest() :
    PFAccountManagementUnlinkAndroidDeviceIDRequest{}
{
}

UnlinkAndroidDeviceIDRequest::UnlinkAndroidDeviceIDRequest(const UnlinkAndroidDeviceIDRequest& src) :
    PFAccountManagementUnlinkAndroidDeviceIDRequest{ src },
    m_androidDeviceId{ src.m_androidDeviceId },
    m_customTags{ src.m_customTags }
{
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkAndroidDeviceIDRequest::UnlinkAndroidDeviceIDRequest(UnlinkAndroidDeviceIDRequest&& src) :
    PFAccountManagementUnlinkAndroidDeviceIDRequest{ src },
    m_androidDeviceId{ std::move(src.m_androidDeviceId) },
    m_customTags{ std::move(src.m_customTags) }
{
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkAndroidDeviceIDRequest::UnlinkAndroidDeviceIDRequest(const PFAccountManagementUnlinkAndroidDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkAndroidDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkAndroidDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkAndroidDeviceIDRequest>(*this);
}

UnlinkAppleRequest::UnlinkAppleRequest() :
    PFAccountManagementUnlinkAppleRequest{}
{
}

UnlinkAppleRequest::UnlinkAppleRequest(const UnlinkAppleRequest& src) :
    PFAccountManagementUnlinkAppleRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkAppleRequest::UnlinkAppleRequest(UnlinkAppleRequest&& src) :
    PFAccountManagementUnlinkAppleRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkAppleRequest::UnlinkAppleRequest(const PFAccountManagementUnlinkAppleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkAppleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkAppleRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkAppleRequest>(*this);
}

UnlinkCustomIDRequest::UnlinkCustomIDRequest() :
    PFAccountManagementUnlinkCustomIDRequest{}
{
}

UnlinkCustomIDRequest::UnlinkCustomIDRequest(const UnlinkCustomIDRequest& src) :
    PFAccountManagementUnlinkCustomIDRequest{ src },
    m_customId{ src.m_customId },
    m_customTags{ src.m_customTags }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkCustomIDRequest::UnlinkCustomIDRequest(UnlinkCustomIDRequest&& src) :
    PFAccountManagementUnlinkCustomIDRequest{ src },
    m_customId{ std::move(src.m_customId) },
    m_customTags{ std::move(src.m_customTags) }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkCustomIDRequest::UnlinkCustomIDRequest(const PFAccountManagementUnlinkCustomIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkCustomIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomId", m_customId, customId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkCustomIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkCustomIDRequest>(*this);
}

UnlinkFacebookAccountRequest::UnlinkFacebookAccountRequest() :
    PFAccountManagementUnlinkFacebookAccountRequest{}
{
}

UnlinkFacebookAccountRequest::UnlinkFacebookAccountRequest(const UnlinkFacebookAccountRequest& src) :
    PFAccountManagementUnlinkFacebookAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkFacebookAccountRequest::UnlinkFacebookAccountRequest(UnlinkFacebookAccountRequest&& src) :
    PFAccountManagementUnlinkFacebookAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkFacebookAccountRequest::UnlinkFacebookAccountRequest(const PFAccountManagementUnlinkFacebookAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkFacebookAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkFacebookAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkFacebookAccountRequest>(*this);
}

UnlinkFacebookInstantGamesIdRequest::UnlinkFacebookInstantGamesIdRequest() :
    PFAccountManagementUnlinkFacebookInstantGamesIdRequest{}
{
}

UnlinkFacebookInstantGamesIdRequest::UnlinkFacebookInstantGamesIdRequest(const UnlinkFacebookInstantGamesIdRequest& src) :
    PFAccountManagementUnlinkFacebookInstantGamesIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_facebookInstantGamesId{ src.m_facebookInstantGamesId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
}

UnlinkFacebookInstantGamesIdRequest::UnlinkFacebookInstantGamesIdRequest(UnlinkFacebookInstantGamesIdRequest&& src) :
    PFAccountManagementUnlinkFacebookInstantGamesIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_facebookInstantGamesId{ std::move(src.m_facebookInstantGamesId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
}

UnlinkFacebookInstantGamesIdRequest::UnlinkFacebookInstantGamesIdRequest(const PFAccountManagementUnlinkFacebookInstantGamesIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkFacebookInstantGamesIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
}

JsonValue UnlinkFacebookInstantGamesIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkFacebookInstantGamesIdRequest>(*this);
}

UnlinkGameCenterAccountRequest::UnlinkGameCenterAccountRequest() :
    PFAccountManagementUnlinkGameCenterAccountRequest{}
{
}

UnlinkGameCenterAccountRequest::UnlinkGameCenterAccountRequest(const UnlinkGameCenterAccountRequest& src) :
    PFAccountManagementUnlinkGameCenterAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkGameCenterAccountRequest::UnlinkGameCenterAccountRequest(UnlinkGameCenterAccountRequest&& src) :
    PFAccountManagementUnlinkGameCenterAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkGameCenterAccountRequest::UnlinkGameCenterAccountRequest(const PFAccountManagementUnlinkGameCenterAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkGameCenterAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkGameCenterAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkGameCenterAccountRequest>(*this);
}

UnlinkGoogleAccountRequest::UnlinkGoogleAccountRequest() :
    PFAccountManagementUnlinkGoogleAccountRequest{}
{
}

UnlinkGoogleAccountRequest::UnlinkGoogleAccountRequest(const UnlinkGoogleAccountRequest& src) :
    PFAccountManagementUnlinkGoogleAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkGoogleAccountRequest::UnlinkGoogleAccountRequest(UnlinkGoogleAccountRequest&& src) :
    PFAccountManagementUnlinkGoogleAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkGoogleAccountRequest::UnlinkGoogleAccountRequest(const PFAccountManagementUnlinkGoogleAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkGoogleAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkGoogleAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkGoogleAccountRequest>(*this);
}

UnlinkIOSDeviceIDRequest::UnlinkIOSDeviceIDRequest() :
    PFAccountManagementUnlinkIOSDeviceIDRequest{}
{
}

UnlinkIOSDeviceIDRequest::UnlinkIOSDeviceIDRequest(const UnlinkIOSDeviceIDRequest& src) :
    PFAccountManagementUnlinkIOSDeviceIDRequest{ src },
    m_customTags{ src.m_customTags },
    m_deviceId{ src.m_deviceId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
}

UnlinkIOSDeviceIDRequest::UnlinkIOSDeviceIDRequest(UnlinkIOSDeviceIDRequest&& src) :
    PFAccountManagementUnlinkIOSDeviceIDRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_deviceId{ std::move(src.m_deviceId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
}

UnlinkIOSDeviceIDRequest::UnlinkIOSDeviceIDRequest(const PFAccountManagementUnlinkIOSDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkIOSDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DeviceId", m_deviceId, deviceId);
}

JsonValue UnlinkIOSDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkIOSDeviceIDRequest>(*this);
}

UnlinkKongregateAccountRequest::UnlinkKongregateAccountRequest() :
    PFAccountManagementUnlinkKongregateAccountRequest{}
{
}

UnlinkKongregateAccountRequest::UnlinkKongregateAccountRequest(const UnlinkKongregateAccountRequest& src) :
    PFAccountManagementUnlinkKongregateAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkKongregateAccountRequest::UnlinkKongregateAccountRequest(UnlinkKongregateAccountRequest&& src) :
    PFAccountManagementUnlinkKongregateAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkKongregateAccountRequest::UnlinkKongregateAccountRequest(const PFAccountManagementUnlinkKongregateAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkKongregateAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkKongregateAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkKongregateAccountRequest>(*this);
}

UnlinkNintendoServiceAccountRequest::UnlinkNintendoServiceAccountRequest() :
    PFAccountManagementUnlinkNintendoServiceAccountRequest{}
{
}

UnlinkNintendoServiceAccountRequest::UnlinkNintendoServiceAccountRequest(const UnlinkNintendoServiceAccountRequest& src) :
    PFAccountManagementUnlinkNintendoServiceAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkNintendoServiceAccountRequest::UnlinkNintendoServiceAccountRequest(UnlinkNintendoServiceAccountRequest&& src) :
    PFAccountManagementUnlinkNintendoServiceAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkNintendoServiceAccountRequest::UnlinkNintendoServiceAccountRequest(const PFAccountManagementUnlinkNintendoServiceAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkNintendoServiceAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkNintendoServiceAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkNintendoServiceAccountRequest>(*this);
}

UnlinkNintendoSwitchDeviceIdRequest::UnlinkNintendoSwitchDeviceIdRequest() :
    PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest{}
{
}

UnlinkNintendoSwitchDeviceIdRequest::UnlinkNintendoSwitchDeviceIdRequest(const UnlinkNintendoSwitchDeviceIdRequest& src) :
    PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

UnlinkNintendoSwitchDeviceIdRequest::UnlinkNintendoSwitchDeviceIdRequest(UnlinkNintendoSwitchDeviceIdRequest&& src) :
    PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

UnlinkNintendoSwitchDeviceIdRequest::UnlinkNintendoSwitchDeviceIdRequest(const PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkNintendoSwitchDeviceIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
}

JsonValue UnlinkNintendoSwitchDeviceIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest>(*this);
}

UnlinkOpenIdConnectRequest::UnlinkOpenIdConnectRequest() :
    PFAccountManagementUnlinkOpenIdConnectRequest{}
{
}

UnlinkOpenIdConnectRequest::UnlinkOpenIdConnectRequest(const UnlinkOpenIdConnectRequest& src) :
    PFAccountManagementUnlinkOpenIdConnectRequest{ src },
    m_connectionId{ src.m_connectionId },
    m_customTags{ src.m_customTags }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkOpenIdConnectRequest::UnlinkOpenIdConnectRequest(UnlinkOpenIdConnectRequest&& src) :
    PFAccountManagementUnlinkOpenIdConnectRequest{ src },
    m_connectionId{ std::move(src.m_connectionId) },
    m_customTags{ std::move(src.m_customTags) }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkOpenIdConnectRequest::UnlinkOpenIdConnectRequest(const PFAccountManagementUnlinkOpenIdConnectRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkOpenIdConnectRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkOpenIdConnectRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkOpenIdConnectRequest>(*this);
}

ClientUnlinkPSNAccountRequest::ClientUnlinkPSNAccountRequest() :
    PFAccountManagementClientUnlinkPSNAccountRequest{}
{
}

ClientUnlinkPSNAccountRequest::ClientUnlinkPSNAccountRequest(const ClientUnlinkPSNAccountRequest& src) :
    PFAccountManagementClientUnlinkPSNAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientUnlinkPSNAccountRequest::ClientUnlinkPSNAccountRequest(ClientUnlinkPSNAccountRequest&& src) :
    PFAccountManagementClientUnlinkPSNAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientUnlinkPSNAccountRequest::ClientUnlinkPSNAccountRequest(const PFAccountManagementClientUnlinkPSNAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientUnlinkPSNAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ClientUnlinkPSNAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementClientUnlinkPSNAccountRequest>(*this);
}

UnlinkSteamAccountRequest::UnlinkSteamAccountRequest() :
    PFAccountManagementUnlinkSteamAccountRequest{}
{
}

UnlinkSteamAccountRequest::UnlinkSteamAccountRequest(const UnlinkSteamAccountRequest& src) :
    PFAccountManagementUnlinkSteamAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkSteamAccountRequest::UnlinkSteamAccountRequest(UnlinkSteamAccountRequest&& src) :
    PFAccountManagementUnlinkSteamAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkSteamAccountRequest::UnlinkSteamAccountRequest(const PFAccountManagementUnlinkSteamAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkSteamAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkSteamAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkSteamAccountRequest>(*this);
}

UnlinkTwitchAccountRequest::UnlinkTwitchAccountRequest() :
    PFAccountManagementUnlinkTwitchAccountRequest{}
{
}

UnlinkTwitchAccountRequest::UnlinkTwitchAccountRequest(const UnlinkTwitchAccountRequest& src) :
    PFAccountManagementUnlinkTwitchAccountRequest{ src },
    m_accessToken{ src.m_accessToken },
    m_customTags{ src.m_customTags }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkTwitchAccountRequest::UnlinkTwitchAccountRequest(UnlinkTwitchAccountRequest&& src) :
    PFAccountManagementUnlinkTwitchAccountRequest{ src },
    m_accessToken{ std::move(src.m_accessToken) },
    m_customTags{ std::move(src.m_customTags) }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkTwitchAccountRequest::UnlinkTwitchAccountRequest(const PFAccountManagementUnlinkTwitchAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkTwitchAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkTwitchAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkTwitchAccountRequest>(*this);
}

ClientUnlinkXboxAccountRequest::ClientUnlinkXboxAccountRequest() :
    PFAccountManagementClientUnlinkXboxAccountRequest{}
{
}

ClientUnlinkXboxAccountRequest::ClientUnlinkXboxAccountRequest(const ClientUnlinkXboxAccountRequest& src) :
    PFAccountManagementClientUnlinkXboxAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientUnlinkXboxAccountRequest::ClientUnlinkXboxAccountRequest(ClientUnlinkXboxAccountRequest&& src) :
    PFAccountManagementClientUnlinkXboxAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientUnlinkXboxAccountRequest::ClientUnlinkXboxAccountRequest(const PFAccountManagementClientUnlinkXboxAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientUnlinkXboxAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ClientUnlinkXboxAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementClientUnlinkXboxAccountRequest>(*this);
}

ClientUpdateAvatarUrlRequest::ClientUpdateAvatarUrlRequest() :
    PFAccountManagementClientUpdateAvatarUrlRequest{}
{
}

ClientUpdateAvatarUrlRequest::ClientUpdateAvatarUrlRequest(const ClientUpdateAvatarUrlRequest& src) :
    PFAccountManagementClientUpdateAvatarUrlRequest{ src },
    m_imageUrl{ src.m_imageUrl }
{
    imageUrl = m_imageUrl.empty() ? nullptr : m_imageUrl.data();
}

ClientUpdateAvatarUrlRequest::ClientUpdateAvatarUrlRequest(ClientUpdateAvatarUrlRequest&& src) :
    PFAccountManagementClientUpdateAvatarUrlRequest{ src },
    m_imageUrl{ std::move(src.m_imageUrl) }
{
    imageUrl = m_imageUrl.empty() ? nullptr : m_imageUrl.data();
}

ClientUpdateAvatarUrlRequest::ClientUpdateAvatarUrlRequest(const PFAccountManagementClientUpdateAvatarUrlRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientUpdateAvatarUrlRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ImageUrl", m_imageUrl, imageUrl);
}

JsonValue ClientUpdateAvatarUrlRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementClientUpdateAvatarUrlRequest>(*this);
}

size_t ClientUpdateAvatarUrlRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementClientUpdateAvatarUrlRequest) };
    serializedSize += (m_imageUrl.size() + 1);
    return serializedSize;
}

void ClientUpdateAvatarUrlRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementClientUpdateAvatarUrlRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementClientUpdateAvatarUrlRequest);
    memcpy(stringBuffer, m_imageUrl.data(), m_imageUrl.size() + 1);
    serializedStruct->imageUrl = stringBuffer;
    stringBuffer += m_imageUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ClientUpdateUserTitleDisplayNameRequest::ClientUpdateUserTitleDisplayNameRequest() :
    PFAccountManagementClientUpdateUserTitleDisplayNameRequest{}
{
}

ClientUpdateUserTitleDisplayNameRequest::ClientUpdateUserTitleDisplayNameRequest(const ClientUpdateUserTitleDisplayNameRequest& src) :
    PFAccountManagementClientUpdateUserTitleDisplayNameRequest{ src },
    m_customTags{ src.m_customTags },
    m_displayName{ src.m_displayName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
}

ClientUpdateUserTitleDisplayNameRequest::ClientUpdateUserTitleDisplayNameRequest(ClientUpdateUserTitleDisplayNameRequest&& src) :
    PFAccountManagementClientUpdateUserTitleDisplayNameRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_displayName{ std::move(src.m_displayName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
}

ClientUpdateUserTitleDisplayNameRequest::ClientUpdateUserTitleDisplayNameRequest(const PFAccountManagementClientUpdateUserTitleDisplayNameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientUpdateUserTitleDisplayNameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
}

JsonValue ClientUpdateUserTitleDisplayNameRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementClientUpdateUserTitleDisplayNameRequest>(*this);
}

ServerAddGenericIDRequest::ServerAddGenericIDRequest() :
    PFAccountManagementServerAddGenericIDRequest{}
{
}

ServerAddGenericIDRequest::ServerAddGenericIDRequest(const ServerAddGenericIDRequest& src) :
    PFAccountManagementServerAddGenericIDRequest{ src },
    m_genericId{ src.m_genericId },
    m_playFabId{ src.m_playFabId }
{
    genericId = (PFAccountManagementGenericServiceId const*)&m_genericId;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerAddGenericIDRequest::ServerAddGenericIDRequest(ServerAddGenericIDRequest&& src) :
    PFAccountManagementServerAddGenericIDRequest{ src },
    m_genericId{ std::move(src.m_genericId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    genericId = (PFAccountManagementGenericServiceId const*)&m_genericId;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerAddGenericIDRequest::ServerAddGenericIDRequest(const PFAccountManagementServerAddGenericIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerAddGenericIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericId", m_genericId, genericId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerAddGenericIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementServerAddGenericIDRequest>(*this);
}

DeletePushNotificationTemplateRequest::DeletePushNotificationTemplateRequest() :
    PFAccountManagementDeletePushNotificationTemplateRequest{}
{
}

DeletePushNotificationTemplateRequest::DeletePushNotificationTemplateRequest(const DeletePushNotificationTemplateRequest& src) :
    PFAccountManagementDeletePushNotificationTemplateRequest{ src },
    m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

DeletePushNotificationTemplateRequest::DeletePushNotificationTemplateRequest(DeletePushNotificationTemplateRequest&& src) :
    PFAccountManagementDeletePushNotificationTemplateRequest{ src },
    m_pushNotificationTemplateId{ std::move(src.m_pushNotificationTemplateId) }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

DeletePushNotificationTemplateRequest::DeletePushNotificationTemplateRequest(const PFAccountManagementDeletePushNotificationTemplateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeletePushNotificationTemplateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
}

JsonValue DeletePushNotificationTemplateRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementDeletePushNotificationTemplateRequest>(*this);
}

size_t DeletePushNotificationTemplateRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementDeletePushNotificationTemplateRequest) };
    serializedSize += (m_pushNotificationTemplateId.size() + 1);
    return serializedSize;
}

void DeletePushNotificationTemplateRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementDeletePushNotificationTemplateRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementDeletePushNotificationTemplateRequest);
    memcpy(stringBuffer, m_pushNotificationTemplateId.data(), m_pushNotificationTemplateId.size() + 1);
    serializedStruct->pushNotificationTemplateId = stringBuffer;
    stringBuffer += m_pushNotificationTemplateId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetServerCustomIDsFromPlayFabIDsRequest::GetServerCustomIDsFromPlayFabIDsRequest() :
    PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest{}
{
}

GetServerCustomIDsFromPlayFabIDsRequest::GetServerCustomIDsFromPlayFabIDsRequest(const GetServerCustomIDsFromPlayFabIDsRequest& src) :
    PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest{ src },
    m_playFabIDs{ src.m_playFabIDs }
{
    playFabIDs = m_playFabIDs.Empty() ? nullptr : m_playFabIDs.Data();
}

GetServerCustomIDsFromPlayFabIDsRequest::GetServerCustomIDsFromPlayFabIDsRequest(GetServerCustomIDsFromPlayFabIDsRequest&& src) :
    PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest{ src },
    m_playFabIDs{ std::move(src.m_playFabIDs) }
{
    playFabIDs = m_playFabIDs.Empty() ? nullptr : m_playFabIDs.Data();
}

GetServerCustomIDsFromPlayFabIDsRequest::GetServerCustomIDsFromPlayFabIDsRequest(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerCustomIDsFromPlayFabIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabIDs", m_playFabIDs, playFabIDs, playFabIDsCount);
}

JsonValue GetServerCustomIDsFromPlayFabIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest>(*this);
}

ServerCustomIDPlayFabIDPair::ServerCustomIDPlayFabIDPair() :
    PFAccountManagementServerCustomIDPlayFabIDPair{}
{
}

ServerCustomIDPlayFabIDPair::ServerCustomIDPlayFabIDPair(const ServerCustomIDPlayFabIDPair& src) :
    PFAccountManagementServerCustomIDPlayFabIDPair{ src },
    m_playFabId{ src.m_playFabId },
    m_serverCustomId{ src.m_serverCustomId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

ServerCustomIDPlayFabIDPair::ServerCustomIDPlayFabIDPair(ServerCustomIDPlayFabIDPair&& src) :
    PFAccountManagementServerCustomIDPlayFabIDPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_serverCustomId{ std::move(src.m_serverCustomId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

ServerCustomIDPlayFabIDPair::ServerCustomIDPlayFabIDPair(const PFAccountManagementServerCustomIDPlayFabIDPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerCustomIDPlayFabIDPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
}

JsonValue ServerCustomIDPlayFabIDPair::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementServerCustomIDPlayFabIDPair>(*this);
}

size_t ServerCustomIDPlayFabIDPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementServerCustomIDPlayFabIDPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_serverCustomId.size() + 1);
    return serializedSize;
}

void ServerCustomIDPlayFabIDPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementServerCustomIDPlayFabIDPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementServerCustomIDPlayFabIDPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_serverCustomId.data(), m_serverCustomId.size() + 1);
    serializedStruct->serverCustomId = stringBuffer;
    stringBuffer += m_serverCustomId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetServerCustomIDsFromPlayFabIDsResult::GetServerCustomIDsFromPlayFabIDsResult() :
    PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult{}
{
}

GetServerCustomIDsFromPlayFabIDsResult::GetServerCustomIDsFromPlayFabIDsResult(const GetServerCustomIDsFromPlayFabIDsResult& src) :
    PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetServerCustomIDsFromPlayFabIDsResult::GetServerCustomIDsFromPlayFabIDsResult(GetServerCustomIDsFromPlayFabIDsResult&& src) :
    PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetServerCustomIDsFromPlayFabIDsResult::GetServerCustomIDsFromPlayFabIDsResult(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerCustomIDsFromPlayFabIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetServerCustomIDsFromPlayFabIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult>(*this);
}

GetUserAccountInfoRequest::GetUserAccountInfoRequest() :
    PFAccountManagementGetUserAccountInfoRequest{}
{
}

GetUserAccountInfoRequest::GetUserAccountInfoRequest(const GetUserAccountInfoRequest& src) :
    PFAccountManagementGetUserAccountInfoRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserAccountInfoRequest::GetUserAccountInfoRequest(GetUserAccountInfoRequest&& src) :
    PFAccountManagementGetUserAccountInfoRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserAccountInfoRequest::GetUserAccountInfoRequest(const PFAccountManagementGetUserAccountInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserAccountInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserAccountInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetUserAccountInfoRequest>(*this);
}

size_t GetUserAccountInfoRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementGetUserAccountInfoRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GetUserAccountInfoRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementGetUserAccountInfoRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementGetUserAccountInfoRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetUserAccountInfoResult::GetUserAccountInfoResult() :
    PFAccountManagementGetUserAccountInfoResult{}
{
}

GetUserAccountInfoResult::GetUserAccountInfoResult(const GetUserAccountInfoResult& src) :
    PFAccountManagementGetUserAccountInfoResult{ src },
    m_userInfo{ src.m_userInfo }
{
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

GetUserAccountInfoResult::GetUserAccountInfoResult(GetUserAccountInfoResult&& src) :
    PFAccountManagementGetUserAccountInfoResult{ src },
    m_userInfo{ std::move(src.m_userInfo) }
{
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

GetUserAccountInfoResult::GetUserAccountInfoResult(const PFAccountManagementGetUserAccountInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserAccountInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
}

JsonValue GetUserAccountInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetUserAccountInfoResult>(*this);
}

ServerLinkPSNAccountRequest::ServerLinkPSNAccountRequest() :
    PFAccountManagementServerLinkPSNAccountRequest{}
{
}

ServerLinkPSNAccountRequest::ServerLinkPSNAccountRequest(const ServerLinkPSNAccountRequest& src) :
    PFAccountManagementServerLinkPSNAccountRequest{ src },
    m_authCode{ src.m_authCode },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_issuerId{ src.m_issuerId },
    m_playFabId{ src.m_playFabId },
    m_redirectUri{ src.m_redirectUri }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

ServerLinkPSNAccountRequest::ServerLinkPSNAccountRequest(ServerLinkPSNAccountRequest&& src) :
    PFAccountManagementServerLinkPSNAccountRequest{ src },
    m_authCode{ std::move(src.m_authCode) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_issuerId{ std::move(src.m_issuerId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_redirectUri{ std::move(src.m_redirectUri) }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

ServerLinkPSNAccountRequest::ServerLinkPSNAccountRequest(const PFAccountManagementServerLinkPSNAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerLinkPSNAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthCode", m_authCode, authCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
}

JsonValue ServerLinkPSNAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementServerLinkPSNAccountRequest>(*this);
}

LinkServerCustomIdRequest::LinkServerCustomIdRequest() :
    PFAccountManagementLinkServerCustomIdRequest{}
{
}

LinkServerCustomIdRequest::LinkServerCustomIdRequest(const LinkServerCustomIdRequest& src) :
    PFAccountManagementLinkServerCustomIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_playFabId{ src.m_playFabId },
    m_serverCustomId{ src.m_serverCustomId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

LinkServerCustomIdRequest::LinkServerCustomIdRequest(LinkServerCustomIdRequest&& src) :
    PFAccountManagementLinkServerCustomIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_serverCustomId{ std::move(src.m_serverCustomId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

LinkServerCustomIdRequest::LinkServerCustomIdRequest(const PFAccountManagementLinkServerCustomIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkServerCustomIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
}

JsonValue LinkServerCustomIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLinkServerCustomIdRequest>(*this);
}

ServerLinkXboxAccountRequest::ServerLinkXboxAccountRequest() :
    PFAccountManagementServerLinkXboxAccountRequest{}
{
}

ServerLinkXboxAccountRequest::ServerLinkXboxAccountRequest(const ServerLinkXboxAccountRequest& src) :
    PFAccountManagementServerLinkXboxAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_playFabId{ src.m_playFabId },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ServerLinkXboxAccountRequest::ServerLinkXboxAccountRequest(ServerLinkXboxAccountRequest&& src) :
    PFAccountManagementServerLinkXboxAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ServerLinkXboxAccountRequest::ServerLinkXboxAccountRequest(const PFAccountManagementServerLinkXboxAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerLinkXboxAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue ServerLinkXboxAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementServerLinkXboxAccountRequest>(*this);
}

ServerRemoveGenericIDRequest::ServerRemoveGenericIDRequest() :
    PFAccountManagementServerRemoveGenericIDRequest{}
{
}

ServerRemoveGenericIDRequest::ServerRemoveGenericIDRequest(const ServerRemoveGenericIDRequest& src) :
    PFAccountManagementServerRemoveGenericIDRequest{ src },
    m_genericId{ src.m_genericId },
    m_playFabId{ src.m_playFabId }
{
    genericId = (PFAccountManagementGenericServiceId const*)&m_genericId;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerRemoveGenericIDRequest::ServerRemoveGenericIDRequest(ServerRemoveGenericIDRequest&& src) :
    PFAccountManagementServerRemoveGenericIDRequest{ src },
    m_genericId{ std::move(src.m_genericId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    genericId = (PFAccountManagementGenericServiceId const*)&m_genericId;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerRemoveGenericIDRequest::ServerRemoveGenericIDRequest(const PFAccountManagementServerRemoveGenericIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerRemoveGenericIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericId", m_genericId, genericId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerRemoveGenericIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementServerRemoveGenericIDRequest>(*this);
}

LocalizedPushNotificationProperties::LocalizedPushNotificationProperties() :
    PFAccountManagementLocalizedPushNotificationProperties{}
{
}

LocalizedPushNotificationProperties::LocalizedPushNotificationProperties(const LocalizedPushNotificationProperties& src) :
    PFAccountManagementLocalizedPushNotificationProperties{ src },
    m_message{ src.m_message },
    m_subject{ src.m_subject }
{
    message = m_message.empty() ? nullptr : m_message.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
}

LocalizedPushNotificationProperties::LocalizedPushNotificationProperties(LocalizedPushNotificationProperties&& src) :
    PFAccountManagementLocalizedPushNotificationProperties{ src },
    m_message{ std::move(src.m_message) },
    m_subject{ std::move(src.m_subject) }
{
    message = m_message.empty() ? nullptr : m_message.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
}

LocalizedPushNotificationProperties::LocalizedPushNotificationProperties(const PFAccountManagementLocalizedPushNotificationProperties& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LocalizedPushNotificationProperties::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "Subject", m_subject, subject);
}

JsonValue LocalizedPushNotificationProperties::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementLocalizedPushNotificationProperties>(*this);
}

size_t LocalizedPushNotificationProperties::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementLocalizedPushNotificationProperties) };
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_subject.size() + 1);
    return serializedSize;
}

void LocalizedPushNotificationProperties::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementLocalizedPushNotificationProperties{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementLocalizedPushNotificationProperties);
    memcpy(stringBuffer, m_message.data(), m_message.size() + 1);
    serializedStruct->message = stringBuffer;
    stringBuffer += m_message.size() + 1;
    memcpy(stringBuffer, m_subject.data(), m_subject.size() + 1);
    serializedStruct->subject = stringBuffer;
    stringBuffer += m_subject.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SavePushNotificationTemplateRequest::SavePushNotificationTemplateRequest() :
    PFAccountManagementSavePushNotificationTemplateRequest{}
{
}

SavePushNotificationTemplateRequest::SavePushNotificationTemplateRequest(const SavePushNotificationTemplateRequest& src) :
    PFAccountManagementSavePushNotificationTemplateRequest{ src },
    m_androidPayload{ src.m_androidPayload },
    m_id{ src.m_id },
    m_iOSPayload{ src.m_iOSPayload },
    m_localizedPushNotificationTemplates{ src.m_localizedPushNotificationTemplates },
    m_name{ src.m_name }
{
    androidPayload = m_androidPayload.empty() ? nullptr : m_androidPayload.data();
    id = m_id.empty() ? nullptr : m_id.data();
    iOSPayload = m_iOSPayload.empty() ? nullptr : m_iOSPayload.data();
    localizedPushNotificationTemplates = m_localizedPushNotificationTemplates.Empty() ? nullptr : m_localizedPushNotificationTemplates.Data();
    name = m_name.empty() ? nullptr : m_name.data();
}

SavePushNotificationTemplateRequest::SavePushNotificationTemplateRequest(SavePushNotificationTemplateRequest&& src) :
    PFAccountManagementSavePushNotificationTemplateRequest{ src },
    m_androidPayload{ std::move(src.m_androidPayload) },
    m_id{ std::move(src.m_id) },
    m_iOSPayload{ std::move(src.m_iOSPayload) },
    m_localizedPushNotificationTemplates{ std::move(src.m_localizedPushNotificationTemplates) },
    m_name{ std::move(src.m_name) }
{
    androidPayload = m_androidPayload.empty() ? nullptr : m_androidPayload.data();
    id = m_id.empty() ? nullptr : m_id.data();
    iOSPayload = m_iOSPayload.empty() ? nullptr : m_iOSPayload.data();
    localizedPushNotificationTemplates = m_localizedPushNotificationTemplates.Empty() ? nullptr : m_localizedPushNotificationTemplates.Data();
    name = m_name.empty() ? nullptr : m_name.data();
}

SavePushNotificationTemplateRequest::SavePushNotificationTemplateRequest(const PFAccountManagementSavePushNotificationTemplateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SavePushNotificationTemplateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidPayload", m_androidPayload, androidPayload);
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "IOSPayload", m_iOSPayload, iOSPayload);
    JsonUtils::ObjectGetMember(input, "LocalizedPushNotificationTemplates", m_localizedPushNotificationTemplates, localizedPushNotificationTemplates, localizedPushNotificationTemplatesCount);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue SavePushNotificationTemplateRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementSavePushNotificationTemplateRequest>(*this);
}

SavePushNotificationTemplateResult::SavePushNotificationTemplateResult() :
    PFAccountManagementSavePushNotificationTemplateResult{}
{
}

SavePushNotificationTemplateResult::SavePushNotificationTemplateResult(const SavePushNotificationTemplateResult& src) :
    PFAccountManagementSavePushNotificationTemplateResult{ src },
    m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

SavePushNotificationTemplateResult::SavePushNotificationTemplateResult(SavePushNotificationTemplateResult&& src) :
    PFAccountManagementSavePushNotificationTemplateResult{ src },
    m_pushNotificationTemplateId{ std::move(src.m_pushNotificationTemplateId) }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

SavePushNotificationTemplateResult::SavePushNotificationTemplateResult(const PFAccountManagementSavePushNotificationTemplateResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SavePushNotificationTemplateResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
}

JsonValue SavePushNotificationTemplateResult::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementSavePushNotificationTemplateResult>(*this);
}

size_t SavePushNotificationTemplateResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementSavePushNotificationTemplateResult) };
    serializedSize += (m_pushNotificationTemplateId.size() + 1);
    return serializedSize;
}

void SavePushNotificationTemplateResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementSavePushNotificationTemplateResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementSavePushNotificationTemplateResult);
    memcpy(stringBuffer, m_pushNotificationTemplateId.data(), m_pushNotificationTemplateId.size() + 1);
    serializedStruct->pushNotificationTemplateId = stringBuffer;
    stringBuffer += m_pushNotificationTemplateId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SendCustomAccountRecoveryEmailRequest::SendCustomAccountRecoveryEmailRequest() :
    PFAccountManagementSendCustomAccountRecoveryEmailRequest{}
{
}

SendCustomAccountRecoveryEmailRequest::SendCustomAccountRecoveryEmailRequest(const SendCustomAccountRecoveryEmailRequest& src) :
    PFAccountManagementSendCustomAccountRecoveryEmailRequest{ src },
    m_customTags{ src.m_customTags },
    m_email{ src.m_email },
    m_emailTemplateId{ src.m_emailTemplateId },
    m_username{ src.m_username }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

SendCustomAccountRecoveryEmailRequest::SendCustomAccountRecoveryEmailRequest(SendCustomAccountRecoveryEmailRequest&& src) :
    PFAccountManagementSendCustomAccountRecoveryEmailRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_email{ std::move(src.m_email) },
    m_emailTemplateId{ std::move(src.m_emailTemplateId) },
    m_username{ std::move(src.m_username) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

SendCustomAccountRecoveryEmailRequest::SendCustomAccountRecoveryEmailRequest(const PFAccountManagementSendCustomAccountRecoveryEmailRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SendCustomAccountRecoveryEmailRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue SendCustomAccountRecoveryEmailRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementSendCustomAccountRecoveryEmailRequest>(*this);
}

SendEmailFromTemplateRequest::SendEmailFromTemplateRequest() :
    PFAccountManagementSendEmailFromTemplateRequest{}
{
}

SendEmailFromTemplateRequest::SendEmailFromTemplateRequest(const SendEmailFromTemplateRequest& src) :
    PFAccountManagementSendEmailFromTemplateRequest{ src },
    m_customTags{ src.m_customTags },
    m_emailTemplateId{ src.m_emailTemplateId },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

SendEmailFromTemplateRequest::SendEmailFromTemplateRequest(SendEmailFromTemplateRequest&& src) :
    PFAccountManagementSendEmailFromTemplateRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_emailTemplateId{ std::move(src.m_emailTemplateId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

SendEmailFromTemplateRequest::SendEmailFromTemplateRequest(const PFAccountManagementSendEmailFromTemplateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SendEmailFromTemplateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue SendEmailFromTemplateRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementSendEmailFromTemplateRequest>(*this);
}

AdvancedPushPlatformMsg::AdvancedPushPlatformMsg() :
    PFAccountManagementAdvancedPushPlatformMsg{}
{
}

AdvancedPushPlatformMsg::AdvancedPushPlatformMsg(const AdvancedPushPlatformMsg& src) :
    PFAccountManagementAdvancedPushPlatformMsg{ src },
    m_gCMDataOnly{ src.m_gCMDataOnly },
    m_json{ src.m_json }
{
    gCMDataOnly = m_gCMDataOnly ? m_gCMDataOnly.operator->() : nullptr;
    json = m_json.empty() ? nullptr : m_json.data();
}

AdvancedPushPlatformMsg::AdvancedPushPlatformMsg(AdvancedPushPlatformMsg&& src) :
    PFAccountManagementAdvancedPushPlatformMsg{ src },
    m_gCMDataOnly{ std::move(src.m_gCMDataOnly) },
    m_json{ std::move(src.m_json) }
{
    gCMDataOnly = m_gCMDataOnly ? m_gCMDataOnly.operator->() : nullptr;
    json = m_json.empty() ? nullptr : m_json.data();
}

AdvancedPushPlatformMsg::AdvancedPushPlatformMsg(const PFAccountManagementAdvancedPushPlatformMsg& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdvancedPushPlatformMsg::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GCMDataOnly", m_gCMDataOnly, gCMDataOnly);
    JsonUtils::ObjectGetMember(input, "Json", m_json, json);
    JsonUtils::ObjectGetMember(input, "Platform", platform);
}

JsonValue AdvancedPushPlatformMsg::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementAdvancedPushPlatformMsg>(*this);
}

PushNotificationPackage::PushNotificationPackage() :
    PFAccountManagementPushNotificationPackage{}
{
}

PushNotificationPackage::PushNotificationPackage(const PushNotificationPackage& src) :
    PFAccountManagementPushNotificationPackage{ src },
    m_customData{ src.m_customData },
    m_icon{ src.m_icon },
    m_message{ src.m_message },
    m_sound{ src.m_sound },
    m_title{ src.m_title }
{
    customData = m_customData.empty() ? nullptr : m_customData.data();
    icon = m_icon.empty() ? nullptr : m_icon.data();
    message = m_message.empty() ? nullptr : m_message.data();
    sound = m_sound.empty() ? nullptr : m_sound.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

PushNotificationPackage::PushNotificationPackage(PushNotificationPackage&& src) :
    PFAccountManagementPushNotificationPackage{ src },
    m_customData{ std::move(src.m_customData) },
    m_icon{ std::move(src.m_icon) },
    m_message{ std::move(src.m_message) },
    m_sound{ std::move(src.m_sound) },
    m_title{ std::move(src.m_title) }
{
    customData = m_customData.empty() ? nullptr : m_customData.data();
    icon = m_icon.empty() ? nullptr : m_icon.data();
    message = m_message.empty() ? nullptr : m_message.data();
    sound = m_sound.empty() ? nullptr : m_sound.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

PushNotificationPackage::PushNotificationPackage(const PFAccountManagementPushNotificationPackage& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationPackage::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Badge", badge);
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData);
    JsonUtils::ObjectGetMember(input, "Icon", m_icon, icon);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "Sound", m_sound, sound);
    JsonUtils::ObjectGetMember(input, "Title", m_title, title);
}

JsonValue PushNotificationPackage::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementPushNotificationPackage>(*this);
}

size_t PushNotificationPackage::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementPushNotificationPackage) };
    serializedSize += (m_customData.size() + 1);
    serializedSize += (m_icon.size() + 1);
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_sound.size() + 1);
    serializedSize += (m_title.size() + 1);
    return serializedSize;
}

void PushNotificationPackage::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementPushNotificationPackage{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementPushNotificationPackage);
    memcpy(stringBuffer, m_customData.data(), m_customData.size() + 1);
    serializedStruct->customData = stringBuffer;
    stringBuffer += m_customData.size() + 1;
    memcpy(stringBuffer, m_icon.data(), m_icon.size() + 1);
    serializedStruct->icon = stringBuffer;
    stringBuffer += m_icon.size() + 1;
    memcpy(stringBuffer, m_message.data(), m_message.size() + 1);
    serializedStruct->message = stringBuffer;
    stringBuffer += m_message.size() + 1;
    memcpy(stringBuffer, m_sound.data(), m_sound.size() + 1);
    serializedStruct->sound = stringBuffer;
    stringBuffer += m_sound.size() + 1;
    memcpy(stringBuffer, m_title.data(), m_title.size() + 1);
    serializedStruct->title = stringBuffer;
    stringBuffer += m_title.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SendPushNotificationRequest::SendPushNotificationRequest() :
    PFAccountManagementSendPushNotificationRequest{}
{
}

SendPushNotificationRequest::SendPushNotificationRequest(const SendPushNotificationRequest& src) :
    PFAccountManagementSendPushNotificationRequest{ src },
    m_advancedPlatformDelivery{ src.m_advancedPlatformDelivery },
    m_customTags{ src.m_customTags },
    m_message{ src.m_message },
    m_package{ src.m_package },
    m_recipient{ src.m_recipient },
    m_subject{ src.m_subject },
    m_targetPlatforms{ src.m_targetPlatforms }
{
    advancedPlatformDelivery = m_advancedPlatformDelivery.Empty() ? nullptr : m_advancedPlatformDelivery.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    message = m_message.empty() ? nullptr : m_message.data();
    package = m_package ? m_package.operator->() : nullptr;
    recipient = m_recipient.empty() ? nullptr : m_recipient.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
    targetPlatforms = m_targetPlatforms.empty() ? nullptr : m_targetPlatforms.data();
}

SendPushNotificationRequest::SendPushNotificationRequest(SendPushNotificationRequest&& src) :
    PFAccountManagementSendPushNotificationRequest{ src },
    m_advancedPlatformDelivery{ std::move(src.m_advancedPlatformDelivery) },
    m_customTags{ std::move(src.m_customTags) },
    m_message{ std::move(src.m_message) },
    m_package{ std::move(src.m_package) },
    m_recipient{ std::move(src.m_recipient) },
    m_subject{ std::move(src.m_subject) },
    m_targetPlatforms{ std::move(src.m_targetPlatforms) }
{
    advancedPlatformDelivery = m_advancedPlatformDelivery.Empty() ? nullptr : m_advancedPlatformDelivery.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    message = m_message.empty() ? nullptr : m_message.data();
    package = m_package ? m_package.operator->() : nullptr;
    recipient = m_recipient.empty() ? nullptr : m_recipient.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
    targetPlatforms = m_targetPlatforms.empty() ? nullptr : m_targetPlatforms.data();
}

SendPushNotificationRequest::SendPushNotificationRequest(const PFAccountManagementSendPushNotificationRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SendPushNotificationRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdvancedPlatformDelivery", m_advancedPlatformDelivery, advancedPlatformDelivery, advancedPlatformDeliveryCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "Package", m_package, package);
    JsonUtils::ObjectGetMember(input, "Recipient", m_recipient, recipient);
    JsonUtils::ObjectGetMember(input, "Subject", m_subject, subject);
    JsonUtils::ObjectGetMember(input, "TargetPlatforms", m_targetPlatforms, targetPlatforms, targetPlatformsCount);
}

JsonValue SendPushNotificationRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementSendPushNotificationRequest>(*this);
}

SendPushNotificationFromTemplateRequest::SendPushNotificationFromTemplateRequest() :
    PFAccountManagementSendPushNotificationFromTemplateRequest{}
{
}

SendPushNotificationFromTemplateRequest::SendPushNotificationFromTemplateRequest(const SendPushNotificationFromTemplateRequest& src) :
    PFAccountManagementSendPushNotificationFromTemplateRequest{ src },
    m_customTags{ src.m_customTags },
    m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId },
    m_recipient{ src.m_recipient }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
    recipient = m_recipient.empty() ? nullptr : m_recipient.data();
}

SendPushNotificationFromTemplateRequest::SendPushNotificationFromTemplateRequest(SendPushNotificationFromTemplateRequest&& src) :
    PFAccountManagementSendPushNotificationFromTemplateRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pushNotificationTemplateId{ std::move(src.m_pushNotificationTemplateId) },
    m_recipient{ std::move(src.m_recipient) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
    recipient = m_recipient.empty() ? nullptr : m_recipient.data();
}

SendPushNotificationFromTemplateRequest::SendPushNotificationFromTemplateRequest(const PFAccountManagementSendPushNotificationFromTemplateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SendPushNotificationFromTemplateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
    JsonUtils::ObjectGetMember(input, "Recipient", m_recipient, recipient);
}

JsonValue SendPushNotificationFromTemplateRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementSendPushNotificationFromTemplateRequest>(*this);
}

ServerUnlinkPSNAccountRequest::ServerUnlinkPSNAccountRequest() :
    PFAccountManagementServerUnlinkPSNAccountRequest{}
{
}

ServerUnlinkPSNAccountRequest::ServerUnlinkPSNAccountRequest(const ServerUnlinkPSNAccountRequest& src) :
    PFAccountManagementServerUnlinkPSNAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUnlinkPSNAccountRequest::ServerUnlinkPSNAccountRequest(ServerUnlinkPSNAccountRequest&& src) :
    PFAccountManagementServerUnlinkPSNAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUnlinkPSNAccountRequest::ServerUnlinkPSNAccountRequest(const PFAccountManagementServerUnlinkPSNAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerUnlinkPSNAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerUnlinkPSNAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementServerUnlinkPSNAccountRequest>(*this);
}

UnlinkServerCustomIdRequest::UnlinkServerCustomIdRequest() :
    PFAccountManagementUnlinkServerCustomIdRequest{}
{
}

UnlinkServerCustomIdRequest::UnlinkServerCustomIdRequest(const UnlinkServerCustomIdRequest& src) :
    PFAccountManagementUnlinkServerCustomIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_serverCustomId{ src.m_serverCustomId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

UnlinkServerCustomIdRequest::UnlinkServerCustomIdRequest(UnlinkServerCustomIdRequest&& src) :
    PFAccountManagementUnlinkServerCustomIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_serverCustomId{ std::move(src.m_serverCustomId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

UnlinkServerCustomIdRequest::UnlinkServerCustomIdRequest(const PFAccountManagementUnlinkServerCustomIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkServerCustomIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
}

JsonValue UnlinkServerCustomIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementUnlinkServerCustomIdRequest>(*this);
}

ServerUnlinkXboxAccountRequest::ServerUnlinkXboxAccountRequest() :
    PFAccountManagementServerUnlinkXboxAccountRequest{}
{
}

ServerUnlinkXboxAccountRequest::ServerUnlinkXboxAccountRequest(const ServerUnlinkXboxAccountRequest& src) :
    PFAccountManagementServerUnlinkXboxAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUnlinkXboxAccountRequest::ServerUnlinkXboxAccountRequest(ServerUnlinkXboxAccountRequest&& src) :
    PFAccountManagementServerUnlinkXboxAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUnlinkXboxAccountRequest::ServerUnlinkXboxAccountRequest(const PFAccountManagementServerUnlinkXboxAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerUnlinkXboxAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerUnlinkXboxAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementServerUnlinkXboxAccountRequest>(*this);
}

ServerUpdateAvatarUrlRequest::ServerUpdateAvatarUrlRequest() :
    PFAccountManagementServerUpdateAvatarUrlRequest{}
{
}

ServerUpdateAvatarUrlRequest::ServerUpdateAvatarUrlRequest(const ServerUpdateAvatarUrlRequest& src) :
    PFAccountManagementServerUpdateAvatarUrlRequest{ src },
    m_imageUrl{ src.m_imageUrl },
    m_playFabId{ src.m_playFabId }
{
    imageUrl = m_imageUrl.empty() ? nullptr : m_imageUrl.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUpdateAvatarUrlRequest::ServerUpdateAvatarUrlRequest(ServerUpdateAvatarUrlRequest&& src) :
    PFAccountManagementServerUpdateAvatarUrlRequest{ src },
    m_imageUrl{ std::move(src.m_imageUrl) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    imageUrl = m_imageUrl.empty() ? nullptr : m_imageUrl.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUpdateAvatarUrlRequest::ServerUpdateAvatarUrlRequest(const PFAccountManagementServerUpdateAvatarUrlRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerUpdateAvatarUrlRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ImageUrl", m_imageUrl, imageUrl);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerUpdateAvatarUrlRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementServerUpdateAvatarUrlRequest>(*this);
}

size_t ServerUpdateAvatarUrlRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementServerUpdateAvatarUrlRequest) };
    serializedSize += (m_imageUrl.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void ServerUpdateAvatarUrlRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementServerUpdateAvatarUrlRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementServerUpdateAvatarUrlRequest);
    memcpy(stringBuffer, m_imageUrl.data(), m_imageUrl.size() + 1);
    serializedStruct->imageUrl = stringBuffer;
    stringBuffer += m_imageUrl.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetGlobalPolicyRequest::GetGlobalPolicyRequest() :
    PFAccountManagementGetGlobalPolicyRequest{}
{
}

GetGlobalPolicyRequest::GetGlobalPolicyRequest(const GetGlobalPolicyRequest& src) :
    PFAccountManagementGetGlobalPolicyRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetGlobalPolicyRequest::GetGlobalPolicyRequest(GetGlobalPolicyRequest&& src) :
    PFAccountManagementGetGlobalPolicyRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetGlobalPolicyRequest::GetGlobalPolicyRequest(const PFAccountManagementGetGlobalPolicyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetGlobalPolicyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetGlobalPolicyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetGlobalPolicyRequest>(*this);
}

EntityPermissionStatement::EntityPermissionStatement() :
    PFAccountManagementEntityPermissionStatement{}
{
}

EntityPermissionStatement::EntityPermissionStatement(const EntityPermissionStatement& src) :
    PFAccountManagementEntityPermissionStatement{ src },
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
    PFAccountManagementEntityPermissionStatement{ src },
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

EntityPermissionStatement::EntityPermissionStatement(const PFAccountManagementEntityPermissionStatement& src)
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
    return JsonUtils::ToJson<PFAccountManagementEntityPermissionStatement>(*this);
}

GetGlobalPolicyResponse::GetGlobalPolicyResponse() :
    PFAccountManagementGetGlobalPolicyResponse{}
{
}

GetGlobalPolicyResponse::GetGlobalPolicyResponse(const GetGlobalPolicyResponse& src) :
    PFAccountManagementGetGlobalPolicyResponse{ src },
    m_permissions{ src.m_permissions }
{
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

GetGlobalPolicyResponse::GetGlobalPolicyResponse(GetGlobalPolicyResponse&& src) :
    PFAccountManagementGetGlobalPolicyResponse{ src },
    m_permissions{ std::move(src.m_permissions) }
{
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

GetGlobalPolicyResponse::GetGlobalPolicyResponse(const PFAccountManagementGetGlobalPolicyResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetGlobalPolicyResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Permissions", m_permissions, permissions, permissionsCount);
}

JsonValue GetGlobalPolicyResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetGlobalPolicyResponse>(*this);
}

GetEntityProfileRequest::GetEntityProfileRequest() :
    PFAccountManagementGetEntityProfileRequest{}
{
}

GetEntityProfileRequest::GetEntityProfileRequest(const GetEntityProfileRequest& src) :
    PFAccountManagementGetEntityProfileRequest{ src },
    m_customTags{ src.m_customTags },
    m_dataAsObject{ src.m_dataAsObject },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    dataAsObject = m_dataAsObject ? m_dataAsObject.operator->() : nullptr;
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetEntityProfileRequest::GetEntityProfileRequest(GetEntityProfileRequest&& src) :
    PFAccountManagementGetEntityProfileRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_dataAsObject{ std::move(src.m_dataAsObject) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    dataAsObject = m_dataAsObject ? m_dataAsObject.operator->() : nullptr;
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetEntityProfileRequest::GetEntityProfileRequest(const PFAccountManagementGetEntityProfileRequest& src)
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
    return JsonUtils::ToJson<PFAccountManagementGetEntityProfileRequest>(*this);
}

EntityProfileFileMetadata::EntityProfileFileMetadata() :
    PFAccountManagementEntityProfileFileMetadata{}
{
}

EntityProfileFileMetadata::EntityProfileFileMetadata(const EntityProfileFileMetadata& src) :
    PFAccountManagementEntityProfileFileMetadata{ src },
    m_checksum{ src.m_checksum },
    m_fileName{ src.m_fileName }
{
    checksum = m_checksum.empty() ? nullptr : m_checksum.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

EntityProfileFileMetadata::EntityProfileFileMetadata(EntityProfileFileMetadata&& src) :
    PFAccountManagementEntityProfileFileMetadata{ src },
    m_checksum{ std::move(src.m_checksum) },
    m_fileName{ std::move(src.m_fileName) }
{
    checksum = m_checksum.empty() ? nullptr : m_checksum.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

EntityProfileFileMetadata::EntityProfileFileMetadata(const PFAccountManagementEntityProfileFileMetadata& src)
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
    return JsonUtils::ToJson<PFAccountManagementEntityProfileFileMetadata>(*this);
}

size_t EntityProfileFileMetadata::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementEntityProfileFileMetadata) };
    serializedSize += (m_checksum.size() + 1);
    serializedSize += (m_fileName.size() + 1);
    return serializedSize;
}

void EntityProfileFileMetadata::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementEntityProfileFileMetadata{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementEntityProfileFileMetadata);
    memcpy(stringBuffer, m_checksum.data(), m_checksum.size() + 1);
    serializedStruct->checksum = stringBuffer;
    stringBuffer += m_checksum.size() + 1;
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EntityDataObject::EntityDataObject() :
    PFAccountManagementEntityDataObject{}
{
}

EntityDataObject::EntityDataObject(const EntityDataObject& src) :
    PFAccountManagementEntityDataObject{ src },
    m_dataObject{ src.m_dataObject },
    m_escapedDataObject{ src.m_escapedDataObject },
    m_objectName{ src.m_objectName }
{
    dataObject.stringValue = m_dataObject.StringValue();
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
    objectName = m_objectName.empty() ? nullptr : m_objectName.data();
}

EntityDataObject::EntityDataObject(EntityDataObject&& src) :
    PFAccountManagementEntityDataObject{ src },
    m_dataObject{ std::move(src.m_dataObject) },
    m_escapedDataObject{ std::move(src.m_escapedDataObject) },
    m_objectName{ std::move(src.m_objectName) }
{
    dataObject.stringValue = m_dataObject.StringValue();
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
    objectName = m_objectName.empty() ? nullptr : m_objectName.data();
}

EntityDataObject::EntityDataObject(const PFAccountManagementEntityDataObject& src)
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
    return JsonUtils::ToJson<PFAccountManagementEntityDataObject>(*this);
}

EntityStatisticChildValue::EntityStatisticChildValue() :
    PFAccountManagementEntityStatisticChildValue{}
{
}

EntityStatisticChildValue::EntityStatisticChildValue(const EntityStatisticChildValue& src) :
    PFAccountManagementEntityStatisticChildValue{ src },
    m_childName{ src.m_childName },
    m_metadata{ src.m_metadata }
{
    childName = m_childName.empty() ? nullptr : m_childName.data();
    metadata = m_metadata.empty() ? nullptr : m_metadata.data();
}

EntityStatisticChildValue::EntityStatisticChildValue(EntityStatisticChildValue&& src) :
    PFAccountManagementEntityStatisticChildValue{ src },
    m_childName{ std::move(src.m_childName) },
    m_metadata{ std::move(src.m_metadata) }
{
    childName = m_childName.empty() ? nullptr : m_childName.data();
    metadata = m_metadata.empty() ? nullptr : m_metadata.data();
}

EntityStatisticChildValue::EntityStatisticChildValue(const PFAccountManagementEntityStatisticChildValue& src)
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
    return JsonUtils::ToJson<PFAccountManagementEntityStatisticChildValue>(*this);
}

size_t EntityStatisticChildValue::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAccountManagementEntityStatisticChildValue) };
    serializedSize += (m_childName.size() + 1);
    serializedSize += (m_metadata.size() + 1);
    return serializedSize;
}

void EntityStatisticChildValue::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAccountManagementEntityStatisticChildValue{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAccountManagementEntityStatisticChildValue);
    memcpy(stringBuffer, m_childName.data(), m_childName.size() + 1);
    serializedStruct->childName = stringBuffer;
    stringBuffer += m_childName.size() + 1;
    memcpy(stringBuffer, m_metadata.data(), m_metadata.size() + 1);
    serializedStruct->metadata = stringBuffer;
    stringBuffer += m_metadata.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EntityStatisticValue::EntityStatisticValue() :
    PFAccountManagementEntityStatisticValue{}
{
}

EntityStatisticValue::EntityStatisticValue(const EntityStatisticValue& src) :
    PFAccountManagementEntityStatisticValue{ src },
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
    PFAccountManagementEntityStatisticValue{ src },
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

EntityStatisticValue::EntityStatisticValue(const PFAccountManagementEntityStatisticValue& src)
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
    return JsonUtils::ToJson<PFAccountManagementEntityStatisticValue>(*this);
}

EntityProfileBody::EntityProfileBody() :
    PFAccountManagementEntityProfileBody{}
{
}

EntityProfileBody::EntityProfileBody(const EntityProfileBody& src) :
    PFAccountManagementEntityProfileBody{ src },
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
    PFAccountManagementEntityProfileBody{ src },
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

EntityProfileBody::EntityProfileBody(const PFAccountManagementEntityProfileBody& src)
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
    return JsonUtils::ToJson<PFAccountManagementEntityProfileBody>(*this);
}

GetEntityProfileResponse::GetEntityProfileResponse() :
    PFAccountManagementGetEntityProfileResponse{}
{
}

GetEntityProfileResponse::GetEntityProfileResponse(const GetEntityProfileResponse& src) :
    PFAccountManagementGetEntityProfileResponse{ src },
    m_profile{ src.m_profile }
{
    profile = m_profile ? m_profile.operator->() : nullptr;
}

GetEntityProfileResponse::GetEntityProfileResponse(GetEntityProfileResponse&& src) :
    PFAccountManagementGetEntityProfileResponse{ src },
    m_profile{ std::move(src.m_profile) }
{
    profile = m_profile ? m_profile.operator->() : nullptr;
}

GetEntityProfileResponse::GetEntityProfileResponse(const PFAccountManagementGetEntityProfileResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetEntityProfileResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Profile", m_profile, profile);
}

JsonValue GetEntityProfileResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetEntityProfileResponse>(*this);
}

GetEntityProfilesRequest::GetEntityProfilesRequest() :
    PFAccountManagementGetEntityProfilesRequest{}
{
}

GetEntityProfilesRequest::GetEntityProfilesRequest(const GetEntityProfilesRequest& src) :
    PFAccountManagementGetEntityProfilesRequest{ src },
    m_customTags{ src.m_customTags },
    m_dataAsObject{ src.m_dataAsObject },
    m_entities{ src.m_entities }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    dataAsObject = m_dataAsObject ? m_dataAsObject.operator->() : nullptr;
    entities = m_entities.Empty() ? nullptr : m_entities.Data();
}

GetEntityProfilesRequest::GetEntityProfilesRequest(GetEntityProfilesRequest&& src) :
    PFAccountManagementGetEntityProfilesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_dataAsObject{ std::move(src.m_dataAsObject) },
    m_entities{ std::move(src.m_entities) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    dataAsObject = m_dataAsObject ? m_dataAsObject.operator->() : nullptr;
    entities = m_entities.Empty() ? nullptr : m_entities.Data();
}

GetEntityProfilesRequest::GetEntityProfilesRequest(const PFAccountManagementGetEntityProfilesRequest& src)
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
    return JsonUtils::ToJson<PFAccountManagementGetEntityProfilesRequest>(*this);
}

GetEntityProfilesResponse::GetEntityProfilesResponse() :
    PFAccountManagementGetEntityProfilesResponse{}
{
}

GetEntityProfilesResponse::GetEntityProfilesResponse(const GetEntityProfilesResponse& src) :
    PFAccountManagementGetEntityProfilesResponse{ src },
    m_profiles{ src.m_profiles }
{
    profiles = m_profiles.Empty() ? nullptr : m_profiles.Data();
}

GetEntityProfilesResponse::GetEntityProfilesResponse(GetEntityProfilesResponse&& src) :
    PFAccountManagementGetEntityProfilesResponse{ src },
    m_profiles{ std::move(src.m_profiles) }
{
    profiles = m_profiles.Empty() ? nullptr : m_profiles.Data();
}

GetEntityProfilesResponse::GetEntityProfilesResponse(const PFAccountManagementGetEntityProfilesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetEntityProfilesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Profiles", m_profiles, profiles, profilesCount);
}

JsonValue GetEntityProfilesResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementGetEntityProfilesResponse>(*this);
}

GetTitlePlayersFromMasterPlayerAccountIdsRequest::GetTitlePlayersFromMasterPlayerAccountIdsRequest() :
    PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest{}
{
}

GetTitlePlayersFromMasterPlayerAccountIdsRequest::GetTitlePlayersFromMasterPlayerAccountIdsRequest(const GetTitlePlayersFromMasterPlayerAccountIdsRequest& src) :
    PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest{ src },
    m_customTags{ src.m_customTags },
    m_masterPlayerAccountIds{ src.m_masterPlayerAccountIds },
    m_titleId{ src.m_titleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    masterPlayerAccountIds = m_masterPlayerAccountIds.Empty() ? nullptr : m_masterPlayerAccountIds.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GetTitlePlayersFromMasterPlayerAccountIdsRequest::GetTitlePlayersFromMasterPlayerAccountIdsRequest(GetTitlePlayersFromMasterPlayerAccountIdsRequest&& src) :
    PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_masterPlayerAccountIds{ std::move(src.m_masterPlayerAccountIds) },
    m_titleId{ std::move(src.m_titleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    masterPlayerAccountIds = m_masterPlayerAccountIds.Empty() ? nullptr : m_masterPlayerAccountIds.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GetTitlePlayersFromMasterPlayerAccountIdsRequest::GetTitlePlayersFromMasterPlayerAccountIdsRequest(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest& src)
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
    return JsonUtils::ToJson<PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest>(*this);
}

GetTitlePlayersFromMasterPlayerAccountIdsResponse::GetTitlePlayersFromMasterPlayerAccountIdsResponse() :
    PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse{}
{
}

GetTitlePlayersFromMasterPlayerAccountIdsResponse::GetTitlePlayersFromMasterPlayerAccountIdsResponse(const GetTitlePlayersFromMasterPlayerAccountIdsResponse& src) :
    PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse{ src },
    m_titleId{ src.m_titleId },
    m_titlePlayerAccounts{ src.m_titlePlayerAccounts }
{
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titlePlayerAccounts = m_titlePlayerAccounts.Empty() ? nullptr : m_titlePlayerAccounts.Data();
}

GetTitlePlayersFromMasterPlayerAccountIdsResponse::GetTitlePlayersFromMasterPlayerAccountIdsResponse(GetTitlePlayersFromMasterPlayerAccountIdsResponse&& src) :
    PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse{ src },
    m_titleId{ std::move(src.m_titleId) },
    m_titlePlayerAccounts{ std::move(src.m_titlePlayerAccounts) }
{
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titlePlayerAccounts = m_titlePlayerAccounts.Empty() ? nullptr : m_titlePlayerAccounts.Data();
}

GetTitlePlayersFromMasterPlayerAccountIdsResponse::GetTitlePlayersFromMasterPlayerAccountIdsResponse(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse& src)
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
    return JsonUtils::ToJson<PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse>(*this);
}

SetGlobalPolicyRequest::SetGlobalPolicyRequest() :
    PFAccountManagementSetGlobalPolicyRequest{}
{
}

SetGlobalPolicyRequest::SetGlobalPolicyRequest(const SetGlobalPolicyRequest& src) :
    PFAccountManagementSetGlobalPolicyRequest{ src },
    m_customTags{ src.m_customTags },
    m_permissions{ src.m_permissions }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

SetGlobalPolicyRequest::SetGlobalPolicyRequest(SetGlobalPolicyRequest&& src) :
    PFAccountManagementSetGlobalPolicyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_permissions{ std::move(src.m_permissions) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

SetGlobalPolicyRequest::SetGlobalPolicyRequest(const PFAccountManagementSetGlobalPolicyRequest& src)
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
    return JsonUtils::ToJson<PFAccountManagementSetGlobalPolicyRequest>(*this);
}

SetProfileLanguageRequest::SetProfileLanguageRequest() :
    PFAccountManagementSetProfileLanguageRequest{}
{
}

SetProfileLanguageRequest::SetProfileLanguageRequest(const SetProfileLanguageRequest& src) :
    PFAccountManagementSetProfileLanguageRequest{ src },
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
    PFAccountManagementSetProfileLanguageRequest{ src },
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

SetProfileLanguageRequest::SetProfileLanguageRequest(const PFAccountManagementSetProfileLanguageRequest& src)
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
    return JsonUtils::ToJson<PFAccountManagementSetProfileLanguageRequest>(*this);
}

SetProfileLanguageResponse::SetProfileLanguageResponse() :
    PFAccountManagementSetProfileLanguageResponse{}
{
}

SetProfileLanguageResponse::SetProfileLanguageResponse(const SetProfileLanguageResponse& src) :
    PFAccountManagementSetProfileLanguageResponse{ src },
    m_operationResult{ src.m_operationResult },
    m_versionNumber{ src.m_versionNumber }
{
    operationResult = m_operationResult ? m_operationResult.operator->() : nullptr;
    versionNumber = m_versionNumber ? m_versionNumber.operator->() : nullptr;
}

SetProfileLanguageResponse::SetProfileLanguageResponse(SetProfileLanguageResponse&& src) :
    PFAccountManagementSetProfileLanguageResponse{ src },
    m_operationResult{ std::move(src.m_operationResult) },
    m_versionNumber{ std::move(src.m_versionNumber) }
{
    operationResult = m_operationResult ? m_operationResult.operator->() : nullptr;
    versionNumber = m_versionNumber ? m_versionNumber.operator->() : nullptr;
}

SetProfileLanguageResponse::SetProfileLanguageResponse(const PFAccountManagementSetProfileLanguageResponse& src)
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
    return JsonUtils::ToJson<PFAccountManagementSetProfileLanguageResponse>(*this);
}

SetEntityProfilePolicyRequest::SetEntityProfilePolicyRequest() :
    PFAccountManagementSetEntityProfilePolicyRequest{}
{
}

SetEntityProfilePolicyRequest::SetEntityProfilePolicyRequest(const SetEntityProfilePolicyRequest& src) :
    PFAccountManagementSetEntityProfilePolicyRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_statements{ src.m_statements }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

SetEntityProfilePolicyRequest::SetEntityProfilePolicyRequest(SetEntityProfilePolicyRequest&& src) :
    PFAccountManagementSetEntityProfilePolicyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_statements{ std::move(src.m_statements) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

SetEntityProfilePolicyRequest::SetEntityProfilePolicyRequest(const PFAccountManagementSetEntityProfilePolicyRequest& src)
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
    return JsonUtils::ToJson<PFAccountManagementSetEntityProfilePolicyRequest>(*this);
}

SetEntityProfilePolicyResponse::SetEntityProfilePolicyResponse() :
    PFAccountManagementSetEntityProfilePolicyResponse{}
{
}

SetEntityProfilePolicyResponse::SetEntityProfilePolicyResponse(const SetEntityProfilePolicyResponse& src) :
    PFAccountManagementSetEntityProfilePolicyResponse{ src },
    m_permissions{ src.m_permissions }
{
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

SetEntityProfilePolicyResponse::SetEntityProfilePolicyResponse(SetEntityProfilePolicyResponse&& src) :
    PFAccountManagementSetEntityProfilePolicyResponse{ src },
    m_permissions{ std::move(src.m_permissions) }
{
    permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
}

SetEntityProfilePolicyResponse::SetEntityProfilePolicyResponse(const PFAccountManagementSetEntityProfilePolicyResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetEntityProfilePolicyResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Permissions", m_permissions, permissions, permissionsCount);
}

JsonValue SetEntityProfilePolicyResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAccountManagementSetEntityProfilePolicyResponse>(*this);
}

} // namespace AccountManagementModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFAccountManagementBanRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DurationInHours", input.durationInHours);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementBanUsersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Bans", input.bans, input.bansCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementBanInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Active", input.active);
    JsonUtils::ObjectAddMember(output, "BanId", input.banId);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementBanUsersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementDeleteMasterPlayerAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "MetaData", input.metaData);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementDeleteMasterPlayerAccountResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "JobReceiptId", input.jobReceiptId);
    JsonUtils::ObjectAddMember(output, "TitleIds", input.titleIds, input.titleIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementDeletePlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementExportMasterPlayerDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementExportMasterPlayerDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "JobReceiptId", input.jobReceiptId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayedTitleListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayedTitleListResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TitleIds", input.titleIds, input.titleIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayerIdFromAuthTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Token", input.token);
    JsonUtils::ObjectAddMember(output, "TokenType", input.tokenType);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayerIdFromAuthTokenResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayerProfileRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayerProfileResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLookupUserAccountInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLookupUserAccountInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetUserBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetUserBansResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementResetPasswordRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "Token", input.token);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementRevokeAllBansForUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementRevokeAllBansForUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementRevokeBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanIds", input.banIds, input.banIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementRevokeBansResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementAdminSendAccountRecoveryEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUpdateBanRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Active", input.active);
    JsonUtils::ObjectAddMember(output, "BanId", input.banId);
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "Permanent", input.permanent);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUpdateBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Bans", input.bans, input.bansCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUpdateBansResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementAdminUpdateUserTitleDisplayNameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUpdateUserTitleDisplayNameResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGenericServiceId& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ServiceName", input.serviceName);
    JsonUtils::ObjectAddMember(output, "UserId", input.userId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementClientAddGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementAddOrUpdateContactEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementAddUsernamePasswordRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementAddUsernamePasswordResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetAccountInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetAccountInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccountInfo", input.accountInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookIDs", input.facebookIDs, input.facebookIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementFacebookPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookId", input.facebookId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromFacebookIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesIds", input.facebookInstantGamesIds, input.facebookInstantGamesIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementFacebookInstantGamesPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameCenterIDs", input.gameCenterIDs, input.gameCenterIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGameCenterPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericIDs", input.genericIDs, input.genericIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGenericPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGenericIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GoogleIDs", input.googleIDs, input.googleIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGooglePlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GoogleId", input.googleId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromGoogleIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "KongregateIDs", input.kongregateIDs, input.kongregateIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementKongregatePlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromKongregateIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceIds", input.nintendoSwitchDeviceIds, input.nintendoSwitchDeviceIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementNintendoSwitchPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "PSNAccountIDs", input.PSNAccountIDs, input.PSNAccountIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementPSNAccountPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "PSNAccountId", input.PSNAccountId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SteamStringIDs", input.steamStringIDs, input.steamStringIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSteamPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "SteamStringId", input.steamStringId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromSteamIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TwitchIds", input.twitchIds, input.twitchIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementTwitchPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TwitchId", input.twitchId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromTwitchIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Sandbox", input.sandbox);
    JsonUtils::ObjectAddMember(output, "XboxLiveAccountIDs", input.xboxLiveAccountIDs, input.xboxLiveAccountIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementXboxLiveAccountPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "XboxLiveAccountId", input.xboxLiveAccountId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkAndroidDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDevice", input.androidDevice);
    JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "OS", input.OS);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkAppleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkCustomIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkFacebookAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkFacebookInstantGamesIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesSignature", input.facebookInstantGamesSignature);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkGameCenterAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
    JsonUtils::ObjectAddMember(output, "PublicKeyUrl", input.publicKeyUrl);
    JsonUtils::ObjectAddMember(output, "Salt", input.salt);
    JsonUtils::ObjectAddMember(output, "Signature", input.signature);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkGoogleAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "ServerAuthCode", input.serverAuthCode);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkIOSDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
    JsonUtils::ObjectAddMember(output, "DeviceModel", input.deviceModel);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "OS", input.OS);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkKongregateAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthTicket", input.authTicket);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkNintendoServiceAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkNintendoSwitchDeviceIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkOpenIdConnectRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IdToken", input.idToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementClientLinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkSteamAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "SteamTicket", input.steamTicket);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkTwitchAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementClientLinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementRemoveContactEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementClientRemoveGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementReportPlayerClientRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ReporteeId", input.reporteeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementReportPlayerClientResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SubmissionsRemaining", input.submissionsRemaining);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementClientSendAccountRecoveryEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkAndroidDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkAppleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkCustomIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkFacebookAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkFacebookInstantGamesIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkGameCenterAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkGoogleAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkIOSDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkKongregateAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkNintendoServiceAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkOpenIdConnectRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementClientUnlinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkSteamAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkTwitchAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementClientUnlinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementClientUpdateAvatarUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ImageUrl", input.imageUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementClientUpdateUserTitleDisplayNameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementServerAddGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementDeletePushNotificationTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabIDs", input.playFabIDs, input.playFabIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementServerCustomIDPlayFabIDPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetUserAccountInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetUserAccountInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementServerLinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLinkServerCustomIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementServerLinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementServerRemoveGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementLocalizedPushNotificationProperties& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "Subject", input.subject);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSavePushNotificationTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidPayload", input.androidPayload);
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "IOSPayload", input.iOSPayload);
    JsonUtils::ObjectAddMember(output, "LocalizedPushNotificationTemplates", input.localizedPushNotificationTemplates, input.localizedPushNotificationTemplatesCount);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSavePushNotificationTemplateResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSendCustomAccountRecoveryEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSendEmailFromTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementAdvancedPushPlatformMsg& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GCMDataOnly", input.gCMDataOnly);
    JsonUtils::ObjectAddMember(output, "Json", input.json);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementPushNotificationPackage& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Badge", input.badge);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
    JsonUtils::ObjectAddMember(output, "Icon", input.icon);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "Sound", input.sound);
    JsonUtils::ObjectAddMember(output, "Title", input.title);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSendPushNotificationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdvancedPlatformDelivery", input.advancedPlatformDelivery, input.advancedPlatformDeliveryCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "Package", input.package);
    JsonUtils::ObjectAddMember(output, "Recipient", input.recipient);
    JsonUtils::ObjectAddMember(output, "Subject", input.subject);
    JsonUtils::ObjectAddMember(output, "TargetPlatforms", input.targetPlatforms, input.targetPlatformsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSendPushNotificationFromTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
    JsonUtils::ObjectAddMember(output, "Recipient", input.recipient);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementServerUnlinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementUnlinkServerCustomIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementServerUnlinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementServerUpdateAvatarUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ImageUrl", input.imageUrl);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetGlobalPolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementEntityPermissionStatement& input)
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
inline JsonValue ToJson<>(const PFAccountManagementGetGlobalPolicyResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetEntityProfileRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DataAsObject", input.dataAsObject);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementEntityProfileFileMetadata& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Checksum", input.checksum);
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    JsonUtils::ObjectAddMember(output, "LastModified", input.lastModified, true);
    JsonUtils::ObjectAddMember(output, "Size", input.size);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementEntityDataObject& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataObject", input.dataObject);
    JsonUtils::ObjectAddMember(output, "EscapedDataObject", input.escapedDataObject);
    JsonUtils::ObjectAddMember(output, "ObjectName", input.objectName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementEntityStatisticChildValue& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ChildName", input.childName);
    JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementEntityStatisticValue& input)
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
inline JsonValue ToJson<>(const PFAccountManagementEntityProfileBody& input)
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
inline JsonValue ToJson<>(const PFAccountManagementGetEntityProfileResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Profile", input.profile);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetEntityProfilesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DataAsObject", input.dataAsObject);
    JsonUtils::ObjectAddMember(output, "Entities", input.entities, input.entitiesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetEntityProfilesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Profiles", input.profiles, input.profilesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MasterPlayerAccountIds", input.masterPlayerAccountIds, input.masterPlayerAccountIdsCount);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TitlePlayerAccounts", input.titlePlayerAccounts, input.titlePlayerAccountsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSetGlobalPolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSetProfileLanguageRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "ExpectedVersion", input.expectedVersion);
    JsonUtils::ObjectAddMember(output, "Language", input.language);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSetProfileLanguageResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OperationResult", input.operationResult);
    JsonUtils::ObjectAddMember(output, "VersionNumber", input.versionNumber);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSetEntityProfilePolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAccountManagementSetEntityProfilePolicyResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
