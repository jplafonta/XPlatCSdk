#pragma once

#include "TitleDataManagementDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class TitleDataManagementAPI
{
public:
    TitleDataManagementAPI() = delete;
    TitleDataManagementAPI(const TitleDataManagementAPI& source) = delete;
    TitleDataManagementAPI& operator=(const TitleDataManagementAPI& source) = delete;
    ~TitleDataManagementAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminAddLocalizedNews(SharedPtr<GlobalState const> state, const PFTitleDataManagementAddLocalizedNewsRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::AddNewsResult> AdminAddNews(SharedPtr<GlobalState const> state, const PFTitleDataManagementAddNewsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminAddVirtualCurrencyTypes(SharedPtr<GlobalState const> state, const PFTitleDataManagementAddVirtualCurrencyTypesRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminDeleteStore(SharedPtr<GlobalState const> state, const PFTitleDataManagementDeleteStoreRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminDeleteTitleDataOverride(SharedPtr<GlobalState const> state, const PFTitleDataManagementDeleteTitleDataOverrideRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetCatalogItemsResult> AdminGetCatalogItems(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetCatalogItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetPublisherDataResult> AdminGetPublisherData(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetPublisherDataRequest& request, const TaskQueue& queue);
    static AsyncOp<GetRandomResultTablesResult> AdminGetRandomResultTables(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetRandomResultTablesRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetStoreItemsResult> AdminGetStoreItems(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetStoreItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleDataResult> AdminGetTitleData(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetTitleDataRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleDataResult> AdminGetTitleInternalData(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetTitleDataRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::ListVirtualCurrencyTypesResult> AdminListVirtualCurrencyTypes(SharedPtr<GlobalState const> state, const TaskQueue& queue);
    static AsyncOp<void> AdminRemoveVirtualCurrencyTypes(SharedPtr<GlobalState const> state, const PFTitleDataManagementRemoveVirtualCurrencyTypesRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminSetCatalogItems(SharedPtr<GlobalState const> state, const PFTitleDataManagementUpdateCatalogItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminSetStoreItems(SharedPtr<GlobalState const> state, const PFTitleDataManagementUpdateStoreItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminSetTitleData(SharedPtr<GlobalState const> state, const PFTitleDataManagementSetTitleDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminSetTitleDataAndOverrides(SharedPtr<GlobalState const> state, const PFTitleDataManagementSetTitleDataAndOverridesRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminSetTitleInternalData(SharedPtr<GlobalState const> state, const PFTitleDataManagementSetTitleDataRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::SetupPushNotificationResult> AdminSetupPushNotification(SharedPtr<GlobalState const> state, const PFTitleDataManagementSetupPushNotificationRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdateCatalogItems(SharedPtr<GlobalState const> state, const PFTitleDataManagementUpdateCatalogItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdateRandomResultTables(SharedPtr<GlobalState const> state, const PFTitleDataManagementUpdateRandomResultTablesRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdateStoreItems(SharedPtr<GlobalState const> state, const PFTitleDataManagementUpdateStoreItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetCatalogItemsResult> ClientGetCatalogItems(SharedPtr<TitlePlayer> entity, const PFTitleDataManagementGetCatalogItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetPublisherDataResult> ClientGetPublisherData(SharedPtr<TitlePlayer> entity, const PFTitleDataManagementGetPublisherDataRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetStoreItemsResult> ClientGetStoreItems(SharedPtr<TitlePlayer> entity, const PFTitleDataManagementGetStoreItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTimeResult> ClientGetTime(SharedPtr<TitlePlayer> entity, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleDataResult> ClientGetTitleData(SharedPtr<TitlePlayer> entity, const PFTitleDataManagementGetTitleDataRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleNewsResult> ClientGetTitleNews(SharedPtr<TitlePlayer> entity, const PFTitleDataManagementGetTitleNewsRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetCatalogItemsResult> ServerGetCatalogItems(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetCatalogItemsRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetPublisherDataResult> ServerGetPublisherData(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetPublisherDataRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetStoreItemsResult> ServerGetStoreItems(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetStoreItemsServerRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTimeResult> ServerGetTime(SharedPtr<GlobalState const> state, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleDataResult> ServerGetTitleData(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetTitleDataRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleDataResult> ServerGetTitleInternalData(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetTitleDataRequest& request, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleNewsResult> ServerGetTitleNews(SharedPtr<GlobalState const> state, const PFTitleDataManagementGetTitleNewsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSetPublisherData(SharedPtr<GlobalState const> state, const PFSetPublisherDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSetTitleData(SharedPtr<GlobalState const> state, const PFTitleDataManagementSetTitleDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSetTitleInternalData(SharedPtr<GlobalState const> state, const PFTitleDataManagementSetTitleDataRequest& request, const TaskQueue& queue);
};

}
