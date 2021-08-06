#include "stdafx.h"
#include "AdvertisingDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace AdvertisingModels
{

AttributeInstallRequest::AttributeInstallRequest() :
    PFAdvertisingAttributeInstallRequest{}
{
}

AttributeInstallRequest::AttributeInstallRequest(const AttributeInstallRequest& src) :
    PFAdvertisingAttributeInstallRequest{ src },
    m_adid{ src.m_adid },
    m_idfa{ src.m_idfa }
{
    adid = m_adid.empty() ? nullptr : m_adid.data();
    idfa = m_idfa.empty() ? nullptr : m_idfa.data();
}

AttributeInstallRequest::AttributeInstallRequest(AttributeInstallRequest&& src) :
    PFAdvertisingAttributeInstallRequest{ src },
    m_adid{ std::move(src.m_adid) },
    m_idfa{ std::move(src.m_idfa) }
{
    adid = m_adid.empty() ? nullptr : m_adid.data();
    idfa = m_idfa.empty() ? nullptr : m_idfa.data();
}

AttributeInstallRequest::AttributeInstallRequest(const PFAdvertisingAttributeInstallRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AttributeInstallRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Adid", m_adid, adid);
    JsonUtils::ObjectGetMember(input, "Idfa", m_idfa, idfa);
}

JsonValue AttributeInstallRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAdvertisingAttributeInstallRequest>(*this);
}

size_t AttributeInstallRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAdvertisingAttributeInstallRequest) };
    serializedSize += (m_adid.size() + 1);
    serializedSize += (m_idfa.size() + 1);
    return serializedSize;
}

void AttributeInstallRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAdvertisingAttributeInstallRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAdvertisingAttributeInstallRequest);
    memcpy(stringBuffer, m_adid.data(), m_adid.size() + 1);
    serializedStruct->adid = stringBuffer;
    stringBuffer += m_adid.size() + 1;
    memcpy(stringBuffer, m_idfa.data(), m_idfa.size() + 1);
    serializedStruct->idfa = stringBuffer;
    stringBuffer += m_idfa.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetAdPlacementsRequest::GetAdPlacementsRequest() :
    PFAdvertisingGetAdPlacementsRequest{}
{
}

GetAdPlacementsRequest::GetAdPlacementsRequest(const GetAdPlacementsRequest& src) :
    PFAdvertisingGetAdPlacementsRequest{ src },
    m_appId{ src.m_appId },
    m_identifier{ src.m_identifier }
{
    appId = m_appId.empty() ? nullptr : m_appId.data();
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

GetAdPlacementsRequest::GetAdPlacementsRequest(GetAdPlacementsRequest&& src) :
    PFAdvertisingGetAdPlacementsRequest{ src },
    m_appId{ std::move(src.m_appId) },
    m_identifier{ std::move(src.m_identifier) }
{
    appId = m_appId.empty() ? nullptr : m_appId.data();
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

GetAdPlacementsRequest::GetAdPlacementsRequest(const PFAdvertisingGetAdPlacementsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAdPlacementsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AppId", m_appId, appId);
    JsonUtils::ObjectGetMember(input, "Identifier", m_identifier, identifier);
}

JsonValue GetAdPlacementsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAdvertisingGetAdPlacementsRequest>(*this);
}

AdPlacementDetails::AdPlacementDetails() :
    PFAdvertisingAdPlacementDetails{}
{
}

AdPlacementDetails::AdPlacementDetails(const AdPlacementDetails& src) :
    PFAdvertisingAdPlacementDetails{ src },
    m_placementId{ src.m_placementId },
    m_placementName{ src.m_placementName },
    m_placementViewsRemaining{ src.m_placementViewsRemaining },
    m_placementViewsResetMinutes{ src.m_placementViewsResetMinutes },
    m_rewardAssetUrl{ src.m_rewardAssetUrl },
    m_rewardDescription{ src.m_rewardDescription },
    m_rewardId{ src.m_rewardId },
    m_rewardName{ src.m_rewardName }
{
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    placementName = m_placementName.empty() ? nullptr : m_placementName.data();
    placementViewsRemaining = m_placementViewsRemaining ? m_placementViewsRemaining.operator->() : nullptr;
    placementViewsResetMinutes = m_placementViewsResetMinutes ? m_placementViewsResetMinutes.operator->() : nullptr;
    rewardAssetUrl = m_rewardAssetUrl.empty() ? nullptr : m_rewardAssetUrl.data();
    rewardDescription = m_rewardDescription.empty() ? nullptr : m_rewardDescription.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
    rewardName = m_rewardName.empty() ? nullptr : m_rewardName.data();
}

AdPlacementDetails::AdPlacementDetails(AdPlacementDetails&& src) :
    PFAdvertisingAdPlacementDetails{ src },
    m_placementId{ std::move(src.m_placementId) },
    m_placementName{ std::move(src.m_placementName) },
    m_placementViewsRemaining{ std::move(src.m_placementViewsRemaining) },
    m_placementViewsResetMinutes{ std::move(src.m_placementViewsResetMinutes) },
    m_rewardAssetUrl{ std::move(src.m_rewardAssetUrl) },
    m_rewardDescription{ std::move(src.m_rewardDescription) },
    m_rewardId{ std::move(src.m_rewardId) },
    m_rewardName{ std::move(src.m_rewardName) }
{
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    placementName = m_placementName.empty() ? nullptr : m_placementName.data();
    placementViewsRemaining = m_placementViewsRemaining ? m_placementViewsRemaining.operator->() : nullptr;
    placementViewsResetMinutes = m_placementViewsResetMinutes ? m_placementViewsResetMinutes.operator->() : nullptr;
    rewardAssetUrl = m_rewardAssetUrl.empty() ? nullptr : m_rewardAssetUrl.data();
    rewardDescription = m_rewardDescription.empty() ? nullptr : m_rewardDescription.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
    rewardName = m_rewardName.empty() ? nullptr : m_rewardName.data();
}

AdPlacementDetails::AdPlacementDetails(const PFAdvertisingAdPlacementDetails& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdPlacementDetails::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlacementId", m_placementId, placementId);
    JsonUtils::ObjectGetMember(input, "PlacementName", m_placementName, placementName);
    JsonUtils::ObjectGetMember(input, "PlacementViewsRemaining", m_placementViewsRemaining, placementViewsRemaining);
    JsonUtils::ObjectGetMember(input, "PlacementViewsResetMinutes", m_placementViewsResetMinutes, placementViewsResetMinutes);
    JsonUtils::ObjectGetMember(input, "RewardAssetUrl", m_rewardAssetUrl, rewardAssetUrl);
    JsonUtils::ObjectGetMember(input, "RewardDescription", m_rewardDescription, rewardDescription);
    JsonUtils::ObjectGetMember(input, "RewardId", m_rewardId, rewardId);
    JsonUtils::ObjectGetMember(input, "RewardName", m_rewardName, rewardName);
}

JsonValue AdPlacementDetails::ToJson() const
{
    return JsonUtils::ToJson<PFAdvertisingAdPlacementDetails>(*this);
}

GetAdPlacementsResult::GetAdPlacementsResult() :
    PFAdvertisingGetAdPlacementsResult{}
{
}

GetAdPlacementsResult::GetAdPlacementsResult(const GetAdPlacementsResult& src) :
    PFAdvertisingGetAdPlacementsResult{ src },
    m_adPlacements{ src.m_adPlacements }
{
    adPlacements = m_adPlacements.Empty() ? nullptr : m_adPlacements.Data();
}

GetAdPlacementsResult::GetAdPlacementsResult(GetAdPlacementsResult&& src) :
    PFAdvertisingGetAdPlacementsResult{ src },
    m_adPlacements{ std::move(src.m_adPlacements) }
{
    adPlacements = m_adPlacements.Empty() ? nullptr : m_adPlacements.Data();
}

GetAdPlacementsResult::GetAdPlacementsResult(const PFAdvertisingGetAdPlacementsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAdPlacementsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdPlacements", m_adPlacements, adPlacements, adPlacementsCount);
}

JsonValue GetAdPlacementsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAdvertisingGetAdPlacementsResult>(*this);
}

ReportAdActivityRequest::ReportAdActivityRequest() :
    PFAdvertisingReportAdActivityRequest{}
{
}

ReportAdActivityRequest::ReportAdActivityRequest(const ReportAdActivityRequest& src) :
    PFAdvertisingReportAdActivityRequest{ src },
    m_customTags{ src.m_customTags },
    m_placementId{ src.m_placementId },
    m_rewardId{ src.m_rewardId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
}

ReportAdActivityRequest::ReportAdActivityRequest(ReportAdActivityRequest&& src) :
    PFAdvertisingReportAdActivityRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_placementId{ std::move(src.m_placementId) },
    m_rewardId{ std::move(src.m_rewardId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
}

ReportAdActivityRequest::ReportAdActivityRequest(const PFAdvertisingReportAdActivityRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ReportAdActivityRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Activity", activity);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlacementId", m_placementId, placementId);
    JsonUtils::ObjectGetMember(input, "RewardId", m_rewardId, rewardId);
}

JsonValue ReportAdActivityRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAdvertisingReportAdActivityRequest>(*this);
}

RewardAdActivityRequest::RewardAdActivityRequest() :
    PFAdvertisingRewardAdActivityRequest{}
{
}

RewardAdActivityRequest::RewardAdActivityRequest(const RewardAdActivityRequest& src) :
    PFAdvertisingRewardAdActivityRequest{ src },
    m_customTags{ src.m_customTags },
    m_placementId{ src.m_placementId },
    m_rewardId{ src.m_rewardId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
}

RewardAdActivityRequest::RewardAdActivityRequest(RewardAdActivityRequest&& src) :
    PFAdvertisingRewardAdActivityRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_placementId{ std::move(src.m_placementId) },
    m_rewardId{ std::move(src.m_rewardId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
}

RewardAdActivityRequest::RewardAdActivityRequest(const PFAdvertisingRewardAdActivityRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RewardAdActivityRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlacementId", m_placementId, placementId);
    JsonUtils::ObjectGetMember(input, "RewardId", m_rewardId, rewardId);
}

JsonValue RewardAdActivityRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAdvertisingRewardAdActivityRequest>(*this);
}

AdRewardItemGranted::AdRewardItemGranted() :
    PFAdvertisingAdRewardItemGranted{}
{
}

AdRewardItemGranted::AdRewardItemGranted(const AdRewardItemGranted& src) :
    PFAdvertisingAdRewardItemGranted{ src },
    m_catalogId{ src.m_catalogId },
    m_displayName{ src.m_displayName },
    m_instanceId{ src.m_instanceId },
    m_itemId{ src.m_itemId }
{
    catalogId = m_catalogId.empty() ? nullptr : m_catalogId.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    instanceId = m_instanceId.empty() ? nullptr : m_instanceId.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

AdRewardItemGranted::AdRewardItemGranted(AdRewardItemGranted&& src) :
    PFAdvertisingAdRewardItemGranted{ src },
    m_catalogId{ std::move(src.m_catalogId) },
    m_displayName{ std::move(src.m_displayName) },
    m_instanceId{ std::move(src.m_instanceId) },
    m_itemId{ std::move(src.m_itemId) }
{
    catalogId = m_catalogId.empty() ? nullptr : m_catalogId.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    instanceId = m_instanceId.empty() ? nullptr : m_instanceId.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

AdRewardItemGranted::AdRewardItemGranted(const PFAdvertisingAdRewardItemGranted& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdRewardItemGranted::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogId", m_catalogId, catalogId);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "InstanceId", m_instanceId, instanceId);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
}

JsonValue AdRewardItemGranted::ToJson() const
{
    return JsonUtils::ToJson<PFAdvertisingAdRewardItemGranted>(*this);
}

size_t AdRewardItemGranted::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAdvertisingAdRewardItemGranted) };
    serializedSize += (m_catalogId.size() + 1);
    serializedSize += (m_displayName.size() + 1);
    serializedSize += (m_instanceId.size() + 1);
    serializedSize += (m_itemId.size() + 1);
    return serializedSize;
}

void AdRewardItemGranted::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAdvertisingAdRewardItemGranted{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAdvertisingAdRewardItemGranted);
    memcpy(stringBuffer, m_catalogId.data(), m_catalogId.size() + 1);
    serializedStruct->catalogId = stringBuffer;
    stringBuffer += m_catalogId.size() + 1;
    memcpy(stringBuffer, m_displayName.data(), m_displayName.size() + 1);
    serializedStruct->displayName = stringBuffer;
    stringBuffer += m_displayName.size() + 1;
    memcpy(stringBuffer, m_instanceId.data(), m_instanceId.size() + 1);
    serializedStruct->instanceId = stringBuffer;
    stringBuffer += m_instanceId.size() + 1;
    memcpy(stringBuffer, m_itemId.data(), m_itemId.size() + 1);
    serializedStruct->itemId = stringBuffer;
    stringBuffer += m_itemId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AdRewardResults::AdRewardResults() :
    PFAdvertisingAdRewardResults{}
{
}

AdRewardResults::AdRewardResults(const AdRewardResults& src) :
    PFAdvertisingAdRewardResults{ src },
    m_grantedItems{ src.m_grantedItems },
    m_grantedVirtualCurrencies{ src.m_grantedVirtualCurrencies },
    m_incrementedStatistics{ src.m_incrementedStatistics }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
    grantedVirtualCurrencies = m_grantedVirtualCurrencies.Empty() ? nullptr : m_grantedVirtualCurrencies.Data();
    incrementedStatistics = m_incrementedStatistics.Empty() ? nullptr : m_incrementedStatistics.Data();
}

AdRewardResults::AdRewardResults(AdRewardResults&& src) :
    PFAdvertisingAdRewardResults{ src },
    m_grantedItems{ std::move(src.m_grantedItems) },
    m_grantedVirtualCurrencies{ std::move(src.m_grantedVirtualCurrencies) },
    m_incrementedStatistics{ std::move(src.m_incrementedStatistics) }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
    grantedVirtualCurrencies = m_grantedVirtualCurrencies.Empty() ? nullptr : m_grantedVirtualCurrencies.Data();
    incrementedStatistics = m_incrementedStatistics.Empty() ? nullptr : m_incrementedStatistics.Data();
}

AdRewardResults::AdRewardResults(const PFAdvertisingAdRewardResults& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdRewardResults::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
    JsonUtils::ObjectGetMember(input, "GrantedVirtualCurrencies", m_grantedVirtualCurrencies, grantedVirtualCurrencies, grantedVirtualCurrenciesCount);
    JsonUtils::ObjectGetMember(input, "IncrementedStatistics", m_incrementedStatistics, incrementedStatistics, incrementedStatisticsCount);
}

JsonValue AdRewardResults::ToJson() const
{
    return JsonUtils::ToJson<PFAdvertisingAdRewardResults>(*this);
}

RewardAdActivityResult::RewardAdActivityResult() :
    PFAdvertisingRewardAdActivityResult{}
{
}

RewardAdActivityResult::RewardAdActivityResult(const RewardAdActivityResult& src) :
    PFAdvertisingRewardAdActivityResult{ src },
    m_adActivityEventId{ src.m_adActivityEventId },
    m_debugResults{ src.m_debugResults },
    m_placementId{ src.m_placementId },
    m_placementName{ src.m_placementName },
    m_placementViewsRemaining{ src.m_placementViewsRemaining },
    m_placementViewsResetMinutes{ src.m_placementViewsResetMinutes },
    m_rewardResults{ src.m_rewardResults }
{
    adActivityEventId = m_adActivityEventId.empty() ? nullptr : m_adActivityEventId.data();
    debugResults = m_debugResults.Empty() ? nullptr : m_debugResults.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    placementName = m_placementName.empty() ? nullptr : m_placementName.data();
    placementViewsRemaining = m_placementViewsRemaining ? m_placementViewsRemaining.operator->() : nullptr;
    placementViewsResetMinutes = m_placementViewsResetMinutes ? m_placementViewsResetMinutes.operator->() : nullptr;
    rewardResults = m_rewardResults ? m_rewardResults.operator->() : nullptr;
}

RewardAdActivityResult::RewardAdActivityResult(RewardAdActivityResult&& src) :
    PFAdvertisingRewardAdActivityResult{ src },
    m_adActivityEventId{ std::move(src.m_adActivityEventId) },
    m_debugResults{ std::move(src.m_debugResults) },
    m_placementId{ std::move(src.m_placementId) },
    m_placementName{ std::move(src.m_placementName) },
    m_placementViewsRemaining{ std::move(src.m_placementViewsRemaining) },
    m_placementViewsResetMinutes{ std::move(src.m_placementViewsResetMinutes) },
    m_rewardResults{ std::move(src.m_rewardResults) }
{
    adActivityEventId = m_adActivityEventId.empty() ? nullptr : m_adActivityEventId.data();
    debugResults = m_debugResults.Empty() ? nullptr : m_debugResults.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    placementName = m_placementName.empty() ? nullptr : m_placementName.data();
    placementViewsRemaining = m_placementViewsRemaining ? m_placementViewsRemaining.operator->() : nullptr;
    placementViewsResetMinutes = m_placementViewsResetMinutes ? m_placementViewsResetMinutes.operator->() : nullptr;
    rewardResults = m_rewardResults ? m_rewardResults.operator->() : nullptr;
}

RewardAdActivityResult::RewardAdActivityResult(const PFAdvertisingRewardAdActivityResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RewardAdActivityResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdActivityEventId", m_adActivityEventId, adActivityEventId);
    JsonUtils::ObjectGetMember(input, "DebugResults", m_debugResults, debugResults, debugResultsCount);
    JsonUtils::ObjectGetMember(input, "PlacementId", m_placementId, placementId);
    JsonUtils::ObjectGetMember(input, "PlacementName", m_placementName, placementName);
    JsonUtils::ObjectGetMember(input, "PlacementViewsRemaining", m_placementViewsRemaining, placementViewsRemaining);
    JsonUtils::ObjectGetMember(input, "PlacementViewsResetMinutes", m_placementViewsResetMinutes, placementViewsResetMinutes);
    JsonUtils::ObjectGetMember(input, "RewardResults", m_rewardResults, rewardResults);
}

JsonValue RewardAdActivityResult::ToJson() const
{
    return JsonUtils::ToJson<PFAdvertisingRewardAdActivityResult>(*this);
}

} // namespace AdvertisingModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFAdvertisingAttributeInstallRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Adid", input.adid);
    JsonUtils::ObjectAddMember(output, "Idfa", input.idfa);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAdvertisingGetAdPlacementsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AppId", input.appId);
    JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAdvertisingAdPlacementDetails& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
    JsonUtils::ObjectAddMember(output, "PlacementName", input.placementName);
    JsonUtils::ObjectAddMember(output, "PlacementViewsRemaining", input.placementViewsRemaining);
    JsonUtils::ObjectAddMember(output, "PlacementViewsResetMinutes", input.placementViewsResetMinutes);
    JsonUtils::ObjectAddMember(output, "RewardAssetUrl", input.rewardAssetUrl);
    JsonUtils::ObjectAddMember(output, "RewardDescription", input.rewardDescription);
    JsonUtils::ObjectAddMember(output, "RewardId", input.rewardId);
    JsonUtils::ObjectAddMember(output, "RewardName", input.rewardName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAdvertisingGetAdPlacementsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdPlacements", input.adPlacements, input.adPlacementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAdvertisingReportAdActivityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Activity", input.activity);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
    JsonUtils::ObjectAddMember(output, "RewardId", input.rewardId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAdvertisingRewardAdActivityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
    JsonUtils::ObjectAddMember(output, "RewardId", input.rewardId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAdvertisingAdRewardItemGranted& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogId", input.catalogId);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "InstanceId", input.instanceId);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAdvertisingAdRewardResults& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
    JsonUtils::ObjectAddMember(output, "GrantedVirtualCurrencies", input.grantedVirtualCurrencies, input.grantedVirtualCurrenciesCount);
    JsonUtils::ObjectAddMember(output, "IncrementedStatistics", input.incrementedStatistics, input.incrementedStatisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAdvertisingRewardAdActivityResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdActivityEventId", input.adActivityEventId);
    JsonUtils::ObjectAddMember(output, "DebugResults", input.debugResults, input.debugResultsCount);
    JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
    JsonUtils::ObjectAddMember(output, "PlacementName", input.placementName);
    JsonUtils::ObjectAddMember(output, "PlacementViewsRemaining", input.placementViewsRemaining);
    JsonUtils::ObjectAddMember(output, "PlacementViewsResetMinutes", input.placementViewsResetMinutes);
    JsonUtils::ObjectAddMember(output, "RewardResults", input.rewardResults);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
