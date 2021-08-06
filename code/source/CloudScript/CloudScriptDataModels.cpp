#include "stdafx.h"
#include "CloudScriptDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace CloudScriptModels
{

GetCloudScriptRevisionRequest::GetCloudScriptRevisionRequest() :
    PFCloudScriptGetCloudScriptRevisionRequest{}
{
}

GetCloudScriptRevisionRequest::GetCloudScriptRevisionRequest(const GetCloudScriptRevisionRequest& src) :
    PFCloudScriptGetCloudScriptRevisionRequest{ src },
    m_revision{ src.m_revision },
    m_version{ src.m_version }
{
    revision = m_revision ? m_revision.operator->() : nullptr;
    version = m_version ? m_version.operator->() : nullptr;
}

GetCloudScriptRevisionRequest::GetCloudScriptRevisionRequest(GetCloudScriptRevisionRequest&& src) :
    PFCloudScriptGetCloudScriptRevisionRequest{ src },
    m_revision{ std::move(src.m_revision) },
    m_version{ std::move(src.m_version) }
{
    revision = m_revision ? m_revision.operator->() : nullptr;
    version = m_version ? m_version.operator->() : nullptr;
}

GetCloudScriptRevisionRequest::GetCloudScriptRevisionRequest(const PFCloudScriptGetCloudScriptRevisionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCloudScriptRevisionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Revision", m_revision, revision);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue GetCloudScriptRevisionRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptGetCloudScriptRevisionRequest>(*this);
}

CloudScriptFile::CloudScriptFile() :
    PFCloudScriptCloudScriptFile{}
{
}

CloudScriptFile::CloudScriptFile(const CloudScriptFile& src) :
    PFCloudScriptCloudScriptFile{ src },
    m_fileContents{ src.m_fileContents },
    m_filename{ src.m_filename }
{
    fileContents = m_fileContents.empty() ? nullptr : m_fileContents.data();
    filename = m_filename.empty() ? nullptr : m_filename.data();
}

CloudScriptFile::CloudScriptFile(CloudScriptFile&& src) :
    PFCloudScriptCloudScriptFile{ src },
    m_fileContents{ std::move(src.m_fileContents) },
    m_filename{ std::move(src.m_filename) }
{
    fileContents = m_fileContents.empty() ? nullptr : m_fileContents.data();
    filename = m_filename.empty() ? nullptr : m_filename.data();
}

CloudScriptFile::CloudScriptFile(const PFCloudScriptCloudScriptFile& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CloudScriptFile::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FileContents", m_fileContents, fileContents);
    JsonUtils::ObjectGetMember(input, "Filename", m_filename, filename);
}

JsonValue CloudScriptFile::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptCloudScriptFile>(*this);
}

size_t CloudScriptFile::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCloudScriptCloudScriptFile) };
    serializedSize += (m_fileContents.size() + 1);
    serializedSize += (m_filename.size() + 1);
    return serializedSize;
}

void CloudScriptFile::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCloudScriptCloudScriptFile{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCloudScriptCloudScriptFile);
    memcpy(stringBuffer, m_fileContents.data(), m_fileContents.size() + 1);
    serializedStruct->fileContents = stringBuffer;
    stringBuffer += m_fileContents.size() + 1;
    memcpy(stringBuffer, m_filename.data(), m_filename.size() + 1);
    serializedStruct->filename = stringBuffer;
    stringBuffer += m_filename.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetCloudScriptRevisionResult::GetCloudScriptRevisionResult() :
    PFCloudScriptGetCloudScriptRevisionResult{}
{
}

GetCloudScriptRevisionResult::GetCloudScriptRevisionResult(const GetCloudScriptRevisionResult& src) :
    PFCloudScriptGetCloudScriptRevisionResult{ src },
    m_files{ src.m_files }
{
    files = m_files.Empty() ? nullptr : m_files.Data();
}

GetCloudScriptRevisionResult::GetCloudScriptRevisionResult(GetCloudScriptRevisionResult&& src) :
    PFCloudScriptGetCloudScriptRevisionResult{ src },
    m_files{ std::move(src.m_files) }
{
    files = m_files.Empty() ? nullptr : m_files.Data();
}

GetCloudScriptRevisionResult::GetCloudScriptRevisionResult(const PFCloudScriptGetCloudScriptRevisionResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCloudScriptRevisionResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreatedAt", createdAt, true);
    JsonUtils::ObjectGetMember(input, "Files", m_files, files, filesCount);
    JsonUtils::ObjectGetMember(input, "IsPublished", isPublished);
    JsonUtils::ObjectGetMember(input, "Revision", revision);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue GetCloudScriptRevisionResult::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptGetCloudScriptRevisionResult>(*this);
}

CloudScriptVersionStatus::CloudScriptVersionStatus() :
    PFCloudScriptCloudScriptVersionStatus{}
{
}


CloudScriptVersionStatus::CloudScriptVersionStatus(const PFCloudScriptCloudScriptVersionStatus& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CloudScriptVersionStatus::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LatestRevision", latestRevision);
    JsonUtils::ObjectGetMember(input, "PublishedRevision", publishedRevision);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue CloudScriptVersionStatus::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptCloudScriptVersionStatus>(*this);
}

size_t CloudScriptVersionStatus::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCloudScriptCloudScriptVersionStatus) };
    return serializedSize;
}

void CloudScriptVersionStatus::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCloudScriptCloudScriptVersionStatus{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCloudScriptCloudScriptVersionStatus);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GetCloudScriptVersionsResult::GetCloudScriptVersionsResult() :
    PFCloudScriptGetCloudScriptVersionsResult{}
{
}

GetCloudScriptVersionsResult::GetCloudScriptVersionsResult(const GetCloudScriptVersionsResult& src) :
    PFCloudScriptGetCloudScriptVersionsResult{ src },
    m_versions{ src.m_versions }
{
    versions = m_versions.Empty() ? nullptr : m_versions.Data();
}

GetCloudScriptVersionsResult::GetCloudScriptVersionsResult(GetCloudScriptVersionsResult&& src) :
    PFCloudScriptGetCloudScriptVersionsResult{ src },
    m_versions{ std::move(src.m_versions) }
{
    versions = m_versions.Empty() ? nullptr : m_versions.Data();
}

GetCloudScriptVersionsResult::GetCloudScriptVersionsResult(const PFCloudScriptGetCloudScriptVersionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCloudScriptVersionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Versions", m_versions, versions, versionsCount);
}

JsonValue GetCloudScriptVersionsResult::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptGetCloudScriptVersionsResult>(*this);
}

SetPublishedRevisionRequest::SetPublishedRevisionRequest() :
    PFCloudScriptSetPublishedRevisionRequest{}
{
}

SetPublishedRevisionRequest::SetPublishedRevisionRequest(const SetPublishedRevisionRequest& src) :
    PFCloudScriptSetPublishedRevisionRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

SetPublishedRevisionRequest::SetPublishedRevisionRequest(SetPublishedRevisionRequest&& src) :
    PFCloudScriptSetPublishedRevisionRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

SetPublishedRevisionRequest::SetPublishedRevisionRequest(const PFCloudScriptSetPublishedRevisionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetPublishedRevisionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Revision", revision);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue SetPublishedRevisionRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptSetPublishedRevisionRequest>(*this);
}

UpdateCloudScriptRequest::UpdateCloudScriptRequest() :
    PFCloudScriptUpdateCloudScriptRequest{}
{
}

UpdateCloudScriptRequest::UpdateCloudScriptRequest(const UpdateCloudScriptRequest& src) :
    PFCloudScriptUpdateCloudScriptRequest{ src },
    m_customTags{ src.m_customTags },
    m_developerPlayFabId{ src.m_developerPlayFabId },
    m_files{ src.m_files }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    developerPlayFabId = m_developerPlayFabId.empty() ? nullptr : m_developerPlayFabId.data();
    files = m_files.Empty() ? nullptr : m_files.Data();
}

UpdateCloudScriptRequest::UpdateCloudScriptRequest(UpdateCloudScriptRequest&& src) :
    PFCloudScriptUpdateCloudScriptRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_developerPlayFabId{ std::move(src.m_developerPlayFabId) },
    m_files{ std::move(src.m_files) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    developerPlayFabId = m_developerPlayFabId.empty() ? nullptr : m_developerPlayFabId.data();
    files = m_files.Empty() ? nullptr : m_files.Data();
}

UpdateCloudScriptRequest::UpdateCloudScriptRequest(const PFCloudScriptUpdateCloudScriptRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateCloudScriptRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DeveloperPlayFabId", m_developerPlayFabId, developerPlayFabId);
    JsonUtils::ObjectGetMember(input, "Files", m_files, files, filesCount);
    JsonUtils::ObjectGetMember(input, "Publish", publish);
}

JsonValue UpdateCloudScriptRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptUpdateCloudScriptRequest>(*this);
}

UpdateCloudScriptResult::UpdateCloudScriptResult() :
    PFCloudScriptUpdateCloudScriptResult{}
{
}


UpdateCloudScriptResult::UpdateCloudScriptResult(const PFCloudScriptUpdateCloudScriptResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateCloudScriptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Revision", revision);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue UpdateCloudScriptResult::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptUpdateCloudScriptResult>(*this);
}

size_t UpdateCloudScriptResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCloudScriptUpdateCloudScriptResult) };
    return serializedSize;
}

void UpdateCloudScriptResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCloudScriptUpdateCloudScriptResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCloudScriptUpdateCloudScriptResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

ExecuteCloudScriptRequest::ExecuteCloudScriptRequest() :
    PFCloudScriptExecuteCloudScriptRequest{}
{
}

ExecuteCloudScriptRequest::ExecuteCloudScriptRequest(const ExecuteCloudScriptRequest& src) :
    PFCloudScriptExecuteCloudScriptRequest{ src },
    m_customTags{ src.m_customTags },
    m_functionName{ src.m_functionName },
    m_functionParameter{ src.m_functionParameter },
    m_generatePlayStreamEvent{ src.m_generatePlayStreamEvent },
    m_revisionSelection{ src.m_revisionSelection },
    m_specificRevision{ src.m_specificRevision }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
    revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
    specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
}

ExecuteCloudScriptRequest::ExecuteCloudScriptRequest(ExecuteCloudScriptRequest&& src) :
    PFCloudScriptExecuteCloudScriptRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionParameter{ std::move(src.m_functionParameter) },
    m_generatePlayStreamEvent{ std::move(src.m_generatePlayStreamEvent) },
    m_revisionSelection{ std::move(src.m_revisionSelection) },
    m_specificRevision{ std::move(src.m_specificRevision) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
    revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
    specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
}

ExecuteCloudScriptRequest::ExecuteCloudScriptRequest(const PFCloudScriptExecuteCloudScriptRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteCloudScriptRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
    JsonUtils::ObjectGetMember(input, "GeneratePlayStreamEvent", m_generatePlayStreamEvent, generatePlayStreamEvent);
    JsonUtils::ObjectGetMember(input, "RevisionSelection", m_revisionSelection, revisionSelection);
    JsonUtils::ObjectGetMember(input, "SpecificRevision", m_specificRevision, specificRevision);
}

JsonValue ExecuteCloudScriptRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptExecuteCloudScriptRequest>(*this);
}

ExecuteCloudScriptServerRequest::ExecuteCloudScriptServerRequest() :
    PFCloudScriptExecuteCloudScriptServerRequest{}
{
}

ExecuteCloudScriptServerRequest::ExecuteCloudScriptServerRequest(const ExecuteCloudScriptServerRequest& src) :
    PFCloudScriptExecuteCloudScriptServerRequest{ src },
    m_customTags{ src.m_customTags },
    m_functionName{ src.m_functionName },
    m_functionParameter{ src.m_functionParameter },
    m_generatePlayStreamEvent{ src.m_generatePlayStreamEvent },
    m_playFabId{ src.m_playFabId },
    m_revisionSelection{ src.m_revisionSelection },
    m_specificRevision{ src.m_specificRevision }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
    specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
}

ExecuteCloudScriptServerRequest::ExecuteCloudScriptServerRequest(ExecuteCloudScriptServerRequest&& src) :
    PFCloudScriptExecuteCloudScriptServerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionParameter{ std::move(src.m_functionParameter) },
    m_generatePlayStreamEvent{ std::move(src.m_generatePlayStreamEvent) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_revisionSelection{ std::move(src.m_revisionSelection) },
    m_specificRevision{ std::move(src.m_specificRevision) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
    specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
}

ExecuteCloudScriptServerRequest::ExecuteCloudScriptServerRequest(const PFCloudScriptExecuteCloudScriptServerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteCloudScriptServerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
    JsonUtils::ObjectGetMember(input, "GeneratePlayStreamEvent", m_generatePlayStreamEvent, generatePlayStreamEvent);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "RevisionSelection", m_revisionSelection, revisionSelection);
    JsonUtils::ObjectGetMember(input, "SpecificRevision", m_specificRevision, specificRevision);
}

JsonValue ExecuteCloudScriptServerRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptExecuteCloudScriptServerRequest>(*this);
}

ExecuteEntityCloudScriptRequest::ExecuteEntityCloudScriptRequest() :
    PFCloudScriptExecuteEntityCloudScriptRequest{}
{
}

ExecuteEntityCloudScriptRequest::ExecuteEntityCloudScriptRequest(const ExecuteEntityCloudScriptRequest& src) :
    PFCloudScriptExecuteEntityCloudScriptRequest{ src },
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
    PFCloudScriptExecuteEntityCloudScriptRequest{ src },
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

ExecuteEntityCloudScriptRequest::ExecuteEntityCloudScriptRequest(const PFCloudScriptExecuteEntityCloudScriptRequest& src)
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
    return JsonUtils::ToJson<PFCloudScriptExecuteEntityCloudScriptRequest>(*this);
}

ExecuteFunctionRequest::ExecuteFunctionRequest() :
    PFCloudScriptExecuteFunctionRequest{}
{
}

ExecuteFunctionRequest::ExecuteFunctionRequest(const ExecuteFunctionRequest& src) :
    PFCloudScriptExecuteFunctionRequest{ src },
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
    PFCloudScriptExecuteFunctionRequest{ src },
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

ExecuteFunctionRequest::ExecuteFunctionRequest(const PFCloudScriptExecuteFunctionRequest& src)
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
    return JsonUtils::ToJson<PFCloudScriptExecuteFunctionRequest>(*this);
}

FunctionExecutionError::FunctionExecutionError() :
    PFCloudScriptFunctionExecutionError{}
{
}

FunctionExecutionError::FunctionExecutionError(const FunctionExecutionError& src) :
    PFCloudScriptFunctionExecutionError{ src },
    m_error{ src.m_error },
    m_message{ src.m_message },
    m_stackTrace{ src.m_stackTrace }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

FunctionExecutionError::FunctionExecutionError(FunctionExecutionError&& src) :
    PFCloudScriptFunctionExecutionError{ src },
    m_error{ std::move(src.m_error) },
    m_message{ std::move(src.m_message) },
    m_stackTrace{ std::move(src.m_stackTrace) }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

FunctionExecutionError::FunctionExecutionError(const PFCloudScriptFunctionExecutionError& src)
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
    return JsonUtils::ToJson<PFCloudScriptFunctionExecutionError>(*this);
}

size_t FunctionExecutionError::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCloudScriptFunctionExecutionError) };
    serializedSize += (m_error.size() + 1);
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_stackTrace.size() + 1);
    return serializedSize;
}

void FunctionExecutionError::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCloudScriptFunctionExecutionError{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCloudScriptFunctionExecutionError);
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
    PFCloudScriptExecuteFunctionResult{}
{
}

ExecuteFunctionResult::ExecuteFunctionResult(const ExecuteFunctionResult& src) :
    PFCloudScriptExecuteFunctionResult{ src },
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
    PFCloudScriptExecuteFunctionResult{ src },
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

ExecuteFunctionResult::ExecuteFunctionResult(const PFCloudScriptExecuteFunctionResult& src)
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
    return JsonUtils::ToJson<PFCloudScriptExecuteFunctionResult>(*this);
}

ListFunctionsRequest::ListFunctionsRequest() :
    PFCloudScriptListFunctionsRequest{}
{
}

ListFunctionsRequest::ListFunctionsRequest(const ListFunctionsRequest& src) :
    PFCloudScriptListFunctionsRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListFunctionsRequest::ListFunctionsRequest(ListFunctionsRequest&& src) :
    PFCloudScriptListFunctionsRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListFunctionsRequest::ListFunctionsRequest(const PFCloudScriptListFunctionsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListFunctionsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ListFunctionsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptListFunctionsRequest>(*this);
}

FunctionModel::FunctionModel() :
    PFCloudScriptFunctionModel{}
{
}

FunctionModel::FunctionModel(const FunctionModel& src) :
    PFCloudScriptFunctionModel{ src },
    m_functionAddress{ src.m_functionAddress },
    m_functionName{ src.m_functionName },
    m_triggerType{ src.m_triggerType }
{
    functionAddress = m_functionAddress.empty() ? nullptr : m_functionAddress.data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    triggerType = m_triggerType.empty() ? nullptr : m_triggerType.data();
}

FunctionModel::FunctionModel(FunctionModel&& src) :
    PFCloudScriptFunctionModel{ src },
    m_functionAddress{ std::move(src.m_functionAddress) },
    m_functionName{ std::move(src.m_functionName) },
    m_triggerType{ std::move(src.m_triggerType) }
{
    functionAddress = m_functionAddress.empty() ? nullptr : m_functionAddress.data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    triggerType = m_triggerType.empty() ? nullptr : m_triggerType.data();
}

FunctionModel::FunctionModel(const PFCloudScriptFunctionModel& src)
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
    return JsonUtils::ToJson<PFCloudScriptFunctionModel>(*this);
}

size_t FunctionModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCloudScriptFunctionModel) };
    serializedSize += (m_functionAddress.size() + 1);
    serializedSize += (m_functionName.size() + 1);
    serializedSize += (m_triggerType.size() + 1);
    return serializedSize;
}

void FunctionModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCloudScriptFunctionModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCloudScriptFunctionModel);
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

ListFunctionsResult::ListFunctionsResult() :
    PFCloudScriptListFunctionsResult{}
{
}

ListFunctionsResult::ListFunctionsResult(const ListFunctionsResult& src) :
    PFCloudScriptListFunctionsResult{ src },
    m_functions{ src.m_functions }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListFunctionsResult::ListFunctionsResult(ListFunctionsResult&& src) :
    PFCloudScriptListFunctionsResult{ src },
    m_functions{ std::move(src.m_functions) }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListFunctionsResult::ListFunctionsResult(const PFCloudScriptListFunctionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListFunctionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Functions", m_functions, functions, functionsCount);
}

JsonValue ListFunctionsResult::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptListFunctionsResult>(*this);
}

HttpFunctionModel::HttpFunctionModel() :
    PFCloudScriptHttpFunctionModel{}
{
}

HttpFunctionModel::HttpFunctionModel(const HttpFunctionModel& src) :
    PFCloudScriptHttpFunctionModel{ src },
    m_functionName{ src.m_functionName },
    m_functionUrl{ src.m_functionUrl }
{
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionUrl = m_functionUrl.empty() ? nullptr : m_functionUrl.data();
}

HttpFunctionModel::HttpFunctionModel(HttpFunctionModel&& src) :
    PFCloudScriptHttpFunctionModel{ src },
    m_functionName{ std::move(src.m_functionName) },
    m_functionUrl{ std::move(src.m_functionUrl) }
{
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionUrl = m_functionUrl.empty() ? nullptr : m_functionUrl.data();
}

HttpFunctionModel::HttpFunctionModel(const PFCloudScriptHttpFunctionModel& src)
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
    return JsonUtils::ToJson<PFCloudScriptHttpFunctionModel>(*this);
}

size_t HttpFunctionModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCloudScriptHttpFunctionModel) };
    serializedSize += (m_functionName.size() + 1);
    serializedSize += (m_functionUrl.size() + 1);
    return serializedSize;
}

void HttpFunctionModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCloudScriptHttpFunctionModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCloudScriptHttpFunctionModel);
    memcpy(stringBuffer, m_functionName.data(), m_functionName.size() + 1);
    serializedStruct->functionName = stringBuffer;
    stringBuffer += m_functionName.size() + 1;
    memcpy(stringBuffer, m_functionUrl.data(), m_functionUrl.size() + 1);
    serializedStruct->functionUrl = stringBuffer;
    stringBuffer += m_functionUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListHttpFunctionsResult::ListHttpFunctionsResult() :
    PFCloudScriptListHttpFunctionsResult{}
{
}

ListHttpFunctionsResult::ListHttpFunctionsResult(const ListHttpFunctionsResult& src) :
    PFCloudScriptListHttpFunctionsResult{ src },
    m_functions{ src.m_functions }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListHttpFunctionsResult::ListHttpFunctionsResult(ListHttpFunctionsResult&& src) :
    PFCloudScriptListHttpFunctionsResult{ src },
    m_functions{ std::move(src.m_functions) }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListHttpFunctionsResult::ListHttpFunctionsResult(const PFCloudScriptListHttpFunctionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListHttpFunctionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Functions", m_functions, functions, functionsCount);
}

JsonValue ListHttpFunctionsResult::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptListHttpFunctionsResult>(*this);
}

QueuedFunctionModel::QueuedFunctionModel() :
    PFCloudScriptQueuedFunctionModel{}
{
}

QueuedFunctionModel::QueuedFunctionModel(const QueuedFunctionModel& src) :
    PFCloudScriptQueuedFunctionModel{ src },
    m_connectionString{ src.m_connectionString },
    m_functionName{ src.m_functionName },
    m_queueName{ src.m_queueName }
{
    connectionString = m_connectionString.empty() ? nullptr : m_connectionString.data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

QueuedFunctionModel::QueuedFunctionModel(QueuedFunctionModel&& src) :
    PFCloudScriptQueuedFunctionModel{ src },
    m_connectionString{ std::move(src.m_connectionString) },
    m_functionName{ std::move(src.m_functionName) },
    m_queueName{ std::move(src.m_queueName) }
{
    connectionString = m_connectionString.empty() ? nullptr : m_connectionString.data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

QueuedFunctionModel::QueuedFunctionModel(const PFCloudScriptQueuedFunctionModel& src)
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
    return JsonUtils::ToJson<PFCloudScriptQueuedFunctionModel>(*this);
}

size_t QueuedFunctionModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCloudScriptQueuedFunctionModel) };
    serializedSize += (m_connectionString.size() + 1);
    serializedSize += (m_functionName.size() + 1);
    serializedSize += (m_queueName.size() + 1);
    return serializedSize;
}

void QueuedFunctionModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCloudScriptQueuedFunctionModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCloudScriptQueuedFunctionModel);
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
    PFCloudScriptListQueuedFunctionsResult{}
{
}

ListQueuedFunctionsResult::ListQueuedFunctionsResult(const ListQueuedFunctionsResult& src) :
    PFCloudScriptListQueuedFunctionsResult{ src },
    m_functions{ src.m_functions }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListQueuedFunctionsResult::ListQueuedFunctionsResult(ListQueuedFunctionsResult&& src) :
    PFCloudScriptListQueuedFunctionsResult{ src },
    m_functions{ std::move(src.m_functions) }
{
    functions = m_functions.Empty() ? nullptr : m_functions.Data();
}

ListQueuedFunctionsResult::ListQueuedFunctionsResult(const PFCloudScriptListQueuedFunctionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListQueuedFunctionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Functions", m_functions, functions, functionsCount);
}

JsonValue ListQueuedFunctionsResult::ToJson() const
{
    return JsonUtils::ToJson<PFCloudScriptListQueuedFunctionsResult>(*this);
}

PostFunctionResultForEntityTriggeredActionRequest::PostFunctionResultForEntityTriggeredActionRequest() :
    PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest{}
{
}

PostFunctionResultForEntityTriggeredActionRequest::PostFunctionResultForEntityTriggeredActionRequest(const PostFunctionResultForEntityTriggeredActionRequest& src) :
    PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_functionResult{ src.m_functionResult }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    functionResult = (PFCloudScriptExecuteFunctionResult const*)&m_functionResult;
}

PostFunctionResultForEntityTriggeredActionRequest::PostFunctionResultForEntityTriggeredActionRequest(PostFunctionResultForEntityTriggeredActionRequest&& src) :
    PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_functionResult{ std::move(src.m_functionResult) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    functionResult = (PFCloudScriptExecuteFunctionResult const*)&m_functionResult;
}

PostFunctionResultForEntityTriggeredActionRequest::PostFunctionResultForEntityTriggeredActionRequest(const PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest& src)
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
    return JsonUtils::ToJson<PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest>(*this);
}

PostFunctionResultForFunctionExecutionRequest::PostFunctionResultForFunctionExecutionRequest() :
    PFCloudScriptPostFunctionResultForFunctionExecutionRequest{}
{
}

PostFunctionResultForFunctionExecutionRequest::PostFunctionResultForFunctionExecutionRequest(const PostFunctionResultForFunctionExecutionRequest& src) :
    PFCloudScriptPostFunctionResultForFunctionExecutionRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_functionResult{ src.m_functionResult }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    functionResult = (PFCloudScriptExecuteFunctionResult const*)&m_functionResult;
}

PostFunctionResultForFunctionExecutionRequest::PostFunctionResultForFunctionExecutionRequest(PostFunctionResultForFunctionExecutionRequest&& src) :
    PFCloudScriptPostFunctionResultForFunctionExecutionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_functionResult{ std::move(src.m_functionResult) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    functionResult = (PFCloudScriptExecuteFunctionResult const*)&m_functionResult;
}

PostFunctionResultForFunctionExecutionRequest::PostFunctionResultForFunctionExecutionRequest(const PFCloudScriptPostFunctionResultForFunctionExecutionRequest& src)
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
    return JsonUtils::ToJson<PFCloudScriptPostFunctionResultForFunctionExecutionRequest>(*this);
}

PlayStreamEventEnvelopeModel::PlayStreamEventEnvelopeModel() :
    PFCloudScriptPlayStreamEventEnvelopeModel{}
{
}

PlayStreamEventEnvelopeModel::PlayStreamEventEnvelopeModel(const PlayStreamEventEnvelopeModel& src) :
    PFCloudScriptPlayStreamEventEnvelopeModel{ src },
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
    PFCloudScriptPlayStreamEventEnvelopeModel{ src },
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

PlayStreamEventEnvelopeModel::PlayStreamEventEnvelopeModel(const PFCloudScriptPlayStreamEventEnvelopeModel& src)
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
    return JsonUtils::ToJson<PFCloudScriptPlayStreamEventEnvelopeModel>(*this);
}

size_t PlayStreamEventEnvelopeModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCloudScriptPlayStreamEventEnvelopeModel) };
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
    auto serializedStruct = new (buffer) PFCloudScriptPlayStreamEventEnvelopeModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCloudScriptPlayStreamEventEnvelopeModel);
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

PostFunctionResultForPlayerTriggeredActionRequest::PostFunctionResultForPlayerTriggeredActionRequest() :
    PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest{}
{
}

PostFunctionResultForPlayerTriggeredActionRequest::PostFunctionResultForPlayerTriggeredActionRequest(const PostFunctionResultForPlayerTriggeredActionRequest& src) :
    PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_functionResult{ src.m_functionResult },
    m_playerProfile{ src.m_playerProfile },
    m_playStreamEventEnvelope{ src.m_playStreamEventEnvelope }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    functionResult = (PFCloudScriptExecuteFunctionResult const*)&m_functionResult;
    playerProfile = (PFPlayerProfileModel const*)&m_playerProfile;
    playStreamEventEnvelope = m_playStreamEventEnvelope ? m_playStreamEventEnvelope.operator->() : nullptr;
}

PostFunctionResultForPlayerTriggeredActionRequest::PostFunctionResultForPlayerTriggeredActionRequest(PostFunctionResultForPlayerTriggeredActionRequest&& src) :
    PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_functionResult{ std::move(src.m_functionResult) },
    m_playerProfile{ std::move(src.m_playerProfile) },
    m_playStreamEventEnvelope{ std::move(src.m_playStreamEventEnvelope) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    functionResult = (PFCloudScriptExecuteFunctionResult const*)&m_functionResult;
    playerProfile = (PFPlayerProfileModel const*)&m_playerProfile;
    playStreamEventEnvelope = m_playStreamEventEnvelope ? m_playStreamEventEnvelope.operator->() : nullptr;
}

PostFunctionResultForPlayerTriggeredActionRequest::PostFunctionResultForPlayerTriggeredActionRequest(const PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& src)
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
    return JsonUtils::ToJson<PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>(*this);
}

PostFunctionResultForScheduledTaskRequest::PostFunctionResultForScheduledTaskRequest() :
    PFCloudScriptPostFunctionResultForScheduledTaskRequest{}
{
}

PostFunctionResultForScheduledTaskRequest::PostFunctionResultForScheduledTaskRequest(const PostFunctionResultForScheduledTaskRequest& src) :
    PFCloudScriptPostFunctionResultForScheduledTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_functionResult{ src.m_functionResult },
    m_scheduledTaskId{ src.m_scheduledTaskId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    functionResult = (PFCloudScriptExecuteFunctionResult const*)&m_functionResult;
    scheduledTaskId = (PFNameIdentifier const*)&m_scheduledTaskId;
}

PostFunctionResultForScheduledTaskRequest::PostFunctionResultForScheduledTaskRequest(PostFunctionResultForScheduledTaskRequest&& src) :
    PFCloudScriptPostFunctionResultForScheduledTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_functionResult{ std::move(src.m_functionResult) },
    m_scheduledTaskId{ std::move(src.m_scheduledTaskId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    functionResult = (PFCloudScriptExecuteFunctionResult const*)&m_functionResult;
    scheduledTaskId = (PFNameIdentifier const*)&m_scheduledTaskId;
}

PostFunctionResultForScheduledTaskRequest::PostFunctionResultForScheduledTaskRequest(const PFCloudScriptPostFunctionResultForScheduledTaskRequest& src)
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
    return JsonUtils::ToJson<PFCloudScriptPostFunctionResultForScheduledTaskRequest>(*this);
}

RegisterHttpFunctionRequest::RegisterHttpFunctionRequest() :
    PFCloudScriptRegisterHttpFunctionRequest{}
{
}

RegisterHttpFunctionRequest::RegisterHttpFunctionRequest(const RegisterHttpFunctionRequest& src) :
    PFCloudScriptRegisterHttpFunctionRequest{ src },
    m_customTags{ src.m_customTags },
    m_functionName{ src.m_functionName },
    m_functionUrl{ src.m_functionUrl }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionUrl = m_functionUrl.empty() ? nullptr : m_functionUrl.data();
}

RegisterHttpFunctionRequest::RegisterHttpFunctionRequest(RegisterHttpFunctionRequest&& src) :
    PFCloudScriptRegisterHttpFunctionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionUrl{ std::move(src.m_functionUrl) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionUrl = m_functionUrl.empty() ? nullptr : m_functionUrl.data();
}

RegisterHttpFunctionRequest::RegisterHttpFunctionRequest(const PFCloudScriptRegisterHttpFunctionRequest& src)
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
    return JsonUtils::ToJson<PFCloudScriptRegisterHttpFunctionRequest>(*this);
}

RegisterQueuedFunctionRequest::RegisterQueuedFunctionRequest() :
    PFCloudScriptRegisterQueuedFunctionRequest{}
{
}

RegisterQueuedFunctionRequest::RegisterQueuedFunctionRequest(const RegisterQueuedFunctionRequest& src) :
    PFCloudScriptRegisterQueuedFunctionRequest{ src },
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
    PFCloudScriptRegisterQueuedFunctionRequest{ src },
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

RegisterQueuedFunctionRequest::RegisterQueuedFunctionRequest(const PFCloudScriptRegisterQueuedFunctionRequest& src)
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
    return JsonUtils::ToJson<PFCloudScriptRegisterQueuedFunctionRequest>(*this);
}

UnregisterFunctionRequest::UnregisterFunctionRequest() :
    PFCloudScriptUnregisterFunctionRequest{}
{
}

UnregisterFunctionRequest::UnregisterFunctionRequest(const UnregisterFunctionRequest& src) :
    PFCloudScriptUnregisterFunctionRequest{ src },
    m_customTags{ src.m_customTags },
    m_functionName{ src.m_functionName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
}

UnregisterFunctionRequest::UnregisterFunctionRequest(UnregisterFunctionRequest&& src) :
    PFCloudScriptUnregisterFunctionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_functionName{ std::move(src.m_functionName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
}

UnregisterFunctionRequest::UnregisterFunctionRequest(const PFCloudScriptUnregisterFunctionRequest& src)
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
    return JsonUtils::ToJson<PFCloudScriptUnregisterFunctionRequest>(*this);
}

} // namespace CloudScriptModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFCloudScriptGetCloudScriptRevisionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptCloudScriptFile& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FileContents", input.fileContents);
    JsonUtils::ObjectAddMember(output, "Filename", input.filename);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptGetCloudScriptRevisionResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreatedAt", input.createdAt, true);
    JsonUtils::ObjectAddMember(output, "Files", input.files, input.filesCount);
    JsonUtils::ObjectAddMember(output, "IsPublished", input.isPublished);
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptCloudScriptVersionStatus& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LatestRevision", input.latestRevision);
    JsonUtils::ObjectAddMember(output, "PublishedRevision", input.publishedRevision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptGetCloudScriptVersionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Versions", input.versions, input.versionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptSetPublishedRevisionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptUpdateCloudScriptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeveloperPlayFabId", input.developerPlayFabId);
    JsonUtils::ObjectAddMember(output, "Files", input.files, input.filesCount);
    JsonUtils::ObjectAddMember(output, "Publish", input.publish);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptUpdateCloudScriptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptExecuteCloudScriptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
    JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
    JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptExecuteCloudScriptServerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
    JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptExecuteEntityCloudScriptRequest& input)
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
inline JsonValue ToJson<>(const PFCloudScriptExecuteFunctionRequest& input)
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
inline JsonValue ToJson<>(const PFCloudScriptFunctionExecutionError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptExecuteFunctionResult& input)
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
inline JsonValue ToJson<>(const PFCloudScriptListFunctionsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptFunctionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FunctionAddress", input.functionAddress);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "TriggerType", input.triggerType);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptListFunctionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Functions", input.functions, input.functionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptHttpFunctionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionUrl", input.functionUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptListHttpFunctionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Functions", input.functions, input.functionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptQueuedFunctionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionString", input.connectionString);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptListQueuedFunctionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Functions", input.functions, input.functionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptPostFunctionResultForFunctionExecutionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptPlayStreamEventEnvelopeModel& input)
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
inline JsonValue ToJson<>(const PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& input)
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
inline JsonValue ToJson<>(const PFCloudScriptPostFunctionResultForScheduledTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    JsonUtils::ObjectAddMember(output, "ScheduledTaskId", input.scheduledTaskId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptRegisterHttpFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionUrl", input.functionUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptRegisterQueuedFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionString", input.connectionString);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCloudScriptUnregisterFunctionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
