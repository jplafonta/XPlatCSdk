#include "stdafx.h"
#include "CloudScriptDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace CloudScriptModels
{

ScriptExecutionError::ScriptExecutionError() :
    PlayFabCloudScriptScriptExecutionError{}
{
}

ScriptExecutionError::ScriptExecutionError(const ScriptExecutionError& src) :
    PlayFabCloudScriptScriptExecutionError{ src },
    m_error{ src.m_error },
    m_message{ src.m_message },
    m_stackTrace{ src.m_stackTrace }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

ScriptExecutionError::ScriptExecutionError(ScriptExecutionError&& src) :
    PlayFabCloudScriptScriptExecutionError{ src },
    m_error{ std::move(src.m_error) },
    m_message{ std::move(src.m_message) },
    m_stackTrace{ std::move(src.m_stackTrace) }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

ScriptExecutionError::ScriptExecutionError(const PlayFabCloudScriptScriptExecutionError& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ScriptExecutionError::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "StackTrace", m_stackTrace, stackTrace);
}

JsonValue ScriptExecutionError::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptScriptExecutionError>(*this);
}

size_t ScriptExecutionError::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabCloudScriptScriptExecutionError) };
    serializedSize += (m_error.size() + 1);
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_stackTrace.size() + 1);
    return serializedSize;
}

void ScriptExecutionError::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabCloudScriptScriptExecutionError{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabCloudScriptScriptExecutionError);
    memcpy(stringBuffer, m_error.data(), m_error.size() + 1);
    serializedStruct->error = stringBuffer;
    stringBuffer += m_error.size() + 1;
    memcpy(stringBuffer, m_message.data(), m_message.size() + 1);
    serializedStruct->message = stringBuffer;
    stringBuffer += m_message.size() + 1;
    memcpy(stringBuffer, m_stackTrace.data(), m_stackTrace.size() + 1);
    serializedStruct->stackTrace = stringBuffer;
    stringBuffer += m_stackTrace.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

LogStatement::LogStatement() :
    PlayFabCloudScriptLogStatement{}
{
}

LogStatement::LogStatement(const LogStatement& src) :
    PlayFabCloudScriptLogStatement{ src },
    m_data{ src.m_data },
    m_level{ src.m_level },
    m_message{ src.m_message }
{
    data.stringValue = m_data.StringValue();
    level = m_level.empty() ? nullptr : m_level.data();
    message = m_message.empty() ? nullptr : m_message.data();
}

LogStatement::LogStatement(LogStatement&& src) :
    PlayFabCloudScriptLogStatement{ src },
    m_data{ std::move(src.m_data) },
    m_level{ std::move(src.m_level) },
    m_message{ std::move(src.m_message) }
{
    data.stringValue = m_data.StringValue();
    level = m_level.empty() ? nullptr : m_level.data();
    message = m_message.empty() ? nullptr : m_message.data();
}

LogStatement::LogStatement(const PlayFabCloudScriptLogStatement& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LogStatement::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data);
    JsonUtils::ObjectGetMember(input, "Level", m_level, level);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
}

JsonValue LogStatement::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptLogStatement>(*this);
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult() :
    PlayFabCloudScriptExecuteCloudScriptResult{}
{
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src) :
    PlayFabCloudScriptExecuteCloudScriptResult{ src },
    m_error{ src.m_error },
    m_functionName{ src.m_functionName },
    m_functionResult{ src.m_functionResult },
    m_functionResultTooLarge{ src.m_functionResultTooLarge },
    m_logs{ src.m_logs },
    m_logsTooLarge{ src.m_logsTooLarge }
{
    error = m_error ? m_error.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionResult.stringValue = m_functionResult.StringValue();
    functionResultTooLarge = m_functionResultTooLarge ? m_functionResultTooLarge.operator->() : nullptr;
    logs = m_logs.Empty() ? nullptr : m_logs.Data();
    logsTooLarge = m_logsTooLarge ? m_logsTooLarge.operator->() : nullptr;
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(ExecuteCloudScriptResult&& src) :
    PlayFabCloudScriptExecuteCloudScriptResult{ src },
    m_error{ std::move(src.m_error) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionResult{ std::move(src.m_functionResult) },
    m_functionResultTooLarge{ std::move(src.m_functionResultTooLarge) },
    m_logs{ std::move(src.m_logs) },
    m_logsTooLarge{ std::move(src.m_logsTooLarge) }
{
    error = m_error ? m_error.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionResult.stringValue = m_functionResult.StringValue();
    functionResultTooLarge = m_functionResultTooLarge ? m_functionResultTooLarge.operator->() : nullptr;
    logs = m_logs.Empty() ? nullptr : m_logs.Data();
    logsTooLarge = m_logsTooLarge ? m_logsTooLarge.operator->() : nullptr;
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(const PlayFabCloudScriptExecuteCloudScriptResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteCloudScriptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "APIRequestsIssued", aPIRequestsIssued);
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "ExecutionTimeSeconds", executionTimeSeconds);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
    JsonUtils::ObjectGetMember(input, "FunctionResultTooLarge", m_functionResultTooLarge, functionResultTooLarge);
    JsonUtils::ObjectGetMember(input, "HttpRequestsIssued", httpRequestsIssued);
    JsonUtils::ObjectGetMember(input, "Logs", m_logs, logs, logsCount);
    JsonUtils::ObjectGetMember(input, "LogsTooLarge", m_logsTooLarge, logsTooLarge);
    JsonUtils::ObjectGetMember(input, "MemoryConsumedBytes", memoryConsumedBytes);
    JsonUtils::ObjectGetMember(input, "ProcessorTimeSeconds", processorTimeSeconds);
    JsonUtils::ObjectGetMember(input, "Revision", revision);
}

JsonValue ExecuteCloudScriptResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptExecuteCloudScriptResult>(*this);
}

ExecuteEntityCloudScriptRequest::ExecuteEntityCloudScriptRequest() :
    PlayFabCloudScriptExecuteEntityCloudScriptRequest{}
{
}

ExecuteEntityCloudScriptRequest::ExecuteEntityCloudScriptRequest(const ExecuteEntityCloudScriptRequest& src) :
    PlayFabCloudScriptExecuteEntityCloudScriptRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_functionName{ src.m_functionName },
    m_functionParameter{ src.m_functionParameter },
    m_generatePlayStreamEvent{ src.m_generatePlayStreamEvent },
    m_revisionSelection{ src.m_revisionSelection },
    m_specificRevision{ src.m_specificRevision }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
    revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
    specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
}

ExecuteEntityCloudScriptRequest::ExecuteEntityCloudScriptRequest(ExecuteEntityCloudScriptRequest&& src) :
    PlayFabCloudScriptExecuteEntityCloudScriptRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionParameter{ std::move(src.m_functionParameter) },
    m_generatePlayStreamEvent{ std::move(src.m_generatePlayStreamEvent) },
    m_revisionSelection{ std::move(src.m_revisionSelection) },
    m_specificRevision{ std::move(src.m_specificRevision) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
    revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
    specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
}

ExecuteEntityCloudScriptRequest::ExecuteEntityCloudScriptRequest(const PlayFabCloudScriptExecuteEntityCloudScriptRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteEntityCloudScriptRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
    JsonUtils::ObjectGetMember(input, "GeneratePlayStreamEvent", m_generatePlayStreamEvent, generatePlayStreamEvent);
    JsonUtils::ObjectGetMember(input, "RevisionSelection", m_revisionSelection, revisionSelection);
    JsonUtils::ObjectGetMember(input, "SpecificRevision", m_specificRevision, specificRevision);
}

JsonValue ExecuteEntityCloudScriptRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptExecuteEntityCloudScriptRequest>(*this);
}

ExecuteFunctionRequest::ExecuteFunctionRequest() :
    PlayFabCloudScriptExecuteFunctionRequest{}
{
}

ExecuteFunctionRequest::ExecuteFunctionRequest(const ExecuteFunctionRequest& src) :
    PlayFabCloudScriptExecuteFunctionRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_functionName{ src.m_functionName },
    m_functionParameter{ src.m_functionParameter },
    m_generatePlayStreamEvent{ src.m_generatePlayStreamEvent }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
}

ExecuteFunctionRequest::ExecuteFunctionRequest(ExecuteFunctionRequest&& src) :
    PlayFabCloudScriptExecuteFunctionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionParameter{ std::move(src.m_functionParameter) },
    m_generatePlayStreamEvent{ std::move(src.m_generatePlayStreamEvent) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
}

ExecuteFunctionRequest::ExecuteFunctionRequest(const PlayFabCloudScriptExecuteFunctionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteFunctionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
    JsonUtils::ObjectGetMember(input, "GeneratePlayStreamEvent", m_generatePlayStreamEvent, generatePlayStreamEvent);
}

JsonValue ExecuteFunctionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptExecuteFunctionRequest>(*this);
}

FunctionExecutionError::FunctionExecutionError() :
    PlayFabCloudScriptFunctionExecutionError{}
{
}

FunctionExecutionError::FunctionExecutionError(const FunctionExecutionError& src) :
    PlayFabCloudScriptFunctionExecutionError{ src },
    m_error{ src.m_error },
    m_message{ src.m_message },
    m_stackTrace{ src.m_stackTrace }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

FunctionExecutionError::FunctionExecutionError(FunctionExecutionError&& src) :
    PlayFabCloudScriptFunctionExecutionError{ src },
    m_error{ std::move(src.m_error) },
    m_message{ std::move(src.m_message) },
    m_stackTrace{ std::move(src.m_stackTrace) }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

FunctionExecutionError::FunctionExecutionError(const PlayFabCloudScriptFunctionExecutionError& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FunctionExecutionError::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "StackTrace", m_stackTrace, stackTrace);
}

JsonValue FunctionExecutionError::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptFunctionExecutionError>(*this);
}

size_t FunctionExecutionError::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabCloudScriptFunctionExecutionError) };
    serializedSize += (m_error.size() + 1);
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_stackTrace.size() + 1);
    return serializedSize;
}

void FunctionExecutionError::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabCloudScriptFunctionExecutionError{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabCloudScriptFunctionExecutionError);
    memcpy(stringBuffer, m_error.data(), m_error.size() + 1);
    serializedStruct->error = stringBuffer;
    stringBuffer += m_error.size() + 1;
    memcpy(stringBuffer, m_message.data(), m_message.size() + 1);
    serializedStruct->message = stringBuffer;
    stringBuffer += m_message.size() + 1;
    memcpy(stringBuffer, m_stackTrace.data(), m_stackTrace.size() + 1);
    serializedStruct->stackTrace = stringBuffer;
    stringBuffer += m_stackTrace.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ExecuteFunctionResult::ExecuteFunctionResult() :
    PlayFabCloudScriptExecuteFunctionResult{}
{
}

ExecuteFunctionResult::ExecuteFunctionResult(const ExecuteFunctionResult& src) :
    PlayFabCloudScriptExecuteFunctionResult{ src },
    m_error{ src.m_error },
    m_functionName{ src.m_functionName },
    m_functionResult{ src.m_functionResult },
    m_functionResultTooLarge{ src.m_functionResultTooLarge }
{
    error = m_error ? m_error.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionResult.stringValue = m_functionResult.StringValue();
    functionResultTooLarge = m_functionResultTooLarge ? m_functionResultTooLarge.operator->() : nullptr;
}

ExecuteFunctionResult::ExecuteFunctionResult(ExecuteFunctionResult&& src) :
    PlayFabCloudScriptExecuteFunctionResult{ src },
    m_error{ std::move(src.m_error) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionResult{ std::move(src.m_functionResult) },
    m_functionResultTooLarge{ std::move(src.m_functionResultTooLarge) }
{
    error = m_error ? m_error.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionResult.stringValue = m_functionResult.StringValue();
    functionResultTooLarge = m_functionResultTooLarge ? m_functionResultTooLarge.operator->() : nullptr;
}

ExecuteFunctionResult::ExecuteFunctionResult(const PlayFabCloudScriptExecuteFunctionResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteFunctionResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "ExecutionTimeMilliseconds", executionTimeMilliseconds);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
    JsonUtils::ObjectGetMember(input, "FunctionResultTooLarge", m_functionResultTooLarge, functionResultTooLarge);
}

JsonValue ExecuteFunctionResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptExecuteFunctionResult>(*this);
}

FunctionModel::FunctionModel() :
    PlayFabCloudScriptFunctionModel{}
{
}

FunctionModel::FunctionModel(const FunctionModel& src) :
    PlayFabCloudScriptFunctionModel{ src },
    m_functionAddress{ src.m_functionAddress },
    m_functionName{ src.m_functionName },
    m_triggerType{ src.m_triggerType }
{
    functionAddress = m_functionAddress.empty() ? nullptr : m_functionAddress.data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    triggerType = m_triggerType.empty() ? nullptr : m_triggerType.data();
}

FunctionModel::FunctionModel(FunctionModel&& src) :
    PlayFabCloudScriptFunctionModel{ src },
    m_functionAddress{ std::move(src.m_functionAddress) },
    m_functionName{ std::move(src.m_functionName) },
    m_triggerType{ std::move(src.m_triggerType) }
{
    functionAddress = m_functionAddress.empty() ? nullptr : m_functionAddress.data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    triggerType = m_triggerType.empty() ? nullptr : m_triggerType.data();
}

FunctionModel::FunctionModel(const PlayFabCloudScriptFunctionModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FunctionModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FunctionAddress", m_functionAddress, functionAddress);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "TriggerType", m_triggerType, triggerType);
}

JsonValue FunctionModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptFunctionModel>(*this);
}

size_t FunctionModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabCloudScriptFunctionModel) };
    serializedSize += (m_functionAddress.size() + 1);
    serializedSize += (m_functionName.size() + 1);
    serializedSize += (m_triggerType.size() + 1);
    return serializedSize;
}

void FunctionModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabCloudScriptFunctionModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabCloudScriptFunctionModel);
    memcpy(stringBuffer, m_functionAddress.data(), m_functionAddress.size() + 1);
    serializedStruct->functionAddress = stringBuffer;
    stringBuffer += m_functionAddress.size() + 1;
    memcpy(stringBuffer, m_functionName.data(), m_functionName.size() + 1);
    serializedStruct->functionName = stringBuffer;
    stringBuffer += m_functionName.size() + 1;
    memcpy(stringBuffer, m_triggerType.data(), m_triggerType.size() + 1);
    serializedStruct->triggerType = stringBuffer;
    stringBuffer += m_triggerType.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

HttpFunctionModel::HttpFunctionModel() :
    PlayFabCloudScriptHttpFunctionModel{}
{
}

HttpFunctionModel::HttpFunctionModel(const HttpFunctionModel& src) :
    PlayFabCloudScriptHttpFunctionModel{ src },
    m_functionName{ src.m_functionName },
    m_functionUrl{ src.m_functionUrl }
{
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionUrl = m_functionUrl.empty() ? nullptr : m_functionUrl.data();
}

HttpFunctionModel::HttpFunctionModel(HttpFunctionModel&& src) :
    PlayFabCloudScriptHttpFunctionModel{ src },
    m_functionName{ std::move(src.m_functionName) },
    m_functionUrl{ std::move(src.m_functionUrl) }
{
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionUrl = m_functionUrl.empty() ? nullptr : m_functionUrl.data();
}

HttpFunctionModel::HttpFunctionModel(const PlayFabCloudScriptHttpFunctionModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void HttpFunctionModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionUrl", m_functionUrl, functionUrl);
}

JsonValue HttpFunctionModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptHttpFunctionModel>(*this);
}

size_t HttpFunctionModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabCloudScriptHttpFunctionModel) };
    serializedSize += (m_functionName.size() + 1);
    serializedSize += (m_functionUrl.size() + 1);
    return serializedSize;
}

void HttpFunctionModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabCloudScriptHttpFunctionModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabCloudScriptHttpFunctionModel);
    memcpy(stringBuffer, m_functionName.data(), m_functionName.size() + 1);
    serializedStruct->functionName = stringBuffer;
    stringBuffer += m_functionName.size() + 1;
    memcpy(stringBuffer, m_functionUrl.data(), m_functionUrl.size() + 1);
    serializedStruct->functionUrl = stringBuffer;
    stringBuffer += m_functionUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListFunctionsRequest::ListFunctionsRequest() :
    PlayFabCloudScriptListFunctionsRequest{}
{
}

ListFunctionsRequest::ListFunctionsRequest(const ListFunctionsRequest& src) :
    PlayFabCloudScriptListFunctionsRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListFunctionsRequest::ListFunctionsRequest(ListFunctionsRequest&& src) :
    PlayFabCloudScriptListFunctionsRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListFunctionsRequest::ListFunctionsRequest(const PlayFabCloudScriptListFunctionsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListFunctionsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ListFunctionsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptListFunctionsRequest>(*this);
}

ListFunctionsResult::ListFunctionsResult() :
    PlayFabCloudScriptListFunctionsResult{}
{
}

ListFunctionsResult::ListFunctionsResult(const ListFunctionsResult& src) :
    PlayFabCloudScriptListFunctionsResult{ src },
    m_functions{ src.m_functions }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListFunctionsResult::ListFunctionsResult(ListFunctionsResult&& src) :
    PlayFabCloudScriptListFunctionsResult{ src },
    m_functions{ std::move(src.m_functions) }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListFunctionsResult::ListFunctionsResult(const PlayFabCloudScriptListFunctionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListFunctionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Functions", m_functions, functions, functionsCount);
}

JsonValue ListFunctionsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptListFunctionsResult>(*this);
}

ListHttpFunctionsResult::ListHttpFunctionsResult() :
    PlayFabCloudScriptListHttpFunctionsResult{}
{
}

ListHttpFunctionsResult::ListHttpFunctionsResult(const ListHttpFunctionsResult& src) :
    PlayFabCloudScriptListHttpFunctionsResult{ src },
    m_functions{ src.m_functions }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListHttpFunctionsResult::ListHttpFunctionsResult(ListHttpFunctionsResult&& src) :
    PlayFabCloudScriptListHttpFunctionsResult{ src },
    m_functions{ std::move(src.m_functions) }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListHttpFunctionsResult::ListHttpFunctionsResult(const PlayFabCloudScriptListHttpFunctionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListHttpFunctionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Functions", m_functions, functions, functionsCount);
}

JsonValue ListHttpFunctionsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptListHttpFunctionsResult>(*this);
}

QueuedFunctionModel::QueuedFunctionModel() :
    PlayFabCloudScriptQueuedFunctionModel{}
{
}

QueuedFunctionModel::QueuedFunctionModel(const QueuedFunctionModel& src) :
    PlayFabCloudScriptQueuedFunctionModel{ src },
    m_connectionString{ src.m_connectionString },
    m_functionName{ src.m_functionName },
    m_queueName{ src.m_queueName }
{
    connectionString = m_connectionString.empty() ? nullptr : m_connectionString.data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

QueuedFunctionModel::QueuedFunctionModel(QueuedFunctionModel&& src) :
    PlayFabCloudScriptQueuedFunctionModel{ src },
    m_connectionString{ std::move(src.m_connectionString) },
    m_functionName{ std::move(src.m_functionName) },
    m_queueName{ std::move(src.m_queueName) }
{
    connectionString = m_connectionString.empty() ? nullptr : m_connectionString.data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

QueuedFunctionModel::QueuedFunctionModel(const PlayFabCloudScriptQueuedFunctionModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void QueuedFunctionModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionString", m_connectionString, connectionString);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue QueuedFunctionModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptQueuedFunctionModel>(*this);
}

size_t QueuedFunctionModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabCloudScriptQueuedFunctionModel) };
    serializedSize += (m_connectionString.size() + 1);
    serializedSize += (m_functionName.size() + 1);
    serializedSize += (m_queueName.size() + 1);
    return serializedSize;
}

void QueuedFunctionModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabCloudScriptQueuedFunctionModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabCloudScriptQueuedFunctionModel);
    memcpy(stringBuffer, m_connectionString.data(), m_connectionString.size() + 1);
    serializedStruct->connectionString = stringBuffer;
    stringBuffer += m_connectionString.size() + 1;
    memcpy(stringBuffer, m_functionName.data(), m_functionName.size() + 1);
    serializedStruct->functionName = stringBuffer;
    stringBuffer += m_functionName.size() + 1;
    memcpy(stringBuffer, m_queueName.data(), m_queueName.size() + 1);
    serializedStruct->queueName = stringBuffer;
    stringBuffer += m_queueName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListQueuedFunctionsResult::ListQueuedFunctionsResult() :
    PlayFabCloudScriptListQueuedFunctionsResult{}
{
}

ListQueuedFunctionsResult::ListQueuedFunctionsResult(const ListQueuedFunctionsResult& src) :
    PlayFabCloudScriptListQueuedFunctionsResult{ src },
    m_functions{ src.m_functions }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListQueuedFunctionsResult::ListQueuedFunctionsResult(ListQueuedFunctionsResult&& src) :
    PlayFabCloudScriptListQueuedFunctionsResult{ src },
    m_functions{ std::move(src.m_functions) }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListQueuedFunctionsResult::ListQueuedFunctionsResult(const PlayFabCloudScriptListQueuedFunctionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListQueuedFunctionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Functions", m_functions, functions, functionsCount);
}

JsonValue ListQueuedFunctionsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptListQueuedFunctionsResult>(*this);
}

NameIdentifier::NameIdentifier() :
    PlayFabCloudScriptNameIdentifier{}
{
}

NameIdentifier::NameIdentifier(const NameIdentifier& src) :
    PlayFabCloudScriptNameIdentifier{ src },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

NameIdentifier::NameIdentifier(NameIdentifier&& src) :
    PlayFabCloudScriptNameIdentifier{ src },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

NameIdentifier::NameIdentifier(const PlayFabCloudScriptNameIdentifier& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void NameIdentifier::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue NameIdentifier::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptNameIdentifier>(*this);
}

size_t NameIdentifier::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabCloudScriptNameIdentifier) };
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void NameIdentifier::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabCloudScriptNameIdentifier{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabCloudScriptNameIdentifier);
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PlayStreamEventEnvelopeModel::PlayStreamEventEnvelopeModel() :
    PlayFabCloudScriptPlayStreamEventEnvelopeModel{}
{
}

PlayStreamEventEnvelopeModel::PlayStreamEventEnvelopeModel(const PlayStreamEventEnvelopeModel& src) :
    PlayFabCloudScriptPlayStreamEventEnvelopeModel{ src },
    m_entityId{ src.m_entityId },
    m_entityType{ src.m_entityType },
    m_eventData{ src.m_eventData },
    m_eventName{ src.m_eventName },
    m_eventNamespace{ src.m_eventNamespace },
    m_eventSettings{ src.m_eventSettings }
{
    entityId = m_entityId.empty() ? nullptr : m_entityId.data();
    entityType = m_entityType.empty() ? nullptr : m_entityType.data();
    eventData = m_eventData.empty() ? nullptr : m_eventData.data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    eventNamespace = m_eventNamespace.empty() ? nullptr : m_eventNamespace.data();
    eventSettings = m_eventSettings.empty() ? nullptr : m_eventSettings.data();
}

PlayStreamEventEnvelopeModel::PlayStreamEventEnvelopeModel(PlayStreamEventEnvelopeModel&& src) :
    PlayFabCloudScriptPlayStreamEventEnvelopeModel{ src },
    m_entityId{ std::move(src.m_entityId) },
    m_entityType{ std::move(src.m_entityType) },
    m_eventData{ std::move(src.m_eventData) },
    m_eventName{ std::move(src.m_eventName) },
    m_eventNamespace{ std::move(src.m_eventNamespace) },
    m_eventSettings{ std::move(src.m_eventSettings) }
{
    entityId = m_entityId.empty() ? nullptr : m_entityId.data();
    entityType = m_entityType.empty() ? nullptr : m_entityType.data();
    eventData = m_eventData.empty() ? nullptr : m_eventData.data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    eventNamespace = m_eventNamespace.empty() ? nullptr : m_eventNamespace.data();
    eventSettings = m_eventSettings.empty() ? nullptr : m_eventSettings.data();
}

PlayStreamEventEnvelopeModel::PlayStreamEventEnvelopeModel(const PlayFabCloudScriptPlayStreamEventEnvelopeModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayStreamEventEnvelopeModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EntityId", m_entityId, entityId);
    JsonUtils::ObjectGetMember(input, "EntityType", m_entityType, entityType);
    JsonUtils::ObjectGetMember(input, "EventData", m_eventData, eventData);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "EventNamespace", m_eventNamespace, eventNamespace);
    JsonUtils::ObjectGetMember(input, "EventSettings", m_eventSettings, eventSettings);
}

JsonValue PlayStreamEventEnvelopeModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptPlayStreamEventEnvelopeModel>(*this);
}

size_t PlayStreamEventEnvelopeModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabCloudScriptPlayStreamEventEnvelopeModel) };
    serializedSize += (m_entityId.size() + 1);
    serializedSize += (m_entityType.size() + 1);
    serializedSize += (m_eventData.size() + 1);
    serializedSize += (m_eventName.size() + 1);
    serializedSize += (m_eventNamespace.size() + 1);
    serializedSize += (m_eventSettings.size() + 1);
    return serializedSize;
}

void PlayStreamEventEnvelopeModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabCloudScriptPlayStreamEventEnvelopeModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabCloudScriptPlayStreamEventEnvelopeModel);
    memcpy(stringBuffer, m_entityId.data(), m_entityId.size() + 1);
    serializedStruct->entityId = stringBuffer;
    stringBuffer += m_entityId.size() + 1;
    memcpy(stringBuffer, m_entityType.data(), m_entityType.size() + 1);
    serializedStruct->entityType = stringBuffer;
    stringBuffer += m_entityType.size() + 1;
    memcpy(stringBuffer, m_eventData.data(), m_eventData.size() + 1);
    serializedStruct->eventData = stringBuffer;
    stringBuffer += m_eventData.size() + 1;
    memcpy(stringBuffer, m_eventName.data(), m_eventName.size() + 1);
    serializedStruct->eventName = stringBuffer;
    stringBuffer += m_eventName.size() + 1;
    memcpy(stringBuffer, m_eventNamespace.data(), m_eventNamespace.size() + 1);
    serializedStruct->eventNamespace = stringBuffer;
    stringBuffer += m_eventNamespace.size() + 1;
    memcpy(stringBuffer, m_eventSettings.data(), m_eventSettings.size() + 1);
    serializedStruct->eventSettings = stringBuffer;
    stringBuffer += m_eventSettings.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PostFunctionResultForEntityTriggeredActionRequest::PostFunctionResultForEntityTriggeredActionRequest() :
    PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest{}
{
}

PostFunctionResultForEntityTriggeredActionRequest::PostFunctionResultForEntityTriggeredActionRequest(const PostFunctionResultForEntityTriggeredActionRequest& src) :
    PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_functionResult{ src.m_functionResult }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    functionResult = (PlayFabCloudScriptExecuteFunctionResult const*)&m_functionResult;
}

PostFunctionResultForEntityTriggeredActionRequest::PostFunctionResultForEntityTriggeredActionRequest(PostFunctionResultForEntityTriggeredActionRequest&& src) :
    PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_functionResult{ std::move(src.m_functionResult) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    functionResult = (PlayFabCloudScriptExecuteFunctionResult const*)&m_functionResult;
}

PostFunctionResultForEntityTriggeredActionRequest::PostFunctionResultForEntityTriggeredActionRequest(const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PostFunctionResultForEntityTriggeredActionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
}

JsonValue PostFunctionResultForEntityTriggeredActionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest>(*this);
}

PostFunctionResultForFunctionExecutionRequest::PostFunctionResultForFunctionExecutionRequest() :
    PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest{}
{
}

PostFunctionResultForFunctionExecutionRequest::PostFunctionResultForFunctionExecutionRequest(const PostFunctionResultForFunctionExecutionRequest& src) :
    PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_functionResult{ src.m_functionResult }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    functionResult = (PlayFabCloudScriptExecuteFunctionResult const*)&m_functionResult;
}

PostFunctionResultForFunctionExecutionRequest::PostFunctionResultForFunctionExecutionRequest(PostFunctionResultForFunctionExecutionRequest&& src) :
    PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_functionResult{ std::move(src.m_functionResult) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    functionResult = (PlayFabCloudScriptExecuteFunctionResult const*)&m_functionResult;
}

PostFunctionResultForFunctionExecutionRequest::PostFunctionResultForFunctionExecutionRequest(const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PostFunctionResultForFunctionExecutionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
}

JsonValue PostFunctionResultForFunctionExecutionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest>(*this);
}

PostFunctionResultForPlayerTriggeredActionRequest::PostFunctionResultForPlayerTriggeredActionRequest() :
    PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest{}
{
}

PostFunctionResultForPlayerTriggeredActionRequest::PostFunctionResultForPlayerTriggeredActionRequest(const PostFunctionResultForPlayerTriggeredActionRequest& src) :
    PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_functionResult{ src.m_functionResult },
    m_playerProfile{ src.m_playerProfile },
    m_playStreamEventEnvelope{ src.m_playStreamEventEnvelope }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    functionResult = (PlayFabCloudScriptExecuteFunctionResult const*)&m_functionResult;
    playerProfile = (PlayFabPlayerProfileModel const*)&m_playerProfile;
    playStreamEventEnvelope = m_playStreamEventEnvelope ? m_playStreamEventEnvelope.operator->() : nullptr;
}

PostFunctionResultForPlayerTriggeredActionRequest::PostFunctionResultForPlayerTriggeredActionRequest(PostFunctionResultForPlayerTriggeredActionRequest&& src) :
    PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_functionResult{ std::move(src.m_functionResult) },
    m_playerProfile{ std::move(src.m_playerProfile) },
    m_playStreamEventEnvelope{ std::move(src.m_playStreamEventEnvelope) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    functionResult = (PlayFabCloudScriptExecuteFunctionResult const*)&m_functionResult;
    playerProfile = (PlayFabPlayerProfileModel const*)&m_playerProfile;
    playStreamEventEnvelope = m_playStreamEventEnvelope ? m_playStreamEventEnvelope.operator->() : nullptr;
}

PostFunctionResultForPlayerTriggeredActionRequest::PostFunctionResultForPlayerTriggeredActionRequest(const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PostFunctionResultForPlayerTriggeredActionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
    JsonUtils::ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
    JsonUtils::ObjectGetMember(input, "PlayStreamEventEnvelope", m_playStreamEventEnvelope, playStreamEventEnvelope);
}

JsonValue PostFunctionResultForPlayerTriggeredActionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>(*this);
}

PostFunctionResultForScheduledTaskRequest::PostFunctionResultForScheduledTaskRequest() :
    PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest{}
{
}

PostFunctionResultForScheduledTaskRequest::PostFunctionResultForScheduledTaskRequest(const PostFunctionResultForScheduledTaskRequest& src) :
    PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_functionResult{ src.m_functionResult },
    m_scheduledTaskId{ src.m_scheduledTaskId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    functionResult = (PlayFabCloudScriptExecuteFunctionResult const*)&m_functionResult;
    scheduledTaskId = (PlayFabCloudScriptNameIdentifier const*)&m_scheduledTaskId;
}

PostFunctionResultForScheduledTaskRequest::PostFunctionResultForScheduledTaskRequest(PostFunctionResultForScheduledTaskRequest&& src) :
    PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_functionResult{ std::move(src.m_functionResult) },
    m_scheduledTaskId{ std::move(src.m_scheduledTaskId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    functionResult = (PlayFabCloudScriptExecuteFunctionResult const*)&m_functionResult;
    scheduledTaskId = (PlayFabCloudScriptNameIdentifier const*)&m_scheduledTaskId;
}

PostFunctionResultForScheduledTaskRequest::PostFunctionResultForScheduledTaskRequest(const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PostFunctionResultForScheduledTaskRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
    JsonUtils::ObjectGetMember(input, "ScheduledTaskId", m_scheduledTaskId, scheduledTaskId);
}

JsonValue PostFunctionResultForScheduledTaskRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest>(*this);
}

RegisterHttpFunctionRequest::RegisterHttpFunctionRequest() :
    PlayFabCloudScriptRegisterHttpFunctionRequest{}
{
}

RegisterHttpFunctionRequest::RegisterHttpFunctionRequest(const RegisterHttpFunctionRequest& src) :
    PlayFabCloudScriptRegisterHttpFunctionRequest{ src },
    m_customTags{ src.m_customTags },
    m_functionName{ src.m_functionName },
    m_functionUrl{ src.m_functionUrl }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionUrl = m_functionUrl.empty() ? nullptr : m_functionUrl.data();
}

RegisterHttpFunctionRequest::RegisterHttpFunctionRequest(RegisterHttpFunctionRequest&& src) :
    PlayFabCloudScriptRegisterHttpFunctionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionUrl{ std::move(src.m_functionUrl) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionUrl = m_functionUrl.empty() ? nullptr : m_functionUrl.data();
}

RegisterHttpFunctionRequest::RegisterHttpFunctionRequest(const PlayFabCloudScriptRegisterHttpFunctionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RegisterHttpFunctionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionUrl", m_functionUrl, functionUrl);
}

JsonValue RegisterHttpFunctionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptRegisterHttpFunctionRequest>(*this);
}

RegisterQueuedFunctionRequest::RegisterQueuedFunctionRequest() :
    PlayFabCloudScriptRegisterQueuedFunctionRequest{}
{
}

RegisterQueuedFunctionRequest::RegisterQueuedFunctionRequest(const RegisterQueuedFunctionRequest& src) :
    PlayFabCloudScriptRegisterQueuedFunctionRequest{ src },
    m_connectionString{ src.m_connectionString },
    m_customTags{ src.m_customTags },
    m_functionName{ src.m_functionName },
    m_queueName{ src.m_queueName }
{
    connectionString = m_connectionString.empty() ? nullptr : m_connectionString.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

RegisterQueuedFunctionRequest::RegisterQueuedFunctionRequest(RegisterQueuedFunctionRequest&& src) :
    PlayFabCloudScriptRegisterQueuedFunctionRequest{ src },
    m_connectionString{ std::move(src.m_connectionString) },
    m_customTags{ std::move(src.m_customTags) },
    m_functionName{ std::move(src.m_functionName) },
    m_queueName{ std::move(src.m_queueName) }
{
    connectionString = m_connectionString.empty() ? nullptr : m_connectionString.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

RegisterQueuedFunctionRequest::RegisterQueuedFunctionRequest(const PlayFabCloudScriptRegisterQueuedFunctionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RegisterQueuedFunctionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionString", m_connectionString, connectionString);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue RegisterQueuedFunctionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptRegisterQueuedFunctionRequest>(*this);
}

UnregisterFunctionRequest::UnregisterFunctionRequest() :
    PlayFabCloudScriptUnregisterFunctionRequest{}
{
}

UnregisterFunctionRequest::UnregisterFunctionRequest(const UnregisterFunctionRequest& src) :
    PlayFabCloudScriptUnregisterFunctionRequest{ src },
    m_customTags{ src.m_customTags },
    m_functionName{ src.m_functionName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
}

UnregisterFunctionRequest::UnregisterFunctionRequest(UnregisterFunctionRequest&& src) :
    PlayFabCloudScriptUnregisterFunctionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_functionName{ std::move(src.m_functionName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
}

UnregisterFunctionRequest::UnregisterFunctionRequest(const PlayFabCloudScriptUnregisterFunctionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnregisterFunctionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
}

JsonValue UnregisterFunctionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabCloudScriptUnregisterFunctionRequest>(*this);
}

} // namespace CloudScriptModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptScriptExecutionError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptLogStatement& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data);
    JsonUtils::ObjectAddMember(output, "Level", input.level);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteCloudScriptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "APIRequestsIssued", input.aPIRequestsIssued);
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "ExecutionTimeSeconds", input.executionTimeSeconds);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    JsonUtils::ObjectAddMember(output, "FunctionResultTooLarge", input.functionResultTooLarge);
    JsonUtils::ObjectAddMember(output, "HttpRequestsIssued", input.httpRequestsIssued);
    JsonUtils::ObjectAddMember(output, "Logs", input.logs, input.logsCount);
    JsonUtils::ObjectAddMember(output, "LogsTooLarge", input.logsTooLarge);
    JsonUtils::ObjectAddMember(output, "MemoryConsumedBytes", input.memoryConsumedBytes);
    JsonUtils::ObjectAddMember(output, "ProcessorTimeSeconds", input.processorTimeSeconds);
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteEntityCloudScriptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
    JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
    JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptFunctionExecutionError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteFunctionResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "ExecutionTimeMilliseconds", input.executionTimeMilliseconds);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    JsonUtils::ObjectAddMember(output, "FunctionResultTooLarge", input.functionResultTooLarge);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptFunctionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FunctionAddress", input.functionAddress);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "TriggerType", input.triggerType);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptHttpFunctionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionUrl", input.functionUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptListFunctionsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptListFunctionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Functions", input.functions, input.functionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptListHttpFunctionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Functions", input.functions, input.functionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptQueuedFunctionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionString", input.connectionString);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptListQueuedFunctionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Functions", input.functions, input.functionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptNameIdentifier& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptPlayStreamEventEnvelopeModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EntityId", input.entityId);
    JsonUtils::ObjectAddMember(output, "EntityType", input.entityType);
    JsonUtils::ObjectAddMember(output, "EventData", input.eventData);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "EventNamespace", input.eventNamespace);
    JsonUtils::ObjectAddMember(output, "EventSettings", input.eventSettings);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
    JsonUtils::ObjectAddMember(output, "PlayStreamEventEnvelope", input.playStreamEventEnvelope);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    JsonUtils::ObjectAddMember(output, "ScheduledTaskId", input.scheduledTaskId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptRegisterHttpFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionUrl", input.functionUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptRegisterQueuedFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionString", input.connectionString);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabCloudScriptUnregisterFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
