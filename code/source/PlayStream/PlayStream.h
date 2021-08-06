#pragma once

#include "PlayStreamDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class PlayStreamAPI
{
public:
    PlayStreamAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    PlayStreamAPI(const PlayStreamAPI& source) = delete;
    PlayStreamAPI& operator=(const PlayStreamAPI& source) = delete;
    ~PlayStreamAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminAddPlayerTag(const PFPlayStreamAddPlayerTagRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetAllSegmentsResult> AdminGetAllSegments(SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayerSegmentsResult> AdminGetPlayerSegments(const PFPlayStreamGetPlayersSegmentsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayersInSegmentResult> AdminGetPlayersInSegment(const PFPlayStreamGetPlayersInSegmentRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayerTagsResult> AdminGetPlayerTags(const PFPlayStreamGetPlayerTagsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminRemovePlayerTag(const PFPlayStreamRemovePlayerTagRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<PlayStreamModels::GetPlayerSegmentsResult> ClientGetPlayerSegments(const TaskQueue& queue) const;
    AsyncOp<PlayStreamModels::GetPlayerTagsResult> ClientGetPlayerTags(const PFPlayStreamGetPlayerTagsRequest& request, const TaskQueue& queue) const;
    static AsyncOp<void> ServerAddPlayerTag(const PFPlayStreamAddPlayerTagRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetAllSegmentsResult> ServerGetAllSegments(SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayerSegmentsResult> ServerGetPlayerSegments(const PFPlayStreamGetPlayersSegmentsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayersInSegmentResult> ServerGetPlayersInSegment(const PFPlayStreamGetPlayersInSegmentRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayerTagsResult> ServerGetPlayerTags(const PFPlayStreamGetPlayerTagsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerRemovePlayerTag(const PFPlayStreamRemovePlayerTagRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<PlayStreamModels::WriteEventsResponse> WriteEvents(const PFPlayStreamWriteEventsRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlayStreamModels::WriteEventsResponse> WriteTelemetryEvents(const PFPlayStreamWriteEventsRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
