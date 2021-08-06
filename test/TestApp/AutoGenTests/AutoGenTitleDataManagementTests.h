#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/TitleDataManagement/TitleDataManagementDataModels.h"

namespace PlayFabUnit
{

class AutoGenTitleDataManagementTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestTitleDataManagementAdminAddLocalizedNews(TestContext& testContext); 
    void TestTitleDataManagementAdminAddNews(TestContext& testContext); 
    void TestTitleDataManagementAdminAddVirtualCurrencyTypes(TestContext& testContext); 
    void TestTitleDataManagementAdminDeleteStore(TestContext& testContext); 
    void TestTitleDataManagementAdminDeleteTitleDataOverride(TestContext& testContext); 
    void TestTitleDataManagementAdminGetCatalogItems(TestContext& testContext); 
    void TestTitleDataManagementAdminGetPublisherData(TestContext& testContext); 
    void TestTitleDataManagementAdminGetRandomResultTables(TestContext& testContext); 
    void TestTitleDataManagementAdminGetStoreItems(TestContext& testContext); 
    void TestTitleDataManagementAdminGetTitleData(TestContext& testContext); 
    void TestTitleDataManagementAdminGetTitleInternalData(TestContext& testContext); 
    void TestTitleDataManagementAdminListVirtualCurrencyTypes(TestContext& testContext); 
    void TestTitleDataManagementAdminRemoveVirtualCurrencyTypes(TestContext& testContext); 
    void TestTitleDataManagementAdminSetCatalogItems(TestContext& testContext); 
    void TestTitleDataManagementAdminSetStoreItems(TestContext& testContext); 
    void TestTitleDataManagementAdminSetTitleData(TestContext& testContext); 
    void TestTitleDataManagementAdminSetTitleDataAndOverrides(TestContext& testContext); 
    void TestTitleDataManagementAdminSetTitleInternalData(TestContext& testContext); 
    void TestTitleDataManagementAdminSetupPushNotification(TestContext& testContext); 
    void TestTitleDataManagementAdminUpdateCatalogItems(TestContext& testContext); 
    void TestTitleDataManagementAdminUpdateRandomResultTables(TestContext& testContext); 
    void TestTitleDataManagementAdminUpdateStoreItems(TestContext& testContext); 
    void TestTitleDataManagementClientGetCatalogItems(TestContext& testContext); 
    void TestTitleDataManagementClientGetPublisherData(TestContext& testContext); 
    void TestTitleDataManagementClientGetStoreItems(TestContext& testContext); 
    void TestTitleDataManagementClientGetTime(TestContext& testContext); 
    void TestTitleDataManagementClientGetTitleData(TestContext& testContext); 
    void TestTitleDataManagementClientGetTitleNews(TestContext& testContext); 
    void TestTitleDataManagementServerGetCatalogItems(TestContext& testContext); 
    void TestTitleDataManagementServerGetPublisherData(TestContext& testContext); 
    void TestTitleDataManagementServerGetStoreItems(TestContext& testContext); 
    void TestTitleDataManagementServerGetTime(TestContext& testContext); 
    void TestTitleDataManagementServerGetTitleData(TestContext& testContext); 
    void TestTitleDataManagementServerGetTitleInternalData(TestContext& testContext); 
    void TestTitleDataManagementServerGetTitleNews(TestContext& testContext); 
    void TestTitleDataManagementServerSetPublisherData(TestContext& testContext); 
    void TestTitleDataManagementServerSetTitleData(TestContext& testContext); 
    void TestTitleDataManagementServerSetTitleInternalData(TestContext& testContext); 


protected:
    void AddTests();


    static void LogAddLocalizedNewsRequest( PlayFab::TitleDataManagementModels::AddLocalizedNewsRequest* request, const char* testName );
    static void FillAddLocalizedNewsRequest( PlayFab::TitleDataManagementModels::AddLocalizedNewsRequest* request );
    static void LogAddNewsRequest( PlayFab::TitleDataManagementModels::AddNewsRequest* request, const char* testName );
    static void FillAddNewsRequest( PlayFab::TitleDataManagementModels::AddNewsRequest* request );
    static HRESULT LogPFTitleDataManagementAddNewsResult( PFTitleDataManagementAddNewsResult* result );
    static HRESULT ValidatePFTitleDataManagementAddNewsResult( PFTitleDataManagementAddNewsResult* result );
    static void LogAddVirtualCurrencyTypesRequest( PlayFab::TitleDataManagementModels::AddVirtualCurrencyTypesRequest* request, const char* testName );
    static void FillAddVirtualCurrencyTypesRequest( PlayFab::TitleDataManagementModels::AddVirtualCurrencyTypesRequest* request );
    static void LogDeleteStoreRequest( PlayFab::TitleDataManagementModels::DeleteStoreRequest* request, const char* testName );
    static void FillDeleteStoreRequest( PlayFab::TitleDataManagementModels::DeleteStoreRequest* request );
    static void LogDeleteTitleDataOverrideRequest( PlayFab::TitleDataManagementModels::DeleteTitleDataOverrideRequest* request, const char* testName );
    static void FillDeleteTitleDataOverrideRequest( PlayFab::TitleDataManagementModels::DeleteTitleDataOverrideRequest* request );
    static void LogGetCatalogItemsRequest( PlayFab::TitleDataManagementModels::GetCatalogItemsRequest* request, const char* testName );
    static void FillGetCatalogItemsRequest( PlayFab::TitleDataManagementModels::GetCatalogItemsRequest* request );
    static HRESULT LogPFTitleDataManagementGetCatalogItemsResult( PFTitleDataManagementGetCatalogItemsResult* result );
    static HRESULT ValidatePFTitleDataManagementGetCatalogItemsResult( PFTitleDataManagementGetCatalogItemsResult* result );
    static void LogGetPublisherDataRequest( PlayFab::TitleDataManagementModels::GetPublisherDataRequest* request, const char* testName );
    static void FillGetPublisherDataRequest( PlayFab::TitleDataManagementModels::GetPublisherDataRequest* request );
    static HRESULT LogPFTitleDataManagementGetPublisherDataResult( PFTitleDataManagementGetPublisherDataResult* result );
    static HRESULT ValidatePFTitleDataManagementGetPublisherDataResult( PFTitleDataManagementGetPublisherDataResult* result );
    static void LogGetRandomResultTablesRequest( PlayFab::TitleDataManagementModels::GetRandomResultTablesRequest* request, const char* testName );
    static void FillGetRandomResultTablesRequest( PlayFab::TitleDataManagementModels::GetRandomResultTablesRequest* request );
    static HRESULT LogPFGetRandomResultTablesResult( PFGetRandomResultTablesResult* result );
    static HRESULT ValidatePFGetRandomResultTablesResult( PFGetRandomResultTablesResult* result );
    static void LogGetStoreItemsRequest( PlayFab::TitleDataManagementModels::GetStoreItemsRequest* request, const char* testName );
    static void FillGetStoreItemsRequest( PlayFab::TitleDataManagementModels::GetStoreItemsRequest* request );
    static HRESULT LogPFTitleDataManagementGetStoreItemsResult( PFTitleDataManagementGetStoreItemsResult* result );
    static HRESULT ValidatePFTitleDataManagementGetStoreItemsResult( PFTitleDataManagementGetStoreItemsResult* result );
    static void LogGetTitleDataRequest( PlayFab::TitleDataManagementModels::GetTitleDataRequest* request, const char* testName );
    static void FillGetTitleDataRequest( PlayFab::TitleDataManagementModels::GetTitleDataRequest* request );
    static HRESULT LogPFTitleDataManagementGetTitleDataResult( PFTitleDataManagementGetTitleDataResult* result );
    static HRESULT ValidatePFTitleDataManagementGetTitleDataResult( PFTitleDataManagementGetTitleDataResult* result );
    static HRESULT LogPFTitleDataManagementListVirtualCurrencyTypesResult( PFTitleDataManagementListVirtualCurrencyTypesResult* result );
    static HRESULT ValidatePFTitleDataManagementListVirtualCurrencyTypesResult( PFTitleDataManagementListVirtualCurrencyTypesResult* result );
    static void LogRemoveVirtualCurrencyTypesRequest( PlayFab::TitleDataManagementModels::RemoveVirtualCurrencyTypesRequest* request, const char* testName );
    static void FillRemoveVirtualCurrencyTypesRequest( PlayFab::TitleDataManagementModels::RemoveVirtualCurrencyTypesRequest* request );
    static void LogUpdateCatalogItemsRequest( PlayFab::TitleDataManagementModels::UpdateCatalogItemsRequest* request, const char* testName );
    static void FillUpdateCatalogItemsRequest( PlayFab::TitleDataManagementModels::UpdateCatalogItemsRequest* request );
    static void LogUpdateStoreItemsRequest( PlayFab::TitleDataManagementModels::UpdateStoreItemsRequest* request, const char* testName );
    static void FillUpdateStoreItemsRequest( PlayFab::TitleDataManagementModels::UpdateStoreItemsRequest* request );
    static void LogSetTitleDataRequest( PlayFab::TitleDataManagementModels::SetTitleDataRequest* request, const char* testName );
    static void FillSetTitleDataRequest( PlayFab::TitleDataManagementModels::SetTitleDataRequest* request );
    static void LogSetTitleDataAndOverridesRequest( PlayFab::TitleDataManagementModels::SetTitleDataAndOverridesRequest* request, const char* testName );
    static void FillSetTitleDataAndOverridesRequest( PlayFab::TitleDataManagementModels::SetTitleDataAndOverridesRequest* request );
    static void LogSetupPushNotificationRequest( PlayFab::TitleDataManagementModels::SetupPushNotificationRequest* request, const char* testName );
    static void FillSetupPushNotificationRequest( PlayFab::TitleDataManagementModels::SetupPushNotificationRequest* request );
    static HRESULT LogPFTitleDataManagementSetupPushNotificationResult( PFTitleDataManagementSetupPushNotificationResult* result );
    static HRESULT ValidatePFTitleDataManagementSetupPushNotificationResult( PFTitleDataManagementSetupPushNotificationResult* result );
    static void LogUpdateRandomResultTablesRequest( PlayFab::TitleDataManagementModels::UpdateRandomResultTablesRequest* request, const char* testName );
    static void FillUpdateRandomResultTablesRequest( PlayFab::TitleDataManagementModels::UpdateRandomResultTablesRequest* request );
    static HRESULT LogPFTitleDataManagementGetTimeResult( PFTitleDataManagementGetTimeResult* result );
    static HRESULT ValidatePFTitleDataManagementGetTimeResult( PFTitleDataManagementGetTimeResult* result );
    static void LogGetTitleNewsRequest( PlayFab::TitleDataManagementModels::GetTitleNewsRequest* request, const char* testName );
    static void FillGetTitleNewsRequest( PlayFab::TitleDataManagementModels::GetTitleNewsRequest* request );
    static HRESULT LogPFTitleDataManagementGetTitleNewsResult( PFTitleDataManagementGetTitleNewsResult* result );
    static HRESULT ValidatePFTitleDataManagementGetTitleNewsResult( PFTitleDataManagementGetTitleNewsResult* result );
    static void LogGetStoreItemsServerRequest( PlayFab::TitleDataManagementModels::GetStoreItemsServerRequest* request, const char* testName );
    static void FillGetStoreItemsServerRequest( PlayFab::TitleDataManagementModels::GetStoreItemsServerRequest* request );
    static void LogSetPublisherDataRequest( PlayFab::SetPublisherDataRequest* request, const char* testName );
    static void FillSetPublisherDataRequest( PlayFab::SetPublisherDataRequest* request );

public:
    PFStateHandle stateHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
