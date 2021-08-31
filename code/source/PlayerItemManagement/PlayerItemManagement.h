#pragma once

#include "PlayerItemManagementDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class PlayerItemManagementAPI
{
public:
    PlayerItemManagementAPI() = delete;
    PlayerItemManagementAPI(const PlayerItemManagementAPI& source) = delete;
    PlayerItemManagementAPI& operator=(const PlayerItemManagementAPI& source) = delete;
    ~PlayerItemManagementAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> AdminAddUserVirtualCurrency(SharedPtr<GlobalState const> state, const PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::CheckLimitedEditionItemAvailabilityResult> AdminCheckLimitedEditionItemAvailability(SharedPtr<GlobalState const> state, const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::AdminGetUserInventoryResult> AdminGetUserInventory(SharedPtr<GlobalState const> state, const PFPlayerItemManagementAdminGetUserInventoryRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::GrantItemsToUsersResult> AdminGrantItemsToUsers(SharedPtr<GlobalState const> state, const PFPlayerItemManagementGrantItemsToUsersRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminIncrementLimitedEditionItemAvailability(SharedPtr<GlobalState const> state, const PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminRevokeInventoryItem(SharedPtr<GlobalState const> state, const PFPlayerItemManagementRevokeInventoryItemRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::RevokeInventoryItemsResult> AdminRevokeInventoryItems(SharedPtr<GlobalState const> state, const PFPlayerItemManagementRevokeInventoryItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> AdminSubtractUserVirtualCurrency(SharedPtr<GlobalState const> state, const PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> ClientAddUserVirtualCurrency(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementClientAddUserVirtualCurrencyRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ConfirmPurchaseResult> ClientConfirmPurchase(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementConfirmPurchaseRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ConsumeItemResult> ClientConsumeItem(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementClientConsumeItemRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ClientGetCharacterInventoryResult> ClientGetCharacterInventory(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementClientGetCharacterInventoryRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::GetPaymentTokenResult> ClientGetPaymentToken(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementGetPaymentTokenRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::GetPurchaseResult> ClientGetPurchase(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementGetPurchaseRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ClientGetUserInventoryResult> ClientGetUserInventory(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementClientGetUserInventoryRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::PayForPurchaseResult> ClientPayForPurchase(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementPayForPurchaseRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::PurchaseItemResult> ClientPurchaseItem(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementPurchaseItemRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::RedeemCouponResult> ClientRedeemCoupon(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementClientRedeemCouponRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::StartPurchaseResult> ClientStartPurchase(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementStartPurchaseRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> ClientSubtractUserVirtualCurrency(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::UnlockContainerItemResult> ClientUnlockContainerInstance(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementClientUnlockContainerInstanceRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::UnlockContainerItemResult> ClientUnlockContainerItem(SharedPtr<TitlePlayer> entity, const PFPlayerItemManagementClientUnlockContainerItemRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyCharacterVirtualCurrencyResult> ServerAddCharacterVirtualCurrency(SharedPtr<GlobalState const> state, const PFPlayerItemManagementAddCharacterVirtualCurrencyRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> ServerAddUserVirtualCurrency(SharedPtr<GlobalState const> state, const PFPlayerItemManagementServerAddUserVirtualCurrencyRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ConsumeItemResult> ServerConsumeItem(SharedPtr<GlobalState const> state, const PFPlayerItemManagementServerConsumeItemRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::EvaluateRandomResultTableResult> ServerEvaluateRandomResultTable(SharedPtr<GlobalState const> state, const PFPlayerItemManagementEvaluateRandomResultTableRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ServerGetCharacterInventoryResult> ServerGetCharacterInventory(SharedPtr<GlobalState const> state, const PFPlayerItemManagementServerGetCharacterInventoryRequest& request, const TaskQueue& queue);
    static AsyncOp<GetRandomResultTablesResult> ServerGetRandomResultTables(SharedPtr<GlobalState const> state, const PFPlayerItemManagementGetRandomResultTablesRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ServerGetUserInventoryResult> ServerGetUserInventory(SharedPtr<GlobalState const> state, const PFPlayerItemManagementServerGetUserInventoryRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::GrantItemsToCharacterResult> ServerGrantItemsToCharacter(SharedPtr<GlobalState const> state, const PFPlayerItemManagementGrantItemsToCharacterRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::GrantItemsToUserResult> ServerGrantItemsToUser(SharedPtr<GlobalState const> state, const PFPlayerItemManagementGrantItemsToUserRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::GrantItemsToUsersResult> ServerGrantItemsToUsers(SharedPtr<GlobalState const> state, const PFPlayerItemManagementGrantItemsToUsersRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyItemUsesResult> ServerModifyItemUses(SharedPtr<GlobalState const> state, const PFPlayerItemManagementModifyItemUsesRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerMoveItemToCharacterFromCharacter(SharedPtr<GlobalState const> state, const PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerMoveItemToCharacterFromUser(SharedPtr<GlobalState const> state, const PFPlayerItemManagementMoveItemToCharacterFromUserRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerMoveItemToUserFromCharacter(SharedPtr<GlobalState const> state, const PFPlayerItemManagementMoveItemToUserFromCharacterRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::RedeemCouponResult> ServerRedeemCoupon(SharedPtr<GlobalState const> state, const PFPlayerItemManagementServerRedeemCouponRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ReportPlayerServerResult> ServerReportPlayer(SharedPtr<GlobalState const> state, const PFPlayerItemManagementReportPlayerServerRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerRevokeInventoryItem(SharedPtr<GlobalState const> state, const PFPlayerItemManagementRevokeInventoryItemRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::RevokeInventoryItemsResult> ServerRevokeInventoryItems(SharedPtr<GlobalState const> state, const PFPlayerItemManagementRevokeInventoryItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyCharacterVirtualCurrencyResult> ServerSubtractCharacterVirtualCurrency(SharedPtr<GlobalState const> state, const PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::ModifyUserVirtualCurrencyResult> ServerSubtractUserVirtualCurrency(SharedPtr<GlobalState const> state, const PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::UnlockContainerItemResult> ServerUnlockContainerInstance(SharedPtr<GlobalState const> state, const PFPlayerItemManagementServerUnlockContainerInstanceRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayerItemManagementModels::UnlockContainerItemResult> ServerUnlockContainerItem(SharedPtr<GlobalState const> state, const PFPlayerItemManagementServerUnlockContainerItemRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerUpdateUserInventoryItemCustomData(SharedPtr<GlobalState const> state, const PFPlayerItemManagementUpdateUserInventoryItemDataRequest& request, const TaskQueue& queue);
};

}
