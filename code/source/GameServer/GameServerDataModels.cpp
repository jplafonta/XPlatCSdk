#include "stdafx.h"
#include "GameServerDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace GameServerModels
{

AddServerBuildRequest::AddServerBuildRequest() :
    PFGameServerAddServerBuildRequest{}
{
}

AddServerBuildRequest::AddServerBuildRequest(const AddServerBuildRequest& src) :
    PFGameServerAddServerBuildRequest{ src },
    m_activeRegions{ src.m_activeRegions },
    m_buildId{ src.m_buildId },
    m_commandLineTemplate{ src.m_commandLineTemplate },
    m_comment{ src.m_comment },
    m_customTags{ src.m_customTags },
    m_executablePath{ src.m_executablePath }
{
    activeRegions = m_activeRegions.empty() ? nullptr : m_activeRegions.data();
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    commandLineTemplate = m_commandLineTemplate.empty() ? nullptr : m_commandLineTemplate.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    executablePath = m_executablePath.empty() ? nullptr : m_executablePath.data();
}

AddServerBuildRequest::AddServerBuildRequest(AddServerBuildRequest&& src) :
    PFGameServerAddServerBuildRequest{ src },
    m_activeRegions{ std::move(src.m_activeRegions) },
    m_buildId{ std::move(src.m_buildId) },
    m_commandLineTemplate{ std::move(src.m_commandLineTemplate) },
    m_comment{ std::move(src.m_comment) },
    m_customTags{ std::move(src.m_customTags) },
    m_executablePath{ std::move(src.m_executablePath) }
{
    activeRegions = m_activeRegions.empty() ? nullptr : m_activeRegions.data();
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    commandLineTemplate = m_commandLineTemplate.empty() ? nullptr : m_commandLineTemplate.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    executablePath = m_executablePath.empty() ? nullptr : m_executablePath.data();
}

AddServerBuildRequest::AddServerBuildRequest(const PFGameServerAddServerBuildRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddServerBuildRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ActiveRegions", m_activeRegions, activeRegions, activeRegionsCount);
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CommandLineTemplate", m_commandLineTemplate, commandLineTemplate);
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExecutablePath", m_executablePath, executablePath);
    JsonUtils::ObjectGetMember(input, "MaxGamesPerHost", maxGamesPerHost);
    JsonUtils::ObjectGetMember(input, "MinFreeGameSlots", minFreeGameSlots);
}

JsonValue AddServerBuildRequest::ToJson() const
{
    return JsonUtils::ToJson<PFGameServerAddServerBuildRequest>(*this);
}

AddServerBuildResult::AddServerBuildResult() :
    PFGameServerAddServerBuildResult{}
{
}

AddServerBuildResult::AddServerBuildResult(const AddServerBuildResult& src) :
    PFGameServerAddServerBuildResult{ src },
    m_activeRegions{ src.m_activeRegions },
    m_buildId{ src.m_buildId },
    m_commandLineTemplate{ src.m_commandLineTemplate },
    m_comment{ src.m_comment },
    m_executablePath{ src.m_executablePath },
    m_status{ src.m_status },
    m_titleId{ src.m_titleId }
{
    activeRegions = m_activeRegions.empty() ? nullptr : m_activeRegions.data();
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    commandLineTemplate = m_commandLineTemplate.empty() ? nullptr : m_commandLineTemplate.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    executablePath = m_executablePath.empty() ? nullptr : m_executablePath.data();
    status = m_status ? m_status.operator->() : nullptr;
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

AddServerBuildResult::AddServerBuildResult(AddServerBuildResult&& src) :
    PFGameServerAddServerBuildResult{ src },
    m_activeRegions{ std::move(src.m_activeRegions) },
    m_buildId{ std::move(src.m_buildId) },
    m_commandLineTemplate{ std::move(src.m_commandLineTemplate) },
    m_comment{ std::move(src.m_comment) },
    m_executablePath{ std::move(src.m_executablePath) },
    m_status{ std::move(src.m_status) },
    m_titleId{ std::move(src.m_titleId) }
{
    activeRegions = m_activeRegions.empty() ? nullptr : m_activeRegions.data();
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    commandLineTemplate = m_commandLineTemplate.empty() ? nullptr : m_commandLineTemplate.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    executablePath = m_executablePath.empty() ? nullptr : m_executablePath.data();
    status = m_status ? m_status.operator->() : nullptr;
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

AddServerBuildResult::AddServerBuildResult(const PFGameServerAddServerBuildResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddServerBuildResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ActiveRegions", m_activeRegions, activeRegions, activeRegionsCount);
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CommandLineTemplate", m_commandLineTemplate, commandLineTemplate);
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "ExecutablePath", m_executablePath, executablePath);
    JsonUtils::ObjectGetMember(input, "MaxGamesPerHost", maxGamesPerHost);
    JsonUtils::ObjectGetMember(input, "MinFreeGameSlots", minFreeGameSlots);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "Timestamp", timestamp, true);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue AddServerBuildResult::ToJson() const
{
    return JsonUtils::ToJson<PFGameServerAddServerBuildResult>(*this);
}

GetServerBuildInfoRequest::GetServerBuildInfoRequest() :
    PFGameServerGetServerBuildInfoRequest{}
{
}

GetServerBuildInfoRequest::GetServerBuildInfoRequest(const GetServerBuildInfoRequest& src) :
    PFGameServerGetServerBuildInfoRequest{ src },
    m_buildId{ src.m_buildId }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

GetServerBuildInfoRequest::GetServerBuildInfoRequest(GetServerBuildInfoRequest&& src) :
    PFGameServerGetServerBuildInfoRequest{ src },
    m_buildId{ std::move(src.m_buildId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

GetServerBuildInfoRequest::GetServerBuildInfoRequest(const PFGameServerGetServerBuildInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBuildInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
}

JsonValue GetServerBuildInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PFGameServerGetServerBuildInfoRequest>(*this);
}

size_t GetServerBuildInfoRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFGameServerGetServerBuildInfoRequest) };
    serializedSize += (m_buildId.size() + 1);
    return serializedSize;
}

void GetServerBuildInfoRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFGameServerGetServerBuildInfoRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFGameServerGetServerBuildInfoRequest);
    memcpy(stringBuffer, m_buildId.data(), m_buildId.size() + 1);
    serializedStruct->buildId = stringBuffer;
    stringBuffer += m_buildId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetServerBuildInfoResult::GetServerBuildInfoResult() :
    PFGameServerGetServerBuildInfoResult{}
{
}

GetServerBuildInfoResult::GetServerBuildInfoResult(const GetServerBuildInfoResult& src) :
    PFGameServerGetServerBuildInfoResult{ src },
    m_activeRegions{ src.m_activeRegions },
    m_buildId{ src.m_buildId },
    m_comment{ src.m_comment },
    m_errorMessage{ src.m_errorMessage },
    m_status{ src.m_status },
    m_titleId{ src.m_titleId }
{
    activeRegions = m_activeRegions.empty() ? nullptr : m_activeRegions.data();
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    status = m_status ? m_status.operator->() : nullptr;
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GetServerBuildInfoResult::GetServerBuildInfoResult(GetServerBuildInfoResult&& src) :
    PFGameServerGetServerBuildInfoResult{ src },
    m_activeRegions{ std::move(src.m_activeRegions) },
    m_buildId{ std::move(src.m_buildId) },
    m_comment{ std::move(src.m_comment) },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_status{ std::move(src.m_status) },
    m_titleId{ std::move(src.m_titleId) }
{
    activeRegions = m_activeRegions.empty() ? nullptr : m_activeRegions.data();
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    status = m_status ? m_status.operator->() : nullptr;
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GetServerBuildInfoResult::GetServerBuildInfoResult(const PFGameServerGetServerBuildInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBuildInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ActiveRegions", m_activeRegions, activeRegions, activeRegionsCount);
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
    JsonUtils::ObjectGetMember(input, "MaxGamesPerHost", maxGamesPerHost);
    JsonUtils::ObjectGetMember(input, "MinFreeGameSlots", minFreeGameSlots);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "Timestamp", timestamp, true);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue GetServerBuildInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PFGameServerGetServerBuildInfoResult>(*this);
}

GetServerBuildUploadURLRequest::GetServerBuildUploadURLRequest() :
    PFGameServerGetServerBuildUploadURLRequest{}
{
}

GetServerBuildUploadURLRequest::GetServerBuildUploadURLRequest(const GetServerBuildUploadURLRequest& src) :
    PFGameServerGetServerBuildUploadURLRequest{ src },
    m_buildId{ src.m_buildId }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

GetServerBuildUploadURLRequest::GetServerBuildUploadURLRequest(GetServerBuildUploadURLRequest&& src) :
    PFGameServerGetServerBuildUploadURLRequest{ src },
    m_buildId{ std::move(src.m_buildId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

GetServerBuildUploadURLRequest::GetServerBuildUploadURLRequest(const PFGameServerGetServerBuildUploadURLRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBuildUploadURLRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
}

JsonValue GetServerBuildUploadURLRequest::ToJson() const
{
    return JsonUtils::ToJson<PFGameServerGetServerBuildUploadURLRequest>(*this);
}

size_t GetServerBuildUploadURLRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFGameServerGetServerBuildUploadURLRequest) };
    serializedSize += (m_buildId.size() + 1);
    return serializedSize;
}

void GetServerBuildUploadURLRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFGameServerGetServerBuildUploadURLRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFGameServerGetServerBuildUploadURLRequest);
    memcpy(stringBuffer, m_buildId.data(), m_buildId.size() + 1);
    serializedStruct->buildId = stringBuffer;
    stringBuffer += m_buildId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetServerBuildUploadURLResult::GetServerBuildUploadURLResult() :
    PFGameServerGetServerBuildUploadURLResult{}
{
}

GetServerBuildUploadURLResult::GetServerBuildUploadURLResult(const GetServerBuildUploadURLResult& src) :
    PFGameServerGetServerBuildUploadURLResult{ src },
    m_uRL{ src.m_uRL }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetServerBuildUploadURLResult::GetServerBuildUploadURLResult(GetServerBuildUploadURLResult&& src) :
    PFGameServerGetServerBuildUploadURLResult{ src },
    m_uRL{ std::move(src.m_uRL) }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetServerBuildUploadURLResult::GetServerBuildUploadURLResult(const PFGameServerGetServerBuildUploadURLResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBuildUploadURLResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "URL", m_uRL, uRL);
}

JsonValue GetServerBuildUploadURLResult::ToJson() const
{
    return JsonUtils::ToJson<PFGameServerGetServerBuildUploadURLResult>(*this);
}

size_t GetServerBuildUploadURLResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFGameServerGetServerBuildUploadURLResult) };
    serializedSize += (m_uRL.size() + 1);
    return serializedSize;
}

void GetServerBuildUploadURLResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFGameServerGetServerBuildUploadURLResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFGameServerGetServerBuildUploadURLResult);
    memcpy(stringBuffer, m_uRL.data(), m_uRL.size() + 1);
    serializedStruct->uRL = stringBuffer;
    stringBuffer += m_uRL.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListBuildsResult::ListBuildsResult() :
    PFGameServerListBuildsResult{}
{
}

ListBuildsResult::ListBuildsResult(const ListBuildsResult& src) :
    PFGameServerListBuildsResult{ src },
    m_builds{ src.m_builds }
{
    builds = m_builds.Empty() ? nullptr : m_builds.Data();
}

ListBuildsResult::ListBuildsResult(ListBuildsResult&& src) :
    PFGameServerListBuildsResult{ src },
    m_builds{ std::move(src.m_builds) }
{
    builds = m_builds.Empty() ? nullptr : m_builds.Data();
}

ListBuildsResult::ListBuildsResult(const PFGameServerListBuildsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListBuildsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Builds", m_builds, builds, buildsCount);
}

JsonValue ListBuildsResult::ToJson() const
{
    return JsonUtils::ToJson<PFGameServerListBuildsResult>(*this);
}

ModifyServerBuildRequest::ModifyServerBuildRequest() :
    PFGameServerModifyServerBuildRequest{}
{
}

ModifyServerBuildRequest::ModifyServerBuildRequest(const ModifyServerBuildRequest& src) :
    PFGameServerModifyServerBuildRequest{ src },
    m_activeRegions{ src.m_activeRegions },
    m_buildId{ src.m_buildId },
    m_commandLineTemplate{ src.m_commandLineTemplate },
    m_comment{ src.m_comment },
    m_customTags{ src.m_customTags },
    m_executablePath{ src.m_executablePath },
    m_timestamp{ src.m_timestamp }
{
    activeRegions = m_activeRegions.empty() ? nullptr : m_activeRegions.data();
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    commandLineTemplate = m_commandLineTemplate.empty() ? nullptr : m_commandLineTemplate.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    executablePath = m_executablePath.empty() ? nullptr : m_executablePath.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

ModifyServerBuildRequest::ModifyServerBuildRequest(ModifyServerBuildRequest&& src) :
    PFGameServerModifyServerBuildRequest{ src },
    m_activeRegions{ std::move(src.m_activeRegions) },
    m_buildId{ std::move(src.m_buildId) },
    m_commandLineTemplate{ std::move(src.m_commandLineTemplate) },
    m_comment{ std::move(src.m_comment) },
    m_customTags{ std::move(src.m_customTags) },
    m_executablePath{ std::move(src.m_executablePath) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    activeRegions = m_activeRegions.empty() ? nullptr : m_activeRegions.data();
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    commandLineTemplate = m_commandLineTemplate.empty() ? nullptr : m_commandLineTemplate.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    executablePath = m_executablePath.empty() ? nullptr : m_executablePath.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

ModifyServerBuildRequest::ModifyServerBuildRequest(const PFGameServerModifyServerBuildRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyServerBuildRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ActiveRegions", m_activeRegions, activeRegions, activeRegionsCount);
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CommandLineTemplate", m_commandLineTemplate, commandLineTemplate);
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExecutablePath", m_executablePath, executablePath);
    JsonUtils::ObjectGetMember(input, "MaxGamesPerHost", maxGamesPerHost);
    JsonUtils::ObjectGetMember(input, "MinFreeGameSlots", minFreeGameSlots);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue ModifyServerBuildRequest::ToJson() const
{
    return JsonUtils::ToJson<PFGameServerModifyServerBuildRequest>(*this);
}

ModifyServerBuildResult::ModifyServerBuildResult() :
    PFGameServerModifyServerBuildResult{}
{
}

ModifyServerBuildResult::ModifyServerBuildResult(const ModifyServerBuildResult& src) :
    PFGameServerModifyServerBuildResult{ src },
    m_activeRegions{ src.m_activeRegions },
    m_buildId{ src.m_buildId },
    m_commandLineTemplate{ src.m_commandLineTemplate },
    m_comment{ src.m_comment },
    m_executablePath{ src.m_executablePath },
    m_status{ src.m_status },
    m_titleId{ src.m_titleId }
{
    activeRegions = m_activeRegions.empty() ? nullptr : m_activeRegions.data();
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    commandLineTemplate = m_commandLineTemplate.empty() ? nullptr : m_commandLineTemplate.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    executablePath = m_executablePath.empty() ? nullptr : m_executablePath.data();
    status = m_status ? m_status.operator->() : nullptr;
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

ModifyServerBuildResult::ModifyServerBuildResult(ModifyServerBuildResult&& src) :
    PFGameServerModifyServerBuildResult{ src },
    m_activeRegions{ std::move(src.m_activeRegions) },
    m_buildId{ std::move(src.m_buildId) },
    m_commandLineTemplate{ std::move(src.m_commandLineTemplate) },
    m_comment{ std::move(src.m_comment) },
    m_executablePath{ std::move(src.m_executablePath) },
    m_status{ std::move(src.m_status) },
    m_titleId{ std::move(src.m_titleId) }
{
    activeRegions = m_activeRegions.empty() ? nullptr : m_activeRegions.data();
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    commandLineTemplate = m_commandLineTemplate.empty() ? nullptr : m_commandLineTemplate.data();
    comment = m_comment.empty() ? nullptr : m_comment.data();
    executablePath = m_executablePath.empty() ? nullptr : m_executablePath.data();
    status = m_status ? m_status.operator->() : nullptr;
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

ModifyServerBuildResult::ModifyServerBuildResult(const PFGameServerModifyServerBuildResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyServerBuildResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ActiveRegions", m_activeRegions, activeRegions, activeRegionsCount);
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CommandLineTemplate", m_commandLineTemplate, commandLineTemplate);
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "ExecutablePath", m_executablePath, executablePath);
    JsonUtils::ObjectGetMember(input, "MaxGamesPerHost", maxGamesPerHost);
    JsonUtils::ObjectGetMember(input, "MinFreeGameSlots", minFreeGameSlots);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "Timestamp", timestamp, true);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue ModifyServerBuildResult::ToJson() const
{
    return JsonUtils::ToJson<PFGameServerModifyServerBuildResult>(*this);
}

RemoveServerBuildRequest::RemoveServerBuildRequest() :
    PFGameServerRemoveServerBuildRequest{}
{
}

RemoveServerBuildRequest::RemoveServerBuildRequest(const RemoveServerBuildRequest& src) :
    PFGameServerRemoveServerBuildRequest{ src },
    m_buildId{ src.m_buildId }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

RemoveServerBuildRequest::RemoveServerBuildRequest(RemoveServerBuildRequest&& src) :
    PFGameServerRemoveServerBuildRequest{ src },
    m_buildId{ std::move(src.m_buildId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

RemoveServerBuildRequest::RemoveServerBuildRequest(const PFGameServerRemoveServerBuildRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveServerBuildRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
}

JsonValue RemoveServerBuildRequest::ToJson() const
{
    return JsonUtils::ToJson<PFGameServerRemoveServerBuildRequest>(*this);
}

size_t RemoveServerBuildRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFGameServerRemoveServerBuildRequest) };
    serializedSize += (m_buildId.size() + 1);
    return serializedSize;
}

void RemoveServerBuildRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFGameServerRemoveServerBuildRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFGameServerRemoveServerBuildRequest);
    memcpy(stringBuffer, m_buildId.data(), m_buildId.size() + 1);
    serializedStruct->buildId = stringBuffer;
    stringBuffer += m_buildId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

} // namespace GameServerModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFGameServerAddServerBuildRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActiveRegions", input.activeRegions, input.activeRegionsCount);
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "CommandLineTemplate", input.commandLineTemplate);
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExecutablePath", input.executablePath);
    JsonUtils::ObjectAddMember(output, "MaxGamesPerHost", input.maxGamesPerHost);
    JsonUtils::ObjectAddMember(output, "MinFreeGameSlots", input.minFreeGameSlots);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGameServerAddServerBuildResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActiveRegions", input.activeRegions, input.activeRegionsCount);
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "CommandLineTemplate", input.commandLineTemplate);
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "ExecutablePath", input.executablePath);
    JsonUtils::ObjectAddMember(output, "MaxGamesPerHost", input.maxGamesPerHost);
    JsonUtils::ObjectAddMember(output, "MinFreeGameSlots", input.minFreeGameSlots);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGameServerGetServerBuildInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGameServerGetServerBuildInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActiveRegions", input.activeRegions, input.activeRegionsCount);
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    JsonUtils::ObjectAddMember(output, "MaxGamesPerHost", input.maxGamesPerHost);
    JsonUtils::ObjectAddMember(output, "MinFreeGameSlots", input.minFreeGameSlots);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGameServerGetServerBuildUploadURLRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGameServerGetServerBuildUploadURLResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "URL", input.uRL);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGameServerListBuildsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Builds", input.builds, input.buildsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGameServerModifyServerBuildRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActiveRegions", input.activeRegions, input.activeRegionsCount);
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "CommandLineTemplate", input.commandLineTemplate);
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExecutablePath", input.executablePath);
    JsonUtils::ObjectAddMember(output, "MaxGamesPerHost", input.maxGamesPerHost);
    JsonUtils::ObjectAddMember(output, "MinFreeGameSlots", input.minFreeGameSlots);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGameServerModifyServerBuildResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActiveRegions", input.activeRegions, input.activeRegionsCount);
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "CommandLineTemplate", input.commandLineTemplate);
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "ExecutablePath", input.executablePath);
    JsonUtils::ObjectAddMember(output, "MaxGamesPerHost", input.maxGamesPerHost);
    JsonUtils::ObjectAddMember(output, "MinFreeGameSlots", input.minFreeGameSlots);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGameServerRemoveServerBuildRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
