#pragma once

#include "AdvertisingDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class AdvertisingAPI
{
public:
    AdvertisingAPI() = delete;
    AdvertisingAPI(const AdvertisingAPI& source) = delete;
    AdvertisingAPI& operator=(const AdvertisingAPI& source) = delete;
    ~AdvertisingAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> ClientAttributeInstall(SharedPtr<TitlePlayer> entity, const PFAdvertisingAttributeInstallRequest& request, const TaskQueue& queue);
    static AsyncOp<AdvertisingModels::GetAdPlacementsResult> ClientGetAdPlacements(SharedPtr<TitlePlayer> entity, const PFAdvertisingGetAdPlacementsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientReportAdActivity(SharedPtr<TitlePlayer> entity, const PFAdvertisingReportAdActivityRequest& request, const TaskQueue& queue);
    static AsyncOp<AdvertisingModels::RewardAdActivityResult> ClientRewardAdActivity(SharedPtr<TitlePlayer> entity, const PFAdvertisingRewardAdActivityRequest& request, const TaskQueue& queue);
};

}
