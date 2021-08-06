#pragma once

#include "SegmentsDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class SegmentsAPI
{
public:
    SegmentsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    SegmentsAPI(const SegmentsAPI& source) = delete;
    SegmentsAPI& operator=(const SegmentsAPI& source) = delete;
    ~SegmentsAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<SegmentsModels::CreateSegmentResponse> AdminCreateSegment(const PFSegmentsCreateSegmentRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SegmentsModels::DeleteSegmentsResponse> AdminDeleteSegment(const PFSegmentsDeleteSegmentRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SegmentsModels::GetSegmentsResponse> AdminGetSegments(const PFSegmentsGetSegmentsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SegmentsModels::UpdateSegmentResponse> AdminUpdateSegment(const PFSegmentsUpdateSegmentRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
