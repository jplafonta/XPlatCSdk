#include "stdafx.h"
#include "PlayerItemManagementDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace PlayerItemManagementModels
{

AdminAddUserVirtualCurrencyRequest::AdminAddUserVirtualCurrencyRequest() :
    PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest{}
{
}

AdminAddUserVirtualCurrencyRequest::AdminAddUserVirtualCurrencyRequest(const AdminAddUserVirtualCurrencyRequest& src) :
    PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AdminAddUserVirtualCurrencyRequest::AdminAddUserVirtualCurrencyRequest(AdminAddUserVirtualCurrencyRequest&& src) :
    PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AdminAddUserVirtualCurrencyRequest::AdminAddUserVirtualCurrencyRequest(const PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdminAddUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue AdminAddUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest>(*this);
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult() :
    PFPlayerItemManagementModifyUserVirtualCurrencyResult{}
{
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src) :
    PFPlayerItemManagementModifyUserVirtualCurrencyResult{ src },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(ModifyUserVirtualCurrencyResult&& src) :
    PFPlayerItemManagementModifyUserVirtualCurrencyResult{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(const PFPlayerItemManagementModifyUserVirtualCurrencyResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyUserVirtualCurrencyResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Balance", balance);
    JsonUtils::ObjectGetMember(input, "BalanceChange", balanceChange);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue ModifyUserVirtualCurrencyResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementModifyUserVirtualCurrencyResult>(*this);
}

size_t ModifyUserVirtualCurrencyResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementModifyUserVirtualCurrencyResult) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_virtualCurrency.size() + 1);
    return serializedSize;
}

void ModifyUserVirtualCurrencyResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementModifyUserVirtualCurrencyResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementModifyUserVirtualCurrencyResult);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_virtualCurrency.data(), m_virtualCurrency.size() + 1);
    serializedStruct->virtualCurrency = stringBuffer;
    stringBuffer += m_virtualCurrency.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CheckLimitedEditionItemAvailabilityRequest::CheckLimitedEditionItemAvailabilityRequest() :
    PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest{}
{
}

CheckLimitedEditionItemAvailabilityRequest::CheckLimitedEditionItemAvailabilityRequest(const CheckLimitedEditionItemAvailabilityRequest& src) :
    PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_itemId{ src.m_itemId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

CheckLimitedEditionItemAvailabilityRequest::CheckLimitedEditionItemAvailabilityRequest(CheckLimitedEditionItemAvailabilityRequest&& src) :
    PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_itemId{ std::move(src.m_itemId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

CheckLimitedEditionItemAvailabilityRequest::CheckLimitedEditionItemAvailabilityRequest(const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CheckLimitedEditionItemAvailabilityRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
}

JsonValue CheckLimitedEditionItemAvailabilityRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest>(*this);
}

size_t CheckLimitedEditionItemAvailabilityRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    serializedSize += (m_itemId.size() + 1);
    return serializedSize;
}

void CheckLimitedEditionItemAvailabilityRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    memcpy(stringBuffer, m_itemId.data(), m_itemId.size() + 1);
    serializedStruct->itemId = stringBuffer;
    stringBuffer += m_itemId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CheckLimitedEditionItemAvailabilityResult::CheckLimitedEditionItemAvailabilityResult() :
    PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult{}
{
}


CheckLimitedEditionItemAvailabilityResult::CheckLimitedEditionItemAvailabilityResult(const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CheckLimitedEditionItemAvailabilityResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
}

JsonValue CheckLimitedEditionItemAvailabilityResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult>(*this);
}

size_t CheckLimitedEditionItemAvailabilityResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult) };
    return serializedSize;
}

void CheckLimitedEditionItemAvailabilityResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

AdminGetUserInventoryRequest::AdminGetUserInventoryRequest() :
    PFPlayerItemManagementAdminGetUserInventoryRequest{}
{
}

AdminGetUserInventoryRequest::AdminGetUserInventoryRequest(const AdminGetUserInventoryRequest& src) :
    PFPlayerItemManagementAdminGetUserInventoryRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AdminGetUserInventoryRequest::AdminGetUserInventoryRequest(AdminGetUserInventoryRequest&& src) :
    PFPlayerItemManagementAdminGetUserInventoryRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AdminGetUserInventoryRequest::AdminGetUserInventoryRequest(const PFPlayerItemManagementAdminGetUserInventoryRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdminGetUserInventoryRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue AdminGetUserInventoryRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementAdminGetUserInventoryRequest>(*this);
}

AdminGetUserInventoryResult::AdminGetUserInventoryResult() :
    PFPlayerItemManagementAdminGetUserInventoryResult{}
{
}

AdminGetUserInventoryResult::AdminGetUserInventoryResult(const AdminGetUserInventoryResult& src) :
    PFPlayerItemManagementAdminGetUserInventoryResult{ src },
    m_inventory{ src.m_inventory },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

AdminGetUserInventoryResult::AdminGetUserInventoryResult(AdminGetUserInventoryResult&& src) :
    PFPlayerItemManagementAdminGetUserInventoryResult{ src },
    m_inventory{ std::move(src.m_inventory) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

AdminGetUserInventoryResult::AdminGetUserInventoryResult(const PFPlayerItemManagementAdminGetUserInventoryResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdminGetUserInventoryResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue AdminGetUserInventoryResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementAdminGetUserInventoryResult>(*this);
}

ItemGrant::ItemGrant() :
    PFPlayerItemManagementItemGrant{}
{
}

ItemGrant::ItemGrant(const ItemGrant& src) :
    PFPlayerItemManagementItemGrant{ src },
    m_annotation{ src.m_annotation },
    m_characterId{ src.m_characterId },
    m_data{ src.m_data },
    m_itemId{ src.m_itemId },
    m_keysToRemove{ src.m_keysToRemove },
    m_playFabId{ src.m_playFabId }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ItemGrant::ItemGrant(ItemGrant&& src) :
    PFPlayerItemManagementItemGrant{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_characterId{ std::move(src.m_characterId) },
    m_data{ std::move(src.m_data) },
    m_itemId{ std::move(src.m_itemId) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ItemGrant::ItemGrant(const PFPlayerItemManagementItemGrant& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ItemGrant::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ItemGrant::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementItemGrant>(*this);
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest() :
    PFPlayerItemManagementGrantItemsToUsersRequest{}
{
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest(const GrantItemsToUsersRequest& src) :
    PFPlayerItemManagementGrantItemsToUsersRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_itemGrants{ src.m_itemGrants }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemGrants = m_itemGrants.Empty() ? nullptr : m_itemGrants.Data();
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest(GrantItemsToUsersRequest&& src) :
    PFPlayerItemManagementGrantItemsToUsersRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemGrants{ std::move(src.m_itemGrants) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemGrants = m_itemGrants.Empty() ? nullptr : m_itemGrants.Data();
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest(const PFPlayerItemManagementGrantItemsToUsersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToUsersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemGrants", m_itemGrants, itemGrants, itemGrantsCount);
}

JsonValue GrantItemsToUsersRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGrantItemsToUsersRequest>(*this);
}

GrantedItemInstance::GrantedItemInstance() :
    PFPlayerItemManagementGrantedItemInstance{}
{
}

GrantedItemInstance::GrantedItemInstance(const GrantedItemInstance& src) :
    PFPlayerItemManagementGrantedItemInstance{ src },
    m_annotation{ src.m_annotation },
    m_bundleContents{ src.m_bundleContents },
    m_bundleParent{ src.m_bundleParent },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customData{ src.m_customData },
    m_displayName{ src.m_displayName },
    m_expiration{ src.m_expiration },
    m_itemClass{ src.m_itemClass },
    m_itemId{ src.m_itemId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId },
    m_purchaseDate{ src.m_purchaseDate },
    m_remainingUses{ src.m_remainingUses },
    m_unitCurrency{ src.m_unitCurrency },
    m_usesIncrementedBy{ src.m_usesIncrementedBy }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
    bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customData = m_customData.Empty() ? nullptr : m_customData.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    expiration = m_expiration ? m_expiration.operator->() : nullptr;
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
    remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
    unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
    usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
}

GrantedItemInstance::GrantedItemInstance(GrantedItemInstance&& src) :
    PFPlayerItemManagementGrantedItemInstance{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_bundleContents{ std::move(src.m_bundleContents) },
    m_bundleParent{ std::move(src.m_bundleParent) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customData{ std::move(src.m_customData) },
    m_displayName{ std::move(src.m_displayName) },
    m_expiration{ std::move(src.m_expiration) },
    m_itemClass{ std::move(src.m_itemClass) },
    m_itemId{ std::move(src.m_itemId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_purchaseDate{ std::move(src.m_purchaseDate) },
    m_remainingUses{ std::move(src.m_remainingUses) },
    m_unitCurrency{ std::move(src.m_unitCurrency) },
    m_usesIncrementedBy{ std::move(src.m_usesIncrementedBy) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
    bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customData = m_customData.Empty() ? nullptr : m_customData.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    expiration = m_expiration ? m_expiration.operator->() : nullptr;
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
    remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
    unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
    usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
}

GrantedItemInstance::GrantedItemInstance(const PFPlayerItemManagementGrantedItemInstance& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantedItemInstance::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "BundleContents", m_bundleContents, bundleContents, bundleContentsCount);
    JsonUtils::ObjectGetMember(input, "BundleParent", m_bundleParent, bundleParent);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData, customDataCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Expiration", m_expiration, expiration, true);
    JsonUtils::ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "PurchaseDate", m_purchaseDate, purchaseDate, true);
    JsonUtils::ObjectGetMember(input, "RemainingUses", m_remainingUses, remainingUses);
    JsonUtils::ObjectGetMember(input, "Result", result);
    JsonUtils::ObjectGetMember(input, "UnitCurrency", m_unitCurrency, unitCurrency);
    JsonUtils::ObjectGetMember(input, "UnitPrice", unitPrice);
    JsonUtils::ObjectGetMember(input, "UsesIncrementedBy", m_usesIncrementedBy, usesIncrementedBy);
}

JsonValue GrantedItemInstance::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGrantedItemInstance>(*this);
}

GrantItemsToUsersResult::GrantItemsToUsersResult() :
    PFPlayerItemManagementGrantItemsToUsersResult{}
{
}

GrantItemsToUsersResult::GrantItemsToUsersResult(const GrantItemsToUsersResult& src) :
    PFPlayerItemManagementGrantItemsToUsersResult{ src },
    m_itemGrantResults{ src.m_itemGrantResults }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToUsersResult::GrantItemsToUsersResult(GrantItemsToUsersResult&& src) :
    PFPlayerItemManagementGrantItemsToUsersResult{ src },
    m_itemGrantResults{ std::move(src.m_itemGrantResults) }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToUsersResult::GrantItemsToUsersResult(const PFPlayerItemManagementGrantItemsToUsersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToUsersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
}

JsonValue GrantItemsToUsersResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGrantItemsToUsersResult>(*this);
}

IncrementLimitedEditionItemAvailabilityRequest::IncrementLimitedEditionItemAvailabilityRequest() :
    PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest{}
{
}

IncrementLimitedEditionItemAvailabilityRequest::IncrementLimitedEditionItemAvailabilityRequest(const IncrementLimitedEditionItemAvailabilityRequest& src) :
    PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_itemId{ src.m_itemId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

IncrementLimitedEditionItemAvailabilityRequest::IncrementLimitedEditionItemAvailabilityRequest(IncrementLimitedEditionItemAvailabilityRequest&& src) :
    PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemId{ std::move(src.m_itemId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

IncrementLimitedEditionItemAvailabilityRequest::IncrementLimitedEditionItemAvailabilityRequest(const PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IncrementLimitedEditionItemAvailabilityRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
}

JsonValue IncrementLimitedEditionItemAvailabilityRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest>(*this);
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest() :
    PFPlayerItemManagementRevokeInventoryItemRequest{}
{
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src) :
    PFPlayerItemManagementRevokeInventoryItemRequest{ src },
    m_characterId{ src.m_characterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest(RevokeInventoryItemRequest&& src) :
    PFPlayerItemManagementRevokeInventoryItemRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest(const PFPlayerItemManagementRevokeInventoryItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RevokeInventoryItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementRevokeInventoryItemRequest>(*this);
}

size_t RevokeInventoryItemRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementRevokeInventoryItemRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void RevokeInventoryItemRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementRevokeInventoryItemRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementRevokeInventoryItemRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RevokeInventoryItem::RevokeInventoryItem() :
    PFPlayerItemManagementRevokeInventoryItem{}
{
}

RevokeInventoryItem::RevokeInventoryItem(const RevokeInventoryItem& src) :
    PFPlayerItemManagementRevokeInventoryItem{ src },
    m_characterId{ src.m_characterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItem::RevokeInventoryItem(RevokeInventoryItem&& src) :
    PFPlayerItemManagementRevokeInventoryItem{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItem::RevokeInventoryItem(const PFPlayerItemManagementRevokeInventoryItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RevokeInventoryItem::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementRevokeInventoryItem>(*this);
}

size_t RevokeInventoryItem::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementRevokeInventoryItem) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void RevokeInventoryItem::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementRevokeInventoryItem{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementRevokeInventoryItem);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest() :
    PFPlayerItemManagementRevokeInventoryItemsRequest{}
{
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest(const RevokeInventoryItemsRequest& src) :
    PFPlayerItemManagementRevokeInventoryItemsRequest{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest(RevokeInventoryItemsRequest&& src) :
    PFPlayerItemManagementRevokeInventoryItemsRequest{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest(const PFPlayerItemManagementRevokeInventoryItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue RevokeInventoryItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementRevokeInventoryItemsRequest>(*this);
}

RevokeItemError::RevokeItemError() :
    PFPlayerItemManagementRevokeItemError{}
{
}

RevokeItemError::RevokeItemError(const RevokeItemError& src) :
    PFPlayerItemManagementRevokeItemError{ src },
    m_error{ src.m_error },
    m_item{ src.m_item }
{
    error = m_error ? m_error.operator->() : nullptr;
    item = m_item ? m_item.operator->() : nullptr;
}

RevokeItemError::RevokeItemError(RevokeItemError&& src) :
    PFPlayerItemManagementRevokeItemError{ src },
    m_error{ std::move(src.m_error) },
    m_item{ std::move(src.m_item) }
{
    error = m_error ? m_error.operator->() : nullptr;
    item = m_item ? m_item.operator->() : nullptr;
}

RevokeItemError::RevokeItemError(const PFPlayerItemManagementRevokeItemError& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeItemError::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "Item", m_item, item);
}

JsonValue RevokeItemError::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementRevokeItemError>(*this);
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult() :
    PFPlayerItemManagementRevokeInventoryItemsResult{}
{
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult(const RevokeInventoryItemsResult& src) :
    PFPlayerItemManagementRevokeInventoryItemsResult{ src },
    m_errors{ src.m_errors }
{
    errors = m_errors.Empty() ? nullptr : m_errors.Data();
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult(RevokeInventoryItemsResult&& src) :
    PFPlayerItemManagementRevokeInventoryItemsResult{ src },
    m_errors{ std::move(src.m_errors) }
{
    errors = m_errors.Empty() ? nullptr : m_errors.Data();
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult(const PFPlayerItemManagementRevokeInventoryItemsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItemsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Errors", m_errors, errors, errorsCount);
}

JsonValue RevokeInventoryItemsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementRevokeInventoryItemsResult>(*this);
}

AdminSubtractUserVirtualCurrencyRequest::AdminSubtractUserVirtualCurrencyRequest() :
    PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest{}
{
}

AdminSubtractUserVirtualCurrencyRequest::AdminSubtractUserVirtualCurrencyRequest(const AdminSubtractUserVirtualCurrencyRequest& src) :
    PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AdminSubtractUserVirtualCurrencyRequest::AdminSubtractUserVirtualCurrencyRequest(AdminSubtractUserVirtualCurrencyRequest&& src) :
    PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AdminSubtractUserVirtualCurrencyRequest::AdminSubtractUserVirtualCurrencyRequest(const PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdminSubtractUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue AdminSubtractUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest>(*this);
}

ClientAddUserVirtualCurrencyRequest::ClientAddUserVirtualCurrencyRequest() :
    PFPlayerItemManagementClientAddUserVirtualCurrencyRequest{}
{
}

ClientAddUserVirtualCurrencyRequest::ClientAddUserVirtualCurrencyRequest(const ClientAddUserVirtualCurrencyRequest& src) :
    PFPlayerItemManagementClientAddUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ClientAddUserVirtualCurrencyRequest::ClientAddUserVirtualCurrencyRequest(ClientAddUserVirtualCurrencyRequest&& src) :
    PFPlayerItemManagementClientAddUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ClientAddUserVirtualCurrencyRequest::ClientAddUserVirtualCurrencyRequest(const PFPlayerItemManagementClientAddUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientAddUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue ClientAddUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementClientAddUserVirtualCurrencyRequest>(*this);
}

ConfirmPurchaseRequest::ConfirmPurchaseRequest() :
    PFPlayerItemManagementConfirmPurchaseRequest{}
{
}

ConfirmPurchaseRequest::ConfirmPurchaseRequest(const ConfirmPurchaseRequest& src) :
    PFPlayerItemManagementConfirmPurchaseRequest{ src },
    m_customTags{ src.m_customTags },
    m_orderId{ src.m_orderId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

ConfirmPurchaseRequest::ConfirmPurchaseRequest(ConfirmPurchaseRequest&& src) :
    PFPlayerItemManagementConfirmPurchaseRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_orderId{ std::move(src.m_orderId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

ConfirmPurchaseRequest::ConfirmPurchaseRequest(const PFPlayerItemManagementConfirmPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConfirmPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
}

JsonValue ConfirmPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementConfirmPurchaseRequest>(*this);
}

ConfirmPurchaseResult::ConfirmPurchaseResult() :
    PFPlayerItemManagementConfirmPurchaseResult{}
{
}

ConfirmPurchaseResult::ConfirmPurchaseResult(const ConfirmPurchaseResult& src) :
    PFPlayerItemManagementConfirmPurchaseResult{ src },
    m_items{ src.m_items },
    m_orderId{ src.m_orderId }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

ConfirmPurchaseResult::ConfirmPurchaseResult(ConfirmPurchaseResult&& src) :
    PFPlayerItemManagementConfirmPurchaseResult{ src },
    m_items{ std::move(src.m_items) },
    m_orderId{ std::move(src.m_orderId) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

ConfirmPurchaseResult::ConfirmPurchaseResult(const PFPlayerItemManagementConfirmPurchaseResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConfirmPurchaseResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "PurchaseDate", purchaseDate, true);
}

JsonValue ConfirmPurchaseResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementConfirmPurchaseResult>(*this);
}

ClientConsumeItemRequest::ClientConsumeItemRequest() :
    PFPlayerItemManagementClientConsumeItemRequest{}
{
}

ClientConsumeItemRequest::ClientConsumeItemRequest(const ClientConsumeItemRequest& src) :
    PFPlayerItemManagementClientConsumeItemRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_itemInstanceId{ src.m_itemInstanceId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ClientConsumeItemRequest::ClientConsumeItemRequest(ClientConsumeItemRequest&& src) :
    PFPlayerItemManagementClientConsumeItemRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ClientConsumeItemRequest::ClientConsumeItemRequest(const PFPlayerItemManagementClientConsumeItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientConsumeItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ConsumeCount", consumeCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
}

JsonValue ClientConsumeItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementClientConsumeItemRequest>(*this);
}

ConsumeItemResult::ConsumeItemResult() :
    PFPlayerItemManagementConsumeItemResult{}
{
}

ConsumeItemResult::ConsumeItemResult(const ConsumeItemResult& src) :
    PFPlayerItemManagementConsumeItemResult{ src },
    m_itemInstanceId{ src.m_itemInstanceId }
{
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ConsumeItemResult::ConsumeItemResult(ConsumeItemResult&& src) :
    PFPlayerItemManagementConsumeItemResult{ src },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) }
{
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ConsumeItemResult::ConsumeItemResult(const PFPlayerItemManagementConsumeItemResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumeItemResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "RemainingUses", remainingUses);
}

JsonValue ConsumeItemResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementConsumeItemResult>(*this);
}

size_t ConsumeItemResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementConsumeItemResult) };
    serializedSize += (m_itemInstanceId.size() + 1);
    return serializedSize;
}

void ConsumeItemResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementConsumeItemResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementConsumeItemResult);
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ClientGetCharacterInventoryRequest::ClientGetCharacterInventoryRequest() :
    PFPlayerItemManagementClientGetCharacterInventoryRequest{}
{
}

ClientGetCharacterInventoryRequest::ClientGetCharacterInventoryRequest(const ClientGetCharacterInventoryRequest& src) :
    PFPlayerItemManagementClientGetCharacterInventoryRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientGetCharacterInventoryRequest::ClientGetCharacterInventoryRequest(ClientGetCharacterInventoryRequest&& src) :
    PFPlayerItemManagementClientGetCharacterInventoryRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientGetCharacterInventoryRequest::ClientGetCharacterInventoryRequest(const PFPlayerItemManagementClientGetCharacterInventoryRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetCharacterInventoryRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ClientGetCharacterInventoryRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementClientGetCharacterInventoryRequest>(*this);
}

ClientGetCharacterInventoryResult::ClientGetCharacterInventoryResult() :
    PFPlayerItemManagementClientGetCharacterInventoryResult{}
{
}

ClientGetCharacterInventoryResult::ClientGetCharacterInventoryResult(const ClientGetCharacterInventoryResult& src) :
    PFPlayerItemManagementClientGetCharacterInventoryResult{ src },
    m_characterId{ src.m_characterId },
    m_inventory{ src.m_inventory },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

ClientGetCharacterInventoryResult::ClientGetCharacterInventoryResult(ClientGetCharacterInventoryResult&& src) :
    PFPlayerItemManagementClientGetCharacterInventoryResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_inventory{ std::move(src.m_inventory) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

ClientGetCharacterInventoryResult::ClientGetCharacterInventoryResult(const PFPlayerItemManagementClientGetCharacterInventoryResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetCharacterInventoryResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue ClientGetCharacterInventoryResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementClientGetCharacterInventoryResult>(*this);
}

GetPaymentTokenRequest::GetPaymentTokenRequest() :
    PFPlayerItemManagementGetPaymentTokenRequest{}
{
}

GetPaymentTokenRequest::GetPaymentTokenRequest(const GetPaymentTokenRequest& src) :
    PFPlayerItemManagementGetPaymentTokenRequest{ src },
    m_tokenProvider{ src.m_tokenProvider }
{
    tokenProvider = m_tokenProvider.empty() ? nullptr : m_tokenProvider.data();
}

GetPaymentTokenRequest::GetPaymentTokenRequest(GetPaymentTokenRequest&& src) :
    PFPlayerItemManagementGetPaymentTokenRequest{ src },
    m_tokenProvider{ std::move(src.m_tokenProvider) }
{
    tokenProvider = m_tokenProvider.empty() ? nullptr : m_tokenProvider.data();
}

GetPaymentTokenRequest::GetPaymentTokenRequest(const PFPlayerItemManagementGetPaymentTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPaymentTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TokenProvider", m_tokenProvider, tokenProvider);
}

JsonValue GetPaymentTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGetPaymentTokenRequest>(*this);
}

size_t GetPaymentTokenRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementGetPaymentTokenRequest) };
    serializedSize += (m_tokenProvider.size() + 1);
    return serializedSize;
}

void GetPaymentTokenRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementGetPaymentTokenRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementGetPaymentTokenRequest);
    memcpy(stringBuffer, m_tokenProvider.data(), m_tokenProvider.size() + 1);
    serializedStruct->tokenProvider = stringBuffer;
    stringBuffer += m_tokenProvider.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPaymentTokenResult::GetPaymentTokenResult() :
    PFPlayerItemManagementGetPaymentTokenResult{}
{
}

GetPaymentTokenResult::GetPaymentTokenResult(const GetPaymentTokenResult& src) :
    PFPlayerItemManagementGetPaymentTokenResult{ src },
    m_orderId{ src.m_orderId },
    m_providerToken{ src.m_providerToken }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerToken = m_providerToken.empty() ? nullptr : m_providerToken.data();
}

GetPaymentTokenResult::GetPaymentTokenResult(GetPaymentTokenResult&& src) :
    PFPlayerItemManagementGetPaymentTokenResult{ src },
    m_orderId{ std::move(src.m_orderId) },
    m_providerToken{ std::move(src.m_providerToken) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerToken = m_providerToken.empty() ? nullptr : m_providerToken.data();
}

GetPaymentTokenResult::GetPaymentTokenResult(const PFPlayerItemManagementGetPaymentTokenResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPaymentTokenResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "ProviderToken", m_providerToken, providerToken);
}

JsonValue GetPaymentTokenResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGetPaymentTokenResult>(*this);
}

size_t GetPaymentTokenResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementGetPaymentTokenResult) };
    serializedSize += (m_orderId.size() + 1);
    serializedSize += (m_providerToken.size() + 1);
    return serializedSize;
}

void GetPaymentTokenResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementGetPaymentTokenResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementGetPaymentTokenResult);
    memcpy(stringBuffer, m_orderId.data(), m_orderId.size() + 1);
    serializedStruct->orderId = stringBuffer;
    stringBuffer += m_orderId.size() + 1;
    memcpy(stringBuffer, m_providerToken.data(), m_providerToken.size() + 1);
    serializedStruct->providerToken = stringBuffer;
    stringBuffer += m_providerToken.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPurchaseRequest::GetPurchaseRequest() :
    PFPlayerItemManagementGetPurchaseRequest{}
{
}

GetPurchaseRequest::GetPurchaseRequest(const GetPurchaseRequest& src) :
    PFPlayerItemManagementGetPurchaseRequest{ src },
    m_orderId{ src.m_orderId }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

GetPurchaseRequest::GetPurchaseRequest(GetPurchaseRequest&& src) :
    PFPlayerItemManagementGetPurchaseRequest{ src },
    m_orderId{ std::move(src.m_orderId) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

GetPurchaseRequest::GetPurchaseRequest(const PFPlayerItemManagementGetPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
}

JsonValue GetPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGetPurchaseRequest>(*this);
}

size_t GetPurchaseRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementGetPurchaseRequest) };
    serializedSize += (m_orderId.size() + 1);
    return serializedSize;
}

void GetPurchaseRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementGetPurchaseRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementGetPurchaseRequest);
    memcpy(stringBuffer, m_orderId.data(), m_orderId.size() + 1);
    serializedStruct->orderId = stringBuffer;
    stringBuffer += m_orderId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPurchaseResult::GetPurchaseResult() :
    PFPlayerItemManagementGetPurchaseResult{}
{
}

GetPurchaseResult::GetPurchaseResult(const GetPurchaseResult& src) :
    PFPlayerItemManagementGetPurchaseResult{ src },
    m_orderId{ src.m_orderId },
    m_paymentProvider{ src.m_paymentProvider },
    m_transactionId{ src.m_transactionId },
    m_transactionStatus{ src.m_transactionStatus }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    paymentProvider = m_paymentProvider.empty() ? nullptr : m_paymentProvider.data();
    transactionId = m_transactionId.empty() ? nullptr : m_transactionId.data();
    transactionStatus = m_transactionStatus.empty() ? nullptr : m_transactionStatus.data();
}

GetPurchaseResult::GetPurchaseResult(GetPurchaseResult&& src) :
    PFPlayerItemManagementGetPurchaseResult{ src },
    m_orderId{ std::move(src.m_orderId) },
    m_paymentProvider{ std::move(src.m_paymentProvider) },
    m_transactionId{ std::move(src.m_transactionId) },
    m_transactionStatus{ std::move(src.m_transactionStatus) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    paymentProvider = m_paymentProvider.empty() ? nullptr : m_paymentProvider.data();
    transactionId = m_transactionId.empty() ? nullptr : m_transactionId.data();
    transactionStatus = m_transactionStatus.empty() ? nullptr : m_transactionStatus.data();
}

GetPurchaseResult::GetPurchaseResult(const PFPlayerItemManagementGetPurchaseResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPurchaseResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "PaymentProvider", m_paymentProvider, paymentProvider);
    JsonUtils::ObjectGetMember(input, "PurchaseDate", purchaseDate, true);
    JsonUtils::ObjectGetMember(input, "TransactionId", m_transactionId, transactionId);
    JsonUtils::ObjectGetMember(input, "TransactionStatus", m_transactionStatus, transactionStatus);
}

JsonValue GetPurchaseResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGetPurchaseResult>(*this);
}

size_t GetPurchaseResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementGetPurchaseResult) };
    serializedSize += (m_orderId.size() + 1);
    serializedSize += (m_paymentProvider.size() + 1);
    serializedSize += (m_transactionId.size() + 1);
    serializedSize += (m_transactionStatus.size() + 1);
    return serializedSize;
}

void GetPurchaseResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementGetPurchaseResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementGetPurchaseResult);
    memcpy(stringBuffer, m_orderId.data(), m_orderId.size() + 1);
    serializedStruct->orderId = stringBuffer;
    stringBuffer += m_orderId.size() + 1;
    memcpy(stringBuffer, m_paymentProvider.data(), m_paymentProvider.size() + 1);
    serializedStruct->paymentProvider = stringBuffer;
    stringBuffer += m_paymentProvider.size() + 1;
    memcpy(stringBuffer, m_transactionId.data(), m_transactionId.size() + 1);
    serializedStruct->transactionId = stringBuffer;
    stringBuffer += m_transactionId.size() + 1;
    memcpy(stringBuffer, m_transactionStatus.data(), m_transactionStatus.size() + 1);
    serializedStruct->transactionStatus = stringBuffer;
    stringBuffer += m_transactionStatus.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ClientGetUserInventoryRequest::ClientGetUserInventoryRequest() :
    PFPlayerItemManagementClientGetUserInventoryRequest{}
{
}

ClientGetUserInventoryRequest::ClientGetUserInventoryRequest(const ClientGetUserInventoryRequest& src) :
    PFPlayerItemManagementClientGetUserInventoryRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientGetUserInventoryRequest::ClientGetUserInventoryRequest(ClientGetUserInventoryRequest&& src) :
    PFPlayerItemManagementClientGetUserInventoryRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientGetUserInventoryRequest::ClientGetUserInventoryRequest(const PFPlayerItemManagementClientGetUserInventoryRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetUserInventoryRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ClientGetUserInventoryRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementClientGetUserInventoryRequest>(*this);
}

ClientGetUserInventoryResult::ClientGetUserInventoryResult() :
    PFPlayerItemManagementClientGetUserInventoryResult{}
{
}

ClientGetUserInventoryResult::ClientGetUserInventoryResult(const ClientGetUserInventoryResult& src) :
    PFPlayerItemManagementClientGetUserInventoryResult{ src },
    m_inventory{ src.m_inventory },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

ClientGetUserInventoryResult::ClientGetUserInventoryResult(ClientGetUserInventoryResult&& src) :
    PFPlayerItemManagementClientGetUserInventoryResult{ src },
    m_inventory{ std::move(src.m_inventory) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

ClientGetUserInventoryResult::ClientGetUserInventoryResult(const PFPlayerItemManagementClientGetUserInventoryResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetUserInventoryResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue ClientGetUserInventoryResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementClientGetUserInventoryResult>(*this);
}

PayForPurchaseRequest::PayForPurchaseRequest() :
    PFPlayerItemManagementPayForPurchaseRequest{}
{
}

PayForPurchaseRequest::PayForPurchaseRequest(const PayForPurchaseRequest& src) :
    PFPlayerItemManagementPayForPurchaseRequest{ src },
    m_currency{ src.m_currency },
    m_customTags{ src.m_customTags },
    m_orderId{ src.m_orderId },
    m_providerName{ src.m_providerName },
    m_providerTransactionId{ src.m_providerTransactionId }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerName = m_providerName.empty() ? nullptr : m_providerName.data();
    providerTransactionId = m_providerTransactionId.empty() ? nullptr : m_providerTransactionId.data();
}

PayForPurchaseRequest::PayForPurchaseRequest(PayForPurchaseRequest&& src) :
    PFPlayerItemManagementPayForPurchaseRequest{ src },
    m_currency{ std::move(src.m_currency) },
    m_customTags{ std::move(src.m_customTags) },
    m_orderId{ std::move(src.m_orderId) },
    m_providerName{ std::move(src.m_providerName) },
    m_providerTransactionId{ std::move(src.m_providerTransactionId) }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerName = m_providerName.empty() ? nullptr : m_providerName.data();
    providerTransactionId = m_providerTransactionId.empty() ? nullptr : m_providerTransactionId.data();
}

PayForPurchaseRequest::PayForPurchaseRequest(const PFPlayerItemManagementPayForPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PayForPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Currency", m_currency, currency);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "ProviderName", m_providerName, providerName);
    JsonUtils::ObjectGetMember(input, "ProviderTransactionId", m_providerTransactionId, providerTransactionId);
}

JsonValue PayForPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementPayForPurchaseRequest>(*this);
}

PayForPurchaseResult::PayForPurchaseResult() :
    PFPlayerItemManagementPayForPurchaseResult{}
{
}

PayForPurchaseResult::PayForPurchaseResult(const PayForPurchaseResult& src) :
    PFPlayerItemManagementPayForPurchaseResult{ src },
    m_orderId{ src.m_orderId },
    m_providerData{ src.m_providerData },
    m_providerToken{ src.m_providerToken },
    m_purchaseConfirmationPageURL{ src.m_purchaseConfirmationPageURL },
    m_purchaseCurrency{ src.m_purchaseCurrency },
    m_status{ src.m_status },
    m_vCAmount{ src.m_vCAmount },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerData = m_providerData.empty() ? nullptr : m_providerData.data();
    providerToken = m_providerToken.empty() ? nullptr : m_providerToken.data();
    purchaseConfirmationPageURL = m_purchaseConfirmationPageURL.empty() ? nullptr : m_purchaseConfirmationPageURL.data();
    purchaseCurrency = m_purchaseCurrency.empty() ? nullptr : m_purchaseCurrency.data();
    status = m_status ? m_status.operator->() : nullptr;
    vCAmount = m_vCAmount.Empty() ? nullptr : m_vCAmount.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
}

PayForPurchaseResult::PayForPurchaseResult(PayForPurchaseResult&& src) :
    PFPlayerItemManagementPayForPurchaseResult{ src },
    m_orderId{ std::move(src.m_orderId) },
    m_providerData{ std::move(src.m_providerData) },
    m_providerToken{ std::move(src.m_providerToken) },
    m_purchaseConfirmationPageURL{ std::move(src.m_purchaseConfirmationPageURL) },
    m_purchaseCurrency{ std::move(src.m_purchaseCurrency) },
    m_status{ std::move(src.m_status) },
    m_vCAmount{ std::move(src.m_vCAmount) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerData = m_providerData.empty() ? nullptr : m_providerData.data();
    providerToken = m_providerToken.empty() ? nullptr : m_providerToken.data();
    purchaseConfirmationPageURL = m_purchaseConfirmationPageURL.empty() ? nullptr : m_purchaseConfirmationPageURL.data();
    purchaseCurrency = m_purchaseCurrency.empty() ? nullptr : m_purchaseCurrency.data();
    status = m_status ? m_status.operator->() : nullptr;
    vCAmount = m_vCAmount.Empty() ? nullptr : m_vCAmount.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
}

PayForPurchaseResult::PayForPurchaseResult(const PFPlayerItemManagementPayForPurchaseResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PayForPurchaseResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreditApplied", creditApplied);
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "ProviderData", m_providerData, providerData);
    JsonUtils::ObjectGetMember(input, "ProviderToken", m_providerToken, providerToken);
    JsonUtils::ObjectGetMember(input, "PurchaseConfirmationPageURL", m_purchaseConfirmationPageURL, purchaseConfirmationPageURL);
    JsonUtils::ObjectGetMember(input, "PurchaseCurrency", m_purchaseCurrency, purchaseCurrency);
    JsonUtils::ObjectGetMember(input, "PurchasePrice", purchasePrice);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "VCAmount", m_vCAmount, vCAmount, vCAmountCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
}

JsonValue PayForPurchaseResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementPayForPurchaseResult>(*this);
}

PurchaseItemRequest::PurchaseItemRequest() :
    PFPlayerItemManagementPurchaseItemRequest{}
{
}

PurchaseItemRequest::PurchaseItemRequest(const PurchaseItemRequest& src) :
    PFPlayerItemManagementPurchaseItemRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_itemId{ src.m_itemId },
    m_storeId{ src.m_storeId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

PurchaseItemRequest::PurchaseItemRequest(PurchaseItemRequest&& src) :
    PFPlayerItemManagementPurchaseItemRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemId{ std::move(src.m_itemId) },
    m_storeId{ std::move(src.m_storeId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

PurchaseItemRequest::PurchaseItemRequest(const PFPlayerItemManagementPurchaseItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PurchaseItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "Price", price);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue PurchaseItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementPurchaseItemRequest>(*this);
}

PurchaseItemResult::PurchaseItemResult() :
    PFPlayerItemManagementPurchaseItemResult{}
{
}

PurchaseItemResult::PurchaseItemResult(const PurchaseItemResult& src) :
    PFPlayerItemManagementPurchaseItemResult{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

PurchaseItemResult::PurchaseItemResult(PurchaseItemResult&& src) :
    PFPlayerItemManagementPurchaseItemResult{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

PurchaseItemResult::PurchaseItemResult(const PFPlayerItemManagementPurchaseItemResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PurchaseItemResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue PurchaseItemResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementPurchaseItemResult>(*this);
}

ClientRedeemCouponRequest::ClientRedeemCouponRequest() :
    PFPlayerItemManagementClientRedeemCouponRequest{}
{
}

ClientRedeemCouponRequest::ClientRedeemCouponRequest(const ClientRedeemCouponRequest& src) :
    PFPlayerItemManagementClientRedeemCouponRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_couponCode{ src.m_couponCode },
    m_customTags{ src.m_customTags }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    couponCode = m_couponCode.empty() ? nullptr : m_couponCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientRedeemCouponRequest::ClientRedeemCouponRequest(ClientRedeemCouponRequest&& src) :
    PFPlayerItemManagementClientRedeemCouponRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_couponCode{ std::move(src.m_couponCode) },
    m_customTags{ std::move(src.m_customTags) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    couponCode = m_couponCode.empty() ? nullptr : m_couponCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientRedeemCouponRequest::ClientRedeemCouponRequest(const PFPlayerItemManagementClientRedeemCouponRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientRedeemCouponRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CouponCode", m_couponCode, couponCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ClientRedeemCouponRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementClientRedeemCouponRequest>(*this);
}

RedeemCouponResult::RedeemCouponResult() :
    PFPlayerItemManagementRedeemCouponResult{}
{
}

RedeemCouponResult::RedeemCouponResult(const RedeemCouponResult& src) :
    PFPlayerItemManagementRedeemCouponResult{ src },
    m_grantedItems{ src.m_grantedItems }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
}

RedeemCouponResult::RedeemCouponResult(RedeemCouponResult&& src) :
    PFPlayerItemManagementRedeemCouponResult{ src },
    m_grantedItems{ std::move(src.m_grantedItems) }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
}

RedeemCouponResult::RedeemCouponResult(const PFPlayerItemManagementRedeemCouponResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RedeemCouponResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
}

JsonValue RedeemCouponResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementRedeemCouponResult>(*this);
}

ItemPurchaseRequest::ItemPurchaseRequest() :
    PFPlayerItemManagementItemPurchaseRequest{}
{
}

ItemPurchaseRequest::ItemPurchaseRequest(const ItemPurchaseRequest& src) :
    PFPlayerItemManagementItemPurchaseRequest{ src },
    m_annotation{ src.m_annotation },
    m_itemId{ src.m_itemId },
    m_upgradeFromItems{ src.m_upgradeFromItems }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    upgradeFromItems = m_upgradeFromItems.Empty() ? nullptr : m_upgradeFromItems.Data();
}

ItemPurchaseRequest::ItemPurchaseRequest(ItemPurchaseRequest&& src) :
    PFPlayerItemManagementItemPurchaseRequest{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_itemId{ std::move(src.m_itemId) },
    m_upgradeFromItems{ std::move(src.m_upgradeFromItems) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    upgradeFromItems = m_upgradeFromItems.Empty() ? nullptr : m_upgradeFromItems.Data();
}

ItemPurchaseRequest::ItemPurchaseRequest(const PFPlayerItemManagementItemPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ItemPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "Quantity", quantity);
    JsonUtils::ObjectGetMember(input, "UpgradeFromItems", m_upgradeFromItems, upgradeFromItems, upgradeFromItemsCount);
}

JsonValue ItemPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementItemPurchaseRequest>(*this);
}

StartPurchaseRequest::StartPurchaseRequest() :
    PFPlayerItemManagementStartPurchaseRequest{}
{
}

StartPurchaseRequest::StartPurchaseRequest(const StartPurchaseRequest& src) :
    PFPlayerItemManagementStartPurchaseRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_items{ src.m_items },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    items = m_items.Empty() ? nullptr : m_items.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

StartPurchaseRequest::StartPurchaseRequest(StartPurchaseRequest&& src) :
    PFPlayerItemManagementStartPurchaseRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_items{ std::move(src.m_items) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    items = m_items.Empty() ? nullptr : m_items.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

StartPurchaseRequest::StartPurchaseRequest(const PFPlayerItemManagementStartPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StartPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue StartPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementStartPurchaseRequest>(*this);
}

CartItem::CartItem() :
    PFPlayerItemManagementCartItem{}
{
}

CartItem::CartItem(const CartItem& src) :
    PFPlayerItemManagementCartItem{ src },
    m_description{ src.m_description },
    m_displayName{ src.m_displayName },
    m_itemClass{ src.m_itemClass },
    m_itemId{ src.m_itemId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_realCurrencyPrices{ src.m_realCurrencyPrices },
    m_vCAmount{ src.m_vCAmount },
    m_virtualCurrencyPrices{ src.m_virtualCurrencyPrices }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    vCAmount = m_vCAmount.Empty() ? nullptr : m_vCAmount.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

CartItem::CartItem(CartItem&& src) :
    PFPlayerItemManagementCartItem{ src },
    m_description{ std::move(src.m_description) },
    m_displayName{ std::move(src.m_displayName) },
    m_itemClass{ std::move(src.m_itemClass) },
    m_itemId{ std::move(src.m_itemId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_realCurrencyPrices{ std::move(src.m_realCurrencyPrices) },
    m_vCAmount{ std::move(src.m_vCAmount) },
    m_virtualCurrencyPrices{ std::move(src.m_virtualCurrencyPrices) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    vCAmount = m_vCAmount.Empty() ? nullptr : m_vCAmount.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

CartItem::CartItem(const PFPlayerItemManagementCartItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CartItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
    JsonUtils::ObjectGetMember(input, "VCAmount", m_vCAmount, vCAmount, vCAmountCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
}

JsonValue CartItem::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementCartItem>(*this);
}

PaymentOption::PaymentOption() :
    PFPlayerItemManagementPaymentOption{}
{
}

PaymentOption::PaymentOption(const PaymentOption& src) :
    PFPlayerItemManagementPaymentOption{ src },
    m_currency{ src.m_currency },
    m_providerName{ src.m_providerName }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    providerName = m_providerName.empty() ? nullptr : m_providerName.data();
}

PaymentOption::PaymentOption(PaymentOption&& src) :
    PFPlayerItemManagementPaymentOption{ src },
    m_currency{ std::move(src.m_currency) },
    m_providerName{ std::move(src.m_providerName) }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    providerName = m_providerName.empty() ? nullptr : m_providerName.data();
}

PaymentOption::PaymentOption(const PFPlayerItemManagementPaymentOption& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PaymentOption::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Currency", m_currency, currency);
    JsonUtils::ObjectGetMember(input, "Price", price);
    JsonUtils::ObjectGetMember(input, "ProviderName", m_providerName, providerName);
    JsonUtils::ObjectGetMember(input, "StoreCredit", storeCredit);
}

JsonValue PaymentOption::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementPaymentOption>(*this);
}

size_t PaymentOption::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementPaymentOption) };
    serializedSize += (m_currency.size() + 1);
    serializedSize += (m_providerName.size() + 1);
    return serializedSize;
}

void PaymentOption::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementPaymentOption{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementPaymentOption);
    memcpy(stringBuffer, m_currency.data(), m_currency.size() + 1);
    serializedStruct->currency = stringBuffer;
    stringBuffer += m_currency.size() + 1;
    memcpy(stringBuffer, m_providerName.data(), m_providerName.size() + 1);
    serializedStruct->providerName = stringBuffer;
    stringBuffer += m_providerName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

StartPurchaseResult::StartPurchaseResult() :
    PFPlayerItemManagementStartPurchaseResult{}
{
}

StartPurchaseResult::StartPurchaseResult(const StartPurchaseResult& src) :
    PFPlayerItemManagementStartPurchaseResult{ src },
    m_contents{ src.m_contents },
    m_orderId{ src.m_orderId },
    m_paymentOptions{ src.m_paymentOptions },
    m_virtualCurrencyBalances{ src.m_virtualCurrencyBalances }
{
    contents = m_contents.Empty() ? nullptr : m_contents.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    paymentOptions = m_paymentOptions.Empty() ? nullptr : m_paymentOptions.Data();
    virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
}

StartPurchaseResult::StartPurchaseResult(StartPurchaseResult&& src) :
    PFPlayerItemManagementStartPurchaseResult{ src },
    m_contents{ std::move(src.m_contents) },
    m_orderId{ std::move(src.m_orderId) },
    m_paymentOptions{ std::move(src.m_paymentOptions) },
    m_virtualCurrencyBalances{ std::move(src.m_virtualCurrencyBalances) }
{
    contents = m_contents.Empty() ? nullptr : m_contents.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    paymentOptions = m_paymentOptions.Empty() ? nullptr : m_paymentOptions.Data();
    virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
}

StartPurchaseResult::StartPurchaseResult(const PFPlayerItemManagementStartPurchaseResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StartPurchaseResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Contents", m_contents, contents, contentsCount);
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "PaymentOptions", m_paymentOptions, paymentOptions, paymentOptionsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyBalances", m_virtualCurrencyBalances, virtualCurrencyBalances, virtualCurrencyBalancesCount);
}

JsonValue StartPurchaseResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementStartPurchaseResult>(*this);
}

ClientSubtractUserVirtualCurrencyRequest::ClientSubtractUserVirtualCurrencyRequest() :
    PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest{}
{
}

ClientSubtractUserVirtualCurrencyRequest::ClientSubtractUserVirtualCurrencyRequest(const ClientSubtractUserVirtualCurrencyRequest& src) :
    PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ClientSubtractUserVirtualCurrencyRequest::ClientSubtractUserVirtualCurrencyRequest(ClientSubtractUserVirtualCurrencyRequest&& src) :
    PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ClientSubtractUserVirtualCurrencyRequest::ClientSubtractUserVirtualCurrencyRequest(const PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientSubtractUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue ClientSubtractUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest>(*this);
}

ClientUnlockContainerInstanceRequest::ClientUnlockContainerInstanceRequest() :
    PFPlayerItemManagementClientUnlockContainerInstanceRequest{}
{
}

ClientUnlockContainerInstanceRequest::ClientUnlockContainerInstanceRequest(const ClientUnlockContainerInstanceRequest& src) :
    PFPlayerItemManagementClientUnlockContainerInstanceRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_containerItemInstanceId{ src.m_containerItemInstanceId },
    m_customTags{ src.m_customTags },
    m_keyItemInstanceId{ src.m_keyItemInstanceId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemInstanceId = m_containerItemInstanceId.empty() ? nullptr : m_containerItemInstanceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    keyItemInstanceId = m_keyItemInstanceId.empty() ? nullptr : m_keyItemInstanceId.data();
}

ClientUnlockContainerInstanceRequest::ClientUnlockContainerInstanceRequest(ClientUnlockContainerInstanceRequest&& src) :
    PFPlayerItemManagementClientUnlockContainerInstanceRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_containerItemInstanceId{ std::move(src.m_containerItemInstanceId) },
    m_customTags{ std::move(src.m_customTags) },
    m_keyItemInstanceId{ std::move(src.m_keyItemInstanceId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemInstanceId = m_containerItemInstanceId.empty() ? nullptr : m_containerItemInstanceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    keyItemInstanceId = m_keyItemInstanceId.empty() ? nullptr : m_keyItemInstanceId.data();
}

ClientUnlockContainerInstanceRequest::ClientUnlockContainerInstanceRequest(const PFPlayerItemManagementClientUnlockContainerInstanceRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientUnlockContainerInstanceRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ContainerItemInstanceId", m_containerItemInstanceId, containerItemInstanceId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "KeyItemInstanceId", m_keyItemInstanceId, keyItemInstanceId);
}

JsonValue ClientUnlockContainerInstanceRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementClientUnlockContainerInstanceRequest>(*this);
}

UnlockContainerItemResult::UnlockContainerItemResult() :
    PFPlayerItemManagementUnlockContainerItemResult{}
{
}

UnlockContainerItemResult::UnlockContainerItemResult(const UnlockContainerItemResult& src) :
    PFPlayerItemManagementUnlockContainerItemResult{ src },
    m_grantedItems{ src.m_grantedItems },
    m_unlockedItemInstanceId{ src.m_unlockedItemInstanceId },
    m_unlockedWithItemInstanceId{ src.m_unlockedWithItemInstanceId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
    unlockedItemInstanceId = m_unlockedItemInstanceId.empty() ? nullptr : m_unlockedItemInstanceId.data();
    unlockedWithItemInstanceId = m_unlockedWithItemInstanceId.empty() ? nullptr : m_unlockedWithItemInstanceId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
}

UnlockContainerItemResult::UnlockContainerItemResult(UnlockContainerItemResult&& src) :
    PFPlayerItemManagementUnlockContainerItemResult{ src },
    m_grantedItems{ std::move(src.m_grantedItems) },
    m_unlockedItemInstanceId{ std::move(src.m_unlockedItemInstanceId) },
    m_unlockedWithItemInstanceId{ std::move(src.m_unlockedWithItemInstanceId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
    unlockedItemInstanceId = m_unlockedItemInstanceId.empty() ? nullptr : m_unlockedItemInstanceId.data();
    unlockedWithItemInstanceId = m_unlockedWithItemInstanceId.empty() ? nullptr : m_unlockedWithItemInstanceId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
}

UnlockContainerItemResult::UnlockContainerItemResult(const PFPlayerItemManagementUnlockContainerItemResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlockContainerItemResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
    JsonUtils::ObjectGetMember(input, "UnlockedItemInstanceId", m_unlockedItemInstanceId, unlockedItemInstanceId);
    JsonUtils::ObjectGetMember(input, "UnlockedWithItemInstanceId", m_unlockedWithItemInstanceId, unlockedWithItemInstanceId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
}

JsonValue UnlockContainerItemResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementUnlockContainerItemResult>(*this);
}

ClientUnlockContainerItemRequest::ClientUnlockContainerItemRequest() :
    PFPlayerItemManagementClientUnlockContainerItemRequest{}
{
}

ClientUnlockContainerItemRequest::ClientUnlockContainerItemRequest(const ClientUnlockContainerItemRequest& src) :
    PFPlayerItemManagementClientUnlockContainerItemRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_containerItemId{ src.m_containerItemId },
    m_customTags{ src.m_customTags }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemId = m_containerItemId.empty() ? nullptr : m_containerItemId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientUnlockContainerItemRequest::ClientUnlockContainerItemRequest(ClientUnlockContainerItemRequest&& src) :
    PFPlayerItemManagementClientUnlockContainerItemRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_containerItemId{ std::move(src.m_containerItemId) },
    m_customTags{ std::move(src.m_customTags) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemId = m_containerItemId.empty() ? nullptr : m_containerItemId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientUnlockContainerItemRequest::ClientUnlockContainerItemRequest(const PFPlayerItemManagementClientUnlockContainerItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientUnlockContainerItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ContainerItemId", m_containerItemId, containerItemId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ClientUnlockContainerItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementClientUnlockContainerItemRequest>(*this);
}

AddCharacterVirtualCurrencyRequest::AddCharacterVirtualCurrencyRequest() :
    PFPlayerItemManagementAddCharacterVirtualCurrencyRequest{}
{
}

AddCharacterVirtualCurrencyRequest::AddCharacterVirtualCurrencyRequest(const AddCharacterVirtualCurrencyRequest& src) :
    PFPlayerItemManagementAddCharacterVirtualCurrencyRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AddCharacterVirtualCurrencyRequest::AddCharacterVirtualCurrencyRequest(AddCharacterVirtualCurrencyRequest&& src) :
    PFPlayerItemManagementAddCharacterVirtualCurrencyRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AddCharacterVirtualCurrencyRequest::AddCharacterVirtualCurrencyRequest(const PFPlayerItemManagementAddCharacterVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddCharacterVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue AddCharacterVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementAddCharacterVirtualCurrencyRequest>(*this);
}

ModifyCharacterVirtualCurrencyResult::ModifyCharacterVirtualCurrencyResult() :
    PFPlayerItemManagementModifyCharacterVirtualCurrencyResult{}
{
}

ModifyCharacterVirtualCurrencyResult::ModifyCharacterVirtualCurrencyResult(const ModifyCharacterVirtualCurrencyResult& src) :
    PFPlayerItemManagementModifyCharacterVirtualCurrencyResult{ src },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyCharacterVirtualCurrencyResult::ModifyCharacterVirtualCurrencyResult(ModifyCharacterVirtualCurrencyResult&& src) :
    PFPlayerItemManagementModifyCharacterVirtualCurrencyResult{ src },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyCharacterVirtualCurrencyResult::ModifyCharacterVirtualCurrencyResult(const PFPlayerItemManagementModifyCharacterVirtualCurrencyResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyCharacterVirtualCurrencyResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Balance", balance);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue ModifyCharacterVirtualCurrencyResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementModifyCharacterVirtualCurrencyResult>(*this);
}

size_t ModifyCharacterVirtualCurrencyResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementModifyCharacterVirtualCurrencyResult) };
    serializedSize += (m_virtualCurrency.size() + 1);
    return serializedSize;
}

void ModifyCharacterVirtualCurrencyResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementModifyCharacterVirtualCurrencyResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementModifyCharacterVirtualCurrencyResult);
    memcpy(stringBuffer, m_virtualCurrency.data(), m_virtualCurrency.size() + 1);
    serializedStruct->virtualCurrency = stringBuffer;
    stringBuffer += m_virtualCurrency.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ServerAddUserVirtualCurrencyRequest::ServerAddUserVirtualCurrencyRequest() :
    PFPlayerItemManagementServerAddUserVirtualCurrencyRequest{}
{
}

ServerAddUserVirtualCurrencyRequest::ServerAddUserVirtualCurrencyRequest(const ServerAddUserVirtualCurrencyRequest& src) :
    PFPlayerItemManagementServerAddUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ServerAddUserVirtualCurrencyRequest::ServerAddUserVirtualCurrencyRequest(ServerAddUserVirtualCurrencyRequest&& src) :
    PFPlayerItemManagementServerAddUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ServerAddUserVirtualCurrencyRequest::ServerAddUserVirtualCurrencyRequest(const PFPlayerItemManagementServerAddUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerAddUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue ServerAddUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementServerAddUserVirtualCurrencyRequest>(*this);
}

ServerConsumeItemRequest::ServerConsumeItemRequest() :
    PFPlayerItemManagementServerConsumeItemRequest{}
{
}

ServerConsumeItemRequest::ServerConsumeItemRequest(const ServerConsumeItemRequest& src) :
    PFPlayerItemManagementServerConsumeItemRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerConsumeItemRequest::ServerConsumeItemRequest(ServerConsumeItemRequest&& src) :
    PFPlayerItemManagementServerConsumeItemRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerConsumeItemRequest::ServerConsumeItemRequest(const PFPlayerItemManagementServerConsumeItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerConsumeItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ConsumeCount", consumeCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerConsumeItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementServerConsumeItemRequest>(*this);
}

EvaluateRandomResultTableRequest::EvaluateRandomResultTableRequest() :
    PFPlayerItemManagementEvaluateRandomResultTableRequest{}
{
}

EvaluateRandomResultTableRequest::EvaluateRandomResultTableRequest(const EvaluateRandomResultTableRequest& src) :
    PFPlayerItemManagementEvaluateRandomResultTableRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_tableId{ src.m_tableId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

EvaluateRandomResultTableRequest::EvaluateRandomResultTableRequest(EvaluateRandomResultTableRequest&& src) :
    PFPlayerItemManagementEvaluateRandomResultTableRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_tableId{ std::move(src.m_tableId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

EvaluateRandomResultTableRequest::EvaluateRandomResultTableRequest(const PFPlayerItemManagementEvaluateRandomResultTableRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EvaluateRandomResultTableRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "TableId", m_tableId, tableId);
}

JsonValue EvaluateRandomResultTableRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementEvaluateRandomResultTableRequest>(*this);
}

size_t EvaluateRandomResultTableRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementEvaluateRandomResultTableRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    serializedSize += (m_tableId.size() + 1);
    return serializedSize;
}

void EvaluateRandomResultTableRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementEvaluateRandomResultTableRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementEvaluateRandomResultTableRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    memcpy(stringBuffer, m_tableId.data(), m_tableId.size() + 1);
    serializedStruct->tableId = stringBuffer;
    stringBuffer += m_tableId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EvaluateRandomResultTableResult::EvaluateRandomResultTableResult() :
    PFPlayerItemManagementEvaluateRandomResultTableResult{}
{
}

EvaluateRandomResultTableResult::EvaluateRandomResultTableResult(const EvaluateRandomResultTableResult& src) :
    PFPlayerItemManagementEvaluateRandomResultTableResult{ src },
    m_resultItemId{ src.m_resultItemId }
{
    resultItemId = m_resultItemId.empty() ? nullptr : m_resultItemId.data();
}

EvaluateRandomResultTableResult::EvaluateRandomResultTableResult(EvaluateRandomResultTableResult&& src) :
    PFPlayerItemManagementEvaluateRandomResultTableResult{ src },
    m_resultItemId{ std::move(src.m_resultItemId) }
{
    resultItemId = m_resultItemId.empty() ? nullptr : m_resultItemId.data();
}

EvaluateRandomResultTableResult::EvaluateRandomResultTableResult(const PFPlayerItemManagementEvaluateRandomResultTableResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EvaluateRandomResultTableResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ResultItemId", m_resultItemId, resultItemId);
}

JsonValue EvaluateRandomResultTableResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementEvaluateRandomResultTableResult>(*this);
}

size_t EvaluateRandomResultTableResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementEvaluateRandomResultTableResult) };
    serializedSize += (m_resultItemId.size() + 1);
    return serializedSize;
}

void EvaluateRandomResultTableResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementEvaluateRandomResultTableResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementEvaluateRandomResultTableResult);
    memcpy(stringBuffer, m_resultItemId.data(), m_resultItemId.size() + 1);
    serializedStruct->resultItemId = stringBuffer;
    stringBuffer += m_resultItemId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ServerGetCharacterInventoryRequest::ServerGetCharacterInventoryRequest() :
    PFPlayerItemManagementServerGetCharacterInventoryRequest{}
{
}

ServerGetCharacterInventoryRequest::ServerGetCharacterInventoryRequest(const ServerGetCharacterInventoryRequest& src) :
    PFPlayerItemManagementServerGetCharacterInventoryRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetCharacterInventoryRequest::ServerGetCharacterInventoryRequest(ServerGetCharacterInventoryRequest&& src) :
    PFPlayerItemManagementServerGetCharacterInventoryRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetCharacterInventoryRequest::ServerGetCharacterInventoryRequest(const PFPlayerItemManagementServerGetCharacterInventoryRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetCharacterInventoryRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerGetCharacterInventoryRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementServerGetCharacterInventoryRequest>(*this);
}

ServerGetCharacterInventoryResult::ServerGetCharacterInventoryResult() :
    PFPlayerItemManagementServerGetCharacterInventoryResult{}
{
}

ServerGetCharacterInventoryResult::ServerGetCharacterInventoryResult(const ServerGetCharacterInventoryResult& src) :
    PFPlayerItemManagementServerGetCharacterInventoryResult{ src },
    m_characterId{ src.m_characterId },
    m_inventory{ src.m_inventory },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

ServerGetCharacterInventoryResult::ServerGetCharacterInventoryResult(ServerGetCharacterInventoryResult&& src) :
    PFPlayerItemManagementServerGetCharacterInventoryResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_inventory{ std::move(src.m_inventory) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

ServerGetCharacterInventoryResult::ServerGetCharacterInventoryResult(const PFPlayerItemManagementServerGetCharacterInventoryResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetCharacterInventoryResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue ServerGetCharacterInventoryResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementServerGetCharacterInventoryResult>(*this);
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest() :
    PFPlayerItemManagementGetRandomResultTablesRequest{}
{
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src) :
    PFPlayerItemManagementGetRandomResultTablesRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_tableIDs{ src.m_tableIDs }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    tableIDs = m_tableIDs.Empty() ? nullptr : m_tableIDs.Data();
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(GetRandomResultTablesRequest&& src) :
    PFPlayerItemManagementGetRandomResultTablesRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_tableIDs{ std::move(src.m_tableIDs) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    tableIDs = m_tableIDs.Empty() ? nullptr : m_tableIDs.Data();
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(const PFPlayerItemManagementGetRandomResultTablesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetRandomResultTablesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "TableIDs", m_tableIDs, tableIDs, tableIDsCount);
}

JsonValue GetRandomResultTablesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGetRandomResultTablesRequest>(*this);
}

ServerGetUserInventoryRequest::ServerGetUserInventoryRequest() :
    PFPlayerItemManagementServerGetUserInventoryRequest{}
{
}

ServerGetUserInventoryRequest::ServerGetUserInventoryRequest(const ServerGetUserInventoryRequest& src) :
    PFPlayerItemManagementServerGetUserInventoryRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetUserInventoryRequest::ServerGetUserInventoryRequest(ServerGetUserInventoryRequest&& src) :
    PFPlayerItemManagementServerGetUserInventoryRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetUserInventoryRequest::ServerGetUserInventoryRequest(const PFPlayerItemManagementServerGetUserInventoryRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetUserInventoryRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerGetUserInventoryRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementServerGetUserInventoryRequest>(*this);
}

ServerGetUserInventoryResult::ServerGetUserInventoryResult() :
    PFPlayerItemManagementServerGetUserInventoryResult{}
{
}

ServerGetUserInventoryResult::ServerGetUserInventoryResult(const ServerGetUserInventoryResult& src) :
    PFPlayerItemManagementServerGetUserInventoryResult{ src },
    m_inventory{ src.m_inventory },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

ServerGetUserInventoryResult::ServerGetUserInventoryResult(ServerGetUserInventoryResult&& src) :
    PFPlayerItemManagementServerGetUserInventoryResult{ src },
    m_inventory{ std::move(src.m_inventory) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

ServerGetUserInventoryResult::ServerGetUserInventoryResult(const PFPlayerItemManagementServerGetUserInventoryResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetUserInventoryResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue ServerGetUserInventoryResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementServerGetUserInventoryResult>(*this);
}

GrantItemsToCharacterRequest::GrantItemsToCharacterRequest() :
    PFPlayerItemManagementGrantItemsToCharacterRequest{}
{
}

GrantItemsToCharacterRequest::GrantItemsToCharacterRequest(const GrantItemsToCharacterRequest& src) :
    PFPlayerItemManagementGrantItemsToCharacterRequest{ src },
    m_annotation{ src.m_annotation },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_itemIds{ src.m_itemIds },
    m_playFabId{ src.m_playFabId }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemIds = m_itemIds.Empty() ? nullptr : m_itemIds.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GrantItemsToCharacterRequest::GrantItemsToCharacterRequest(GrantItemsToCharacterRequest&& src) :
    PFPlayerItemManagementGrantItemsToCharacterRequest{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemIds{ std::move(src.m_itemIds) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemIds = m_itemIds.Empty() ? nullptr : m_itemIds.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GrantItemsToCharacterRequest::GrantItemsToCharacterRequest(const PFPlayerItemManagementGrantItemsToCharacterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToCharacterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemIds", m_itemIds, itemIds, itemIdsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GrantItemsToCharacterRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGrantItemsToCharacterRequest>(*this);
}

GrantItemsToCharacterResult::GrantItemsToCharacterResult() :
    PFPlayerItemManagementGrantItemsToCharacterResult{}
{
}

GrantItemsToCharacterResult::GrantItemsToCharacterResult(const GrantItemsToCharacterResult& src) :
    PFPlayerItemManagementGrantItemsToCharacterResult{ src },
    m_itemGrantResults{ src.m_itemGrantResults }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToCharacterResult::GrantItemsToCharacterResult(GrantItemsToCharacterResult&& src) :
    PFPlayerItemManagementGrantItemsToCharacterResult{ src },
    m_itemGrantResults{ std::move(src.m_itemGrantResults) }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToCharacterResult::GrantItemsToCharacterResult(const PFPlayerItemManagementGrantItemsToCharacterResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToCharacterResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
}

JsonValue GrantItemsToCharacterResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGrantItemsToCharacterResult>(*this);
}

GrantItemsToUserRequest::GrantItemsToUserRequest() :
    PFPlayerItemManagementGrantItemsToUserRequest{}
{
}

GrantItemsToUserRequest::GrantItemsToUserRequest(const GrantItemsToUserRequest& src) :
    PFPlayerItemManagementGrantItemsToUserRequest{ src },
    m_annotation{ src.m_annotation },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_itemIds{ src.m_itemIds },
    m_playFabId{ src.m_playFabId }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemIds = m_itemIds.Empty() ? nullptr : m_itemIds.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GrantItemsToUserRequest::GrantItemsToUserRequest(GrantItemsToUserRequest&& src) :
    PFPlayerItemManagementGrantItemsToUserRequest{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemIds{ std::move(src.m_itemIds) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemIds = m_itemIds.Empty() ? nullptr : m_itemIds.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GrantItemsToUserRequest::GrantItemsToUserRequest(const PFPlayerItemManagementGrantItemsToUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemIds", m_itemIds, itemIds, itemIdsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GrantItemsToUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGrantItemsToUserRequest>(*this);
}

GrantItemsToUserResult::GrantItemsToUserResult() :
    PFPlayerItemManagementGrantItemsToUserResult{}
{
}

GrantItemsToUserResult::GrantItemsToUserResult(const GrantItemsToUserResult& src) :
    PFPlayerItemManagementGrantItemsToUserResult{ src },
    m_itemGrantResults{ src.m_itemGrantResults }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToUserResult::GrantItemsToUserResult(GrantItemsToUserResult&& src) :
    PFPlayerItemManagementGrantItemsToUserResult{ src },
    m_itemGrantResults{ std::move(src.m_itemGrantResults) }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToUserResult::GrantItemsToUserResult(const PFPlayerItemManagementGrantItemsToUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
}

JsonValue GrantItemsToUserResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementGrantItemsToUserResult>(*this);
}

ModifyItemUsesRequest::ModifyItemUsesRequest() :
    PFPlayerItemManagementModifyItemUsesRequest{}
{
}

ModifyItemUsesRequest::ModifyItemUsesRequest(const ModifyItemUsesRequest& src) :
    PFPlayerItemManagementModifyItemUsesRequest{ src },
    m_customTags{ src.m_customTags },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ModifyItemUsesRequest::ModifyItemUsesRequest(ModifyItemUsesRequest&& src) :
    PFPlayerItemManagementModifyItemUsesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ModifyItemUsesRequest::ModifyItemUsesRequest(const PFPlayerItemManagementModifyItemUsesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyItemUsesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "UsesToAdd", usesToAdd);
}

JsonValue ModifyItemUsesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementModifyItemUsesRequest>(*this);
}

ModifyItemUsesResult::ModifyItemUsesResult() :
    PFPlayerItemManagementModifyItemUsesResult{}
{
}

ModifyItemUsesResult::ModifyItemUsesResult(const ModifyItemUsesResult& src) :
    PFPlayerItemManagementModifyItemUsesResult{ src },
    m_itemInstanceId{ src.m_itemInstanceId }
{
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ModifyItemUsesResult::ModifyItemUsesResult(ModifyItemUsesResult&& src) :
    PFPlayerItemManagementModifyItemUsesResult{ src },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) }
{
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ModifyItemUsesResult::ModifyItemUsesResult(const PFPlayerItemManagementModifyItemUsesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyItemUsesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "RemainingUses", remainingUses);
}

JsonValue ModifyItemUsesResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementModifyItemUsesResult>(*this);
}

size_t ModifyItemUsesResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementModifyItemUsesResult) };
    serializedSize += (m_itemInstanceId.size() + 1);
    return serializedSize;
}

void ModifyItemUsesResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementModifyItemUsesResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementModifyItemUsesResult);
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

MoveItemToCharacterFromCharacterRequest::MoveItemToCharacterFromCharacterRequest() :
    PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest{}
{
}

MoveItemToCharacterFromCharacterRequest::MoveItemToCharacterFromCharacterRequest(const MoveItemToCharacterFromCharacterRequest& src) :
    PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest{ src },
    m_givingCharacterId{ src.m_givingCharacterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId },
    m_receivingCharacterId{ src.m_receivingCharacterId }
{
    givingCharacterId = m_givingCharacterId.empty() ? nullptr : m_givingCharacterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    receivingCharacterId = m_receivingCharacterId.empty() ? nullptr : m_receivingCharacterId.data();
}

MoveItemToCharacterFromCharacterRequest::MoveItemToCharacterFromCharacterRequest(MoveItemToCharacterFromCharacterRequest&& src) :
    PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest{ src },
    m_givingCharacterId{ std::move(src.m_givingCharacterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_receivingCharacterId{ std::move(src.m_receivingCharacterId) }
{
    givingCharacterId = m_givingCharacterId.empty() ? nullptr : m_givingCharacterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    receivingCharacterId = m_receivingCharacterId.empty() ? nullptr : m_receivingCharacterId.data();
}

MoveItemToCharacterFromCharacterRequest::MoveItemToCharacterFromCharacterRequest(const PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MoveItemToCharacterFromCharacterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GivingCharacterId", m_givingCharacterId, givingCharacterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ReceivingCharacterId", m_receivingCharacterId, receivingCharacterId);
}

JsonValue MoveItemToCharacterFromCharacterRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest>(*this);
}

size_t MoveItemToCharacterFromCharacterRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest) };
    serializedSize += (m_givingCharacterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_receivingCharacterId.size() + 1);
    return serializedSize;
}

void MoveItemToCharacterFromCharacterRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest);
    memcpy(stringBuffer, m_givingCharacterId.data(), m_givingCharacterId.size() + 1);
    serializedStruct->givingCharacterId = stringBuffer;
    stringBuffer += m_givingCharacterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_receivingCharacterId.data(), m_receivingCharacterId.size() + 1);
    serializedStruct->receivingCharacterId = stringBuffer;
    stringBuffer += m_receivingCharacterId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

MoveItemToCharacterFromUserRequest::MoveItemToCharacterFromUserRequest() :
    PFPlayerItemManagementMoveItemToCharacterFromUserRequest{}
{
}

MoveItemToCharacterFromUserRequest::MoveItemToCharacterFromUserRequest(const MoveItemToCharacterFromUserRequest& src) :
    PFPlayerItemManagementMoveItemToCharacterFromUserRequest{ src },
    m_characterId{ src.m_characterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

MoveItemToCharacterFromUserRequest::MoveItemToCharacterFromUserRequest(MoveItemToCharacterFromUserRequest&& src) :
    PFPlayerItemManagementMoveItemToCharacterFromUserRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

MoveItemToCharacterFromUserRequest::MoveItemToCharacterFromUserRequest(const PFPlayerItemManagementMoveItemToCharacterFromUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MoveItemToCharacterFromUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue MoveItemToCharacterFromUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementMoveItemToCharacterFromUserRequest>(*this);
}

size_t MoveItemToCharacterFromUserRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementMoveItemToCharacterFromUserRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void MoveItemToCharacterFromUserRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementMoveItemToCharacterFromUserRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementMoveItemToCharacterFromUserRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

MoveItemToUserFromCharacterRequest::MoveItemToUserFromCharacterRequest() :
    PFPlayerItemManagementMoveItemToUserFromCharacterRequest{}
{
}

MoveItemToUserFromCharacterRequest::MoveItemToUserFromCharacterRequest(const MoveItemToUserFromCharacterRequest& src) :
    PFPlayerItemManagementMoveItemToUserFromCharacterRequest{ src },
    m_characterId{ src.m_characterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

MoveItemToUserFromCharacterRequest::MoveItemToUserFromCharacterRequest(MoveItemToUserFromCharacterRequest&& src) :
    PFPlayerItemManagementMoveItemToUserFromCharacterRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

MoveItemToUserFromCharacterRequest::MoveItemToUserFromCharacterRequest(const PFPlayerItemManagementMoveItemToUserFromCharacterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MoveItemToUserFromCharacterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue MoveItemToUserFromCharacterRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementMoveItemToUserFromCharacterRequest>(*this);
}

size_t MoveItemToUserFromCharacterRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementMoveItemToUserFromCharacterRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void MoveItemToUserFromCharacterRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementMoveItemToUserFromCharacterRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementMoveItemToUserFromCharacterRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ServerRedeemCouponRequest::ServerRedeemCouponRequest() :
    PFPlayerItemManagementServerRedeemCouponRequest{}
{
}

ServerRedeemCouponRequest::ServerRedeemCouponRequest(const ServerRedeemCouponRequest& src) :
    PFPlayerItemManagementServerRedeemCouponRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_couponCode{ src.m_couponCode },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    couponCode = m_couponCode.empty() ? nullptr : m_couponCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerRedeemCouponRequest::ServerRedeemCouponRequest(ServerRedeemCouponRequest&& src) :
    PFPlayerItemManagementServerRedeemCouponRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_couponCode{ std::move(src.m_couponCode) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    couponCode = m_couponCode.empty() ? nullptr : m_couponCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerRedeemCouponRequest::ServerRedeemCouponRequest(const PFPlayerItemManagementServerRedeemCouponRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerRedeemCouponRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CouponCode", m_couponCode, couponCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerRedeemCouponRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementServerRedeemCouponRequest>(*this);
}

ReportPlayerServerRequest::ReportPlayerServerRequest() :
    PFPlayerItemManagementReportPlayerServerRequest{}
{
}

ReportPlayerServerRequest::ReportPlayerServerRequest(const ReportPlayerServerRequest& src) :
    PFPlayerItemManagementReportPlayerServerRequest{ src },
    m_comment{ src.m_comment },
    m_customTags{ src.m_customTags },
    m_reporteeId{ src.m_reporteeId },
    m_reporterId{ src.m_reporterId }
{
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    reporteeId = m_reporteeId.empty() ? nullptr : m_reporteeId.data();
    reporterId = m_reporterId.empty() ? nullptr : m_reporterId.data();
}

ReportPlayerServerRequest::ReportPlayerServerRequest(ReportPlayerServerRequest&& src) :
    PFPlayerItemManagementReportPlayerServerRequest{ src },
    m_comment{ std::move(src.m_comment) },
    m_customTags{ std::move(src.m_customTags) },
    m_reporteeId{ std::move(src.m_reporteeId) },
    m_reporterId{ std::move(src.m_reporterId) }
{
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    reporteeId = m_reporteeId.empty() ? nullptr : m_reporteeId.data();
    reporterId = m_reporterId.empty() ? nullptr : m_reporterId.data();
}

ReportPlayerServerRequest::ReportPlayerServerRequest(const PFPlayerItemManagementReportPlayerServerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ReportPlayerServerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ReporteeId", m_reporteeId, reporteeId);
    JsonUtils::ObjectGetMember(input, "ReporterId", m_reporterId, reporterId);
}

JsonValue ReportPlayerServerRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementReportPlayerServerRequest>(*this);
}

ReportPlayerServerResult::ReportPlayerServerResult() :
    PFPlayerItemManagementReportPlayerServerResult{}
{
}


ReportPlayerServerResult::ReportPlayerServerResult(const PFPlayerItemManagementReportPlayerServerResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ReportPlayerServerResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SubmissionsRemaining", submissionsRemaining);
}

JsonValue ReportPlayerServerResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementReportPlayerServerResult>(*this);
}

size_t ReportPlayerServerResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerItemManagementReportPlayerServerResult) };
    return serializedSize;
}

void ReportPlayerServerResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerItemManagementReportPlayerServerResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerItemManagementReportPlayerServerResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

SubtractCharacterVirtualCurrencyRequest::SubtractCharacterVirtualCurrencyRequest() :
    PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest{}
{
}

SubtractCharacterVirtualCurrencyRequest::SubtractCharacterVirtualCurrencyRequest(const SubtractCharacterVirtualCurrencyRequest& src) :
    PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

SubtractCharacterVirtualCurrencyRequest::SubtractCharacterVirtualCurrencyRequest(SubtractCharacterVirtualCurrencyRequest&& src) :
    PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

SubtractCharacterVirtualCurrencyRequest::SubtractCharacterVirtualCurrencyRequest(const PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SubtractCharacterVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue SubtractCharacterVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest>(*this);
}

ServerSubtractUserVirtualCurrencyRequest::ServerSubtractUserVirtualCurrencyRequest() :
    PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest{}
{
}

ServerSubtractUserVirtualCurrencyRequest::ServerSubtractUserVirtualCurrencyRequest(const ServerSubtractUserVirtualCurrencyRequest& src) :
    PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ServerSubtractUserVirtualCurrencyRequest::ServerSubtractUserVirtualCurrencyRequest(ServerSubtractUserVirtualCurrencyRequest&& src) :
    PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ServerSubtractUserVirtualCurrencyRequest::ServerSubtractUserVirtualCurrencyRequest(const PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerSubtractUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue ServerSubtractUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest>(*this);
}

ServerUnlockContainerInstanceRequest::ServerUnlockContainerInstanceRequest() :
    PFPlayerItemManagementServerUnlockContainerInstanceRequest{}
{
}

ServerUnlockContainerInstanceRequest::ServerUnlockContainerInstanceRequest(const ServerUnlockContainerInstanceRequest& src) :
    PFPlayerItemManagementServerUnlockContainerInstanceRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_containerItemInstanceId{ src.m_containerItemInstanceId },
    m_customTags{ src.m_customTags },
    m_keyItemInstanceId{ src.m_keyItemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemInstanceId = m_containerItemInstanceId.empty() ? nullptr : m_containerItemInstanceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    keyItemInstanceId = m_keyItemInstanceId.empty() ? nullptr : m_keyItemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUnlockContainerInstanceRequest::ServerUnlockContainerInstanceRequest(ServerUnlockContainerInstanceRequest&& src) :
    PFPlayerItemManagementServerUnlockContainerInstanceRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_containerItemInstanceId{ std::move(src.m_containerItemInstanceId) },
    m_customTags{ std::move(src.m_customTags) },
    m_keyItemInstanceId{ std::move(src.m_keyItemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemInstanceId = m_containerItemInstanceId.empty() ? nullptr : m_containerItemInstanceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    keyItemInstanceId = m_keyItemInstanceId.empty() ? nullptr : m_keyItemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUnlockContainerInstanceRequest::ServerUnlockContainerInstanceRequest(const PFPlayerItemManagementServerUnlockContainerInstanceRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerUnlockContainerInstanceRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ContainerItemInstanceId", m_containerItemInstanceId, containerItemInstanceId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "KeyItemInstanceId", m_keyItemInstanceId, keyItemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerUnlockContainerInstanceRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementServerUnlockContainerInstanceRequest>(*this);
}

ServerUnlockContainerItemRequest::ServerUnlockContainerItemRequest() :
    PFPlayerItemManagementServerUnlockContainerItemRequest{}
{
}

ServerUnlockContainerItemRequest::ServerUnlockContainerItemRequest(const ServerUnlockContainerItemRequest& src) :
    PFPlayerItemManagementServerUnlockContainerItemRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_containerItemId{ src.m_containerItemId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemId = m_containerItemId.empty() ? nullptr : m_containerItemId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUnlockContainerItemRequest::ServerUnlockContainerItemRequest(ServerUnlockContainerItemRequest&& src) :
    PFPlayerItemManagementServerUnlockContainerItemRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_containerItemId{ std::move(src.m_containerItemId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemId = m_containerItemId.empty() ? nullptr : m_containerItemId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUnlockContainerItemRequest::ServerUnlockContainerItemRequest(const PFPlayerItemManagementServerUnlockContainerItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerUnlockContainerItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ContainerItemId", m_containerItemId, containerItemId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerUnlockContainerItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementServerUnlockContainerItemRequest>(*this);
}

UpdateUserInventoryItemDataRequest::UpdateUserInventoryItemDataRequest() :
    PFPlayerItemManagementUpdateUserInventoryItemDataRequest{}
{
}

UpdateUserInventoryItemDataRequest::UpdateUserInventoryItemDataRequest(const UpdateUserInventoryItemDataRequest& src) :
    PFPlayerItemManagementUpdateUserInventoryItemDataRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_keysToRemove{ src.m_keysToRemove },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserInventoryItemDataRequest::UpdateUserInventoryItemDataRequest(UpdateUserInventoryItemDataRequest&& src) :
    PFPlayerItemManagementUpdateUserInventoryItemDataRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserInventoryItemDataRequest::UpdateUserInventoryItemDataRequest(const PFPlayerItemManagementUpdateUserInventoryItemDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserInventoryItemDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateUserInventoryItemDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerItemManagementUpdateUserInventoryItemDataRequest>(*this);
}

} // namespace PlayerItemManagementModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementModifyUserVirtualCurrencyResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Balance", input.balance);
    JsonUtils::ObjectAddMember(output, "BalanceChange", input.balanceChange);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementAdminGetUserInventoryRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementAdminGetUserInventoryResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementItemGrant& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToUsersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemGrants", input.itemGrants, input.itemGrantsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGrantedItemInstance& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "BundleContents", input.bundleContents, input.bundleContentsCount);
    JsonUtils::ObjectAddMember(output, "BundleParent", input.bundleParent);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData, input.customDataCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Expiration", input.expiration, true);
    JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
    JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
    JsonUtils::ObjectAddMember(output, "Result", input.result);
    JsonUtils::ObjectAddMember(output, "UnitCurrency", input.unitCurrency);
    JsonUtils::ObjectAddMember(output, "UnitPrice", input.unitPrice);
    JsonUtils::ObjectAddMember(output, "UsesIncrementedBy", input.usesIncrementedBy);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToUsersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementRevokeInventoryItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementRevokeInventoryItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementRevokeInventoryItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementRevokeItemError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Item", input.item);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementRevokeInventoryItemsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Errors", input.errors, input.errorsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementClientAddUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementConfirmPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementConfirmPurchaseResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementClientConsumeItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ConsumeCount", input.consumeCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementConsumeItemResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementClientGetCharacterInventoryRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementClientGetCharacterInventoryResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGetPaymentTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TokenProvider", input.tokenProvider);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGetPaymentTokenResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "ProviderToken", input.providerToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGetPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGetPurchaseResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "PaymentProvider", input.paymentProvider);
    JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
    JsonUtils::ObjectAddMember(output, "TransactionId", input.transactionId);
    JsonUtils::ObjectAddMember(output, "TransactionStatus", input.transactionStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementClientGetUserInventoryRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementClientGetUserInventoryResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementPayForPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Currency", input.currency);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "ProviderName", input.providerName);
    JsonUtils::ObjectAddMember(output, "ProviderTransactionId", input.providerTransactionId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementPayForPurchaseResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreditApplied", input.creditApplied);
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "ProviderData", input.providerData);
    JsonUtils::ObjectAddMember(output, "ProviderToken", input.providerToken);
    JsonUtils::ObjectAddMember(output, "PurchaseConfirmationPageURL", input.purchaseConfirmationPageURL);
    JsonUtils::ObjectAddMember(output, "PurchaseCurrency", input.purchaseCurrency);
    JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "VCAmount", input.vCAmount, input.vCAmountCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementPurchaseItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "Price", input.price);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementPurchaseItemResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementClientRedeemCouponRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CouponCode", input.couponCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementRedeemCouponResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementItemPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "Quantity", input.quantity);
    JsonUtils::ObjectAddMember(output, "UpgradeFromItems", input.upgradeFromItems, input.upgradeFromItemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementStartPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementCartItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "RealCurrencyPrices", input.realCurrencyPrices, input.realCurrencyPricesCount);
    JsonUtils::ObjectAddMember(output, "VCAmount", input.vCAmount, input.vCAmountCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyPrices", input.virtualCurrencyPrices, input.virtualCurrencyPricesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementPaymentOption& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Currency", input.currency);
    JsonUtils::ObjectAddMember(output, "Price", input.price);
    JsonUtils::ObjectAddMember(output, "ProviderName", input.providerName);
    JsonUtils::ObjectAddMember(output, "StoreCredit", input.storeCredit);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementStartPurchaseResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Contents", input.contents, input.contentsCount);
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "PaymentOptions", input.paymentOptions, input.paymentOptionsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyBalances", input.virtualCurrencyBalances, input.virtualCurrencyBalancesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementClientUnlockContainerInstanceRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ContainerItemInstanceId", input.containerItemInstanceId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "KeyItemInstanceId", input.keyItemInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementUnlockContainerItemResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
    JsonUtils::ObjectAddMember(output, "UnlockedItemInstanceId", input.unlockedItemInstanceId);
    JsonUtils::ObjectAddMember(output, "UnlockedWithItemInstanceId", input.unlockedWithItemInstanceId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementClientUnlockContainerItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ContainerItemId", input.containerItemId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementAddCharacterVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementModifyCharacterVirtualCurrencyResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Balance", input.balance);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementServerAddUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementServerConsumeItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ConsumeCount", input.consumeCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementEvaluateRandomResultTableRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementEvaluateRandomResultTableResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ResultItemId", input.resultItemId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementServerGetCharacterInventoryRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementServerGetCharacterInventoryResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGetRandomResultTablesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "TableIDs", input.tableIDs, input.tableIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementServerGetUserInventoryRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementServerGetUserInventoryResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToCharacterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemIds", input.itemIds, input.itemIdsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToCharacterResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemIds", input.itemIds, input.itemIdsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementModifyItemUsesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "UsesToAdd", input.usesToAdd);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementModifyItemUsesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GivingCharacterId", input.givingCharacterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ReceivingCharacterId", input.receivingCharacterId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementMoveItemToCharacterFromUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementMoveItemToUserFromCharacterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementServerRedeemCouponRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CouponCode", input.couponCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementReportPlayerServerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ReporteeId", input.reporteeId);
    JsonUtils::ObjectAddMember(output, "ReporterId", input.reporterId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementReportPlayerServerResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SubmissionsRemaining", input.submissionsRemaining);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementServerUnlockContainerInstanceRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ContainerItemInstanceId", input.containerItemInstanceId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "KeyItemInstanceId", input.keyItemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementServerUnlockContainerItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ContainerItemId", input.containerItemId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerItemManagementUpdateUserInventoryItemDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
