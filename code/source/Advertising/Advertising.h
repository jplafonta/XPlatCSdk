#pragma once

#include "AdvertisingDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class AdvertisingAPI
{
public:
    AdvertisingAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    AdvertisingAPI(const AdvertisingAPI& source) = delete;
    AdvertisingAPI& operator=(const AdvertisingAPI& source) = delete;
    ~AdvertisingAPI() = default;

    // ------------ Generated API calls
    AsyncOp<void> ClientAttributeInstall(const PFAdvertisingAttributeInstallRequest& request, const TaskQueue& queue) const;
    AsyncOp<AdvertisingModels::GetAdPlacementsResult> ClientGetAdPlacements(const PFAdvertisingGetAdPlacementsRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientReportAdActivity(const PFAdvertisingReportAdActivityRequest& request, const TaskQueue& queue) const;
    AsyncOp<AdvertisingModels::RewardAdActivityResult> ClientRewardAdActivity(const PFAdvertisingRewardAdActivityRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
