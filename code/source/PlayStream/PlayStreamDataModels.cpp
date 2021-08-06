#include "stdafx.h"
#include "PlayStreamDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace PlayStreamModels
{

AddPlayerTagRequest::AddPlayerTagRequest() :
    PFPlayStreamAddPlayerTagRequest{}
{
}

AddPlayerTagRequest::AddPlayerTagRequest(const AddPlayerTagRequest& src) :
    PFPlayStreamAddPlayerTagRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_tagName{ src.m_tagName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

AddPlayerTagRequest::AddPlayerTagRequest(AddPlayerTagRequest&& src) :
    PFPlayStreamAddPlayerTagRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tagName{ std::move(src.m_tagName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

AddPlayerTagRequest::AddPlayerTagRequest(const PFPlayStreamAddPlayerTagRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddPlayerTagRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TagName", m_tagName, tagName);
}

JsonValue AddPlayerTagRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamAddPlayerTagRequest>(*this);
}

GetSegmentResult::GetSegmentResult() :
    PFPlayStreamGetSegmentResult{}
{
}

GetSegmentResult::GetSegmentResult(const GetSegmentResult& src) :
    PFPlayStreamGetSegmentResult{ src },
    m_aBTestParent{ src.m_aBTestParent },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    aBTestParent = m_aBTestParent.empty() ? nullptr : m_aBTestParent.data();
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GetSegmentResult::GetSegmentResult(GetSegmentResult&& src) :
    PFPlayStreamGetSegmentResult{ src },
    m_aBTestParent{ std::move(src.m_aBTestParent) },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    aBTestParent = m_aBTestParent.empty() ? nullptr : m_aBTestParent.data();
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GetSegmentResult::GetSegmentResult(const PFPlayStreamGetSegmentResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSegmentResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ABTestParent", m_aBTestParent, aBTestParent);
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue GetSegmentResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamGetSegmentResult>(*this);
}

size_t GetSegmentResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayStreamGetSegmentResult) };
    serializedSize += (m_aBTestParent.size() + 1);
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void GetSegmentResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayStreamGetSegmentResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayStreamGetSegmentResult);
    memcpy(stringBuffer, m_aBTestParent.data(), m_aBTestParent.size() + 1);
    serializedStruct->aBTestParent = stringBuffer;
    stringBuffer += m_aBTestParent.size() + 1;
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetAllSegmentsResult::GetAllSegmentsResult() :
    PFPlayStreamGetAllSegmentsResult{}
{
}

GetAllSegmentsResult::GetAllSegmentsResult(const GetAllSegmentsResult& src) :
    PFPlayStreamGetAllSegmentsResult{ src },
    m_segments{ src.m_segments }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetAllSegmentsResult::GetAllSegmentsResult(GetAllSegmentsResult&& src) :
    PFPlayStreamGetAllSegmentsResult{ src },
    m_segments{ std::move(src.m_segments) }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetAllSegmentsResult::GetAllSegmentsResult(const PFPlayStreamGetAllSegmentsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAllSegmentsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
}

JsonValue GetAllSegmentsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamGetAllSegmentsResult>(*this);
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest() :
    PFPlayStreamGetPlayersSegmentsRequest{}
{
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest(const GetPlayersSegmentsRequest& src) :
    PFPlayStreamGetPlayersSegmentsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest(GetPlayersSegmentsRequest&& src) :
    PFPlayStreamGetPlayersSegmentsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest(const PFPlayStreamGetPlayersSegmentsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayersSegmentsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayersSegmentsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamGetPlayersSegmentsRequest>(*this);
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult() :
    PFPlayStreamGetPlayerSegmentsResult{}
{
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src) :
    PFPlayStreamGetPlayerSegmentsResult{ src },
    m_segments{ src.m_segments }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(GetPlayerSegmentsResult&& src) :
    PFPlayStreamGetPlayerSegmentsResult{ src },
    m_segments{ std::move(src.m_segments) }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(const PFPlayStreamGetPlayerSegmentsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerSegmentsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
}

JsonValue GetPlayerSegmentsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamGetPlayerSegmentsResult>(*this);
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest() :
    PFPlayStreamGetPlayersInSegmentRequest{}
{
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest(const GetPlayersInSegmentRequest& src) :
    PFPlayStreamGetPlayersInSegmentRequest{ src },
    m_continuationToken{ src.m_continuationToken },
    m_customTags{ src.m_customTags },
    m_maxBatchSize{ src.m_maxBatchSize },
    m_secondsToLive{ src.m_secondsToLive },
    m_segmentId{ src.m_segmentId }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxBatchSize = m_maxBatchSize ? m_maxBatchSize.operator->() : nullptr;
    secondsToLive = m_secondsToLive ? m_secondsToLive.operator->() : nullptr;
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest(GetPlayersInSegmentRequest&& src) :
    PFPlayStreamGetPlayersInSegmentRequest{ src },
    m_continuationToken{ std::move(src.m_continuationToken) },
    m_customTags{ std::move(src.m_customTags) },
    m_maxBatchSize{ std::move(src.m_maxBatchSize) },
    m_secondsToLive{ std::move(src.m_secondsToLive) },
    m_segmentId{ std::move(src.m_segmentId) }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxBatchSize = m_maxBatchSize ? m_maxBatchSize.operator->() : nullptr;
    secondsToLive = m_secondsToLive ? m_secondsToLive.operator->() : nullptr;
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest(const PFPlayStreamGetPlayersInSegmentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayersInSegmentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ContinuationToken", m_continuationToken, continuationToken);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MaxBatchSize", m_maxBatchSize, maxBatchSize);
    JsonUtils::ObjectGetMember(input, "SecondsToLive", m_secondsToLive, secondsToLive);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
}

JsonValue GetPlayersInSegmentRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamGetPlayersInSegmentRequest>(*this);
}

AdCampaignAttribution::AdCampaignAttribution() :
    PFPlayStreamAdCampaignAttribution{}
{
}

AdCampaignAttribution::AdCampaignAttribution(const AdCampaignAttribution& src) :
    PFPlayStreamAdCampaignAttribution{ src },
    m_campaignId{ src.m_campaignId },
    m_platform{ src.m_platform }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    platform = m_platform.empty() ? nullptr : m_platform.data();
}

AdCampaignAttribution::AdCampaignAttribution(AdCampaignAttribution&& src) :
    PFPlayStreamAdCampaignAttribution{ src },
    m_campaignId{ std::move(src.m_campaignId) },
    m_platform{ std::move(src.m_platform) }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    platform = m_platform.empty() ? nullptr : m_platform.data();
}

AdCampaignAttribution::AdCampaignAttribution(const PFPlayStreamAdCampaignAttribution& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdCampaignAttribution::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AttributedAt", attributedAt, true);
    JsonUtils::ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
}

JsonValue AdCampaignAttribution::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamAdCampaignAttribution>(*this);
}

size_t AdCampaignAttribution::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayStreamAdCampaignAttribution) };
    serializedSize += (m_campaignId.size() + 1);
    serializedSize += (m_platform.size() + 1);
    return serializedSize;
}

void AdCampaignAttribution::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayStreamAdCampaignAttribution{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayStreamAdCampaignAttribution);
    memcpy(stringBuffer, m_campaignId.data(), m_campaignId.size() + 1);
    serializedStruct->campaignId = stringBuffer;
    stringBuffer += m_campaignId.size() + 1;
    memcpy(stringBuffer, m_platform.data(), m_platform.size() + 1);
    serializedStruct->platform = stringBuffer;
    stringBuffer += m_platform.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ContactEmailInfo::ContactEmailInfo() :
    PFPlayStreamContactEmailInfo{}
{
}

ContactEmailInfo::ContactEmailInfo(const ContactEmailInfo& src) :
    PFPlayStreamContactEmailInfo{ src },
    m_emailAddress{ src.m_emailAddress },
    m_name{ src.m_name },
    m_verificationStatus{ src.m_verificationStatus }
{
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
    name = m_name.empty() ? nullptr : m_name.data();
    verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
}

ContactEmailInfo::ContactEmailInfo(ContactEmailInfo&& src) :
    PFPlayStreamContactEmailInfo{ src },
    m_emailAddress{ std::move(src.m_emailAddress) },
    m_name{ std::move(src.m_name) },
    m_verificationStatus{ std::move(src.m_verificationStatus) }
{
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
    name = m_name.empty() ? nullptr : m_name.data();
    verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
}

ContactEmailInfo::ContactEmailInfo(const PFPlayStreamContactEmailInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ContactEmailInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "VerificationStatus", m_verificationStatus, verificationStatus);
}

JsonValue ContactEmailInfo::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamContactEmailInfo>(*this);
}

PlayerLinkedAccount::PlayerLinkedAccount() :
    PFPlayStreamPlayerLinkedAccount{}
{
}

PlayerLinkedAccount::PlayerLinkedAccount(const PlayerLinkedAccount& src) :
    PFPlayStreamPlayerLinkedAccount{ src },
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

PlayerLinkedAccount::PlayerLinkedAccount(PlayerLinkedAccount&& src) :
    PFPlayStreamPlayerLinkedAccount{ src },
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

PlayerLinkedAccount::PlayerLinkedAccount(const PFPlayStreamPlayerLinkedAccount& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerLinkedAccount::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
    JsonUtils::ObjectGetMember(input, "PlatformUserId", m_platformUserId, platformUserId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue PlayerLinkedAccount::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamPlayerLinkedAccount>(*this);
}

PlayerLocation::PlayerLocation() :
    PFPlayStreamPlayerLocation{}
{
}

PlayerLocation::PlayerLocation(const PlayerLocation& src) :
    PFPlayStreamPlayerLocation{ src },
    m_city{ src.m_city },
    m_latitude{ src.m_latitude },
    m_longitude{ src.m_longitude }
{
    city = m_city.empty() ? nullptr : m_city.data();
    latitude = m_latitude ? m_latitude.operator->() : nullptr;
    longitude = m_longitude ? m_longitude.operator->() : nullptr;
}

PlayerLocation::PlayerLocation(PlayerLocation&& src) :
    PFPlayStreamPlayerLocation{ src },
    m_city{ std::move(src.m_city) },
    m_latitude{ std::move(src.m_latitude) },
    m_longitude{ std::move(src.m_longitude) }
{
    city = m_city.empty() ? nullptr : m_city.data();
    latitude = m_latitude ? m_latitude.operator->() : nullptr;
    longitude = m_longitude ? m_longitude.operator->() : nullptr;
}

PlayerLocation::PlayerLocation(const PFPlayStreamPlayerLocation& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerLocation::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "City", m_city, city);
    JsonUtils::ObjectGetMember(input, "ContinentCode", continentCode);
    JsonUtils::ObjectGetMember(input, "CountryCode", countryCode);
    JsonUtils::ObjectGetMember(input, "Latitude", m_latitude, latitude);
    JsonUtils::ObjectGetMember(input, "Longitude", m_longitude, longitude);
}

JsonValue PlayerLocation::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamPlayerLocation>(*this);
}

PlayerStatistic::PlayerStatistic() :
    PFPlayStreamPlayerStatistic{}
{
}

PlayerStatistic::PlayerStatistic(const PlayerStatistic& src) :
    PFPlayStreamPlayerStatistic{ src },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

PlayerStatistic::PlayerStatistic(PlayerStatistic&& src) :
    PFPlayStreamPlayerStatistic{ src },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

PlayerStatistic::PlayerStatistic(const PFPlayStreamPlayerStatistic& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerStatistic::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "StatisticValue", statisticValue);
    JsonUtils::ObjectGetMember(input, "StatisticVersion", statisticVersion);
}

JsonValue PlayerStatistic::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamPlayerStatistic>(*this);
}

size_t PlayerStatistic::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayStreamPlayerStatistic) };
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void PlayerStatistic::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayStreamPlayerStatistic{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayStreamPlayerStatistic);
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PushNotificationRegistration::PushNotificationRegistration() :
    PFPlayStreamPushNotificationRegistration{}
{
}

PushNotificationRegistration::PushNotificationRegistration(const PushNotificationRegistration& src) :
    PFPlayStreamPushNotificationRegistration{ src },
    m_notificationEndpointARN{ src.m_notificationEndpointARN },
    m_platform{ src.m_platform }
{
    notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
}

PushNotificationRegistration::PushNotificationRegistration(PushNotificationRegistration&& src) :
    PFPlayStreamPushNotificationRegistration{ src },
    m_notificationEndpointARN{ std::move(src.m_notificationEndpointARN) },
    m_platform{ std::move(src.m_platform) }
{
    notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
}

PushNotificationRegistration::PushNotificationRegistration(const PFPlayStreamPushNotificationRegistration& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationRegistration::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NotificationEndpointARN", m_notificationEndpointARN, notificationEndpointARN);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
}

JsonValue PushNotificationRegistration::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamPushNotificationRegistration>(*this);
}

PlayerProfile::PlayerProfile() :
    PFPlayStreamPlayerProfile{}
{
}

PlayerProfile::PlayerProfile(const PlayerProfile& src) :
    PFPlayStreamPlayerProfile{ src },
    m_adCampaignAttributions{ src.m_adCampaignAttributions },
    m_avatarUrl{ src.m_avatarUrl },
    m_bannedUntil{ src.m_bannedUntil },
    m_contactEmailAddresses{ src.m_contactEmailAddresses },
    m_created{ src.m_created },
    m_displayName{ src.m_displayName },
    m_lastLogin{ src.m_lastLogin },
    m_linkedAccounts{ src.m_linkedAccounts },
    m_locations{ src.m_locations },
    m_origination{ src.m_origination },
    m_playerExperimentVariants{ src.m_playerExperimentVariants },
    m_playerId{ src.m_playerId },
    m_playerStatistics{ src.m_playerStatistics },
    m_publisherId{ src.m_publisherId },
    m_pushNotificationRegistrations{ src.m_pushNotificationRegistrations },
    m_statistics{ src.m_statistics },
    m_tags{ src.m_tags },
    m_titleId{ src.m_titleId },
    m_totalValueToDateInUSD{ src.m_totalValueToDateInUSD },
    m_valuesToDate{ src.m_valuesToDate },
    m_virtualCurrencyBalances{ src.m_virtualCurrencyBalances }
{
    adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
    contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
    created = m_created ? m_created.operator->() : nullptr;
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
    locations = m_locations.Empty() ? nullptr : m_locations.Data();
    origination = m_origination ? m_origination.operator->() : nullptr;
    playerExperimentVariants = m_playerExperimentVariants.Empty() ? nullptr : m_playerExperimentVariants.Data();
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
    publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
    pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
    valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
    virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
}

PlayerProfile::PlayerProfile(PlayerProfile&& src) :
    PFPlayStreamPlayerProfile{ src },
    m_adCampaignAttributions{ std::move(src.m_adCampaignAttributions) },
    m_avatarUrl{ std::move(src.m_avatarUrl) },
    m_bannedUntil{ std::move(src.m_bannedUntil) },
    m_contactEmailAddresses{ std::move(src.m_contactEmailAddresses) },
    m_created{ std::move(src.m_created) },
    m_displayName{ std::move(src.m_displayName) },
    m_lastLogin{ std::move(src.m_lastLogin) },
    m_linkedAccounts{ std::move(src.m_linkedAccounts) },
    m_locations{ std::move(src.m_locations) },
    m_origination{ std::move(src.m_origination) },
    m_playerExperimentVariants{ std::move(src.m_playerExperimentVariants) },
    m_playerId{ std::move(src.m_playerId) },
    m_playerStatistics{ std::move(src.m_playerStatistics) },
    m_publisherId{ std::move(src.m_publisherId) },
    m_pushNotificationRegistrations{ std::move(src.m_pushNotificationRegistrations) },
    m_statistics{ std::move(src.m_statistics) },
    m_tags{ std::move(src.m_tags) },
    m_titleId{ std::move(src.m_titleId) },
    m_totalValueToDateInUSD{ std::move(src.m_totalValueToDateInUSD) },
    m_valuesToDate{ std::move(src.m_valuesToDate) },
    m_virtualCurrencyBalances{ std::move(src.m_virtualCurrencyBalances) }
{
    adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
    contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
    created = m_created ? m_created.operator->() : nullptr;
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
    locations = m_locations.Empty() ? nullptr : m_locations.Data();
    origination = m_origination ? m_origination.operator->() : nullptr;
    playerExperimentVariants = m_playerExperimentVariants.Empty() ? nullptr : m_playerExperimentVariants.Data();
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
    publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
    pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
    valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
    virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
}

PlayerProfile::PlayerProfile(const PFPlayStreamPlayerProfile& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerProfile::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdCampaignAttributions", m_adCampaignAttributions, adCampaignAttributions, adCampaignAttributionsCount);
    JsonUtils::ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
    JsonUtils::ObjectGetMember(input, "BannedUntil", m_bannedUntil, bannedUntil, true);
    JsonUtils::ObjectGetMember(input, "ContactEmailAddresses", m_contactEmailAddresses, contactEmailAddresses, contactEmailAddressesCount);
    JsonUtils::ObjectGetMember(input, "Created", m_created, created, true);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "LastLogin", m_lastLogin, lastLogin, true);
    JsonUtils::ObjectGetMember(input, "LinkedAccounts", m_linkedAccounts, linkedAccounts, linkedAccountsCount);
    JsonUtils::ObjectGetMember(input, "Locations", m_locations, locations, locationsCount);
    JsonUtils::ObjectGetMember(input, "Origination", m_origination, origination);
    JsonUtils::ObjectGetMember(input, "PlayerExperimentVariants", m_playerExperimentVariants, playerExperimentVariants, playerExperimentVariantsCount);
    JsonUtils::ObjectGetMember(input, "PlayerId", m_playerId, playerId);
    JsonUtils::ObjectGetMember(input, "PlayerStatistics", m_playerStatistics, playerStatistics, playerStatisticsCount);
    JsonUtils::ObjectGetMember(input, "PublisherId", m_publisherId, publisherId);
    JsonUtils::ObjectGetMember(input, "PushNotificationRegistrations", m_pushNotificationRegistrations, pushNotificationRegistrations, pushNotificationRegistrationsCount);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "TotalValueToDateInUSD", m_totalValueToDateInUSD, totalValueToDateInUSD);
    JsonUtils::ObjectGetMember(input, "ValuesToDate", m_valuesToDate, valuesToDate, valuesToDateCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyBalances", m_virtualCurrencyBalances, virtualCurrencyBalances, virtualCurrencyBalancesCount);
}

JsonValue PlayerProfile::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamPlayerProfile>(*this);
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult() :
    PFPlayStreamGetPlayersInSegmentResult{}
{
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult(const GetPlayersInSegmentResult& src) :
    PFPlayStreamGetPlayersInSegmentResult{ src },
    m_continuationToken{ src.m_continuationToken },
    m_playerProfiles{ src.m_playerProfiles }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    playerProfiles = m_playerProfiles.Empty() ? nullptr : m_playerProfiles.Data();
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult(GetPlayersInSegmentResult&& src) :
    PFPlayStreamGetPlayersInSegmentResult{ src },
    m_continuationToken{ std::move(src.m_continuationToken) },
    m_playerProfiles{ std::move(src.m_playerProfiles) }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    playerProfiles = m_playerProfiles.Empty() ? nullptr : m_playerProfiles.Data();
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult(const PFPlayStreamGetPlayersInSegmentResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayersInSegmentResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ContinuationToken", m_continuationToken, continuationToken);
    JsonUtils::ObjectGetMember(input, "PlayerProfiles", m_playerProfiles, playerProfiles, playerProfilesCount);
    JsonUtils::ObjectGetMember(input, "ProfilesInSegment", profilesInSegment);
}

JsonValue GetPlayersInSegmentResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamGetPlayersInSegmentResult>(*this);
}

GetPlayerTagsRequest::GetPlayerTagsRequest() :
    PFPlayStreamGetPlayerTagsRequest{}
{
}

GetPlayerTagsRequest::GetPlayerTagsRequest(const GetPlayerTagsRequest& src) :
    PFPlayStreamGetPlayerTagsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playfabNamespace{ src.m_playfabNamespace },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playfabNamespace = m_playfabNamespace.empty() ? nullptr : m_playfabNamespace.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerTagsRequest::GetPlayerTagsRequest(GetPlayerTagsRequest&& src) :
    PFPlayStreamGetPlayerTagsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playfabNamespace{ std::move(src.m_playfabNamespace) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playfabNamespace = m_playfabNamespace.empty() ? nullptr : m_playfabNamespace.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerTagsRequest::GetPlayerTagsRequest(const PFPlayStreamGetPlayerTagsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerTagsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Namespace", m_playfabNamespace, playfabNamespace);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayerTagsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamGetPlayerTagsRequest>(*this);
}

GetPlayerTagsResult::GetPlayerTagsResult() :
    PFPlayStreamGetPlayerTagsResult{}
{
}

GetPlayerTagsResult::GetPlayerTagsResult(const GetPlayerTagsResult& src) :
    PFPlayStreamGetPlayerTagsResult{ src },
    m_playFabId{ src.m_playFabId },
    m_tags{ src.m_tags }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

GetPlayerTagsResult::GetPlayerTagsResult(GetPlayerTagsResult&& src) :
    PFPlayStreamGetPlayerTagsResult{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tags{ std::move(src.m_tags) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

GetPlayerTagsResult::GetPlayerTagsResult(const PFPlayStreamGetPlayerTagsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerTagsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue GetPlayerTagsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamGetPlayerTagsResult>(*this);
}

RemovePlayerTagRequest::RemovePlayerTagRequest() :
    PFPlayStreamRemovePlayerTagRequest{}
{
}

RemovePlayerTagRequest::RemovePlayerTagRequest(const RemovePlayerTagRequest& src) :
    PFPlayStreamRemovePlayerTagRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_tagName{ src.m_tagName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

RemovePlayerTagRequest::RemovePlayerTagRequest(RemovePlayerTagRequest&& src) :
    PFPlayStreamRemovePlayerTagRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tagName{ std::move(src.m_tagName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

RemovePlayerTagRequest::RemovePlayerTagRequest(const PFPlayStreamRemovePlayerTagRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemovePlayerTagRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TagName", m_tagName, tagName);
}

JsonValue RemovePlayerTagRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamRemovePlayerTagRequest>(*this);
}

EventContents::EventContents() :
    PFPlayStreamEventContents{}
{
}

EventContents::EventContents(const EventContents& src) :
    PFPlayStreamEventContents{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_eventNamespace{ src.m_eventNamespace },
    m_name{ src.m_name },
    m_originalId{ src.m_originalId },
    m_originalTimestamp{ src.m_originalTimestamp },
    m_payload{ src.m_payload },
    m_payloadJSON{ src.m_payloadJSON }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    eventNamespace = m_eventNamespace.empty() ? nullptr : m_eventNamespace.data();
    name = m_name.empty() ? nullptr : m_name.data();
    originalId = m_originalId.empty() ? nullptr : m_originalId.data();
    originalTimestamp = m_originalTimestamp ? m_originalTimestamp.operator->() : nullptr;
    payload.stringValue = m_payload.StringValue();
    payloadJSON = m_payloadJSON.empty() ? nullptr : m_payloadJSON.data();
}

EventContents::EventContents(EventContents&& src) :
    PFPlayStreamEventContents{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_eventNamespace{ std::move(src.m_eventNamespace) },
    m_name{ std::move(src.m_name) },
    m_originalId{ std::move(src.m_originalId) },
    m_originalTimestamp{ std::move(src.m_originalTimestamp) },
    m_payload{ std::move(src.m_payload) },
    m_payloadJSON{ std::move(src.m_payloadJSON) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    eventNamespace = m_eventNamespace.empty() ? nullptr : m_eventNamespace.data();
    name = m_name.empty() ? nullptr : m_name.data();
    originalId = m_originalId.empty() ? nullptr : m_originalId.data();
    originalTimestamp = m_originalTimestamp ? m_originalTimestamp.operator->() : nullptr;
    payload.stringValue = m_payload.StringValue();
    payloadJSON = m_payloadJSON.empty() ? nullptr : m_payloadJSON.data();
}

EventContents::EventContents(const PFPlayStreamEventContents& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EventContents::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "EventNamespace", m_eventNamespace, eventNamespace);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "OriginalId", m_originalId, originalId);
    JsonUtils::ObjectGetMember(input, "OriginalTimestamp", m_originalTimestamp, originalTimestamp, true);
    JsonUtils::ObjectGetMember(input, "Payload", m_payload, payload);
    JsonUtils::ObjectGetMember(input, "PayloadJSON", m_payloadJSON, payloadJSON);
}

JsonValue EventContents::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamEventContents>(*this);
}

WriteEventsRequest::WriteEventsRequest() :
    PFPlayStreamWriteEventsRequest{}
{
}

WriteEventsRequest::WriteEventsRequest(const WriteEventsRequest& src) :
    PFPlayStreamWriteEventsRequest{ src },
    m_customTags{ src.m_customTags },
    m_events{ src.m_events }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    events = m_events.Empty() ? nullptr : m_events.Data();
}

WriteEventsRequest::WriteEventsRequest(WriteEventsRequest&& src) :
    PFPlayStreamWriteEventsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_events{ std::move(src.m_events) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    events = m_events.Empty() ? nullptr : m_events.Data();
}

WriteEventsRequest::WriteEventsRequest(const PFPlayStreamWriteEventsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteEventsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Events", m_events, events, eventsCount);
}

JsonValue WriteEventsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamWriteEventsRequest>(*this);
}

WriteEventsResponse::WriteEventsResponse() :
    PFPlayStreamWriteEventsResponse{}
{
}

WriteEventsResponse::WriteEventsResponse(const WriteEventsResponse& src) :
    PFPlayStreamWriteEventsResponse{ src },
    m_assignedEventIds{ src.m_assignedEventIds }
{
    assignedEventIds = m_assignedEventIds.Empty() ? nullptr : m_assignedEventIds.Data();
}

WriteEventsResponse::WriteEventsResponse(WriteEventsResponse&& src) :
    PFPlayStreamWriteEventsResponse{ src },
    m_assignedEventIds{ std::move(src.m_assignedEventIds) }
{
    assignedEventIds = m_assignedEventIds.Empty() ? nullptr : m_assignedEventIds.Data();
}

WriteEventsResponse::WriteEventsResponse(const PFPlayStreamWriteEventsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteEventsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AssignedEventIds", m_assignedEventIds, assignedEventIds, assignedEventIdsCount);
}

JsonValue WriteEventsResponse::ToJson() const
{
    return JsonUtils::ToJson<PFPlayStreamWriteEventsResponse>(*this);
}

} // namespace PlayStreamModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFPlayStreamAddPlayerTagRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TagName", input.tagName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamGetSegmentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ABTestParent", input.aBTestParent);
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamGetAllSegmentsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamGetPlayersSegmentsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamGetPlayerSegmentsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamGetPlayersInSegmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ContinuationToken", input.continuationToken);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MaxBatchSize", input.maxBatchSize);
    JsonUtils::ObjectAddMember(output, "SecondsToLive", input.secondsToLive);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamAdCampaignAttribution& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
    JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamContactEmailInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamPlayerLinkedAccount& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    JsonUtils::ObjectAddMember(output, "PlatformUserId", input.platformUserId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamPlayerLocation& input)
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
inline JsonValue ToJson<>(const PFPlayStreamPlayerStatistic& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "StatisticValue", input.statisticValue);
    JsonUtils::ObjectAddMember(output, "StatisticVersion", input.statisticVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamPushNotificationRegistration& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamPlayerProfile& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdCampaignAttributions", input.adCampaignAttributions, input.adCampaignAttributionsCount);
    JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
    JsonUtils::ObjectAddMember(output, "BannedUntil", input.bannedUntil, true);
    JsonUtils::ObjectAddMember(output, "ContactEmailAddresses", input.contactEmailAddresses, input.contactEmailAddressesCount);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "LastLogin", input.lastLogin, true);
    JsonUtils::ObjectAddMember(output, "LinkedAccounts", input.linkedAccounts, input.linkedAccountsCount);
    JsonUtils::ObjectAddMember(output, "Locations", input.locations, input.locationsCount);
    JsonUtils::ObjectAddMember(output, "Origination", input.origination);
    JsonUtils::ObjectAddMember(output, "PlayerExperimentVariants", input.playerExperimentVariants, input.playerExperimentVariantsCount);
    JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
    JsonUtils::ObjectAddMember(output, "PlayerStatistics", input.playerStatistics, input.playerStatisticsCount);
    JsonUtils::ObjectAddMember(output, "PublisherId", input.publisherId);
    JsonUtils::ObjectAddMember(output, "PushNotificationRegistrations", input.pushNotificationRegistrations, input.pushNotificationRegistrationsCount);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TotalValueToDateInUSD", input.totalValueToDateInUSD);
    JsonUtils::ObjectAddMember(output, "ValuesToDate", input.valuesToDate, input.valuesToDateCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyBalances", input.virtualCurrencyBalances, input.virtualCurrencyBalancesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamGetPlayersInSegmentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ContinuationToken", input.continuationToken);
    JsonUtils::ObjectAddMember(output, "PlayerProfiles", input.playerProfiles, input.playerProfilesCount);
    JsonUtils::ObjectAddMember(output, "ProfilesInSegment", input.profilesInSegment);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamGetPlayerTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Namespace", input.playfabNamespace);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamGetPlayerTagsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamRemovePlayerTagRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TagName", input.tagName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamEventContents& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "EventNamespace", input.eventNamespace);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "OriginalId", input.originalId);
    JsonUtils::ObjectAddMember(output, "OriginalTimestamp", input.originalTimestamp, true);
    JsonUtils::ObjectAddMember(output, "Payload", input.payload);
    JsonUtils::ObjectAddMember(output, "PayloadJSON", input.payloadJSON);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamWriteEventsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Events", input.events, input.eventsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayStreamWriteEventsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AssignedEventIds", input.assignedEventIds, input.assignedEventIdsCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
