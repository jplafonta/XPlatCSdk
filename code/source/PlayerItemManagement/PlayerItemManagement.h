#pragma once

#include "PlayerItemManagementDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class PlayerItemManagementAPI
{
public:
    PlayerItemManagementAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    PlayerItemManagementAPI(const PlayerItemManagementAPI& source) = delete;
    PlayerItemManagementAPI& operator=(const PlayerItemManagementAPI& source) = delete;
    ~PlayerItemManagementAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> AdminAddUserVirtualCurrency(const PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::CheckLimitedEditionItemAvailabilityResult> AdminCheckLimitedEditionItemAvailability(const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::AdminGetUserInventoryResult> AdminGetUserInventory(const PFPlayerItemManagementAdminGetUserInventoryRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::GrantItemsToUsersResult> AdminGrantItemsToUsers(const PFPlayerItemManagementGrantItemsToUsersRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminIncrementLimitedEditionItemAvailability(const PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminRevokeInventoryItem(const PFPlayerItemManagementRevokeInventoryItemRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::RevokeInventoryItemsResult> AdminRevokeInventoryItems(const PFPlayerItemManagementRevokeInventoryItemsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> AdminSubtractUserVirtualCurrency(const PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> ClientAddUserVirtualCurrency(const PFPlayerItemManagementClientAddUserVirtualCurrencyRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::ConfirmPurchaseResult> ClientConfirmPurchase(const PFPlayerItemManagementConfirmPurchaseRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::ConsumeItemResult> ClientConsumeItem(const PFPlayerItemManagementClientConsumeItemRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::ClientGetCharacterInventoryResult> ClientGetCharacterInventory(const PFPlayerItemManagementClientGetCharacterInventoryRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::GetPaymentTokenResult> ClientGetPaymentToken(const PFPlayerItemManagementGetPaymentTokenRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::GetPurchaseResult> ClientGetPurchase(const PFPlayerItemManagementGetPurchaseRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::ClientGetUserInventoryResult> ClientGetUserInventory(const PFPlayerItemManagementClientGetUserInventoryRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::PayForPurchaseResult> ClientPayForPurchase(const PFPlayerItemManagementPayForPurchaseRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::PurchaseItemResult> ClientPurchaseItem(const PFPlayerItemManagementPurchaseItemRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::RedeemCouponResult> ClientRedeemCoupon(const PFPlayerItemManagementClientRedeemCouponRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::StartPurchaseResult> ClientStartPurchase(const PFPlayerItemManagementStartPurchaseRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> ClientSubtractUserVirtualCurrency(const PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::UnlockContainerItemResult> ClientUnlockContainerInstance(const PFPlayerItemManagementClientUnlockContainerInstanceRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayerItemManagementModels::UnlockContainerItemResult> ClientUnlockContainerItem(const PFPlayerItemManagementClientUnlockContainerItemRequest& request, const TaskQueue& queue) const;
    static AsyncOp<PlayerItemManagementModels::ModifyCharacterVirtualCurrencyResult> ServerAddCharacterVirtualCurrency(const PFPlayerItemManagementAddCharacterVirtualCurrencyRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> ServerAddUserVirtualCurrency(const PFPlayerItemManagementServerAddUserVirtualCurrencyRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ConsumeItemResult> ServerConsumeItem(const PFPlayerItemManagementServerConsumeItemRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::EvaluateRandomResultTableResult> ServerEvaluateRandomResultTable(const PFPlayerItemManagementEvaluateRandomResultTableRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ServerGetCharacterInventoryResult> ServerGetCharacterInventory(const PFPlayerItemManagementServerGetCharacterInventoryRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<GetRandomResultTablesResult> ServerGetRandomResultTables(const PFPlayerItemManagementGetRandomResultTablesRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ServerGetUserInventoryResult> ServerGetUserInventory(const PFPlayerItemManagementServerGetUserInventoryRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::GrantItemsToCharacterResult> ServerGrantItemsToCharacter(const PFPlayerItemManagementGrantItemsToCharacterRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::GrantItemsToUserResult> ServerGrantItemsToUser(const PFPlayerItemManagementGrantItemsToUserRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::GrantItemsToUsersResult> ServerGrantItemsToUsers(const PFPlayerItemManagementGrantItemsToUsersRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyItemUsesResult> ServerModifyItemUses(const PFPlayerItemManagementModifyItemUsesRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerMoveItemToCharacterFromCharacter(const PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerMoveItemToCharacterFromUser(const PFPlayerItemManagementMoveItemToCharacterFromUserRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerMoveItemToUserFromCharacter(const PFPlayerItemManagementMoveItemToUserFromCharacterRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::RedeemCouponResult> ServerRedeemCoupon(const PFPlayerItemManagementServerRedeemCouponRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ReportPlayerServerResult> ServerReportPlayer(const PFPlayerItemManagementReportPlayerServerRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerRevokeInventoryItem(const PFPlayerItemManagementRevokeInventoryItemRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::RevokeInventoryItemsResult> ServerRevokeInventoryItems(const PFPlayerItemManagementRevokeInventoryItemsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyCharacterVirtualCurrencyResult> ServerSubtractCharacterVirtualCurrency(const PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> ServerSubtractUserVirtualCurrency(const PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::UnlockContainerItemResult> ServerUnlockContainerInstance(const PFPlayerItemManagementServerUnlockContainerInstanceRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::UnlockContainerItemResult> ServerUnlockContainerItem(const PFPlayerItemManagementServerUnlockContainerItemRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerUpdateUserInventoryItemCustomData(const PFPlayerItemManagementUpdateUserInventoryItemDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
