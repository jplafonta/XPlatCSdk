#include "stdafx.h"
#include "TitleDataManagementDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace TitleDataManagementModels
{

AddLocalizedNewsRequest::AddLocalizedNewsRequest() :
    PFTitleDataManagementAddLocalizedNewsRequest{}
{
}

AddLocalizedNewsRequest::AddLocalizedNewsRequest(const AddLocalizedNewsRequest& src) :
    PFTitleDataManagementAddLocalizedNewsRequest{ src },
    m_body{ src.m_body },
    m_customTags{ src.m_customTags },
    m_language{ src.m_language },
    m_newsId{ src.m_newsId },
    m_title{ src.m_title }
{
    body = m_body.empty() ? nullptr : m_body.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    language = m_language.empty() ? nullptr : m_language.data();
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

AddLocalizedNewsRequest::AddLocalizedNewsRequest(AddLocalizedNewsRequest&& src) :
    PFTitleDataManagementAddLocalizedNewsRequest{ src },
    m_body{ std::move(src.m_body) },
    m_customTags{ std::move(src.m_customTags) },
    m_language{ std::move(src.m_language) },
    m_newsId{ std::move(src.m_newsId) },
    m_title{ std::move(src.m_title) }
{
    body = m_body.empty() ? nullptr : m_body.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    language = m_language.empty() ? nullptr : m_language.data();
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

AddLocalizedNewsRequest::AddLocalizedNewsRequest(const PFTitleDataManagementAddLocalizedNewsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddLocalizedNewsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Language", m_language, language);
    JsonUtils::ObjectGetMember(input, "NewsId", m_newsId, newsId);
    JsonUtils::ObjectGetMember(input, "Title", m_title, title);
}

JsonValue AddLocalizedNewsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementAddLocalizedNewsRequest>(*this);
}

AddNewsRequest::AddNewsRequest() :
    PFTitleDataManagementAddNewsRequest{}
{
}

AddNewsRequest::AddNewsRequest(const AddNewsRequest& src) :
    PFTitleDataManagementAddNewsRequest{ src },
    m_body{ src.m_body },
    m_customTags{ src.m_customTags },
    m_timestamp{ src.m_timestamp },
    m_title{ src.m_title }
{
    body = m_body.empty() ? nullptr : m_body.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
    title = m_title.empty() ? nullptr : m_title.data();
}

AddNewsRequest::AddNewsRequest(AddNewsRequest&& src) :
    PFTitleDataManagementAddNewsRequest{ src },
    m_body{ std::move(src.m_body) },
    m_customTags{ std::move(src.m_customTags) },
    m_timestamp{ std::move(src.m_timestamp) },
    m_title{ std::move(src.m_title) }
{
    body = m_body.empty() ? nullptr : m_body.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
    title = m_title.empty() ? nullptr : m_title.data();
}

AddNewsRequest::AddNewsRequest(const PFTitleDataManagementAddNewsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddNewsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
    JsonUtils::ObjectGetMember(input, "Title", m_title, title);
}

JsonValue AddNewsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementAddNewsRequest>(*this);
}

AddNewsResult::AddNewsResult() :
    PFTitleDataManagementAddNewsResult{}
{
}

AddNewsResult::AddNewsResult(const AddNewsResult& src) :
    PFTitleDataManagementAddNewsResult{ src },
    m_newsId{ src.m_newsId }
{
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
}

AddNewsResult::AddNewsResult(AddNewsResult&& src) :
    PFTitleDataManagementAddNewsResult{ src },
    m_newsId{ std::move(src.m_newsId) }
{
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
}

AddNewsResult::AddNewsResult(const PFTitleDataManagementAddNewsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddNewsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NewsId", m_newsId, newsId);
}

JsonValue AddNewsResult::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementAddNewsResult>(*this);
}

size_t AddNewsResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementAddNewsResult) };
    serializedSize += (m_newsId.size() + 1);
    return serializedSize;
}

void AddNewsResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementAddNewsResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementAddNewsResult);
    memcpy(stringBuffer, m_newsId.data(), m_newsId.size() + 1);
    serializedStruct->newsId = stringBuffer;
    stringBuffer += m_newsId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

VirtualCurrencyData::VirtualCurrencyData() :
    PFTitleDataManagementVirtualCurrencyData{}
{
}

VirtualCurrencyData::VirtualCurrencyData(const VirtualCurrencyData& src) :
    PFTitleDataManagementVirtualCurrencyData{ src },
    m_currencyCode{ src.m_currencyCode },
    m_displayName{ src.m_displayName },
    m_initialDeposit{ src.m_initialDeposit },
    m_rechargeMax{ src.m_rechargeMax },
    m_rechargeRate{ src.m_rechargeRate }
{
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    initialDeposit = m_initialDeposit ? m_initialDeposit.operator->() : nullptr;
    rechargeMax = m_rechargeMax ? m_rechargeMax.operator->() : nullptr;
    rechargeRate = m_rechargeRate ? m_rechargeRate.operator->() : nullptr;
}

VirtualCurrencyData::VirtualCurrencyData(VirtualCurrencyData&& src) :
    PFTitleDataManagementVirtualCurrencyData{ src },
    m_currencyCode{ std::move(src.m_currencyCode) },
    m_displayName{ std::move(src.m_displayName) },
    m_initialDeposit{ std::move(src.m_initialDeposit) },
    m_rechargeMax{ std::move(src.m_rechargeMax) },
    m_rechargeRate{ std::move(src.m_rechargeRate) }
{
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    initialDeposit = m_initialDeposit ? m_initialDeposit.operator->() : nullptr;
    rechargeMax = m_rechargeMax ? m_rechargeMax.operator->() : nullptr;
    rechargeRate = m_rechargeRate ? m_rechargeRate.operator->() : nullptr;
}

VirtualCurrencyData::VirtualCurrencyData(const PFTitleDataManagementVirtualCurrencyData& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void VirtualCurrencyData::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "InitialDeposit", m_initialDeposit, initialDeposit);
    JsonUtils::ObjectGetMember(input, "RechargeMax", m_rechargeMax, rechargeMax);
    JsonUtils::ObjectGetMember(input, "RechargeRate", m_rechargeRate, rechargeRate);
}

JsonValue VirtualCurrencyData::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementVirtualCurrencyData>(*this);
}

AddVirtualCurrencyTypesRequest::AddVirtualCurrencyTypesRequest() :
    PFTitleDataManagementAddVirtualCurrencyTypesRequest{}
{
}

AddVirtualCurrencyTypesRequest::AddVirtualCurrencyTypesRequest(const AddVirtualCurrencyTypesRequest& src) :
    PFTitleDataManagementAddVirtualCurrencyTypesRequest{ src },
    m_virtualCurrencies{ src.m_virtualCurrencies }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

AddVirtualCurrencyTypesRequest::AddVirtualCurrencyTypesRequest(AddVirtualCurrencyTypesRequest&& src) :
    PFTitleDataManagementAddVirtualCurrencyTypesRequest{ src },
    m_virtualCurrencies{ std::move(src.m_virtualCurrencies) }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

AddVirtualCurrencyTypesRequest::AddVirtualCurrencyTypesRequest(const PFTitleDataManagementAddVirtualCurrencyTypesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddVirtualCurrencyTypesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "VirtualCurrencies", m_virtualCurrencies, virtualCurrencies, virtualCurrenciesCount);
}

JsonValue AddVirtualCurrencyTypesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementAddVirtualCurrencyTypesRequest>(*this);
}

DeleteStoreRequest::DeleteStoreRequest() :
    PFTitleDataManagementDeleteStoreRequest{}
{
}

DeleteStoreRequest::DeleteStoreRequest(const DeleteStoreRequest& src) :
    PFTitleDataManagementDeleteStoreRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

DeleteStoreRequest::DeleteStoreRequest(DeleteStoreRequest&& src) :
    PFTitleDataManagementDeleteStoreRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

DeleteStoreRequest::DeleteStoreRequest(const PFTitleDataManagementDeleteStoreRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteStoreRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue DeleteStoreRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementDeleteStoreRequest>(*this);
}

DeleteTitleDataOverrideRequest::DeleteTitleDataOverrideRequest() :
    PFTitleDataManagementDeleteTitleDataOverrideRequest{}
{
}

DeleteTitleDataOverrideRequest::DeleteTitleDataOverrideRequest(const DeleteTitleDataOverrideRequest& src) :
    PFTitleDataManagementDeleteTitleDataOverrideRequest{ src },
    m_overrideLabel{ src.m_overrideLabel }
{
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

DeleteTitleDataOverrideRequest::DeleteTitleDataOverrideRequest(DeleteTitleDataOverrideRequest&& src) :
    PFTitleDataManagementDeleteTitleDataOverrideRequest{ src },
    m_overrideLabel{ std::move(src.m_overrideLabel) }
{
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

DeleteTitleDataOverrideRequest::DeleteTitleDataOverrideRequest(const PFTitleDataManagementDeleteTitleDataOverrideRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteTitleDataOverrideRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
}

JsonValue DeleteTitleDataOverrideRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementDeleteTitleDataOverrideRequest>(*this);
}

size_t DeleteTitleDataOverrideRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementDeleteTitleDataOverrideRequest) };
    serializedSize += (m_overrideLabel.size() + 1);
    return serializedSize;
}

void DeleteTitleDataOverrideRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementDeleteTitleDataOverrideRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementDeleteTitleDataOverrideRequest);
    memcpy(stringBuffer, m_overrideLabel.data(), m_overrideLabel.size() + 1);
    serializedStruct->overrideLabel = stringBuffer;
    stringBuffer += m_overrideLabel.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetCatalogItemsRequest::GetCatalogItemsRequest() :
    PFTitleDataManagementGetCatalogItemsRequest{}
{
}

GetCatalogItemsRequest::GetCatalogItemsRequest(const GetCatalogItemsRequest& src) :
    PFTitleDataManagementGetCatalogItemsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetCatalogItemsRequest::GetCatalogItemsRequest(GetCatalogItemsRequest&& src) :
    PFTitleDataManagementGetCatalogItemsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetCatalogItemsRequest::GetCatalogItemsRequest(const PFTitleDataManagementGetCatalogItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCatalogItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
}

JsonValue GetCatalogItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetCatalogItemsRequest>(*this);
}

size_t GetCatalogItemsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementGetCatalogItemsRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    return serializedSize;
}

void GetCatalogItemsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementGetCatalogItemsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementGetCatalogItemsRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CatalogItemBundleInfo::CatalogItemBundleInfo() :
    PFTitleDataManagementCatalogItemBundleInfo{}
{
}

CatalogItemBundleInfo::CatalogItemBundleInfo(const CatalogItemBundleInfo& src) :
    PFTitleDataManagementCatalogItemBundleInfo{ src },
    m_bundledItems{ src.m_bundledItems },
    m_bundledResultTables{ src.m_bundledResultTables },
    m_bundledVirtualCurrencies{ src.m_bundledVirtualCurrencies }
{
    bundledItems = m_bundledItems.Empty() ? nullptr : m_bundledItems.Data();
    bundledResultTables = m_bundledResultTables.Empty() ? nullptr : m_bundledResultTables.Data();
    bundledVirtualCurrencies = m_bundledVirtualCurrencies.Empty() ? nullptr : m_bundledVirtualCurrencies.Data();
}

CatalogItemBundleInfo::CatalogItemBundleInfo(CatalogItemBundleInfo&& src) :
    PFTitleDataManagementCatalogItemBundleInfo{ src },
    m_bundledItems{ std::move(src.m_bundledItems) },
    m_bundledResultTables{ std::move(src.m_bundledResultTables) },
    m_bundledVirtualCurrencies{ std::move(src.m_bundledVirtualCurrencies) }
{
    bundledItems = m_bundledItems.Empty() ? nullptr : m_bundledItems.Data();
    bundledResultTables = m_bundledResultTables.Empty() ? nullptr : m_bundledResultTables.Data();
    bundledVirtualCurrencies = m_bundledVirtualCurrencies.Empty() ? nullptr : m_bundledVirtualCurrencies.Data();
}

CatalogItemBundleInfo::CatalogItemBundleInfo(const PFTitleDataManagementCatalogItemBundleInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItemBundleInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BundledItems", m_bundledItems, bundledItems, bundledItemsCount);
    JsonUtils::ObjectGetMember(input, "BundledResultTables", m_bundledResultTables, bundledResultTables, bundledResultTablesCount);
    JsonUtils::ObjectGetMember(input, "BundledVirtualCurrencies", m_bundledVirtualCurrencies, bundledVirtualCurrencies, bundledVirtualCurrenciesCount);
}

JsonValue CatalogItemBundleInfo::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementCatalogItemBundleInfo>(*this);
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo() :
    PFTitleDataManagementCatalogItemConsumableInfo{}
{
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src) :
    PFTitleDataManagementCatalogItemConsumableInfo{ src },
    m_usageCount{ src.m_usageCount },
    m_usagePeriod{ src.m_usagePeriod },
    m_usagePeriodGroup{ src.m_usagePeriodGroup }
{
    usageCount = m_usageCount ? m_usageCount.operator->() : nullptr;
    usagePeriod = m_usagePeriod ? m_usagePeriod.operator->() : nullptr;
    usagePeriodGroup = m_usagePeriodGroup.empty() ? nullptr : m_usagePeriodGroup.data();
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(CatalogItemConsumableInfo&& src) :
    PFTitleDataManagementCatalogItemConsumableInfo{ src },
    m_usageCount{ std::move(src.m_usageCount) },
    m_usagePeriod{ std::move(src.m_usagePeriod) },
    m_usagePeriodGroup{ std::move(src.m_usagePeriodGroup) }
{
    usageCount = m_usageCount ? m_usageCount.operator->() : nullptr;
    usagePeriod = m_usagePeriod ? m_usagePeriod.operator->() : nullptr;
    usagePeriodGroup = m_usagePeriodGroup.empty() ? nullptr : m_usagePeriodGroup.data();
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(const PFTitleDataManagementCatalogItemConsumableInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItemConsumableInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "UsageCount", m_usageCount, usageCount);
    JsonUtils::ObjectGetMember(input, "UsagePeriod", m_usagePeriod, usagePeriod);
    JsonUtils::ObjectGetMember(input, "UsagePeriodGroup", m_usagePeriodGroup, usagePeriodGroup);
}

JsonValue CatalogItemConsumableInfo::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementCatalogItemConsumableInfo>(*this);
}

CatalogItemContainerInfo::CatalogItemContainerInfo() :
    PFTitleDataManagementCatalogItemContainerInfo{}
{
}

CatalogItemContainerInfo::CatalogItemContainerInfo(const CatalogItemContainerInfo& src) :
    PFTitleDataManagementCatalogItemContainerInfo{ src },
    m_itemContents{ src.m_itemContents },
    m_keyItemId{ src.m_keyItemId },
    m_resultTableContents{ src.m_resultTableContents },
    m_virtualCurrencyContents{ src.m_virtualCurrencyContents }
{
    itemContents = m_itemContents.Empty() ? nullptr : m_itemContents.Data();
    keyItemId = m_keyItemId.empty() ? nullptr : m_keyItemId.data();
    resultTableContents = m_resultTableContents.Empty() ? nullptr : m_resultTableContents.Data();
    virtualCurrencyContents = m_virtualCurrencyContents.Empty() ? nullptr : m_virtualCurrencyContents.Data();
}

CatalogItemContainerInfo::CatalogItemContainerInfo(CatalogItemContainerInfo&& src) :
    PFTitleDataManagementCatalogItemContainerInfo{ src },
    m_itemContents{ std::move(src.m_itemContents) },
    m_keyItemId{ std::move(src.m_keyItemId) },
    m_resultTableContents{ std::move(src.m_resultTableContents) },
    m_virtualCurrencyContents{ std::move(src.m_virtualCurrencyContents) }
{
    itemContents = m_itemContents.Empty() ? nullptr : m_itemContents.Data();
    keyItemId = m_keyItemId.empty() ? nullptr : m_keyItemId.data();
    resultTableContents = m_resultTableContents.Empty() ? nullptr : m_resultTableContents.Data();
    virtualCurrencyContents = m_virtualCurrencyContents.Empty() ? nullptr : m_virtualCurrencyContents.Data();
}

CatalogItemContainerInfo::CatalogItemContainerInfo(const PFTitleDataManagementCatalogItemContainerInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItemContainerInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemContents", m_itemContents, itemContents, itemContentsCount);
    JsonUtils::ObjectGetMember(input, "KeyItemId", m_keyItemId, keyItemId);
    JsonUtils::ObjectGetMember(input, "ResultTableContents", m_resultTableContents, resultTableContents, resultTableContentsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyContents", m_virtualCurrencyContents, virtualCurrencyContents, virtualCurrencyContentsCount);
}

JsonValue CatalogItemContainerInfo::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementCatalogItemContainerInfo>(*this);
}

CatalogItem::CatalogItem() :
    PFTitleDataManagementCatalogItem{}
{
}

CatalogItem::CatalogItem(const CatalogItem& src) :
    PFTitleDataManagementCatalogItem{ src },
    m_bundle{ src.m_bundle },
    m_catalogVersion{ src.m_catalogVersion },
    m_consumable{ src.m_consumable },
    m_container{ src.m_container },
    m_customData{ src.m_customData },
    m_description{ src.m_description },
    m_displayName{ src.m_displayName },
    m_itemClass{ src.m_itemClass },
    m_itemId{ src.m_itemId },
    m_itemImageUrl{ src.m_itemImageUrl },
    m_realCurrencyPrices{ src.m_realCurrencyPrices },
    m_tags{ src.m_tags },
    m_virtualCurrencyPrices{ src.m_virtualCurrencyPrices }
{
    bundle = m_bundle ? m_bundle.operator->() : nullptr;
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    consumable = m_consumable ? m_consumable.operator->() : nullptr;
    container = m_container ? m_container.operator->() : nullptr;
    customData = m_customData.empty() ? nullptr : m_customData.data();
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemImageUrl = m_itemImageUrl.empty() ? nullptr : m_itemImageUrl.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

CatalogItem::CatalogItem(CatalogItem&& src) :
    PFTitleDataManagementCatalogItem{ src },
    m_bundle{ std::move(src.m_bundle) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_consumable{ std::move(src.m_consumable) },
    m_container{ std::move(src.m_container) },
    m_customData{ std::move(src.m_customData) },
    m_description{ std::move(src.m_description) },
    m_displayName{ std::move(src.m_displayName) },
    m_itemClass{ std::move(src.m_itemClass) },
    m_itemId{ std::move(src.m_itemId) },
    m_itemImageUrl{ std::move(src.m_itemImageUrl) },
    m_realCurrencyPrices{ std::move(src.m_realCurrencyPrices) },
    m_tags{ std::move(src.m_tags) },
    m_virtualCurrencyPrices{ std::move(src.m_virtualCurrencyPrices) }
{
    bundle = m_bundle ? m_bundle.operator->() : nullptr;
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    consumable = m_consumable ? m_consumable.operator->() : nullptr;
    container = m_container ? m_container.operator->() : nullptr;
    customData = m_customData.empty() ? nullptr : m_customData.data();
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemImageUrl = m_itemImageUrl.empty() ? nullptr : m_itemImageUrl.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

CatalogItem::CatalogItem(const PFTitleDataManagementCatalogItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Bundle", m_bundle, bundle);
    JsonUtils::ObjectGetMember(input, "CanBecomeCharacter", canBecomeCharacter);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "Consumable", m_consumable, consumable);
    JsonUtils::ObjectGetMember(input, "Container", m_container, container);
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "InitialLimitedEditionCount", initialLimitedEditionCount);
    JsonUtils::ObjectGetMember(input, "IsLimitedEdition", isLimitedEdition);
    JsonUtils::ObjectGetMember(input, "IsStackable", isStackable);
    JsonUtils::ObjectGetMember(input, "IsTradable", isTradable);
    JsonUtils::ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "ItemImageUrl", m_itemImageUrl, itemImageUrl);
    JsonUtils::ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
}

JsonValue CatalogItem::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementCatalogItem>(*this);
}

GetCatalogItemsResult::GetCatalogItemsResult() :
    PFTitleDataManagementGetCatalogItemsResult{}
{
}

GetCatalogItemsResult::GetCatalogItemsResult(const GetCatalogItemsResult& src) :
    PFTitleDataManagementGetCatalogItemsResult{ src },
    m_catalog{ src.m_catalog }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
}

GetCatalogItemsResult::GetCatalogItemsResult(GetCatalogItemsResult&& src) :
    PFTitleDataManagementGetCatalogItemsResult{ src },
    m_catalog{ std::move(src.m_catalog) }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
}

GetCatalogItemsResult::GetCatalogItemsResult(const PFTitleDataManagementGetCatalogItemsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCatalogItemsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Catalog", m_catalog, catalog, catalogCount);
}

JsonValue GetCatalogItemsResult::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetCatalogItemsResult>(*this);
}

GetPublisherDataRequest::GetPublisherDataRequest() :
    PFTitleDataManagementGetPublisherDataRequest{}
{
}

GetPublisherDataRequest::GetPublisherDataRequest(const GetPublisherDataRequest& src) :
    PFTitleDataManagementGetPublisherDataRequest{ src },
    m_keys{ src.m_keys }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
}

GetPublisherDataRequest::GetPublisherDataRequest(GetPublisherDataRequest&& src) :
    PFTitleDataManagementGetPublisherDataRequest{ src },
    m_keys{ std::move(src.m_keys) }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
}

GetPublisherDataRequest::GetPublisherDataRequest(const PFTitleDataManagementGetPublisherDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPublisherDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
}

JsonValue GetPublisherDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetPublisherDataRequest>(*this);
}

GetPublisherDataResult::GetPublisherDataResult() :
    PFTitleDataManagementGetPublisherDataResult{}
{
}

GetPublisherDataResult::GetPublisherDataResult(const GetPublisherDataResult& src) :
    PFTitleDataManagementGetPublisherDataResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPublisherDataResult::GetPublisherDataResult(GetPublisherDataResult&& src) :
    PFTitleDataManagementGetPublisherDataResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPublisherDataResult::GetPublisherDataResult(const PFTitleDataManagementGetPublisherDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPublisherDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPublisherDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetPublisherDataResult>(*this);
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest() :
    PFTitleDataManagementGetRandomResultTablesRequest{}
{
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src) :
    PFTitleDataManagementGetRandomResultTablesRequest{ src },
    m_catalogVersion{ src.m_catalogVersion }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(GetRandomResultTablesRequest&& src) :
    PFTitleDataManagementGetRandomResultTablesRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(const PFTitleDataManagementGetRandomResultTablesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetRandomResultTablesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
}

JsonValue GetRandomResultTablesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetRandomResultTablesRequest>(*this);
}

size_t GetRandomResultTablesRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementGetRandomResultTablesRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    return serializedSize;
}

void GetRandomResultTablesRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementGetRandomResultTablesRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementGetRandomResultTablesRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetStoreItemsRequest::GetStoreItemsRequest() :
    PFTitleDataManagementGetStoreItemsRequest{}
{
}

GetStoreItemsRequest::GetStoreItemsRequest(const GetStoreItemsRequest& src) :
    PFTitleDataManagementGetStoreItemsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsRequest::GetStoreItemsRequest(GetStoreItemsRequest&& src) :
    PFTitleDataManagementGetStoreItemsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsRequest::GetStoreItemsRequest(const PFTitleDataManagementGetStoreItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetStoreItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue GetStoreItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetStoreItemsRequest>(*this);
}

size_t GetStoreItemsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementGetStoreItemsRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    serializedSize += (m_storeId.size() + 1);
    return serializedSize;
}

void GetStoreItemsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementGetStoreItemsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementGetStoreItemsRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    memcpy(stringBuffer, m_storeId.data(), m_storeId.size() + 1);
    serializedStruct->storeId = stringBuffer;
    stringBuffer += m_storeId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

StoreMarketingModel::StoreMarketingModel() :
    PFTitleDataManagementStoreMarketingModel{}
{
}

StoreMarketingModel::StoreMarketingModel(const StoreMarketingModel& src) :
    PFTitleDataManagementStoreMarketingModel{ src },
    m_description{ src.m_description },
    m_displayName{ src.m_displayName },
    m_metadata{ src.m_metadata }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    metadata.stringValue = m_metadata.StringValue();
}

StoreMarketingModel::StoreMarketingModel(StoreMarketingModel&& src) :
    PFTitleDataManagementStoreMarketingModel{ src },
    m_description{ std::move(src.m_description) },
    m_displayName{ std::move(src.m_displayName) },
    m_metadata{ std::move(src.m_metadata) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    metadata.stringValue = m_metadata.StringValue();
}

StoreMarketingModel::StoreMarketingModel(const PFTitleDataManagementStoreMarketingModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StoreMarketingModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata);
}

JsonValue StoreMarketingModel::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementStoreMarketingModel>(*this);
}

StoreItem::StoreItem() :
    PFTitleDataManagementStoreItem{}
{
}

StoreItem::StoreItem(const StoreItem& src) :
    PFTitleDataManagementStoreItem{ src },
    m_customData{ src.m_customData },
    m_displayPosition{ src.m_displayPosition },
    m_itemId{ src.m_itemId },
    m_realCurrencyPrices{ src.m_realCurrencyPrices },
    m_virtualCurrencyPrices{ src.m_virtualCurrencyPrices }
{
    customData.stringValue = m_customData.StringValue();
    displayPosition = m_displayPosition ? m_displayPosition.operator->() : nullptr;
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

StoreItem::StoreItem(StoreItem&& src) :
    PFTitleDataManagementStoreItem{ src },
    m_customData{ std::move(src.m_customData) },
    m_displayPosition{ std::move(src.m_displayPosition) },
    m_itemId{ std::move(src.m_itemId) },
    m_realCurrencyPrices{ std::move(src.m_realCurrencyPrices) },
    m_virtualCurrencyPrices{ std::move(src.m_virtualCurrencyPrices) }
{
    customData.stringValue = m_customData.StringValue();
    displayPosition = m_displayPosition ? m_displayPosition.operator->() : nullptr;
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

StoreItem::StoreItem(const PFTitleDataManagementStoreItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StoreItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData);
    JsonUtils::ObjectGetMember(input, "DisplayPosition", m_displayPosition, displayPosition);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
}

JsonValue StoreItem::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementStoreItem>(*this);
}

GetStoreItemsResult::GetStoreItemsResult() :
    PFTitleDataManagementGetStoreItemsResult{}
{
}

GetStoreItemsResult::GetStoreItemsResult(const GetStoreItemsResult& src) :
    PFTitleDataManagementGetStoreItemsResult{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_marketingData{ src.m_marketingData },
    m_source{ src.m_source },
    m_store{ src.m_store },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    marketingData = m_marketingData ? m_marketingData.operator->() : nullptr;
    source = m_source ? m_source.operator->() : nullptr;
    store = m_store.Empty() ? nullptr : m_store.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsResult::GetStoreItemsResult(GetStoreItemsResult&& src) :
    PFTitleDataManagementGetStoreItemsResult{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_marketingData{ std::move(src.m_marketingData) },
    m_source{ std::move(src.m_source) },
    m_store{ std::move(src.m_store) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    marketingData = m_marketingData ? m_marketingData.operator->() : nullptr;
    source = m_source ? m_source.operator->() : nullptr;
    store = m_store.Empty() ? nullptr : m_store.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsResult::GetStoreItemsResult(const PFTitleDataManagementGetStoreItemsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetStoreItemsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "MarketingData", m_marketingData, marketingData);
    JsonUtils::ObjectGetMember(input, "Source", m_source, source);
    JsonUtils::ObjectGetMember(input, "Store", m_store, store, storeCount);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue GetStoreItemsResult::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetStoreItemsResult>(*this);
}

GetTitleDataRequest::GetTitleDataRequest() :
    PFTitleDataManagementGetTitleDataRequest{}
{
}

GetTitleDataRequest::GetTitleDataRequest(const GetTitleDataRequest& src) :
    PFTitleDataManagementGetTitleDataRequest{ src },
    m_keys{ src.m_keys },
    m_overrideLabel{ src.m_overrideLabel }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

GetTitleDataRequest::GetTitleDataRequest(GetTitleDataRequest&& src) :
    PFTitleDataManagementGetTitleDataRequest{ src },
    m_keys{ std::move(src.m_keys) },
    m_overrideLabel{ std::move(src.m_overrideLabel) }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

GetTitleDataRequest::GetTitleDataRequest(const PFTitleDataManagementGetTitleDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
    JsonUtils::ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
}

JsonValue GetTitleDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetTitleDataRequest>(*this);
}

GetTitleDataResult::GetTitleDataResult() :
    PFTitleDataManagementGetTitleDataResult{}
{
}

GetTitleDataResult::GetTitleDataResult(const GetTitleDataResult& src) :
    PFTitleDataManagementGetTitleDataResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetTitleDataResult::GetTitleDataResult(GetTitleDataResult&& src) :
    PFTitleDataManagementGetTitleDataResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetTitleDataResult::GetTitleDataResult(const PFTitleDataManagementGetTitleDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetTitleDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetTitleDataResult>(*this);
}

ListVirtualCurrencyTypesResult::ListVirtualCurrencyTypesResult() :
    PFTitleDataManagementListVirtualCurrencyTypesResult{}
{
}

ListVirtualCurrencyTypesResult::ListVirtualCurrencyTypesResult(const ListVirtualCurrencyTypesResult& src) :
    PFTitleDataManagementListVirtualCurrencyTypesResult{ src },
    m_virtualCurrencies{ src.m_virtualCurrencies }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

ListVirtualCurrencyTypesResult::ListVirtualCurrencyTypesResult(ListVirtualCurrencyTypesResult&& src) :
    PFTitleDataManagementListVirtualCurrencyTypesResult{ src },
    m_virtualCurrencies{ std::move(src.m_virtualCurrencies) }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

ListVirtualCurrencyTypesResult::ListVirtualCurrencyTypesResult(const PFTitleDataManagementListVirtualCurrencyTypesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListVirtualCurrencyTypesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "VirtualCurrencies", m_virtualCurrencies, virtualCurrencies, virtualCurrenciesCount);
}

JsonValue ListVirtualCurrencyTypesResult::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementListVirtualCurrencyTypesResult>(*this);
}

RemoveVirtualCurrencyTypesRequest::RemoveVirtualCurrencyTypesRequest() :
    PFTitleDataManagementRemoveVirtualCurrencyTypesRequest{}
{
}

RemoveVirtualCurrencyTypesRequest::RemoveVirtualCurrencyTypesRequest(const RemoveVirtualCurrencyTypesRequest& src) :
    PFTitleDataManagementRemoveVirtualCurrencyTypesRequest{ src },
    m_virtualCurrencies{ src.m_virtualCurrencies }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

RemoveVirtualCurrencyTypesRequest::RemoveVirtualCurrencyTypesRequest(RemoveVirtualCurrencyTypesRequest&& src) :
    PFTitleDataManagementRemoveVirtualCurrencyTypesRequest{ src },
    m_virtualCurrencies{ std::move(src.m_virtualCurrencies) }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

RemoveVirtualCurrencyTypesRequest::RemoveVirtualCurrencyTypesRequest(const PFTitleDataManagementRemoveVirtualCurrencyTypesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveVirtualCurrencyTypesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "VirtualCurrencies", m_virtualCurrencies, virtualCurrencies, virtualCurrenciesCount);
}

JsonValue RemoveVirtualCurrencyTypesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementRemoveVirtualCurrencyTypesRequest>(*this);
}

UpdateCatalogItemsRequest::UpdateCatalogItemsRequest() :
    PFTitleDataManagementUpdateCatalogItemsRequest{}
{
}

UpdateCatalogItemsRequest::UpdateCatalogItemsRequest(const UpdateCatalogItemsRequest& src) :
    PFTitleDataManagementUpdateCatalogItemsRequest{ src },
    m_catalog{ src.m_catalog },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_setAsDefaultCatalog{ src.m_setAsDefaultCatalog }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    setAsDefaultCatalog = m_setAsDefaultCatalog ? m_setAsDefaultCatalog.operator->() : nullptr;
}

UpdateCatalogItemsRequest::UpdateCatalogItemsRequest(UpdateCatalogItemsRequest&& src) :
    PFTitleDataManagementUpdateCatalogItemsRequest{ src },
    m_catalog{ std::move(src.m_catalog) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_setAsDefaultCatalog{ std::move(src.m_setAsDefaultCatalog) }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    setAsDefaultCatalog = m_setAsDefaultCatalog ? m_setAsDefaultCatalog.operator->() : nullptr;
}

UpdateCatalogItemsRequest::UpdateCatalogItemsRequest(const PFTitleDataManagementUpdateCatalogItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateCatalogItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Catalog", m_catalog, catalog, catalogCount);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "SetAsDefaultCatalog", m_setAsDefaultCatalog, setAsDefaultCatalog);
}

JsonValue UpdateCatalogItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementUpdateCatalogItemsRequest>(*this);
}

UpdateStoreItemsRequest::UpdateStoreItemsRequest() :
    PFTitleDataManagementUpdateStoreItemsRequest{}
{
}

UpdateStoreItemsRequest::UpdateStoreItemsRequest(const UpdateStoreItemsRequest& src) :
    PFTitleDataManagementUpdateStoreItemsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_marketingData{ src.m_marketingData },
    m_store{ src.m_store },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketingData = m_marketingData ? m_marketingData.operator->() : nullptr;
    store = m_store.Empty() ? nullptr : m_store.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

UpdateStoreItemsRequest::UpdateStoreItemsRequest(UpdateStoreItemsRequest&& src) :
    PFTitleDataManagementUpdateStoreItemsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_marketingData{ std::move(src.m_marketingData) },
    m_store{ std::move(src.m_store) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketingData = m_marketingData ? m_marketingData.operator->() : nullptr;
    store = m_store.Empty() ? nullptr : m_store.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

UpdateStoreItemsRequest::UpdateStoreItemsRequest(const PFTitleDataManagementUpdateStoreItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateStoreItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MarketingData", m_marketingData, marketingData);
    JsonUtils::ObjectGetMember(input, "Store", m_store, store, storeCount);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue UpdateStoreItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementUpdateStoreItemsRequest>(*this);
}

SetTitleDataRequest::SetTitleDataRequest() :
    PFTitleDataManagementSetTitleDataRequest{}
{
}

SetTitleDataRequest::SetTitleDataRequest(const SetTitleDataRequest& src) :
    PFTitleDataManagementSetTitleDataRequest{ src },
    m_key{ src.m_key },
    m_value{ src.m_value }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetTitleDataRequest::SetTitleDataRequest(SetTitleDataRequest&& src) :
    PFTitleDataManagementSetTitleDataRequest{ src },
    m_key{ std::move(src.m_key) },
    m_value{ std::move(src.m_value) }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetTitleDataRequest::SetTitleDataRequest(const PFTitleDataManagementSetTitleDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetTitleDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue SetTitleDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementSetTitleDataRequest>(*this);
}

size_t SetTitleDataRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementSetTitleDataRequest) };
    serializedSize += (m_key.size() + 1);
    serializedSize += (m_value.size() + 1);
    return serializedSize;
}

void SetTitleDataRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementSetTitleDataRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementSetTitleDataRequest);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
    serializedStruct->value = stringBuffer;
    stringBuffer += m_value.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

TitleDataKeyValue::TitleDataKeyValue() :
    PFTitleDataManagementTitleDataKeyValue{}
{
}

TitleDataKeyValue::TitleDataKeyValue(const TitleDataKeyValue& src) :
    PFTitleDataManagementTitleDataKeyValue{ src },
    m_key{ src.m_key },
    m_value{ src.m_value }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

TitleDataKeyValue::TitleDataKeyValue(TitleDataKeyValue&& src) :
    PFTitleDataManagementTitleDataKeyValue{ src },
    m_key{ std::move(src.m_key) },
    m_value{ std::move(src.m_value) }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

TitleDataKeyValue::TitleDataKeyValue(const PFTitleDataManagementTitleDataKeyValue& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TitleDataKeyValue::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue TitleDataKeyValue::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementTitleDataKeyValue>(*this);
}

size_t TitleDataKeyValue::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementTitleDataKeyValue) };
    serializedSize += (m_key.size() + 1);
    serializedSize += (m_value.size() + 1);
    return serializedSize;
}

void TitleDataKeyValue::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementTitleDataKeyValue{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementTitleDataKeyValue);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
    serializedStruct->value = stringBuffer;
    stringBuffer += m_value.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetTitleDataAndOverridesRequest::SetTitleDataAndOverridesRequest() :
    PFTitleDataManagementSetTitleDataAndOverridesRequest{}
{
}

SetTitleDataAndOverridesRequest::SetTitleDataAndOverridesRequest(const SetTitleDataAndOverridesRequest& src) :
    PFTitleDataManagementSetTitleDataAndOverridesRequest{ src },
    m_keyValues{ src.m_keyValues },
    m_overrideLabel{ src.m_overrideLabel }
{
    keyValues = m_keyValues.Empty() ? nullptr : m_keyValues.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

SetTitleDataAndOverridesRequest::SetTitleDataAndOverridesRequest(SetTitleDataAndOverridesRequest&& src) :
    PFTitleDataManagementSetTitleDataAndOverridesRequest{ src },
    m_keyValues{ std::move(src.m_keyValues) },
    m_overrideLabel{ std::move(src.m_overrideLabel) }
{
    keyValues = m_keyValues.Empty() ? nullptr : m_keyValues.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

SetTitleDataAndOverridesRequest::SetTitleDataAndOverridesRequest(const PFTitleDataManagementSetTitleDataAndOverridesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetTitleDataAndOverridesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "KeyValues", m_keyValues, keyValues, keyValuesCount);
    JsonUtils::ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
}

JsonValue SetTitleDataAndOverridesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementSetTitleDataAndOverridesRequest>(*this);
}

SetupPushNotificationRequest::SetupPushNotificationRequest() :
    PFTitleDataManagementSetupPushNotificationRequest{}
{
}

SetupPushNotificationRequest::SetupPushNotificationRequest(const SetupPushNotificationRequest& src) :
    PFTitleDataManagementSetupPushNotificationRequest{ src },
    m_credential{ src.m_credential },
    m_key{ src.m_key },
    m_name{ src.m_name }
{
    credential = m_credential.empty() ? nullptr : m_credential.data();
    key = m_key.empty() ? nullptr : m_key.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

SetupPushNotificationRequest::SetupPushNotificationRequest(SetupPushNotificationRequest&& src) :
    PFTitleDataManagementSetupPushNotificationRequest{ src },
    m_credential{ std::move(src.m_credential) },
    m_key{ std::move(src.m_key) },
    m_name{ std::move(src.m_name) }
{
    credential = m_credential.empty() ? nullptr : m_credential.data();
    key = m_key.empty() ? nullptr : m_key.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

SetupPushNotificationRequest::SetupPushNotificationRequest(const PFTitleDataManagementSetupPushNotificationRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetupPushNotificationRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Credential", m_credential, credential);
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "OverwriteOldARN", overwriteOldARN);
    JsonUtils::ObjectGetMember(input, "Platform", platform);
}

JsonValue SetupPushNotificationRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementSetupPushNotificationRequest>(*this);
}

size_t SetupPushNotificationRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementSetupPushNotificationRequest) };
    serializedSize += (m_credential.size() + 1);
    serializedSize += (m_key.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void SetupPushNotificationRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementSetupPushNotificationRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementSetupPushNotificationRequest);
    memcpy(stringBuffer, m_credential.data(), m_credential.size() + 1);
    serializedStruct->credential = stringBuffer;
    stringBuffer += m_credential.size() + 1;
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetupPushNotificationResult::SetupPushNotificationResult() :
    PFTitleDataManagementSetupPushNotificationResult{}
{
}

SetupPushNotificationResult::SetupPushNotificationResult(const SetupPushNotificationResult& src) :
    PFTitleDataManagementSetupPushNotificationResult{ src },
    m_aRN{ src.m_aRN }
{
    aRN = m_aRN.empty() ? nullptr : m_aRN.data();
}

SetupPushNotificationResult::SetupPushNotificationResult(SetupPushNotificationResult&& src) :
    PFTitleDataManagementSetupPushNotificationResult{ src },
    m_aRN{ std::move(src.m_aRN) }
{
    aRN = m_aRN.empty() ? nullptr : m_aRN.data();
}

SetupPushNotificationResult::SetupPushNotificationResult(const PFTitleDataManagementSetupPushNotificationResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetupPushNotificationResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ARN", m_aRN, aRN);
}

JsonValue SetupPushNotificationResult::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementSetupPushNotificationResult>(*this);
}

size_t SetupPushNotificationResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementSetupPushNotificationResult) };
    serializedSize += (m_aRN.size() + 1);
    return serializedSize;
}

void SetupPushNotificationResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementSetupPushNotificationResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementSetupPushNotificationResult);
    memcpy(stringBuffer, m_aRN.data(), m_aRN.size() + 1);
    serializedStruct->aRN = stringBuffer;
    stringBuffer += m_aRN.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RandomResultTable::RandomResultTable() :
    PFTitleDataManagementRandomResultTable{}
{
}

RandomResultTable::RandomResultTable(const RandomResultTable& src) :
    PFTitleDataManagementRandomResultTable{ src },
    m_nodes{ src.m_nodes },
    m_tableId{ src.m_tableId }
{
    nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

RandomResultTable::RandomResultTable(RandomResultTable&& src) :
    PFTitleDataManagementRandomResultTable{ src },
    m_nodes{ std::move(src.m_nodes) },
    m_tableId{ std::move(src.m_tableId) }
{
    nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

RandomResultTable::RandomResultTable(const PFTitleDataManagementRandomResultTable& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RandomResultTable::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Nodes", m_nodes, nodes, nodesCount);
    JsonUtils::ObjectGetMember(input, "TableId", m_tableId, tableId);
}

JsonValue RandomResultTable::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementRandomResultTable>(*this);
}

UpdateRandomResultTablesRequest::UpdateRandomResultTablesRequest() :
    PFTitleDataManagementUpdateRandomResultTablesRequest{}
{
}

UpdateRandomResultTablesRequest::UpdateRandomResultTablesRequest(const UpdateRandomResultTablesRequest& src) :
    PFTitleDataManagementUpdateRandomResultTablesRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_tables{ src.m_tables }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    tables = m_tables.Empty() ? nullptr : m_tables.Data();
}

UpdateRandomResultTablesRequest::UpdateRandomResultTablesRequest(UpdateRandomResultTablesRequest&& src) :
    PFTitleDataManagementUpdateRandomResultTablesRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_tables{ std::move(src.m_tables) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    tables = m_tables.Empty() ? nullptr : m_tables.Data();
}

UpdateRandomResultTablesRequest::UpdateRandomResultTablesRequest(const PFTitleDataManagementUpdateRandomResultTablesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateRandomResultTablesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Tables", m_tables, tables, tablesCount);
}

JsonValue UpdateRandomResultTablesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementUpdateRandomResultTablesRequest>(*this);
}

GetTimeResult::GetTimeResult() :
    PFTitleDataManagementGetTimeResult{}
{
}


GetTimeResult::GetTimeResult(const PFTitleDataManagementGetTimeResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTimeResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Time", time, true);
}

JsonValue GetTimeResult::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetTimeResult>(*this);
}

size_t GetTimeResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementGetTimeResult) };
    return serializedSize;
}

void GetTimeResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementGetTimeResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementGetTimeResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GetTitleNewsRequest::GetTitleNewsRequest() :
    PFTitleDataManagementGetTitleNewsRequest{}
{
}

GetTitleNewsRequest::GetTitleNewsRequest(const GetTitleNewsRequest& src) :
    PFTitleDataManagementGetTitleNewsRequest{ src },
    m_count{ src.m_count }
{
    count = m_count ? m_count.operator->() : nullptr;
}

GetTitleNewsRequest::GetTitleNewsRequest(GetTitleNewsRequest&& src) :
    PFTitleDataManagementGetTitleNewsRequest{ src },
    m_count{ std::move(src.m_count) }
{
    count = m_count ? m_count.operator->() : nullptr;
}

GetTitleNewsRequest::GetTitleNewsRequest(const PFTitleDataManagementGetTitleNewsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleNewsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Count", m_count, count);
}

JsonValue GetTitleNewsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetTitleNewsRequest>(*this);
}

TitleNewsItem::TitleNewsItem() :
    PFTitleDataManagementTitleNewsItem{}
{
}

TitleNewsItem::TitleNewsItem(const TitleNewsItem& src) :
    PFTitleDataManagementTitleNewsItem{ src },
    m_body{ src.m_body },
    m_newsId{ src.m_newsId },
    m_title{ src.m_title }
{
    body = m_body.empty() ? nullptr : m_body.data();
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

TitleNewsItem::TitleNewsItem(TitleNewsItem&& src) :
    PFTitleDataManagementTitleNewsItem{ src },
    m_body{ std::move(src.m_body) },
    m_newsId{ std::move(src.m_newsId) },
    m_title{ std::move(src.m_title) }
{
    body = m_body.empty() ? nullptr : m_body.data();
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

TitleNewsItem::TitleNewsItem(const PFTitleDataManagementTitleNewsItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TitleNewsItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "NewsId", m_newsId, newsId);
    JsonUtils::ObjectGetMember(input, "Timestamp", timestamp, true);
    JsonUtils::ObjectGetMember(input, "Title", m_title, title);
}

JsonValue TitleNewsItem::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementTitleNewsItem>(*this);
}

size_t TitleNewsItem::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTitleDataManagementTitleNewsItem) };
    serializedSize += (m_body.size() + 1);
    serializedSize += (m_newsId.size() + 1);
    serializedSize += (m_title.size() + 1);
    return serializedSize;
}

void TitleNewsItem::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTitleDataManagementTitleNewsItem{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTitleDataManagementTitleNewsItem);
    memcpy(stringBuffer, m_body.data(), m_body.size() + 1);
    serializedStruct->body = stringBuffer;
    stringBuffer += m_body.size() + 1;
    memcpy(stringBuffer, m_newsId.data(), m_newsId.size() + 1);
    serializedStruct->newsId = stringBuffer;
    stringBuffer += m_newsId.size() + 1;
    memcpy(stringBuffer, m_title.data(), m_title.size() + 1);
    serializedStruct->title = stringBuffer;
    stringBuffer += m_title.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetTitleNewsResult::GetTitleNewsResult() :
    PFTitleDataManagementGetTitleNewsResult{}
{
}

GetTitleNewsResult::GetTitleNewsResult(const GetTitleNewsResult& src) :
    PFTitleDataManagementGetTitleNewsResult{ src },
    m_news{ src.m_news }
{
    news = m_news.Empty() ? nullptr : m_news.Data();
}

GetTitleNewsResult::GetTitleNewsResult(GetTitleNewsResult&& src) :
    PFTitleDataManagementGetTitleNewsResult{ src },
    m_news{ std::move(src.m_news) }
{
    news = m_news.Empty() ? nullptr : m_news.Data();
}

GetTitleNewsResult::GetTitleNewsResult(const PFTitleDataManagementGetTitleNewsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleNewsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "News", m_news, news, newsCount);
}

JsonValue GetTitleNewsResult::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetTitleNewsResult>(*this);
}

GetStoreItemsServerRequest::GetStoreItemsServerRequest() :
    PFTitleDataManagementGetStoreItemsServerRequest{}
{
}

GetStoreItemsServerRequest::GetStoreItemsServerRequest(const GetStoreItemsServerRequest& src) :
    PFTitleDataManagementGetStoreItemsServerRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsServerRequest::GetStoreItemsServerRequest(GetStoreItemsServerRequest&& src) :
    PFTitleDataManagementGetStoreItemsServerRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsServerRequest::GetStoreItemsServerRequest(const PFTitleDataManagementGetStoreItemsServerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetStoreItemsServerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue GetStoreItemsServerRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTitleDataManagementGetStoreItemsServerRequest>(*this);
}

} // namespace TitleDataManagementModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementAddLocalizedNewsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Language", input.language);
    JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
    JsonUtils::ObjectAddMember(output, "Title", input.title);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementAddNewsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    JsonUtils::ObjectAddMember(output, "Title", input.title);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementAddNewsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementVirtualCurrencyData& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "InitialDeposit", input.initialDeposit);
    JsonUtils::ObjectAddMember(output, "RechargeMax", input.rechargeMax);
    JsonUtils::ObjectAddMember(output, "RechargeRate", input.rechargeRate);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementAddVirtualCurrencyTypesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "VirtualCurrencies", input.virtualCurrencies, input.virtualCurrenciesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementDeleteStoreRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementDeleteTitleDataOverrideRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetCatalogItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementCatalogItemBundleInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BundledItems", input.bundledItems, input.bundledItemsCount);
    JsonUtils::ObjectAddMember(output, "BundledResultTables", input.bundledResultTables, input.bundledResultTablesCount);
    JsonUtils::ObjectAddMember(output, "BundledVirtualCurrencies", input.bundledVirtualCurrencies, input.bundledVirtualCurrenciesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementCatalogItemConsumableInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "UsageCount", input.usageCount);
    JsonUtils::ObjectAddMember(output, "UsagePeriod", input.usagePeriod);
    JsonUtils::ObjectAddMember(output, "UsagePeriodGroup", input.usagePeriodGroup);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementCatalogItemContainerInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemContents", input.itemContents, input.itemContentsCount);
    JsonUtils::ObjectAddMember(output, "KeyItemId", input.keyItemId);
    JsonUtils::ObjectAddMember(output, "ResultTableContents", input.resultTableContents, input.resultTableContentsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyContents", input.virtualCurrencyContents, input.virtualCurrencyContentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementCatalogItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Bundle", input.bundle);
    JsonUtils::ObjectAddMember(output, "CanBecomeCharacter", input.canBecomeCharacter);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "Consumable", input.consumable);
    JsonUtils::ObjectAddMember(output, "Container", input.container);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "InitialLimitedEditionCount", input.initialLimitedEditionCount);
    JsonUtils::ObjectAddMember(output, "IsLimitedEdition", input.isLimitedEdition);
    JsonUtils::ObjectAddMember(output, "IsStackable", input.isStackable);
    JsonUtils::ObjectAddMember(output, "IsTradable", input.isTradable);
    JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "ItemImageUrl", input.itemImageUrl);
    JsonUtils::ObjectAddMember(output, "RealCurrencyPrices", input.realCurrencyPrices, input.realCurrencyPricesCount);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyPrices", input.virtualCurrencyPrices, input.virtualCurrencyPricesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetCatalogItemsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Catalog", input.catalog, input.catalogCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetPublisherDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetPublisherDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetRandomResultTablesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetStoreItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementStoreMarketingModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementStoreItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
    JsonUtils::ObjectAddMember(output, "DisplayPosition", input.displayPosition);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "RealCurrencyPrices", input.realCurrencyPrices, input.realCurrencyPricesCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyPrices", input.virtualCurrencyPrices, input.virtualCurrencyPricesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetStoreItemsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "MarketingData", input.marketingData);
    JsonUtils::ObjectAddMember(output, "Source", input.source);
    JsonUtils::ObjectAddMember(output, "Store", input.store, input.storeCount);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetTitleDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetTitleDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementListVirtualCurrencyTypesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "VirtualCurrencies", input.virtualCurrencies, input.virtualCurrenciesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementRemoveVirtualCurrencyTypesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "VirtualCurrencies", input.virtualCurrencies, input.virtualCurrenciesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementUpdateCatalogItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Catalog", input.catalog, input.catalogCount);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "SetAsDefaultCatalog", input.setAsDefaultCatalog);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementUpdateStoreItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MarketingData", input.marketingData);
    JsonUtils::ObjectAddMember(output, "Store", input.store, input.storeCount);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementSetTitleDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementTitleDataKeyValue& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementSetTitleDataAndOverridesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "KeyValues", input.keyValues, input.keyValuesCount);
    JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementSetupPushNotificationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Credential", input.credential);
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "OverwriteOldARN", input.overwriteOldARN);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementSetupPushNotificationResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ARN", input.aRN);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementRandomResultTable& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Nodes", input.nodes, input.nodesCount);
    JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementUpdateRandomResultTablesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Tables", input.tables, input.tablesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetTimeResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Time", input.time, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetTitleNewsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Count", input.count);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementTitleNewsItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    JsonUtils::ObjectAddMember(output, "Title", input.title);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetTitleNewsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "News", input.news, input.newsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTitleDataManagementGetStoreItemsServerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
