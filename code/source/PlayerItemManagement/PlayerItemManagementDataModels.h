#pragma once

#include <playfab/PFPlayerItemManagementDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace PlayerItemManagementModels
{

// PlayerItemManagement Classes
struct AdminAddUserVirtualCurrencyRequest : public PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest, public BaseModel
{
    AdminAddUserVirtualCurrencyRequest();
    AdminAddUserVirtualCurrencyRequest(const AdminAddUserVirtualCurrencyRequest& src);
    AdminAddUserVirtualCurrencyRequest(AdminAddUserVirtualCurrencyRequest&& src);
    AdminAddUserVirtualCurrencyRequest(const PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest& src);
    AdminAddUserVirtualCurrencyRequest& operator=(const AdminAddUserVirtualCurrencyRequest&) = delete;
    ~AdminAddUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct ModifyUserVirtualCurrencyResult : public PFPlayerItemManagementModifyUserVirtualCurrencyResult, public SerializableModel, public ApiResult
{
    ModifyUserVirtualCurrencyResult();
    ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src);
    ModifyUserVirtualCurrencyResult(ModifyUserVirtualCurrencyResult&& src);
    ModifyUserVirtualCurrencyResult(const PFPlayerItemManagementModifyUserVirtualCurrencyResult& src);
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

struct CheckLimitedEditionItemAvailabilityRequest : public PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest, public SerializableModel
{
    CheckLimitedEditionItemAvailabilityRequest();
    CheckLimitedEditionItemAvailabilityRequest(const CheckLimitedEditionItemAvailabilityRequest& src);
    CheckLimitedEditionItemAvailabilityRequest(CheckLimitedEditionItemAvailabilityRequest&& src);
    CheckLimitedEditionItemAvailabilityRequest(const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest& src);
    CheckLimitedEditionItemAvailabilityRequest& operator=(const CheckLimitedEditionItemAvailabilityRequest&) = delete;
    ~CheckLimitedEditionItemAvailabilityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
    String m_itemId;
};

struct CheckLimitedEditionItemAvailabilityResult : public PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult, public SerializableModel, public ApiResult
{
    CheckLimitedEditionItemAvailabilityResult();
    CheckLimitedEditionItemAvailabilityResult(const CheckLimitedEditionItemAvailabilityResult&) = default;
    CheckLimitedEditionItemAvailabilityResult(CheckLimitedEditionItemAvailabilityResult&&) = default;
    CheckLimitedEditionItemAvailabilityResult(const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult& src);
    CheckLimitedEditionItemAvailabilityResult& operator=(const CheckLimitedEditionItemAvailabilityResult&) = delete;
    ~CheckLimitedEditionItemAvailabilityResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct AdminGetUserInventoryRequest : public PFPlayerItemManagementAdminGetUserInventoryRequest, public BaseModel
{
    AdminGetUserInventoryRequest();
    AdminGetUserInventoryRequest(const AdminGetUserInventoryRequest& src);
    AdminGetUserInventoryRequest(AdminGetUserInventoryRequest&& src);
    AdminGetUserInventoryRequest(const PFPlayerItemManagementAdminGetUserInventoryRequest& src);
    AdminGetUserInventoryRequest& operator=(const AdminGetUserInventoryRequest&) = delete;
    ~AdminGetUserInventoryRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct AdminGetUserInventoryResult : public PFPlayerItemManagementAdminGetUserInventoryResult, public BaseModel, public ApiResult
{
    AdminGetUserInventoryResult();
    AdminGetUserInventoryResult(const AdminGetUserInventoryResult& src);
    AdminGetUserInventoryResult(AdminGetUserInventoryResult&& src);
    AdminGetUserInventoryResult(const PFPlayerItemManagementAdminGetUserInventoryResult& src);
    AdminGetUserInventoryResult& operator=(const AdminGetUserInventoryResult&) = delete;
    ~AdminGetUserInventoryResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_inventory;
    String m_playFabId;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PFVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct ItemGrant : public PFPlayerItemManagementItemGrant, public BaseModel
{
    ItemGrant();
    ItemGrant(const ItemGrant& src);
    ItemGrant(ItemGrant&& src);
    ItemGrant(const PFPlayerItemManagementItemGrant& src);
    ItemGrant& operator=(const ItemGrant&) = delete;
    ~ItemGrant() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
    String m_itemId;
    PointerArrayModel<char, String> m_keysToRemove;
    String m_playFabId;
};

struct GrantItemsToUsersRequest : public PFPlayerItemManagementGrantItemsToUsersRequest, public BaseModel
{
    GrantItemsToUsersRequest();
    GrantItemsToUsersRequest(const GrantItemsToUsersRequest& src);
    GrantItemsToUsersRequest(GrantItemsToUsersRequest&& src);
    GrantItemsToUsersRequest(const PFPlayerItemManagementGrantItemsToUsersRequest& src);
    GrantItemsToUsersRequest& operator=(const GrantItemsToUsersRequest&) = delete;
    ~GrantItemsToUsersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFPlayerItemManagementItemGrant, ItemGrant> m_itemGrants;
};

struct GrantedItemInstance : public PFPlayerItemManagementGrantedItemInstance, public BaseModel
{
    GrantedItemInstance();
    GrantedItemInstance(const GrantedItemInstance& src);
    GrantedItemInstance(GrantedItemInstance&& src);
    GrantedItemInstance(const PFPlayerItemManagementGrantedItemInstance& src);
    GrantedItemInstance& operator=(const GrantedItemInstance&) = delete;
    ~GrantedItemInstance() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    PointerArrayModel<char, String> m_bundleContents;
    String m_bundleParent;
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customData;
    String m_displayName;
    StdExtra::optional<time_t> m_expiration;
    String m_itemClass;
    String m_itemId;
    String m_itemInstanceId;
    String m_playFabId;
    StdExtra::optional<time_t> m_purchaseDate;
    StdExtra::optional<int32_t> m_remainingUses;
    String m_unitCurrency;
    StdExtra::optional<int32_t> m_usesIncrementedBy;
};

struct GrantItemsToUsersResult : public PFPlayerItemManagementGrantItemsToUsersResult, public BaseModel, public ApiResult
{
    GrantItemsToUsersResult();
    GrantItemsToUsersResult(const GrantItemsToUsersResult& src);
    GrantItemsToUsersResult(GrantItemsToUsersResult&& src);
    GrantItemsToUsersResult(const PFPlayerItemManagementGrantItemsToUsersResult& src);
    GrantItemsToUsersResult& operator=(const GrantItemsToUsersResult&) = delete;
    ~GrantItemsToUsersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerItemManagementGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
};

struct IncrementLimitedEditionItemAvailabilityRequest : public PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest, public BaseModel
{
    IncrementLimitedEditionItemAvailabilityRequest();
    IncrementLimitedEditionItemAvailabilityRequest(const IncrementLimitedEditionItemAvailabilityRequest& src);
    IncrementLimitedEditionItemAvailabilityRequest(IncrementLimitedEditionItemAvailabilityRequest&& src);
    IncrementLimitedEditionItemAvailabilityRequest(const PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest& src);
    IncrementLimitedEditionItemAvailabilityRequest& operator=(const IncrementLimitedEditionItemAvailabilityRequest&) = delete;
    ~IncrementLimitedEditionItemAvailabilityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_itemId;
};

struct RevokeInventoryItemRequest : public PFPlayerItemManagementRevokeInventoryItemRequest, public SerializableModel
{
    RevokeInventoryItemRequest();
    RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src);
    RevokeInventoryItemRequest(RevokeInventoryItemRequest&& src);
    RevokeInventoryItemRequest(const PFPlayerItemManagementRevokeInventoryItemRequest& src);
    RevokeInventoryItemRequest& operator=(const RevokeInventoryItemRequest&) = delete;
    ~RevokeInventoryItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_itemInstanceId;
    String m_playFabId;
};

struct RevokeInventoryItem : public PFPlayerItemManagementRevokeInventoryItem, public SerializableModel
{
    RevokeInventoryItem();
    RevokeInventoryItem(const RevokeInventoryItem& src);
    RevokeInventoryItem(RevokeInventoryItem&& src);
    RevokeInventoryItem(const PFPlayerItemManagementRevokeInventoryItem& src);
    RevokeInventoryItem& operator=(const RevokeInventoryItem&) = delete;
    ~RevokeInventoryItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_itemInstanceId;
    String m_playFabId;
};

struct RevokeInventoryItemsRequest : public PFPlayerItemManagementRevokeInventoryItemsRequest, public BaseModel
{
    RevokeInventoryItemsRequest();
    RevokeInventoryItemsRequest(const RevokeInventoryItemsRequest& src);
    RevokeInventoryItemsRequest(RevokeInventoryItemsRequest&& src);
    RevokeInventoryItemsRequest(const PFPlayerItemManagementRevokeInventoryItemsRequest& src);
    RevokeInventoryItemsRequest& operator=(const RevokeInventoryItemsRequest&) = delete;
    ~RevokeInventoryItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerItemManagementRevokeInventoryItem, RevokeInventoryItem> m_items;
};

struct RevokeItemError : public PFPlayerItemManagementRevokeItemError, public BaseModel
{
    RevokeItemError();
    RevokeItemError(const RevokeItemError& src);
    RevokeItemError(RevokeItemError&& src);
    RevokeItemError(const PFPlayerItemManagementRevokeItemError& src);
    RevokeItemError& operator=(const RevokeItemError&) = delete;
    ~RevokeItemError() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFPlayerItemManagementGenericErrorCodes> m_error;
    StdExtra::optional<RevokeInventoryItem> m_item;
};

struct RevokeInventoryItemsResult : public PFPlayerItemManagementRevokeInventoryItemsResult, public BaseModel, public ApiResult
{
    RevokeInventoryItemsResult();
    RevokeInventoryItemsResult(const RevokeInventoryItemsResult& src);
    RevokeInventoryItemsResult(RevokeInventoryItemsResult&& src);
    RevokeInventoryItemsResult(const PFPlayerItemManagementRevokeInventoryItemsResult& src);
    RevokeInventoryItemsResult& operator=(const RevokeInventoryItemsResult&) = delete;
    ~RevokeInventoryItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerItemManagementRevokeItemError, RevokeItemError> m_errors;
};

struct AdminSubtractUserVirtualCurrencyRequest : public PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest, public BaseModel
{
    AdminSubtractUserVirtualCurrencyRequest();
    AdminSubtractUserVirtualCurrencyRequest(const AdminSubtractUserVirtualCurrencyRequest& src);
    AdminSubtractUserVirtualCurrencyRequest(AdminSubtractUserVirtualCurrencyRequest&& src);
    AdminSubtractUserVirtualCurrencyRequest(const PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest& src);
    AdminSubtractUserVirtualCurrencyRequest& operator=(const AdminSubtractUserVirtualCurrencyRequest&) = delete;
    ~AdminSubtractUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct ClientAddUserVirtualCurrencyRequest : public PFPlayerItemManagementClientAddUserVirtualCurrencyRequest, public BaseModel
{
    ClientAddUserVirtualCurrencyRequest();
    ClientAddUserVirtualCurrencyRequest(const ClientAddUserVirtualCurrencyRequest& src);
    ClientAddUserVirtualCurrencyRequest(ClientAddUserVirtualCurrencyRequest&& src);
    ClientAddUserVirtualCurrencyRequest(const PFPlayerItemManagementClientAddUserVirtualCurrencyRequest& src);
    ClientAddUserVirtualCurrencyRequest& operator=(const ClientAddUserVirtualCurrencyRequest&) = delete;
    ~ClientAddUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_virtualCurrency;
};

struct ConfirmPurchaseRequest : public PFPlayerItemManagementConfirmPurchaseRequest, public BaseModel
{
    ConfirmPurchaseRequest();
    ConfirmPurchaseRequest(const ConfirmPurchaseRequest& src);
    ConfirmPurchaseRequest(ConfirmPurchaseRequest&& src);
    ConfirmPurchaseRequest(const PFPlayerItemManagementConfirmPurchaseRequest& src);
    ConfirmPurchaseRequest& operator=(const ConfirmPurchaseRequest&) = delete;
    ~ConfirmPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_orderId;
};

struct ConfirmPurchaseResult : public PFPlayerItemManagementConfirmPurchaseResult, public BaseModel, public ApiResult
{
    ConfirmPurchaseResult();
    ConfirmPurchaseResult(const ConfirmPurchaseResult& src);
    ConfirmPurchaseResult(ConfirmPurchaseResult&& src);
    ConfirmPurchaseResult(const PFPlayerItemManagementConfirmPurchaseResult& src);
    ConfirmPurchaseResult& operator=(const ConfirmPurchaseResult&) = delete;
    ~ConfirmPurchaseResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_items;
    String m_orderId;
};

struct ClientConsumeItemRequest : public PFPlayerItemManagementClientConsumeItemRequest, public BaseModel
{
    ClientConsumeItemRequest();
    ClientConsumeItemRequest(const ClientConsumeItemRequest& src);
    ClientConsumeItemRequest(ClientConsumeItemRequest&& src);
    ClientConsumeItemRequest(const PFPlayerItemManagementClientConsumeItemRequest& src);
    ClientConsumeItemRequest& operator=(const ClientConsumeItemRequest&) = delete;
    ~ClientConsumeItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_itemInstanceId;
};

struct ConsumeItemResult : public PFPlayerItemManagementConsumeItemResult, public SerializableModel, public ApiResult
{
    ConsumeItemResult();
    ConsumeItemResult(const ConsumeItemResult& src);
    ConsumeItemResult(ConsumeItemResult&& src);
    ConsumeItemResult(const PFPlayerItemManagementConsumeItemResult& src);
    ConsumeItemResult& operator=(const ConsumeItemResult&) = delete;
    ~ConsumeItemResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_itemInstanceId;
};

struct ClientGetCharacterInventoryRequest : public PFPlayerItemManagementClientGetCharacterInventoryRequest, public BaseModel
{
    ClientGetCharacterInventoryRequest();
    ClientGetCharacterInventoryRequest(const ClientGetCharacterInventoryRequest& src);
    ClientGetCharacterInventoryRequest(ClientGetCharacterInventoryRequest&& src);
    ClientGetCharacterInventoryRequest(const PFPlayerItemManagementClientGetCharacterInventoryRequest& src);
    ClientGetCharacterInventoryRequest& operator=(const ClientGetCharacterInventoryRequest&) = delete;
    ~ClientGetCharacterInventoryRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct ClientGetCharacterInventoryResult : public PFPlayerItemManagementClientGetCharacterInventoryResult, public BaseModel, public ApiResult
{
    ClientGetCharacterInventoryResult();
    ClientGetCharacterInventoryResult(const ClientGetCharacterInventoryResult& src);
    ClientGetCharacterInventoryResult(ClientGetCharacterInventoryResult&& src);
    ClientGetCharacterInventoryResult(const PFPlayerItemManagementClientGetCharacterInventoryResult& src);
    ClientGetCharacterInventoryResult& operator=(const ClientGetCharacterInventoryResult&) = delete;
    ~ClientGetCharacterInventoryResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    PointerArrayModel<PFItemInstance, ItemInstance> m_inventory;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PFVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct GetPaymentTokenRequest : public PFPlayerItemManagementGetPaymentTokenRequest, public SerializableModel
{
    GetPaymentTokenRequest();
    GetPaymentTokenRequest(const GetPaymentTokenRequest& src);
    GetPaymentTokenRequest(GetPaymentTokenRequest&& src);
    GetPaymentTokenRequest(const PFPlayerItemManagementGetPaymentTokenRequest& src);
    GetPaymentTokenRequest& operator=(const GetPaymentTokenRequest&) = delete;
    ~GetPaymentTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_tokenProvider;
};

struct GetPaymentTokenResult : public PFPlayerItemManagementGetPaymentTokenResult, public SerializableModel, public ApiResult
{
    GetPaymentTokenResult();
    GetPaymentTokenResult(const GetPaymentTokenResult& src);
    GetPaymentTokenResult(GetPaymentTokenResult&& src);
    GetPaymentTokenResult(const PFPlayerItemManagementGetPaymentTokenResult& src);
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

struct GetPurchaseRequest : public PFPlayerItemManagementGetPurchaseRequest, public SerializableModel
{
    GetPurchaseRequest();
    GetPurchaseRequest(const GetPurchaseRequest& src);
    GetPurchaseRequest(GetPurchaseRequest&& src);
    GetPurchaseRequest(const PFPlayerItemManagementGetPurchaseRequest& src);
    GetPurchaseRequest& operator=(const GetPurchaseRequest&) = delete;
    ~GetPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_orderId;
};

struct GetPurchaseResult : public PFPlayerItemManagementGetPurchaseResult, public SerializableModel, public ApiResult
{
    GetPurchaseResult();
    GetPurchaseResult(const GetPurchaseResult& src);
    GetPurchaseResult(GetPurchaseResult&& src);
    GetPurchaseResult(const PFPlayerItemManagementGetPurchaseResult& src);
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

struct ClientGetUserInventoryRequest : public PFPlayerItemManagementClientGetUserInventoryRequest, public BaseModel
{
    ClientGetUserInventoryRequest();
    ClientGetUserInventoryRequest(const ClientGetUserInventoryRequest& src);
    ClientGetUserInventoryRequest(ClientGetUserInventoryRequest&& src);
    ClientGetUserInventoryRequest(const PFPlayerItemManagementClientGetUserInventoryRequest& src);
    ClientGetUserInventoryRequest& operator=(const ClientGetUserInventoryRequest&) = delete;
    ~ClientGetUserInventoryRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct ClientGetUserInventoryResult : public PFPlayerItemManagementClientGetUserInventoryResult, public BaseModel, public ApiResult
{
    ClientGetUserInventoryResult();
    ClientGetUserInventoryResult(const ClientGetUserInventoryResult& src);
    ClientGetUserInventoryResult(ClientGetUserInventoryResult&& src);
    ClientGetUserInventoryResult(const PFPlayerItemManagementClientGetUserInventoryResult& src);
    ClientGetUserInventoryResult& operator=(const ClientGetUserInventoryResult&) = delete;
    ~ClientGetUserInventoryResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_inventory;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PFVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct PayForPurchaseRequest : public PFPlayerItemManagementPayForPurchaseRequest, public BaseModel
{
    PayForPurchaseRequest();
    PayForPurchaseRequest(const PayForPurchaseRequest& src);
    PayForPurchaseRequest(PayForPurchaseRequest&& src);
    PayForPurchaseRequest(const PFPlayerItemManagementPayForPurchaseRequest& src);
    PayForPurchaseRequest& operator=(const PayForPurchaseRequest&) = delete;
    ~PayForPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_currency;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_orderId;
    String m_providerName;
    String m_providerTransactionId;
};

struct PayForPurchaseResult : public PFPlayerItemManagementPayForPurchaseResult, public BaseModel, public ApiResult
{
    PayForPurchaseResult();
    PayForPurchaseResult(const PayForPurchaseResult& src);
    PayForPurchaseResult(PayForPurchaseResult&& src);
    PayForPurchaseResult(const PFPlayerItemManagementPayForPurchaseResult& src);
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
    StdExtra::optional<PFPlayerItemManagementTransactionStatus> m_status;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_vCAmount;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_virtualCurrency;
};

struct PurchaseItemRequest : public PFPlayerItemManagementPurchaseItemRequest, public BaseModel
{
    PurchaseItemRequest();
    PurchaseItemRequest(const PurchaseItemRequest& src);
    PurchaseItemRequest(PurchaseItemRequest&& src);
    PurchaseItemRequest(const PFPlayerItemManagementPurchaseItemRequest& src);
    PurchaseItemRequest& operator=(const PurchaseItemRequest&) = delete;
    ~PurchaseItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_itemId;
    String m_storeId;
    String m_virtualCurrency;
};

struct PurchaseItemResult : public PFPlayerItemManagementPurchaseItemResult, public BaseModel, public ApiResult
{
    PurchaseItemResult();
    PurchaseItemResult(const PurchaseItemResult& src);
    PurchaseItemResult(PurchaseItemResult&& src);
    PurchaseItemResult(const PFPlayerItemManagementPurchaseItemResult& src);
    PurchaseItemResult& operator=(const PurchaseItemResult&) = delete;
    ~PurchaseItemResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_items;
};

struct ClientRedeemCouponRequest : public PFPlayerItemManagementClientRedeemCouponRequest, public BaseModel
{
    ClientRedeemCouponRequest();
    ClientRedeemCouponRequest(const ClientRedeemCouponRequest& src);
    ClientRedeemCouponRequest(ClientRedeemCouponRequest&& src);
    ClientRedeemCouponRequest(const PFPlayerItemManagementClientRedeemCouponRequest& src);
    ClientRedeemCouponRequest& operator=(const ClientRedeemCouponRequest&) = delete;
    ~ClientRedeemCouponRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_couponCode;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct RedeemCouponResult : public PFPlayerItemManagementRedeemCouponResult, public BaseModel, public ApiResult
{
    RedeemCouponResult();
    RedeemCouponResult(const RedeemCouponResult& src);
    RedeemCouponResult(RedeemCouponResult&& src);
    RedeemCouponResult(const PFPlayerItemManagementRedeemCouponResult& src);
    RedeemCouponResult& operator=(const RedeemCouponResult&) = delete;
    ~RedeemCouponResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_grantedItems;
};

struct ItemPurchaseRequest : public PFPlayerItemManagementItemPurchaseRequest, public BaseModel
{
    ItemPurchaseRequest();
    ItemPurchaseRequest(const ItemPurchaseRequest& src);
    ItemPurchaseRequest(ItemPurchaseRequest&& src);
    ItemPurchaseRequest(const PFPlayerItemManagementItemPurchaseRequest& src);
    ItemPurchaseRequest& operator=(const ItemPurchaseRequest&) = delete;
    ~ItemPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    String m_itemId;
    PointerArrayModel<char, String> m_upgradeFromItems;
};

struct StartPurchaseRequest : public PFPlayerItemManagementStartPurchaseRequest, public BaseModel
{
    StartPurchaseRequest();
    StartPurchaseRequest(const StartPurchaseRequest& src);
    StartPurchaseRequest(StartPurchaseRequest&& src);
    StartPurchaseRequest(const PFPlayerItemManagementStartPurchaseRequest& src);
    StartPurchaseRequest& operator=(const StartPurchaseRequest&) = delete;
    ~StartPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFPlayerItemManagementItemPurchaseRequest, ItemPurchaseRequest> m_items;
    String m_storeId;
};

struct CartItem : public PFPlayerItemManagementCartItem, public BaseModel
{
    CartItem();
    CartItem(const CartItem& src);
    CartItem(CartItem&& src);
    CartItem(const PFPlayerItemManagementCartItem& src);
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
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_realCurrencyPrices;
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_vCAmount;
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_virtualCurrencyPrices;
};

struct PaymentOption : public PFPlayerItemManagementPaymentOption, public SerializableModel
{
    PaymentOption();
    PaymentOption(const PaymentOption& src);
    PaymentOption(PaymentOption&& src);
    PaymentOption(const PFPlayerItemManagementPaymentOption& src);
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

struct StartPurchaseResult : public PFPlayerItemManagementStartPurchaseResult, public BaseModel, public ApiResult
{
    StartPurchaseResult();
    StartPurchaseResult(const StartPurchaseResult& src);
    StartPurchaseResult(StartPurchaseResult&& src);
    StartPurchaseResult(const PFPlayerItemManagementStartPurchaseResult& src);
    StartPurchaseResult& operator=(const StartPurchaseResult&) = delete;
    ~StartPurchaseResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerItemManagementCartItem, CartItem> m_contents;
    String m_orderId;
    PointerArrayModel<PFPlayerItemManagementPaymentOption, PaymentOption> m_paymentOptions;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_virtualCurrencyBalances;
};

struct ClientSubtractUserVirtualCurrencyRequest : public PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest, public BaseModel
{
    ClientSubtractUserVirtualCurrencyRequest();
    ClientSubtractUserVirtualCurrencyRequest(const ClientSubtractUserVirtualCurrencyRequest& src);
    ClientSubtractUserVirtualCurrencyRequest(ClientSubtractUserVirtualCurrencyRequest&& src);
    ClientSubtractUserVirtualCurrencyRequest(const PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest& src);
    ClientSubtractUserVirtualCurrencyRequest& operator=(const ClientSubtractUserVirtualCurrencyRequest&) = delete;
    ~ClientSubtractUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_virtualCurrency;
};

struct ClientUnlockContainerInstanceRequest : public PFPlayerItemManagementClientUnlockContainerInstanceRequest, public BaseModel
{
    ClientUnlockContainerInstanceRequest();
    ClientUnlockContainerInstanceRequest(const ClientUnlockContainerInstanceRequest& src);
    ClientUnlockContainerInstanceRequest(ClientUnlockContainerInstanceRequest&& src);
    ClientUnlockContainerInstanceRequest(const PFPlayerItemManagementClientUnlockContainerInstanceRequest& src);
    ClientUnlockContainerInstanceRequest& operator=(const ClientUnlockContainerInstanceRequest&) = delete;
    ~ClientUnlockContainerInstanceRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_containerItemInstanceId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_keyItemInstanceId;
};

struct UnlockContainerItemResult : public PFPlayerItemManagementUnlockContainerItemResult, public BaseModel, public ApiResult
{
    UnlockContainerItemResult();
    UnlockContainerItemResult(const UnlockContainerItemResult& src);
    UnlockContainerItemResult(UnlockContainerItemResult&& src);
    UnlockContainerItemResult(const PFPlayerItemManagementUnlockContainerItemResult& src);
    UnlockContainerItemResult& operator=(const UnlockContainerItemResult&) = delete;
    ~UnlockContainerItemResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_grantedItems;
    String m_unlockedItemInstanceId;
    String m_unlockedWithItemInstanceId;
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_virtualCurrency;
};

struct ClientUnlockContainerItemRequest : public PFPlayerItemManagementClientUnlockContainerItemRequest, public BaseModel
{
    ClientUnlockContainerItemRequest();
    ClientUnlockContainerItemRequest(const ClientUnlockContainerItemRequest& src);
    ClientUnlockContainerItemRequest(ClientUnlockContainerItemRequest&& src);
    ClientUnlockContainerItemRequest(const PFPlayerItemManagementClientUnlockContainerItemRequest& src);
    ClientUnlockContainerItemRequest& operator=(const ClientUnlockContainerItemRequest&) = delete;
    ~ClientUnlockContainerItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_containerItemId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct AddCharacterVirtualCurrencyRequest : public PFPlayerItemManagementAddCharacterVirtualCurrencyRequest, public BaseModel
{
    AddCharacterVirtualCurrencyRequest();
    AddCharacterVirtualCurrencyRequest(const AddCharacterVirtualCurrencyRequest& src);
    AddCharacterVirtualCurrencyRequest(AddCharacterVirtualCurrencyRequest&& src);
    AddCharacterVirtualCurrencyRequest(const PFPlayerItemManagementAddCharacterVirtualCurrencyRequest& src);
    AddCharacterVirtualCurrencyRequest& operator=(const AddCharacterVirtualCurrencyRequest&) = delete;
    ~AddCharacterVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct ModifyCharacterVirtualCurrencyResult : public PFPlayerItemManagementModifyCharacterVirtualCurrencyResult, public SerializableModel, public ApiResult
{
    ModifyCharacterVirtualCurrencyResult();
    ModifyCharacterVirtualCurrencyResult(const ModifyCharacterVirtualCurrencyResult& src);
    ModifyCharacterVirtualCurrencyResult(ModifyCharacterVirtualCurrencyResult&& src);
    ModifyCharacterVirtualCurrencyResult(const PFPlayerItemManagementModifyCharacterVirtualCurrencyResult& src);
    ModifyCharacterVirtualCurrencyResult& operator=(const ModifyCharacterVirtualCurrencyResult&) = delete;
    ~ModifyCharacterVirtualCurrencyResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_virtualCurrency;
};

struct ServerAddUserVirtualCurrencyRequest : public PFPlayerItemManagementServerAddUserVirtualCurrencyRequest, public BaseModel
{
    ServerAddUserVirtualCurrencyRequest();
    ServerAddUserVirtualCurrencyRequest(const ServerAddUserVirtualCurrencyRequest& src);
    ServerAddUserVirtualCurrencyRequest(ServerAddUserVirtualCurrencyRequest&& src);
    ServerAddUserVirtualCurrencyRequest(const PFPlayerItemManagementServerAddUserVirtualCurrencyRequest& src);
    ServerAddUserVirtualCurrencyRequest& operator=(const ServerAddUserVirtualCurrencyRequest&) = delete;
    ~ServerAddUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct ServerConsumeItemRequest : public PFPlayerItemManagementServerConsumeItemRequest, public BaseModel
{
    ServerConsumeItemRequest();
    ServerConsumeItemRequest(const ServerConsumeItemRequest& src);
    ServerConsumeItemRequest(ServerConsumeItemRequest&& src);
    ServerConsumeItemRequest(const PFPlayerItemManagementServerConsumeItemRequest& src);
    ServerConsumeItemRequest& operator=(const ServerConsumeItemRequest&) = delete;
    ~ServerConsumeItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_itemInstanceId;
    String m_playFabId;
};

struct EvaluateRandomResultTableRequest : public PFPlayerItemManagementEvaluateRandomResultTableRequest, public SerializableModel
{
    EvaluateRandomResultTableRequest();
    EvaluateRandomResultTableRequest(const EvaluateRandomResultTableRequest& src);
    EvaluateRandomResultTableRequest(EvaluateRandomResultTableRequest&& src);
    EvaluateRandomResultTableRequest(const PFPlayerItemManagementEvaluateRandomResultTableRequest& src);
    EvaluateRandomResultTableRequest& operator=(const EvaluateRandomResultTableRequest&) = delete;
    ~EvaluateRandomResultTableRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
    String m_tableId;
};

struct EvaluateRandomResultTableResult : public PFPlayerItemManagementEvaluateRandomResultTableResult, public SerializableModel, public ApiResult
{
    EvaluateRandomResultTableResult();
    EvaluateRandomResultTableResult(const EvaluateRandomResultTableResult& src);
    EvaluateRandomResultTableResult(EvaluateRandomResultTableResult&& src);
    EvaluateRandomResultTableResult(const PFPlayerItemManagementEvaluateRandomResultTableResult& src);
    EvaluateRandomResultTableResult& operator=(const EvaluateRandomResultTableResult&) = delete;
    ~EvaluateRandomResultTableResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_resultItemId;
};

struct ServerGetCharacterInventoryRequest : public PFPlayerItemManagementServerGetCharacterInventoryRequest, public BaseModel
{
    ServerGetCharacterInventoryRequest();
    ServerGetCharacterInventoryRequest(const ServerGetCharacterInventoryRequest& src);
    ServerGetCharacterInventoryRequest(ServerGetCharacterInventoryRequest&& src);
    ServerGetCharacterInventoryRequest(const PFPlayerItemManagementServerGetCharacterInventoryRequest& src);
    ServerGetCharacterInventoryRequest& operator=(const ServerGetCharacterInventoryRequest&) = delete;
    ~ServerGetCharacterInventoryRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct ServerGetCharacterInventoryResult : public PFPlayerItemManagementServerGetCharacterInventoryResult, public BaseModel, public ApiResult
{
    ServerGetCharacterInventoryResult();
    ServerGetCharacterInventoryResult(const ServerGetCharacterInventoryResult& src);
    ServerGetCharacterInventoryResult(ServerGetCharacterInventoryResult&& src);
    ServerGetCharacterInventoryResult(const PFPlayerItemManagementServerGetCharacterInventoryResult& src);
    ServerGetCharacterInventoryResult& operator=(const ServerGetCharacterInventoryResult&) = delete;
    ~ServerGetCharacterInventoryResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    PointerArrayModel<PFItemInstance, ItemInstance> m_inventory;
    String m_playFabId;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PFVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct GetRandomResultTablesRequest : public PFPlayerItemManagementGetRandomResultTablesRequest, public BaseModel
{
    GetRandomResultTablesRequest();
    GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src);
    GetRandomResultTablesRequest(GetRandomResultTablesRequest&& src);
    GetRandomResultTablesRequest(const PFPlayerItemManagementGetRandomResultTablesRequest& src);
    GetRandomResultTablesRequest& operator=(const GetRandomResultTablesRequest&) = delete;
    ~GetRandomResultTablesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    PointerArrayModel<char, String> m_tableIDs;
};

struct ServerGetUserInventoryRequest : public PFPlayerItemManagementServerGetUserInventoryRequest, public BaseModel
{
    ServerGetUserInventoryRequest();
    ServerGetUserInventoryRequest(const ServerGetUserInventoryRequest& src);
    ServerGetUserInventoryRequest(ServerGetUserInventoryRequest&& src);
    ServerGetUserInventoryRequest(const PFPlayerItemManagementServerGetUserInventoryRequest& src);
    ServerGetUserInventoryRequest& operator=(const ServerGetUserInventoryRequest&) = delete;
    ~ServerGetUserInventoryRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct ServerGetUserInventoryResult : public PFPlayerItemManagementServerGetUserInventoryResult, public BaseModel, public ApiResult
{
    ServerGetUserInventoryResult();
    ServerGetUserInventoryResult(const ServerGetUserInventoryResult& src);
    ServerGetUserInventoryResult(ServerGetUserInventoryResult&& src);
    ServerGetUserInventoryResult(const PFPlayerItemManagementServerGetUserInventoryResult& src);
    ServerGetUserInventoryResult& operator=(const ServerGetUserInventoryResult&) = delete;
    ~ServerGetUserInventoryResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_inventory;
    String m_playFabId;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PFVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct GrantItemsToCharacterRequest : public PFPlayerItemManagementGrantItemsToCharacterRequest, public BaseModel
{
    GrantItemsToCharacterRequest();
    GrantItemsToCharacterRequest(const GrantItemsToCharacterRequest& src);
    GrantItemsToCharacterRequest(GrantItemsToCharacterRequest&& src);
    GrantItemsToCharacterRequest(const PFPlayerItemManagementGrantItemsToCharacterRequest& src);
    GrantItemsToCharacterRequest& operator=(const GrantItemsToCharacterRequest&) = delete;
    ~GrantItemsToCharacterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<char, String> m_itemIds;
    String m_playFabId;
};

struct GrantItemsToCharacterResult : public PFPlayerItemManagementGrantItemsToCharacterResult, public BaseModel, public ApiResult
{
    GrantItemsToCharacterResult();
    GrantItemsToCharacterResult(const GrantItemsToCharacterResult& src);
    GrantItemsToCharacterResult(GrantItemsToCharacterResult&& src);
    GrantItemsToCharacterResult(const PFPlayerItemManagementGrantItemsToCharacterResult& src);
    GrantItemsToCharacterResult& operator=(const GrantItemsToCharacterResult&) = delete;
    ~GrantItemsToCharacterResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerItemManagementGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
};

struct GrantItemsToUserRequest : public PFPlayerItemManagementGrantItemsToUserRequest, public BaseModel
{
    GrantItemsToUserRequest();
    GrantItemsToUserRequest(const GrantItemsToUserRequest& src);
    GrantItemsToUserRequest(GrantItemsToUserRequest&& src);
    GrantItemsToUserRequest(const PFPlayerItemManagementGrantItemsToUserRequest& src);
    GrantItemsToUserRequest& operator=(const GrantItemsToUserRequest&) = delete;
    ~GrantItemsToUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<char, String> m_itemIds;
    String m_playFabId;
};

struct GrantItemsToUserResult : public PFPlayerItemManagementGrantItemsToUserResult, public BaseModel, public ApiResult
{
    GrantItemsToUserResult();
    GrantItemsToUserResult(const GrantItemsToUserResult& src);
    GrantItemsToUserResult(GrantItemsToUserResult&& src);
    GrantItemsToUserResult(const PFPlayerItemManagementGrantItemsToUserResult& src);
    GrantItemsToUserResult& operator=(const GrantItemsToUserResult&) = delete;
    ~GrantItemsToUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerItemManagementGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
};

struct ModifyItemUsesRequest : public PFPlayerItemManagementModifyItemUsesRequest, public BaseModel
{
    ModifyItemUsesRequest();
    ModifyItemUsesRequest(const ModifyItemUsesRequest& src);
    ModifyItemUsesRequest(ModifyItemUsesRequest&& src);
    ModifyItemUsesRequest(const PFPlayerItemManagementModifyItemUsesRequest& src);
    ModifyItemUsesRequest& operator=(const ModifyItemUsesRequest&) = delete;
    ~ModifyItemUsesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_itemInstanceId;
    String m_playFabId;
};

struct ModifyItemUsesResult : public PFPlayerItemManagementModifyItemUsesResult, public SerializableModel, public ApiResult
{
    ModifyItemUsesResult();
    ModifyItemUsesResult(const ModifyItemUsesResult& src);
    ModifyItemUsesResult(ModifyItemUsesResult&& src);
    ModifyItemUsesResult(const PFPlayerItemManagementModifyItemUsesResult& src);
    ModifyItemUsesResult& operator=(const ModifyItemUsesResult&) = delete;
    ~ModifyItemUsesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_itemInstanceId;
};

struct MoveItemToCharacterFromCharacterRequest : public PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest, public SerializableModel
{
    MoveItemToCharacterFromCharacterRequest();
    MoveItemToCharacterFromCharacterRequest(const MoveItemToCharacterFromCharacterRequest& src);
    MoveItemToCharacterFromCharacterRequest(MoveItemToCharacterFromCharacterRequest&& src);
    MoveItemToCharacterFromCharacterRequest(const PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest& src);
    MoveItemToCharacterFromCharacterRequest& operator=(const MoveItemToCharacterFromCharacterRequest&) = delete;
    ~MoveItemToCharacterFromCharacterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_givingCharacterId;
    String m_itemInstanceId;
    String m_playFabId;
    String m_receivingCharacterId;
};

struct MoveItemToCharacterFromUserRequest : public PFPlayerItemManagementMoveItemToCharacterFromUserRequest, public SerializableModel
{
    MoveItemToCharacterFromUserRequest();
    MoveItemToCharacterFromUserRequest(const MoveItemToCharacterFromUserRequest& src);
    MoveItemToCharacterFromUserRequest(MoveItemToCharacterFromUserRequest&& src);
    MoveItemToCharacterFromUserRequest(const PFPlayerItemManagementMoveItemToCharacterFromUserRequest& src);
    MoveItemToCharacterFromUserRequest& operator=(const MoveItemToCharacterFromUserRequest&) = delete;
    ~MoveItemToCharacterFromUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_itemInstanceId;
    String m_playFabId;
};

struct MoveItemToUserFromCharacterRequest : public PFPlayerItemManagementMoveItemToUserFromCharacterRequest, public SerializableModel
{
    MoveItemToUserFromCharacterRequest();
    MoveItemToUserFromCharacterRequest(const MoveItemToUserFromCharacterRequest& src);
    MoveItemToUserFromCharacterRequest(MoveItemToUserFromCharacterRequest&& src);
    MoveItemToUserFromCharacterRequest(const PFPlayerItemManagementMoveItemToUserFromCharacterRequest& src);
    MoveItemToUserFromCharacterRequest& operator=(const MoveItemToUserFromCharacterRequest&) = delete;
    ~MoveItemToUserFromCharacterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_itemInstanceId;
    String m_playFabId;
};

struct ServerRedeemCouponRequest : public PFPlayerItemManagementServerRedeemCouponRequest, public BaseModel
{
    ServerRedeemCouponRequest();
    ServerRedeemCouponRequest(const ServerRedeemCouponRequest& src);
    ServerRedeemCouponRequest(ServerRedeemCouponRequest&& src);
    ServerRedeemCouponRequest(const PFPlayerItemManagementServerRedeemCouponRequest& src);
    ServerRedeemCouponRequest& operator=(const ServerRedeemCouponRequest&) = delete;
    ~ServerRedeemCouponRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_couponCode;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct ReportPlayerServerRequest : public PFPlayerItemManagementReportPlayerServerRequest, public BaseModel
{
    ReportPlayerServerRequest();
    ReportPlayerServerRequest(const ReportPlayerServerRequest& src);
    ReportPlayerServerRequest(ReportPlayerServerRequest&& src);
    ReportPlayerServerRequest(const PFPlayerItemManagementReportPlayerServerRequest& src);
    ReportPlayerServerRequest& operator=(const ReportPlayerServerRequest&) = delete;
    ~ReportPlayerServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_comment;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_reporteeId;
    String m_reporterId;
};

struct ReportPlayerServerResult : public PFPlayerItemManagementReportPlayerServerResult, public SerializableModel, public ApiResult
{
    ReportPlayerServerResult();
    ReportPlayerServerResult(const ReportPlayerServerResult&) = default;
    ReportPlayerServerResult(ReportPlayerServerResult&&) = default;
    ReportPlayerServerResult(const PFPlayerItemManagementReportPlayerServerResult& src);
    ReportPlayerServerResult& operator=(const ReportPlayerServerResult&) = delete;
    ~ReportPlayerServerResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct SubtractCharacterVirtualCurrencyRequest : public PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest, public BaseModel
{
    SubtractCharacterVirtualCurrencyRequest();
    SubtractCharacterVirtualCurrencyRequest(const SubtractCharacterVirtualCurrencyRequest& src);
    SubtractCharacterVirtualCurrencyRequest(SubtractCharacterVirtualCurrencyRequest&& src);
    SubtractCharacterVirtualCurrencyRequest(const PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest& src);
    SubtractCharacterVirtualCurrencyRequest& operator=(const SubtractCharacterVirtualCurrencyRequest&) = delete;
    ~SubtractCharacterVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct ServerSubtractUserVirtualCurrencyRequest : public PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest, public BaseModel
{
    ServerSubtractUserVirtualCurrencyRequest();
    ServerSubtractUserVirtualCurrencyRequest(const ServerSubtractUserVirtualCurrencyRequest& src);
    ServerSubtractUserVirtualCurrencyRequest(ServerSubtractUserVirtualCurrencyRequest&& src);
    ServerSubtractUserVirtualCurrencyRequest(const PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest& src);
    ServerSubtractUserVirtualCurrencyRequest& operator=(const ServerSubtractUserVirtualCurrencyRequest&) = delete;
    ~ServerSubtractUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct ServerUnlockContainerInstanceRequest : public PFPlayerItemManagementServerUnlockContainerInstanceRequest, public BaseModel
{
    ServerUnlockContainerInstanceRequest();
    ServerUnlockContainerInstanceRequest(const ServerUnlockContainerInstanceRequest& src);
    ServerUnlockContainerInstanceRequest(ServerUnlockContainerInstanceRequest&& src);
    ServerUnlockContainerInstanceRequest(const PFPlayerItemManagementServerUnlockContainerInstanceRequest& src);
    ServerUnlockContainerInstanceRequest& operator=(const ServerUnlockContainerInstanceRequest&) = delete;
    ~ServerUnlockContainerInstanceRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_containerItemInstanceId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_keyItemInstanceId;
    String m_playFabId;
};

struct ServerUnlockContainerItemRequest : public PFPlayerItemManagementServerUnlockContainerItemRequest, public BaseModel
{
    ServerUnlockContainerItemRequest();
    ServerUnlockContainerItemRequest(const ServerUnlockContainerItemRequest& src);
    ServerUnlockContainerItemRequest(ServerUnlockContainerItemRequest&& src);
    ServerUnlockContainerItemRequest(const PFPlayerItemManagementServerUnlockContainerItemRequest& src);
    ServerUnlockContainerItemRequest& operator=(const ServerUnlockContainerItemRequest&) = delete;
    ~ServerUnlockContainerItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterId;
    String m_containerItemId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct UpdateUserInventoryItemDataRequest : public PFPlayerItemManagementUpdateUserInventoryItemDataRequest, public BaseModel
{
    UpdateUserInventoryItemDataRequest();
    UpdateUserInventoryItemDataRequest(const UpdateUserInventoryItemDataRequest& src);
    UpdateUserInventoryItemDataRequest(UpdateUserInventoryItemDataRequest&& src);
    UpdateUserInventoryItemDataRequest(const PFPlayerItemManagementUpdateUserInventoryItemDataRequest& src);
    UpdateUserInventoryItemDataRequest& operator=(const UpdateUserInventoryItemDataRequest&) = delete;
    ~UpdateUserInventoryItemDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
    String m_itemInstanceId;
    PointerArrayModel<char, String> m_keysToRemove;
    String m_playFabId;
};

} // namespace PlayerItemManagementModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementModifyUserVirtualCurrencyResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementAdminGetUserInventoryRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementAdminGetUserInventoryResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementItemGrant& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToUsersRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGrantedItemInstance& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToUsersResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementRevokeInventoryItemRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementRevokeInventoryItem& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementRevokeInventoryItemsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementRevokeItemError& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementRevokeInventoryItemsResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementClientAddUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementConfirmPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementConfirmPurchaseResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementClientConsumeItemRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementConsumeItemResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementClientGetCharacterInventoryRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementClientGetCharacterInventoryResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGetPaymentTokenRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGetPaymentTokenResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGetPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGetPurchaseResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementClientGetUserInventoryRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementClientGetUserInventoryResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementPayForPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementPayForPurchaseResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementPurchaseItemRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementPurchaseItemResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementClientRedeemCouponRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementRedeemCouponResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementItemPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementStartPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementCartItem& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementPaymentOption& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementStartPurchaseResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementClientUnlockContainerInstanceRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementUnlockContainerItemResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementClientUnlockContainerItemRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementAddCharacterVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementModifyCharacterVirtualCurrencyResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementServerAddUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementServerConsumeItemRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementEvaluateRandomResultTableRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementEvaluateRandomResultTableResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementServerGetCharacterInventoryRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementServerGetCharacterInventoryResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGetRandomResultTablesRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementServerGetUserInventoryRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementServerGetUserInventoryResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToCharacterRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToCharacterResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToUserRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementGrantItemsToUserResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementModifyItemUsesRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementModifyItemUsesResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementMoveItemToCharacterFromUserRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementMoveItemToUserFromCharacterRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementServerRedeemCouponRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementReportPlayerServerRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementReportPlayerServerResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementServerUnlockContainerInstanceRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementServerUnlockContainerItemRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerItemManagementUpdateUserInventoryItemDataRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
