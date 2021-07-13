#pragma once

#include <playfab/PlayFabClientDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace ClientModels
{

// Client Classes
struct AcceptTradeRequest : public PlayFabClientAcceptTradeRequest, public BaseModel
{
    AcceptTradeRequest();
    AcceptTradeRequest(const AcceptTradeRequest& src);
    AcceptTradeRequest(AcceptTradeRequest&& src);
    AcceptTradeRequest(const PlayFabClientAcceptTradeRequest& src);
    AcceptTradeRequest& operator=(const AcceptTradeRequest&) = delete;
    ~AcceptTradeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_acceptedInventoryInstanceIds;
    String m_offeringPlayerId;
    String m_tradeId;
};

struct TradeInfo : public PlayFabClientTradeInfo, public BaseModel
{
    TradeInfo();
    TradeInfo(const TradeInfo& src);
    TradeInfo(TradeInfo&& src);
    TradeInfo(const PlayFabClientTradeInfo& src);
    TradeInfo& operator=(const TradeInfo&) = delete;
    ~TradeInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_acceptedInventoryInstanceIds;
    String m_acceptedPlayerId;
    PointerArrayModel<char, String> m_allowedPlayerIds;
    StdExtra::optional<time_t> m_cancelledAt;
    StdExtra::optional<time_t> m_filledAt;
    StdExtra::optional<time_t> m_invalidatedAt;
    PointerArrayModel<char, String> m_offeredCatalogItemIds;
    PointerArrayModel<char, String> m_offeredInventoryInstanceIds;
    String m_offeringPlayerId;
    StdExtra::optional<time_t> m_openedAt;
    PointerArrayModel<char, String> m_requestedCatalogItemIds;
    StdExtra::optional<PlayFabClientTradeStatus> m_status;
    String m_tradeId;
};

struct AcceptTradeResponse : public PlayFabClientAcceptTradeResponse, public BaseModel, public ApiResult
{
    AcceptTradeResponse();
    AcceptTradeResponse(const AcceptTradeResponse& src);
    AcceptTradeResponse(AcceptTradeResponse&& src);
    AcceptTradeResponse(const PlayFabClientAcceptTradeResponse& src);
    AcceptTradeResponse& operator=(const AcceptTradeResponse&) = delete;
    ~AcceptTradeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TradeInfo> m_trade;
};

struct AddFriendRequest : public PlayFabClientAddFriendRequest, public SerializableModel
{
    AddFriendRequest();
    AddFriendRequest(const AddFriendRequest& src);
    AddFriendRequest(AddFriendRequest&& src);
    AddFriendRequest(const PlayFabClientAddFriendRequest& src);
    AddFriendRequest& operator=(const AddFriendRequest&) = delete;
    ~AddFriendRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendEmail;
    String m_friendPlayFabId;
    String m_friendTitleDisplayName;
    String m_friendUsername;
};

struct AddFriendResult : public PlayFabClientAddFriendResult, public SerializableModel, public ApiResult
{
    AddFriendResult();
    AddFriendResult(const AddFriendResult&) = default;
    AddFriendResult(AddFriendResult&&) = default;
    AddFriendResult(const PlayFabClientAddFriendResult& src);
    AddFriendResult& operator=(const AddFriendResult&) = delete;
    ~AddFriendResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GenericServiceId : public PlayFabClientGenericServiceId, public SerializableModel
{
    GenericServiceId();
    GenericServiceId(const GenericServiceId& src);
    GenericServiceId(GenericServiceId&& src);
    GenericServiceId(const PlayFabClientGenericServiceId& src);
    GenericServiceId& operator=(const GenericServiceId&) = delete;
    ~GenericServiceId() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_serviceName;
    String m_userId;
};

struct AddGenericIDRequest : public PlayFabClientAddGenericIDRequest, public BaseModel
{
    AddGenericIDRequest();
    AddGenericIDRequest(const AddGenericIDRequest& src);
    AddGenericIDRequest(AddGenericIDRequest&& src);
    AddGenericIDRequest(const PlayFabClientAddGenericIDRequest& src);
    AddGenericIDRequest& operator=(const AddGenericIDRequest&) = delete;
    ~AddGenericIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    GenericServiceId m_genericId;
};

struct AddOrUpdateContactEmailRequest : public PlayFabClientAddOrUpdateContactEmailRequest, public BaseModel
{
    AddOrUpdateContactEmailRequest();
    AddOrUpdateContactEmailRequest(const AddOrUpdateContactEmailRequest& src);
    AddOrUpdateContactEmailRequest(AddOrUpdateContactEmailRequest&& src);
    AddOrUpdateContactEmailRequest(const PlayFabClientAddOrUpdateContactEmailRequest& src);
    AddOrUpdateContactEmailRequest& operator=(const AddOrUpdateContactEmailRequest&) = delete;
    ~AddOrUpdateContactEmailRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_emailAddress;
};

struct AddSharedGroupMembersRequest : public PlayFabClientAddSharedGroupMembersRequest, public BaseModel
{
    AddSharedGroupMembersRequest();
    AddSharedGroupMembersRequest(const AddSharedGroupMembersRequest& src);
    AddSharedGroupMembersRequest(AddSharedGroupMembersRequest&& src);
    AddSharedGroupMembersRequest(const PlayFabClientAddSharedGroupMembersRequest& src);
    AddSharedGroupMembersRequest& operator=(const AddSharedGroupMembersRequest&) = delete;
    ~AddSharedGroupMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_playFabIds;
    String m_sharedGroupId;
};

struct AddUsernamePasswordRequest : public PlayFabClientAddUsernamePasswordRequest, public BaseModel
{
    AddUsernamePasswordRequest();
    AddUsernamePasswordRequest(const AddUsernamePasswordRequest& src);
    AddUsernamePasswordRequest(AddUsernamePasswordRequest&& src);
    AddUsernamePasswordRequest(const PlayFabClientAddUsernamePasswordRequest& src);
    AddUsernamePasswordRequest& operator=(const AddUsernamePasswordRequest&) = delete;
    ~AddUsernamePasswordRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_email;
    String m_password;
    String m_username;
};

struct AddUsernamePasswordResult : public PlayFabClientAddUsernamePasswordResult, public SerializableModel, public ApiResult
{
    AddUsernamePasswordResult();
    AddUsernamePasswordResult(const AddUsernamePasswordResult& src);
    AddUsernamePasswordResult(AddUsernamePasswordResult&& src);
    AddUsernamePasswordResult(const PlayFabClientAddUsernamePasswordResult& src);
    AddUsernamePasswordResult& operator=(const AddUsernamePasswordResult&) = delete;
    ~AddUsernamePasswordResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_username;
};

struct AddUserVirtualCurrencyRequest : public PlayFabClientAddUserVirtualCurrencyRequest, public BaseModel
{
    AddUserVirtualCurrencyRequest();
    AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src);
    AddUserVirtualCurrencyRequest(AddUserVirtualCurrencyRequest&& src);
    AddUserVirtualCurrencyRequest(const PlayFabClientAddUserVirtualCurrencyRequest& src);
    AddUserVirtualCurrencyRequest& operator=(const AddUserVirtualCurrencyRequest&) = delete;
    ~AddUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_virtualCurrency;
};

struct AdPlacementDetails : public PlayFabClientAdPlacementDetails, public BaseModel
{
    AdPlacementDetails();
    AdPlacementDetails(const AdPlacementDetails& src);
    AdPlacementDetails(AdPlacementDetails&& src);
    AdPlacementDetails(const PlayFabClientAdPlacementDetails& src);
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

struct AdRewardItemGranted : public PlayFabClientAdRewardItemGranted, public SerializableModel
{
    AdRewardItemGranted();
    AdRewardItemGranted(const AdRewardItemGranted& src);
    AdRewardItemGranted(AdRewardItemGranted&& src);
    AdRewardItemGranted(const PlayFabClientAdRewardItemGranted& src);
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

struct AdRewardResults : public PlayFabClientAdRewardResults, public BaseModel
{
    AdRewardResults();
    AdRewardResults(const AdRewardResults& src);
    AdRewardResults(AdRewardResults&& src);
    AdRewardResults(const PlayFabClientAdRewardResults& src);
    AdRewardResults& operator=(const AdRewardResults&) = delete;
    ~AdRewardResults() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientAdRewardItemGranted, AdRewardItemGranted> m_grantedItems;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_grantedVirtualCurrencies;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_incrementedStatistics;
};

struct AndroidDevicePushNotificationRegistrationRequest : public PlayFabClientAndroidDevicePushNotificationRegistrationRequest, public BaseModel
{
    AndroidDevicePushNotificationRegistrationRequest();
    AndroidDevicePushNotificationRegistrationRequest(const AndroidDevicePushNotificationRegistrationRequest& src);
    AndroidDevicePushNotificationRegistrationRequest(AndroidDevicePushNotificationRegistrationRequest&& src);
    AndroidDevicePushNotificationRegistrationRequest(const PlayFabClientAndroidDevicePushNotificationRegistrationRequest& src);
    AndroidDevicePushNotificationRegistrationRequest& operator=(const AndroidDevicePushNotificationRegistrationRequest&) = delete;
    ~AndroidDevicePushNotificationRegistrationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_confirmationMessage;
    String m_deviceToken;
    StdExtra::optional<bool> m_sendPushNotificationConfirmation;
};

struct AttributeInstallRequest : public PlayFabClientAttributeInstallRequest, public SerializableModel
{
    AttributeInstallRequest();
    AttributeInstallRequest(const AttributeInstallRequest& src);
    AttributeInstallRequest(AttributeInstallRequest&& src);
    AttributeInstallRequest(const PlayFabClientAttributeInstallRequest& src);
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

struct CancelTradeRequest : public PlayFabClientCancelTradeRequest, public SerializableModel
{
    CancelTradeRequest();
    CancelTradeRequest(const CancelTradeRequest& src);
    CancelTradeRequest(CancelTradeRequest&& src);
    CancelTradeRequest(const PlayFabClientCancelTradeRequest& src);
    CancelTradeRequest& operator=(const CancelTradeRequest&) = delete;
    ~CancelTradeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_tradeId;
};

struct CancelTradeResponse : public PlayFabClientCancelTradeResponse, public BaseModel, public ApiResult
{
    CancelTradeResponse();
    CancelTradeResponse(const CancelTradeResponse& src);
    CancelTradeResponse(CancelTradeResponse&& src);
    CancelTradeResponse(const PlayFabClientCancelTradeResponse& src);
    CancelTradeResponse& operator=(const CancelTradeResponse&) = delete;
    ~CancelTradeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TradeInfo> m_trade;
};

struct CartItem : public PlayFabClientCartItem, public BaseModel
{
    CartItem();
    CartItem(const CartItem& src);
    CartItem(CartItem&& src);
    CartItem(const PlayFabClientCartItem& src);
    CartItem& operator=(const CartItem&) = delete;
    ~CartItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    String m_displayName;
    String m_itemClass;
    String m_itemId;
    String m_itemInstanceId;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_vCAmount;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
};

struct CatalogItemBundleInfo : public PlayFabClientCatalogItemBundleInfo, public BaseModel
{
    CatalogItemBundleInfo();
    CatalogItemBundleInfo(const CatalogItemBundleInfo& src);
    CatalogItemBundleInfo(CatalogItemBundleInfo&& src);
    CatalogItemBundleInfo(const PlayFabClientCatalogItemBundleInfo& src);
    CatalogItemBundleInfo& operator=(const CatalogItemBundleInfo&) = delete;
    ~CatalogItemBundleInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_bundledItems;
    PointerArrayModel<char, String> m_bundledResultTables;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_bundledVirtualCurrencies;
};

struct CatalogItemConsumableInfo : public PlayFabClientCatalogItemConsumableInfo, public BaseModel
{
    CatalogItemConsumableInfo();
    CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src);
    CatalogItemConsumableInfo(CatalogItemConsumableInfo&& src);
    CatalogItemConsumableInfo(const PlayFabClientCatalogItemConsumableInfo& src);
    CatalogItemConsumableInfo& operator=(const CatalogItemConsumableInfo&) = delete;
    ~CatalogItemConsumableInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_usageCount;
    StdExtra::optional<uint32_t> m_usagePeriod;
    String m_usagePeriodGroup;
};

struct CatalogItemContainerInfo : public PlayFabClientCatalogItemContainerInfo, public BaseModel
{
    CatalogItemContainerInfo();
    CatalogItemContainerInfo(const CatalogItemContainerInfo& src);
    CatalogItemContainerInfo(CatalogItemContainerInfo&& src);
    CatalogItemContainerInfo(const PlayFabClientCatalogItemContainerInfo& src);
    CatalogItemContainerInfo& operator=(const CatalogItemContainerInfo&) = delete;
    ~CatalogItemContainerInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_itemContents;
    String m_keyItemId;
    PointerArrayModel<char, String> m_resultTableContents;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyContents;
};

struct CatalogItem : public PlayFabClientCatalogItem, public BaseModel
{
    CatalogItem();
    CatalogItem(const CatalogItem& src);
    CatalogItem(CatalogItem&& src);
    CatalogItem(const PlayFabClientCatalogItem& src);
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
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
    PointerArrayModel<char, String> m_tags;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
};

struct CharacterLeaderboardEntry : public PlayFabClientCharacterLeaderboardEntry, public SerializableModel
{
    CharacterLeaderboardEntry();
    CharacterLeaderboardEntry(const CharacterLeaderboardEntry& src);
    CharacterLeaderboardEntry(CharacterLeaderboardEntry&& src);
    CharacterLeaderboardEntry(const PlayFabClientCharacterLeaderboardEntry& src);
    CharacterLeaderboardEntry& operator=(const CharacterLeaderboardEntry&) = delete;
    ~CharacterLeaderboardEntry() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_characterName;
    String m_characterType;
    String m_displayName;
    String m_playFabId;
};

struct Container_Dictionary_String_String : public PlayFabClientContainer_Dictionary_String_String, public BaseModel
{
    Container_Dictionary_String_String();
    Container_Dictionary_String_String(const Container_Dictionary_String_String& src);
    Container_Dictionary_String_String(Container_Dictionary_String_String&& src);
    Container_Dictionary_String_String(const PlayFabClientContainer_Dictionary_String_String& src);
    Container_Dictionary_String_String& operator=(const Container_Dictionary_String_String&) = delete;
    ~Container_Dictionary_String_String() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
};

struct CollectionFilter : public PlayFabClientCollectionFilter, public BaseModel
{
    CollectionFilter();
    CollectionFilter(const CollectionFilter& src);
    CollectionFilter(CollectionFilter&& src);
    CollectionFilter(const PlayFabClientCollectionFilter& src);
    CollectionFilter& operator=(const CollectionFilter&) = delete;
    ~CollectionFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientContainer_Dictionary_String_String, Container_Dictionary_String_String> m_excludes;
    PointerArrayModel<PlayFabClientContainer_Dictionary_String_String, Container_Dictionary_String_String> m_includes;
};

struct ConfirmPurchaseRequest : public PlayFabClientConfirmPurchaseRequest, public BaseModel
{
    ConfirmPurchaseRequest();
    ConfirmPurchaseRequest(const ConfirmPurchaseRequest& src);
    ConfirmPurchaseRequest(ConfirmPurchaseRequest&& src);
    ConfirmPurchaseRequest(const PlayFabClientConfirmPurchaseRequest& src);
    ConfirmPurchaseRequest& operator=(const ConfirmPurchaseRequest&) = delete;
    ~ConfirmPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_orderId;
};

struct ConfirmPurchaseResult : public PlayFabClientConfirmPurchaseResult, public BaseModel, public ApiResult
{
    ConfirmPurchaseResult();
    ConfirmPurchaseResult(const ConfirmPurchaseResult& src);
    ConfirmPurchaseResult(ConfirmPurchaseResult&& src);
    ConfirmPurchaseResult(const PlayFabClientConfirmPurchaseResult& src);
    ConfirmPurchaseResult& operator=(const ConfirmPurchaseResult&) = delete;
    ~ConfirmPurchaseResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_items;
    String m_orderId;
};

struct ConsumeItemRequest : public PlayFabClientConsumeItemRequest, public BaseModel
{
    ConsumeItemRequest();
    ConsumeItemRequest(const ConsumeItemRequest& src);
    ConsumeItemRequest(ConsumeItemRequest&& src);
    ConsumeItemRequest(const PlayFabClientConsumeItemRequest& src);
    ConsumeItemRequest& operator=(const ConsumeItemRequest&) = delete;
    ~ConsumeItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_itemInstanceId;
};

struct ConsumeItemResult : public PlayFabClientConsumeItemResult, public SerializableModel, public ApiResult
{
    ConsumeItemResult();
    ConsumeItemResult(const ConsumeItemResult& src);
    ConsumeItemResult(ConsumeItemResult&& src);
    ConsumeItemResult(const PlayFabClientConsumeItemResult& src);
    ConsumeItemResult& operator=(const ConsumeItemResult&) = delete;
    ~ConsumeItemResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_itemInstanceId;
};

struct MicrosoftStorePayload : public PlayFabClientMicrosoftStorePayload, public SerializableModel
{
    MicrosoftStorePayload();
    MicrosoftStorePayload(const MicrosoftStorePayload& src);
    MicrosoftStorePayload(MicrosoftStorePayload&& src);
    MicrosoftStorePayload(const PlayFabClientMicrosoftStorePayload& src);
    MicrosoftStorePayload& operator=(const MicrosoftStorePayload&) = delete;
    ~MicrosoftStorePayload() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_collectionsMsIdKey;
    String m_userId;
    String m_xboxToken;
};

struct ConsumeMicrosoftStoreEntitlementsRequest : public PlayFabClientConsumeMicrosoftStoreEntitlementsRequest, public BaseModel
{
    ConsumeMicrosoftStoreEntitlementsRequest();
    ConsumeMicrosoftStoreEntitlementsRequest(const ConsumeMicrosoftStoreEntitlementsRequest& src);
    ConsumeMicrosoftStoreEntitlementsRequest(ConsumeMicrosoftStoreEntitlementsRequest&& src);
    ConsumeMicrosoftStoreEntitlementsRequest(const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest& src);
    ConsumeMicrosoftStoreEntitlementsRequest& operator=(const ConsumeMicrosoftStoreEntitlementsRequest&) = delete;
    ~ConsumeMicrosoftStoreEntitlementsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    MicrosoftStorePayload m_marketplaceSpecificData;
};

struct ConsumeMicrosoftStoreEntitlementsResponse : public PlayFabClientConsumeMicrosoftStoreEntitlementsResponse, public BaseModel, public ApiResult
{
    ConsumeMicrosoftStoreEntitlementsResponse();
    ConsumeMicrosoftStoreEntitlementsResponse(const ConsumeMicrosoftStoreEntitlementsResponse& src);
    ConsumeMicrosoftStoreEntitlementsResponse(ConsumeMicrosoftStoreEntitlementsResponse&& src);
    ConsumeMicrosoftStoreEntitlementsResponse(const PlayFabClientConsumeMicrosoftStoreEntitlementsResponse& src);
    ConsumeMicrosoftStoreEntitlementsResponse& operator=(const ConsumeMicrosoftStoreEntitlementsResponse&) = delete;
    ~ConsumeMicrosoftStoreEntitlementsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_items;
};

struct PlayStation5Payload : public PlayFabClientPlayStation5Payload, public BaseModel
{
    PlayStation5Payload();
    PlayStation5Payload(const PlayStation5Payload& src);
    PlayStation5Payload(PlayStation5Payload&& src);
    PlayStation5Payload(const PlayFabClientPlayStation5Payload& src);
    PlayStation5Payload& operator=(const PlayStation5Payload&) = delete;
    ~PlayStation5Payload() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_ids;
    String m_serviceLabel;
};

struct ConsumePS5EntitlementsRequest : public PlayFabClientConsumePS5EntitlementsRequest, public BaseModel
{
    ConsumePS5EntitlementsRequest();
    ConsumePS5EntitlementsRequest(const ConsumePS5EntitlementsRequest& src);
    ConsumePS5EntitlementsRequest(ConsumePS5EntitlementsRequest&& src);
    ConsumePS5EntitlementsRequest(const PlayFabClientConsumePS5EntitlementsRequest& src);
    ConsumePS5EntitlementsRequest& operator=(const ConsumePS5EntitlementsRequest&) = delete;
    ~ConsumePS5EntitlementsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PlayStation5Payload m_marketplaceSpecificData;
};

struct ConsumePS5EntitlementsResult : public PlayFabClientConsumePS5EntitlementsResult, public BaseModel, public ApiResult
{
    ConsumePS5EntitlementsResult();
    ConsumePS5EntitlementsResult(const ConsumePS5EntitlementsResult& src);
    ConsumePS5EntitlementsResult(ConsumePS5EntitlementsResult&& src);
    ConsumePS5EntitlementsResult(const PlayFabClientConsumePS5EntitlementsResult& src);
    ConsumePS5EntitlementsResult& operator=(const ConsumePS5EntitlementsResult&) = delete;
    ~ConsumePS5EntitlementsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_items;
};

struct ConsumePSNEntitlementsRequest : public PlayFabClientConsumePSNEntitlementsRequest, public BaseModel
{
    ConsumePSNEntitlementsRequest();
    ConsumePSNEntitlementsRequest(const ConsumePSNEntitlementsRequest& src);
    ConsumePSNEntitlementsRequest(ConsumePSNEntitlementsRequest&& src);
    ConsumePSNEntitlementsRequest(const PlayFabClientConsumePSNEntitlementsRequest& src);
    ConsumePSNEntitlementsRequest& operator=(const ConsumePSNEntitlementsRequest&) = delete;
    ~ConsumePSNEntitlementsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct ConsumePSNEntitlementsResult : public PlayFabClientConsumePSNEntitlementsResult, public BaseModel, public ApiResult
{
    ConsumePSNEntitlementsResult();
    ConsumePSNEntitlementsResult(const ConsumePSNEntitlementsResult& src);
    ConsumePSNEntitlementsResult(ConsumePSNEntitlementsResult&& src);
    ConsumePSNEntitlementsResult(const PlayFabClientConsumePSNEntitlementsResult& src);
    ConsumePSNEntitlementsResult& operator=(const ConsumePSNEntitlementsResult&) = delete;
    ~ConsumePSNEntitlementsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_itemsGranted;
};

struct ConsumeXboxEntitlementsRequest : public PlayFabClientConsumeXboxEntitlementsRequest, public BaseModel
{
    ConsumeXboxEntitlementsRequest();
    ConsumeXboxEntitlementsRequest(const ConsumeXboxEntitlementsRequest& src);
    ConsumeXboxEntitlementsRequest(ConsumeXboxEntitlementsRequest&& src);
    ConsumeXboxEntitlementsRequest(const PlayFabClientConsumeXboxEntitlementsRequest& src);
    ConsumeXboxEntitlementsRequest& operator=(const ConsumeXboxEntitlementsRequest&) = delete;
    ~ConsumeXboxEntitlementsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_xboxToken;
};

struct ConsumeXboxEntitlementsResult : public PlayFabClientConsumeXboxEntitlementsResult, public BaseModel, public ApiResult
{
    ConsumeXboxEntitlementsResult();
    ConsumeXboxEntitlementsResult(const ConsumeXboxEntitlementsResult& src);
    ConsumeXboxEntitlementsResult(ConsumeXboxEntitlementsResult&& src);
    ConsumeXboxEntitlementsResult(const PlayFabClientConsumeXboxEntitlementsResult& src);
    ConsumeXboxEntitlementsResult& operator=(const ConsumeXboxEntitlementsResult&) = delete;
    ~ConsumeXboxEntitlementsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_items;
};

struct CreateSharedGroupRequest : public PlayFabClientCreateSharedGroupRequest, public SerializableModel
{
    CreateSharedGroupRequest();
    CreateSharedGroupRequest(const CreateSharedGroupRequest& src);
    CreateSharedGroupRequest(CreateSharedGroupRequest&& src);
    CreateSharedGroupRequest(const PlayFabClientCreateSharedGroupRequest& src);
    CreateSharedGroupRequest& operator=(const CreateSharedGroupRequest&) = delete;
    ~CreateSharedGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_sharedGroupId;
};

struct CreateSharedGroupResult : public PlayFabClientCreateSharedGroupResult, public SerializableModel, public ApiResult
{
    CreateSharedGroupResult();
    CreateSharedGroupResult(const CreateSharedGroupResult& src);
    CreateSharedGroupResult(CreateSharedGroupResult&& src);
    CreateSharedGroupResult(const PlayFabClientCreateSharedGroupResult& src);
    CreateSharedGroupResult& operator=(const CreateSharedGroupResult&) = delete;
    ~CreateSharedGroupResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_sharedGroupId;
};

struct CurrentGamesRequest : public PlayFabClientCurrentGamesRequest, public BaseModel
{
    CurrentGamesRequest();
    CurrentGamesRequest(const CurrentGamesRequest& src);
    CurrentGamesRequest(CurrentGamesRequest&& src);
    CurrentGamesRequest(const PlayFabClientCurrentGamesRequest& src);
    CurrentGamesRequest& operator=(const CurrentGamesRequest&) = delete;
    ~CurrentGamesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    String m_gameMode;
    StdExtra::optional<PlayFabClientRegion> m_region;
    String m_statisticName;
    StdExtra::optional<CollectionFilter> m_tagFilter;
};

struct GameInfo : public PlayFabClientGameInfo, public BaseModel
{
    GameInfo();
    GameInfo(const GameInfo& src);
    GameInfo(GameInfo&& src);
    GameInfo(const PlayFabClientGameInfo& src);
    GameInfo& operator=(const GameInfo&) = delete;
    ~GameInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    String m_gameMode;
    String m_gameServerData;
    StdExtra::optional<PlayFabClientGameInstanceState> m_gameServerStateEnum;
    StdExtra::optional<time_t> m_lastHeartbeat;
    String m_lobbyID;
    StdExtra::optional<int32_t> m_maxPlayers;
    PointerArrayModel<char, String> m_playerUserIds;
    StdExtra::optional<PlayFabClientRegion> m_region;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    StdExtra::optional<int32_t> m_serverPort;
    String m_serverPublicDNSName;
    String m_statisticName;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_tags;
};

struct CurrentGamesResult : public PlayFabClientCurrentGamesResult, public BaseModel, public ApiResult
{
    CurrentGamesResult();
    CurrentGamesResult(const CurrentGamesResult& src);
    CurrentGamesResult(CurrentGamesResult&& src);
    CurrentGamesResult(const PlayFabClientCurrentGamesResult& src);
    CurrentGamesResult& operator=(const CurrentGamesResult&) = delete;
    ~CurrentGamesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientGameInfo, GameInfo> m_games;
};

struct DeviceInfoRequest : public PlayFabClientDeviceInfoRequest, public BaseModel
{
    DeviceInfoRequest();
    DeviceInfoRequest(const DeviceInfoRequest& src);
    DeviceInfoRequest(DeviceInfoRequest&& src);
    DeviceInfoRequest(const PlayFabClientDeviceInfoRequest& src);
    DeviceInfoRequest& operator=(const DeviceInfoRequest&) = delete;
    ~DeviceInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_info;
};

struct ExecuteCloudScriptRequest : public PlayFabClientExecuteCloudScriptRequest, public BaseModel
{
    ExecuteCloudScriptRequest();
    ExecuteCloudScriptRequest(const ExecuteCloudScriptRequest& src);
    ExecuteCloudScriptRequest(ExecuteCloudScriptRequest&& src);
    ExecuteCloudScriptRequest(const PlayFabClientExecuteCloudScriptRequest& src);
    ExecuteCloudScriptRequest& operator=(const ExecuteCloudScriptRequest&) = delete;
    ~ExecuteCloudScriptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_functionName;
    JsonObject m_functionParameter;
    StdExtra::optional<bool> m_generatePlayStreamEvent;
    StdExtra::optional<PlayFabClientCloudScriptRevisionOption> m_revisionSelection;
    StdExtra::optional<int32_t> m_specificRevision;
};

struct ScriptExecutionError : public PlayFabClientScriptExecutionError, public SerializableModel
{
    ScriptExecutionError();
    ScriptExecutionError(const ScriptExecutionError& src);
    ScriptExecutionError(ScriptExecutionError&& src);
    ScriptExecutionError(const PlayFabClientScriptExecutionError& src);
    ScriptExecutionError& operator=(const ScriptExecutionError&) = delete;
    ~ScriptExecutionError() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_error;
    String m_message;
    String m_stackTrace;
};

struct LogStatement : public PlayFabClientLogStatement, public BaseModel
{
    LogStatement();
    LogStatement(const LogStatement& src);
    LogStatement(LogStatement&& src);
    LogStatement(const PlayFabClientLogStatement& src);
    LogStatement& operator=(const LogStatement&) = delete;
    ~LogStatement() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_data;
    String m_level;
    String m_message;
};

struct ExecuteCloudScriptResult : public PlayFabClientExecuteCloudScriptResult, public BaseModel, public ApiResult
{
    ExecuteCloudScriptResult();
    ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src);
    ExecuteCloudScriptResult(ExecuteCloudScriptResult&& src);
    ExecuteCloudScriptResult(const PlayFabClientExecuteCloudScriptResult& src);
    ExecuteCloudScriptResult& operator=(const ExecuteCloudScriptResult&) = delete;
    ~ExecuteCloudScriptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<ScriptExecutionError> m_error;
    String m_functionName;
    JsonObject m_functionResult;
    StdExtra::optional<bool> m_functionResultTooLarge;
    PointerArrayModel<PlayFabClientLogStatement, LogStatement> m_logs;
    StdExtra::optional<bool> m_logsTooLarge;
};

struct FacebookInstantGamesPlayFabIdPair : public PlayFabClientFacebookInstantGamesPlayFabIdPair, public SerializableModel
{
    FacebookInstantGamesPlayFabIdPair();
    FacebookInstantGamesPlayFabIdPair(const FacebookInstantGamesPlayFabIdPair& src);
    FacebookInstantGamesPlayFabIdPair(FacebookInstantGamesPlayFabIdPair&& src);
    FacebookInstantGamesPlayFabIdPair(const PlayFabClientFacebookInstantGamesPlayFabIdPair& src);
    FacebookInstantGamesPlayFabIdPair& operator=(const FacebookInstantGamesPlayFabIdPair&) = delete;
    ~FacebookInstantGamesPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_facebookInstantGamesId;
    String m_playFabId;
};

struct FacebookPlayFabIdPair : public PlayFabClientFacebookPlayFabIdPair, public SerializableModel
{
    FacebookPlayFabIdPair();
    FacebookPlayFabIdPair(const FacebookPlayFabIdPair& src);
    FacebookPlayFabIdPair(FacebookPlayFabIdPair&& src);
    FacebookPlayFabIdPair(const PlayFabClientFacebookPlayFabIdPair& src);
    FacebookPlayFabIdPair& operator=(const FacebookPlayFabIdPair&) = delete;
    ~FacebookPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_facebookId;
    String m_playFabId;
};

struct FriendInfo : public PlayFabClientFriendInfo, public BaseModel
{
    FriendInfo();
    FriendInfo(const FriendInfo& src);
    FriendInfo(FriendInfo&& src);
    FriendInfo(const PlayFabClientFriendInfo& src);
    FriendInfo& operator=(const FriendInfo&) = delete;
    ~FriendInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserFacebookInfo> m_facebookInfo;
    String m_friendPlayFabId;
    StdExtra::optional<UserGameCenterInfo> m_gameCenterInfo;
    StdExtra::optional<PlayerProfileModel> m_profile;
    StdExtra::optional<UserPsnInfo> m_PSNInfo;
    StdExtra::optional<UserSteamInfo> m_steamInfo;
    PointerArrayModel<char, String> m_tags;
    String m_titleDisplayName;
    String m_username;
    StdExtra::optional<UserXboxInfo> m_xboxInfo;
};

struct GameCenterPlayFabIdPair : public PlayFabClientGameCenterPlayFabIdPair, public SerializableModel
{
    GameCenterPlayFabIdPair();
    GameCenterPlayFabIdPair(const GameCenterPlayFabIdPair& src);
    GameCenterPlayFabIdPair(GameCenterPlayFabIdPair&& src);
    GameCenterPlayFabIdPair(const PlayFabClientGameCenterPlayFabIdPair& src);
    GameCenterPlayFabIdPair& operator=(const GameCenterPlayFabIdPair&) = delete;
    ~GameCenterPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_gameCenterId;
    String m_playFabId;
};

struct GameServerRegionsRequest : public PlayFabClientGameServerRegionsRequest, public SerializableModel
{
    GameServerRegionsRequest();
    GameServerRegionsRequest(const GameServerRegionsRequest& src);
    GameServerRegionsRequest(GameServerRegionsRequest&& src);
    GameServerRegionsRequest(const PlayFabClientGameServerRegionsRequest& src);
    GameServerRegionsRequest& operator=(const GameServerRegionsRequest&) = delete;
    ~GameServerRegionsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_buildVersion;
    String m_titleId;
};

struct RegionInfo : public PlayFabClientRegionInfo, public BaseModel
{
    RegionInfo();
    RegionInfo(const RegionInfo& src);
    RegionInfo(RegionInfo&& src);
    RegionInfo(const PlayFabClientRegionInfo& src);
    RegionInfo& operator=(const RegionInfo&) = delete;
    ~RegionInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_name;
    String m_pingUrl;
    StdExtra::optional<PlayFabClientRegion> m_region;
};

struct GameServerRegionsResult : public PlayFabClientGameServerRegionsResult, public BaseModel, public ApiResult
{
    GameServerRegionsResult();
    GameServerRegionsResult(const GameServerRegionsResult& src);
    GameServerRegionsResult(GameServerRegionsResult&& src);
    GameServerRegionsResult(const PlayFabClientGameServerRegionsResult& src);
    GameServerRegionsResult& operator=(const GameServerRegionsResult&) = delete;
    ~GameServerRegionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientRegionInfo, RegionInfo> m_regions;
};

struct GenericPlayFabIdPair : public PlayFabClientGenericPlayFabIdPair, public BaseModel
{
    GenericPlayFabIdPair();
    GenericPlayFabIdPair(const GenericPlayFabIdPair& src);
    GenericPlayFabIdPair(GenericPlayFabIdPair&& src);
    GenericPlayFabIdPair(const PlayFabClientGenericPlayFabIdPair& src);
    GenericPlayFabIdPair& operator=(const GenericPlayFabIdPair&) = delete;
    ~GenericPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<GenericServiceId> m_genericId;
    String m_playFabId;
};

struct GetAccountInfoRequest : public PlayFabClientGetAccountInfoRequest, public SerializableModel
{
    GetAccountInfoRequest();
    GetAccountInfoRequest(const GetAccountInfoRequest& src);
    GetAccountInfoRequest(GetAccountInfoRequest&& src);
    GetAccountInfoRequest(const PlayFabClientGetAccountInfoRequest& src);
    GetAccountInfoRequest& operator=(const GetAccountInfoRequest&) = delete;
    ~GetAccountInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_email;
    String m_playFabId;
    String m_titleDisplayName;
    String m_username;
};

struct GetAccountInfoResult : public PlayFabClientGetAccountInfoResult, public BaseModel, public ApiResult
{
    GetAccountInfoResult();
    GetAccountInfoResult(const GetAccountInfoResult& src);
    GetAccountInfoResult(GetAccountInfoResult&& src);
    GetAccountInfoResult(const PlayFabClientGetAccountInfoResult& src);
    GetAccountInfoResult& operator=(const GetAccountInfoResult&) = delete;
    ~GetAccountInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserAccountInfo> m_accountInfo;
};

struct NameIdentifier : public PlayFabClientNameIdentifier, public SerializableModel
{
    NameIdentifier();
    NameIdentifier(const NameIdentifier& src);
    NameIdentifier(NameIdentifier&& src);
    NameIdentifier(const PlayFabClientNameIdentifier& src);
    NameIdentifier& operator=(const NameIdentifier&) = delete;
    ~NameIdentifier() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_id;
    String m_name;
};

struct GetAdPlacementsRequest : public PlayFabClientGetAdPlacementsRequest, public BaseModel
{
    GetAdPlacementsRequest();
    GetAdPlacementsRequest(const GetAdPlacementsRequest& src);
    GetAdPlacementsRequest(GetAdPlacementsRequest&& src);
    GetAdPlacementsRequest(const PlayFabClientGetAdPlacementsRequest& src);
    GetAdPlacementsRequest& operator=(const GetAdPlacementsRequest&) = delete;
    ~GetAdPlacementsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_appId;
    StdExtra::optional<NameIdentifier> m_identifier;
};

struct GetAdPlacementsResult : public PlayFabClientGetAdPlacementsResult, public BaseModel, public ApiResult
{
    GetAdPlacementsResult();
    GetAdPlacementsResult(const GetAdPlacementsResult& src);
    GetAdPlacementsResult(GetAdPlacementsResult&& src);
    GetAdPlacementsResult(const PlayFabClientGetAdPlacementsResult& src);
    GetAdPlacementsResult& operator=(const GetAdPlacementsResult&) = delete;
    ~GetAdPlacementsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientAdPlacementDetails, AdPlacementDetails> m_adPlacements;
};

struct GetCatalogItemsRequest : public PlayFabClientGetCatalogItemsRequest, public SerializableModel
{
    GetCatalogItemsRequest();
    GetCatalogItemsRequest(const GetCatalogItemsRequest& src);
    GetCatalogItemsRequest(GetCatalogItemsRequest&& src);
    GetCatalogItemsRequest(const PlayFabClientGetCatalogItemsRequest& src);
    GetCatalogItemsRequest& operator=(const GetCatalogItemsRequest&) = delete;
    ~GetCatalogItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
};

struct GetCatalogItemsResult : public PlayFabClientGetCatalogItemsResult, public BaseModel, public ApiResult
{
    GetCatalogItemsResult();
    GetCatalogItemsResult(const GetCatalogItemsResult& src);
    GetCatalogItemsResult(GetCatalogItemsResult&& src);
    GetCatalogItemsResult(const PlayFabClientGetCatalogItemsResult& src);
    GetCatalogItemsResult& operator=(const GetCatalogItemsResult&) = delete;
    ~GetCatalogItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientCatalogItem, CatalogItem> m_catalog;
};

struct GetCharacterDataRequest : public PlayFabClientGetCharacterDataRequest, public BaseModel
{
    GetCharacterDataRequest();
    GetCharacterDataRequest(const GetCharacterDataRequest& src);
    GetCharacterDataRequest(GetCharacterDataRequest&& src);
    GetCharacterDataRequest(const PlayFabClientGetCharacterDataRequest& src);
    GetCharacterDataRequest& operator=(const GetCharacterDataRequest&) = delete;
    ~GetCharacterDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
    PointerArrayModel<char, String> m_keys;
    String m_playFabId;
};

struct GetCharacterDataResult : public PlayFabClientGetCharacterDataResult, public BaseModel, public ApiResult
{
    GetCharacterDataResult();
    GetCharacterDataResult(const GetCharacterDataResult& src);
    GetCharacterDataResult(GetCharacterDataResult&& src);
    GetCharacterDataResult(const PlayFabClientGetCharacterDataResult& src);
    GetCharacterDataResult& operator=(const GetCharacterDataResult&) = delete;
    ~GetCharacterDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabUserDataRecordDictionaryEntry, UserDataRecord> m_data;
};

struct GetCharacterInventoryRequest : public PlayFabClientGetCharacterInventoryRequest, public BaseModel
{
    GetCharacterInventoryRequest();
    GetCharacterInventoryRequest(const GetCharacterInventoryRequest& src);
    GetCharacterInventoryRequest(GetCharacterInventoryRequest&& src);
    GetCharacterInventoryRequest(const PlayFabClientGetCharacterInventoryRequest& src);
    GetCharacterInventoryRequest& operator=(const GetCharacterInventoryRequest&) = delete;
    ~GetCharacterInventoryRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct GetCharacterInventoryResult : public PlayFabClientGetCharacterInventoryResult, public BaseModel, public ApiResult
{
    GetCharacterInventoryResult();
    GetCharacterInventoryResult(const GetCharacterInventoryResult& src);
    GetCharacterInventoryResult(GetCharacterInventoryResult&& src);
    GetCharacterInventoryResult(const PlayFabClientGetCharacterInventoryResult& src);
    GetCharacterInventoryResult& operator=(const GetCharacterInventoryResult&) = delete;
    ~GetCharacterInventoryResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_inventory;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PlayFabVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct GetCharacterLeaderboardRequest : public PlayFabClientGetCharacterLeaderboardRequest, public BaseModel
{
    GetCharacterLeaderboardRequest();
    GetCharacterLeaderboardRequest(const GetCharacterLeaderboardRequest& src);
    GetCharacterLeaderboardRequest(GetCharacterLeaderboardRequest&& src);
    GetCharacterLeaderboardRequest(const PlayFabClientGetCharacterLeaderboardRequest& src);
    GetCharacterLeaderboardRequest& operator=(const GetCharacterLeaderboardRequest&) = delete;
    ~GetCharacterLeaderboardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterType;
    StdExtra::optional<int32_t> m_maxResultsCount;
    String m_statisticName;
};

struct GetCharacterLeaderboardResult : public PlayFabClientGetCharacterLeaderboardResult, public BaseModel, public ApiResult
{
    GetCharacterLeaderboardResult();
    GetCharacterLeaderboardResult(const GetCharacterLeaderboardResult& src);
    GetCharacterLeaderboardResult(GetCharacterLeaderboardResult&& src);
    GetCharacterLeaderboardResult(const PlayFabClientGetCharacterLeaderboardResult& src);
    GetCharacterLeaderboardResult& operator=(const GetCharacterLeaderboardResult&) = delete;
    ~GetCharacterLeaderboardResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
};

struct GetCharacterStatisticsRequest : public PlayFabClientGetCharacterStatisticsRequest, public SerializableModel
{
    GetCharacterStatisticsRequest();
    GetCharacterStatisticsRequest(const GetCharacterStatisticsRequest& src);
    GetCharacterStatisticsRequest(GetCharacterStatisticsRequest&& src);
    GetCharacterStatisticsRequest(const PlayFabClientGetCharacterStatisticsRequest& src);
    GetCharacterStatisticsRequest& operator=(const GetCharacterStatisticsRequest&) = delete;
    ~GetCharacterStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
};

struct GetCharacterStatisticsResult : public PlayFabClientGetCharacterStatisticsResult, public BaseModel, public ApiResult
{
    GetCharacterStatisticsResult();
    GetCharacterStatisticsResult(const GetCharacterStatisticsResult& src);
    GetCharacterStatisticsResult(GetCharacterStatisticsResult&& src);
    GetCharacterStatisticsResult(const PlayFabClientGetCharacterStatisticsResult& src);
    GetCharacterStatisticsResult& operator=(const GetCharacterStatisticsResult&) = delete;
    ~GetCharacterStatisticsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_characterStatistics;
};

struct GetContentDownloadUrlRequest : public PlayFabClientGetContentDownloadUrlRequest, public BaseModel
{
    GetContentDownloadUrlRequest();
    GetContentDownloadUrlRequest(const GetContentDownloadUrlRequest& src);
    GetContentDownloadUrlRequest(GetContentDownloadUrlRequest&& src);
    GetContentDownloadUrlRequest(const PlayFabClientGetContentDownloadUrlRequest& src);
    GetContentDownloadUrlRequest& operator=(const GetContentDownloadUrlRequest&) = delete;
    ~GetContentDownloadUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_httpMethod;
    String m_key;
    StdExtra::optional<bool> m_thruCDN;
};

struct GetContentDownloadUrlResult : public PlayFabClientGetContentDownloadUrlResult, public SerializableModel, public ApiResult
{
    GetContentDownloadUrlResult();
    GetContentDownloadUrlResult(const GetContentDownloadUrlResult& src);
    GetContentDownloadUrlResult(GetContentDownloadUrlResult&& src);
    GetContentDownloadUrlResult(const PlayFabClientGetContentDownloadUrlResult& src);
    GetContentDownloadUrlResult& operator=(const GetContentDownloadUrlResult&) = delete;
    ~GetContentDownloadUrlResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_uRL;
};

struct PlayerProfileViewConstraints : public PlayFabClientPlayerProfileViewConstraints, public SerializableModel
{
    PlayerProfileViewConstraints();
    PlayerProfileViewConstraints(const PlayerProfileViewConstraints&) = default;
    PlayerProfileViewConstraints(PlayerProfileViewConstraints&&) = default;
    PlayerProfileViewConstraints(const PlayFabClientPlayerProfileViewConstraints& src);
    PlayerProfileViewConstraints& operator=(const PlayerProfileViewConstraints&) = delete;
    ~PlayerProfileViewConstraints() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GetFriendLeaderboardAroundPlayerRequest : public PlayFabClientGetFriendLeaderboardAroundPlayerRequest, public BaseModel
{
    GetFriendLeaderboardAroundPlayerRequest();
    GetFriendLeaderboardAroundPlayerRequest(const GetFriendLeaderboardAroundPlayerRequest& src);
    GetFriendLeaderboardAroundPlayerRequest(GetFriendLeaderboardAroundPlayerRequest&& src);
    GetFriendLeaderboardAroundPlayerRequest(const PlayFabClientGetFriendLeaderboardAroundPlayerRequest& src);
    GetFriendLeaderboardAroundPlayerRequest& operator=(const GetFriendLeaderboardAroundPlayerRequest&) = delete;
    ~GetFriendLeaderboardAroundPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeFacebookFriends;
    StdExtra::optional<bool> m_includeSteamFriends;
    StdExtra::optional<int32_t> m_maxResultsCount;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
    String m_xboxToken;
};

struct PlayerLeaderboardEntry : public PlayFabClientPlayerLeaderboardEntry, public BaseModel
{
    PlayerLeaderboardEntry();
    PlayerLeaderboardEntry(const PlayerLeaderboardEntry& src);
    PlayerLeaderboardEntry(PlayerLeaderboardEntry&& src);
    PlayerLeaderboardEntry(const PlayFabClientPlayerLeaderboardEntry& src);
    PlayerLeaderboardEntry& operator=(const PlayerLeaderboardEntry&) = delete;
    ~PlayerLeaderboardEntry() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_displayName;
    String m_playFabId;
    StdExtra::optional<PlayerProfileModel> m_profile;
};

struct GetFriendLeaderboardAroundPlayerResult : public PlayFabClientGetFriendLeaderboardAroundPlayerResult, public BaseModel, public ApiResult
{
    GetFriendLeaderboardAroundPlayerResult();
    GetFriendLeaderboardAroundPlayerResult(const GetFriendLeaderboardAroundPlayerResult& src);
    GetFriendLeaderboardAroundPlayerResult(GetFriendLeaderboardAroundPlayerResult&& src);
    GetFriendLeaderboardAroundPlayerResult(const PlayFabClientGetFriendLeaderboardAroundPlayerResult& src);
    GetFriendLeaderboardAroundPlayerResult& operator=(const GetFriendLeaderboardAroundPlayerResult&) = delete;
    ~GetFriendLeaderboardAroundPlayerResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
    StdExtra::optional<time_t> m_nextReset;
};

struct GetFriendLeaderboardRequest : public PlayFabClientGetFriendLeaderboardRequest, public BaseModel
{
    GetFriendLeaderboardRequest();
    GetFriendLeaderboardRequest(const GetFriendLeaderboardRequest& src);
    GetFriendLeaderboardRequest(GetFriendLeaderboardRequest&& src);
    GetFriendLeaderboardRequest(const PlayFabClientGetFriendLeaderboardRequest& src);
    GetFriendLeaderboardRequest& operator=(const GetFriendLeaderboardRequest&) = delete;
    ~GetFriendLeaderboardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeFacebookFriends;
    StdExtra::optional<bool> m_includeSteamFriends;
    StdExtra::optional<int32_t> m_maxResultsCount;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
    String m_xboxToken;
};

struct GetFriendsListRequest : public PlayFabClientGetFriendsListRequest, public BaseModel
{
    GetFriendsListRequest();
    GetFriendsListRequest(const GetFriendsListRequest& src);
    GetFriendsListRequest(GetFriendsListRequest&& src);
    GetFriendsListRequest(const PlayFabClientGetFriendsListRequest& src);
    GetFriendsListRequest& operator=(const GetFriendsListRequest&) = delete;
    ~GetFriendsListRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeFacebookFriends;
    StdExtra::optional<bool> m_includeSteamFriends;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_xboxToken;
};

struct GetFriendsListResult : public PlayFabClientGetFriendsListResult, public BaseModel, public ApiResult
{
    GetFriendsListResult();
    GetFriendsListResult(const GetFriendsListResult& src);
    GetFriendsListResult(GetFriendsListResult&& src);
    GetFriendsListResult(const PlayFabClientGetFriendsListResult& src);
    GetFriendsListResult& operator=(const GetFriendsListResult&) = delete;
    ~GetFriendsListResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientFriendInfo, FriendInfo> m_friends;
};

struct GetLeaderboardAroundCharacterRequest : public PlayFabClientGetLeaderboardAroundCharacterRequest, public BaseModel
{
    GetLeaderboardAroundCharacterRequest();
    GetLeaderboardAroundCharacterRequest(const GetLeaderboardAroundCharacterRequest& src);
    GetLeaderboardAroundCharacterRequest(GetLeaderboardAroundCharacterRequest&& src);
    GetLeaderboardAroundCharacterRequest(const PlayFabClientGetLeaderboardAroundCharacterRequest& src);
    GetLeaderboardAroundCharacterRequest& operator=(const GetLeaderboardAroundCharacterRequest&) = delete;
    ~GetLeaderboardAroundCharacterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    String m_characterType;
    StdExtra::optional<int32_t> m_maxResultsCount;
    String m_statisticName;
};

struct GetLeaderboardAroundCharacterResult : public PlayFabClientGetLeaderboardAroundCharacterResult, public BaseModel, public ApiResult
{
    GetLeaderboardAroundCharacterResult();
    GetLeaderboardAroundCharacterResult(const GetLeaderboardAroundCharacterResult& src);
    GetLeaderboardAroundCharacterResult(GetLeaderboardAroundCharacterResult&& src);
    GetLeaderboardAroundCharacterResult(const PlayFabClientGetLeaderboardAroundCharacterResult& src);
    GetLeaderboardAroundCharacterResult& operator=(const GetLeaderboardAroundCharacterResult&) = delete;
    ~GetLeaderboardAroundCharacterResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
};

struct GetLeaderboardAroundPlayerRequest : public PlayFabClientGetLeaderboardAroundPlayerRequest, public BaseModel
{
    GetLeaderboardAroundPlayerRequest();
    GetLeaderboardAroundPlayerRequest(const GetLeaderboardAroundPlayerRequest& src);
    GetLeaderboardAroundPlayerRequest(GetLeaderboardAroundPlayerRequest&& src);
    GetLeaderboardAroundPlayerRequest(const PlayFabClientGetLeaderboardAroundPlayerRequest& src);
    GetLeaderboardAroundPlayerRequest& operator=(const GetLeaderboardAroundPlayerRequest&) = delete;
    ~GetLeaderboardAroundPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_maxResultsCount;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
};

struct GetLeaderboardAroundPlayerResult : public PlayFabClientGetLeaderboardAroundPlayerResult, public BaseModel, public ApiResult
{
    GetLeaderboardAroundPlayerResult();
    GetLeaderboardAroundPlayerResult(const GetLeaderboardAroundPlayerResult& src);
    GetLeaderboardAroundPlayerResult(GetLeaderboardAroundPlayerResult&& src);
    GetLeaderboardAroundPlayerResult(const PlayFabClientGetLeaderboardAroundPlayerResult& src);
    GetLeaderboardAroundPlayerResult& operator=(const GetLeaderboardAroundPlayerResult&) = delete;
    ~GetLeaderboardAroundPlayerResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
    StdExtra::optional<time_t> m_nextReset;
};

struct GetLeaderboardForUsersCharactersRequest : public PlayFabClientGetLeaderboardForUsersCharactersRequest, public SerializableModel
{
    GetLeaderboardForUsersCharactersRequest();
    GetLeaderboardForUsersCharactersRequest(const GetLeaderboardForUsersCharactersRequest& src);
    GetLeaderboardForUsersCharactersRequest(GetLeaderboardForUsersCharactersRequest&& src);
    GetLeaderboardForUsersCharactersRequest(const PlayFabClientGetLeaderboardForUsersCharactersRequest& src);
    GetLeaderboardForUsersCharactersRequest& operator=(const GetLeaderboardForUsersCharactersRequest&) = delete;
    ~GetLeaderboardForUsersCharactersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct GetLeaderboardForUsersCharactersResult : public PlayFabClientGetLeaderboardForUsersCharactersResult, public BaseModel, public ApiResult
{
    GetLeaderboardForUsersCharactersResult();
    GetLeaderboardForUsersCharactersResult(const GetLeaderboardForUsersCharactersResult& src);
    GetLeaderboardForUsersCharactersResult(GetLeaderboardForUsersCharactersResult&& src);
    GetLeaderboardForUsersCharactersResult(const PlayFabClientGetLeaderboardForUsersCharactersResult& src);
    GetLeaderboardForUsersCharactersResult& operator=(const GetLeaderboardForUsersCharactersResult&) = delete;
    ~GetLeaderboardForUsersCharactersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
};

struct GetLeaderboardRequest : public PlayFabClientGetLeaderboardRequest, public BaseModel
{
    GetLeaderboardRequest();
    GetLeaderboardRequest(const GetLeaderboardRequest& src);
    GetLeaderboardRequest(GetLeaderboardRequest&& src);
    GetLeaderboardRequest(const PlayFabClientGetLeaderboardRequest& src);
    GetLeaderboardRequest& operator=(const GetLeaderboardRequest&) = delete;
    ~GetLeaderboardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_maxResultsCount;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
};

struct GetLeaderboardResult : public PlayFabClientGetLeaderboardResult, public BaseModel, public ApiResult
{
    GetLeaderboardResult();
    GetLeaderboardResult(const GetLeaderboardResult& src);
    GetLeaderboardResult(GetLeaderboardResult&& src);
    GetLeaderboardResult(const PlayFabClientGetLeaderboardResult& src);
    GetLeaderboardResult& operator=(const GetLeaderboardResult&) = delete;
    ~GetLeaderboardResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
    StdExtra::optional<time_t> m_nextReset;
};

struct GetPaymentTokenRequest : public PlayFabClientGetPaymentTokenRequest, public SerializableModel
{
    GetPaymentTokenRequest();
    GetPaymentTokenRequest(const GetPaymentTokenRequest& src);
    GetPaymentTokenRequest(GetPaymentTokenRequest&& src);
    GetPaymentTokenRequest(const PlayFabClientGetPaymentTokenRequest& src);
    GetPaymentTokenRequest& operator=(const GetPaymentTokenRequest&) = delete;
    ~GetPaymentTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_tokenProvider;
};

struct GetPaymentTokenResult : public PlayFabClientGetPaymentTokenResult, public SerializableModel, public ApiResult
{
    GetPaymentTokenResult();
    GetPaymentTokenResult(const GetPaymentTokenResult& src);
    GetPaymentTokenResult(GetPaymentTokenResult&& src);
    GetPaymentTokenResult(const PlayFabClientGetPaymentTokenResult& src);
    GetPaymentTokenResult& operator=(const GetPaymentTokenResult&) = delete;
    ~GetPaymentTokenResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_orderId;
    String m_providerToken;
};

struct GetPhotonAuthenticationTokenRequest : public PlayFabClientGetPhotonAuthenticationTokenRequest, public SerializableModel
{
    GetPhotonAuthenticationTokenRequest();
    GetPhotonAuthenticationTokenRequest(const GetPhotonAuthenticationTokenRequest& src);
    GetPhotonAuthenticationTokenRequest(GetPhotonAuthenticationTokenRequest&& src);
    GetPhotonAuthenticationTokenRequest(const PlayFabClientGetPhotonAuthenticationTokenRequest& src);
    GetPhotonAuthenticationTokenRequest& operator=(const GetPhotonAuthenticationTokenRequest&) = delete;
    ~GetPhotonAuthenticationTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_photonApplicationId;
};

struct GetPhotonAuthenticationTokenResult : public PlayFabClientGetPhotonAuthenticationTokenResult, public SerializableModel, public ApiResult
{
    GetPhotonAuthenticationTokenResult();
    GetPhotonAuthenticationTokenResult(const GetPhotonAuthenticationTokenResult& src);
    GetPhotonAuthenticationTokenResult(GetPhotonAuthenticationTokenResult&& src);
    GetPhotonAuthenticationTokenResult(const PlayFabClientGetPhotonAuthenticationTokenResult& src);
    GetPhotonAuthenticationTokenResult& operator=(const GetPhotonAuthenticationTokenResult&) = delete;
    ~GetPhotonAuthenticationTokenResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_photonCustomAuthenticationToken;
};

struct GetPlayerCombinedInfoRequestParams : public PlayFabClientGetPlayerCombinedInfoRequestParams, public BaseModel
{
    GetPlayerCombinedInfoRequestParams();
    GetPlayerCombinedInfoRequestParams(const GetPlayerCombinedInfoRequestParams& src);
    GetPlayerCombinedInfoRequestParams(GetPlayerCombinedInfoRequestParams&& src);
    GetPlayerCombinedInfoRequestParams(const PlayFabClientGetPlayerCombinedInfoRequestParams& src);
    GetPlayerCombinedInfoRequestParams& operator=(const GetPlayerCombinedInfoRequestParams&) = delete;
    ~GetPlayerCombinedInfoRequestParams() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_playerStatisticNames;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    PointerArrayModel<char, String> m_titleDataKeys;
    PointerArrayModel<char, String> m_userDataKeys;
    PointerArrayModel<char, String> m_userReadOnlyDataKeys;
};

struct GetPlayerCombinedInfoRequest : public PlayFabClientGetPlayerCombinedInfoRequest, public BaseModel
{
    GetPlayerCombinedInfoRequest();
    GetPlayerCombinedInfoRequest(const GetPlayerCombinedInfoRequest& src);
    GetPlayerCombinedInfoRequest(GetPlayerCombinedInfoRequest&& src);
    GetPlayerCombinedInfoRequest(const PlayFabClientGetPlayerCombinedInfoRequest& src);
    GetPlayerCombinedInfoRequest& operator=(const GetPlayerCombinedInfoRequest&) = delete;
    ~GetPlayerCombinedInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    GetPlayerCombinedInfoRequestParams m_infoRequestParameters;
    String m_playFabId;
};

struct GetPlayerCombinedInfoResult : public PlayFabClientGetPlayerCombinedInfoResult, public BaseModel, public ApiResult
{
    GetPlayerCombinedInfoResult();
    GetPlayerCombinedInfoResult(const GetPlayerCombinedInfoResult& src);
    GetPlayerCombinedInfoResult(GetPlayerCombinedInfoResult&& src);
    GetPlayerCombinedInfoResult(const PlayFabClientGetPlayerCombinedInfoResult& src);
    GetPlayerCombinedInfoResult& operator=(const GetPlayerCombinedInfoResult&) = delete;
    ~GetPlayerCombinedInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<GetPlayerCombinedInfoResultPayload> m_infoResultPayload;
    String m_playFabId;
};

struct GetPlayerProfileRequest : public PlayFabClientGetPlayerProfileRequest, public BaseModel
{
    GetPlayerProfileRequest();
    GetPlayerProfileRequest(const GetPlayerProfileRequest& src);
    GetPlayerProfileRequest(GetPlayerProfileRequest&& src);
    GetPlayerProfileRequest(const PlayFabClientGetPlayerProfileRequest& src);
    GetPlayerProfileRequest& operator=(const GetPlayerProfileRequest&) = delete;
    ~GetPlayerProfileRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
};

struct GetPlayerProfileResult : public PlayFabClientGetPlayerProfileResult, public BaseModel, public ApiResult
{
    GetPlayerProfileResult();
    GetPlayerProfileResult(const GetPlayerProfileResult& src);
    GetPlayerProfileResult(GetPlayerProfileResult&& src);
    GetPlayerProfileResult(const PlayFabClientGetPlayerProfileResult& src);
    GetPlayerProfileResult& operator=(const GetPlayerProfileResult&) = delete;
    ~GetPlayerProfileResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayerProfileModel> m_playerProfile;
};

struct GetSegmentResult : public PlayFabClientGetSegmentResult, public SerializableModel, public ApiResult
{
    GetSegmentResult();
    GetSegmentResult(const GetSegmentResult& src);
    GetSegmentResult(GetSegmentResult&& src);
    GetSegmentResult(const PlayFabClientGetSegmentResult& src);
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

struct GetPlayerSegmentsResult : public PlayFabClientGetPlayerSegmentsResult, public BaseModel, public ApiResult
{
    GetPlayerSegmentsResult();
    GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src);
    GetPlayerSegmentsResult(GetPlayerSegmentsResult&& src);
    GetPlayerSegmentsResult(const PlayFabClientGetPlayerSegmentsResult& src);
    GetPlayerSegmentsResult& operator=(const GetPlayerSegmentsResult&) = delete;
    ~GetPlayerSegmentsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientGetSegmentResult, GetSegmentResult> m_segments;
};

struct StatisticNameVersion : public PlayFabClientStatisticNameVersion, public SerializableModel
{
    StatisticNameVersion();
    StatisticNameVersion(const StatisticNameVersion& src);
    StatisticNameVersion(StatisticNameVersion&& src);
    StatisticNameVersion(const PlayFabClientStatisticNameVersion& src);
    StatisticNameVersion& operator=(const StatisticNameVersion&) = delete;
    ~StatisticNameVersion() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct GetPlayerStatisticsRequest : public PlayFabClientGetPlayerStatisticsRequest, public BaseModel
{
    GetPlayerStatisticsRequest();
    GetPlayerStatisticsRequest(const GetPlayerStatisticsRequest& src);
    GetPlayerStatisticsRequest(GetPlayerStatisticsRequest&& src);
    GetPlayerStatisticsRequest(const PlayFabClientGetPlayerStatisticsRequest& src);
    GetPlayerStatisticsRequest& operator=(const GetPlayerStatisticsRequest&) = delete;
    ~GetPlayerStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<char, String> m_statisticNames;
    PointerArrayModel<PlayFabClientStatisticNameVersion, StatisticNameVersion> m_statisticNameVersions;
};

struct GetPlayerStatisticsResult : public PlayFabClientGetPlayerStatisticsResult, public BaseModel, public ApiResult
{
    GetPlayerStatisticsResult();
    GetPlayerStatisticsResult(const GetPlayerStatisticsResult& src);
    GetPlayerStatisticsResult(GetPlayerStatisticsResult&& src);
    GetPlayerStatisticsResult(const PlayFabClientGetPlayerStatisticsResult& src);
    GetPlayerStatisticsResult& operator=(const GetPlayerStatisticsResult&) = delete;
    ~GetPlayerStatisticsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabStatisticValue, StatisticValue> m_statistics;
};

struct GetPlayerStatisticVersionsRequest : public PlayFabClientGetPlayerStatisticVersionsRequest, public BaseModel
{
    GetPlayerStatisticVersionsRequest();
    GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src);
    GetPlayerStatisticVersionsRequest(GetPlayerStatisticVersionsRequest&& src);
    GetPlayerStatisticVersionsRequest(const PlayFabClientGetPlayerStatisticVersionsRequest& src);
    GetPlayerStatisticVersionsRequest& operator=(const GetPlayerStatisticVersionsRequest&) = delete;
    ~GetPlayerStatisticVersionsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_statisticName;
};

struct PlayerStatisticVersion : public PlayFabClientPlayerStatisticVersion, public BaseModel
{
    PlayerStatisticVersion();
    PlayerStatisticVersion(const PlayerStatisticVersion& src);
    PlayerStatisticVersion(PlayerStatisticVersion&& src);
    PlayerStatisticVersion(const PlayFabClientPlayerStatisticVersion& src);
    PlayerStatisticVersion& operator=(const PlayerStatisticVersion&) = delete;
    ~PlayerStatisticVersion() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_deactivationTime;
    StdExtra::optional<time_t> m_scheduledActivationTime;
    StdExtra::optional<time_t> m_scheduledDeactivationTime;
    String m_statisticName;
};

struct GetPlayerStatisticVersionsResult : public PlayFabClientGetPlayerStatisticVersionsResult, public BaseModel, public ApiResult
{
    GetPlayerStatisticVersionsResult();
    GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src);
    GetPlayerStatisticVersionsResult(GetPlayerStatisticVersionsResult&& src);
    GetPlayerStatisticVersionsResult(const PlayFabClientGetPlayerStatisticVersionsResult& src);
    GetPlayerStatisticVersionsResult& operator=(const GetPlayerStatisticVersionsResult&) = delete;
    ~GetPlayerStatisticVersionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientPlayerStatisticVersion, PlayerStatisticVersion> m_statisticVersions;
};

struct GetPlayerTagsRequest : public PlayFabClientGetPlayerTagsRequest, public BaseModel
{
    GetPlayerTagsRequest();
    GetPlayerTagsRequest(const GetPlayerTagsRequest& src);
    GetPlayerTagsRequest(GetPlayerTagsRequest&& src);
    GetPlayerTagsRequest(const PlayFabClientGetPlayerTagsRequest& src);
    GetPlayerTagsRequest& operator=(const GetPlayerTagsRequest&) = delete;
    ~GetPlayerTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playfabNamespace;
    String m_playFabId;
};

struct GetPlayerTagsResult : public PlayFabClientGetPlayerTagsResult, public BaseModel, public ApiResult
{
    GetPlayerTagsResult();
    GetPlayerTagsResult(const GetPlayerTagsResult& src);
    GetPlayerTagsResult(GetPlayerTagsResult&& src);
    GetPlayerTagsResult(const PlayFabClientGetPlayerTagsResult& src);
    GetPlayerTagsResult& operator=(const GetPlayerTagsResult&) = delete;
    ~GetPlayerTagsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_playFabId;
    PointerArrayModel<char, String> m_tags;
};

struct GetPlayerTradesRequest : public PlayFabClientGetPlayerTradesRequest, public BaseModel
{
    GetPlayerTradesRequest();
    GetPlayerTradesRequest(const GetPlayerTradesRequest& src);
    GetPlayerTradesRequest(GetPlayerTradesRequest&& src);
    GetPlayerTradesRequest(const PlayFabClientGetPlayerTradesRequest& src);
    GetPlayerTradesRequest& operator=(const GetPlayerTradesRequest&) = delete;
    ~GetPlayerTradesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabClientTradeStatus> m_statusFilter;
};

struct GetPlayerTradesResponse : public PlayFabClientGetPlayerTradesResponse, public BaseModel, public ApiResult
{
    GetPlayerTradesResponse();
    GetPlayerTradesResponse(const GetPlayerTradesResponse& src);
    GetPlayerTradesResponse(GetPlayerTradesResponse&& src);
    GetPlayerTradesResponse(const PlayFabClientGetPlayerTradesResponse& src);
    GetPlayerTradesResponse& operator=(const GetPlayerTradesResponse&) = delete;
    ~GetPlayerTradesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientTradeInfo, TradeInfo> m_acceptedTrades;
    PointerArrayModel<PlayFabClientTradeInfo, TradeInfo> m_openedTrades;
};

struct GetPlayFabIDsFromFacebookIDsRequest : public PlayFabClientGetPlayFabIDsFromFacebookIDsRequest, public BaseModel
{
    GetPlayFabIDsFromFacebookIDsRequest();
    GetPlayFabIDsFromFacebookIDsRequest(const GetPlayFabIDsFromFacebookIDsRequest& src);
    GetPlayFabIDsFromFacebookIDsRequest(GetPlayFabIDsFromFacebookIDsRequest&& src);
    GetPlayFabIDsFromFacebookIDsRequest(const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest& src);
    GetPlayFabIDsFromFacebookIDsRequest& operator=(const GetPlayFabIDsFromFacebookIDsRequest&) = delete;
    ~GetPlayFabIDsFromFacebookIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_facebookIDs;
};

struct GetPlayFabIDsFromFacebookIDsResult : public PlayFabClientGetPlayFabIDsFromFacebookIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromFacebookIDsResult();
    GetPlayFabIDsFromFacebookIDsResult(const GetPlayFabIDsFromFacebookIDsResult& src);
    GetPlayFabIDsFromFacebookIDsResult(GetPlayFabIDsFromFacebookIDsResult&& src);
    GetPlayFabIDsFromFacebookIDsResult(const PlayFabClientGetPlayFabIDsFromFacebookIDsResult& src);
    GetPlayFabIDsFromFacebookIDsResult& operator=(const GetPlayFabIDsFromFacebookIDsResult&) = delete;
    ~GetPlayFabIDsFromFacebookIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientFacebookPlayFabIdPair, FacebookPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromFacebookInstantGamesIdsRequest : public PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest, public BaseModel
{
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest();
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest(GetPlayFabIDsFromFacebookInstantGamesIdsRequest&& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsRequest& operator=(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest&) = delete;
    ~GetPlayFabIDsFromFacebookInstantGamesIdsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_facebookInstantGamesIds;
};

struct GetPlayFabIDsFromFacebookInstantGamesIdsResult : public PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromFacebookInstantGamesIdsResult();
    GetPlayFabIDsFromFacebookInstantGamesIdsResult(const GetPlayFabIDsFromFacebookInstantGamesIdsResult& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsResult(GetPlayFabIDsFromFacebookInstantGamesIdsResult&& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsResult(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult& src);
    GetPlayFabIDsFromFacebookInstantGamesIdsResult& operator=(const GetPlayFabIDsFromFacebookInstantGamesIdsResult&) = delete;
    ~GetPlayFabIDsFromFacebookInstantGamesIdsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientFacebookInstantGamesPlayFabIdPair, FacebookInstantGamesPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromGameCenterIDsRequest : public PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest, public BaseModel
{
    GetPlayFabIDsFromGameCenterIDsRequest();
    GetPlayFabIDsFromGameCenterIDsRequest(const GetPlayFabIDsFromGameCenterIDsRequest& src);
    GetPlayFabIDsFromGameCenterIDsRequest(GetPlayFabIDsFromGameCenterIDsRequest&& src);
    GetPlayFabIDsFromGameCenterIDsRequest(const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest& src);
    GetPlayFabIDsFromGameCenterIDsRequest& operator=(const GetPlayFabIDsFromGameCenterIDsRequest&) = delete;
    ~GetPlayFabIDsFromGameCenterIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_gameCenterIDs;
};

struct GetPlayFabIDsFromGameCenterIDsResult : public PlayFabClientGetPlayFabIDsFromGameCenterIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromGameCenterIDsResult();
    GetPlayFabIDsFromGameCenterIDsResult(const GetPlayFabIDsFromGameCenterIDsResult& src);
    GetPlayFabIDsFromGameCenterIDsResult(GetPlayFabIDsFromGameCenterIDsResult&& src);
    GetPlayFabIDsFromGameCenterIDsResult(const PlayFabClientGetPlayFabIDsFromGameCenterIDsResult& src);
    GetPlayFabIDsFromGameCenterIDsResult& operator=(const GetPlayFabIDsFromGameCenterIDsResult&) = delete;
    ~GetPlayFabIDsFromGameCenterIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientGameCenterPlayFabIdPair, GameCenterPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromGenericIDsRequest : public PlayFabClientGetPlayFabIDsFromGenericIDsRequest, public BaseModel
{
    GetPlayFabIDsFromGenericIDsRequest();
    GetPlayFabIDsFromGenericIDsRequest(const GetPlayFabIDsFromGenericIDsRequest& src);
    GetPlayFabIDsFromGenericIDsRequest(GetPlayFabIDsFromGenericIDsRequest&& src);
    GetPlayFabIDsFromGenericIDsRequest(const PlayFabClientGetPlayFabIDsFromGenericIDsRequest& src);
    GetPlayFabIDsFromGenericIDsRequest& operator=(const GetPlayFabIDsFromGenericIDsRequest&) = delete;
    ~GetPlayFabIDsFromGenericIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientGenericServiceId, GenericServiceId> m_genericIDs;
};

struct GetPlayFabIDsFromGenericIDsResult : public PlayFabClientGetPlayFabIDsFromGenericIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromGenericIDsResult();
    GetPlayFabIDsFromGenericIDsResult(const GetPlayFabIDsFromGenericIDsResult& src);
    GetPlayFabIDsFromGenericIDsResult(GetPlayFabIDsFromGenericIDsResult&& src);
    GetPlayFabIDsFromGenericIDsResult(const PlayFabClientGetPlayFabIDsFromGenericIDsResult& src);
    GetPlayFabIDsFromGenericIDsResult& operator=(const GetPlayFabIDsFromGenericIDsResult&) = delete;
    ~GetPlayFabIDsFromGenericIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientGenericPlayFabIdPair, GenericPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromGoogleIDsRequest : public PlayFabClientGetPlayFabIDsFromGoogleIDsRequest, public BaseModel
{
    GetPlayFabIDsFromGoogleIDsRequest();
    GetPlayFabIDsFromGoogleIDsRequest(const GetPlayFabIDsFromGoogleIDsRequest& src);
    GetPlayFabIDsFromGoogleIDsRequest(GetPlayFabIDsFromGoogleIDsRequest&& src);
    GetPlayFabIDsFromGoogleIDsRequest(const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest& src);
    GetPlayFabIDsFromGoogleIDsRequest& operator=(const GetPlayFabIDsFromGoogleIDsRequest&) = delete;
    ~GetPlayFabIDsFromGoogleIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_googleIDs;
};

struct GooglePlayFabIdPair : public PlayFabClientGooglePlayFabIdPair, public SerializableModel
{
    GooglePlayFabIdPair();
    GooglePlayFabIdPair(const GooglePlayFabIdPair& src);
    GooglePlayFabIdPair(GooglePlayFabIdPair&& src);
    GooglePlayFabIdPair(const PlayFabClientGooglePlayFabIdPair& src);
    GooglePlayFabIdPair& operator=(const GooglePlayFabIdPair&) = delete;
    ~GooglePlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_googleId;
    String m_playFabId;
};

struct GetPlayFabIDsFromGoogleIDsResult : public PlayFabClientGetPlayFabIDsFromGoogleIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromGoogleIDsResult();
    GetPlayFabIDsFromGoogleIDsResult(const GetPlayFabIDsFromGoogleIDsResult& src);
    GetPlayFabIDsFromGoogleIDsResult(GetPlayFabIDsFromGoogleIDsResult&& src);
    GetPlayFabIDsFromGoogleIDsResult(const PlayFabClientGetPlayFabIDsFromGoogleIDsResult& src);
    GetPlayFabIDsFromGoogleIDsResult& operator=(const GetPlayFabIDsFromGoogleIDsResult&) = delete;
    ~GetPlayFabIDsFromGoogleIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientGooglePlayFabIdPair, GooglePlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromKongregateIDsRequest : public PlayFabClientGetPlayFabIDsFromKongregateIDsRequest, public BaseModel
{
    GetPlayFabIDsFromKongregateIDsRequest();
    GetPlayFabIDsFromKongregateIDsRequest(const GetPlayFabIDsFromKongregateIDsRequest& src);
    GetPlayFabIDsFromKongregateIDsRequest(GetPlayFabIDsFromKongregateIDsRequest&& src);
    GetPlayFabIDsFromKongregateIDsRequest(const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest& src);
    GetPlayFabIDsFromKongregateIDsRequest& operator=(const GetPlayFabIDsFromKongregateIDsRequest&) = delete;
    ~GetPlayFabIDsFromKongregateIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_kongregateIDs;
};

struct KongregatePlayFabIdPair : public PlayFabClientKongregatePlayFabIdPair, public SerializableModel
{
    KongregatePlayFabIdPair();
    KongregatePlayFabIdPair(const KongregatePlayFabIdPair& src);
    KongregatePlayFabIdPair(KongregatePlayFabIdPair&& src);
    KongregatePlayFabIdPair(const PlayFabClientKongregatePlayFabIdPair& src);
    KongregatePlayFabIdPair& operator=(const KongregatePlayFabIdPair&) = delete;
    ~KongregatePlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_kongregateId;
    String m_playFabId;
};

struct GetPlayFabIDsFromKongregateIDsResult : public PlayFabClientGetPlayFabIDsFromKongregateIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromKongregateIDsResult();
    GetPlayFabIDsFromKongregateIDsResult(const GetPlayFabIDsFromKongregateIDsResult& src);
    GetPlayFabIDsFromKongregateIDsResult(GetPlayFabIDsFromKongregateIDsResult&& src);
    GetPlayFabIDsFromKongregateIDsResult(const PlayFabClientGetPlayFabIDsFromKongregateIDsResult& src);
    GetPlayFabIDsFromKongregateIDsResult& operator=(const GetPlayFabIDsFromKongregateIDsResult&) = delete;
    ~GetPlayFabIDsFromKongregateIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientKongregatePlayFabIdPair, KongregatePlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, public BaseModel
{
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest();
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest&& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& operator=(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest&) = delete;
    ~GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_nintendoSwitchDeviceIds;
};

struct NintendoSwitchPlayFabIdPair : public PlayFabClientNintendoSwitchPlayFabIdPair, public SerializableModel
{
    NintendoSwitchPlayFabIdPair();
    NintendoSwitchPlayFabIdPair(const NintendoSwitchPlayFabIdPair& src);
    NintendoSwitchPlayFabIdPair(NintendoSwitchPlayFabIdPair&& src);
    NintendoSwitchPlayFabIdPair(const PlayFabClientNintendoSwitchPlayFabIdPair& src);
    NintendoSwitchPlayFabIdPair& operator=(const NintendoSwitchPlayFabIdPair&) = delete;
    ~NintendoSwitchPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_nintendoSwitchDeviceId;
    String m_playFabId;
};

struct GetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult();
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(GetPlayFabIDsFromNintendoSwitchDeviceIdsResult&& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src);
    GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& operator=(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult&) = delete;
    ~GetPlayFabIDsFromNintendoSwitchDeviceIdsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientNintendoSwitchPlayFabIdPair, NintendoSwitchPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromPSNAccountIDsRequest : public PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest, public BaseModel
{
    GetPlayFabIDsFromPSNAccountIDsRequest();
    GetPlayFabIDsFromPSNAccountIDsRequest(const GetPlayFabIDsFromPSNAccountIDsRequest& src);
    GetPlayFabIDsFromPSNAccountIDsRequest(GetPlayFabIDsFromPSNAccountIDsRequest&& src);
    GetPlayFabIDsFromPSNAccountIDsRequest(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest& src);
    GetPlayFabIDsFromPSNAccountIDsRequest& operator=(const GetPlayFabIDsFromPSNAccountIDsRequest&) = delete;
    ~GetPlayFabIDsFromPSNAccountIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<int32_t> m_issuerId;
    PointerArrayModel<char, String> m_PSNAccountIDs;
};

struct PSNAccountPlayFabIdPair : public PlayFabClientPSNAccountPlayFabIdPair, public SerializableModel
{
    PSNAccountPlayFabIdPair();
    PSNAccountPlayFabIdPair(const PSNAccountPlayFabIdPair& src);
    PSNAccountPlayFabIdPair(PSNAccountPlayFabIdPair&& src);
    PSNAccountPlayFabIdPair(const PlayFabClientPSNAccountPlayFabIdPair& src);
    PSNAccountPlayFabIdPair& operator=(const PSNAccountPlayFabIdPair&) = delete;
    ~PSNAccountPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_PSNAccountId;
};

struct GetPlayFabIDsFromPSNAccountIDsResult : public PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromPSNAccountIDsResult();
    GetPlayFabIDsFromPSNAccountIDsResult(const GetPlayFabIDsFromPSNAccountIDsResult& src);
    GetPlayFabIDsFromPSNAccountIDsResult(GetPlayFabIDsFromPSNAccountIDsResult&& src);
    GetPlayFabIDsFromPSNAccountIDsResult(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult& src);
    GetPlayFabIDsFromPSNAccountIDsResult& operator=(const GetPlayFabIDsFromPSNAccountIDsResult&) = delete;
    ~GetPlayFabIDsFromPSNAccountIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientPSNAccountPlayFabIdPair, PSNAccountPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromSteamIDsRequest : public PlayFabClientGetPlayFabIDsFromSteamIDsRequest, public BaseModel
{
    GetPlayFabIDsFromSteamIDsRequest();
    GetPlayFabIDsFromSteamIDsRequest(const GetPlayFabIDsFromSteamIDsRequest& src);
    GetPlayFabIDsFromSteamIDsRequest(GetPlayFabIDsFromSteamIDsRequest&& src);
    GetPlayFabIDsFromSteamIDsRequest(const PlayFabClientGetPlayFabIDsFromSteamIDsRequest& src);
    GetPlayFabIDsFromSteamIDsRequest& operator=(const GetPlayFabIDsFromSteamIDsRequest&) = delete;
    ~GetPlayFabIDsFromSteamIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_steamStringIDs;
};

struct SteamPlayFabIdPair : public PlayFabClientSteamPlayFabIdPair, public SerializableModel
{
    SteamPlayFabIdPair();
    SteamPlayFabIdPair(const SteamPlayFabIdPair& src);
    SteamPlayFabIdPair(SteamPlayFabIdPair&& src);
    SteamPlayFabIdPair(const PlayFabClientSteamPlayFabIdPair& src);
    SteamPlayFabIdPair& operator=(const SteamPlayFabIdPair&) = delete;
    ~SteamPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_steamStringId;
};

struct GetPlayFabIDsFromSteamIDsResult : public PlayFabClientGetPlayFabIDsFromSteamIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromSteamIDsResult();
    GetPlayFabIDsFromSteamIDsResult(const GetPlayFabIDsFromSteamIDsResult& src);
    GetPlayFabIDsFromSteamIDsResult(GetPlayFabIDsFromSteamIDsResult&& src);
    GetPlayFabIDsFromSteamIDsResult(const PlayFabClientGetPlayFabIDsFromSteamIDsResult& src);
    GetPlayFabIDsFromSteamIDsResult& operator=(const GetPlayFabIDsFromSteamIDsResult&) = delete;
    ~GetPlayFabIDsFromSteamIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientSteamPlayFabIdPair, SteamPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromTwitchIDsRequest : public PlayFabClientGetPlayFabIDsFromTwitchIDsRequest, public BaseModel
{
    GetPlayFabIDsFromTwitchIDsRequest();
    GetPlayFabIDsFromTwitchIDsRequest(const GetPlayFabIDsFromTwitchIDsRequest& src);
    GetPlayFabIDsFromTwitchIDsRequest(GetPlayFabIDsFromTwitchIDsRequest&& src);
    GetPlayFabIDsFromTwitchIDsRequest(const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest& src);
    GetPlayFabIDsFromTwitchIDsRequest& operator=(const GetPlayFabIDsFromTwitchIDsRequest&) = delete;
    ~GetPlayFabIDsFromTwitchIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_twitchIds;
};

struct TwitchPlayFabIdPair : public PlayFabClientTwitchPlayFabIdPair, public SerializableModel
{
    TwitchPlayFabIdPair();
    TwitchPlayFabIdPair(const TwitchPlayFabIdPair& src);
    TwitchPlayFabIdPair(TwitchPlayFabIdPair&& src);
    TwitchPlayFabIdPair(const PlayFabClientTwitchPlayFabIdPair& src);
    TwitchPlayFabIdPair& operator=(const TwitchPlayFabIdPair&) = delete;
    ~TwitchPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_twitchId;
};

struct GetPlayFabIDsFromTwitchIDsResult : public PlayFabClientGetPlayFabIDsFromTwitchIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromTwitchIDsResult();
    GetPlayFabIDsFromTwitchIDsResult(const GetPlayFabIDsFromTwitchIDsResult& src);
    GetPlayFabIDsFromTwitchIDsResult(GetPlayFabIDsFromTwitchIDsResult&& src);
    GetPlayFabIDsFromTwitchIDsResult(const PlayFabClientGetPlayFabIDsFromTwitchIDsResult& src);
    GetPlayFabIDsFromTwitchIDsResult& operator=(const GetPlayFabIDsFromTwitchIDsResult&) = delete;
    ~GetPlayFabIDsFromTwitchIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientTwitchPlayFabIdPair, TwitchPlayFabIdPair> m_data;
};

struct GetPlayFabIDsFromXboxLiveIDsRequest : public PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest, public BaseModel
{
    GetPlayFabIDsFromXboxLiveIDsRequest();
    GetPlayFabIDsFromXboxLiveIDsRequest(const GetPlayFabIDsFromXboxLiveIDsRequest& src);
    GetPlayFabIDsFromXboxLiveIDsRequest(GetPlayFabIDsFromXboxLiveIDsRequest&& src);
    GetPlayFabIDsFromXboxLiveIDsRequest(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest& src);
    GetPlayFabIDsFromXboxLiveIDsRequest& operator=(const GetPlayFabIDsFromXboxLiveIDsRequest&) = delete;
    ~GetPlayFabIDsFromXboxLiveIDsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_sandbox;
    PointerArrayModel<char, String> m_xboxLiveAccountIDs;
};

struct XboxLiveAccountPlayFabIdPair : public PlayFabClientXboxLiveAccountPlayFabIdPair, public SerializableModel
{
    XboxLiveAccountPlayFabIdPair();
    XboxLiveAccountPlayFabIdPair(const XboxLiveAccountPlayFabIdPair& src);
    XboxLiveAccountPlayFabIdPair(XboxLiveAccountPlayFabIdPair&& src);
    XboxLiveAccountPlayFabIdPair(const PlayFabClientXboxLiveAccountPlayFabIdPair& src);
    XboxLiveAccountPlayFabIdPair& operator=(const XboxLiveAccountPlayFabIdPair&) = delete;
    ~XboxLiveAccountPlayFabIdPair() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_xboxLiveAccountId;
};

struct GetPlayFabIDsFromXboxLiveIDsResult : public PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult, public BaseModel, public ApiResult
{
    GetPlayFabIDsFromXboxLiveIDsResult();
    GetPlayFabIDsFromXboxLiveIDsResult(const GetPlayFabIDsFromXboxLiveIDsResult& src);
    GetPlayFabIDsFromXboxLiveIDsResult(GetPlayFabIDsFromXboxLiveIDsResult&& src);
    GetPlayFabIDsFromXboxLiveIDsResult(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult& src);
    GetPlayFabIDsFromXboxLiveIDsResult& operator=(const GetPlayFabIDsFromXboxLiveIDsResult&) = delete;
    ~GetPlayFabIDsFromXboxLiveIDsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientXboxLiveAccountPlayFabIdPair, XboxLiveAccountPlayFabIdPair> m_data;
};

struct GetPublisherDataRequest : public PlayFabClientGetPublisherDataRequest, public BaseModel
{
    GetPublisherDataRequest();
    GetPublisherDataRequest(const GetPublisherDataRequest& src);
    GetPublisherDataRequest(GetPublisherDataRequest&& src);
    GetPublisherDataRequest(const PlayFabClientGetPublisherDataRequest& src);
    GetPublisherDataRequest& operator=(const GetPublisherDataRequest&) = delete;
    ~GetPublisherDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_keys;
};

struct GetPublisherDataResult : public PlayFabClientGetPublisherDataResult, public BaseModel, public ApiResult
{
    GetPublisherDataResult();
    GetPublisherDataResult(const GetPublisherDataResult& src);
    GetPublisherDataResult(GetPublisherDataResult&& src);
    GetPublisherDataResult(const PlayFabClientGetPublisherDataResult& src);
    GetPublisherDataResult& operator=(const GetPublisherDataResult&) = delete;
    ~GetPublisherDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
};

struct GetPurchaseRequest : public PlayFabClientGetPurchaseRequest, public SerializableModel
{
    GetPurchaseRequest();
    GetPurchaseRequest(const GetPurchaseRequest& src);
    GetPurchaseRequest(GetPurchaseRequest&& src);
    GetPurchaseRequest(const PlayFabClientGetPurchaseRequest& src);
    GetPurchaseRequest& operator=(const GetPurchaseRequest&) = delete;
    ~GetPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_orderId;
};

struct GetPurchaseResult : public PlayFabClientGetPurchaseResult, public SerializableModel, public ApiResult
{
    GetPurchaseResult();
    GetPurchaseResult(const GetPurchaseResult& src);
    GetPurchaseResult(GetPurchaseResult&& src);
    GetPurchaseResult(const PlayFabClientGetPurchaseResult& src);
    GetPurchaseResult& operator=(const GetPurchaseResult&) = delete;
    ~GetPurchaseResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_orderId;
    String m_paymentProvider;
    String m_transactionId;
    String m_transactionStatus;
};

struct GetSharedGroupDataRequest : public PlayFabClientGetSharedGroupDataRequest, public BaseModel
{
    GetSharedGroupDataRequest();
    GetSharedGroupDataRequest(const GetSharedGroupDataRequest& src);
    GetSharedGroupDataRequest(GetSharedGroupDataRequest&& src);
    GetSharedGroupDataRequest(const PlayFabClientGetSharedGroupDataRequest& src);
    GetSharedGroupDataRequest& operator=(const GetSharedGroupDataRequest&) = delete;
    ~GetSharedGroupDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_getMembers;
    PointerArrayModel<char, String> m_keys;
    String m_sharedGroupId;
};

struct SharedGroupDataRecord : public PlayFabClientSharedGroupDataRecord, public BaseModel
{
    SharedGroupDataRecord();
    SharedGroupDataRecord(const SharedGroupDataRecord& src);
    SharedGroupDataRecord(SharedGroupDataRecord&& src);
    SharedGroupDataRecord(const PlayFabClientSharedGroupDataRecord& src);
    SharedGroupDataRecord& operator=(const SharedGroupDataRecord&) = delete;
    ~SharedGroupDataRecord() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_lastUpdatedBy;
    StdExtra::optional<PlayFabUserDataPermission> m_permission;
    String m_value;
};

struct GetSharedGroupDataResult : public PlayFabClientGetSharedGroupDataResult, public BaseModel, public ApiResult
{
    GetSharedGroupDataResult();
    GetSharedGroupDataResult(const GetSharedGroupDataResult& src);
    GetSharedGroupDataResult(GetSharedGroupDataResult&& src);
    GetSharedGroupDataResult(const PlayFabClientGetSharedGroupDataResult& src);
    GetSharedGroupDataResult& operator=(const GetSharedGroupDataResult&) = delete;
    ~GetSharedGroupDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabClientSharedGroupDataRecordDictionaryEntry, SharedGroupDataRecord> m_data;
    PointerArrayModel<char, String> m_members;
};

struct GetStoreItemsRequest : public PlayFabClientGetStoreItemsRequest, public SerializableModel
{
    GetStoreItemsRequest();
    GetStoreItemsRequest(const GetStoreItemsRequest& src);
    GetStoreItemsRequest(GetStoreItemsRequest&& src);
    GetStoreItemsRequest(const PlayFabClientGetStoreItemsRequest& src);
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

struct StoreMarketingModel : public PlayFabClientStoreMarketingModel, public BaseModel
{
    StoreMarketingModel();
    StoreMarketingModel(const StoreMarketingModel& src);
    StoreMarketingModel(StoreMarketingModel&& src);
    StoreMarketingModel(const PlayFabClientStoreMarketingModel& src);
    StoreMarketingModel& operator=(const StoreMarketingModel&) = delete;
    ~StoreMarketingModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    String m_displayName;
    JsonObject m_metadata;
};

struct StoreItem : public PlayFabClientStoreItem, public BaseModel
{
    StoreItem();
    StoreItem(const StoreItem& src);
    StoreItem(StoreItem&& src);
    StoreItem(const PlayFabClientStoreItem& src);
    StoreItem& operator=(const StoreItem&) = delete;
    ~StoreItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_customData;
    StdExtra::optional<uint32_t> m_displayPosition;
    String m_itemId;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
};

struct GetStoreItemsResult : public PlayFabClientGetStoreItemsResult, public BaseModel, public ApiResult
{
    GetStoreItemsResult();
    GetStoreItemsResult(const GetStoreItemsResult& src);
    GetStoreItemsResult(GetStoreItemsResult&& src);
    GetStoreItemsResult(const PlayFabClientGetStoreItemsResult& src);
    GetStoreItemsResult& operator=(const GetStoreItemsResult&) = delete;
    ~GetStoreItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    StdExtra::optional<StoreMarketingModel> m_marketingData;
    StdExtra::optional<PlayFabClientSourceType> m_source;
    PointerArrayModel<PlayFabClientStoreItem, StoreItem> m_store;
    String m_storeId;
};

struct GetTimeResult : public PlayFabClientGetTimeResult, public SerializableModel, public ApiResult
{
    GetTimeResult();
    GetTimeResult(const GetTimeResult&) = default;
    GetTimeResult(GetTimeResult&&) = default;
    GetTimeResult(const PlayFabClientGetTimeResult& src);
    GetTimeResult& operator=(const GetTimeResult&) = delete;
    ~GetTimeResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GetTitleDataRequest : public PlayFabClientGetTitleDataRequest, public BaseModel
{
    GetTitleDataRequest();
    GetTitleDataRequest(const GetTitleDataRequest& src);
    GetTitleDataRequest(GetTitleDataRequest&& src);
    GetTitleDataRequest(const PlayFabClientGetTitleDataRequest& src);
    GetTitleDataRequest& operator=(const GetTitleDataRequest&) = delete;
    ~GetTitleDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_keys;
    String m_overrideLabel;
};

struct GetTitleDataResult : public PlayFabClientGetTitleDataResult, public BaseModel, public ApiResult
{
    GetTitleDataResult();
    GetTitleDataResult(const GetTitleDataResult& src);
    GetTitleDataResult(GetTitleDataResult&& src);
    GetTitleDataResult(const PlayFabClientGetTitleDataResult& src);
    GetTitleDataResult& operator=(const GetTitleDataResult&) = delete;
    ~GetTitleDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
};

struct GetTitleNewsRequest : public PlayFabClientGetTitleNewsRequest, public BaseModel
{
    GetTitleNewsRequest();
    GetTitleNewsRequest(const GetTitleNewsRequest& src);
    GetTitleNewsRequest(GetTitleNewsRequest&& src);
    GetTitleNewsRequest(const PlayFabClientGetTitleNewsRequest& src);
    GetTitleNewsRequest& operator=(const GetTitleNewsRequest&) = delete;
    ~GetTitleNewsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<int32_t> m_count;
};

struct TitleNewsItem : public PlayFabClientTitleNewsItem, public SerializableModel
{
    TitleNewsItem();
    TitleNewsItem(const TitleNewsItem& src);
    TitleNewsItem(TitleNewsItem&& src);
    TitleNewsItem(const PlayFabClientTitleNewsItem& src);
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

struct GetTitleNewsResult : public PlayFabClientGetTitleNewsResult, public BaseModel, public ApiResult
{
    GetTitleNewsResult();
    GetTitleNewsResult(const GetTitleNewsResult& src);
    GetTitleNewsResult(GetTitleNewsResult&& src);
    GetTitleNewsResult(const PlayFabClientGetTitleNewsResult& src);
    GetTitleNewsResult& operator=(const GetTitleNewsResult&) = delete;
    ~GetTitleNewsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientTitleNewsItem, TitleNewsItem> m_news;
};

struct GetTitlePublicKeyRequest : public PlayFabClientGetTitlePublicKeyRequest, public SerializableModel
{
    GetTitlePublicKeyRequest();
    GetTitlePublicKeyRequest(const GetTitlePublicKeyRequest& src);
    GetTitlePublicKeyRequest(GetTitlePublicKeyRequest&& src);
    GetTitlePublicKeyRequest(const PlayFabClientGetTitlePublicKeyRequest& src);
    GetTitlePublicKeyRequest& operator=(const GetTitlePublicKeyRequest&) = delete;
    ~GetTitlePublicKeyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_titleId;
    String m_titleSharedSecret;
};

struct GetTitlePublicKeyResult : public PlayFabClientGetTitlePublicKeyResult, public SerializableModel, public ApiResult
{
    GetTitlePublicKeyResult();
    GetTitlePublicKeyResult(const GetTitlePublicKeyResult& src);
    GetTitlePublicKeyResult(GetTitlePublicKeyResult&& src);
    GetTitlePublicKeyResult(const PlayFabClientGetTitlePublicKeyResult& src);
    GetTitlePublicKeyResult& operator=(const GetTitlePublicKeyResult&) = delete;
    ~GetTitlePublicKeyResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_rSAPublicKey;
};

struct GetTradeStatusRequest : public PlayFabClientGetTradeStatusRequest, public SerializableModel
{
    GetTradeStatusRequest();
    GetTradeStatusRequest(const GetTradeStatusRequest& src);
    GetTradeStatusRequest(GetTradeStatusRequest&& src);
    GetTradeStatusRequest(const PlayFabClientGetTradeStatusRequest& src);
    GetTradeStatusRequest& operator=(const GetTradeStatusRequest&) = delete;
    ~GetTradeStatusRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_offeringPlayerId;
    String m_tradeId;
};

struct GetTradeStatusResponse : public PlayFabClientGetTradeStatusResponse, public BaseModel, public ApiResult
{
    GetTradeStatusResponse();
    GetTradeStatusResponse(const GetTradeStatusResponse& src);
    GetTradeStatusResponse(GetTradeStatusResponse&& src);
    GetTradeStatusResponse(const PlayFabClientGetTradeStatusResponse& src);
    GetTradeStatusResponse& operator=(const GetTradeStatusResponse&) = delete;
    ~GetTradeStatusResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TradeInfo> m_trade;
};

struct GetUserDataRequest : public PlayFabClientGetUserDataRequest, public BaseModel
{
    GetUserDataRequest();
    GetUserDataRequest(const GetUserDataRequest& src);
    GetUserDataRequest(GetUserDataRequest&& src);
    GetUserDataRequest(const PlayFabClientGetUserDataRequest& src);
    GetUserDataRequest& operator=(const GetUserDataRequest&) = delete;
    ~GetUserDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
    PointerArrayModel<char, String> m_keys;
    String m_playFabId;
};

struct GetUserDataResult : public PlayFabClientGetUserDataResult, public BaseModel, public ApiResult
{
    GetUserDataResult();
    GetUserDataResult(const GetUserDataResult& src);
    GetUserDataResult(GetUserDataResult&& src);
    GetUserDataResult(const PlayFabClientGetUserDataResult& src);
    GetUserDataResult& operator=(const GetUserDataResult&) = delete;
    ~GetUserDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabUserDataRecordDictionaryEntry, UserDataRecord> m_data;
};

struct GetUserInventoryRequest : public PlayFabClientGetUserInventoryRequest, public BaseModel
{
    GetUserInventoryRequest();
    GetUserInventoryRequest(const GetUserInventoryRequest& src);
    GetUserInventoryRequest(GetUserInventoryRequest&& src);
    GetUserInventoryRequest(const PlayFabClientGetUserInventoryRequest& src);
    GetUserInventoryRequest& operator=(const GetUserInventoryRequest&) = delete;
    ~GetUserInventoryRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct GetUserInventoryResult : public PlayFabClientGetUserInventoryResult, public BaseModel, public ApiResult
{
    GetUserInventoryResult();
    GetUserInventoryResult(const GetUserInventoryResult& src);
    GetUserInventoryResult(GetUserInventoryResult&& src);
    GetUserInventoryResult(const PlayFabClientGetUserInventoryResult& src);
    GetUserInventoryResult& operator=(const GetUserInventoryResult&) = delete;
    ~GetUserInventoryResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_inventory;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PlayFabVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct GrantCharacterToUserRequest : public PlayFabClientGrantCharacterToUserRequest, public BaseModel
{
    GrantCharacterToUserRequest();
    GrantCharacterToUserRequest(const GrantCharacterToUserRequest& src);
    GrantCharacterToUserRequest(GrantCharacterToUserRequest&& src);
    GrantCharacterToUserRequest(const PlayFabClientGrantCharacterToUserRequest& src);
    GrantCharacterToUserRequest& operator=(const GrantCharacterToUserRequest&) = delete;
    ~GrantCharacterToUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterName;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_itemId;
};

struct GrantCharacterToUserResult : public PlayFabClientGrantCharacterToUserResult, public SerializableModel, public ApiResult
{
    GrantCharacterToUserResult();
    GrantCharacterToUserResult(const GrantCharacterToUserResult& src);
    GrantCharacterToUserResult(GrantCharacterToUserResult&& src);
    GrantCharacterToUserResult(const PlayFabClientGrantCharacterToUserResult& src);
    GrantCharacterToUserResult& operator=(const GrantCharacterToUserResult&) = delete;
    ~GrantCharacterToUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_characterType;
};

struct ItemPurchaseRequest : public PlayFabClientItemPurchaseRequest, public BaseModel
{
    ItemPurchaseRequest();
    ItemPurchaseRequest(const ItemPurchaseRequest& src);
    ItemPurchaseRequest(ItemPurchaseRequest&& src);
    ItemPurchaseRequest(const PlayFabClientItemPurchaseRequest& src);
    ItemPurchaseRequest& operator=(const ItemPurchaseRequest&) = delete;
    ~ItemPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    String m_itemId;
    PointerArrayModel<char, String> m_upgradeFromItems;
};

struct LinkAndroidDeviceIDRequest : public PlayFabClientLinkAndroidDeviceIDRequest, public BaseModel
{
    LinkAndroidDeviceIDRequest();
    LinkAndroidDeviceIDRequest(const LinkAndroidDeviceIDRequest& src);
    LinkAndroidDeviceIDRequest(LinkAndroidDeviceIDRequest&& src);
    LinkAndroidDeviceIDRequest(const PlayFabClientLinkAndroidDeviceIDRequest& src);
    LinkAndroidDeviceIDRequest& operator=(const LinkAndroidDeviceIDRequest&) = delete;
    ~LinkAndroidDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_androidDevice;
    String m_androidDeviceId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_OS;
};

struct LinkAppleRequest : public PlayFabClientLinkAppleRequest, public BaseModel
{
    LinkAppleRequest();
    LinkAppleRequest(const LinkAppleRequest& src);
    LinkAppleRequest(LinkAppleRequest&& src);
    LinkAppleRequest(const PlayFabClientLinkAppleRequest& src);
    LinkAppleRequest& operator=(const LinkAppleRequest&) = delete;
    ~LinkAppleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_identityToken;
};

struct LinkCustomIDRequest : public PlayFabClientLinkCustomIDRequest, public BaseModel
{
    LinkCustomIDRequest();
    LinkCustomIDRequest(const LinkCustomIDRequest& src);
    LinkCustomIDRequest(LinkCustomIDRequest&& src);
    LinkCustomIDRequest(const PlayFabClientLinkCustomIDRequest& src);
    LinkCustomIDRequest& operator=(const LinkCustomIDRequest&) = delete;
    ~LinkCustomIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_customId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
};

struct LinkFacebookAccountRequest : public PlayFabClientLinkFacebookAccountRequest, public BaseModel
{
    LinkFacebookAccountRequest();
    LinkFacebookAccountRequest(const LinkFacebookAccountRequest& src);
    LinkFacebookAccountRequest(LinkFacebookAccountRequest&& src);
    LinkFacebookAccountRequest(const PlayFabClientLinkFacebookAccountRequest& src);
    LinkFacebookAccountRequest& operator=(const LinkFacebookAccountRequest&) = delete;
    ~LinkFacebookAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_accessToken;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
};

struct LinkFacebookInstantGamesIdRequest : public PlayFabClientLinkFacebookInstantGamesIdRequest, public BaseModel
{
    LinkFacebookInstantGamesIdRequest();
    LinkFacebookInstantGamesIdRequest(const LinkFacebookInstantGamesIdRequest& src);
    LinkFacebookInstantGamesIdRequest(LinkFacebookInstantGamesIdRequest&& src);
    LinkFacebookInstantGamesIdRequest(const PlayFabClientLinkFacebookInstantGamesIdRequest& src);
    LinkFacebookInstantGamesIdRequest& operator=(const LinkFacebookInstantGamesIdRequest&) = delete;
    ~LinkFacebookInstantGamesIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_facebookInstantGamesSignature;
    StdExtra::optional<bool> m_forceLink;
};

struct LinkGameCenterAccountRequest : public PlayFabClientLinkGameCenterAccountRequest, public BaseModel
{
    LinkGameCenterAccountRequest();
    LinkGameCenterAccountRequest(const LinkGameCenterAccountRequest& src);
    LinkGameCenterAccountRequest(LinkGameCenterAccountRequest&& src);
    LinkGameCenterAccountRequest(const PlayFabClientLinkGameCenterAccountRequest& src);
    LinkGameCenterAccountRequest& operator=(const LinkGameCenterAccountRequest&) = delete;
    ~LinkGameCenterAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_gameCenterId;
    String m_publicKeyUrl;
    String m_salt;
    String m_signature;
    String m_timestamp;
};

struct LinkGoogleAccountRequest : public PlayFabClientLinkGoogleAccountRequest, public BaseModel
{
    LinkGoogleAccountRequest();
    LinkGoogleAccountRequest(const LinkGoogleAccountRequest& src);
    LinkGoogleAccountRequest(LinkGoogleAccountRequest&& src);
    LinkGoogleAccountRequest(const PlayFabClientLinkGoogleAccountRequest& src);
    LinkGoogleAccountRequest& operator=(const LinkGoogleAccountRequest&) = delete;
    ~LinkGoogleAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_serverAuthCode;
};

struct LinkIOSDeviceIDRequest : public PlayFabClientLinkIOSDeviceIDRequest, public BaseModel
{
    LinkIOSDeviceIDRequest();
    LinkIOSDeviceIDRequest(const LinkIOSDeviceIDRequest& src);
    LinkIOSDeviceIDRequest(LinkIOSDeviceIDRequest&& src);
    LinkIOSDeviceIDRequest(const PlayFabClientLinkIOSDeviceIDRequest& src);
    LinkIOSDeviceIDRequest& operator=(const LinkIOSDeviceIDRequest&) = delete;
    ~LinkIOSDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_deviceId;
    String m_deviceModel;
    StdExtra::optional<bool> m_forceLink;
    String m_OS;
};

struct LinkKongregateAccountRequest : public PlayFabClientLinkKongregateAccountRequest, public BaseModel
{
    LinkKongregateAccountRequest();
    LinkKongregateAccountRequest(const LinkKongregateAccountRequest& src);
    LinkKongregateAccountRequest(LinkKongregateAccountRequest&& src);
    LinkKongregateAccountRequest(const PlayFabClientLinkKongregateAccountRequest& src);
    LinkKongregateAccountRequest& operator=(const LinkKongregateAccountRequest&) = delete;
    ~LinkKongregateAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authTicket;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_kongregateId;
};

struct LinkNintendoServiceAccountRequest : public PlayFabClientLinkNintendoServiceAccountRequest, public BaseModel
{
    LinkNintendoServiceAccountRequest();
    LinkNintendoServiceAccountRequest(const LinkNintendoServiceAccountRequest& src);
    LinkNintendoServiceAccountRequest(LinkNintendoServiceAccountRequest&& src);
    LinkNintendoServiceAccountRequest(const PlayFabClientLinkNintendoServiceAccountRequest& src);
    LinkNintendoServiceAccountRequest& operator=(const LinkNintendoServiceAccountRequest&) = delete;
    ~LinkNintendoServiceAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_identityToken;
};

struct LinkNintendoSwitchDeviceIdRequest : public PlayFabClientLinkNintendoSwitchDeviceIdRequest, public BaseModel
{
    LinkNintendoSwitchDeviceIdRequest();
    LinkNintendoSwitchDeviceIdRequest(const LinkNintendoSwitchDeviceIdRequest& src);
    LinkNintendoSwitchDeviceIdRequest(LinkNintendoSwitchDeviceIdRequest&& src);
    LinkNintendoSwitchDeviceIdRequest(const PlayFabClientLinkNintendoSwitchDeviceIdRequest& src);
    LinkNintendoSwitchDeviceIdRequest& operator=(const LinkNintendoSwitchDeviceIdRequest&) = delete;
    ~LinkNintendoSwitchDeviceIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_nintendoSwitchDeviceId;
};

struct LinkOpenIdConnectRequest : public PlayFabClientLinkOpenIdConnectRequest, public BaseModel
{
    LinkOpenIdConnectRequest();
    LinkOpenIdConnectRequest(const LinkOpenIdConnectRequest& src);
    LinkOpenIdConnectRequest(LinkOpenIdConnectRequest&& src);
    LinkOpenIdConnectRequest(const PlayFabClientLinkOpenIdConnectRequest& src);
    LinkOpenIdConnectRequest& operator=(const LinkOpenIdConnectRequest&) = delete;
    ~LinkOpenIdConnectRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_connectionId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_idToken;
};

struct LinkPSNAccountRequest : public PlayFabClientLinkPSNAccountRequest, public BaseModel
{
    LinkPSNAccountRequest();
    LinkPSNAccountRequest(const LinkPSNAccountRequest& src);
    LinkPSNAccountRequest(LinkPSNAccountRequest&& src);
    LinkPSNAccountRequest(const PlayFabClientLinkPSNAccountRequest& src);
    LinkPSNAccountRequest& operator=(const LinkPSNAccountRequest&) = delete;
    ~LinkPSNAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authCode;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    StdExtra::optional<int32_t> m_issuerId;
    String m_redirectUri;
};

struct LinkSteamAccountRequest : public PlayFabClientLinkSteamAccountRequest, public BaseModel
{
    LinkSteamAccountRequest();
    LinkSteamAccountRequest(const LinkSteamAccountRequest& src);
    LinkSteamAccountRequest(LinkSteamAccountRequest&& src);
    LinkSteamAccountRequest(const PlayFabClientLinkSteamAccountRequest& src);
    LinkSteamAccountRequest& operator=(const LinkSteamAccountRequest&) = delete;
    ~LinkSteamAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_steamTicket;
};

struct LinkTwitchAccountRequest : public PlayFabClientLinkTwitchAccountRequest, public BaseModel
{
    LinkTwitchAccountRequest();
    LinkTwitchAccountRequest(const LinkTwitchAccountRequest& src);
    LinkTwitchAccountRequest(LinkTwitchAccountRequest&& src);
    LinkTwitchAccountRequest(const PlayFabClientLinkTwitchAccountRequest& src);
    LinkTwitchAccountRequest& operator=(const LinkTwitchAccountRequest&) = delete;
    ~LinkTwitchAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_accessToken;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
};

struct LinkXboxAccountRequest : public PlayFabClientLinkXboxAccountRequest, public BaseModel
{
    LinkXboxAccountRequest();
    LinkXboxAccountRequest(const LinkXboxAccountRequest& src);
    LinkXboxAccountRequest(LinkXboxAccountRequest&& src);
    LinkXboxAccountRequest(const PlayFabClientLinkXboxAccountRequest& src);
    LinkXboxAccountRequest& operator=(const LinkXboxAccountRequest&) = delete;
    ~LinkXboxAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceLink;
    String m_xboxToken;
};

struct ListUsersCharactersRequest : public PlayFabClientListUsersCharactersRequest, public SerializableModel
{
    ListUsersCharactersRequest();
    ListUsersCharactersRequest(const ListUsersCharactersRequest& src);
    ListUsersCharactersRequest(ListUsersCharactersRequest&& src);
    ListUsersCharactersRequest(const PlayFabClientListUsersCharactersRequest& src);
    ListUsersCharactersRequest& operator=(const ListUsersCharactersRequest&) = delete;
    ~ListUsersCharactersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct ListUsersCharactersResult : public PlayFabClientListUsersCharactersResult, public BaseModel, public ApiResult
{
    ListUsersCharactersResult();
    ListUsersCharactersResult(const ListUsersCharactersResult& src);
    ListUsersCharactersResult(ListUsersCharactersResult&& src);
    ListUsersCharactersResult(const PlayFabClientListUsersCharactersResult& src);
    ListUsersCharactersResult& operator=(const ListUsersCharactersResult&) = delete;
    ~ListUsersCharactersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabCharacterResult, CharacterResult> m_characters;
};

struct LoginWithAndroidDeviceIDRequest : public PlayFabClientLoginWithAndroidDeviceIDRequest, public BaseModel
{
    LoginWithAndroidDeviceIDRequest();
    LoginWithAndroidDeviceIDRequest(const LoginWithAndroidDeviceIDRequest& src);
    LoginWithAndroidDeviceIDRequest(LoginWithAndroidDeviceIDRequest&& src);
    LoginWithAndroidDeviceIDRequest(const PlayFabClientLoginWithAndroidDeviceIDRequest& src);
    LoginWithAndroidDeviceIDRequest& operator=(const LoginWithAndroidDeviceIDRequest&) = delete;
    ~LoginWithAndroidDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_androidDevice;
    String m_androidDeviceId;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_OS;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithAppleRequest : public PlayFabClientLoginWithAppleRequest, public BaseModel
{
    LoginWithAppleRequest();
    LoginWithAppleRequest(const LoginWithAppleRequest& src);
    LoginWithAppleRequest(LoginWithAppleRequest&& src);
    LoginWithAppleRequest(const PlayFabClientLoginWithAppleRequest& src);
    LoginWithAppleRequest& operator=(const LoginWithAppleRequest&) = delete;
    ~LoginWithAppleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    String m_identityToken;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithCustomIDRequest : public PlayFabClientLoginWithCustomIDRequest, public BaseModel
{
    LoginWithCustomIDRequest();
    LoginWithCustomIDRequest(const LoginWithCustomIDRequest& src);
    LoginWithCustomIDRequest(LoginWithCustomIDRequest&& src);
    LoginWithCustomIDRequest(const PlayFabClientLoginWithCustomIDRequest& src);
    LoginWithCustomIDRequest& operator=(const LoginWithCustomIDRequest&) = delete;
    ~LoginWithCustomIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    String m_customId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithEmailAddressRequest : public PlayFabClientLoginWithEmailAddressRequest, public BaseModel
{
    LoginWithEmailAddressRequest();
    LoginWithEmailAddressRequest(const LoginWithEmailAddressRequest& src);
    LoginWithEmailAddressRequest(LoginWithEmailAddressRequest&& src);
    LoginWithEmailAddressRequest(const PlayFabClientLoginWithEmailAddressRequest& src);
    LoginWithEmailAddressRequest& operator=(const LoginWithEmailAddressRequest&) = delete;
    ~LoginWithEmailAddressRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_email;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_password;
    String m_titleId;
};

struct LoginWithFacebookInstantGamesIdRequest : public PlayFabClientLoginWithFacebookInstantGamesIdRequest, public BaseModel
{
    LoginWithFacebookInstantGamesIdRequest();
    LoginWithFacebookInstantGamesIdRequest(const LoginWithFacebookInstantGamesIdRequest& src);
    LoginWithFacebookInstantGamesIdRequest(LoginWithFacebookInstantGamesIdRequest&& src);
    LoginWithFacebookInstantGamesIdRequest(const PlayFabClientLoginWithFacebookInstantGamesIdRequest& src);
    LoginWithFacebookInstantGamesIdRequest& operator=(const LoginWithFacebookInstantGamesIdRequest&) = delete;
    ~LoginWithFacebookInstantGamesIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    String m_facebookInstantGamesSignature;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithFacebookRequest : public PlayFabClientLoginWithFacebookRequest, public BaseModel
{
    LoginWithFacebookRequest();
    LoginWithFacebookRequest(const LoginWithFacebookRequest& src);
    LoginWithFacebookRequest(LoginWithFacebookRequest&& src);
    LoginWithFacebookRequest(const PlayFabClientLoginWithFacebookRequest& src);
    LoginWithFacebookRequest& operator=(const LoginWithFacebookRequest&) = delete;
    ~LoginWithFacebookRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_accessToken;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithGameCenterRequest : public PlayFabClientLoginWithGameCenterRequest, public BaseModel
{
    LoginWithGameCenterRequest();
    LoginWithGameCenterRequest(const LoginWithGameCenterRequest& src);
    LoginWithGameCenterRequest(LoginWithGameCenterRequest&& src);
    LoginWithGameCenterRequest(const PlayFabClientLoginWithGameCenterRequest& src);
    LoginWithGameCenterRequest& operator=(const LoginWithGameCenterRequest&) = delete;
    ~LoginWithGameCenterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerId;
    String m_playerSecret;
    String m_publicKeyUrl;
    String m_salt;
    String m_signature;
    String m_timestamp;
    String m_titleId;
};

struct LoginWithGoogleAccountRequest : public PlayFabClientLoginWithGoogleAccountRequest, public BaseModel
{
    LoginWithGoogleAccountRequest();
    LoginWithGoogleAccountRequest(const LoginWithGoogleAccountRequest& src);
    LoginWithGoogleAccountRequest(LoginWithGoogleAccountRequest&& src);
    LoginWithGoogleAccountRequest(const PlayFabClientLoginWithGoogleAccountRequest& src);
    LoginWithGoogleAccountRequest& operator=(const LoginWithGoogleAccountRequest&) = delete;
    ~LoginWithGoogleAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_serverAuthCode;
    String m_titleId;
};

struct LoginWithIOSDeviceIDRequest : public PlayFabClientLoginWithIOSDeviceIDRequest, public BaseModel
{
    LoginWithIOSDeviceIDRequest();
    LoginWithIOSDeviceIDRequest(const LoginWithIOSDeviceIDRequest& src);
    LoginWithIOSDeviceIDRequest(LoginWithIOSDeviceIDRequest&& src);
    LoginWithIOSDeviceIDRequest(const PlayFabClientLoginWithIOSDeviceIDRequest& src);
    LoginWithIOSDeviceIDRequest& operator=(const LoginWithIOSDeviceIDRequest&) = delete;
    ~LoginWithIOSDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_deviceId;
    String m_deviceModel;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_OS;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithKongregateRequest : public PlayFabClientLoginWithKongregateRequest, public BaseModel
{
    LoginWithKongregateRequest();
    LoginWithKongregateRequest(const LoginWithKongregateRequest& src);
    LoginWithKongregateRequest(LoginWithKongregateRequest&& src);
    LoginWithKongregateRequest(const PlayFabClientLoginWithKongregateRequest& src);
    LoginWithKongregateRequest& operator=(const LoginWithKongregateRequest&) = delete;
    ~LoginWithKongregateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authTicket;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_kongregateId;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithNintendoServiceAccountRequest : public PlayFabClientLoginWithNintendoServiceAccountRequest, public BaseModel
{
    LoginWithNintendoServiceAccountRequest();
    LoginWithNintendoServiceAccountRequest(const LoginWithNintendoServiceAccountRequest& src);
    LoginWithNintendoServiceAccountRequest(LoginWithNintendoServiceAccountRequest&& src);
    LoginWithNintendoServiceAccountRequest(const PlayFabClientLoginWithNintendoServiceAccountRequest& src);
    LoginWithNintendoServiceAccountRequest& operator=(const LoginWithNintendoServiceAccountRequest&) = delete;
    ~LoginWithNintendoServiceAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    String m_identityToken;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithNintendoSwitchDeviceIdRequest : public PlayFabClientLoginWithNintendoSwitchDeviceIdRequest, public BaseModel
{
    LoginWithNintendoSwitchDeviceIdRequest();
    LoginWithNintendoSwitchDeviceIdRequest(const LoginWithNintendoSwitchDeviceIdRequest& src);
    LoginWithNintendoSwitchDeviceIdRequest(LoginWithNintendoSwitchDeviceIdRequest&& src);
    LoginWithNintendoSwitchDeviceIdRequest(const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& src);
    LoginWithNintendoSwitchDeviceIdRequest& operator=(const LoginWithNintendoSwitchDeviceIdRequest&) = delete;
    ~LoginWithNintendoSwitchDeviceIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_nintendoSwitchDeviceId;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithOpenIdConnectRequest : public PlayFabClientLoginWithOpenIdConnectRequest, public BaseModel
{
    LoginWithOpenIdConnectRequest();
    LoginWithOpenIdConnectRequest(const LoginWithOpenIdConnectRequest& src);
    LoginWithOpenIdConnectRequest(LoginWithOpenIdConnectRequest&& src);
    LoginWithOpenIdConnectRequest(const PlayFabClientLoginWithOpenIdConnectRequest& src);
    LoginWithOpenIdConnectRequest& operator=(const LoginWithOpenIdConnectRequest&) = delete;
    ~LoginWithOpenIdConnectRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_connectionId;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    String m_idToken;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithPlayFabRequest : public PlayFabClientLoginWithPlayFabRequest, public BaseModel
{
    LoginWithPlayFabRequest();
    LoginWithPlayFabRequest(const LoginWithPlayFabRequest& src);
    LoginWithPlayFabRequest(LoginWithPlayFabRequest&& src);
    LoginWithPlayFabRequest(const PlayFabClientLoginWithPlayFabRequest& src);
    LoginWithPlayFabRequest& operator=(const LoginWithPlayFabRequest&) = delete;
    ~LoginWithPlayFabRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_password;
    String m_titleId;
    String m_username;
};

struct LoginWithPSNRequest : public PlayFabClientLoginWithPSNRequest, public BaseModel
{
    LoginWithPSNRequest();
    LoginWithPSNRequest(const LoginWithPSNRequest& src);
    LoginWithPSNRequest(LoginWithPSNRequest&& src);
    LoginWithPSNRequest(const PlayFabClientLoginWithPSNRequest& src);
    LoginWithPSNRequest& operator=(const LoginWithPSNRequest&) = delete;
    ~LoginWithPSNRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authCode;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    StdExtra::optional<int32_t> m_issuerId;
    String m_playerSecret;
    String m_redirectUri;
    String m_titleId;
};

struct LoginWithSteamRequest : public PlayFabClientLoginWithSteamRequest, public BaseModel
{
    LoginWithSteamRequest();
    LoginWithSteamRequest(const LoginWithSteamRequest& src);
    LoginWithSteamRequest(LoginWithSteamRequest&& src);
    LoginWithSteamRequest(const PlayFabClientLoginWithSteamRequest& src);
    LoginWithSteamRequest& operator=(const LoginWithSteamRequest&) = delete;
    ~LoginWithSteamRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_steamTicket;
    String m_titleId;
};

struct LoginWithTwitchRequest : public PlayFabClientLoginWithTwitchRequest, public BaseModel
{
    LoginWithTwitchRequest();
    LoginWithTwitchRequest(const LoginWithTwitchRequest& src);
    LoginWithTwitchRequest(LoginWithTwitchRequest&& src);
    LoginWithTwitchRequest(const PlayFabClientLoginWithTwitchRequest& src);
    LoginWithTwitchRequest& operator=(const LoginWithTwitchRequest&) = delete;
    ~LoginWithTwitchRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_accessToken;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithXboxRequest : public PlayFabClientLoginWithXboxRequest, public BaseModel
{
    LoginWithXboxRequest();
    LoginWithXboxRequest(const LoginWithXboxRequest& src);
    LoginWithXboxRequest(LoginWithXboxRequest&& src);
    LoginWithXboxRequest(const PlayFabClientLoginWithXboxRequest& src);
    LoginWithXboxRequest& operator=(const LoginWithXboxRequest&) = delete;
    ~LoginWithXboxRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
    String m_xboxToken;
};

struct MatchmakeRequest : public PlayFabClientMatchmakeRequest, public BaseModel
{
    MatchmakeRequest();
    MatchmakeRequest(const MatchmakeRequest& src);
    MatchmakeRequest(MatchmakeRequest&& src);
    MatchmakeRequest(const PlayFabClientMatchmakeRequest& src);
    MatchmakeRequest& operator=(const MatchmakeRequest&) = delete;
    ~MatchmakeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_gameMode;
    String m_lobbyId;
    StdExtra::optional<PlayFabClientRegion> m_region;
    StdExtra::optional<bool> m_startNewIfNoneFound;
    String m_statisticName;
    StdExtra::optional<CollectionFilter> m_tagFilter;
};

struct MatchmakeResult : public PlayFabClientMatchmakeResult, public BaseModel, public ApiResult
{
    MatchmakeResult();
    MatchmakeResult(const MatchmakeResult& src);
    MatchmakeResult(MatchmakeResult&& src);
    MatchmakeResult(const PlayFabClientMatchmakeResult& src);
    MatchmakeResult& operator=(const MatchmakeResult&) = delete;
    ~MatchmakeResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_expires;
    String m_lobbyID;
    StdExtra::optional<int32_t> m_pollWaitTimeMS;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    StdExtra::optional<int32_t> m_serverPort;
    String m_serverPublicDNSName;
    StdExtra::optional<PlayFabClientMatchmakeStatus> m_status;
    String m_ticket;
};

struct ModifyUserVirtualCurrencyResult : public PlayFabClientModifyUserVirtualCurrencyResult, public SerializableModel, public ApiResult
{
    ModifyUserVirtualCurrencyResult();
    ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src);
    ModifyUserVirtualCurrencyResult(ModifyUserVirtualCurrencyResult&& src);
    ModifyUserVirtualCurrencyResult(const PlayFabClientModifyUserVirtualCurrencyResult& src);
    ModifyUserVirtualCurrencyResult& operator=(const ModifyUserVirtualCurrencyResult&) = delete;
    ~ModifyUserVirtualCurrencyResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_virtualCurrency;
};

struct OpenTradeRequest : public PlayFabClientOpenTradeRequest, public BaseModel
{
    OpenTradeRequest();
    OpenTradeRequest(const OpenTradeRequest& src);
    OpenTradeRequest(OpenTradeRequest&& src);
    OpenTradeRequest(const PlayFabClientOpenTradeRequest& src);
    OpenTradeRequest& operator=(const OpenTradeRequest&) = delete;
    ~OpenTradeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_allowedPlayerIds;
    PointerArrayModel<char, String> m_offeredInventoryInstanceIds;
    PointerArrayModel<char, String> m_requestedCatalogItemIds;
};

struct OpenTradeResponse : public PlayFabClientOpenTradeResponse, public BaseModel, public ApiResult
{
    OpenTradeResponse();
    OpenTradeResponse(const OpenTradeResponse& src);
    OpenTradeResponse(OpenTradeResponse&& src);
    OpenTradeResponse(const PlayFabClientOpenTradeResponse& src);
    OpenTradeResponse& operator=(const OpenTradeResponse&) = delete;
    ~OpenTradeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TradeInfo> m_trade;
};

struct PayForPurchaseRequest : public PlayFabClientPayForPurchaseRequest, public BaseModel
{
    PayForPurchaseRequest();
    PayForPurchaseRequest(const PayForPurchaseRequest& src);
    PayForPurchaseRequest(PayForPurchaseRequest&& src);
    PayForPurchaseRequest(const PlayFabClientPayForPurchaseRequest& src);
    PayForPurchaseRequest& operator=(const PayForPurchaseRequest&) = delete;
    ~PayForPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_currency;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_orderId;
    String m_providerName;
    String m_providerTransactionId;
};

struct PayForPurchaseResult : public PlayFabClientPayForPurchaseResult, public BaseModel, public ApiResult
{
    PayForPurchaseResult();
    PayForPurchaseResult(const PayForPurchaseResult& src);
    PayForPurchaseResult(PayForPurchaseResult&& src);
    PayForPurchaseResult(const PlayFabClientPayForPurchaseResult& src);
    PayForPurchaseResult& operator=(const PayForPurchaseResult&) = delete;
    ~PayForPurchaseResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_orderId;
    String m_providerData;
    String m_providerToken;
    String m_purchaseConfirmationPageURL;
    String m_purchaseCurrency;
    StdExtra::optional<PlayFabClientTransactionStatus> m_status;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_vCAmount;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
};

struct PaymentOption : public PlayFabClientPaymentOption, public SerializableModel
{
    PaymentOption();
    PaymentOption(const PaymentOption& src);
    PaymentOption(PaymentOption&& src);
    PaymentOption(const PlayFabClientPaymentOption& src);
    PaymentOption& operator=(const PaymentOption&) = delete;
    ~PaymentOption() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_currency;
    String m_providerName;
};

struct PurchaseItemRequest : public PlayFabClientPurchaseItemRequest, public BaseModel
{
    PurchaseItemRequest();
    PurchaseItemRequest(const PurchaseItemRequest& src);
    PurchaseItemRequest(PurchaseItemRequest&& src);
    PurchaseItemRequest(const PlayFabClientPurchaseItemRequest& src);
    PurchaseItemRequest& operator=(const PurchaseItemRequest&) = delete;
    ~PurchaseItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_itemId;
    String m_storeId;
    String m_virtualCurrency;
};

struct PurchaseItemResult : public PlayFabClientPurchaseItemResult, public BaseModel, public ApiResult
{
    PurchaseItemResult();
    PurchaseItemResult(const PurchaseItemResult& src);
    PurchaseItemResult(PurchaseItemResult&& src);
    PurchaseItemResult(const PlayFabClientPurchaseItemResult& src);
    PurchaseItemResult& operator=(const PurchaseItemResult&) = delete;
    ~PurchaseItemResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_items;
};

struct PurchaseReceiptFulfillment : public PlayFabClientPurchaseReceiptFulfillment, public BaseModel
{
    PurchaseReceiptFulfillment();
    PurchaseReceiptFulfillment(const PurchaseReceiptFulfillment& src);
    PurchaseReceiptFulfillment(PurchaseReceiptFulfillment&& src);
    PurchaseReceiptFulfillment(const PlayFabClientPurchaseReceiptFulfillment& src);
    PurchaseReceiptFulfillment& operator=(const PurchaseReceiptFulfillment&) = delete;
    ~PurchaseReceiptFulfillment() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_fulfilledItems;
    String m_recordedPriceSource;
    String m_recordedTransactionCurrency;
    StdExtra::optional<uint32_t> m_recordedTransactionTotal;
};

struct RedeemCouponRequest : public PlayFabClientRedeemCouponRequest, public BaseModel
{
    RedeemCouponRequest();
    RedeemCouponRequest(const RedeemCouponRequest& src);
    RedeemCouponRequest(RedeemCouponRequest&& src);
    RedeemCouponRequest(const PlayFabClientRedeemCouponRequest& src);
    RedeemCouponRequest& operator=(const RedeemCouponRequest&) = delete;
    ~RedeemCouponRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_couponCode;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct RedeemCouponResult : public PlayFabClientRedeemCouponResult, public BaseModel, public ApiResult
{
    RedeemCouponResult();
    RedeemCouponResult(const RedeemCouponResult& src);
    RedeemCouponResult(RedeemCouponResult&& src);
    RedeemCouponResult(const PlayFabClientRedeemCouponResult& src);
    RedeemCouponResult& operator=(const RedeemCouponResult&) = delete;
    ~RedeemCouponResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_grantedItems;
};

struct RefreshPSNAuthTokenRequest : public PlayFabClientRefreshPSNAuthTokenRequest, public BaseModel
{
    RefreshPSNAuthTokenRequest();
    RefreshPSNAuthTokenRequest(const RefreshPSNAuthTokenRequest& src);
    RefreshPSNAuthTokenRequest(RefreshPSNAuthTokenRequest&& src);
    RefreshPSNAuthTokenRequest(const PlayFabClientRefreshPSNAuthTokenRequest& src);
    RefreshPSNAuthTokenRequest& operator=(const RefreshPSNAuthTokenRequest&) = delete;
    ~RefreshPSNAuthTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authCode;
    StdExtra::optional<int32_t> m_issuerId;
    String m_redirectUri;
};

struct RegisterForIOSPushNotificationRequest : public PlayFabClientRegisterForIOSPushNotificationRequest, public BaseModel
{
    RegisterForIOSPushNotificationRequest();
    RegisterForIOSPushNotificationRequest(const RegisterForIOSPushNotificationRequest& src);
    RegisterForIOSPushNotificationRequest(RegisterForIOSPushNotificationRequest&& src);
    RegisterForIOSPushNotificationRequest(const PlayFabClientRegisterForIOSPushNotificationRequest& src);
    RegisterForIOSPushNotificationRequest& operator=(const RegisterForIOSPushNotificationRequest&) = delete;
    ~RegisterForIOSPushNotificationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_confirmationMessage;
    String m_deviceToken;
    StdExtra::optional<bool> m_sendPushNotificationConfirmation;
};

struct RegisterPlayFabUserRequest : public PlayFabClientRegisterPlayFabUserRequest, public BaseModel
{
    RegisterPlayFabUserRequest();
    RegisterPlayFabUserRequest(const RegisterPlayFabUserRequest& src);
    RegisterPlayFabUserRequest(RegisterPlayFabUserRequest&& src);
    RegisterPlayFabUserRequest(const PlayFabClientRegisterPlayFabUserRequest& src);
    RegisterPlayFabUserRequest& operator=(const RegisterPlayFabUserRequest&) = delete;
    ~RegisterPlayFabUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_displayName;
    String m_email;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_password;
    String m_playerSecret;
    StdExtra::optional<bool> m_requireBothUsernameAndEmail;
    String m_titleId;
    String m_username;
};

struct RegisterPlayFabUserResult : public BaseModel, public ApiResult
{
    RegisterPlayFabUserResult();
    RegisterPlayFabUserResult(const RegisterPlayFabUserResult& src);
    RegisterPlayFabUserResult(RegisterPlayFabUserResult&& src);
    RegisterPlayFabUserResult& operator=(const RegisterPlayFabUserResult&) = delete;
    ~RegisterPlayFabUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

public:
    StdExtra::optional<EntityTokenResponse> entityToken;
    String playFabId;
    String sessionTicket;
    StdExtra::optional<UserSettings> settingsForUser;
    String username;
};

struct RemoveContactEmailRequest : public PlayFabClientRemoveContactEmailRequest, public BaseModel
{
    RemoveContactEmailRequest();
    RemoveContactEmailRequest(const RemoveContactEmailRequest& src);
    RemoveContactEmailRequest(RemoveContactEmailRequest&& src);
    RemoveContactEmailRequest(const PlayFabClientRemoveContactEmailRequest& src);
    RemoveContactEmailRequest& operator=(const RemoveContactEmailRequest&) = delete;
    ~RemoveContactEmailRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct RemoveFriendRequest : public PlayFabClientRemoveFriendRequest, public SerializableModel
{
    RemoveFriendRequest();
    RemoveFriendRequest(const RemoveFriendRequest& src);
    RemoveFriendRequest(RemoveFriendRequest&& src);
    RemoveFriendRequest(const PlayFabClientRemoveFriendRequest& src);
    RemoveFriendRequest& operator=(const RemoveFriendRequest&) = delete;
    ~RemoveFriendRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendPlayFabId;
};

struct RemoveGenericIDRequest : public PlayFabClientRemoveGenericIDRequest, public BaseModel
{
    RemoveGenericIDRequest();
    RemoveGenericIDRequest(const RemoveGenericIDRequest& src);
    RemoveGenericIDRequest(RemoveGenericIDRequest&& src);
    RemoveGenericIDRequest(const PlayFabClientRemoveGenericIDRequest& src);
    RemoveGenericIDRequest& operator=(const RemoveGenericIDRequest&) = delete;
    ~RemoveGenericIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    GenericServiceId m_genericId;
};

struct RemoveSharedGroupMembersRequest : public PlayFabClientRemoveSharedGroupMembersRequest, public BaseModel
{
    RemoveSharedGroupMembersRequest();
    RemoveSharedGroupMembersRequest(const RemoveSharedGroupMembersRequest& src);
    RemoveSharedGroupMembersRequest(RemoveSharedGroupMembersRequest&& src);
    RemoveSharedGroupMembersRequest(const PlayFabClientRemoveSharedGroupMembersRequest& src);
    RemoveSharedGroupMembersRequest& operator=(const RemoveSharedGroupMembersRequest&) = delete;
    ~RemoveSharedGroupMembersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_playFabIds;
    String m_sharedGroupId;
};

struct ReportAdActivityRequest : public PlayFabClientReportAdActivityRequest, public BaseModel
{
    ReportAdActivityRequest();
    ReportAdActivityRequest(const ReportAdActivityRequest& src);
    ReportAdActivityRequest(ReportAdActivityRequest&& src);
    ReportAdActivityRequest(const PlayFabClientReportAdActivityRequest& src);
    ReportAdActivityRequest& operator=(const ReportAdActivityRequest&) = delete;
    ~ReportAdActivityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_placementId;
    String m_rewardId;
};

struct ReportPlayerClientRequest : public PlayFabClientReportPlayerClientRequest, public BaseModel
{
    ReportPlayerClientRequest();
    ReportPlayerClientRequest(const ReportPlayerClientRequest& src);
    ReportPlayerClientRequest(ReportPlayerClientRequest&& src);
    ReportPlayerClientRequest(const PlayFabClientReportPlayerClientRequest& src);
    ReportPlayerClientRequest& operator=(const ReportPlayerClientRequest&) = delete;
    ~ReportPlayerClientRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_comment;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_reporteeId;
};

struct ReportPlayerClientResult : public PlayFabClientReportPlayerClientResult, public SerializableModel, public ApiResult
{
    ReportPlayerClientResult();
    ReportPlayerClientResult(const ReportPlayerClientResult&) = default;
    ReportPlayerClientResult(ReportPlayerClientResult&&) = default;
    ReportPlayerClientResult(const PlayFabClientReportPlayerClientResult& src);
    ReportPlayerClientResult& operator=(const ReportPlayerClientResult&) = delete;
    ~ReportPlayerClientResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct RestoreIOSPurchasesRequest : public PlayFabClientRestoreIOSPurchasesRequest, public BaseModel
{
    RestoreIOSPurchasesRequest();
    RestoreIOSPurchasesRequest(const RestoreIOSPurchasesRequest& src);
    RestoreIOSPurchasesRequest(RestoreIOSPurchasesRequest&& src);
    RestoreIOSPurchasesRequest(const PlayFabClientRestoreIOSPurchasesRequest& src);
    RestoreIOSPurchasesRequest& operator=(const RestoreIOSPurchasesRequest&) = delete;
    ~RestoreIOSPurchasesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_receiptData;
};

struct RestoreIOSPurchasesResult : public PlayFabClientRestoreIOSPurchasesResult, public BaseModel, public ApiResult
{
    RestoreIOSPurchasesResult();
    RestoreIOSPurchasesResult(const RestoreIOSPurchasesResult& src);
    RestoreIOSPurchasesResult(RestoreIOSPurchasesResult&& src);
    RestoreIOSPurchasesResult(const PlayFabClientRestoreIOSPurchasesResult& src);
    RestoreIOSPurchasesResult& operator=(const RestoreIOSPurchasesResult&) = delete;
    ~RestoreIOSPurchasesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
};

struct RewardAdActivityRequest : public PlayFabClientRewardAdActivityRequest, public BaseModel
{
    RewardAdActivityRequest();
    RewardAdActivityRequest(const RewardAdActivityRequest& src);
    RewardAdActivityRequest(RewardAdActivityRequest&& src);
    RewardAdActivityRequest(const PlayFabClientRewardAdActivityRequest& src);
    RewardAdActivityRequest& operator=(const RewardAdActivityRequest&) = delete;
    ~RewardAdActivityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_placementId;
    String m_rewardId;
};

struct RewardAdActivityResult : public PlayFabClientRewardAdActivityResult, public BaseModel, public ApiResult
{
    RewardAdActivityResult();
    RewardAdActivityResult(const RewardAdActivityResult& src);
    RewardAdActivityResult(RewardAdActivityResult&& src);
    RewardAdActivityResult(const PlayFabClientRewardAdActivityResult& src);
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

struct SendAccountRecoveryEmailRequest : public PlayFabClientSendAccountRecoveryEmailRequest, public BaseModel
{
    SendAccountRecoveryEmailRequest();
    SendAccountRecoveryEmailRequest(const SendAccountRecoveryEmailRequest& src);
    SendAccountRecoveryEmailRequest(SendAccountRecoveryEmailRequest&& src);
    SendAccountRecoveryEmailRequest(const PlayFabClientSendAccountRecoveryEmailRequest& src);
    SendAccountRecoveryEmailRequest& operator=(const SendAccountRecoveryEmailRequest&) = delete;
    ~SendAccountRecoveryEmailRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_email;
    String m_emailTemplateId;
    String m_titleId;
};

struct SetFriendTagsRequest : public PlayFabClientSetFriendTagsRequest, public BaseModel
{
    SetFriendTagsRequest();
    SetFriendTagsRequest(const SetFriendTagsRequest& src);
    SetFriendTagsRequest(SetFriendTagsRequest&& src);
    SetFriendTagsRequest(const PlayFabClientSetFriendTagsRequest& src);
    SetFriendTagsRequest& operator=(const SetFriendTagsRequest&) = delete;
    ~SetFriendTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_friendPlayFabId;
    PointerArrayModel<char, String> m_tags;
};

struct SetPlayerSecretRequest : public PlayFabClientSetPlayerSecretRequest, public SerializableModel
{
    SetPlayerSecretRequest();
    SetPlayerSecretRequest(const SetPlayerSecretRequest& src);
    SetPlayerSecretRequest(SetPlayerSecretRequest&& src);
    SetPlayerSecretRequest(const PlayFabClientSetPlayerSecretRequest& src);
    SetPlayerSecretRequest& operator=(const SetPlayerSecretRequest&) = delete;
    ~SetPlayerSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_encryptedRequest;
    String m_playerSecret;
};

struct StartGameRequest : public PlayFabClientStartGameRequest, public BaseModel
{
    StartGameRequest();
    StartGameRequest(const StartGameRequest& src);
    StartGameRequest(StartGameRequest&& src);
    StartGameRequest(const PlayFabClientStartGameRequest& src);
    StartGameRequest& operator=(const StartGameRequest&) = delete;
    ~StartGameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    String m_characterId;
    String m_customCommandLineData;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_gameMode;
    String m_statisticName;
};

struct StartGameResult : public PlayFabClientStartGameResult, public BaseModel, public ApiResult
{
    StartGameResult();
    StartGameResult(const StartGameResult& src);
    StartGameResult(StartGameResult&& src);
    StartGameResult(const PlayFabClientStartGameResult& src);
    StartGameResult& operator=(const StartGameResult&) = delete;
    ~StartGameResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_expires;
    String m_lobbyID;
    String m_password;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    StdExtra::optional<int32_t> m_serverPort;
    String m_serverPublicDNSName;
    String m_ticket;
};

struct StartPurchaseRequest : public PlayFabClientStartPurchaseRequest, public BaseModel
{
    StartPurchaseRequest();
    StartPurchaseRequest(const StartPurchaseRequest& src);
    StartPurchaseRequest(StartPurchaseRequest&& src);
    StartPurchaseRequest(const PlayFabClientStartPurchaseRequest& src);
    StartPurchaseRequest& operator=(const StartPurchaseRequest&) = delete;
    ~StartPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabClientItemPurchaseRequest, ItemPurchaseRequest> m_items;
    String m_storeId;
};

struct StartPurchaseResult : public PlayFabClientStartPurchaseResult, public BaseModel, public ApiResult
{
    StartPurchaseResult();
    StartPurchaseResult(const StartPurchaseResult& src);
    StartPurchaseResult(StartPurchaseResult&& src);
    StartPurchaseResult(const PlayFabClientStartPurchaseResult& src);
    StartPurchaseResult& operator=(const StartPurchaseResult&) = delete;
    ~StartPurchaseResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientCartItem, CartItem> m_contents;
    String m_orderId;
    PointerArrayModel<PlayFabClientPaymentOption, PaymentOption> m_paymentOptions;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_virtualCurrencyBalances;
};

struct StatisticUpdate : public PlayFabClientStatisticUpdate, public BaseModel
{
    StatisticUpdate();
    StatisticUpdate(const StatisticUpdate& src);
    StatisticUpdate(StatisticUpdate&& src);
    StatisticUpdate(const PlayFabClientStatisticUpdate& src);
    StatisticUpdate& operator=(const StatisticUpdate&) = delete;
    ~StatisticUpdate() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_statisticName;
    StdExtra::optional<uint32_t> m_version;
};

struct SubtractUserVirtualCurrencyRequest : public PlayFabClientSubtractUserVirtualCurrencyRequest, public BaseModel
{
    SubtractUserVirtualCurrencyRequest();
    SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src);
    SubtractUserVirtualCurrencyRequest(SubtractUserVirtualCurrencyRequest&& src);
    SubtractUserVirtualCurrencyRequest(const PlayFabClientSubtractUserVirtualCurrencyRequest& src);
    SubtractUserVirtualCurrencyRequest& operator=(const SubtractUserVirtualCurrencyRequest&) = delete;
    ~SubtractUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_virtualCurrency;
};

struct UnlinkAndroidDeviceIDRequest : public PlayFabClientUnlinkAndroidDeviceIDRequest, public BaseModel
{
    UnlinkAndroidDeviceIDRequest();
    UnlinkAndroidDeviceIDRequest(const UnlinkAndroidDeviceIDRequest& src);
    UnlinkAndroidDeviceIDRequest(UnlinkAndroidDeviceIDRequest&& src);
    UnlinkAndroidDeviceIDRequest(const PlayFabClientUnlinkAndroidDeviceIDRequest& src);
    UnlinkAndroidDeviceIDRequest& operator=(const UnlinkAndroidDeviceIDRequest&) = delete;
    ~UnlinkAndroidDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_androidDeviceId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkAppleRequest : public PlayFabClientUnlinkAppleRequest, public BaseModel
{
    UnlinkAppleRequest();
    UnlinkAppleRequest(const UnlinkAppleRequest& src);
    UnlinkAppleRequest(UnlinkAppleRequest&& src);
    UnlinkAppleRequest(const PlayFabClientUnlinkAppleRequest& src);
    UnlinkAppleRequest& operator=(const UnlinkAppleRequest&) = delete;
    ~UnlinkAppleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkCustomIDRequest : public PlayFabClientUnlinkCustomIDRequest, public BaseModel
{
    UnlinkCustomIDRequest();
    UnlinkCustomIDRequest(const UnlinkCustomIDRequest& src);
    UnlinkCustomIDRequest(UnlinkCustomIDRequest&& src);
    UnlinkCustomIDRequest(const PlayFabClientUnlinkCustomIDRequest& src);
    UnlinkCustomIDRequest& operator=(const UnlinkCustomIDRequest&) = delete;
    ~UnlinkCustomIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_customId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkFacebookAccountRequest : public PlayFabClientUnlinkFacebookAccountRequest, public BaseModel
{
    UnlinkFacebookAccountRequest();
    UnlinkFacebookAccountRequest(const UnlinkFacebookAccountRequest& src);
    UnlinkFacebookAccountRequest(UnlinkFacebookAccountRequest&& src);
    UnlinkFacebookAccountRequest(const PlayFabClientUnlinkFacebookAccountRequest& src);
    UnlinkFacebookAccountRequest& operator=(const UnlinkFacebookAccountRequest&) = delete;
    ~UnlinkFacebookAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkFacebookInstantGamesIdRequest : public PlayFabClientUnlinkFacebookInstantGamesIdRequest, public BaseModel
{
    UnlinkFacebookInstantGamesIdRequest();
    UnlinkFacebookInstantGamesIdRequest(const UnlinkFacebookInstantGamesIdRequest& src);
    UnlinkFacebookInstantGamesIdRequest(UnlinkFacebookInstantGamesIdRequest&& src);
    UnlinkFacebookInstantGamesIdRequest(const PlayFabClientUnlinkFacebookInstantGamesIdRequest& src);
    UnlinkFacebookInstantGamesIdRequest& operator=(const UnlinkFacebookInstantGamesIdRequest&) = delete;
    ~UnlinkFacebookInstantGamesIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_facebookInstantGamesId;
};

struct UnlinkGameCenterAccountRequest : public PlayFabClientUnlinkGameCenterAccountRequest, public BaseModel
{
    UnlinkGameCenterAccountRequest();
    UnlinkGameCenterAccountRequest(const UnlinkGameCenterAccountRequest& src);
    UnlinkGameCenterAccountRequest(UnlinkGameCenterAccountRequest&& src);
    UnlinkGameCenterAccountRequest(const PlayFabClientUnlinkGameCenterAccountRequest& src);
    UnlinkGameCenterAccountRequest& operator=(const UnlinkGameCenterAccountRequest&) = delete;
    ~UnlinkGameCenterAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkGoogleAccountRequest : public PlayFabClientUnlinkGoogleAccountRequest, public BaseModel
{
    UnlinkGoogleAccountRequest();
    UnlinkGoogleAccountRequest(const UnlinkGoogleAccountRequest& src);
    UnlinkGoogleAccountRequest(UnlinkGoogleAccountRequest&& src);
    UnlinkGoogleAccountRequest(const PlayFabClientUnlinkGoogleAccountRequest& src);
    UnlinkGoogleAccountRequest& operator=(const UnlinkGoogleAccountRequest&) = delete;
    ~UnlinkGoogleAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkIOSDeviceIDRequest : public PlayFabClientUnlinkIOSDeviceIDRequest, public BaseModel
{
    UnlinkIOSDeviceIDRequest();
    UnlinkIOSDeviceIDRequest(const UnlinkIOSDeviceIDRequest& src);
    UnlinkIOSDeviceIDRequest(UnlinkIOSDeviceIDRequest&& src);
    UnlinkIOSDeviceIDRequest(const PlayFabClientUnlinkIOSDeviceIDRequest& src);
    UnlinkIOSDeviceIDRequest& operator=(const UnlinkIOSDeviceIDRequest&) = delete;
    ~UnlinkIOSDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_deviceId;
};

struct UnlinkKongregateAccountRequest : public PlayFabClientUnlinkKongregateAccountRequest, public BaseModel
{
    UnlinkKongregateAccountRequest();
    UnlinkKongregateAccountRequest(const UnlinkKongregateAccountRequest& src);
    UnlinkKongregateAccountRequest(UnlinkKongregateAccountRequest&& src);
    UnlinkKongregateAccountRequest(const PlayFabClientUnlinkKongregateAccountRequest& src);
    UnlinkKongregateAccountRequest& operator=(const UnlinkKongregateAccountRequest&) = delete;
    ~UnlinkKongregateAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkNintendoServiceAccountRequest : public PlayFabClientUnlinkNintendoServiceAccountRequest, public BaseModel
{
    UnlinkNintendoServiceAccountRequest();
    UnlinkNintendoServiceAccountRequest(const UnlinkNintendoServiceAccountRequest& src);
    UnlinkNintendoServiceAccountRequest(UnlinkNintendoServiceAccountRequest&& src);
    UnlinkNintendoServiceAccountRequest(const PlayFabClientUnlinkNintendoServiceAccountRequest& src);
    UnlinkNintendoServiceAccountRequest& operator=(const UnlinkNintendoServiceAccountRequest&) = delete;
    ~UnlinkNintendoServiceAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkNintendoSwitchDeviceIdRequest : public PlayFabClientUnlinkNintendoSwitchDeviceIdRequest, public BaseModel
{
    UnlinkNintendoSwitchDeviceIdRequest();
    UnlinkNintendoSwitchDeviceIdRequest(const UnlinkNintendoSwitchDeviceIdRequest& src);
    UnlinkNintendoSwitchDeviceIdRequest(UnlinkNintendoSwitchDeviceIdRequest&& src);
    UnlinkNintendoSwitchDeviceIdRequest(const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest& src);
    UnlinkNintendoSwitchDeviceIdRequest& operator=(const UnlinkNintendoSwitchDeviceIdRequest&) = delete;
    ~UnlinkNintendoSwitchDeviceIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_nintendoSwitchDeviceId;
};

struct UnlinkOpenIdConnectRequest : public PlayFabClientUnlinkOpenIdConnectRequest, public BaseModel
{
    UnlinkOpenIdConnectRequest();
    UnlinkOpenIdConnectRequest(const UnlinkOpenIdConnectRequest& src);
    UnlinkOpenIdConnectRequest(UnlinkOpenIdConnectRequest&& src);
    UnlinkOpenIdConnectRequest(const PlayFabClientUnlinkOpenIdConnectRequest& src);
    UnlinkOpenIdConnectRequest& operator=(const UnlinkOpenIdConnectRequest&) = delete;
    ~UnlinkOpenIdConnectRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_connectionId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkPSNAccountRequest : public PlayFabClientUnlinkPSNAccountRequest, public BaseModel
{
    UnlinkPSNAccountRequest();
    UnlinkPSNAccountRequest(const UnlinkPSNAccountRequest& src);
    UnlinkPSNAccountRequest(UnlinkPSNAccountRequest&& src);
    UnlinkPSNAccountRequest(const PlayFabClientUnlinkPSNAccountRequest& src);
    UnlinkPSNAccountRequest& operator=(const UnlinkPSNAccountRequest&) = delete;
    ~UnlinkPSNAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkSteamAccountRequest : public PlayFabClientUnlinkSteamAccountRequest, public BaseModel
{
    UnlinkSteamAccountRequest();
    UnlinkSteamAccountRequest(const UnlinkSteamAccountRequest& src);
    UnlinkSteamAccountRequest(UnlinkSteamAccountRequest&& src);
    UnlinkSteamAccountRequest(const PlayFabClientUnlinkSteamAccountRequest& src);
    UnlinkSteamAccountRequest& operator=(const UnlinkSteamAccountRequest&) = delete;
    ~UnlinkSteamAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkTwitchAccountRequest : public PlayFabClientUnlinkTwitchAccountRequest, public BaseModel
{
    UnlinkTwitchAccountRequest();
    UnlinkTwitchAccountRequest(const UnlinkTwitchAccountRequest& src);
    UnlinkTwitchAccountRequest(UnlinkTwitchAccountRequest&& src);
    UnlinkTwitchAccountRequest(const PlayFabClientUnlinkTwitchAccountRequest& src);
    UnlinkTwitchAccountRequest& operator=(const UnlinkTwitchAccountRequest&) = delete;
    ~UnlinkTwitchAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_accessToken;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlinkXboxAccountRequest : public PlayFabClientUnlinkXboxAccountRequest, public BaseModel
{
    UnlinkXboxAccountRequest();
    UnlinkXboxAccountRequest(const UnlinkXboxAccountRequest& src);
    UnlinkXboxAccountRequest(UnlinkXboxAccountRequest&& src);
    UnlinkXboxAccountRequest(const PlayFabClientUnlinkXboxAccountRequest& src);
    UnlinkXboxAccountRequest& operator=(const UnlinkXboxAccountRequest&) = delete;
    ~UnlinkXboxAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlockContainerInstanceRequest : public PlayFabClientUnlockContainerInstanceRequest, public BaseModel
{
    UnlockContainerInstanceRequest();
    UnlockContainerInstanceRequest(const UnlockContainerInstanceRequest& src);
    UnlockContainerInstanceRequest(UnlockContainerInstanceRequest&& src);
    UnlockContainerInstanceRequest(const PlayFabClientUnlockContainerInstanceRequest& src);
    UnlockContainerInstanceRequest& operator=(const UnlockContainerInstanceRequest&) = delete;
    ~UnlockContainerInstanceRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_containerItemInstanceId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_keyItemInstanceId;
};

struct UnlockContainerItemRequest : public PlayFabClientUnlockContainerItemRequest, public BaseModel
{
    UnlockContainerItemRequest();
    UnlockContainerItemRequest(const UnlockContainerItemRequest& src);
    UnlockContainerItemRequest(UnlockContainerItemRequest&& src);
    UnlockContainerItemRequest(const PlayFabClientUnlockContainerItemRequest& src);
    UnlockContainerItemRequest& operator=(const UnlockContainerItemRequest&) = delete;
    ~UnlockContainerItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_containerItemId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UnlockContainerItemResult : public PlayFabClientUnlockContainerItemResult, public BaseModel, public ApiResult
{
    UnlockContainerItemResult();
    UnlockContainerItemResult(const UnlockContainerItemResult& src);
    UnlockContainerItemResult(UnlockContainerItemResult&& src);
    UnlockContainerItemResult(const PlayFabClientUnlockContainerItemResult& src);
    UnlockContainerItemResult& operator=(const UnlockContainerItemResult&) = delete;
    ~UnlockContainerItemResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_grantedItems;
    String m_unlockedItemInstanceId;
    String m_unlockedWithItemInstanceId;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrency;
};

struct UpdateAvatarUrlRequest : public PlayFabClientUpdateAvatarUrlRequest, public SerializableModel
{
    UpdateAvatarUrlRequest();
    UpdateAvatarUrlRequest(const UpdateAvatarUrlRequest& src);
    UpdateAvatarUrlRequest(UpdateAvatarUrlRequest&& src);
    UpdateAvatarUrlRequest(const PlayFabClientUpdateAvatarUrlRequest& src);
    UpdateAvatarUrlRequest& operator=(const UpdateAvatarUrlRequest&) = delete;
    ~UpdateAvatarUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_imageUrl;
};

struct UpdateCharacterDataRequest : public PlayFabClientUpdateCharacterDataRequest, public BaseModel
{
    UpdateCharacterDataRequest();
    UpdateCharacterDataRequest(const UpdateCharacterDataRequest& src);
    UpdateCharacterDataRequest(UpdateCharacterDataRequest&& src);
    UpdateCharacterDataRequest(const PlayFabClientUpdateCharacterDataRequest& src);
    UpdateCharacterDataRequest& operator=(const UpdateCharacterDataRequest&) = delete;
    ~UpdateCharacterDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PlayFabUserDataPermission> m_permission;
};

struct UpdateCharacterDataResult : public PlayFabClientUpdateCharacterDataResult, public SerializableModel, public ApiResult
{
    UpdateCharacterDataResult();
    UpdateCharacterDataResult(const UpdateCharacterDataResult&) = default;
    UpdateCharacterDataResult(UpdateCharacterDataResult&&) = default;
    UpdateCharacterDataResult(const PlayFabClientUpdateCharacterDataResult& src);
    UpdateCharacterDataResult& operator=(const UpdateCharacterDataResult&) = delete;
    ~UpdateCharacterDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct UpdateCharacterStatisticsRequest : public PlayFabClientUpdateCharacterStatisticsRequest, public BaseModel
{
    UpdateCharacterStatisticsRequest();
    UpdateCharacterStatisticsRequest(const UpdateCharacterStatisticsRequest& src);
    UpdateCharacterStatisticsRequest(UpdateCharacterStatisticsRequest&& src);
    UpdateCharacterStatisticsRequest(const PlayFabClientUpdateCharacterStatisticsRequest& src);
    UpdateCharacterStatisticsRequest& operator=(const UpdateCharacterStatisticsRequest&) = delete;
    ~UpdateCharacterStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_characterStatistics;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UpdatePlayerStatisticsRequest : public PlayFabClientUpdatePlayerStatisticsRequest, public BaseModel
{
    UpdatePlayerStatisticsRequest();
    UpdatePlayerStatisticsRequest(const UpdatePlayerStatisticsRequest& src);
    UpdatePlayerStatisticsRequest(UpdatePlayerStatisticsRequest&& src);
    UpdatePlayerStatisticsRequest(const PlayFabClientUpdatePlayerStatisticsRequest& src);
    UpdatePlayerStatisticsRequest& operator=(const UpdatePlayerStatisticsRequest&) = delete;
    ~UpdatePlayerStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabClientStatisticUpdate, StatisticUpdate> m_statistics;
};

struct UpdateSharedGroupDataRequest : public PlayFabClientUpdateSharedGroupDataRequest, public BaseModel
{
    UpdateSharedGroupDataRequest();
    UpdateSharedGroupDataRequest(const UpdateSharedGroupDataRequest& src);
    UpdateSharedGroupDataRequest(UpdateSharedGroupDataRequest&& src);
    UpdateSharedGroupDataRequest(const PlayFabClientUpdateSharedGroupDataRequest& src);
    UpdateSharedGroupDataRequest& operator=(const UpdateSharedGroupDataRequest&) = delete;
    ~UpdateSharedGroupDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PlayFabUserDataPermission> m_permission;
    String m_sharedGroupId;
};

struct UpdateUserDataRequest : public PlayFabClientUpdateUserDataRequest, public BaseModel
{
    UpdateUserDataRequest();
    UpdateUserDataRequest(const UpdateUserDataRequest& src);
    UpdateUserDataRequest(UpdateUserDataRequest&& src);
    UpdateUserDataRequest(const PlayFabClientUpdateUserDataRequest& src);
    UpdateUserDataRequest& operator=(const UpdateUserDataRequest&) = delete;
    ~UpdateUserDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PlayFabUserDataPermission> m_permission;
};

struct UpdateUserDataResult : public PlayFabClientUpdateUserDataResult, public SerializableModel, public ApiResult
{
    UpdateUserDataResult();
    UpdateUserDataResult(const UpdateUserDataResult&) = default;
    UpdateUserDataResult(UpdateUserDataResult&&) = default;
    UpdateUserDataResult(const PlayFabClientUpdateUserDataResult& src);
    UpdateUserDataResult& operator=(const UpdateUserDataResult&) = delete;
    ~UpdateUserDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct UpdateUserTitleDisplayNameRequest : public PlayFabClientUpdateUserTitleDisplayNameRequest, public BaseModel
{
    UpdateUserTitleDisplayNameRequest();
    UpdateUserTitleDisplayNameRequest(const UpdateUserTitleDisplayNameRequest& src);
    UpdateUserTitleDisplayNameRequest(UpdateUserTitleDisplayNameRequest&& src);
    UpdateUserTitleDisplayNameRequest(const PlayFabClientUpdateUserTitleDisplayNameRequest& src);
    UpdateUserTitleDisplayNameRequest& operator=(const UpdateUserTitleDisplayNameRequest&) = delete;
    ~UpdateUserTitleDisplayNameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_displayName;
};

struct UpdateUserTitleDisplayNameResult : public PlayFabClientUpdateUserTitleDisplayNameResult, public SerializableModel, public ApiResult
{
    UpdateUserTitleDisplayNameResult();
    UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src);
    UpdateUserTitleDisplayNameResult(UpdateUserTitleDisplayNameResult&& src);
    UpdateUserTitleDisplayNameResult(const PlayFabClientUpdateUserTitleDisplayNameResult& src);
    UpdateUserTitleDisplayNameResult& operator=(const UpdateUserTitleDisplayNameResult&) = delete;
    ~UpdateUserTitleDisplayNameResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_displayName;
};

struct ValidateAmazonReceiptRequest : public PlayFabClientValidateAmazonReceiptRequest, public BaseModel
{
    ValidateAmazonReceiptRequest();
    ValidateAmazonReceiptRequest(const ValidateAmazonReceiptRequest& src);
    ValidateAmazonReceiptRequest(ValidateAmazonReceiptRequest&& src);
    ValidateAmazonReceiptRequest(const PlayFabClientValidateAmazonReceiptRequest& src);
    ValidateAmazonReceiptRequest& operator=(const ValidateAmazonReceiptRequest&) = delete;
    ~ValidateAmazonReceiptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_currencyCode;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_receiptId;
    String m_userId;
};

struct ValidateAmazonReceiptResult : public PlayFabClientValidateAmazonReceiptResult, public BaseModel, public ApiResult
{
    ValidateAmazonReceiptResult();
    ValidateAmazonReceiptResult(const ValidateAmazonReceiptResult& src);
    ValidateAmazonReceiptResult(ValidateAmazonReceiptResult&& src);
    ValidateAmazonReceiptResult(const PlayFabClientValidateAmazonReceiptResult& src);
    ValidateAmazonReceiptResult& operator=(const ValidateAmazonReceiptResult&) = delete;
    ~ValidateAmazonReceiptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
};

struct ValidateGooglePlayPurchaseRequest : public PlayFabClientValidateGooglePlayPurchaseRequest, public BaseModel
{
    ValidateGooglePlayPurchaseRequest();
    ValidateGooglePlayPurchaseRequest(const ValidateGooglePlayPurchaseRequest& src);
    ValidateGooglePlayPurchaseRequest(ValidateGooglePlayPurchaseRequest&& src);
    ValidateGooglePlayPurchaseRequest(const PlayFabClientValidateGooglePlayPurchaseRequest& src);
    ValidateGooglePlayPurchaseRequest& operator=(const ValidateGooglePlayPurchaseRequest&) = delete;
    ~ValidateGooglePlayPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_currencyCode;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<uint32_t> m_purchasePrice;
    String m_receiptJson;
    String m_signature;
};

struct ValidateGooglePlayPurchaseResult : public PlayFabClientValidateGooglePlayPurchaseResult, public BaseModel, public ApiResult
{
    ValidateGooglePlayPurchaseResult();
    ValidateGooglePlayPurchaseResult(const ValidateGooglePlayPurchaseResult& src);
    ValidateGooglePlayPurchaseResult(ValidateGooglePlayPurchaseResult&& src);
    ValidateGooglePlayPurchaseResult(const PlayFabClientValidateGooglePlayPurchaseResult& src);
    ValidateGooglePlayPurchaseResult& operator=(const ValidateGooglePlayPurchaseResult&) = delete;
    ~ValidateGooglePlayPurchaseResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
};

struct ValidateIOSReceiptRequest : public PlayFabClientValidateIOSReceiptRequest, public BaseModel
{
    ValidateIOSReceiptRequest();
    ValidateIOSReceiptRequest(const ValidateIOSReceiptRequest& src);
    ValidateIOSReceiptRequest(ValidateIOSReceiptRequest&& src);
    ValidateIOSReceiptRequest(const PlayFabClientValidateIOSReceiptRequest& src);
    ValidateIOSReceiptRequest& operator=(const ValidateIOSReceiptRequest&) = delete;
    ~ValidateIOSReceiptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_currencyCode;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_receiptData;
};

struct ValidateIOSReceiptResult : public PlayFabClientValidateIOSReceiptResult, public BaseModel, public ApiResult
{
    ValidateIOSReceiptResult();
    ValidateIOSReceiptResult(const ValidateIOSReceiptResult& src);
    ValidateIOSReceiptResult(ValidateIOSReceiptResult&& src);
    ValidateIOSReceiptResult(const PlayFabClientValidateIOSReceiptResult& src);
    ValidateIOSReceiptResult& operator=(const ValidateIOSReceiptResult&) = delete;
    ~ValidateIOSReceiptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
};

struct ValidateWindowsReceiptRequest : public PlayFabClientValidateWindowsReceiptRequest, public BaseModel
{
    ValidateWindowsReceiptRequest();
    ValidateWindowsReceiptRequest(const ValidateWindowsReceiptRequest& src);
    ValidateWindowsReceiptRequest(ValidateWindowsReceiptRequest&& src);
    ValidateWindowsReceiptRequest(const PlayFabClientValidateWindowsReceiptRequest& src);
    ValidateWindowsReceiptRequest& operator=(const ValidateWindowsReceiptRequest&) = delete;
    ~ValidateWindowsReceiptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_currencyCode;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_receipt;
};

struct ValidateWindowsReceiptResult : public PlayFabClientValidateWindowsReceiptResult, public BaseModel, public ApiResult
{
    ValidateWindowsReceiptResult();
    ValidateWindowsReceiptResult(const ValidateWindowsReceiptResult& src);
    ValidateWindowsReceiptResult(ValidateWindowsReceiptResult&& src);
    ValidateWindowsReceiptResult(const PlayFabClientValidateWindowsReceiptResult& src);
    ValidateWindowsReceiptResult& operator=(const ValidateWindowsReceiptResult&) = delete;
    ~ValidateWindowsReceiptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabClientPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
};

struct WriteClientCharacterEventRequest : public PlayFabClientWriteClientCharacterEventRequest, public BaseModel
{
    WriteClientCharacterEventRequest();
    WriteClientCharacterEventRequest(const WriteClientCharacterEventRequest& src);
    WriteClientCharacterEventRequest(WriteClientCharacterEventRequest&& src);
    WriteClientCharacterEventRequest(const PlayFabClientWriteClientCharacterEventRequest& src);
    WriteClientCharacterEventRequest& operator=(const WriteClientCharacterEventRequest&) = delete;
    ~WriteClientCharacterEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    StdExtra::optional<time_t> m_timestamp;
};

struct WriteClientPlayerEventRequest : public PlayFabClientWriteClientPlayerEventRequest, public BaseModel
{
    WriteClientPlayerEventRequest();
    WriteClientPlayerEventRequest(const WriteClientPlayerEventRequest& src);
    WriteClientPlayerEventRequest(WriteClientPlayerEventRequest&& src);
    WriteClientPlayerEventRequest(const PlayFabClientWriteClientPlayerEventRequest& src);
    WriteClientPlayerEventRequest& operator=(const WriteClientPlayerEventRequest&) = delete;
    ~WriteClientPlayerEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    StdExtra::optional<time_t> m_timestamp;
};

struct WriteEventResponse : public PlayFabClientWriteEventResponse, public SerializableModel, public ApiResult
{
    WriteEventResponse();
    WriteEventResponse(const WriteEventResponse& src);
    WriteEventResponse(WriteEventResponse&& src);
    WriteEventResponse(const PlayFabClientWriteEventResponse& src);
    WriteEventResponse& operator=(const WriteEventResponse&) = delete;
    ~WriteEventResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_eventId;
};

struct WriteTitleEventRequest : public PlayFabClientWriteTitleEventRequest, public BaseModel
{
    WriteTitleEventRequest();
    WriteTitleEventRequest(const WriteTitleEventRequest& src);
    WriteTitleEventRequest(WriteTitleEventRequest&& src);
    WriteTitleEventRequest(const PlayFabClientWriteTitleEventRequest& src);
    WriteTitleEventRequest& operator=(const WriteTitleEventRequest&) = delete;
    ~WriteTitleEventRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_body;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_eventName;
    StdExtra::optional<time_t> m_timestamp;
};

} // namespace ClientModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabClientAcceptTradeRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientTradeInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAcceptTradeResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAddFriendRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAddFriendResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGenericServiceId& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAddGenericIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAddOrUpdateContactEmailRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAddSharedGroupMembersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAddUsernamePasswordRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAddUsernamePasswordResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAddUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAdPlacementDetails& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAdRewardItemGranted& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAdRewardResults& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAndroidDevicePushNotificationRegistrationRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientAttributeInstallRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCancelTradeRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCancelTradeResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCartItem& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCatalogItemBundleInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCatalogItemConsumableInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCatalogItemContainerInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCatalogItem& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCharacterLeaderboardEntry& input);
template<> inline JsonValue ToJson<>(const PlayFabClientContainer_Dictionary_String_String& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCollectionFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConfirmPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConfirmPurchaseResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConsumeItemRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConsumeItemResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientMicrosoftStorePayload& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConsumeMicrosoftStoreEntitlementsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPlayStation5Payload& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConsumePS5EntitlementsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConsumePS5EntitlementsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConsumePSNEntitlementsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConsumePSNEntitlementsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConsumeXboxEntitlementsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientConsumeXboxEntitlementsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCreateSharedGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCreateSharedGroupResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCurrentGamesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGameInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabClientCurrentGamesResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientDeviceInfoRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientExecuteCloudScriptRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientScriptExecutionError& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLogStatement& input);
template<> inline JsonValue ToJson<>(const PlayFabClientExecuteCloudScriptResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientFacebookInstantGamesPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientFacebookPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientFriendInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGameCenterPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGameServerRegionsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRegionInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGameServerRegionsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGenericPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetAccountInfoRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetAccountInfoResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientNameIdentifier& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetAdPlacementsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetAdPlacementsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetCatalogItemsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetCatalogItemsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetCharacterDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetCharacterDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetCharacterInventoryRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetCharacterInventoryResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetCharacterLeaderboardRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetCharacterLeaderboardResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetCharacterStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetCharacterStatisticsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetContentDownloadUrlRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetContentDownloadUrlResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPlayerProfileViewConstraints& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetFriendLeaderboardAroundPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPlayerLeaderboardEntry& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetFriendLeaderboardAroundPlayerResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetFriendLeaderboardRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetFriendsListRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetFriendsListResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundCharacterRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundCharacterResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundPlayerResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardForUsersCharactersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardForUsersCharactersResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPaymentTokenRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPaymentTokenResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPhotonAuthenticationTokenRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPhotonAuthenticationTokenResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerCombinedInfoRequestParams& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerCombinedInfoRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerCombinedInfoResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerProfileRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerProfileResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetSegmentResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerSegmentsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientStatisticNameVersion& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticVersionsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPlayerStatisticVersion& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticVersionsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerTagsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerTagsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerTradesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayerTradesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGameCenterIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGenericIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGenericIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGooglePlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGoogleIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientKongregatePlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromKongregateIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientNintendoSwitchPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPSNAccountPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromSteamIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientSteamPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromSteamIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientTwitchPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromTwitchIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientXboxLiveAccountPlayFabIdPair& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPublisherDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPublisherDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetPurchaseResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetSharedGroupDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientSharedGroupDataRecord& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetSharedGroupDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetStoreItemsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientStoreMarketingModel& input);
template<> inline JsonValue ToJson<>(const PlayFabClientStoreItem& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetStoreItemsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetTimeResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetTitleDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetTitleDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetTitleNewsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientTitleNewsItem& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetTitleNewsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetTitlePublicKeyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetTitlePublicKeyResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetTradeStatusRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetTradeStatusResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetUserDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetUserDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetUserInventoryRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGetUserInventoryResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGrantCharacterToUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientGrantCharacterToUserResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientItemPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkAndroidDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkAppleRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkCustomIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkFacebookAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkFacebookInstantGamesIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkGameCenterAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkGoogleAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkIOSDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkKongregateAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkNintendoServiceAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkNintendoSwitchDeviceIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkOpenIdConnectRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkPSNAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkSteamAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkTwitchAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLinkXboxAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientListUsersCharactersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientListUsersCharactersResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithAndroidDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithAppleRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithCustomIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithEmailAddressRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithFacebookInstantGamesIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithFacebookRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithGameCenterRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithGoogleAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithIOSDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithKongregateRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithNintendoServiceAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithOpenIdConnectRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithPlayFabRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithPSNRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithSteamRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithTwitchRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientLoginWithXboxRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientMatchmakeRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientMatchmakeResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientModifyUserVirtualCurrencyResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientOpenTradeRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientOpenTradeResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPayForPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPayForPurchaseResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPaymentOption& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPurchaseItemRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPurchaseItemResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientPurchaseReceiptFulfillment& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRedeemCouponRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRedeemCouponResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRefreshPSNAuthTokenRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRegisterForIOSPushNotificationRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRegisterPlayFabUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRemoveContactEmailRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRemoveFriendRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRemoveGenericIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRemoveSharedGroupMembersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientReportAdActivityRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientReportPlayerClientRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientReportPlayerClientResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRestoreIOSPurchasesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRestoreIOSPurchasesResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRewardAdActivityRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientRewardAdActivityResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientSendAccountRecoveryEmailRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientSetFriendTagsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientSetPlayerSecretRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientStartGameRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientStartGameResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientStartPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientStartPurchaseResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientStatisticUpdate& input);
template<> inline JsonValue ToJson<>(const PlayFabClientSubtractUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkAndroidDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkAppleRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkCustomIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkFacebookAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkFacebookInstantGamesIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkGameCenterAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkGoogleAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkIOSDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkKongregateAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkNintendoServiceAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkOpenIdConnectRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkPSNAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkSteamAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkTwitchAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlinkXboxAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlockContainerInstanceRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlockContainerItemRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUnlockContainerItemResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUpdateAvatarUrlRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUpdateCharacterDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUpdateCharacterDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUpdateCharacterStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUpdatePlayerStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUpdateSharedGroupDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUpdateUserDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUpdateUserDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUpdateUserTitleDisplayNameRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientUpdateUserTitleDisplayNameResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientValidateAmazonReceiptRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientValidateAmazonReceiptResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientValidateGooglePlayPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientValidateGooglePlayPurchaseResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientValidateIOSReceiptRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientValidateIOSReceiptResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientValidateWindowsReceiptRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientValidateWindowsReceiptResult& input);
template<> inline JsonValue ToJson<>(const PlayFabClientWriteClientCharacterEventRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientWriteClientPlayerEventRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabClientWriteEventResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabClientWriteTitleEventRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabClientAdActivity>
{
    static constexpr PlayFabClientAdActivity maxValue = PlayFabClientAdActivity::End;
};

template<> struct EnumRange<PlayFabClientCloudScriptRevisionOption>
{
    static constexpr PlayFabClientCloudScriptRevisionOption maxValue = PlayFabClientCloudScriptRevisionOption::Specific;
};

template<> struct EnumRange<PlayFabClientGameInstanceState>
{
    static constexpr PlayFabClientGameInstanceState maxValue = PlayFabClientGameInstanceState::Closed;
};

template<> struct EnumRange<PlayFabClientMatchmakeStatus>
{
    static constexpr PlayFabClientMatchmakeStatus maxValue = PlayFabClientMatchmakeStatus::SessionClosed;
};

template<> struct EnumRange<PlayFabClientRegion>
{
    static constexpr PlayFabClientRegion maxValue = PlayFabClientRegion::Australia;
};

template<> struct EnumRange<PlayFabClientSourceType>
{
    static constexpr PlayFabClientSourceType maxValue = PlayFabClientSourceType::API;
};

template<> struct EnumRange<PlayFabClientTradeStatus>
{
    static constexpr PlayFabClientTradeStatus maxValue = PlayFabClientTradeStatus::Cancelled;
};

template<> struct EnumRange<PlayFabClientTransactionStatus>
{
    static constexpr PlayFabClientTransactionStatus maxValue = PlayFabClientTransactionStatus::Failed;
};

} // namespace PlayFab
