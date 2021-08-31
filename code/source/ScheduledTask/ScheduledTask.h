#pragma once

#include "ScheduledTaskDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class ScheduledTaskAPI
{
public:
    ScheduledTaskAPI() = delete;
    ScheduledTaskAPI(const ScheduledTaskAPI& source) = delete;
    ScheduledTaskAPI& operator=(const ScheduledTaskAPI& source) = delete;
    ~ScheduledTaskAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminAbortTaskInstance(SharedPtr<GlobalState const> state, const PFScheduledTaskAbortTaskInstanceRequest& request, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::CreateTaskResult> AdminCreateActionsOnPlayersInSegmentTask(SharedPtr<GlobalState const> state, const PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest& request, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::CreateTaskResult> AdminCreateCloudScriptTask(SharedPtr<GlobalState const> state, const PFScheduledTaskCreateCloudScriptTaskRequest& request, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::CreateTaskResult> AdminCreateInsightsScheduledScalingTask(SharedPtr<GlobalState const> state, const PFScheduledTaskCreateInsightsScheduledScalingTaskRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminDeleteTask(SharedPtr<GlobalState const> state, const PFScheduledTaskDeleteTaskRequest& request, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::GetActionsOnPlayersInSegmentTaskInstanceResult> AdminGetActionsOnPlayersInSegmentTaskInstance(SharedPtr<GlobalState const> state, const PFScheduledTaskGetTaskInstanceRequest& request, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::GetCloudScriptTaskInstanceResult> AdminGetCloudScriptTaskInstance(SharedPtr<GlobalState const> state, const PFScheduledTaskGetTaskInstanceRequest& request, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::GetTaskInstancesResult> AdminGetTaskInstances(SharedPtr<GlobalState const> state, const PFScheduledTaskGetTaskInstancesRequest& request, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::GetTasksResult> AdminGetTasks(SharedPtr<GlobalState const> state, const PFScheduledTaskGetTasksRequest& request, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::RunTaskResult> AdminRunTask(SharedPtr<GlobalState const> state, const PFScheduledTaskRunTaskRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdateTask(SharedPtr<GlobalState const> state, const PFScheduledTaskUpdateTaskRequest& request, const TaskQueue& queue);
};

}
