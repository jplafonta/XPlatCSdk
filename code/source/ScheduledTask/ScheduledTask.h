#pragma once

#include "ScheduledTaskDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class ScheduledTaskAPI
{
public:
    ScheduledTaskAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    ScheduledTaskAPI(const ScheduledTaskAPI& source) = delete;
    ScheduledTaskAPI& operator=(const ScheduledTaskAPI& source) = delete;
    ~ScheduledTaskAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminAbortTaskInstance(const PFScheduledTaskAbortTaskInstanceRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::CreateTaskResult> AdminCreateActionsOnPlayersInSegmentTask(const PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::CreateTaskResult> AdminCreateCloudScriptTask(const PFScheduledTaskCreateCloudScriptTaskRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::CreateTaskResult> AdminCreateInsightsScheduledScalingTask(const PFScheduledTaskCreateInsightsScheduledScalingTaskRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminDeleteTask(const PFScheduledTaskDeleteTaskRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::GetActionsOnPlayersInSegmentTaskInstanceResult> AdminGetActionsOnPlayersInSegmentTaskInstance(const PFScheduledTaskGetTaskInstanceRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::GetCloudScriptTaskInstanceResult> AdminGetCloudScriptTaskInstance(const PFScheduledTaskGetTaskInstanceRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::GetTaskInstancesResult> AdminGetTaskInstances(const PFScheduledTaskGetTaskInstancesRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::GetTasksResult> AdminGetTasks(const PFScheduledTaskGetTasksRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<ScheduledTaskModels::RunTaskResult> AdminRunTask(const PFScheduledTaskRunTaskRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdateTask(const PFScheduledTaskUpdateTaskRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
