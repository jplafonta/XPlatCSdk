#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/PlayerItemManagement/PlayerItemManagementDataModels.h"

namespace PlayFabUnit
{

class AutoGenPlayerItemManagementTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestPlayerItemManagementAdminAddUserVirtualCurrency(TestContext& testContext);

    void TestPlayerItemManagementAdminCheckLimitedEditionItemAvailability(TestContext& testContext);

    void TestPlayerItemManagementAdminGetUserInventory(TestContext& testContext);

    void TestPlayerItemManagementAdminGrantItemsToUsers(TestContext& testContext);

    void TestPlayerItemManagementAdminIncrementLimitedEditionItemAvailability(TestContext& testContext);

    void TestPlayerItemManagementAdminRevokeInventoryItem(TestContext& testContext);

    void TestPlayerItemManagementAdminRevokeInventoryItems(TestContext& testContext);

    void TestPlayerItemManagementAdminSubtractUserVirtualCurrency(TestContext& testContext);

    void TestPlayerItemManagementClientAddUserVirtualCurrency(TestContext& testContext);

    void TestPlayerItemManagementClientConfirmPurchase(TestContext& testContext);

    void TestPlayerItemManagementClientConsumeItem(TestContext& testContext);

    void TestPlayerItemManagementClientGetCharacterInventory(TestContext& testContext);

    void TestPlayerItemManagementClientGetPaymentToken(TestContext& testContext);

    void TestPlayerItemManagementClientGetPurchase(TestContext& testContext);

    void TestPlayerItemManagementClientGetUserInventory(TestContext& testContext);

    void TestPlayerItemManagementClientPayForPurchase(TestContext& testContext);

    void TestPlayerItemManagementClientPurchaseItem(TestContext& testContext);

    void TestPlayerItemManagementClientRedeemCoupon(TestContext& testContext);

    void TestPlayerItemManagementClientStartPurchase(TestContext& testContext);

    void TestPlayerItemManagementClientSubtractUserVirtualCurrency(TestContext& testContext);

    void TestPlayerItemManagementClientUnlockContainerInstance(TestContext& testContext);

    void TestPlayerItemManagementClientUnlockContainerItem(TestContext& testContext);

    void TestPlayerItemManagementServerAddCharacterVirtualCurrency(TestContext& testContext);

    void TestPlayerItemManagementServerAddUserVirtualCurrency(TestContext& testContext);

    void TestPlayerItemManagementServerConsumeItem(TestContext& testContext);

    void TestPlayerItemManagementServerEvaluateRandomResultTable(TestContext& testContext);

    void TestPlayerItemManagementServerGetCharacterInventory(TestContext& testContext);

    void TestPlayerItemManagementServerGetRandomResultTables(TestContext& testContext);

    void TestPlayerItemManagementServerGetUserInventory(TestContext& testContext);

    void TestPlayerItemManagementServerGrantItemsToCharacter(TestContext& testContext);

    void TestPlayerItemManagementServerGrantItemsToUser(TestContext& testContext);

    void TestPlayerItemManagementServerGrantItemsToUsers(TestContext& testContext);

    void TestPlayerItemManagementServerModifyItemUses(TestContext& testContext);

    void TestPlayerItemManagementServerMoveItemToCharacterFromCharacter(TestContext& testContext);

    void TestPlayerItemManagementServerMoveItemToCharacterFromUser(TestContext& testContext);

    void TestPlayerItemManagementServerMoveItemToUserFromCharacter(TestContext& testContext);

    void TestPlayerItemManagementServerRedeemCoupon(TestContext& testContext);

    void TestPlayerItemManagementServerReportPlayer(TestContext& testContext);

    void TestPlayerItemManagementServerRevokeInventoryItem(TestContext& testContext);

    void TestPlayerItemManagementServerRevokeInventoryItems(TestContext& testContext);

    void TestPlayerItemManagementServerSubtractCharacterVirtualCurrency(TestContext& testContext);

    void TestPlayerItemManagementServerSubtractUserVirtualCurrency(TestContext& testContext);

    void TestPlayerItemManagementServerUnlockContainerInstance(TestContext& testContext);

    void TestPlayerItemManagementServerUnlockContainerItem(TestContext& testContext);

    void TestPlayerItemManagementServerUpdateUserInventoryItemCustomData(TestContext& testContext);


protected:
    void AddTests();

    static void LogAdminAddUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::AdminAddUserVirtualCurrencyRequest* request, const char* testName );
    static void FillAdminAddUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::AdminAddUserVirtualCurrencyRequest* request );
    static HRESULT LogPFPlayerItemManagementModifyUserVirtualCurrencyResult( PFPlayerItemManagementModifyUserVirtualCurrencyResult* result );
    static HRESULT ValidatePFPlayerItemManagementModifyUserVirtualCurrencyResult( PFPlayerItemManagementModifyUserVirtualCurrencyResult* result );

    static void LogCheckLimitedEditionItemAvailabilityRequest( PlayFab::PlayerItemManagementModels::CheckLimitedEditionItemAvailabilityRequest* request, const char* testName );
    static void FillCheckLimitedEditionItemAvailabilityRequest( PlayFab::PlayerItemManagementModels::CheckLimitedEditionItemAvailabilityRequest* request );
    static HRESULT LogPFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult( PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult* result );
    static HRESULT ValidatePFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult( PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult* result );

    static void LogAdminGetUserInventoryRequest( PlayFab::PlayerItemManagementModels::AdminGetUserInventoryRequest* request, const char* testName );
    static void FillAdminGetUserInventoryRequest( PlayFab::PlayerItemManagementModels::AdminGetUserInventoryRequest* request );
    static HRESULT LogPFPlayerItemManagementAdminGetUserInventoryResult( PFPlayerItemManagementAdminGetUserInventoryResult* result );
    static HRESULT ValidatePFPlayerItemManagementAdminGetUserInventoryResult( PFPlayerItemManagementAdminGetUserInventoryResult* result );

    static void LogGrantItemsToUsersRequest( PlayFab::PlayerItemManagementModels::GrantItemsToUsersRequest* request, const char* testName );
    static void FillGrantItemsToUsersRequest( PlayFab::PlayerItemManagementModels::GrantItemsToUsersRequest* request );
    static HRESULT LogPFPlayerItemManagementGrantItemsToUsersResult( PFPlayerItemManagementGrantItemsToUsersResult* result );
    static HRESULT ValidatePFPlayerItemManagementGrantItemsToUsersResult( PFPlayerItemManagementGrantItemsToUsersResult* result );

    static void LogIncrementLimitedEditionItemAvailabilityRequest( PlayFab::PlayerItemManagementModels::IncrementLimitedEditionItemAvailabilityRequest* request, const char* testName );
    static void FillIncrementLimitedEditionItemAvailabilityRequest( PlayFab::PlayerItemManagementModels::IncrementLimitedEditionItemAvailabilityRequest* request );

    static void LogRevokeInventoryItemRequest( PlayFab::PlayerItemManagementModels::RevokeInventoryItemRequest* request, const char* testName );
    static void FillRevokeInventoryItemRequest( PlayFab::PlayerItemManagementModels::RevokeInventoryItemRequest* request );

    static void LogRevokeInventoryItemsRequest( PlayFab::PlayerItemManagementModels::RevokeInventoryItemsRequest* request, const char* testName );
    static void FillRevokeInventoryItemsRequest( PlayFab::PlayerItemManagementModels::RevokeInventoryItemsRequest* request );
    static HRESULT LogPFPlayerItemManagementRevokeInventoryItemsResult( PFPlayerItemManagementRevokeInventoryItemsResult* result );
    static HRESULT ValidatePFPlayerItemManagementRevokeInventoryItemsResult( PFPlayerItemManagementRevokeInventoryItemsResult* result );

    static void LogAdminSubtractUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::AdminSubtractUserVirtualCurrencyRequest* request, const char* testName );
    static void FillAdminSubtractUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::AdminSubtractUserVirtualCurrencyRequest* request );

    static void LogClientAddUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ClientAddUserVirtualCurrencyRequest* request, const char* testName );
    static void FillClientAddUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ClientAddUserVirtualCurrencyRequest* request );

    static void LogConfirmPurchaseRequest( PlayFab::PlayerItemManagementModels::ConfirmPurchaseRequest* request, const char* testName );
    static void FillConfirmPurchaseRequest( PlayFab::PlayerItemManagementModels::ConfirmPurchaseRequest* request );
    static HRESULT LogPFPlayerItemManagementConfirmPurchaseResult( PFPlayerItemManagementConfirmPurchaseResult* result );
    static HRESULT ValidatePFPlayerItemManagementConfirmPurchaseResult( PFPlayerItemManagementConfirmPurchaseResult* result );

    static void LogClientConsumeItemRequest( PlayFab::PlayerItemManagementModels::ClientConsumeItemRequest* request, const char* testName );
    static void FillClientConsumeItemRequest( PlayFab::PlayerItemManagementModels::ClientConsumeItemRequest* request );
    static HRESULT LogPFPlayerItemManagementConsumeItemResult( PFPlayerItemManagementConsumeItemResult* result );
    static HRESULT ValidatePFPlayerItemManagementConsumeItemResult( PFPlayerItemManagementConsumeItemResult* result );

    static void LogClientGetCharacterInventoryRequest( PlayFab::PlayerItemManagementModels::ClientGetCharacterInventoryRequest* request, const char* testName );
    static void FillClientGetCharacterInventoryRequest( PlayFab::PlayerItemManagementModels::ClientGetCharacterInventoryRequest* request );
    static HRESULT LogPFPlayerItemManagementClientGetCharacterInventoryResult( PFPlayerItemManagementClientGetCharacterInventoryResult* result );
    static HRESULT ValidatePFPlayerItemManagementClientGetCharacterInventoryResult( PFPlayerItemManagementClientGetCharacterInventoryResult* result );

    static void LogGetPaymentTokenRequest( PlayFab::PlayerItemManagementModels::GetPaymentTokenRequest* request, const char* testName );
    static void FillGetPaymentTokenRequest( PlayFab::PlayerItemManagementModels::GetPaymentTokenRequest* request );
    static HRESULT LogPFPlayerItemManagementGetPaymentTokenResult( PFPlayerItemManagementGetPaymentTokenResult* result );
    static HRESULT ValidatePFPlayerItemManagementGetPaymentTokenResult( PFPlayerItemManagementGetPaymentTokenResult* result );

    static void LogGetPurchaseRequest( PlayFab::PlayerItemManagementModels::GetPurchaseRequest* request, const char* testName );
    static void FillGetPurchaseRequest( PlayFab::PlayerItemManagementModels::GetPurchaseRequest* request );
    static HRESULT LogPFPlayerItemManagementGetPurchaseResult( PFPlayerItemManagementGetPurchaseResult* result );
    static HRESULT ValidatePFPlayerItemManagementGetPurchaseResult( PFPlayerItemManagementGetPurchaseResult* result );

    static void LogClientGetUserInventoryRequest( PlayFab::PlayerItemManagementModels::ClientGetUserInventoryRequest* request, const char* testName );
    static void FillClientGetUserInventoryRequest( PlayFab::PlayerItemManagementModels::ClientGetUserInventoryRequest* request );
    static HRESULT LogPFPlayerItemManagementClientGetUserInventoryResult( PFPlayerItemManagementClientGetUserInventoryResult* result );
    static HRESULT ValidatePFPlayerItemManagementClientGetUserInventoryResult( PFPlayerItemManagementClientGetUserInventoryResult* result );

    static void LogPayForPurchaseRequest( PlayFab::PlayerItemManagementModels::PayForPurchaseRequest* request, const char* testName );
    static void FillPayForPurchaseRequest( PlayFab::PlayerItemManagementModels::PayForPurchaseRequest* request );
    static HRESULT LogPFPlayerItemManagementPayForPurchaseResult( PFPlayerItemManagementPayForPurchaseResult* result );
    static HRESULT ValidatePFPlayerItemManagementPayForPurchaseResult( PFPlayerItemManagementPayForPurchaseResult* result );

    static void LogPurchaseItemRequest( PlayFab::PlayerItemManagementModels::PurchaseItemRequest* request, const char* testName );
    static void FillPurchaseItemRequest( PlayFab::PlayerItemManagementModels::PurchaseItemRequest* request );
    static HRESULT LogPFPlayerItemManagementPurchaseItemResult( PFPlayerItemManagementPurchaseItemResult* result );
    static HRESULT ValidatePFPlayerItemManagementPurchaseItemResult( PFPlayerItemManagementPurchaseItemResult* result );

    static void LogClientRedeemCouponRequest( PlayFab::PlayerItemManagementModels::ClientRedeemCouponRequest* request, const char* testName );
    static void FillClientRedeemCouponRequest( PlayFab::PlayerItemManagementModels::ClientRedeemCouponRequest* request );
    static HRESULT LogPFPlayerItemManagementRedeemCouponResult( PFPlayerItemManagementRedeemCouponResult* result );
    static HRESULT ValidatePFPlayerItemManagementRedeemCouponResult( PFPlayerItemManagementRedeemCouponResult* result );

    static void LogStartPurchaseRequest( PlayFab::PlayerItemManagementModels::StartPurchaseRequest* request, const char* testName );
    static void FillStartPurchaseRequest( PlayFab::PlayerItemManagementModels::StartPurchaseRequest* request );
    static HRESULT LogPFPlayerItemManagementStartPurchaseResult( PFPlayerItemManagementStartPurchaseResult* result );
    static HRESULT ValidatePFPlayerItemManagementStartPurchaseResult( PFPlayerItemManagementStartPurchaseResult* result );

    static void LogClientSubtractUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ClientSubtractUserVirtualCurrencyRequest* request, const char* testName );
    static void FillClientSubtractUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ClientSubtractUserVirtualCurrencyRequest* request );

    static void LogClientUnlockContainerInstanceRequest( PlayFab::PlayerItemManagementModels::ClientUnlockContainerInstanceRequest* request, const char* testName );
    static void FillClientUnlockContainerInstanceRequest( PlayFab::PlayerItemManagementModels::ClientUnlockContainerInstanceRequest* request );
    static HRESULT LogPFPlayerItemManagementUnlockContainerItemResult( PFPlayerItemManagementUnlockContainerItemResult* result );
    static HRESULT ValidatePFPlayerItemManagementUnlockContainerItemResult( PFPlayerItemManagementUnlockContainerItemResult* result );

    static void LogClientUnlockContainerItemRequest( PlayFab::PlayerItemManagementModels::ClientUnlockContainerItemRequest* request, const char* testName );
    static void FillClientUnlockContainerItemRequest( PlayFab::PlayerItemManagementModels::ClientUnlockContainerItemRequest* request );

    static void LogAddCharacterVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::AddCharacterVirtualCurrencyRequest* request, const char* testName );
    static void FillAddCharacterVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::AddCharacterVirtualCurrencyRequest* request );
    static HRESULT LogPFPlayerItemManagementModifyCharacterVirtualCurrencyResult( PFPlayerItemManagementModifyCharacterVirtualCurrencyResult* result );
    static HRESULT ValidatePFPlayerItemManagementModifyCharacterVirtualCurrencyResult( PFPlayerItemManagementModifyCharacterVirtualCurrencyResult* result );

    static void LogServerAddUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ServerAddUserVirtualCurrencyRequest* request, const char* testName );
    static void FillServerAddUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ServerAddUserVirtualCurrencyRequest* request );

    static void LogServerConsumeItemRequest( PlayFab::PlayerItemManagementModels::ServerConsumeItemRequest* request, const char* testName );
    static void FillServerConsumeItemRequest( PlayFab::PlayerItemManagementModels::ServerConsumeItemRequest* request );

    static void LogEvaluateRandomResultTableRequest( PlayFab::PlayerItemManagementModels::EvaluateRandomResultTableRequest* request, const char* testName );
    static void FillEvaluateRandomResultTableRequest( PlayFab::PlayerItemManagementModels::EvaluateRandomResultTableRequest* request );
    static HRESULT LogPFPlayerItemManagementEvaluateRandomResultTableResult( PFPlayerItemManagementEvaluateRandomResultTableResult* result );
    static HRESULT ValidatePFPlayerItemManagementEvaluateRandomResultTableResult( PFPlayerItemManagementEvaluateRandomResultTableResult* result );

    static void LogServerGetCharacterInventoryRequest( PlayFab::PlayerItemManagementModels::ServerGetCharacterInventoryRequest* request, const char* testName );
    static void FillServerGetCharacterInventoryRequest( PlayFab::PlayerItemManagementModels::ServerGetCharacterInventoryRequest* request );
    static HRESULT LogPFPlayerItemManagementServerGetCharacterInventoryResult( PFPlayerItemManagementServerGetCharacterInventoryResult* result );
    static HRESULT ValidatePFPlayerItemManagementServerGetCharacterInventoryResult( PFPlayerItemManagementServerGetCharacterInventoryResult* result );

    static void LogGetRandomResultTablesRequest( PlayFab::PlayerItemManagementModels::GetRandomResultTablesRequest* request, const char* testName );
    static void FillGetRandomResultTablesRequest( PlayFab::PlayerItemManagementModels::GetRandomResultTablesRequest* request );
    static HRESULT LogPFGetRandomResultTablesResult( PFGetRandomResultTablesResult* result );
    static HRESULT ValidatePFGetRandomResultTablesResult( PFGetRandomResultTablesResult* result );

    static void LogServerGetUserInventoryRequest( PlayFab::PlayerItemManagementModels::ServerGetUserInventoryRequest* request, const char* testName );
    static void FillServerGetUserInventoryRequest( PlayFab::PlayerItemManagementModels::ServerGetUserInventoryRequest* request );
    static HRESULT LogPFPlayerItemManagementServerGetUserInventoryResult( PFPlayerItemManagementServerGetUserInventoryResult* result );
    static HRESULT ValidatePFPlayerItemManagementServerGetUserInventoryResult( PFPlayerItemManagementServerGetUserInventoryResult* result );

    static void LogGrantItemsToCharacterRequest( PlayFab::PlayerItemManagementModels::GrantItemsToCharacterRequest* request, const char* testName );
    static void FillGrantItemsToCharacterRequest( PlayFab::PlayerItemManagementModels::GrantItemsToCharacterRequest* request );
    static HRESULT LogPFPlayerItemManagementGrantItemsToCharacterResult( PFPlayerItemManagementGrantItemsToCharacterResult* result );
    static HRESULT ValidatePFPlayerItemManagementGrantItemsToCharacterResult( PFPlayerItemManagementGrantItemsToCharacterResult* result );

    static void LogGrantItemsToUserRequest( PlayFab::PlayerItemManagementModels::GrantItemsToUserRequest* request, const char* testName );
    static void FillGrantItemsToUserRequest( PlayFab::PlayerItemManagementModels::GrantItemsToUserRequest* request );
    static HRESULT LogPFPlayerItemManagementGrantItemsToUserResult( PFPlayerItemManagementGrantItemsToUserResult* result );
    static HRESULT ValidatePFPlayerItemManagementGrantItemsToUserResult( PFPlayerItemManagementGrantItemsToUserResult* result );


    static void LogModifyItemUsesRequest( PlayFab::PlayerItemManagementModels::ModifyItemUsesRequest* request, const char* testName );
    static void FillModifyItemUsesRequest( PlayFab::PlayerItemManagementModels::ModifyItemUsesRequest* request );
    static HRESULT LogPFPlayerItemManagementModifyItemUsesResult( PFPlayerItemManagementModifyItemUsesResult* result );
    static HRESULT ValidatePFPlayerItemManagementModifyItemUsesResult( PFPlayerItemManagementModifyItemUsesResult* result );

    static void LogMoveItemToCharacterFromCharacterRequest( PlayFab::PlayerItemManagementModels::MoveItemToCharacterFromCharacterRequest* request, const char* testName );
    static void FillMoveItemToCharacterFromCharacterRequest( PlayFab::PlayerItemManagementModels::MoveItemToCharacterFromCharacterRequest* request );

    static void LogMoveItemToCharacterFromUserRequest( PlayFab::PlayerItemManagementModels::MoveItemToCharacterFromUserRequest* request, const char* testName );
    static void FillMoveItemToCharacterFromUserRequest( PlayFab::PlayerItemManagementModels::MoveItemToCharacterFromUserRequest* request );

    static void LogMoveItemToUserFromCharacterRequest( PlayFab::PlayerItemManagementModels::MoveItemToUserFromCharacterRequest* request, const char* testName );
    static void FillMoveItemToUserFromCharacterRequest( PlayFab::PlayerItemManagementModels::MoveItemToUserFromCharacterRequest* request );

    static void LogServerRedeemCouponRequest( PlayFab::PlayerItemManagementModels::ServerRedeemCouponRequest* request, const char* testName );
    static void FillServerRedeemCouponRequest( PlayFab::PlayerItemManagementModels::ServerRedeemCouponRequest* request );

    static void LogReportPlayerServerRequest( PlayFab::PlayerItemManagementModels::ReportPlayerServerRequest* request, const char* testName );
    static void FillReportPlayerServerRequest( PlayFab::PlayerItemManagementModels::ReportPlayerServerRequest* request );
    static HRESULT LogPFPlayerItemManagementReportPlayerServerResult( PFPlayerItemManagementReportPlayerServerResult* result );
    static HRESULT ValidatePFPlayerItemManagementReportPlayerServerResult( PFPlayerItemManagementReportPlayerServerResult* result );



    static void LogSubtractCharacterVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::SubtractCharacterVirtualCurrencyRequest* request, const char* testName );
    static void FillSubtractCharacterVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::SubtractCharacterVirtualCurrencyRequest* request );

    static void LogServerSubtractUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ServerSubtractUserVirtualCurrencyRequest* request, const char* testName );
    static void FillServerSubtractUserVirtualCurrencyRequest( PlayFab::PlayerItemManagementModels::ServerSubtractUserVirtualCurrencyRequest* request );

    static void LogServerUnlockContainerInstanceRequest( PlayFab::PlayerItemManagementModels::ServerUnlockContainerInstanceRequest* request, const char* testName );
    static void FillServerUnlockContainerInstanceRequest( PlayFab::PlayerItemManagementModels::ServerUnlockContainerInstanceRequest* request );

    static void LogServerUnlockContainerItemRequest( PlayFab::PlayerItemManagementModels::ServerUnlockContainerItemRequest* request, const char* testName );
    static void FillServerUnlockContainerItemRequest( PlayFab::PlayerItemManagementModels::ServerUnlockContainerItemRequest* request );

    static void LogUpdateUserInventoryItemDataRequest( PlayFab::PlayerItemManagementModels::UpdateUserInventoryItemDataRequest* request, const char* testName );
    static void FillUpdateUserInventoryItemDataRequest( PlayFab::PlayerItemManagementModels::UpdateUserInventoryItemDataRequest* request );

    struct PlayerItemManagementTestData
    {
        ~PlayerItemManagementTestData()
        {

        }

    };

    static PlayerItemManagementTestData testData;

public:
    PFStateHandle stateHandle{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle2{ nullptr };
    PFEntityHandle entityHandle2{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo2{ nullptr };
    PFEntityHandle titleEntityHandle{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
