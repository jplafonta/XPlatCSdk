#pragma once

#include "PlayStreamDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class PlayStreamAPI
{
public:
    PlayStreamAPI() = delete;
    PlayStreamAPI(const PlayStreamAPI& source) = delete;
    PlayStreamAPI& operator=(const PlayStreamAPI& source) = delete;
    ~PlayStreamAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminAddPlayerTag(SharedPtr<GlobalState const> state, const PFPlayStreamAddPlayerTagRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetAllSegmentsResult> AdminGetAllSegments(SharedPtr<GlobalState const> state, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayerSegmentsResult> AdminGetPlayerSegments(SharedPtr<GlobalState const> state, const PFPlayStreamGetPlayersSegmentsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayersInSegmentResult> AdminGetPlayersInSegment(SharedPtr<GlobalState const> state, const PFPlayStreamGetPlayersInSegmentRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayerTagsResult> AdminGetPlayerTags(SharedPtr<GlobalState const> state, const PFPlayStreamGetPlayerTagsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminRemovePlayerTag(SharedPtr<GlobalState const> state, const PFPlayStreamRemovePlayerTagRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayerSegmentsResult> ClientGetPlayerSegments(SharedPtr<TitlePlayer> entity, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayerTagsResult> ClientGetPlayerTags(SharedPtr<TitlePlayer> entity, const PFPlayStreamGetPlayerTagsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerAddPlayerTag(SharedPtr<GlobalState const> state, const PFPlayStreamAddPlayerTagRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetAllSegmentsResult> ServerGetAllSegments(SharedPtr<GlobalState const> state, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayerSegmentsResult> ServerGetPlayerSegments(SharedPtr<GlobalState const> state, const PFPlayStreamGetPlayersSegmentsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayersInSegmentResult> ServerGetPlayersInSegment(SharedPtr<GlobalState const> state, const PFPlayStreamGetPlayersInSegmentRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::GetPlayerTagsResult> ServerGetPlayerTags(SharedPtr<GlobalState const> state, const PFPlayStreamGetPlayerTagsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerRemovePlayerTag(SharedPtr<GlobalState const> state, const PFPlayStreamRemovePlayerTagRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::WriteEventsResponse> WriteEvents(SharedPtr<Entity> entity, const PFPlayStreamWriteEventsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlayStreamModels::WriteEventsResponse> WriteTelemetryEvents(SharedPtr<Entity> entity, const PFPlayStreamWriteEventsRequest& request, const TaskQueue& queue);
};

}
