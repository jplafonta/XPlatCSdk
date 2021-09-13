#include "stdafx.h"
#include "CloudScriptDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace CloudScript
{

JsonValue GetCloudScriptRevisionRequest::ToJson() const
{
    return GetCloudScriptRevisionRequest::ToJson(this->Model());
}

JsonValue GetCloudScriptRevisionRequest::ToJson(const PFCloudScriptGetCloudScriptRevisionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

JsonValue CloudScriptFile::ToJson() const
{
    return CloudScriptFile::ToJson(this->Model());
}

JsonValue CloudScriptFile::ToJson(const PFCloudScriptCloudScriptFile& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FileContents", input.fileContents);
    JsonUtils::ObjectAddMember(output, "Filename", input.filename);
    return output;
}

void CloudScriptFile::FromJson(const JsonValue& input)
{
    String fileContents{};
    JsonUtils::ObjectGetMember(input, "FileContents", fileContents);
    this->SetFileContents(std::move(fileContents));

    String filename{};
    JsonUtils::ObjectGetMember(input, "Filename", filename);
    this->SetFilename(std::move(filename));
}

size_t CloudScriptFile::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptCloudScriptFile const*> CloudScriptFile::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<CloudScriptFile>(&this->Model());
}

size_t CloudScriptFile::RequiredBufferSize(const PFCloudScriptCloudScriptFile& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.fileContents)
    {
        requiredSize += (std::strlen(model.fileContents) + 1);
    }
    if (model.filename)
    {
        requiredSize += (std::strlen(model.filename) + 1);
    }
    return requiredSize;
}

HRESULT CloudScriptFile::Copy(const PFCloudScriptCloudScriptFile& input, PFCloudScriptCloudScriptFile& output, ModelBuffer& buffer)
{
    output = input;
    output.fileContents = buffer.CopyTo(input.fileContents);
    output.filename = buffer.CopyTo(input.filename);
    return S_OK;
}

void GetCloudScriptRevisionResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMemberTime(input, "CreatedAt", this->m_model.createdAt);

    ModelVector<CloudScriptFile> files{};
    JsonUtils::ObjectGetMember<CloudScriptFile>(input, "Files", files);
    this->SetFiles(std::move(files));

    JsonUtils::ObjectGetMember(input, "IsPublished", this->m_model.isPublished);

    JsonUtils::ObjectGetMember(input, "Revision", this->m_model.revision);

    JsonUtils::ObjectGetMember(input, "Version", this->m_model.version);
}

size_t GetCloudScriptRevisionResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptGetCloudScriptRevisionResult const*> GetCloudScriptRevisionResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetCloudScriptRevisionResult>(&this->Model());
}

size_t GetCloudScriptRevisionResult::RequiredBufferSize(const PFCloudScriptGetCloudScriptRevisionResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFCloudScriptCloudScriptFile*) + sizeof(PFCloudScriptCloudScriptFile*) * model.filesCount);
    for (size_t i = 0; i < model.filesCount; ++i)
    {
        requiredSize += CloudScriptFile::RequiredBufferSize(*model.files[i]);
    }
    return requiredSize;
}

HRESULT GetCloudScriptRevisionResult::Copy(const PFCloudScriptGetCloudScriptRevisionResult& input, PFCloudScriptGetCloudScriptRevisionResult& output, ModelBuffer& buffer)
{
    output = input;
    output.files = buffer.CopyToArray<CloudScriptFile>(input.files, input.filesCount);
    return S_OK;
}

void CloudScriptVersionStatus::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LatestRevision", this->m_model.latestRevision);

    JsonUtils::ObjectGetMember(input, "PublishedRevision", this->m_model.publishedRevision);

    JsonUtils::ObjectGetMember(input, "Version", this->m_model.version);
}

size_t CloudScriptVersionStatus::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptCloudScriptVersionStatus const*> CloudScriptVersionStatus::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<CloudScriptVersionStatus>(&this->Model());
}

size_t CloudScriptVersionStatus::RequiredBufferSize(const PFCloudScriptCloudScriptVersionStatus& model)
{
    UNREFERENCED_PARAMETER(model); // Fixed size
    return sizeof(ModelType);
}

HRESULT CloudScriptVersionStatus::Copy(const PFCloudScriptCloudScriptVersionStatus& input, PFCloudScriptCloudScriptVersionStatus& output, ModelBuffer& buffer)
{
    output = input;
    UNREFERENCED_PARAMETER(buffer); // Fixed size
    return S_OK;
}

void GetCloudScriptVersionsResult::FromJson(const JsonValue& input)
{
    ModelVector<CloudScriptVersionStatus> versions{};
    JsonUtils::ObjectGetMember<CloudScriptVersionStatus>(input, "Versions", versions);
    this->SetVersions(std::move(versions));
}

size_t GetCloudScriptVersionsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptGetCloudScriptVersionsResult const*> GetCloudScriptVersionsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetCloudScriptVersionsResult>(&this->Model());
}

size_t GetCloudScriptVersionsResult::RequiredBufferSize(const PFCloudScriptGetCloudScriptVersionsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFCloudScriptCloudScriptVersionStatus*) + sizeof(PFCloudScriptCloudScriptVersionStatus*) * model.versionsCount);
    for (size_t i = 0; i < model.versionsCount; ++i)
    {
        requiredSize += CloudScriptVersionStatus::RequiredBufferSize(*model.versions[i]);
    }
    return requiredSize;
}

HRESULT GetCloudScriptVersionsResult::Copy(const PFCloudScriptGetCloudScriptVersionsResult& input, PFCloudScriptGetCloudScriptVersionsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.versions = buffer.CopyToArray<CloudScriptVersionStatus>(input.versions, input.versionsCount);
    return S_OK;
}

JsonValue SetPublishedRevisionRequest::ToJson() const
{
    return SetPublishedRevisionRequest::ToJson(this->Model());
}

JsonValue SetPublishedRevisionRequest::ToJson(const PFCloudScriptSetPublishedRevisionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

JsonValue UpdateCloudScriptRequest::ToJson() const
{
    return UpdateCloudScriptRequest::ToJson(this->Model());
}

JsonValue UpdateCloudScriptRequest::ToJson(const PFCloudScriptUpdateCloudScriptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeveloperPlayFabId", input.developerPlayFabId);
    JsonUtils::ObjectAddMemberArray<CloudScriptFile>(output, "Files", input.files, input.filesCount);
    JsonUtils::ObjectAddMember(output, "Publish", input.publish);
    return output;
}

void UpdateCloudScriptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Revision", this->m_model.revision);

    JsonUtils::ObjectGetMember(input, "Version", this->m_model.version);
}

size_t UpdateCloudScriptResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptUpdateCloudScriptResult const*> UpdateCloudScriptResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UpdateCloudScriptResult>(&this->Model());
}

size_t UpdateCloudScriptResult::RequiredBufferSize(const PFCloudScriptUpdateCloudScriptResult& model)
{
    UNREFERENCED_PARAMETER(model); // Fixed size
    return sizeof(ModelType);
}

HRESULT UpdateCloudScriptResult::Copy(const PFCloudScriptUpdateCloudScriptResult& input, PFCloudScriptUpdateCloudScriptResult& output, ModelBuffer& buffer)
{
    output = input;
    UNREFERENCED_PARAMETER(buffer); // Fixed size
    return S_OK;
}

JsonValue ExecuteCloudScriptRequest::ToJson() const
{
    return ExecuteCloudScriptRequest::ToJson(this->Model());
}

JsonValue ExecuteCloudScriptRequest::ToJson(const PFCloudScriptExecuteCloudScriptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
    JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
    JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
    return output;
}

JsonValue ExecuteCloudScriptServerRequest::ToJson() const
{
    return ExecuteCloudScriptServerRequest::ToJson(this->Model());
}

JsonValue ExecuteCloudScriptServerRequest::ToJson(const PFCloudScriptExecuteCloudScriptServerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
    JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
    return output;
}

JsonValue ExecuteEntityCloudScriptRequest::ToJson() const
{
    return ExecuteEntityCloudScriptRequest::ToJson(this->Model());
}

JsonValue ExecuteEntityCloudScriptRequest::ToJson(const PFCloudScriptExecuteEntityCloudScriptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember<EntityKey>(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
    JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
    JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
    return output;
}

JsonValue ExecuteFunctionRequest::ToJson() const
{
    return ExecuteFunctionRequest::ToJson(this->Model());
}

JsonValue ExecuteFunctionRequest::ToJson(const PFCloudScriptExecuteFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember<EntityKey>(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
    return output;
}

JsonValue FunctionExecutionError::ToJson() const
{
    return FunctionExecutionError::ToJson(this->Model());
}

JsonValue FunctionExecutionError::ToJson(const PFCloudScriptFunctionExecutionError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
    return output;
}

void FunctionExecutionError::FromJson(const JsonValue& input)
{
    String error{};
    JsonUtils::ObjectGetMember(input, "Error", error);
    this->SetError(std::move(error));

    String message{};
    JsonUtils::ObjectGetMember(input, "Message", message);
    this->SetMessage(std::move(message));

    String stackTrace{};
    JsonUtils::ObjectGetMember(input, "StackTrace", stackTrace);
    this->SetStackTrace(std::move(stackTrace));
}

size_t FunctionExecutionError::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptFunctionExecutionError const*> FunctionExecutionError::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<FunctionExecutionError>(&this->Model());
}

size_t FunctionExecutionError::RequiredBufferSize(const PFCloudScriptFunctionExecutionError& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.error)
    {
        requiredSize += (std::strlen(model.error) + 1);
    }
    if (model.message)
    {
        requiredSize += (std::strlen(model.message) + 1);
    }
    if (model.stackTrace)
    {
        requiredSize += (std::strlen(model.stackTrace) + 1);
    }
    return requiredSize;
}

HRESULT FunctionExecutionError::Copy(const PFCloudScriptFunctionExecutionError& input, PFCloudScriptFunctionExecutionError& output, ModelBuffer& buffer)
{
    output = input;
    output.error = buffer.CopyTo(input.error);
    output.message = buffer.CopyTo(input.message);
    output.stackTrace = buffer.CopyTo(input.stackTrace);
    return S_OK;
}

JsonValue ExecuteFunctionResult::ToJson() const
{
    return ExecuteFunctionResult::ToJson(this->Model());
}

JsonValue ExecuteFunctionResult::ToJson(const PFCloudScriptExecuteFunctionResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember<FunctionExecutionError>(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "ExecutionTimeMilliseconds", input.executionTimeMilliseconds);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    JsonUtils::ObjectAddMember(output, "FunctionResultTooLarge", input.functionResultTooLarge);
    return output;
}

void ExecuteFunctionResult::FromJson(const JsonValue& input)
{
    StdExtra::optional<FunctionExecutionError> error{};
    JsonUtils::ObjectGetMember(input, "Error", error);
    if (error)
    {
        this->SetError(std::move(*error));
    }

    JsonUtils::ObjectGetMember(input, "ExecutionTimeMilliseconds", this->m_model.executionTimeMilliseconds);

    String functionName{};
    JsonUtils::ObjectGetMember(input, "FunctionName", functionName);
    this->SetFunctionName(std::move(functionName));

    JsonObject functionResult{};
    JsonUtils::ObjectGetMember(input, "FunctionResult", functionResult);
    this->SetFunctionResult(std::move(functionResult));

    StdExtra::optional<bool> functionResultTooLarge{};
    JsonUtils::ObjectGetMember(input, "FunctionResultTooLarge", functionResultTooLarge);
    this->SetFunctionResultTooLarge(std::move(functionResultTooLarge));
}

size_t ExecuteFunctionResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptExecuteFunctionResult const*> ExecuteFunctionResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ExecuteFunctionResult>(&this->Model());
}

size_t ExecuteFunctionResult::RequiredBufferSize(const PFCloudScriptExecuteFunctionResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.error)
    {
        requiredSize += FunctionExecutionError::RequiredBufferSize(*model.error);
    }
    if (model.functionName)
    {
        requiredSize += (std::strlen(model.functionName) + 1);
    }
    if (model.functionResult.stringValue)
    {
    requiredSize += (std::strlen(model.functionResult.stringValue) + 1);
    }
    if (model.functionResultTooLarge)
    {
        requiredSize += (alignof(bool) + sizeof(bool));
    }
    return requiredSize;
}

HRESULT ExecuteFunctionResult::Copy(const PFCloudScriptExecuteFunctionResult& input, PFCloudScriptExecuteFunctionResult& output, ModelBuffer& buffer)
{
    output = input;
    output.error = buffer.CopyTo<FunctionExecutionError>(input.error);
    output.functionName = buffer.CopyTo(input.functionName);
    output.functionResult.stringValue = buffer.CopyTo(input.functionResult.stringValue);
    output.functionResultTooLarge = buffer.CopyTo(input.functionResultTooLarge);
    return S_OK;
}

JsonValue ListFunctionsRequest::ToJson() const
{
    return ListFunctionsRequest::ToJson(this->Model());
}

JsonValue ListFunctionsRequest::ToJson(const PFCloudScriptListFunctionsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

void FunctionModel::FromJson(const JsonValue& input)
{
    String functionAddress{};
    JsonUtils::ObjectGetMember(input, "FunctionAddress", functionAddress);
    this->SetFunctionAddress(std::move(functionAddress));

    String functionName{};
    JsonUtils::ObjectGetMember(input, "FunctionName", functionName);
    this->SetFunctionName(std::move(functionName));

    String triggerType{};
    JsonUtils::ObjectGetMember(input, "TriggerType", triggerType);
    this->SetTriggerType(std::move(triggerType));
}

size_t FunctionModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptFunctionModel const*> FunctionModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<FunctionModel>(&this->Model());
}

size_t FunctionModel::RequiredBufferSize(const PFCloudScriptFunctionModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.functionAddress)
    {
        requiredSize += (std::strlen(model.functionAddress) + 1);
    }
    if (model.functionName)
    {
        requiredSize += (std::strlen(model.functionName) + 1);
    }
    if (model.triggerType)
    {
        requiredSize += (std::strlen(model.triggerType) + 1);
    }
    return requiredSize;
}

HRESULT FunctionModel::Copy(const PFCloudScriptFunctionModel& input, PFCloudScriptFunctionModel& output, ModelBuffer& buffer)
{
    output = input;
    output.functionAddress = buffer.CopyTo(input.functionAddress);
    output.functionName = buffer.CopyTo(input.functionName);
    output.triggerType = buffer.CopyTo(input.triggerType);
    return S_OK;
}

void ListFunctionsResult::FromJson(const JsonValue& input)
{
    ModelVector<FunctionModel> functions{};
    JsonUtils::ObjectGetMember<FunctionModel>(input, "Functions", functions);
    this->SetFunctions(std::move(functions));
}

size_t ListFunctionsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptListFunctionsResult const*> ListFunctionsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ListFunctionsResult>(&this->Model());
}

size_t ListFunctionsResult::RequiredBufferSize(const PFCloudScriptListFunctionsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFCloudScriptFunctionModel*) + sizeof(PFCloudScriptFunctionModel*) * model.functionsCount);
    for (size_t i = 0; i < model.functionsCount; ++i)
    {
        requiredSize += FunctionModel::RequiredBufferSize(*model.functions[i]);
    }
    return requiredSize;
}

HRESULT ListFunctionsResult::Copy(const PFCloudScriptListFunctionsResult& input, PFCloudScriptListFunctionsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.functions = buffer.CopyToArray<FunctionModel>(input.functions, input.functionsCount);
    return S_OK;
}

void HttpFunctionModel::FromJson(const JsonValue& input)
{
    String functionName{};
    JsonUtils::ObjectGetMember(input, "FunctionName", functionName);
    this->SetFunctionName(std::move(functionName));

    String functionUrl{};
    JsonUtils::ObjectGetMember(input, "FunctionUrl", functionUrl);
    this->SetFunctionUrl(std::move(functionUrl));
}

size_t HttpFunctionModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptHttpFunctionModel const*> HttpFunctionModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<HttpFunctionModel>(&this->Model());
}

size_t HttpFunctionModel::RequiredBufferSize(const PFCloudScriptHttpFunctionModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.functionName)
    {
        requiredSize += (std::strlen(model.functionName) + 1);
    }
    if (model.functionUrl)
    {
        requiredSize += (std::strlen(model.functionUrl) + 1);
    }
    return requiredSize;
}

HRESULT HttpFunctionModel::Copy(const PFCloudScriptHttpFunctionModel& input, PFCloudScriptHttpFunctionModel& output, ModelBuffer& buffer)
{
    output = input;
    output.functionName = buffer.CopyTo(input.functionName);
    output.functionUrl = buffer.CopyTo(input.functionUrl);
    return S_OK;
}

void ListHttpFunctionsResult::FromJson(const JsonValue& input)
{
    ModelVector<HttpFunctionModel> functions{};
    JsonUtils::ObjectGetMember<HttpFunctionModel>(input, "Functions", functions);
    this->SetFunctions(std::move(functions));
}

size_t ListHttpFunctionsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptListHttpFunctionsResult const*> ListHttpFunctionsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ListHttpFunctionsResult>(&this->Model());
}

size_t ListHttpFunctionsResult::RequiredBufferSize(const PFCloudScriptListHttpFunctionsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFCloudScriptHttpFunctionModel*) + sizeof(PFCloudScriptHttpFunctionModel*) * model.functionsCount);
    for (size_t i = 0; i < model.functionsCount; ++i)
    {
        requiredSize += HttpFunctionModel::RequiredBufferSize(*model.functions[i]);
    }
    return requiredSize;
}

HRESULT ListHttpFunctionsResult::Copy(const PFCloudScriptListHttpFunctionsResult& input, PFCloudScriptListHttpFunctionsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.functions = buffer.CopyToArray<HttpFunctionModel>(input.functions, input.functionsCount);
    return S_OK;
}

void QueuedFunctionModel::FromJson(const JsonValue& input)
{
    String connectionString{};
    JsonUtils::ObjectGetMember(input, "ConnectionString", connectionString);
    this->SetConnectionString(std::move(connectionString));

    String functionName{};
    JsonUtils::ObjectGetMember(input, "FunctionName", functionName);
    this->SetFunctionName(std::move(functionName));

    String queueName{};
    JsonUtils::ObjectGetMember(input, "QueueName", queueName);
    this->SetQueueName(std::move(queueName));
}

size_t QueuedFunctionModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptQueuedFunctionModel const*> QueuedFunctionModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<QueuedFunctionModel>(&this->Model());
}

size_t QueuedFunctionModel::RequiredBufferSize(const PFCloudScriptQueuedFunctionModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.connectionString)
    {
        requiredSize += (std::strlen(model.connectionString) + 1);
    }
    if (model.functionName)
    {
        requiredSize += (std::strlen(model.functionName) + 1);
    }
    if (model.queueName)
    {
        requiredSize += (std::strlen(model.queueName) + 1);
    }
    return requiredSize;
}

HRESULT QueuedFunctionModel::Copy(const PFCloudScriptQueuedFunctionModel& input, PFCloudScriptQueuedFunctionModel& output, ModelBuffer& buffer)
{
    output = input;
    output.connectionString = buffer.CopyTo(input.connectionString);
    output.functionName = buffer.CopyTo(input.functionName);
    output.queueName = buffer.CopyTo(input.queueName);
    return S_OK;
}

void ListQueuedFunctionsResult::FromJson(const JsonValue& input)
{
    ModelVector<QueuedFunctionModel> functions{};
    JsonUtils::ObjectGetMember<QueuedFunctionModel>(input, "Functions", functions);
    this->SetFunctions(std::move(functions));
}

size_t ListQueuedFunctionsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCloudScriptListQueuedFunctionsResult const*> ListQueuedFunctionsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ListQueuedFunctionsResult>(&this->Model());
}

size_t ListQueuedFunctionsResult::RequiredBufferSize(const PFCloudScriptListQueuedFunctionsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFCloudScriptQueuedFunctionModel*) + sizeof(PFCloudScriptQueuedFunctionModel*) * model.functionsCount);
    for (size_t i = 0; i < model.functionsCount; ++i)
    {
        requiredSize += QueuedFunctionModel::RequiredBufferSize(*model.functions[i]);
    }
    return requiredSize;
}

HRESULT ListQueuedFunctionsResult::Copy(const PFCloudScriptListQueuedFunctionsResult& input, PFCloudScriptListQueuedFunctionsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.functions = buffer.CopyToArray<QueuedFunctionModel>(input.functions, input.functionsCount);
    return S_OK;
}

JsonValue PostFunctionResultForEntityTriggeredActionRequest::ToJson() const
{
    return PostFunctionResultForEntityTriggeredActionRequest::ToJson(this->Model());
}

JsonValue PostFunctionResultForEntityTriggeredActionRequest::ToJson(const PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember<EntityKey>(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember<ExecuteFunctionResult>(output, "FunctionResult", input.functionResult);
    return output;
}

JsonValue PostFunctionResultForFunctionExecutionRequest::ToJson() const
{
    return PostFunctionResultForFunctionExecutionRequest::ToJson(this->Model());
}

JsonValue PostFunctionResultForFunctionExecutionRequest::ToJson(const PFCloudScriptPostFunctionResultForFunctionExecutionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember<EntityKey>(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember<ExecuteFunctionResult>(output, "FunctionResult", input.functionResult);
    return output;
}

JsonValue PlayStreamEventEnvelopeModel::ToJson() const
{
    return PlayStreamEventEnvelopeModel::ToJson(this->Model());
}

JsonValue PlayStreamEventEnvelopeModel::ToJson(const PFCloudScriptPlayStreamEventEnvelopeModel& input)
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

JsonValue PostFunctionResultForPlayerTriggeredActionRequest::ToJson() const
{
    return PostFunctionResultForPlayerTriggeredActionRequest::ToJson(this->Model());
}

JsonValue PostFunctionResultForPlayerTriggeredActionRequest::ToJson(const PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember<EntityKey>(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember<ExecuteFunctionResult>(output, "FunctionResult", input.functionResult);
    JsonUtils::ObjectAddMember<PlayerProfileModel>(output, "PlayerProfile", input.playerProfile);
    JsonUtils::ObjectAddMember<PlayStreamEventEnvelopeModel>(output, "PlayStreamEventEnvelope", input.playStreamEventEnvelope);
    return output;
}

JsonValue PostFunctionResultForScheduledTaskRequest::ToJson() const
{
    return PostFunctionResultForScheduledTaskRequest::ToJson(this->Model());
}

JsonValue PostFunctionResultForScheduledTaskRequest::ToJson(const PFCloudScriptPostFunctionResultForScheduledTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember<EntityKey>(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember<ExecuteFunctionResult>(output, "FunctionResult", input.functionResult);
    JsonUtils::ObjectAddMember<NameIdentifier>(output, "ScheduledTaskId", input.scheduledTaskId);
    return output;
}

JsonValue RegisterHttpFunctionRequest::ToJson() const
{
    return RegisterHttpFunctionRequest::ToJson(this->Model());
}

JsonValue RegisterHttpFunctionRequest::ToJson(const PFCloudScriptRegisterHttpFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionUrl", input.functionUrl);
    return output;
}

JsonValue RegisterQueuedFunctionRequest::ToJson() const
{
    return RegisterQueuedFunctionRequest::ToJson(this->Model());
}

JsonValue RegisterQueuedFunctionRequest::ToJson(const PFCloudScriptRegisterQueuedFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionString", input.connectionString);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

JsonValue UnregisterFunctionRequest::ToJson() const
{
    return UnregisterFunctionRequest::ToJson(this->Model());
}

JsonValue UnregisterFunctionRequest::ToJson(const PFCloudScriptUnregisterFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    return output;
}

} // namespace CloudScript
} // namespace PlayFab
