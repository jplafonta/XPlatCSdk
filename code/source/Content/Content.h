#pragma once

#include "ContentDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class ContentAPI
{
public:
    ContentAPI() = delete;
    ContentAPI(const ContentAPI& source) = delete;
    ContentAPI& operator=(const ContentAPI& source) = delete;
    ~ContentAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminDeleteContent(SharedPtr<GlobalState const> state, const PFContentDeleteContentRequest& request, const TaskQueue& queue);
    static AsyncOp<ContentModels::GetContentListResult> AdminGetContentList(SharedPtr<GlobalState const> state, const PFContentGetContentListRequest& request, const TaskQueue& queue);
    static AsyncOp<ContentModels::GetContentUploadUrlResult> AdminGetContentUploadUrl(SharedPtr<GlobalState const> state, const PFContentGetContentUploadUrlRequest& request, const TaskQueue& queue);
    static AsyncOp<ContentModels::GetContentDownloadUrlResult> ClientGetContentDownloadUrl(SharedPtr<TitlePlayer> entity, const PFContentGetContentDownloadUrlRequest& request, const TaskQueue& queue);
    static AsyncOp<ContentModels::GetContentDownloadUrlResult> ServerGetContentDownloadUrl(SharedPtr<GlobalState const> state, const PFContentGetContentDownloadUrlRequest& request, const TaskQueue& queue);
};

}
