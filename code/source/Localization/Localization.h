#pragma once

#include "LocalizationDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class LocalizationAPI
{
public:
    LocalizationAPI() = delete;
    LocalizationAPI(const LocalizationAPI& source) = delete;
    LocalizationAPI& operator=(const LocalizationAPI& source) = delete;
    ~LocalizationAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<LocalizationModels::GetLanguageListResponse> GetLanguageList(SharedPtr<Entity> entity, const PFLocalizationGetLanguageListRequest& request, const TaskQueue& queue);
};

}
