#pragma once

#include "SegmentsDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class SegmentsAPI
{
public:
    SegmentsAPI() = delete;
    SegmentsAPI(const SegmentsAPI& source) = delete;
    SegmentsAPI& operator=(const SegmentsAPI& source) = delete;
    ~SegmentsAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<SegmentsModels::CreateSegmentResponse> AdminCreateSegment(SharedPtr<GlobalState const> state, const PFSegmentsCreateSegmentRequest& request, const TaskQueue& queue);
    static AsyncOp<SegmentsModels::DeleteSegmentsResponse> AdminDeleteSegment(SharedPtr<GlobalState const> state, const PFSegmentsDeleteSegmentRequest& request, const TaskQueue& queue);
    static AsyncOp<SegmentsModels::GetSegmentsResponse> AdminGetSegments(SharedPtr<GlobalState const> state, const PFSegmentsGetSegmentsRequest& request, const TaskQueue& queue);
    static AsyncOp<SegmentsModels::UpdateSegmentResponse> AdminUpdateSegment(SharedPtr<GlobalState const> state, const PFSegmentsUpdateSegmentRequest& request, const TaskQueue& queue);
};

}
