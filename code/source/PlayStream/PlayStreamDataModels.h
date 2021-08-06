#pragma once

#include <playfab/PFPlayStreamDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace PlayStreamModels
{

// PlayStream Classes
struct AddPlayerTagRequest : public PFPlayStreamAddPlayerTagRequest, public BaseModel
{
    AddPlayerTagRequest();
    AddPlayerTagRequest(const AddPlayerTagRequest& src);
    AddPlayerTagRequest(AddPlayerTagRequest&& src);
    AddPlayerTagRequest(const PFPlayStreamAddPlayerTagRequest& src);
    AddPlayerTagRequest& operator=(const AddPlayerTagRequest&) = delete;
    ~AddPlayerTagRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_tagName;
};

struct GetSegmentResult : public PFPlayStreamGetSegmentResult, public SerializableModel, public ApiResult
{
    GetSegmentResult();
    GetSegmentResult(const GetSegmentResult& src);
    GetSegmentResult(GetSegmentResult&& src);
    GetSegmentResult(const PFPlayStreamGetSegmentResult& src);
    GetSegmentResult& operator=(const GetSegmentResult&) = delete;
    ~GetSegmentResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_aBTestParent;
    String m_id;
    String m_name;
};

struct GetAllSegmentsResult : public PFPlayStreamGetAllSegmentsResult, public BaseModel, public ApiResult
{
    GetAllSegmentsResult();
    GetAllSegmentsResult(const GetAllSegmentsResult& src);
    GetAllSegmentsResult(GetAllSegmentsResult&& src);
    GetAllSegmentsResult(const PFPlayStreamGetAllSegmentsResult& src);
    GetAllSegmentsResult& operator=(const GetAllSegmentsResult&) = delete;
    ~GetAllSegmentsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayStreamGetSegmentResult, GetSegmentResult> m_segments;
};

struct GetPlayersSegmentsRequest : public PFPlayStreamGetPlayersSegmentsRequest, public BaseModel
{
    GetPlayersSegmentsRequest();
    GetPlayersSegmentsRequest(const GetPlayersSegmentsRequest& src);
    GetPlayersSegmentsRequest(GetPlayersSegmentsRequest&& src);
    GetPlayersSegmentsRequest(const PFPlayStreamGetPlayersSegmentsRequest& src);
    GetPlayersSegmentsRequest& operator=(const GetPlayersSegmentsRequest&) = delete;
    ~GetPlayersSegmentsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct GetPlayerSegmentsResult : public PFPlayStreamGetPlayerSegmentsResult, public BaseModel, public ApiResult
{
    GetPlayerSegmentsResult();
    GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src);
    GetPlayerSegmentsResult(GetPlayerSegmentsResult&& src);
    GetPlayerSegmentsResult(const PFPlayStreamGetPlayerSegmentsResult& src);
    GetPlayerSegmentsResult& operator=(const GetPlayerSegmentsResult&) = delete;
    ~GetPlayerSegmentsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayStreamGetSegmentResult, GetSegmentResult> m_segments;
};

struct GetPlayersInSegmentRequest : public PFPlayStreamGetPlayersInSegmentRequest, public BaseModel
{
    GetPlayersInSegmentRequest();
    GetPlayersInSegmentRequest(const GetPlayersInSegmentRequest& src);
    GetPlayersInSegmentRequest(GetPlayersInSegmentRequest&& src);
    GetPlayersInSegmentRequest(const PFPlayStreamGetPlayersInSegmentRequest& src);
    GetPlayersInSegmentRequest& operator=(const GetPlayersInSegmentRequest&) = delete;
    ~GetPlayersInSegmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_continuationToken;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<uint32_t> m_maxBatchSize;
    StdExtra::optional<uint32_t> m_secondsToLive;
    String m_segmentId;
};

struct AdCampaignAttribution : public PFPlayStreamAdCampaignAttribution, public SerializableModel
{
    AdCampaignAttribution();
    AdCampaignAttribution(const AdCampaignAttribution& src);
    AdCampaignAttribution(AdCampaignAttribution&& src);
    AdCampaignAttribution(const PFPlayStreamAdCampaignAttribution& src);
    AdCampaignAttribution& operator=(const AdCampaignAttribution&) = delete;
    ~AdCampaignAttribution() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_campaignId;
    String m_platform;
};

struct ContactEmailInfo : public PFPlayStreamContactEmailInfo, public BaseModel
{
    ContactEmailInfo();
    ContactEmailInfo(const ContactEmailInfo& src);
    ContactEmailInfo(ContactEmailInfo&& src);
    ContactEmailInfo(const PFPlayStreamContactEmailInfo& src);
    ContactEmailInfo& operator=(const ContactEmailInfo&) = delete;
    ~ContactEmailInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_emailAddress;
    String m_name;
    StdExtra::optional<PFEmailVerificationStatus> m_verificationStatus;
};

struct PlayerLinkedAccount : public PFPlayStreamPlayerLinkedAccount, public BaseModel
{
    PlayerLinkedAccount();
    PlayerLinkedAccount(const PlayerLinkedAccount& src);
    PlayerLinkedAccount(PlayerLinkedAccount&& src);
    PlayerLinkedAccount(const PFPlayStreamPlayerLinkedAccount& src);
    PlayerLinkedAccount& operator=(const PlayerLinkedAccount&) = delete;
    ~PlayerLinkedAccount() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_email;
    StdExtra::optional<PFLoginIdentityProvider> m_platform;
    String m_platformUserId;
    String m_username;
};

struct PlayerLocation : public PFPlayStreamPlayerLocation, public BaseModel
{
    PlayerLocation();
    PlayerLocation(const PlayerLocation& src);
    PlayerLocation(PlayerLocation&& src);
    PlayerLocation(const PFPlayStreamPlayerLocation& src);
    PlayerLocation& operator=(const PlayerLocation&) = delete;
    ~PlayerLocation() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_city;
    StdExtra::optional<double> m_latitude;
    StdExtra::optional<double> m_longitude;
};

struct PlayerStatistic : public PFPlayStreamPlayerStatistic, public SerializableModel
{
    PlayerStatistic();
    PlayerStatistic(const PlayerStatistic& src);
    PlayerStatistic(PlayerStatistic&& src);
    PlayerStatistic(const PFPlayStreamPlayerStatistic& src);
    PlayerStatistic& operator=(const PlayerStatistic&) = delete;
    ~PlayerStatistic() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_id;
    String m_name;
};

struct PushNotificationRegistration : public PFPlayStreamPushNotificationRegistration, public BaseModel
{
    PushNotificationRegistration();
    PushNotificationRegistration(const PushNotificationRegistration& src);
    PushNotificationRegistration(PushNotificationRegistration&& src);
    PushNotificationRegistration(const PFPlayStreamPushNotificationRegistration& src);
    PushNotificationRegistration& operator=(const PushNotificationRegistration&) = delete;
    ~PushNotificationRegistration() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_notificationEndpointARN;
    StdExtra::optional<PFPushNotificationPlatform> m_platform;
};

struct PlayerProfile : public PFPlayStreamPlayerProfile, public BaseModel
{
    PlayerProfile();
    PlayerProfile(const PlayerProfile& src);
    PlayerProfile(PlayerProfile&& src);
    PlayerProfile(const PFPlayStreamPlayerProfile& src);
    PlayerProfile& operator=(const PlayerProfile&) = delete;
    ~PlayerProfile() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayStreamAdCampaignAttribution, AdCampaignAttribution> m_adCampaignAttributions;
    String m_avatarUrl;
    StdExtra::optional<time_t> m_bannedUntil;
    PointerArrayModel<PFPlayStreamContactEmailInfo, ContactEmailInfo> m_contactEmailAddresses;
    StdExtra::optional<time_t> m_created;
    String m_displayName;
    StdExtra::optional<time_t> m_lastLogin;
    PointerArrayModel<PFPlayStreamPlayerLinkedAccount, PlayerLinkedAccount> m_linkedAccounts;
    AssociativeArrayModel<PFPlayStreamPlayerLocationDictionaryEntry, PlayerLocation> m_locations;
    StdExtra::optional<PFLoginIdentityProvider> m_origination;
    PointerArrayModel<char, String> m_playerExperimentVariants;
    String m_playerId;
    PointerArrayModel<PFPlayStreamPlayerStatistic, PlayerStatistic> m_playerStatistics;
    String m_publisherId;
    PointerArrayModel<PFPlayStreamPushNotificationRegistration, PushNotificationRegistration> m_pushNotificationRegistrations;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_statistics;
    PointerArrayModel<char, String> m_tags;
    String m_titleId;
    StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_valuesToDate;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_virtualCurrencyBalances;
};

struct GetPlayersInSegmentResult : public PFPlayStreamGetPlayersInSegmentResult, public BaseModel, public ApiResult
{
    GetPlayersInSegmentResult();
    GetPlayersInSegmentResult(const GetPlayersInSegmentResult& src);
    GetPlayersInSegmentResult(GetPlayersInSegmentResult&& src);
    GetPlayersInSegmentResult(const PFPlayStreamGetPlayersInSegmentResult& src);
    GetPlayersInSegmentResult& operator=(const GetPlayersInSegmentResult&) = delete;
    ~GetPlayersInSegmentResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_continuationToken;
    PointerArrayModel<PFPlayStreamPlayerProfile, PlayerProfile> m_playerProfiles;
};

struct GetPlayerTagsRequest : public PFPlayStreamGetPlayerTagsRequest, public BaseModel
{
    GetPlayerTagsRequest();
    GetPlayerTagsRequest(const GetPlayerTagsRequest& src);
    GetPlayerTagsRequest(GetPlayerTagsRequest&& src);
    GetPlayerTagsRequest(const PFPlayStreamGetPlayerTagsRequest& src);
    GetPlayerTagsRequest& operator=(const GetPlayerTagsRequest&) = delete;
    ~GetPlayerTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playfabNamespace;
    String m_playFabId;
};

struct GetPlayerTagsResult : public PFPlayStreamGetPlayerTagsResult, public BaseModel, public ApiResult
{
    GetPlayerTagsResult();
    GetPlayerTagsResult(const GetPlayerTagsResult& src);
    GetPlayerTagsResult(GetPlayerTagsResult&& src);
    GetPlayerTagsResult(const PFPlayStreamGetPlayerTagsResult& src);
    GetPlayerTagsResult& operator=(const GetPlayerTagsResult&) = delete;
    ~GetPlayerTagsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_playFabId;
    PointerArrayModel<char, String> m_tags;
};

struct RemovePlayerTagRequest : public PFPlayStreamRemovePlayerTagRequest, public BaseModel
{
    RemovePlayerTagRequest();
    RemovePlayerTagRequest(const RemovePlayerTagRequest& src);
    RemovePlayerTagRequest(RemovePlayerTagRequest&& src);
    RemovePlayerTagRequest(const PFPlayStreamRemovePlayerTagRequest& src);
    RemovePlayerTagRequest& operator=(const RemovePlayerTagRequest&) = delete;
    ~RemovePlayerTagRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_tagName;
};

struct EventContents : public PFPlayStreamEventContents, public BaseModel
{
    EventContents();
    EventContents(const EventContents& src);
    EventContents(EventContents&& src);
    EventContents(const PFPlayStreamEventContents& src);
    EventContents& operator=(const EventContents&) = delete;
    ~EventContents() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_eventNamespace;
    String m_name;
    String m_originalId;
    StdExtra::optional<time_t> m_originalTimestamp;
    JsonObject m_payload;
    String m_payloadJSON;
};

struct WriteEventsRequest : public PFPlayStreamWriteEventsRequest, public BaseModel
{
    WriteEventsRequest();
    WriteEventsRequest(const WriteEventsRequest& src);
    WriteEventsRequest(WriteEventsRequest&& src);
    WriteEventsRequest(const PFPlayStreamWriteEventsRequest& src);
    WriteEventsRequest& operator=(const WriteEventsRequest&) = delete;
    ~WriteEventsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFPlayStreamEventContents, EventContents> m_events;
};

struct WriteEventsResponse : public PFPlayStreamWriteEventsResponse, public BaseModel, public ApiResult
{
    WriteEventsResponse();
    WriteEventsResponse(const WriteEventsResponse& src);
    WriteEventsResponse(WriteEventsResponse&& src);
    WriteEventsResponse(const PFPlayStreamWriteEventsResponse& src);
    WriteEventsResponse& operator=(const WriteEventsResponse&) = delete;
    ~WriteEventsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_assignedEventIds;
};

} // namespace PlayStreamModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFPlayStreamAddPlayerTagRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamGetSegmentResult& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamGetAllSegmentsResult& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamGetPlayersSegmentsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamGetPlayerSegmentsResult& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamGetPlayersInSegmentRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamAdCampaignAttribution& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamContactEmailInfo& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamPlayerLinkedAccount& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamPlayerLocation& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamPlayerStatistic& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamPushNotificationRegistration& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamPlayerProfile& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamGetPlayersInSegmentResult& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamGetPlayerTagsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamGetPlayerTagsResult& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamRemovePlayerTagRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamEventContents& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamWriteEventsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayStreamWriteEventsResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
