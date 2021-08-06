#pragma once

#include <playfab/PFTitleDataManagementDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace TitleDataManagementModels
{

// TitleDataManagement Classes
struct AddLocalizedNewsRequest : public PFTitleDataManagementAddLocalizedNewsRequest, public BaseModel
{
    AddLocalizedNewsRequest();
    AddLocalizedNewsRequest(const AddLocalizedNewsRequest& src);
    AddLocalizedNewsRequest(AddLocalizedNewsRequest&& src);
    AddLocalizedNewsRequest(const PFTitleDataManagementAddLocalizedNewsRequest& src);
    AddLocalizedNewsRequest& operator=(const AddLocalizedNewsRequest&) = delete;
    ~AddLocalizedNewsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_body;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_language;
    String m_newsId;
    String m_title;
};

struct AddNewsRequest : public PFTitleDataManagementAddNewsRequest, public BaseModel
{
    AddNewsRequest();
    AddNewsRequest(const AddNewsRequest& src);
    AddNewsRequest(AddNewsRequest&& src);
    AddNewsRequest(const PFTitleDataManagementAddNewsRequest& src);
    AddNewsRequest& operator=(const AddNewsRequest&) = delete;
    ~AddNewsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_body;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<time_t> m_timestamp;
    String m_title;
};

struct AddNewsResult : public PFTitleDataManagementAddNewsResult, public SerializableModel, public ApiResult
{
    AddNewsResult();
    AddNewsResult(const AddNewsResult& src);
    AddNewsResult(AddNewsResult&& src);
    AddNewsResult(const PFTitleDataManagementAddNewsResult& src);
    AddNewsResult& operator=(const AddNewsResult&) = delete;
    ~AddNewsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_newsId;
};

struct VirtualCurrencyData : public PFTitleDataManagementVirtualCurrencyData, public BaseModel
{
    VirtualCurrencyData();
    VirtualCurrencyData(const VirtualCurrencyData& src);
    VirtualCurrencyData(VirtualCurrencyData&& src);
    VirtualCurrencyData(const PFTitleDataManagementVirtualCurrencyData& src);
    VirtualCurrencyData& operator=(const VirtualCurrencyData&) = delete;
    ~VirtualCurrencyData() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_currencyCode;
    String m_displayName;
    StdExtra::optional<int32_t> m_initialDeposit;
    StdExtra::optional<int32_t> m_rechargeMax;
    StdExtra::optional<int32_t> m_rechargeRate;
};

struct AddVirtualCurrencyTypesRequest : public PFTitleDataManagementAddVirtualCurrencyTypesRequest, public BaseModel
{
    AddVirtualCurrencyTypesRequest();
    AddVirtualCurrencyTypesRequest(const AddVirtualCurrencyTypesRequest& src);
    AddVirtualCurrencyTypesRequest(AddVirtualCurrencyTypesRequest&& src);
    AddVirtualCurrencyTypesRequest(const PFTitleDataManagementAddVirtualCurrencyTypesRequest& src);
    AddVirtualCurrencyTypesRequest& operator=(const AddVirtualCurrencyTypesRequest&) = delete;
    ~AddVirtualCurrencyTypesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFTitleDataManagementVirtualCurrencyData, VirtualCurrencyData> m_virtualCurrencies;
};

struct DeleteStoreRequest : public PFTitleDataManagementDeleteStoreRequest, public BaseModel
{
    DeleteStoreRequest();
    DeleteStoreRequest(const DeleteStoreRequest& src);
    DeleteStoreRequest(DeleteStoreRequest&& src);
    DeleteStoreRequest(const PFTitleDataManagementDeleteStoreRequest& src);
    DeleteStoreRequest& operator=(const DeleteStoreRequest&) = delete;
    ~DeleteStoreRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_storeId;
};

struct DeleteTitleDataOverrideRequest : public PFTitleDataManagementDeleteTitleDataOverrideRequest, public SerializableModel
{
    DeleteTitleDataOverrideRequest();
    DeleteTitleDataOverrideRequest(const DeleteTitleDataOverrideRequest& src);
    DeleteTitleDataOverrideRequest(DeleteTitleDataOverrideRequest&& src);
    DeleteTitleDataOverrideRequest(const PFTitleDataManagementDeleteTitleDataOverrideRequest& src);
    DeleteTitleDataOverrideRequest& operator=(const DeleteTitleDataOverrideRequest&) = delete;
    ~DeleteTitleDataOverrideRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_overrideLabel;
};

struct GetCatalogItemsRequest : public PFTitleDataManagementGetCatalogItemsRequest, public SerializableModel
{
    GetCatalogItemsRequest();
    GetCatalogItemsRequest(const GetCatalogItemsRequest& src);
    GetCatalogItemsRequest(GetCatalogItemsRequest&& src);
    GetCatalogItemsRequest(const PFTitleDataManagementGetCatalogItemsRequest& src);
    GetCatalogItemsRequest& operator=(const GetCatalogItemsRequest&) = delete;
    ~GetCatalogItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
};

struct CatalogItemBundleInfo : public PFTitleDataManagementCatalogItemBundleInfo, public BaseModel
{
    CatalogItemBundleInfo();
    CatalogItemBundleInfo(const CatalogItemBundleInfo& src);
    CatalogItemBundleInfo(CatalogItemBundleInfo&& src);
    CatalogItemBundleInfo(const PFTitleDataManagementCatalogItemBundleInfo& src);
    CatalogItemBundleInfo& operator=(const CatalogItemBundleInfo&) = delete;
    ~CatalogItemBundleInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_bundledItems;
    PointerArrayModel<char, String> m_bundledResultTables;
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_bundledVirtualCurrencies;
};

struct CatalogItemConsumableInfo : public PFTitleDataManagementCatalogItemConsumableInfo, public BaseModel
{
    CatalogItemConsumableInfo();
    CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src);
    CatalogItemConsumableInfo(CatalogItemConsumableInfo&& src);
    CatalogItemConsumableInfo(const PFTitleDataManagementCatalogItemConsumableInfo& src);
    CatalogItemConsumableInfo& operator=(const CatalogItemConsumableInfo&) = delete;
    ~CatalogItemConsumableInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_usageCount;
    StdExtra::optional<uint32_t> m_usagePeriod;
    String m_usagePeriodGroup;
};

struct CatalogItemContainerInfo : public PFTitleDataManagementCatalogItemContainerInfo, public BaseModel
{
    CatalogItemContainerInfo();
    CatalogItemContainerInfo(const CatalogItemContainerInfo& src);
    CatalogItemContainerInfo(CatalogItemContainerInfo&& src);
    CatalogItemContainerInfo(const PFTitleDataManagementCatalogItemContainerInfo& src);
    CatalogItemContainerInfo& operator=(const CatalogItemContainerInfo&) = delete;
    ~CatalogItemContainerInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_itemContents;
    String m_keyItemId;
    PointerArrayModel<char, String> m_resultTableContents;
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_virtualCurrencyContents;
};

struct CatalogItem : public PFTitleDataManagementCatalogItem, public BaseModel
{
    CatalogItem();
    CatalogItem(const CatalogItem& src);
    CatalogItem(CatalogItem&& src);
    CatalogItem(const PFTitleDataManagementCatalogItem& src);
    CatalogItem& operator=(const CatalogItem&) = delete;
    ~CatalogItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<CatalogItemBundleInfo> m_bundle;
    String m_catalogVersion;
    StdExtra::optional<CatalogItemConsumableInfo> m_consumable;
    StdExtra::optional<CatalogItemContainerInfo> m_container;
    String m_customData;
    String m_description;
    String m_displayName;
    String m_itemClass;
    String m_itemId;
    String m_itemImageUrl;
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_realCurrencyPrices;
    PointerArrayModel<char, String> m_tags;
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_virtualCurrencyPrices;
};

struct GetCatalogItemsResult : public PFTitleDataManagementGetCatalogItemsResult, public BaseModel, public ApiResult
{
    GetCatalogItemsResult();
    GetCatalogItemsResult(const GetCatalogItemsResult& src);
    GetCatalogItemsResult(GetCatalogItemsResult&& src);
    GetCatalogItemsResult(const PFTitleDataManagementGetCatalogItemsResult& src);
    GetCatalogItemsResult& operator=(const GetCatalogItemsResult&) = delete;
    ~GetCatalogItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFTitleDataManagementCatalogItem, CatalogItem> m_catalog;
};

struct GetPublisherDataRequest : public PFTitleDataManagementGetPublisherDataRequest, public BaseModel
{
    GetPublisherDataRequest();
    GetPublisherDataRequest(const GetPublisherDataRequest& src);
    GetPublisherDataRequest(GetPublisherDataRequest&& src);
    GetPublisherDataRequest(const PFTitleDataManagementGetPublisherDataRequest& src);
    GetPublisherDataRequest& operator=(const GetPublisherDataRequest&) = delete;
    ~GetPublisherDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_keys;
};

struct GetPublisherDataResult : public PFTitleDataManagementGetPublisherDataResult, public BaseModel, public ApiResult
{
    GetPublisherDataResult();
    GetPublisherDataResult(const GetPublisherDataResult& src);
    GetPublisherDataResult(GetPublisherDataResult&& src);
    GetPublisherDataResult(const PFTitleDataManagementGetPublisherDataResult& src);
    GetPublisherDataResult& operator=(const GetPublisherDataResult&) = delete;
    ~GetPublisherDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
};

struct GetRandomResultTablesRequest : public PFTitleDataManagementGetRandomResultTablesRequest, public SerializableModel
{
    GetRandomResultTablesRequest();
    GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src);
    GetRandomResultTablesRequest(GetRandomResultTablesRequest&& src);
    GetRandomResultTablesRequest(const PFTitleDataManagementGetRandomResultTablesRequest& src);
    GetRandomResultTablesRequest& operator=(const GetRandomResultTablesRequest&) = delete;
    ~GetRandomResultTablesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
};

struct GetStoreItemsRequest : public PFTitleDataManagementGetStoreItemsRequest, public SerializableModel
{
    GetStoreItemsRequest();
    GetStoreItemsRequest(const GetStoreItemsRequest& src);
    GetStoreItemsRequest(GetStoreItemsRequest&& src);
    GetStoreItemsRequest(const PFTitleDataManagementGetStoreItemsRequest& src);
    GetStoreItemsRequest& operator=(const GetStoreItemsRequest&) = delete;
    ~GetStoreItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
    String m_storeId;
};

struct StoreMarketingModel : public PFTitleDataManagementStoreMarketingModel, public BaseModel
{
    StoreMarketingModel();
    StoreMarketingModel(const StoreMarketingModel& src);
    StoreMarketingModel(StoreMarketingModel&& src);
    StoreMarketingModel(const PFTitleDataManagementStoreMarketingModel& src);
    StoreMarketingModel& operator=(const StoreMarketingModel&) = delete;
    ~StoreMarketingModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    String m_displayName;
    JsonObject m_metadata;
};

struct StoreItem : public PFTitleDataManagementStoreItem, public BaseModel
{
    StoreItem();
    StoreItem(const StoreItem& src);
    StoreItem(StoreItem&& src);
    StoreItem(const PFTitleDataManagementStoreItem& src);
    StoreItem& operator=(const StoreItem&) = delete;
    ~StoreItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_customData;
    StdExtra::optional<uint32_t> m_displayPosition;
    String m_itemId;
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_realCurrencyPrices;
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_virtualCurrencyPrices;
};

struct GetStoreItemsResult : public PFTitleDataManagementGetStoreItemsResult, public BaseModel, public ApiResult
{
    GetStoreItemsResult();
    GetStoreItemsResult(const GetStoreItemsResult& src);
    GetStoreItemsResult(GetStoreItemsResult&& src);
    GetStoreItemsResult(const PFTitleDataManagementGetStoreItemsResult& src);
    GetStoreItemsResult& operator=(const GetStoreItemsResult&) = delete;
    ~GetStoreItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    StdExtra::optional<StoreMarketingModel> m_marketingData;
    StdExtra::optional<PFTitleDataManagementSourceType> m_source;
    PointerArrayModel<PFTitleDataManagementStoreItem, StoreItem> m_store;
    String m_storeId;
};

struct GetTitleDataRequest : public PFTitleDataManagementGetTitleDataRequest, public BaseModel
{
    GetTitleDataRequest();
    GetTitleDataRequest(const GetTitleDataRequest& src);
    GetTitleDataRequest(GetTitleDataRequest&& src);
    GetTitleDataRequest(const PFTitleDataManagementGetTitleDataRequest& src);
    GetTitleDataRequest& operator=(const GetTitleDataRequest&) = delete;
    ~GetTitleDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_keys;
    String m_overrideLabel;
};

struct GetTitleDataResult : public PFTitleDataManagementGetTitleDataResult, public BaseModel, public ApiResult
{
    GetTitleDataResult();
    GetTitleDataResult(const GetTitleDataResult& src);
    GetTitleDataResult(GetTitleDataResult&& src);
    GetTitleDataResult(const PFTitleDataManagementGetTitleDataResult& src);
    GetTitleDataResult& operator=(const GetTitleDataResult&) = delete;
    ~GetTitleDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
};

struct ListVirtualCurrencyTypesResult : public PFTitleDataManagementListVirtualCurrencyTypesResult, public BaseModel, public ApiResult
{
    ListVirtualCurrencyTypesResult();
    ListVirtualCurrencyTypesResult(const ListVirtualCurrencyTypesResult& src);
    ListVirtualCurrencyTypesResult(ListVirtualCurrencyTypesResult&& src);
    ListVirtualCurrencyTypesResult(const PFTitleDataManagementListVirtualCurrencyTypesResult& src);
    ListVirtualCurrencyTypesResult& operator=(const ListVirtualCurrencyTypesResult&) = delete;
    ~ListVirtualCurrencyTypesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFTitleDataManagementVirtualCurrencyData, VirtualCurrencyData> m_virtualCurrencies;
};

struct RemoveVirtualCurrencyTypesRequest : public PFTitleDataManagementRemoveVirtualCurrencyTypesRequest, public BaseModel
{
    RemoveVirtualCurrencyTypesRequest();
    RemoveVirtualCurrencyTypesRequest(const RemoveVirtualCurrencyTypesRequest& src);
    RemoveVirtualCurrencyTypesRequest(RemoveVirtualCurrencyTypesRequest&& src);
    RemoveVirtualCurrencyTypesRequest(const PFTitleDataManagementRemoveVirtualCurrencyTypesRequest& src);
    RemoveVirtualCurrencyTypesRequest& operator=(const RemoveVirtualCurrencyTypesRequest&) = delete;
    ~RemoveVirtualCurrencyTypesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFTitleDataManagementVirtualCurrencyData, VirtualCurrencyData> m_virtualCurrencies;
};

struct UpdateCatalogItemsRequest : public PFTitleDataManagementUpdateCatalogItemsRequest, public BaseModel
{
    UpdateCatalogItemsRequest();
    UpdateCatalogItemsRequest(const UpdateCatalogItemsRequest& src);
    UpdateCatalogItemsRequest(UpdateCatalogItemsRequest&& src);
    UpdateCatalogItemsRequest(const PFTitleDataManagementUpdateCatalogItemsRequest& src);
    UpdateCatalogItemsRequest& operator=(const UpdateCatalogItemsRequest&) = delete;
    ~UpdateCatalogItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFTitleDataManagementCatalogItem, CatalogItem> m_catalog;
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_setAsDefaultCatalog;
};

struct UpdateStoreItemsRequest : public PFTitleDataManagementUpdateStoreItemsRequest, public BaseModel
{
    UpdateStoreItemsRequest();
    UpdateStoreItemsRequest(const UpdateStoreItemsRequest& src);
    UpdateStoreItemsRequest(UpdateStoreItemsRequest&& src);
    UpdateStoreItemsRequest(const PFTitleDataManagementUpdateStoreItemsRequest& src);
    UpdateStoreItemsRequest& operator=(const UpdateStoreItemsRequest&) = delete;
    ~UpdateStoreItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<StoreMarketingModel> m_marketingData;
    PointerArrayModel<PFTitleDataManagementStoreItem, StoreItem> m_store;
    String m_storeId;
};

struct SetTitleDataRequest : public PFTitleDataManagementSetTitleDataRequest, public SerializableModel
{
    SetTitleDataRequest();
    SetTitleDataRequest(const SetTitleDataRequest& src);
    SetTitleDataRequest(SetTitleDataRequest&& src);
    SetTitleDataRequest(const PFTitleDataManagementSetTitleDataRequest& src);
    SetTitleDataRequest& operator=(const SetTitleDataRequest&) = delete;
    ~SetTitleDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
    String m_value;
};

struct TitleDataKeyValue : public PFTitleDataManagementTitleDataKeyValue, public SerializableModel
{
    TitleDataKeyValue();
    TitleDataKeyValue(const TitleDataKeyValue& src);
    TitleDataKeyValue(TitleDataKeyValue&& src);
    TitleDataKeyValue(const PFTitleDataManagementTitleDataKeyValue& src);
    TitleDataKeyValue& operator=(const TitleDataKeyValue&) = delete;
    ~TitleDataKeyValue() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
    String m_value;
};

struct SetTitleDataAndOverridesRequest : public PFTitleDataManagementSetTitleDataAndOverridesRequest, public BaseModel
{
    SetTitleDataAndOverridesRequest();
    SetTitleDataAndOverridesRequest(const SetTitleDataAndOverridesRequest& src);
    SetTitleDataAndOverridesRequest(SetTitleDataAndOverridesRequest&& src);
    SetTitleDataAndOverridesRequest(const PFTitleDataManagementSetTitleDataAndOverridesRequest& src);
    SetTitleDataAndOverridesRequest& operator=(const SetTitleDataAndOverridesRequest&) = delete;
    ~SetTitleDataAndOverridesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFTitleDataManagementTitleDataKeyValue, TitleDataKeyValue> m_keyValues;
    String m_overrideLabel;
};

struct SetupPushNotificationRequest : public PFTitleDataManagementSetupPushNotificationRequest, public SerializableModel
{
    SetupPushNotificationRequest();
    SetupPushNotificationRequest(const SetupPushNotificationRequest& src);
    SetupPushNotificationRequest(SetupPushNotificationRequest&& src);
    SetupPushNotificationRequest(const PFTitleDataManagementSetupPushNotificationRequest& src);
    SetupPushNotificationRequest& operator=(const SetupPushNotificationRequest&) = delete;
    ~SetupPushNotificationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_credential;
    String m_key;
    String m_name;
};

struct SetupPushNotificationResult : public PFTitleDataManagementSetupPushNotificationResult, public SerializableModel, public ApiResult
{
    SetupPushNotificationResult();
    SetupPushNotificationResult(const SetupPushNotificationResult& src);
    SetupPushNotificationResult(SetupPushNotificationResult&& src);
    SetupPushNotificationResult(const PFTitleDataManagementSetupPushNotificationResult& src);
    SetupPushNotificationResult& operator=(const SetupPushNotificationResult&) = delete;
    ~SetupPushNotificationResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_aRN;
};

struct RandomResultTable : public PFTitleDataManagementRandomResultTable, public BaseModel
{
    RandomResultTable();
    RandomResultTable(const RandomResultTable& src);
    RandomResultTable(RandomResultTable&& src);
    RandomResultTable(const PFTitleDataManagementRandomResultTable& src);
    RandomResultTable& operator=(const RandomResultTable&) = delete;
    ~RandomResultTable() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFResultTableNode, ResultTableNode> m_nodes;
    String m_tableId;
};

struct UpdateRandomResultTablesRequest : public PFTitleDataManagementUpdateRandomResultTablesRequest, public BaseModel
{
    UpdateRandomResultTablesRequest();
    UpdateRandomResultTablesRequest(const UpdateRandomResultTablesRequest& src);
    UpdateRandomResultTablesRequest(UpdateRandomResultTablesRequest&& src);
    UpdateRandomResultTablesRequest(const PFTitleDataManagementUpdateRandomResultTablesRequest& src);
    UpdateRandomResultTablesRequest& operator=(const UpdateRandomResultTablesRequest&) = delete;
    ~UpdateRandomResultTablesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFTitleDataManagementRandomResultTable, RandomResultTable> m_tables;
};

struct GetTimeResult : public PFTitleDataManagementGetTimeResult, public SerializableModel, public ApiResult
{
    GetTimeResult();
    GetTimeResult(const GetTimeResult&) = default;
    GetTimeResult(GetTimeResult&&) = default;
    GetTimeResult(const PFTitleDataManagementGetTimeResult& src);
    GetTimeResult& operator=(const GetTimeResult&) = delete;
    ~GetTimeResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GetTitleNewsRequest : public PFTitleDataManagementGetTitleNewsRequest, public BaseModel
{
    GetTitleNewsRequest();
    GetTitleNewsRequest(const GetTitleNewsRequest& src);
    GetTitleNewsRequest(GetTitleNewsRequest&& src);
    GetTitleNewsRequest(const PFTitleDataManagementGetTitleNewsRequest& src);
    GetTitleNewsRequest& operator=(const GetTitleNewsRequest&) = delete;
    ~GetTitleNewsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<int32_t> m_count;
};

struct TitleNewsItem : public PFTitleDataManagementTitleNewsItem, public SerializableModel
{
    TitleNewsItem();
    TitleNewsItem(const TitleNewsItem& src);
    TitleNewsItem(TitleNewsItem&& src);
    TitleNewsItem(const PFTitleDataManagementTitleNewsItem& src);
    TitleNewsItem& operator=(const TitleNewsItem&) = delete;
    ~TitleNewsItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_body;
    String m_newsId;
    String m_title;
};

struct GetTitleNewsResult : public PFTitleDataManagementGetTitleNewsResult, public BaseModel, public ApiResult
{
    GetTitleNewsResult();
    GetTitleNewsResult(const GetTitleNewsResult& src);
    GetTitleNewsResult(GetTitleNewsResult&& src);
    GetTitleNewsResult(const PFTitleDataManagementGetTitleNewsResult& src);
    GetTitleNewsResult& operator=(const GetTitleNewsResult&) = delete;
    ~GetTitleNewsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFTitleDataManagementTitleNewsItem, TitleNewsItem> m_news;
};

struct GetStoreItemsServerRequest : public PFTitleDataManagementGetStoreItemsServerRequest, public BaseModel
{
    GetStoreItemsServerRequest();
    GetStoreItemsServerRequest(const GetStoreItemsServerRequest& src);
    GetStoreItemsServerRequest(GetStoreItemsServerRequest&& src);
    GetStoreItemsServerRequest(const PFTitleDataManagementGetStoreItemsServerRequest& src);
    GetStoreItemsServerRequest& operator=(const GetStoreItemsServerRequest&) = delete;
    ~GetStoreItemsServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_storeId;
};

} // namespace TitleDataManagementModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFTitleDataManagementAddLocalizedNewsRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementAddNewsRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementAddNewsResult& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementVirtualCurrencyData& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementAddVirtualCurrencyTypesRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementDeleteStoreRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementDeleteTitleDataOverrideRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetCatalogItemsRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementCatalogItemBundleInfo& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementCatalogItemConsumableInfo& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementCatalogItemContainerInfo& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementCatalogItem& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetCatalogItemsResult& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetPublisherDataRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetPublisherDataResult& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetRandomResultTablesRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetStoreItemsRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementStoreMarketingModel& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementStoreItem& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetStoreItemsResult& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetTitleDataRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetTitleDataResult& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementListVirtualCurrencyTypesResult& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementRemoveVirtualCurrencyTypesRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementUpdateCatalogItemsRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementUpdateStoreItemsRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementSetTitleDataRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementTitleDataKeyValue& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementSetTitleDataAndOverridesRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementSetupPushNotificationRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementSetupPushNotificationResult& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementRandomResultTable& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementUpdateRandomResultTablesRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetTimeResult& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetTitleNewsRequest& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementTitleNewsItem& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetTitleNewsResult& input);
template<> inline JsonValue ToJson<>(const PFTitleDataManagementGetStoreItemsServerRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
