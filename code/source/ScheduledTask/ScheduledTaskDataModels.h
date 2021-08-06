#pragma once

#include <playfab/PFScheduledTaskDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace ScheduledTaskModels
{

// ScheduledTask Classes
struct AbortTaskInstanceRequest : public PFScheduledTaskAbortTaskInstanceRequest, public BaseModel
{
    AbortTaskInstanceRequest();
    AbortTaskInstanceRequest(const AbortTaskInstanceRequest& src);
    AbortTaskInstanceRequest(AbortTaskInstanceRequest&& src);
    AbortTaskInstanceRequest(const PFScheduledTaskAbortTaskInstanceRequest& src);
    AbortTaskInstanceRequest& operator=(const AbortTaskInstanceRequest&) = delete;
    ~AbortTaskInstanceRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_taskInstanceId;
};

struct ActionsOnPlayersInSegmentTaskParameter : public PFScheduledTaskActionsOnPlayersInSegmentTaskParameter, public SerializableModel
{
    ActionsOnPlayersInSegmentTaskParameter();
    ActionsOnPlayersInSegmentTaskParameter(const ActionsOnPlayersInSegmentTaskParameter& src);
    ActionsOnPlayersInSegmentTaskParameter(ActionsOnPlayersInSegmentTaskParameter&& src);
    ActionsOnPlayersInSegmentTaskParameter(const PFScheduledTaskActionsOnPlayersInSegmentTaskParameter& src);
    ActionsOnPlayersInSegmentTaskParameter& operator=(const ActionsOnPlayersInSegmentTaskParameter&) = delete;
    ~ActionsOnPlayersInSegmentTaskParameter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_actionId;
    String m_segmentId;
};

struct CreateActionsOnPlayerSegmentTaskRequest : public PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest, public BaseModel
{
    CreateActionsOnPlayerSegmentTaskRequest();
    CreateActionsOnPlayerSegmentTaskRequest(const CreateActionsOnPlayerSegmentTaskRequest& src);
    CreateActionsOnPlayerSegmentTaskRequest(CreateActionsOnPlayerSegmentTaskRequest&& src);
    CreateActionsOnPlayerSegmentTaskRequest(const PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest& src);
    CreateActionsOnPlayerSegmentTaskRequest& operator=(const CreateActionsOnPlayerSegmentTaskRequest&) = delete;
    ~CreateActionsOnPlayerSegmentTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_description;
    String m_name;
    ActionsOnPlayersInSegmentTaskParameter m_parameter;
    String m_schedule;
};

struct CreateTaskResult : public PFScheduledTaskCreateTaskResult, public SerializableModel, public ApiResult
{
    CreateTaskResult();
    CreateTaskResult(const CreateTaskResult& src);
    CreateTaskResult(CreateTaskResult&& src);
    CreateTaskResult(const PFScheduledTaskCreateTaskResult& src);
    CreateTaskResult& operator=(const CreateTaskResult&) = delete;
    ~CreateTaskResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_taskId;
};

struct CloudScriptTaskParameter : public PFScheduledTaskCloudScriptTaskParameter, public BaseModel
{
    CloudScriptTaskParameter();
    CloudScriptTaskParameter(const CloudScriptTaskParameter& src);
    CloudScriptTaskParameter(CloudScriptTaskParameter&& src);
    CloudScriptTaskParameter(const PFScheduledTaskCloudScriptTaskParameter& src);
    CloudScriptTaskParameter& operator=(const CloudScriptTaskParameter&) = delete;
    ~CloudScriptTaskParameter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_argument;
    String m_functionName;
};

struct CreateCloudScriptTaskRequest : public PFScheduledTaskCreateCloudScriptTaskRequest, public BaseModel
{
    CreateCloudScriptTaskRequest();
    CreateCloudScriptTaskRequest(const CreateCloudScriptTaskRequest& src);
    CreateCloudScriptTaskRequest(CreateCloudScriptTaskRequest&& src);
    CreateCloudScriptTaskRequest(const PFScheduledTaskCreateCloudScriptTaskRequest& src);
    CreateCloudScriptTaskRequest& operator=(const CreateCloudScriptTaskRequest&) = delete;
    ~CreateCloudScriptTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_description;
    String m_name;
    CloudScriptTaskParameter m_parameter;
    String m_schedule;
};

struct InsightsScalingTaskParameter : public PFScheduledTaskInsightsScalingTaskParameter, public SerializableModel
{
    InsightsScalingTaskParameter();
    InsightsScalingTaskParameter(const InsightsScalingTaskParameter&) = default;
    InsightsScalingTaskParameter(InsightsScalingTaskParameter&&) = default;
    InsightsScalingTaskParameter(const PFScheduledTaskInsightsScalingTaskParameter& src);
    InsightsScalingTaskParameter& operator=(const InsightsScalingTaskParameter&) = delete;
    ~InsightsScalingTaskParameter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct CreateInsightsScheduledScalingTaskRequest : public PFScheduledTaskCreateInsightsScheduledScalingTaskRequest, public BaseModel
{
    CreateInsightsScheduledScalingTaskRequest();
    CreateInsightsScheduledScalingTaskRequest(const CreateInsightsScheduledScalingTaskRequest& src);
    CreateInsightsScheduledScalingTaskRequest(CreateInsightsScheduledScalingTaskRequest&& src);
    CreateInsightsScheduledScalingTaskRequest(const PFScheduledTaskCreateInsightsScheduledScalingTaskRequest& src);
    CreateInsightsScheduledScalingTaskRequest& operator=(const CreateInsightsScheduledScalingTaskRequest&) = delete;
    ~CreateInsightsScheduledScalingTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_description;
    String m_name;
    InsightsScalingTaskParameter m_parameter;
    String m_schedule;
};

struct DeleteTaskRequest : public PFScheduledTaskDeleteTaskRequest, public BaseModel
{
    DeleteTaskRequest();
    DeleteTaskRequest(const DeleteTaskRequest& src);
    DeleteTaskRequest(DeleteTaskRequest&& src);
    DeleteTaskRequest(const PFScheduledTaskDeleteTaskRequest& src);
    DeleteTaskRequest& operator=(const DeleteTaskRequest&) = delete;
    ~DeleteTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<NameIdentifier> m_identifier;
};

struct GetTaskInstanceRequest : public PFScheduledTaskGetTaskInstanceRequest, public SerializableModel
{
    GetTaskInstanceRequest();
    GetTaskInstanceRequest(const GetTaskInstanceRequest& src);
    GetTaskInstanceRequest(GetTaskInstanceRequest&& src);
    GetTaskInstanceRequest(const PFScheduledTaskGetTaskInstanceRequest& src);
    GetTaskInstanceRequest& operator=(const GetTaskInstanceRequest&) = delete;
    ~GetTaskInstanceRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_taskInstanceId;
};

struct ActionsOnPlayersInSegmentTaskSummary : public PFScheduledTaskActionsOnPlayersInSegmentTaskSummary, public BaseModel
{
    ActionsOnPlayersInSegmentTaskSummary();
    ActionsOnPlayersInSegmentTaskSummary(const ActionsOnPlayersInSegmentTaskSummary& src);
    ActionsOnPlayersInSegmentTaskSummary(ActionsOnPlayersInSegmentTaskSummary&& src);
    ActionsOnPlayersInSegmentTaskSummary(const PFScheduledTaskActionsOnPlayersInSegmentTaskSummary& src);
    ActionsOnPlayersInSegmentTaskSummary& operator=(const ActionsOnPlayersInSegmentTaskSummary&) = delete;
    ~ActionsOnPlayersInSegmentTaskSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_completedAt;
    String m_errorMessage;
    StdExtra::optional<bool> m_errorWasFatal;
    StdExtra::optional<double> m_estimatedSecondsRemaining;
    StdExtra::optional<double> m_percentComplete;
    String m_scheduledByUserId;
    StdExtra::optional<PFScheduledTaskTaskInstanceStatus> m_status;
    StdExtra::optional<NameIdentifier> m_taskIdentifier;
    String m_taskInstanceId;
    StdExtra::optional<int32_t> m_totalPlayersInSegment;
    StdExtra::optional<int32_t> m_totalPlayersProcessed;
};

struct GetActionsOnPlayersInSegmentTaskInstanceResult : public PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult, public BaseModel, public ApiResult
{
    GetActionsOnPlayersInSegmentTaskInstanceResult();
    GetActionsOnPlayersInSegmentTaskInstanceResult(const GetActionsOnPlayersInSegmentTaskInstanceResult& src);
    GetActionsOnPlayersInSegmentTaskInstanceResult(GetActionsOnPlayersInSegmentTaskInstanceResult&& src);
    GetActionsOnPlayersInSegmentTaskInstanceResult(const PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult& src);
    GetActionsOnPlayersInSegmentTaskInstanceResult& operator=(const GetActionsOnPlayersInSegmentTaskInstanceResult&) = delete;
    ~GetActionsOnPlayersInSegmentTaskInstanceResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<ActionsOnPlayersInSegmentTaskParameter> m_parameter;
    StdExtra::optional<ActionsOnPlayersInSegmentTaskSummary> m_summary;
};

struct CloudScriptTaskSummary : public PFScheduledTaskCloudScriptTaskSummary, public BaseModel
{
    CloudScriptTaskSummary();
    CloudScriptTaskSummary(const CloudScriptTaskSummary& src);
    CloudScriptTaskSummary(CloudScriptTaskSummary&& src);
    CloudScriptTaskSummary(const PFScheduledTaskCloudScriptTaskSummary& src);
    CloudScriptTaskSummary& operator=(const CloudScriptTaskSummary&) = delete;
    ~CloudScriptTaskSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_completedAt;
    StdExtra::optional<double> m_estimatedSecondsRemaining;
    StdExtra::optional<double> m_percentComplete;
    StdExtra::optional<ExecuteCloudScriptResult> m_result;
    String m_scheduledByUserId;
    StdExtra::optional<PFScheduledTaskTaskInstanceStatus> m_status;
    StdExtra::optional<NameIdentifier> m_taskIdentifier;
    String m_taskInstanceId;
};

struct GetCloudScriptTaskInstanceResult : public PFScheduledTaskGetCloudScriptTaskInstanceResult, public BaseModel, public ApiResult
{
    GetCloudScriptTaskInstanceResult();
    GetCloudScriptTaskInstanceResult(const GetCloudScriptTaskInstanceResult& src);
    GetCloudScriptTaskInstanceResult(GetCloudScriptTaskInstanceResult&& src);
    GetCloudScriptTaskInstanceResult(const PFScheduledTaskGetCloudScriptTaskInstanceResult& src);
    GetCloudScriptTaskInstanceResult& operator=(const GetCloudScriptTaskInstanceResult&) = delete;
    ~GetCloudScriptTaskInstanceResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<CloudScriptTaskParameter> m_parameter;
    StdExtra::optional<CloudScriptTaskSummary> m_summary;
};

struct GetTaskInstancesRequest : public PFScheduledTaskGetTaskInstancesRequest, public BaseModel
{
    GetTaskInstancesRequest();
    GetTaskInstancesRequest(const GetTaskInstancesRequest& src);
    GetTaskInstancesRequest(GetTaskInstancesRequest&& src);
    GetTaskInstancesRequest(const PFScheduledTaskGetTaskInstancesRequest& src);
    GetTaskInstancesRequest& operator=(const GetTaskInstancesRequest&) = delete;
    ~GetTaskInstancesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_startedAtRangeFrom;
    StdExtra::optional<time_t> m_startedAtRangeTo;
    StdExtra::optional<PFScheduledTaskTaskInstanceStatus> m_statusFilter;
    StdExtra::optional<NameIdentifier> m_taskIdentifier;
};

struct TaskInstanceBasicSummary : public PFScheduledTaskTaskInstanceBasicSummary, public BaseModel
{
    TaskInstanceBasicSummary();
    TaskInstanceBasicSummary(const TaskInstanceBasicSummary& src);
    TaskInstanceBasicSummary(TaskInstanceBasicSummary&& src);
    TaskInstanceBasicSummary(const PFScheduledTaskTaskInstanceBasicSummary& src);
    TaskInstanceBasicSummary& operator=(const TaskInstanceBasicSummary&) = delete;
    ~TaskInstanceBasicSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_completedAt;
    String m_errorMessage;
    StdExtra::optional<double> m_estimatedSecondsRemaining;
    StdExtra::optional<double> m_percentComplete;
    String m_scheduledByUserId;
    StdExtra::optional<PFScheduledTaskTaskInstanceStatus> m_status;
    StdExtra::optional<NameIdentifier> m_taskIdentifier;
    String m_taskInstanceId;
    StdExtra::optional<PFScheduledTaskScheduledTaskType> m_type;
};

struct GetTaskInstancesResult : public PFScheduledTaskGetTaskInstancesResult, public BaseModel, public ApiResult
{
    GetTaskInstancesResult();
    GetTaskInstancesResult(const GetTaskInstancesResult& src);
    GetTaskInstancesResult(GetTaskInstancesResult&& src);
    GetTaskInstancesResult(const PFScheduledTaskGetTaskInstancesResult& src);
    GetTaskInstancesResult& operator=(const GetTaskInstancesResult&) = delete;
    ~GetTaskInstancesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFScheduledTaskTaskInstanceBasicSummary, TaskInstanceBasicSummary> m_summaries;
};

struct GetTasksRequest : public PFScheduledTaskGetTasksRequest, public BaseModel
{
    GetTasksRequest();
    GetTasksRequest(const GetTasksRequest& src);
    GetTasksRequest(GetTasksRequest&& src);
    GetTasksRequest(const PFScheduledTaskGetTasksRequest& src);
    GetTasksRequest& operator=(const GetTasksRequest&) = delete;
    ~GetTasksRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<NameIdentifier> m_identifier;
};

struct ScheduledTask : public PFScheduledTaskScheduledTask, public BaseModel
{
    ScheduledTask();
    ScheduledTask(const ScheduledTask& src);
    ScheduledTask(ScheduledTask&& src);
    ScheduledTask(const PFScheduledTaskScheduledTask& src);
    ScheduledTask& operator=(const ScheduledTask&) = delete;
    ~ScheduledTask() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    StdExtra::optional<time_t> m_lastRunTime;
    String m_name;
    StdExtra::optional<time_t> m_nextRunTime;
    JsonObject m_parameter;
    String m_schedule;
    String m_taskId;
    StdExtra::optional<PFScheduledTaskScheduledTaskType> m_type;
};

struct GetTasksResult : public PFScheduledTaskGetTasksResult, public BaseModel, public ApiResult
{
    GetTasksResult();
    GetTasksResult(const GetTasksResult& src);
    GetTasksResult(GetTasksResult&& src);
    GetTasksResult(const PFScheduledTaskGetTasksResult& src);
    GetTasksResult& operator=(const GetTasksResult&) = delete;
    ~GetTasksResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFScheduledTaskScheduledTask, ScheduledTask> m_tasks;
};

struct RunTaskRequest : public PFScheduledTaskRunTaskRequest, public BaseModel
{
    RunTaskRequest();
    RunTaskRequest(const RunTaskRequest& src);
    RunTaskRequest(RunTaskRequest&& src);
    RunTaskRequest(const PFScheduledTaskRunTaskRequest& src);
    RunTaskRequest& operator=(const RunTaskRequest&) = delete;
    ~RunTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<NameIdentifier> m_identifier;
};

struct RunTaskResult : public PFScheduledTaskRunTaskResult, public SerializableModel, public ApiResult
{
    RunTaskResult();
    RunTaskResult(const RunTaskResult& src);
    RunTaskResult(RunTaskResult&& src);
    RunTaskResult(const PFScheduledTaskRunTaskResult& src);
    RunTaskResult& operator=(const RunTaskResult&) = delete;
    ~RunTaskResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_taskInstanceId;
};

struct UpdateTaskRequest : public PFScheduledTaskUpdateTaskRequest, public BaseModel
{
    UpdateTaskRequest();
    UpdateTaskRequest(const UpdateTaskRequest& src);
    UpdateTaskRequest(UpdateTaskRequest&& src);
    UpdateTaskRequest(const PFScheduledTaskUpdateTaskRequest& src);
    UpdateTaskRequest& operator=(const UpdateTaskRequest&) = delete;
    ~UpdateTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_description;
    StdExtra::optional<NameIdentifier> m_identifier;
    String m_name;
    JsonObject m_parameter;
    String m_schedule;
};

} // namespace ScheduledTaskModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFScheduledTaskAbortTaskInstanceRequest& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskActionsOnPlayersInSegmentTaskParameter& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskCreateTaskResult& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskCloudScriptTaskParameter& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskCreateCloudScriptTaskRequest& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskInsightsScalingTaskParameter& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskCreateInsightsScheduledScalingTaskRequest& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskDeleteTaskRequest& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskGetTaskInstanceRequest& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskActionsOnPlayersInSegmentTaskSummary& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskCloudScriptTaskSummary& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskGetCloudScriptTaskInstanceResult& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskGetTaskInstancesRequest& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskTaskInstanceBasicSummary& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskGetTaskInstancesResult& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskGetTasksRequest& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskScheduledTask& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskGetTasksResult& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskRunTaskRequest& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskRunTaskResult& input);
template<> inline JsonValue ToJson<>(const PFScheduledTaskUpdateTaskRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
