#pragma once

#include <playfab/PFAdvertisingDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace AdvertisingModels
{

// Advertising Classes
struct AttributeInstallRequest : public PFAdvertisingAttributeInstallRequest, public SerializableModel
{
    AttributeInstallRequest();
    AttributeInstallRequest(const AttributeInstallRequest& src);
    AttributeInstallRequest(AttributeInstallRequest&& src);
    AttributeInstallRequest(const PFAdvertisingAttributeInstallRequest& src);
    AttributeInstallRequest& operator=(const AttributeInstallRequest&) = delete;
    ~AttributeInstallRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_adid;
    String m_idfa;
};

struct GetAdPlacementsRequest : public PFAdvertisingGetAdPlacementsRequest, public BaseModel
{
    GetAdPlacementsRequest();
    GetAdPlacementsRequest(const GetAdPlacementsRequest& src);
    GetAdPlacementsRequest(GetAdPlacementsRequest&& src);
    GetAdPlacementsRequest(const PFAdvertisingGetAdPlacementsRequest& src);
    GetAdPlacementsRequest& operator=(const GetAdPlacementsRequest&) = delete;
    ~GetAdPlacementsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_appId;
    StdExtra::optional<NameIdentifier> m_identifier;
};

struct AdPlacementDetails : public PFAdvertisingAdPlacementDetails, public BaseModel
{
    AdPlacementDetails();
    AdPlacementDetails(const AdPlacementDetails& src);
    AdPlacementDetails(AdPlacementDetails&& src);
    AdPlacementDetails(const PFAdvertisingAdPlacementDetails& src);
    AdPlacementDetails& operator=(const AdPlacementDetails&) = delete;
    ~AdPlacementDetails() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_placementId;
    String m_placementName;
    StdExtra::optional<int32_t> m_placementViewsRemaining;
    StdExtra::optional<double> m_placementViewsResetMinutes;
    String m_rewardAssetUrl;
    String m_rewardDescription;
    String m_rewardId;
    String m_rewardName;
};

struct GetAdPlacementsResult : public PFAdvertisingGetAdPlacementsResult, public BaseModel, public ApiResult
{
    GetAdPlacementsResult();
    GetAdPlacementsResult(const GetAdPlacementsResult& src);
    GetAdPlacementsResult(GetAdPlacementsResult&& src);
    GetAdPlacementsResult(const PFAdvertisingGetAdPlacementsResult& src);
    GetAdPlacementsResult& operator=(const GetAdPlacementsResult&) = delete;
    ~GetAdPlacementsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAdvertisingAdPlacementDetails, AdPlacementDetails> m_adPlacements;
};

struct ReportAdActivityRequest : public PFAdvertisingReportAdActivityRequest, public BaseModel
{
    ReportAdActivityRequest();
    ReportAdActivityRequest(const ReportAdActivityRequest& src);
    ReportAdActivityRequest(ReportAdActivityRequest&& src);
    ReportAdActivityRequest(const PFAdvertisingReportAdActivityRequest& src);
    ReportAdActivityRequest& operator=(const ReportAdActivityRequest&) = delete;
    ~ReportAdActivityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_placementId;
    String m_rewardId;
};

struct RewardAdActivityRequest : public PFAdvertisingRewardAdActivityRequest, public BaseModel
{
    RewardAdActivityRequest();
    RewardAdActivityRequest(const RewardAdActivityRequest& src);
    RewardAdActivityRequest(RewardAdActivityRequest&& src);
    RewardAdActivityRequest(const PFAdvertisingRewardAdActivityRequest& src);
    RewardAdActivityRequest& operator=(const RewardAdActivityRequest&) = delete;
    ~RewardAdActivityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_placementId;
    String m_rewardId;
};

struct AdRewardItemGranted : public PFAdvertisingAdRewardItemGranted, public SerializableModel
{
    AdRewardItemGranted();
    AdRewardItemGranted(const AdRewardItemGranted& src);
    AdRewardItemGranted(AdRewardItemGranted&& src);
    AdRewardItemGranted(const PFAdvertisingAdRewardItemGranted& src);
    AdRewardItemGranted& operator=(const AdRewardItemGranted&) = delete;
    ~AdRewardItemGranted() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogId;
    String m_displayName;
    String m_instanceId;
    String m_itemId;
};

struct AdRewardResults : public PFAdvertisingAdRewardResults, public BaseModel
{
    AdRewardResults();
    AdRewardResults(const AdRewardResults& src);
    AdRewardResults(AdRewardResults&& src);
    AdRewardResults(const PFAdvertisingAdRewardResults& src);
    AdRewardResults& operator=(const AdRewardResults&) = delete;
    ~AdRewardResults() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAdvertisingAdRewardItemGranted, AdRewardItemGranted> m_grantedItems;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_grantedVirtualCurrencies;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_incrementedStatistics;
};

struct RewardAdActivityResult : public PFAdvertisingRewardAdActivityResult, public BaseModel, public ApiResult
{
    RewardAdActivityResult();
    RewardAdActivityResult(const RewardAdActivityResult& src);
    RewardAdActivityResult(RewardAdActivityResult&& src);
    RewardAdActivityResult(const PFAdvertisingRewardAdActivityResult& src);
    RewardAdActivityResult& operator=(const RewardAdActivityResult&) = delete;
    ~RewardAdActivityResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_adActivityEventId;
    PointerArrayModel<char, String> m_debugResults;
    String m_placementId;
    String m_placementName;
    StdExtra::optional<int32_t> m_placementViewsRemaining;
    StdExtra::optional<double> m_placementViewsResetMinutes;
    StdExtra::optional<AdRewardResults> m_rewardResults;
};

} // namespace AdvertisingModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFAdvertisingAttributeInstallRequest& input);
template<> inline JsonValue ToJson<>(const PFAdvertisingGetAdPlacementsRequest& input);
template<> inline JsonValue ToJson<>(const PFAdvertisingAdPlacementDetails& input);
template<> inline JsonValue ToJson<>(const PFAdvertisingGetAdPlacementsResult& input);
template<> inline JsonValue ToJson<>(const PFAdvertisingReportAdActivityRequest& input);
template<> inline JsonValue ToJson<>(const PFAdvertisingRewardAdActivityRequest& input);
template<> inline JsonValue ToJson<>(const PFAdvertisingAdRewardItemGranted& input);
template<> inline JsonValue ToJson<>(const PFAdvertisingAdRewardResults& input);
template<> inline JsonValue ToJson<>(const PFAdvertisingRewardAdActivityResult& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
