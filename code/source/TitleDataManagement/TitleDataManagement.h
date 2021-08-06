#pragma once

#include "TitleDataManagementDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class TitleDataManagementAPI
{
public:
    TitleDataManagementAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    TitleDataManagementAPI(const TitleDataManagementAPI& source) = delete;
    TitleDataManagementAPI& operator=(const TitleDataManagementAPI& source) = delete;
    ~TitleDataManagementAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminAddLocalizedNews(const PFTitleDataManagementAddLocalizedNewsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::AddNewsResult> AdminAddNews(const PFTitleDataManagementAddNewsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminAddVirtualCurrencyTypes(const PFTitleDataManagementAddVirtualCurrencyTypesRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminDeleteStore(const PFTitleDataManagementDeleteStoreRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminDeleteTitleDataOverride(const PFTitleDataManagementDeleteTitleDataOverrideRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetCatalogItemsResult> AdminGetCatalogItems(const PFTitleDataManagementGetCatalogItemsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetPublisherDataResult> AdminGetPublisherData(const PFTitleDataManagementGetPublisherDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<GetRandomResultTablesResult> AdminGetRandomResultTables(const PFTitleDataManagementGetRandomResultTablesRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetStoreItemsResult> AdminGetStoreItems(const PFTitleDataManagementGetStoreItemsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleDataResult> AdminGetTitleData(const PFTitleDataManagementGetTitleDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleDataResult> AdminGetTitleInternalData(const PFTitleDataManagementGetTitleDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::ListVirtualCurrencyTypesResult> AdminListVirtualCurrencyTypes(SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminRemoveVirtualCurrencyTypes(const PFTitleDataManagementRemoveVirtualCurrencyTypesRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminSetCatalogItems(const PFTitleDataManagementUpdateCatalogItemsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminSetStoreItems(const PFTitleDataManagementUpdateStoreItemsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminSetTitleData(const PFTitleDataManagementSetTitleDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminSetTitleDataAndOverrides(const PFTitleDataManagementSetTitleDataAndOverridesRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminSetTitleInternalData(const PFTitleDataManagementSetTitleDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::SetupPushNotificationResult> AdminSetupPushNotification(const PFTitleDataManagementSetupPushNotificationRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdateCatalogItems(const PFTitleDataManagementUpdateCatalogItemsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdateRandomResultTables(const PFTitleDataManagementUpdateRandomResultTablesRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdateStoreItems(const PFTitleDataManagementUpdateStoreItemsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<TitleDataManagementModels::GetCatalogItemsResult> ClientGetCatalogItems(const PFTitleDataManagementGetCatalogItemsRequest& request, const TaskQueue& queue) const;
    AsyncOp<TitleDataManagementModels::GetPublisherDataResult> ClientGetPublisherData(const PFTitleDataManagementGetPublisherDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<TitleDataManagementModels::GetStoreItemsResult> ClientGetStoreItems(const PFTitleDataManagementGetStoreItemsRequest& request, const TaskQueue& queue) const;
    AsyncOp<TitleDataManagementModels::GetTimeResult> ClientGetTime(const TaskQueue& queue) const;
    AsyncOp<TitleDataManagementModels::GetTitleDataResult> ClientGetTitleData(const PFTitleDataManagementGetTitleDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<TitleDataManagementModels::GetTitleNewsResult> ClientGetTitleNews(const PFTitleDataManagementGetTitleNewsRequest& request, const TaskQueue& queue) const;
    static AsyncOp<TitleDataManagementModels::GetCatalogItemsResult> ServerGetCatalogItems(const PFTitleDataManagementGetCatalogItemsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetPublisherDataResult> ServerGetPublisherData(const PFTitleDataManagementGetPublisherDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetStoreItemsResult> ServerGetStoreItems(const PFTitleDataManagementGetStoreItemsServerRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTimeResult> ServerGetTime(SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleDataResult> ServerGetTitleData(const PFTitleDataManagementGetTitleDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleDataResult> ServerGetTitleInternalData(const PFTitleDataManagementGetTitleDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<TitleDataManagementModels::GetTitleNewsResult> ServerGetTitleNews(const PFTitleDataManagementGetTitleNewsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSetPublisherData(const PFSetPublisherDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSetTitleData(const PFTitleDataManagementSetTitleDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSetTitleInternalData(const PFTitleDataManagementSetTitleDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
