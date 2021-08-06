#include "stdafx.h"
#include "ScheduledTaskDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace ScheduledTaskModels
{

AbortTaskInstanceRequest::AbortTaskInstanceRequest() :
    PFScheduledTaskAbortTaskInstanceRequest{}
{
}

AbortTaskInstanceRequest::AbortTaskInstanceRequest(const AbortTaskInstanceRequest& src) :
    PFScheduledTaskAbortTaskInstanceRequest{ src },
    m_customTags{ src.m_customTags },
    m_taskInstanceId{ src.m_taskInstanceId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

AbortTaskInstanceRequest::AbortTaskInstanceRequest(AbortTaskInstanceRequest&& src) :
    PFScheduledTaskAbortTaskInstanceRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_taskInstanceId{ std::move(src.m_taskInstanceId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

AbortTaskInstanceRequest::AbortTaskInstanceRequest(const PFScheduledTaskAbortTaskInstanceRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AbortTaskInstanceRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
}

JsonValue AbortTaskInstanceRequest::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskAbortTaskInstanceRequest>(*this);
}

ActionsOnPlayersInSegmentTaskParameter::ActionsOnPlayersInSegmentTaskParameter() :
    PFScheduledTaskActionsOnPlayersInSegmentTaskParameter{}
{
}

ActionsOnPlayersInSegmentTaskParameter::ActionsOnPlayersInSegmentTaskParameter(const ActionsOnPlayersInSegmentTaskParameter& src) :
    PFScheduledTaskActionsOnPlayersInSegmentTaskParameter{ src },
    m_actionId{ src.m_actionId },
    m_segmentId{ src.m_segmentId }
{
    actionId = m_actionId.empty() ? nullptr : m_actionId.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

ActionsOnPlayersInSegmentTaskParameter::ActionsOnPlayersInSegmentTaskParameter(ActionsOnPlayersInSegmentTaskParameter&& src) :
    PFScheduledTaskActionsOnPlayersInSegmentTaskParameter{ src },
    m_actionId{ std::move(src.m_actionId) },
    m_segmentId{ std::move(src.m_segmentId) }
{
    actionId = m_actionId.empty() ? nullptr : m_actionId.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

ActionsOnPlayersInSegmentTaskParameter::ActionsOnPlayersInSegmentTaskParameter(const PFScheduledTaskActionsOnPlayersInSegmentTaskParameter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ActionsOnPlayersInSegmentTaskParameter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ActionId", m_actionId, actionId);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
}

JsonValue ActionsOnPlayersInSegmentTaskParameter::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskActionsOnPlayersInSegmentTaskParameter>(*this);
}

size_t ActionsOnPlayersInSegmentTaskParameter::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFScheduledTaskActionsOnPlayersInSegmentTaskParameter) };
    serializedSize += (m_actionId.size() + 1);
    serializedSize += (m_segmentId.size() + 1);
    return serializedSize;
}

void ActionsOnPlayersInSegmentTaskParameter::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFScheduledTaskActionsOnPlayersInSegmentTaskParameter{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFScheduledTaskActionsOnPlayersInSegmentTaskParameter);
    memcpy(stringBuffer, m_actionId.data(), m_actionId.size() + 1);
    serializedStruct->actionId = stringBuffer;
    stringBuffer += m_actionId.size() + 1;
    memcpy(stringBuffer, m_segmentId.data(), m_segmentId.size() + 1);
    serializedStruct->segmentId = stringBuffer;
    stringBuffer += m_segmentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateActionsOnPlayerSegmentTaskRequest::CreateActionsOnPlayerSegmentTaskRequest() :
    PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest{}
{
}

CreateActionsOnPlayerSegmentTaskRequest::CreateActionsOnPlayerSegmentTaskRequest(const CreateActionsOnPlayerSegmentTaskRequest& src) :
    PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_name{ src.m_name },
    m_parameter{ src.m_parameter },
    m_schedule{ src.m_schedule }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PFScheduledTaskActionsOnPlayersInSegmentTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateActionsOnPlayerSegmentTaskRequest::CreateActionsOnPlayerSegmentTaskRequest(CreateActionsOnPlayerSegmentTaskRequest&& src) :
    PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_name{ std::move(src.m_name) },
    m_parameter{ std::move(src.m_parameter) },
    m_schedule{ std::move(src.m_schedule) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PFScheduledTaskActionsOnPlayersInSegmentTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateActionsOnPlayerSegmentTaskRequest::CreateActionsOnPlayerSegmentTaskRequest(const PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateActionsOnPlayerSegmentTaskRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "IsActive", isActive);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Parameter", m_parameter, parameter);
    JsonUtils::ObjectGetMember(input, "Schedule", m_schedule, schedule);
}

JsonValue CreateActionsOnPlayerSegmentTaskRequest::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest>(*this);
}

CreateTaskResult::CreateTaskResult() :
    PFScheduledTaskCreateTaskResult{}
{
}

CreateTaskResult::CreateTaskResult(const CreateTaskResult& src) :
    PFScheduledTaskCreateTaskResult{ src },
    m_taskId{ src.m_taskId }
{
    taskId = m_taskId.empty() ? nullptr : m_taskId.data();
}

CreateTaskResult::CreateTaskResult(CreateTaskResult&& src) :
    PFScheduledTaskCreateTaskResult{ src },
    m_taskId{ std::move(src.m_taskId) }
{
    taskId = m_taskId.empty() ? nullptr : m_taskId.data();
}

CreateTaskResult::CreateTaskResult(const PFScheduledTaskCreateTaskResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateTaskResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TaskId", m_taskId, taskId);
}

JsonValue CreateTaskResult::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskCreateTaskResult>(*this);
}

size_t CreateTaskResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFScheduledTaskCreateTaskResult) };
    serializedSize += (m_taskId.size() + 1);
    return serializedSize;
}

void CreateTaskResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFScheduledTaskCreateTaskResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFScheduledTaskCreateTaskResult);
    memcpy(stringBuffer, m_taskId.data(), m_taskId.size() + 1);
    serializedStruct->taskId = stringBuffer;
    stringBuffer += m_taskId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CloudScriptTaskParameter::CloudScriptTaskParameter() :
    PFScheduledTaskCloudScriptTaskParameter{}
{
}

CloudScriptTaskParameter::CloudScriptTaskParameter(const CloudScriptTaskParameter& src) :
    PFScheduledTaskCloudScriptTaskParameter{ src },
    m_argument{ src.m_argument },
    m_functionName{ src.m_functionName }
{
    argument.stringValue = m_argument.StringValue();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
}

CloudScriptTaskParameter::CloudScriptTaskParameter(CloudScriptTaskParameter&& src) :
    PFScheduledTaskCloudScriptTaskParameter{ src },
    m_argument{ std::move(src.m_argument) },
    m_functionName{ std::move(src.m_functionName) }
{
    argument.stringValue = m_argument.StringValue();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
}

CloudScriptTaskParameter::CloudScriptTaskParameter(const PFScheduledTaskCloudScriptTaskParameter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CloudScriptTaskParameter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Argument", m_argument, argument);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
}

JsonValue CloudScriptTaskParameter::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskCloudScriptTaskParameter>(*this);
}

CreateCloudScriptTaskRequest::CreateCloudScriptTaskRequest() :
    PFScheduledTaskCreateCloudScriptTaskRequest{}
{
}

CreateCloudScriptTaskRequest::CreateCloudScriptTaskRequest(const CreateCloudScriptTaskRequest& src) :
    PFScheduledTaskCreateCloudScriptTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_name{ src.m_name },
    m_parameter{ src.m_parameter },
    m_schedule{ src.m_schedule }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PFScheduledTaskCloudScriptTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateCloudScriptTaskRequest::CreateCloudScriptTaskRequest(CreateCloudScriptTaskRequest&& src) :
    PFScheduledTaskCreateCloudScriptTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_name{ std::move(src.m_name) },
    m_parameter{ std::move(src.m_parameter) },
    m_schedule{ std::move(src.m_schedule) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PFScheduledTaskCloudScriptTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateCloudScriptTaskRequest::CreateCloudScriptTaskRequest(const PFScheduledTaskCreateCloudScriptTaskRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateCloudScriptTaskRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "IsActive", isActive);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Parameter", m_parameter, parameter);
    JsonUtils::ObjectGetMember(input, "Schedule", m_schedule, schedule);
}

JsonValue CreateCloudScriptTaskRequest::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskCreateCloudScriptTaskRequest>(*this);
}

InsightsScalingTaskParameter::InsightsScalingTaskParameter() :
    PFScheduledTaskInsightsScalingTaskParameter{}
{
}


InsightsScalingTaskParameter::InsightsScalingTaskParameter(const PFScheduledTaskInsightsScalingTaskParameter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsScalingTaskParameter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Level", level);
}

JsonValue InsightsScalingTaskParameter::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskInsightsScalingTaskParameter>(*this);
}

size_t InsightsScalingTaskParameter::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFScheduledTaskInsightsScalingTaskParameter) };
    return serializedSize;
}

void InsightsScalingTaskParameter::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFScheduledTaskInsightsScalingTaskParameter{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFScheduledTaskInsightsScalingTaskParameter);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

CreateInsightsScheduledScalingTaskRequest::CreateInsightsScheduledScalingTaskRequest() :
    PFScheduledTaskCreateInsightsScheduledScalingTaskRequest{}
{
}

CreateInsightsScheduledScalingTaskRequest::CreateInsightsScheduledScalingTaskRequest(const CreateInsightsScheduledScalingTaskRequest& src) :
    PFScheduledTaskCreateInsightsScheduledScalingTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_name{ src.m_name },
    m_parameter{ src.m_parameter },
    m_schedule{ src.m_schedule }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PFScheduledTaskInsightsScalingTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateInsightsScheduledScalingTaskRequest::CreateInsightsScheduledScalingTaskRequest(CreateInsightsScheduledScalingTaskRequest&& src) :
    PFScheduledTaskCreateInsightsScheduledScalingTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_name{ std::move(src.m_name) },
    m_parameter{ std::move(src.m_parameter) },
    m_schedule{ std::move(src.m_schedule) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PFScheduledTaskInsightsScalingTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateInsightsScheduledScalingTaskRequest::CreateInsightsScheduledScalingTaskRequest(const PFScheduledTaskCreateInsightsScheduledScalingTaskRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateInsightsScheduledScalingTaskRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "IsActive", isActive);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Parameter", m_parameter, parameter);
    JsonUtils::ObjectGetMember(input, "Schedule", m_schedule, schedule);
}

JsonValue CreateInsightsScheduledScalingTaskRequest::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskCreateInsightsScheduledScalingTaskRequest>(*this);
}

DeleteTaskRequest::DeleteTaskRequest() :
    PFScheduledTaskDeleteTaskRequest{}
{
}

DeleteTaskRequest::DeleteTaskRequest(const DeleteTaskRequest& src) :
    PFScheduledTaskDeleteTaskRequest{ src },
    m_identifier{ src.m_identifier }
{
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

DeleteTaskRequest::DeleteTaskRequest(DeleteTaskRequest&& src) :
    PFScheduledTaskDeleteTaskRequest{ src },
    m_identifier{ std::move(src.m_identifier) }
{
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

DeleteTaskRequest::DeleteTaskRequest(const PFScheduledTaskDeleteTaskRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteTaskRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Identifier", m_identifier, identifier);
}

JsonValue DeleteTaskRequest::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskDeleteTaskRequest>(*this);
}

GetTaskInstanceRequest::GetTaskInstanceRequest() :
    PFScheduledTaskGetTaskInstanceRequest{}
{
}

GetTaskInstanceRequest::GetTaskInstanceRequest(const GetTaskInstanceRequest& src) :
    PFScheduledTaskGetTaskInstanceRequest{ src },
    m_taskInstanceId{ src.m_taskInstanceId }
{
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

GetTaskInstanceRequest::GetTaskInstanceRequest(GetTaskInstanceRequest&& src) :
    PFScheduledTaskGetTaskInstanceRequest{ src },
    m_taskInstanceId{ std::move(src.m_taskInstanceId) }
{
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

GetTaskInstanceRequest::GetTaskInstanceRequest(const PFScheduledTaskGetTaskInstanceRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTaskInstanceRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
}

JsonValue GetTaskInstanceRequest::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskGetTaskInstanceRequest>(*this);
}

size_t GetTaskInstanceRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFScheduledTaskGetTaskInstanceRequest) };
    serializedSize += (m_taskInstanceId.size() + 1);
    return serializedSize;
}

void GetTaskInstanceRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFScheduledTaskGetTaskInstanceRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFScheduledTaskGetTaskInstanceRequest);
    memcpy(stringBuffer, m_taskInstanceId.data(), m_taskInstanceId.size() + 1);
    serializedStruct->taskInstanceId = stringBuffer;
    stringBuffer += m_taskInstanceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ActionsOnPlayersInSegmentTaskSummary::ActionsOnPlayersInSegmentTaskSummary() :
    PFScheduledTaskActionsOnPlayersInSegmentTaskSummary{}
{
}

ActionsOnPlayersInSegmentTaskSummary::ActionsOnPlayersInSegmentTaskSummary(const ActionsOnPlayersInSegmentTaskSummary& src) :
    PFScheduledTaskActionsOnPlayersInSegmentTaskSummary{ src },
    m_completedAt{ src.m_completedAt },
    m_errorMessage{ src.m_errorMessage },
    m_errorWasFatal{ src.m_errorWasFatal },
    m_estimatedSecondsRemaining{ src.m_estimatedSecondsRemaining },
    m_percentComplete{ src.m_percentComplete },
    m_scheduledByUserId{ src.m_scheduledByUserId },
    m_status{ src.m_status },
    m_taskIdentifier{ src.m_taskIdentifier },
    m_taskInstanceId{ src.m_taskInstanceId },
    m_totalPlayersInSegment{ src.m_totalPlayersInSegment },
    m_totalPlayersProcessed{ src.m_totalPlayersProcessed }
{
    completedAt = m_completedAt ? m_completedAt.operator->() : nullptr;
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    errorWasFatal = m_errorWasFatal ? m_errorWasFatal.operator->() : nullptr;
    estimatedSecondsRemaining = m_estimatedSecondsRemaining ? m_estimatedSecondsRemaining.operator->() : nullptr;
    percentComplete = m_percentComplete ? m_percentComplete.operator->() : nullptr;
    scheduledByUserId = m_scheduledByUserId.empty() ? nullptr : m_scheduledByUserId.data();
    status = m_status ? m_status.operator->() : nullptr;
    taskIdentifier = m_taskIdentifier ? m_taskIdentifier.operator->() : nullptr;
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
    totalPlayersInSegment = m_totalPlayersInSegment ? m_totalPlayersInSegment.operator->() : nullptr;
    totalPlayersProcessed = m_totalPlayersProcessed ? m_totalPlayersProcessed.operator->() : nullptr;
}

ActionsOnPlayersInSegmentTaskSummary::ActionsOnPlayersInSegmentTaskSummary(ActionsOnPlayersInSegmentTaskSummary&& src) :
    PFScheduledTaskActionsOnPlayersInSegmentTaskSummary{ src },
    m_completedAt{ std::move(src.m_completedAt) },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_errorWasFatal{ std::move(src.m_errorWasFatal) },
    m_estimatedSecondsRemaining{ std::move(src.m_estimatedSecondsRemaining) },
    m_percentComplete{ std::move(src.m_percentComplete) },
    m_scheduledByUserId{ std::move(src.m_scheduledByUserId) },
    m_status{ std::move(src.m_status) },
    m_taskIdentifier{ std::move(src.m_taskIdentifier) },
    m_taskInstanceId{ std::move(src.m_taskInstanceId) },
    m_totalPlayersInSegment{ std::move(src.m_totalPlayersInSegment) },
    m_totalPlayersProcessed{ std::move(src.m_totalPlayersProcessed) }
{
    completedAt = m_completedAt ? m_completedAt.operator->() : nullptr;
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    errorWasFatal = m_errorWasFatal ? m_errorWasFatal.operator->() : nullptr;
    estimatedSecondsRemaining = m_estimatedSecondsRemaining ? m_estimatedSecondsRemaining.operator->() : nullptr;
    percentComplete = m_percentComplete ? m_percentComplete.operator->() : nullptr;
    scheduledByUserId = m_scheduledByUserId.empty() ? nullptr : m_scheduledByUserId.data();
    status = m_status ? m_status.operator->() : nullptr;
    taskIdentifier = m_taskIdentifier ? m_taskIdentifier.operator->() : nullptr;
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
    totalPlayersInSegment = m_totalPlayersInSegment ? m_totalPlayersInSegment.operator->() : nullptr;
    totalPlayersProcessed = m_totalPlayersProcessed ? m_totalPlayersProcessed.operator->() : nullptr;
}

ActionsOnPlayersInSegmentTaskSummary::ActionsOnPlayersInSegmentTaskSummary(const PFScheduledTaskActionsOnPlayersInSegmentTaskSummary& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ActionsOnPlayersInSegmentTaskSummary::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CompletedAt", m_completedAt, completedAt, true);
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
    JsonUtils::ObjectGetMember(input, "ErrorWasFatal", m_errorWasFatal, errorWasFatal);
    JsonUtils::ObjectGetMember(input, "EstimatedSecondsRemaining", m_estimatedSecondsRemaining, estimatedSecondsRemaining);
    JsonUtils::ObjectGetMember(input, "PercentComplete", m_percentComplete, percentComplete);
    JsonUtils::ObjectGetMember(input, "ScheduledByUserId", m_scheduledByUserId, scheduledByUserId);
    JsonUtils::ObjectGetMember(input, "StartedAt", startedAt, true);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "TaskIdentifier", m_taskIdentifier, taskIdentifier);
    JsonUtils::ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
    JsonUtils::ObjectGetMember(input, "TotalPlayersInSegment", m_totalPlayersInSegment, totalPlayersInSegment);
    JsonUtils::ObjectGetMember(input, "TotalPlayersProcessed", m_totalPlayersProcessed, totalPlayersProcessed);
}

JsonValue ActionsOnPlayersInSegmentTaskSummary::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskActionsOnPlayersInSegmentTaskSummary>(*this);
}

GetActionsOnPlayersInSegmentTaskInstanceResult::GetActionsOnPlayersInSegmentTaskInstanceResult() :
    PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult{}
{
}

GetActionsOnPlayersInSegmentTaskInstanceResult::GetActionsOnPlayersInSegmentTaskInstanceResult(const GetActionsOnPlayersInSegmentTaskInstanceResult& src) :
    PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult{ src },
    m_parameter{ src.m_parameter },
    m_summary{ src.m_summary }
{
    parameter = m_parameter ? m_parameter.operator->() : nullptr;
    summary = m_summary ? m_summary.operator->() : nullptr;
}

GetActionsOnPlayersInSegmentTaskInstanceResult::GetActionsOnPlayersInSegmentTaskInstanceResult(GetActionsOnPlayersInSegmentTaskInstanceResult&& src) :
    PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult{ src },
    m_parameter{ std::move(src.m_parameter) },
    m_summary{ std::move(src.m_summary) }
{
    parameter = m_parameter ? m_parameter.operator->() : nullptr;
    summary = m_summary ? m_summary.operator->() : nullptr;
}

GetActionsOnPlayersInSegmentTaskInstanceResult::GetActionsOnPlayersInSegmentTaskInstanceResult(const PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetActionsOnPlayersInSegmentTaskInstanceResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Parameter", m_parameter, parameter);
    JsonUtils::ObjectGetMember(input, "Summary", m_summary, summary);
}

JsonValue GetActionsOnPlayersInSegmentTaskInstanceResult::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult>(*this);
}

CloudScriptTaskSummary::CloudScriptTaskSummary() :
    PFScheduledTaskCloudScriptTaskSummary{}
{
}

CloudScriptTaskSummary::CloudScriptTaskSummary(const CloudScriptTaskSummary& src) :
    PFScheduledTaskCloudScriptTaskSummary{ src },
    m_completedAt{ src.m_completedAt },
    m_estimatedSecondsRemaining{ src.m_estimatedSecondsRemaining },
    m_percentComplete{ src.m_percentComplete },
    m_result{ src.m_result },
    m_scheduledByUserId{ src.m_scheduledByUserId },
    m_status{ src.m_status },
    m_taskIdentifier{ src.m_taskIdentifier },
    m_taskInstanceId{ src.m_taskInstanceId }
{
    completedAt = m_completedAt ? m_completedAt.operator->() : nullptr;
    estimatedSecondsRemaining = m_estimatedSecondsRemaining ? m_estimatedSecondsRemaining.operator->() : nullptr;
    percentComplete = m_percentComplete ? m_percentComplete.operator->() : nullptr;
    result = m_result ? m_result.operator->() : nullptr;
    scheduledByUserId = m_scheduledByUserId.empty() ? nullptr : m_scheduledByUserId.data();
    status = m_status ? m_status.operator->() : nullptr;
    taskIdentifier = m_taskIdentifier ? m_taskIdentifier.operator->() : nullptr;
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

CloudScriptTaskSummary::CloudScriptTaskSummary(CloudScriptTaskSummary&& src) :
    PFScheduledTaskCloudScriptTaskSummary{ src },
    m_completedAt{ std::move(src.m_completedAt) },
    m_estimatedSecondsRemaining{ std::move(src.m_estimatedSecondsRemaining) },
    m_percentComplete{ std::move(src.m_percentComplete) },
    m_result{ std::move(src.m_result) },
    m_scheduledByUserId{ std::move(src.m_scheduledByUserId) },
    m_status{ std::move(src.m_status) },
    m_taskIdentifier{ std::move(src.m_taskIdentifier) },
    m_taskInstanceId{ std::move(src.m_taskInstanceId) }
{
    completedAt = m_completedAt ? m_completedAt.operator->() : nullptr;
    estimatedSecondsRemaining = m_estimatedSecondsRemaining ? m_estimatedSecondsRemaining.operator->() : nullptr;
    percentComplete = m_percentComplete ? m_percentComplete.operator->() : nullptr;
    result = m_result ? m_result.operator->() : nullptr;
    scheduledByUserId = m_scheduledByUserId.empty() ? nullptr : m_scheduledByUserId.data();
    status = m_status ? m_status.operator->() : nullptr;
    taskIdentifier = m_taskIdentifier ? m_taskIdentifier.operator->() : nullptr;
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

CloudScriptTaskSummary::CloudScriptTaskSummary(const PFScheduledTaskCloudScriptTaskSummary& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CloudScriptTaskSummary::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CompletedAt", m_completedAt, completedAt, true);
    JsonUtils::ObjectGetMember(input, "EstimatedSecondsRemaining", m_estimatedSecondsRemaining, estimatedSecondsRemaining);
    JsonUtils::ObjectGetMember(input, "PercentComplete", m_percentComplete, percentComplete);
    JsonUtils::ObjectGetMember(input, "Result", m_result, result);
    JsonUtils::ObjectGetMember(input, "ScheduledByUserId", m_scheduledByUserId, scheduledByUserId);
    JsonUtils::ObjectGetMember(input, "StartedAt", startedAt, true);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "TaskIdentifier", m_taskIdentifier, taskIdentifier);
    JsonUtils::ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
}

JsonValue CloudScriptTaskSummary::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskCloudScriptTaskSummary>(*this);
}

GetCloudScriptTaskInstanceResult::GetCloudScriptTaskInstanceResult() :
    PFScheduledTaskGetCloudScriptTaskInstanceResult{}
{
}

GetCloudScriptTaskInstanceResult::GetCloudScriptTaskInstanceResult(const GetCloudScriptTaskInstanceResult& src) :
    PFScheduledTaskGetCloudScriptTaskInstanceResult{ src },
    m_parameter{ src.m_parameter },
    m_summary{ src.m_summary }
{
    parameter = m_parameter ? m_parameter.operator->() : nullptr;
    summary = m_summary ? m_summary.operator->() : nullptr;
}

GetCloudScriptTaskInstanceResult::GetCloudScriptTaskInstanceResult(GetCloudScriptTaskInstanceResult&& src) :
    PFScheduledTaskGetCloudScriptTaskInstanceResult{ src },
    m_parameter{ std::move(src.m_parameter) },
    m_summary{ std::move(src.m_summary) }
{
    parameter = m_parameter ? m_parameter.operator->() : nullptr;
    summary = m_summary ? m_summary.operator->() : nullptr;
}

GetCloudScriptTaskInstanceResult::GetCloudScriptTaskInstanceResult(const PFScheduledTaskGetCloudScriptTaskInstanceResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCloudScriptTaskInstanceResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Parameter", m_parameter, parameter);
    JsonUtils::ObjectGetMember(input, "Summary", m_summary, summary);
}

JsonValue GetCloudScriptTaskInstanceResult::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskGetCloudScriptTaskInstanceResult>(*this);
}

GetTaskInstancesRequest::GetTaskInstancesRequest() :
    PFScheduledTaskGetTaskInstancesRequest{}
{
}

GetTaskInstancesRequest::GetTaskInstancesRequest(const GetTaskInstancesRequest& src) :
    PFScheduledTaskGetTaskInstancesRequest{ src },
    m_startedAtRangeFrom{ src.m_startedAtRangeFrom },
    m_startedAtRangeTo{ src.m_startedAtRangeTo },
    m_statusFilter{ src.m_statusFilter },
    m_taskIdentifier{ src.m_taskIdentifier }
{
    startedAtRangeFrom = m_startedAtRangeFrom ? m_startedAtRangeFrom.operator->() : nullptr;
    startedAtRangeTo = m_startedAtRangeTo ? m_startedAtRangeTo.operator->() : nullptr;
    statusFilter = m_statusFilter ? m_statusFilter.operator->() : nullptr;
    taskIdentifier = m_taskIdentifier ? m_taskIdentifier.operator->() : nullptr;
}

GetTaskInstancesRequest::GetTaskInstancesRequest(GetTaskInstancesRequest&& src) :
    PFScheduledTaskGetTaskInstancesRequest{ src },
    m_startedAtRangeFrom{ std::move(src.m_startedAtRangeFrom) },
    m_startedAtRangeTo{ std::move(src.m_startedAtRangeTo) },
    m_statusFilter{ std::move(src.m_statusFilter) },
    m_taskIdentifier{ std::move(src.m_taskIdentifier) }
{
    startedAtRangeFrom = m_startedAtRangeFrom ? m_startedAtRangeFrom.operator->() : nullptr;
    startedAtRangeTo = m_startedAtRangeTo ? m_startedAtRangeTo.operator->() : nullptr;
    statusFilter = m_statusFilter ? m_statusFilter.operator->() : nullptr;
    taskIdentifier = m_taskIdentifier ? m_taskIdentifier.operator->() : nullptr;
}

GetTaskInstancesRequest::GetTaskInstancesRequest(const PFScheduledTaskGetTaskInstancesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTaskInstancesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StartedAtRangeFrom", m_startedAtRangeFrom, startedAtRangeFrom, true);
    JsonUtils::ObjectGetMember(input, "StartedAtRangeTo", m_startedAtRangeTo, startedAtRangeTo, true);
    JsonUtils::ObjectGetMember(input, "StatusFilter", m_statusFilter, statusFilter);
    JsonUtils::ObjectGetMember(input, "TaskIdentifier", m_taskIdentifier, taskIdentifier);
}

JsonValue GetTaskInstancesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskGetTaskInstancesRequest>(*this);
}

TaskInstanceBasicSummary::TaskInstanceBasicSummary() :
    PFScheduledTaskTaskInstanceBasicSummary{}
{
}

TaskInstanceBasicSummary::TaskInstanceBasicSummary(const TaskInstanceBasicSummary& src) :
    PFScheduledTaskTaskInstanceBasicSummary{ src },
    m_completedAt{ src.m_completedAt },
    m_errorMessage{ src.m_errorMessage },
    m_estimatedSecondsRemaining{ src.m_estimatedSecondsRemaining },
    m_percentComplete{ src.m_percentComplete },
    m_scheduledByUserId{ src.m_scheduledByUserId },
    m_status{ src.m_status },
    m_taskIdentifier{ src.m_taskIdentifier },
    m_taskInstanceId{ src.m_taskInstanceId },
    m_type{ src.m_type }
{
    completedAt = m_completedAt ? m_completedAt.operator->() : nullptr;
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    estimatedSecondsRemaining = m_estimatedSecondsRemaining ? m_estimatedSecondsRemaining.operator->() : nullptr;
    percentComplete = m_percentComplete ? m_percentComplete.operator->() : nullptr;
    scheduledByUserId = m_scheduledByUserId.empty() ? nullptr : m_scheduledByUserId.data();
    status = m_status ? m_status.operator->() : nullptr;
    taskIdentifier = m_taskIdentifier ? m_taskIdentifier.operator->() : nullptr;
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
    type = m_type ? m_type.operator->() : nullptr;
}

TaskInstanceBasicSummary::TaskInstanceBasicSummary(TaskInstanceBasicSummary&& src) :
    PFScheduledTaskTaskInstanceBasicSummary{ src },
    m_completedAt{ std::move(src.m_completedAt) },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_estimatedSecondsRemaining{ std::move(src.m_estimatedSecondsRemaining) },
    m_percentComplete{ std::move(src.m_percentComplete) },
    m_scheduledByUserId{ std::move(src.m_scheduledByUserId) },
    m_status{ std::move(src.m_status) },
    m_taskIdentifier{ std::move(src.m_taskIdentifier) },
    m_taskInstanceId{ std::move(src.m_taskInstanceId) },
    m_type{ std::move(src.m_type) }
{
    completedAt = m_completedAt ? m_completedAt.operator->() : nullptr;
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    estimatedSecondsRemaining = m_estimatedSecondsRemaining ? m_estimatedSecondsRemaining.operator->() : nullptr;
    percentComplete = m_percentComplete ? m_percentComplete.operator->() : nullptr;
    scheduledByUserId = m_scheduledByUserId.empty() ? nullptr : m_scheduledByUserId.data();
    status = m_status ? m_status.operator->() : nullptr;
    taskIdentifier = m_taskIdentifier ? m_taskIdentifier.operator->() : nullptr;
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
    type = m_type ? m_type.operator->() : nullptr;
}

TaskInstanceBasicSummary::TaskInstanceBasicSummary(const PFScheduledTaskTaskInstanceBasicSummary& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TaskInstanceBasicSummary::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CompletedAt", m_completedAt, completedAt, true);
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
    JsonUtils::ObjectGetMember(input, "EstimatedSecondsRemaining", m_estimatedSecondsRemaining, estimatedSecondsRemaining);
    JsonUtils::ObjectGetMember(input, "PercentComplete", m_percentComplete, percentComplete);
    JsonUtils::ObjectGetMember(input, "ScheduledByUserId", m_scheduledByUserId, scheduledByUserId);
    JsonUtils::ObjectGetMember(input, "StartedAt", startedAt, true);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "TaskIdentifier", m_taskIdentifier, taskIdentifier);
    JsonUtils::ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
    JsonUtils::ObjectGetMember(input, "Type", m_type, type);
}

JsonValue TaskInstanceBasicSummary::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskTaskInstanceBasicSummary>(*this);
}

GetTaskInstancesResult::GetTaskInstancesResult() :
    PFScheduledTaskGetTaskInstancesResult{}
{
}

GetTaskInstancesResult::GetTaskInstancesResult(const GetTaskInstancesResult& src) :
    PFScheduledTaskGetTaskInstancesResult{ src },
    m_summaries{ src.m_summaries }
{
    summaries = m_summaries.Empty() ? nullptr : m_summaries.Data();
}

GetTaskInstancesResult::GetTaskInstancesResult(GetTaskInstancesResult&& src) :
    PFScheduledTaskGetTaskInstancesResult{ src },
    m_summaries{ std::move(src.m_summaries) }
{
    summaries = m_summaries.Empty() ? nullptr : m_summaries.Data();
}

GetTaskInstancesResult::GetTaskInstancesResult(const PFScheduledTaskGetTaskInstancesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTaskInstancesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Summaries", m_summaries, summaries, summariesCount);
}

JsonValue GetTaskInstancesResult::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskGetTaskInstancesResult>(*this);
}

GetTasksRequest::GetTasksRequest() :
    PFScheduledTaskGetTasksRequest{}
{
}

GetTasksRequest::GetTasksRequest(const GetTasksRequest& src) :
    PFScheduledTaskGetTasksRequest{ src },
    m_identifier{ src.m_identifier }
{
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

GetTasksRequest::GetTasksRequest(GetTasksRequest&& src) :
    PFScheduledTaskGetTasksRequest{ src },
    m_identifier{ std::move(src.m_identifier) }
{
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

GetTasksRequest::GetTasksRequest(const PFScheduledTaskGetTasksRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTasksRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Identifier", m_identifier, identifier);
}

JsonValue GetTasksRequest::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskGetTasksRequest>(*this);
}

ScheduledTask::ScheduledTask() :
    PFScheduledTaskScheduledTask{}
{
}

ScheduledTask::ScheduledTask(const ScheduledTask& src) :
    PFScheduledTaskScheduledTask{ src },
    m_description{ src.m_description },
    m_lastRunTime{ src.m_lastRunTime },
    m_name{ src.m_name },
    m_nextRunTime{ src.m_nextRunTime },
    m_parameter{ src.m_parameter },
    m_schedule{ src.m_schedule },
    m_taskId{ src.m_taskId },
    m_type{ src.m_type }
{
    description = m_description.empty() ? nullptr : m_description.data();
    lastRunTime = m_lastRunTime ? m_lastRunTime.operator->() : nullptr;
    name = m_name.empty() ? nullptr : m_name.data();
    nextRunTime = m_nextRunTime ? m_nextRunTime.operator->() : nullptr;
    parameter.stringValue = m_parameter.StringValue();
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
    taskId = m_taskId.empty() ? nullptr : m_taskId.data();
    type = m_type ? m_type.operator->() : nullptr;
}

ScheduledTask::ScheduledTask(ScheduledTask&& src) :
    PFScheduledTaskScheduledTask{ src },
    m_description{ std::move(src.m_description) },
    m_lastRunTime{ std::move(src.m_lastRunTime) },
    m_name{ std::move(src.m_name) },
    m_nextRunTime{ std::move(src.m_nextRunTime) },
    m_parameter{ std::move(src.m_parameter) },
    m_schedule{ std::move(src.m_schedule) },
    m_taskId{ std::move(src.m_taskId) },
    m_type{ std::move(src.m_type) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    lastRunTime = m_lastRunTime ? m_lastRunTime.operator->() : nullptr;
    name = m_name.empty() ? nullptr : m_name.data();
    nextRunTime = m_nextRunTime ? m_nextRunTime.operator->() : nullptr;
    parameter.stringValue = m_parameter.StringValue();
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
    taskId = m_taskId.empty() ? nullptr : m_taskId.data();
    type = m_type ? m_type.operator->() : nullptr;
}

ScheduledTask::ScheduledTask(const PFScheduledTaskScheduledTask& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ScheduledTask::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "IsActive", isActive);
    JsonUtils::ObjectGetMember(input, "LastRunTime", m_lastRunTime, lastRunTime, true);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "NextRunTime", m_nextRunTime, nextRunTime, true);
    JsonUtils::ObjectGetMember(input, "Parameter", m_parameter, parameter);
    JsonUtils::ObjectGetMember(input, "Schedule", m_schedule, schedule);
    JsonUtils::ObjectGetMember(input, "TaskId", m_taskId, taskId);
    JsonUtils::ObjectGetMember(input, "Type", m_type, type);
}

JsonValue ScheduledTask::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskScheduledTask>(*this);
}

GetTasksResult::GetTasksResult() :
    PFScheduledTaskGetTasksResult{}
{
}

GetTasksResult::GetTasksResult(const GetTasksResult& src) :
    PFScheduledTaskGetTasksResult{ src },
    m_tasks{ src.m_tasks }
{
    tasks = m_tasks.Empty() ? nullptr : m_tasks.Data();
}

GetTasksResult::GetTasksResult(GetTasksResult&& src) :
    PFScheduledTaskGetTasksResult{ src },
    m_tasks{ std::move(src.m_tasks) }
{
    tasks = m_tasks.Empty() ? nullptr : m_tasks.Data();
}

GetTasksResult::GetTasksResult(const PFScheduledTaskGetTasksResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTasksResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Tasks", m_tasks, tasks, tasksCount);
}

JsonValue GetTasksResult::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskGetTasksResult>(*this);
}

RunTaskRequest::RunTaskRequest() :
    PFScheduledTaskRunTaskRequest{}
{
}

RunTaskRequest::RunTaskRequest(const RunTaskRequest& src) :
    PFScheduledTaskRunTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_identifier{ src.m_identifier }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

RunTaskRequest::RunTaskRequest(RunTaskRequest&& src) :
    PFScheduledTaskRunTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_identifier{ std::move(src.m_identifier) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

RunTaskRequest::RunTaskRequest(const PFScheduledTaskRunTaskRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RunTaskRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Identifier", m_identifier, identifier);
}

JsonValue RunTaskRequest::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskRunTaskRequest>(*this);
}

RunTaskResult::RunTaskResult() :
    PFScheduledTaskRunTaskResult{}
{
}

RunTaskResult::RunTaskResult(const RunTaskResult& src) :
    PFScheduledTaskRunTaskResult{ src },
    m_taskInstanceId{ src.m_taskInstanceId }
{
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

RunTaskResult::RunTaskResult(RunTaskResult&& src) :
    PFScheduledTaskRunTaskResult{ src },
    m_taskInstanceId{ std::move(src.m_taskInstanceId) }
{
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

RunTaskResult::RunTaskResult(const PFScheduledTaskRunTaskResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RunTaskResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
}

JsonValue RunTaskResult::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskRunTaskResult>(*this);
}

size_t RunTaskResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFScheduledTaskRunTaskResult) };
    serializedSize += (m_taskInstanceId.size() + 1);
    return serializedSize;
}

void RunTaskResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFScheduledTaskRunTaskResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFScheduledTaskRunTaskResult);
    memcpy(stringBuffer, m_taskInstanceId.data(), m_taskInstanceId.size() + 1);
    serializedStruct->taskInstanceId = stringBuffer;
    stringBuffer += m_taskInstanceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UpdateTaskRequest::UpdateTaskRequest() :
    PFScheduledTaskUpdateTaskRequest{}
{
}

UpdateTaskRequest::UpdateTaskRequest(const UpdateTaskRequest& src) :
    PFScheduledTaskUpdateTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_identifier{ src.m_identifier },
    m_name{ src.m_name },
    m_parameter{ src.m_parameter },
    m_schedule{ src.m_schedule }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
    name = m_name.empty() ? nullptr : m_name.data();
    parameter.stringValue = m_parameter.StringValue();
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

UpdateTaskRequest::UpdateTaskRequest(UpdateTaskRequest&& src) :
    PFScheduledTaskUpdateTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_identifier{ std::move(src.m_identifier) },
    m_name{ std::move(src.m_name) },
    m_parameter{ std::move(src.m_parameter) },
    m_schedule{ std::move(src.m_schedule) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
    name = m_name.empty() ? nullptr : m_name.data();
    parameter.stringValue = m_parameter.StringValue();
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

UpdateTaskRequest::UpdateTaskRequest(const PFScheduledTaskUpdateTaskRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateTaskRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "Identifier", m_identifier, identifier);
    JsonUtils::ObjectGetMember(input, "IsActive", isActive);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Parameter", m_parameter, parameter);
    JsonUtils::ObjectGetMember(input, "Schedule", m_schedule, schedule);
    JsonUtils::ObjectGetMember(input, "Type", type);
}

JsonValue UpdateTaskRequest::ToJson() const
{
    return JsonUtils::ToJson<PFScheduledTaskUpdateTaskRequest>(*this);
}

} // namespace ScheduledTaskModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFScheduledTaskAbortTaskInstanceRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskActionsOnPlayersInSegmentTaskParameter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActionId", input.actionId);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
    JsonUtils::ObjectAddMember(output, "Schedule", input.schedule);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskCreateTaskResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TaskId", input.taskId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskCloudScriptTaskParameter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Argument", input.argument);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskCreateCloudScriptTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
    JsonUtils::ObjectAddMember(output, "Schedule", input.schedule);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskInsightsScalingTaskParameter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Level", input.level);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskCreateInsightsScheduledScalingTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
    JsonUtils::ObjectAddMember(output, "Schedule", input.schedule);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskDeleteTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskGetTaskInstanceRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskActionsOnPlayersInSegmentTaskSummary& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CompletedAt", input.completedAt, true);
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    JsonUtils::ObjectAddMember(output, "ErrorWasFatal", input.errorWasFatal);
    JsonUtils::ObjectAddMember(output, "EstimatedSecondsRemaining", input.estimatedSecondsRemaining);
    JsonUtils::ObjectAddMember(output, "PercentComplete", input.percentComplete);
    JsonUtils::ObjectAddMember(output, "ScheduledByUserId", input.scheduledByUserId);
    JsonUtils::ObjectAddMember(output, "StartedAt", input.startedAt, true);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "TaskIdentifier", input.taskIdentifier);
    JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
    JsonUtils::ObjectAddMember(output, "TotalPlayersInSegment", input.totalPlayersInSegment);
    JsonUtils::ObjectAddMember(output, "TotalPlayersProcessed", input.totalPlayersProcessed);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskGetActionsOnPlayersInSegmentTaskInstanceResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
    JsonUtils::ObjectAddMember(output, "Summary", input.summary);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskCloudScriptTaskSummary& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CompletedAt", input.completedAt, true);
    JsonUtils::ObjectAddMember(output, "EstimatedSecondsRemaining", input.estimatedSecondsRemaining);
    JsonUtils::ObjectAddMember(output, "PercentComplete", input.percentComplete);
    JsonUtils::ObjectAddMember(output, "Result", input.result);
    JsonUtils::ObjectAddMember(output, "ScheduledByUserId", input.scheduledByUserId);
    JsonUtils::ObjectAddMember(output, "StartedAt", input.startedAt, true);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "TaskIdentifier", input.taskIdentifier);
    JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskGetCloudScriptTaskInstanceResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
    JsonUtils::ObjectAddMember(output, "Summary", input.summary);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskGetTaskInstancesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StartedAtRangeFrom", input.startedAtRangeFrom, true);
    JsonUtils::ObjectAddMember(output, "StartedAtRangeTo", input.startedAtRangeTo, true);
    JsonUtils::ObjectAddMember(output, "StatusFilter", input.statusFilter);
    JsonUtils::ObjectAddMember(output, "TaskIdentifier", input.taskIdentifier);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskTaskInstanceBasicSummary& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CompletedAt", input.completedAt, true);
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    JsonUtils::ObjectAddMember(output, "EstimatedSecondsRemaining", input.estimatedSecondsRemaining);
    JsonUtils::ObjectAddMember(output, "PercentComplete", input.percentComplete);
    JsonUtils::ObjectAddMember(output, "ScheduledByUserId", input.scheduledByUserId);
    JsonUtils::ObjectAddMember(output, "StartedAt", input.startedAt, true);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "TaskIdentifier", input.taskIdentifier);
    JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
    JsonUtils::ObjectAddMember(output, "Type", input.type);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskGetTaskInstancesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Summaries", input.summaries, input.summariesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskGetTasksRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskScheduledTask& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMember(output, "LastRunTime", input.lastRunTime, true);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "NextRunTime", input.nextRunTime, true);
    JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
    JsonUtils::ObjectAddMember(output, "Schedule", input.schedule);
    JsonUtils::ObjectAddMember(output, "TaskId", input.taskId);
    JsonUtils::ObjectAddMember(output, "Type", input.type);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskGetTasksResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Tasks", input.tasks, input.tasksCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskRunTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskRunTaskResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScheduledTaskUpdateTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
    JsonUtils::ObjectAddMember(output, "Schedule", input.schedule);
    JsonUtils::ObjectAddMember(output, "Type", input.type);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
