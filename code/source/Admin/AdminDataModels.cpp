#include "stdafx.h"
#include "AdminDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace AdminModels
{

AbortTaskInstanceRequest::AbortTaskInstanceRequest() :
    PlayFabAdminAbortTaskInstanceRequest{}
{
}

AbortTaskInstanceRequest::AbortTaskInstanceRequest(const AbortTaskInstanceRequest& src) :
    PlayFabAdminAbortTaskInstanceRequest{ src },
    m_customTags{ src.m_customTags },
    m_taskInstanceId{ src.m_taskInstanceId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

AbortTaskInstanceRequest::AbortTaskInstanceRequest(AbortTaskInstanceRequest&& src) :
    PlayFabAdminAbortTaskInstanceRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_taskInstanceId{ std::move(src.m_taskInstanceId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

AbortTaskInstanceRequest::AbortTaskInstanceRequest(const PlayFabAdminAbortTaskInstanceRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminAbortTaskInstanceRequest>(*this);
}

ActionsOnPlayersInSegmentTaskParameter::ActionsOnPlayersInSegmentTaskParameter() :
    PlayFabAdminActionsOnPlayersInSegmentTaskParameter{}
{
}

ActionsOnPlayersInSegmentTaskParameter::ActionsOnPlayersInSegmentTaskParameter(const ActionsOnPlayersInSegmentTaskParameter& src) :
    PlayFabAdminActionsOnPlayersInSegmentTaskParameter{ src },
    m_actionId{ src.m_actionId },
    m_segmentId{ src.m_segmentId }
{
    actionId = m_actionId.empty() ? nullptr : m_actionId.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

ActionsOnPlayersInSegmentTaskParameter::ActionsOnPlayersInSegmentTaskParameter(ActionsOnPlayersInSegmentTaskParameter&& src) :
    PlayFabAdminActionsOnPlayersInSegmentTaskParameter{ src },
    m_actionId{ std::move(src.m_actionId) },
    m_segmentId{ std::move(src.m_segmentId) }
{
    actionId = m_actionId.empty() ? nullptr : m_actionId.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

ActionsOnPlayersInSegmentTaskParameter::ActionsOnPlayersInSegmentTaskParameter(const PlayFabAdminActionsOnPlayersInSegmentTaskParameter& src)
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
    return JsonUtils::ToJson<PlayFabAdminActionsOnPlayersInSegmentTaskParameter>(*this);
}

size_t ActionsOnPlayersInSegmentTaskParameter::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminActionsOnPlayersInSegmentTaskParameter) };
    serializedSize += (m_actionId.size() + 1);
    serializedSize += (m_segmentId.size() + 1);
    return serializedSize;
}

void ActionsOnPlayersInSegmentTaskParameter::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminActionsOnPlayersInSegmentTaskParameter{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminActionsOnPlayersInSegmentTaskParameter);
    memcpy(stringBuffer, m_actionId.data(), m_actionId.size() + 1);
    serializedStruct->actionId = stringBuffer;
    stringBuffer += m_actionId.size() + 1;
    memcpy(stringBuffer, m_segmentId.data(), m_segmentId.size() + 1);
    serializedStruct->segmentId = stringBuffer;
    stringBuffer += m_segmentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

NameIdentifier::NameIdentifier() :
    PlayFabAdminNameIdentifier{}
{
}

NameIdentifier::NameIdentifier(const NameIdentifier& src) :
    PlayFabAdminNameIdentifier{ src },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

NameIdentifier::NameIdentifier(NameIdentifier&& src) :
    PlayFabAdminNameIdentifier{ src },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

NameIdentifier::NameIdentifier(const PlayFabAdminNameIdentifier& src)
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
    return JsonUtils::ToJson<PlayFabAdminNameIdentifier>(*this);
}

size_t NameIdentifier::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminNameIdentifier) };
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void NameIdentifier::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminNameIdentifier{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminNameIdentifier);
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ActionsOnPlayersInSegmentTaskSummary::ActionsOnPlayersInSegmentTaskSummary() :
    PlayFabAdminActionsOnPlayersInSegmentTaskSummary{}
{
}

ActionsOnPlayersInSegmentTaskSummary::ActionsOnPlayersInSegmentTaskSummary(const ActionsOnPlayersInSegmentTaskSummary& src) :
    PlayFabAdminActionsOnPlayersInSegmentTaskSummary{ src },
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
    PlayFabAdminActionsOnPlayersInSegmentTaskSummary{ src },
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

ActionsOnPlayersInSegmentTaskSummary::ActionsOnPlayersInSegmentTaskSummary(const PlayFabAdminActionsOnPlayersInSegmentTaskSummary& src)
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
    return JsonUtils::ToJson<PlayFabAdminActionsOnPlayersInSegmentTaskSummary>(*this);
}

AdCampaignAttribution::AdCampaignAttribution() :
    PlayFabAdminAdCampaignAttribution{}
{
}

AdCampaignAttribution::AdCampaignAttribution(const AdCampaignAttribution& src) :
    PlayFabAdminAdCampaignAttribution{ src },
    m_campaignId{ src.m_campaignId },
    m_platform{ src.m_platform }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    platform = m_platform.empty() ? nullptr : m_platform.data();
}

AdCampaignAttribution::AdCampaignAttribution(AdCampaignAttribution&& src) :
    PlayFabAdminAdCampaignAttribution{ src },
    m_campaignId{ std::move(src.m_campaignId) },
    m_platform{ std::move(src.m_platform) }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    platform = m_platform.empty() ? nullptr : m_platform.data();
}

AdCampaignAttribution::AdCampaignAttribution(const PlayFabAdminAdCampaignAttribution& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdCampaignAttribution::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AttributedAt", attributedAt, true);
    JsonUtils::ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
}

JsonValue AdCampaignAttribution::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminAdCampaignAttribution>(*this);
}

size_t AdCampaignAttribution::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminAdCampaignAttribution) };
    serializedSize += (m_campaignId.size() + 1);
    serializedSize += (m_platform.size() + 1);
    return serializedSize;
}

void AdCampaignAttribution::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminAdCampaignAttribution{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminAdCampaignAttribution);
    memcpy(stringBuffer, m_campaignId.data(), m_campaignId.size() + 1);
    serializedStruct->campaignId = stringBuffer;
    stringBuffer += m_campaignId.size() + 1;
    memcpy(stringBuffer, m_platform.data(), m_platform.size() + 1);
    serializedStruct->platform = stringBuffer;
    stringBuffer += m_platform.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AdCampaignSegmentFilter::AdCampaignSegmentFilter() :
    PlayFabAdminAdCampaignSegmentFilter{}
{
}

AdCampaignSegmentFilter::AdCampaignSegmentFilter(const AdCampaignSegmentFilter& src) :
    PlayFabAdminAdCampaignSegmentFilter{ src },
    m_campaignId{ src.m_campaignId },
    m_campaignSource{ src.m_campaignSource },
    m_comparison{ src.m_comparison }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    campaignSource = m_campaignSource.empty() ? nullptr : m_campaignSource.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

AdCampaignSegmentFilter::AdCampaignSegmentFilter(AdCampaignSegmentFilter&& src) :
    PlayFabAdminAdCampaignSegmentFilter{ src },
    m_campaignId{ std::move(src.m_campaignId) },
    m_campaignSource{ std::move(src.m_campaignSource) },
    m_comparison{ std::move(src.m_comparison) }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    campaignSource = m_campaignSource.empty() ? nullptr : m_campaignSource.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

AdCampaignSegmentFilter::AdCampaignSegmentFilter(const PlayFabAdminAdCampaignSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdCampaignSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
    JsonUtils::ObjectGetMember(input, "CampaignSource", m_campaignSource, campaignSource);
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
}

JsonValue AdCampaignSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminAdCampaignSegmentFilter>(*this);
}

AddLocalizedNewsRequest::AddLocalizedNewsRequest() :
    PlayFabAdminAddLocalizedNewsRequest{}
{
}

AddLocalizedNewsRequest::AddLocalizedNewsRequest(const AddLocalizedNewsRequest& src) :
    PlayFabAdminAddLocalizedNewsRequest{ src },
    m_body{ src.m_body },
    m_customTags{ src.m_customTags },
    m_language{ src.m_language },
    m_newsId{ src.m_newsId },
    m_title{ src.m_title }
{
    body = m_body.empty() ? nullptr : m_body.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    language = m_language.empty() ? nullptr : m_language.data();
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

AddLocalizedNewsRequest::AddLocalizedNewsRequest(AddLocalizedNewsRequest&& src) :
    PlayFabAdminAddLocalizedNewsRequest{ src },
    m_body{ std::move(src.m_body) },
    m_customTags{ std::move(src.m_customTags) },
    m_language{ std::move(src.m_language) },
    m_newsId{ std::move(src.m_newsId) },
    m_title{ std::move(src.m_title) }
{
    body = m_body.empty() ? nullptr : m_body.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    language = m_language.empty() ? nullptr : m_language.data();
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

AddLocalizedNewsRequest::AddLocalizedNewsRequest(const PlayFabAdminAddLocalizedNewsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddLocalizedNewsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Language", m_language, language);
    JsonUtils::ObjectGetMember(input, "NewsId", m_newsId, newsId);
    JsonUtils::ObjectGetMember(input, "Title", m_title, title);
}

JsonValue AddLocalizedNewsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminAddLocalizedNewsRequest>(*this);
}

AddNewsRequest::AddNewsRequest() :
    PlayFabAdminAddNewsRequest{}
{
}

AddNewsRequest::AddNewsRequest(const AddNewsRequest& src) :
    PlayFabAdminAddNewsRequest{ src },
    m_body{ src.m_body },
    m_customTags{ src.m_customTags },
    m_timestamp{ src.m_timestamp },
    m_title{ src.m_title }
{
    body = m_body.empty() ? nullptr : m_body.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
    title = m_title.empty() ? nullptr : m_title.data();
}

AddNewsRequest::AddNewsRequest(AddNewsRequest&& src) :
    PlayFabAdminAddNewsRequest{ src },
    m_body{ std::move(src.m_body) },
    m_customTags{ std::move(src.m_customTags) },
    m_timestamp{ std::move(src.m_timestamp) },
    m_title{ std::move(src.m_title) }
{
    body = m_body.empty() ? nullptr : m_body.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
    title = m_title.empty() ? nullptr : m_title.data();
}

AddNewsRequest::AddNewsRequest(const PlayFabAdminAddNewsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddNewsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
    JsonUtils::ObjectGetMember(input, "Title", m_title, title);
}

JsonValue AddNewsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminAddNewsRequest>(*this);
}

AddNewsResult::AddNewsResult() :
    PlayFabAdminAddNewsResult{}
{
}

AddNewsResult::AddNewsResult(const AddNewsResult& src) :
    PlayFabAdminAddNewsResult{ src },
    m_newsId{ src.m_newsId }
{
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
}

AddNewsResult::AddNewsResult(AddNewsResult&& src) :
    PlayFabAdminAddNewsResult{ src },
    m_newsId{ std::move(src.m_newsId) }
{
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
}

AddNewsResult::AddNewsResult(const PlayFabAdminAddNewsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddNewsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NewsId", m_newsId, newsId);
}

JsonValue AddNewsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminAddNewsResult>(*this);
}

size_t AddNewsResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminAddNewsResult) };
    serializedSize += (m_newsId.size() + 1);
    return serializedSize;
}

void AddNewsResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminAddNewsResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminAddNewsResult);
    memcpy(stringBuffer, m_newsId.data(), m_newsId.size() + 1);
    serializedStruct->newsId = stringBuffer;
    stringBuffer += m_newsId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AddPlayerTagRequest::AddPlayerTagRequest() :
    PlayFabAdminAddPlayerTagRequest{}
{
}

AddPlayerTagRequest::AddPlayerTagRequest(const AddPlayerTagRequest& src) :
    PlayFabAdminAddPlayerTagRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_tagName{ src.m_tagName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

AddPlayerTagRequest::AddPlayerTagRequest(AddPlayerTagRequest&& src) :
    PlayFabAdminAddPlayerTagRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tagName{ std::move(src.m_tagName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

AddPlayerTagRequest::AddPlayerTagRequest(const PlayFabAdminAddPlayerTagRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddPlayerTagRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TagName", m_tagName, tagName);
}

JsonValue AddPlayerTagRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminAddPlayerTagRequest>(*this);
}

AddServerBuildRequest::AddServerBuildRequest() :
    PlayFabAdminAddServerBuildRequest{}
{
}

AddServerBuildRequest::AddServerBuildRequest(const AddServerBuildRequest& src) :
    PlayFabAdminAddServerBuildRequest{ src },
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
    PlayFabAdminAddServerBuildRequest{ src },
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

AddServerBuildRequest::AddServerBuildRequest(const PlayFabAdminAddServerBuildRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminAddServerBuildRequest>(*this);
}

AddServerBuildResult::AddServerBuildResult() :
    PlayFabAdminAddServerBuildResult{}
{
}

AddServerBuildResult::AddServerBuildResult(const AddServerBuildResult& src) :
    PlayFabAdminAddServerBuildResult{ src },
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
    PlayFabAdminAddServerBuildResult{ src },
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

AddServerBuildResult::AddServerBuildResult(const PlayFabAdminAddServerBuildResult& src)
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
    return JsonUtils::ToJson<PlayFabAdminAddServerBuildResult>(*this);
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest() :
    PlayFabAdminAddUserVirtualCurrencyRequest{}
{
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src) :
    PlayFabAdminAddUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest(AddUserVirtualCurrencyRequest&& src) :
    PlayFabAdminAddUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest(const PlayFabAdminAddUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue AddUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminAddUserVirtualCurrencyRequest>(*this);
}

VirtualCurrencyData::VirtualCurrencyData() :
    PlayFabAdminVirtualCurrencyData{}
{
}

VirtualCurrencyData::VirtualCurrencyData(const VirtualCurrencyData& src) :
    PlayFabAdminVirtualCurrencyData{ src },
    m_currencyCode{ src.m_currencyCode },
    m_displayName{ src.m_displayName },
    m_initialDeposit{ src.m_initialDeposit },
    m_rechargeMax{ src.m_rechargeMax },
    m_rechargeRate{ src.m_rechargeRate }
{
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    initialDeposit = m_initialDeposit ? m_initialDeposit.operator->() : nullptr;
    rechargeMax = m_rechargeMax ? m_rechargeMax.operator->() : nullptr;
    rechargeRate = m_rechargeRate ? m_rechargeRate.operator->() : nullptr;
}

VirtualCurrencyData::VirtualCurrencyData(VirtualCurrencyData&& src) :
    PlayFabAdminVirtualCurrencyData{ src },
    m_currencyCode{ std::move(src.m_currencyCode) },
    m_displayName{ std::move(src.m_displayName) },
    m_initialDeposit{ std::move(src.m_initialDeposit) },
    m_rechargeMax{ std::move(src.m_rechargeMax) },
    m_rechargeRate{ std::move(src.m_rechargeRate) }
{
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    initialDeposit = m_initialDeposit ? m_initialDeposit.operator->() : nullptr;
    rechargeMax = m_rechargeMax ? m_rechargeMax.operator->() : nullptr;
    rechargeRate = m_rechargeRate ? m_rechargeRate.operator->() : nullptr;
}

VirtualCurrencyData::VirtualCurrencyData(const PlayFabAdminVirtualCurrencyData& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void VirtualCurrencyData::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "InitialDeposit", m_initialDeposit, initialDeposit);
    JsonUtils::ObjectGetMember(input, "RechargeMax", m_rechargeMax, rechargeMax);
    JsonUtils::ObjectGetMember(input, "RechargeRate", m_rechargeRate, rechargeRate);
}

JsonValue VirtualCurrencyData::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminVirtualCurrencyData>(*this);
}

AddVirtualCurrencyTypesRequest::AddVirtualCurrencyTypesRequest() :
    PlayFabAdminAddVirtualCurrencyTypesRequest{}
{
}

AddVirtualCurrencyTypesRequest::AddVirtualCurrencyTypesRequest(const AddVirtualCurrencyTypesRequest& src) :
    PlayFabAdminAddVirtualCurrencyTypesRequest{ src },
    m_virtualCurrencies{ src.m_virtualCurrencies }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

AddVirtualCurrencyTypesRequest::AddVirtualCurrencyTypesRequest(AddVirtualCurrencyTypesRequest&& src) :
    PlayFabAdminAddVirtualCurrencyTypesRequest{ src },
    m_virtualCurrencies{ std::move(src.m_virtualCurrencies) }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

AddVirtualCurrencyTypesRequest::AddVirtualCurrencyTypesRequest(const PlayFabAdminAddVirtualCurrencyTypesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddVirtualCurrencyTypesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "VirtualCurrencies", m_virtualCurrencies, virtualCurrencies, virtualCurrenciesCount);
}

JsonValue AddVirtualCurrencyTypesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminAddVirtualCurrencyTypesRequest>(*this);
}

ApiCondition::ApiCondition() :
    PlayFabAdminApiCondition{}
{
}

ApiCondition::ApiCondition(const ApiCondition& src) :
    PlayFabAdminApiCondition{ src },
    m_hasSignatureOrEncryption{ src.m_hasSignatureOrEncryption }
{
    hasSignatureOrEncryption = m_hasSignatureOrEncryption ? m_hasSignatureOrEncryption.operator->() : nullptr;
}

ApiCondition::ApiCondition(ApiCondition&& src) :
    PlayFabAdminApiCondition{ src },
    m_hasSignatureOrEncryption{ std::move(src.m_hasSignatureOrEncryption) }
{
    hasSignatureOrEncryption = m_hasSignatureOrEncryption ? m_hasSignatureOrEncryption.operator->() : nullptr;
}

ApiCondition::ApiCondition(const PlayFabAdminApiCondition& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ApiCondition::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "HasSignatureOrEncryption", m_hasSignatureOrEncryption, hasSignatureOrEncryption);
}

JsonValue ApiCondition::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminApiCondition>(*this);
}

BanInfo::BanInfo() :
    PlayFabAdminBanInfo{}
{
}

BanInfo::BanInfo(const BanInfo& src) :
    PlayFabAdminBanInfo{ src },
    m_banId{ src.m_banId },
    m_created{ src.m_created },
    m_expires{ src.m_expires },
    m_IPAddress{ src.m_IPAddress },
    m_MACAddress{ src.m_MACAddress },
    m_playFabId{ src.m_playFabId },
    m_reason{ src.m_reason }
{
    banId = m_banId.empty() ? nullptr : m_banId.data();
    created = m_created ? m_created.operator->() : nullptr;
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanInfo::BanInfo(BanInfo&& src) :
    PlayFabAdminBanInfo{ src },
    m_banId{ std::move(src.m_banId) },
    m_created{ std::move(src.m_created) },
    m_expires{ std::move(src.m_expires) },
    m_IPAddress{ std::move(src.m_IPAddress) },
    m_MACAddress{ std::move(src.m_MACAddress) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_reason{ std::move(src.m_reason) }
{
    banId = m_banId.empty() ? nullptr : m_banId.data();
    created = m_created ? m_created.operator->() : nullptr;
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanInfo::BanInfo(const PlayFabAdminBanInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Active", active);
    JsonUtils::ObjectGetMember(input, "BanId", m_banId, banId);
    JsonUtils::ObjectGetMember(input, "Created", m_created, created, true);
    JsonUtils::ObjectGetMember(input, "Expires", m_expires, expires, true);
    JsonUtils::ObjectGetMember(input, "IPAddress", m_IPAddress, IPAddress);
    JsonUtils::ObjectGetMember(input, "MACAddress", m_MACAddress, MACAddress);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue BanInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminBanInfo>(*this);
}

BanPlayerSegmentAction::BanPlayerSegmentAction() :
    PlayFabAdminBanPlayerSegmentAction{}
{
}

BanPlayerSegmentAction::BanPlayerSegmentAction(const BanPlayerSegmentAction& src) :
    PlayFabAdminBanPlayerSegmentAction{ src },
    m_banHours{ src.m_banHours },
    m_reasonForBan{ src.m_reasonForBan }
{
    banHours = m_banHours ? m_banHours.operator->() : nullptr;
    reasonForBan = m_reasonForBan.empty() ? nullptr : m_reasonForBan.data();
}

BanPlayerSegmentAction::BanPlayerSegmentAction(BanPlayerSegmentAction&& src) :
    PlayFabAdminBanPlayerSegmentAction{ src },
    m_banHours{ std::move(src.m_banHours) },
    m_reasonForBan{ std::move(src.m_reasonForBan) }
{
    banHours = m_banHours ? m_banHours.operator->() : nullptr;
    reasonForBan = m_reasonForBan.empty() ? nullptr : m_reasonForBan.data();
}

BanPlayerSegmentAction::BanPlayerSegmentAction(const PlayFabAdminBanPlayerSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanPlayerSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanHours", m_banHours, banHours);
    JsonUtils::ObjectGetMember(input, "ReasonForBan", m_reasonForBan, reasonForBan);
}

JsonValue BanPlayerSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminBanPlayerSegmentAction>(*this);
}

BanRequest::BanRequest() :
    PlayFabAdminBanRequest{}
{
}

BanRequest::BanRequest(const BanRequest& src) :
    PlayFabAdminBanRequest{ src },
    m_durationInHours{ src.m_durationInHours },
    m_IPAddress{ src.m_IPAddress },
    m_MACAddress{ src.m_MACAddress },
    m_playFabId{ src.m_playFabId },
    m_reason{ src.m_reason }
{
    durationInHours = m_durationInHours ? m_durationInHours.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanRequest::BanRequest(BanRequest&& src) :
    PlayFabAdminBanRequest{ src },
    m_durationInHours{ std::move(src.m_durationInHours) },
    m_IPAddress{ std::move(src.m_IPAddress) },
    m_MACAddress{ std::move(src.m_MACAddress) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_reason{ std::move(src.m_reason) }
{
    durationInHours = m_durationInHours ? m_durationInHours.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanRequest::BanRequest(const PlayFabAdminBanRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DurationInHours", m_durationInHours, durationInHours);
    JsonUtils::ObjectGetMember(input, "IPAddress", m_IPAddress, IPAddress);
    JsonUtils::ObjectGetMember(input, "MACAddress", m_MACAddress, MACAddress);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue BanRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminBanRequest>(*this);
}

BanUsersRequest::BanUsersRequest() :
    PlayFabAdminBanUsersRequest{}
{
}

BanUsersRequest::BanUsersRequest(const BanUsersRequest& src) :
    PlayFabAdminBanUsersRequest{ src },
    m_bans{ src.m_bans },
    m_customTags{ src.m_customTags }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

BanUsersRequest::BanUsersRequest(BanUsersRequest&& src) :
    PlayFabAdminBanUsersRequest{ src },
    m_bans{ std::move(src.m_bans) },
    m_customTags{ std::move(src.m_customTags) }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

BanUsersRequest::BanUsersRequest(const PlayFabAdminBanUsersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanUsersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Bans", m_bans, bans, bansCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue BanUsersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminBanUsersRequest>(*this);
}

BanUsersResult::BanUsersResult() :
    PlayFabAdminBanUsersResult{}
{
}

BanUsersResult::BanUsersResult(const BanUsersResult& src) :
    PlayFabAdminBanUsersResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

BanUsersResult::BanUsersResult(BanUsersResult&& src) :
    PlayFabAdminBanUsersResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

BanUsersResult::BanUsersResult(const PlayFabAdminBanUsersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanUsersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue BanUsersResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminBanUsersResult>(*this);
}

CatalogItemBundleInfo::CatalogItemBundleInfo() :
    PlayFabAdminCatalogItemBundleInfo{}
{
}

CatalogItemBundleInfo::CatalogItemBundleInfo(const CatalogItemBundleInfo& src) :
    PlayFabAdminCatalogItemBundleInfo{ src },
    m_bundledItems{ src.m_bundledItems },
    m_bundledResultTables{ src.m_bundledResultTables },
    m_bundledVirtualCurrencies{ src.m_bundledVirtualCurrencies }
{
    bundledItems = m_bundledItems.Empty() ? nullptr : m_bundledItems.Data();
    bundledResultTables = m_bundledResultTables.Empty() ? nullptr : m_bundledResultTables.Data();
    bundledVirtualCurrencies = m_bundledVirtualCurrencies.Empty() ? nullptr : m_bundledVirtualCurrencies.Data();
}

CatalogItemBundleInfo::CatalogItemBundleInfo(CatalogItemBundleInfo&& src) :
    PlayFabAdminCatalogItemBundleInfo{ src },
    m_bundledItems{ std::move(src.m_bundledItems) },
    m_bundledResultTables{ std::move(src.m_bundledResultTables) },
    m_bundledVirtualCurrencies{ std::move(src.m_bundledVirtualCurrencies) }
{
    bundledItems = m_bundledItems.Empty() ? nullptr : m_bundledItems.Data();
    bundledResultTables = m_bundledResultTables.Empty() ? nullptr : m_bundledResultTables.Data();
    bundledVirtualCurrencies = m_bundledVirtualCurrencies.Empty() ? nullptr : m_bundledVirtualCurrencies.Data();
}

CatalogItemBundleInfo::CatalogItemBundleInfo(const PlayFabAdminCatalogItemBundleInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItemBundleInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BundledItems", m_bundledItems, bundledItems, bundledItemsCount);
    JsonUtils::ObjectGetMember(input, "BundledResultTables", m_bundledResultTables, bundledResultTables, bundledResultTablesCount);
    JsonUtils::ObjectGetMember(input, "BundledVirtualCurrencies", m_bundledVirtualCurrencies, bundledVirtualCurrencies, bundledVirtualCurrenciesCount);
}

JsonValue CatalogItemBundleInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCatalogItemBundleInfo>(*this);
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo() :
    PlayFabAdminCatalogItemConsumableInfo{}
{
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src) :
    PlayFabAdminCatalogItemConsumableInfo{ src },
    m_usageCount{ src.m_usageCount },
    m_usagePeriod{ src.m_usagePeriod },
    m_usagePeriodGroup{ src.m_usagePeriodGroup }
{
    usageCount = m_usageCount ? m_usageCount.operator->() : nullptr;
    usagePeriod = m_usagePeriod ? m_usagePeriod.operator->() : nullptr;
    usagePeriodGroup = m_usagePeriodGroup.empty() ? nullptr : m_usagePeriodGroup.data();
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(CatalogItemConsumableInfo&& src) :
    PlayFabAdminCatalogItemConsumableInfo{ src },
    m_usageCount{ std::move(src.m_usageCount) },
    m_usagePeriod{ std::move(src.m_usagePeriod) },
    m_usagePeriodGroup{ std::move(src.m_usagePeriodGroup) }
{
    usageCount = m_usageCount ? m_usageCount.operator->() : nullptr;
    usagePeriod = m_usagePeriod ? m_usagePeriod.operator->() : nullptr;
    usagePeriodGroup = m_usagePeriodGroup.empty() ? nullptr : m_usagePeriodGroup.data();
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(const PlayFabAdminCatalogItemConsumableInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItemConsumableInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "UsageCount", m_usageCount, usageCount);
    JsonUtils::ObjectGetMember(input, "UsagePeriod", m_usagePeriod, usagePeriod);
    JsonUtils::ObjectGetMember(input, "UsagePeriodGroup", m_usagePeriodGroup, usagePeriodGroup);
}

JsonValue CatalogItemConsumableInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCatalogItemConsumableInfo>(*this);
}

CatalogItemContainerInfo::CatalogItemContainerInfo() :
    PlayFabAdminCatalogItemContainerInfo{}
{
}

CatalogItemContainerInfo::CatalogItemContainerInfo(const CatalogItemContainerInfo& src) :
    PlayFabAdminCatalogItemContainerInfo{ src },
    m_itemContents{ src.m_itemContents },
    m_keyItemId{ src.m_keyItemId },
    m_resultTableContents{ src.m_resultTableContents },
    m_virtualCurrencyContents{ src.m_virtualCurrencyContents }
{
    itemContents = m_itemContents.Empty() ? nullptr : m_itemContents.Data();
    keyItemId = m_keyItemId.empty() ? nullptr : m_keyItemId.data();
    resultTableContents = m_resultTableContents.Empty() ? nullptr : m_resultTableContents.Data();
    virtualCurrencyContents = m_virtualCurrencyContents.Empty() ? nullptr : m_virtualCurrencyContents.Data();
}

CatalogItemContainerInfo::CatalogItemContainerInfo(CatalogItemContainerInfo&& src) :
    PlayFabAdminCatalogItemContainerInfo{ src },
    m_itemContents{ std::move(src.m_itemContents) },
    m_keyItemId{ std::move(src.m_keyItemId) },
    m_resultTableContents{ std::move(src.m_resultTableContents) },
    m_virtualCurrencyContents{ std::move(src.m_virtualCurrencyContents) }
{
    itemContents = m_itemContents.Empty() ? nullptr : m_itemContents.Data();
    keyItemId = m_keyItemId.empty() ? nullptr : m_keyItemId.data();
    resultTableContents = m_resultTableContents.Empty() ? nullptr : m_resultTableContents.Data();
    virtualCurrencyContents = m_virtualCurrencyContents.Empty() ? nullptr : m_virtualCurrencyContents.Data();
}

CatalogItemContainerInfo::CatalogItemContainerInfo(const PlayFabAdminCatalogItemContainerInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItemContainerInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemContents", m_itemContents, itemContents, itemContentsCount);
    JsonUtils::ObjectGetMember(input, "KeyItemId", m_keyItemId, keyItemId);
    JsonUtils::ObjectGetMember(input, "ResultTableContents", m_resultTableContents, resultTableContents, resultTableContentsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyContents", m_virtualCurrencyContents, virtualCurrencyContents, virtualCurrencyContentsCount);
}

JsonValue CatalogItemContainerInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCatalogItemContainerInfo>(*this);
}

CatalogItem::CatalogItem() :
    PlayFabAdminCatalogItem{}
{
}

CatalogItem::CatalogItem(const CatalogItem& src) :
    PlayFabAdminCatalogItem{ src },
    m_bundle{ src.m_bundle },
    m_catalogVersion{ src.m_catalogVersion },
    m_consumable{ src.m_consumable },
    m_container{ src.m_container },
    m_customData{ src.m_customData },
    m_description{ src.m_description },
    m_displayName{ src.m_displayName },
    m_itemClass{ src.m_itemClass },
    m_itemId{ src.m_itemId },
    m_itemImageUrl{ src.m_itemImageUrl },
    m_realCurrencyPrices{ src.m_realCurrencyPrices },
    m_tags{ src.m_tags },
    m_virtualCurrencyPrices{ src.m_virtualCurrencyPrices }
{
    bundle = m_bundle ? m_bundle.operator->() : nullptr;
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    consumable = m_consumable ? m_consumable.operator->() : nullptr;
    container = m_container ? m_container.operator->() : nullptr;
    customData = m_customData.empty() ? nullptr : m_customData.data();
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemImageUrl = m_itemImageUrl.empty() ? nullptr : m_itemImageUrl.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

CatalogItem::CatalogItem(CatalogItem&& src) :
    PlayFabAdminCatalogItem{ src },
    m_bundle{ std::move(src.m_bundle) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_consumable{ std::move(src.m_consumable) },
    m_container{ std::move(src.m_container) },
    m_customData{ std::move(src.m_customData) },
    m_description{ std::move(src.m_description) },
    m_displayName{ std::move(src.m_displayName) },
    m_itemClass{ std::move(src.m_itemClass) },
    m_itemId{ std::move(src.m_itemId) },
    m_itemImageUrl{ std::move(src.m_itemImageUrl) },
    m_realCurrencyPrices{ std::move(src.m_realCurrencyPrices) },
    m_tags{ std::move(src.m_tags) },
    m_virtualCurrencyPrices{ std::move(src.m_virtualCurrencyPrices) }
{
    bundle = m_bundle ? m_bundle.operator->() : nullptr;
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    consumable = m_consumable ? m_consumable.operator->() : nullptr;
    container = m_container ? m_container.operator->() : nullptr;
    customData = m_customData.empty() ? nullptr : m_customData.data();
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemImageUrl = m_itemImageUrl.empty() ? nullptr : m_itemImageUrl.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

CatalogItem::CatalogItem(const PlayFabAdminCatalogItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Bundle", m_bundle, bundle);
    JsonUtils::ObjectGetMember(input, "CanBecomeCharacter", canBecomeCharacter);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "Consumable", m_consumable, consumable);
    JsonUtils::ObjectGetMember(input, "Container", m_container, container);
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "InitialLimitedEditionCount", initialLimitedEditionCount);
    JsonUtils::ObjectGetMember(input, "IsLimitedEdition", isLimitedEdition);
    JsonUtils::ObjectGetMember(input, "IsStackable", isStackable);
    JsonUtils::ObjectGetMember(input, "IsTradable", isTradable);
    JsonUtils::ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "ItemImageUrl", m_itemImageUrl, itemImageUrl);
    JsonUtils::ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
}

JsonValue CatalogItem::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCatalogItem>(*this);
}

CheckLimitedEditionItemAvailabilityRequest::CheckLimitedEditionItemAvailabilityRequest() :
    PlayFabAdminCheckLimitedEditionItemAvailabilityRequest{}
{
}

CheckLimitedEditionItemAvailabilityRequest::CheckLimitedEditionItemAvailabilityRequest(const CheckLimitedEditionItemAvailabilityRequest& src) :
    PlayFabAdminCheckLimitedEditionItemAvailabilityRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_itemId{ src.m_itemId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

CheckLimitedEditionItemAvailabilityRequest::CheckLimitedEditionItemAvailabilityRequest(CheckLimitedEditionItemAvailabilityRequest&& src) :
    PlayFabAdminCheckLimitedEditionItemAvailabilityRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_itemId{ std::move(src.m_itemId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

CheckLimitedEditionItemAvailabilityRequest::CheckLimitedEditionItemAvailabilityRequest(const PlayFabAdminCheckLimitedEditionItemAvailabilityRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CheckLimitedEditionItemAvailabilityRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
}

JsonValue CheckLimitedEditionItemAvailabilityRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCheckLimitedEditionItemAvailabilityRequest>(*this);
}

size_t CheckLimitedEditionItemAvailabilityRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminCheckLimitedEditionItemAvailabilityRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    serializedSize += (m_itemId.size() + 1);
    return serializedSize;
}

void CheckLimitedEditionItemAvailabilityRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminCheckLimitedEditionItemAvailabilityRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminCheckLimitedEditionItemAvailabilityRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    memcpy(stringBuffer, m_itemId.data(), m_itemId.size() + 1);
    serializedStruct->itemId = stringBuffer;
    stringBuffer += m_itemId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CheckLimitedEditionItemAvailabilityResult::CheckLimitedEditionItemAvailabilityResult() :
    PlayFabAdminCheckLimitedEditionItemAvailabilityResult{}
{
}


CheckLimitedEditionItemAvailabilityResult::CheckLimitedEditionItemAvailabilityResult(const PlayFabAdminCheckLimitedEditionItemAvailabilityResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CheckLimitedEditionItemAvailabilityResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
}

JsonValue CheckLimitedEditionItemAvailabilityResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCheckLimitedEditionItemAvailabilityResult>(*this);
}

size_t CheckLimitedEditionItemAvailabilityResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminCheckLimitedEditionItemAvailabilityResult) };
    return serializedSize;
}

void CheckLimitedEditionItemAvailabilityResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminCheckLimitedEditionItemAvailabilityResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminCheckLimitedEditionItemAvailabilityResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

CloudScriptFile::CloudScriptFile() :
    PlayFabAdminCloudScriptFile{}
{
}

CloudScriptFile::CloudScriptFile(const CloudScriptFile& src) :
    PlayFabAdminCloudScriptFile{ src },
    m_fileContents{ src.m_fileContents },
    m_filename{ src.m_filename }
{
    fileContents = m_fileContents.empty() ? nullptr : m_fileContents.data();
    filename = m_filename.empty() ? nullptr : m_filename.data();
}

CloudScriptFile::CloudScriptFile(CloudScriptFile&& src) :
    PlayFabAdminCloudScriptFile{ src },
    m_fileContents{ std::move(src.m_fileContents) },
    m_filename{ std::move(src.m_filename) }
{
    fileContents = m_fileContents.empty() ? nullptr : m_fileContents.data();
    filename = m_filename.empty() ? nullptr : m_filename.data();
}

CloudScriptFile::CloudScriptFile(const PlayFabAdminCloudScriptFile& src)
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
    return JsonUtils::ToJson<PlayFabAdminCloudScriptFile>(*this);
}

size_t CloudScriptFile::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminCloudScriptFile) };
    serializedSize += (m_fileContents.size() + 1);
    serializedSize += (m_filename.size() + 1);
    return serializedSize;
}

void CloudScriptFile::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminCloudScriptFile{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminCloudScriptFile);
    memcpy(stringBuffer, m_fileContents.data(), m_fileContents.size() + 1);
    serializedStruct->fileContents = stringBuffer;
    stringBuffer += m_fileContents.size() + 1;
    memcpy(stringBuffer, m_filename.data(), m_filename.size() + 1);
    serializedStruct->filename = stringBuffer;
    stringBuffer += m_filename.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CloudScriptTaskParameter::CloudScriptTaskParameter() :
    PlayFabAdminCloudScriptTaskParameter{}
{
}

CloudScriptTaskParameter::CloudScriptTaskParameter(const CloudScriptTaskParameter& src) :
    PlayFabAdminCloudScriptTaskParameter{ src },
    m_argument{ src.m_argument },
    m_functionName{ src.m_functionName }
{
    argument.stringValue = m_argument.StringValue();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
}

CloudScriptTaskParameter::CloudScriptTaskParameter(CloudScriptTaskParameter&& src) :
    PlayFabAdminCloudScriptTaskParameter{ src },
    m_argument{ std::move(src.m_argument) },
    m_functionName{ std::move(src.m_functionName) }
{
    argument.stringValue = m_argument.StringValue();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
}

CloudScriptTaskParameter::CloudScriptTaskParameter(const PlayFabAdminCloudScriptTaskParameter& src)
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
    return JsonUtils::ToJson<PlayFabAdminCloudScriptTaskParameter>(*this);
}

ScriptExecutionError::ScriptExecutionError() :
    PlayFabAdminScriptExecutionError{}
{
}

ScriptExecutionError::ScriptExecutionError(const ScriptExecutionError& src) :
    PlayFabAdminScriptExecutionError{ src },
    m_error{ src.m_error },
    m_message{ src.m_message },
    m_stackTrace{ src.m_stackTrace }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

ScriptExecutionError::ScriptExecutionError(ScriptExecutionError&& src) :
    PlayFabAdminScriptExecutionError{ src },
    m_error{ std::move(src.m_error) },
    m_message{ std::move(src.m_message) },
    m_stackTrace{ std::move(src.m_stackTrace) }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

ScriptExecutionError::ScriptExecutionError(const PlayFabAdminScriptExecutionError& src)
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
    return JsonUtils::ToJson<PlayFabAdminScriptExecutionError>(*this);
}

size_t ScriptExecutionError::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminScriptExecutionError) };
    serializedSize += (m_error.size() + 1);
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_stackTrace.size() + 1);
    return serializedSize;
}

void ScriptExecutionError::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminScriptExecutionError{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminScriptExecutionError);
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
    PlayFabAdminLogStatement{}
{
}

LogStatement::LogStatement(const LogStatement& src) :
    PlayFabAdminLogStatement{ src },
    m_data{ src.m_data },
    m_level{ src.m_level },
    m_message{ src.m_message }
{
    data.stringValue = m_data.StringValue();
    level = m_level.empty() ? nullptr : m_level.data();
    message = m_message.empty() ? nullptr : m_message.data();
}

LogStatement::LogStatement(LogStatement&& src) :
    PlayFabAdminLogStatement{ src },
    m_data{ std::move(src.m_data) },
    m_level{ std::move(src.m_level) },
    m_message{ std::move(src.m_message) }
{
    data.stringValue = m_data.StringValue();
    level = m_level.empty() ? nullptr : m_level.data();
    message = m_message.empty() ? nullptr : m_message.data();
}

LogStatement::LogStatement(const PlayFabAdminLogStatement& src)
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
    return JsonUtils::ToJson<PlayFabAdminLogStatement>(*this);
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult() :
    PlayFabAdminExecuteCloudScriptResult{}
{
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src) :
    PlayFabAdminExecuteCloudScriptResult{ src },
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
    PlayFabAdminExecuteCloudScriptResult{ src },
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

ExecuteCloudScriptResult::ExecuteCloudScriptResult(const PlayFabAdminExecuteCloudScriptResult& src)
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
    return JsonUtils::ToJson<PlayFabAdminExecuteCloudScriptResult>(*this);
}

CloudScriptTaskSummary::CloudScriptTaskSummary() :
    PlayFabAdminCloudScriptTaskSummary{}
{
}

CloudScriptTaskSummary::CloudScriptTaskSummary(const CloudScriptTaskSummary& src) :
    PlayFabAdminCloudScriptTaskSummary{ src },
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
    PlayFabAdminCloudScriptTaskSummary{ src },
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

CloudScriptTaskSummary::CloudScriptTaskSummary(const PlayFabAdminCloudScriptTaskSummary& src)
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
    return JsonUtils::ToJson<PlayFabAdminCloudScriptTaskSummary>(*this);
}

CloudScriptVersionStatus::CloudScriptVersionStatus() :
    PlayFabAdminCloudScriptVersionStatus{}
{
}


CloudScriptVersionStatus::CloudScriptVersionStatus(const PlayFabAdminCloudScriptVersionStatus& src)
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
    return JsonUtils::ToJson<PlayFabAdminCloudScriptVersionStatus>(*this);
}

size_t CloudScriptVersionStatus::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminCloudScriptVersionStatus) };
    return serializedSize;
}

void CloudScriptVersionStatus::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminCloudScriptVersionStatus{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminCloudScriptVersionStatus);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

ContactEmailInfo::ContactEmailInfo() :
    PlayFabAdminContactEmailInfo{}
{
}

ContactEmailInfo::ContactEmailInfo(const ContactEmailInfo& src) :
    PlayFabAdminContactEmailInfo{ src },
    m_emailAddress{ src.m_emailAddress },
    m_name{ src.m_name },
    m_verificationStatus{ src.m_verificationStatus }
{
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
    name = m_name.empty() ? nullptr : m_name.data();
    verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
}

ContactEmailInfo::ContactEmailInfo(ContactEmailInfo&& src) :
    PlayFabAdminContactEmailInfo{ src },
    m_emailAddress{ std::move(src.m_emailAddress) },
    m_name{ std::move(src.m_name) },
    m_verificationStatus{ std::move(src.m_verificationStatus) }
{
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
    name = m_name.empty() ? nullptr : m_name.data();
    verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
}

ContactEmailInfo::ContactEmailInfo(const PlayFabAdminContactEmailInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ContactEmailInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "VerificationStatus", m_verificationStatus, verificationStatus);
}

JsonValue ContactEmailInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminContactEmailInfo>(*this);
}

ContentInfo::ContentInfo() :
    PlayFabAdminContentInfo{}
{
}

ContentInfo::ContentInfo(const ContentInfo& src) :
    PlayFabAdminContentInfo{ src },
    m_key{ src.m_key }
{
    key = m_key.empty() ? nullptr : m_key.data();
}

ContentInfo::ContentInfo(ContentInfo&& src) :
    PlayFabAdminContentInfo{ src },
    m_key{ std::move(src.m_key) }
{
    key = m_key.empty() ? nullptr : m_key.data();
}

ContentInfo::ContentInfo(const PlayFabAdminContentInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ContentInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "LastModified", lastModified, true);
    JsonUtils::ObjectGetMember(input, "Size", size);
}

JsonValue ContentInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminContentInfo>(*this);
}

size_t ContentInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminContentInfo) };
    serializedSize += (m_key.size() + 1);
    return serializedSize;
}

void ContentInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminContentInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminContentInfo);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateActionsOnPlayerSegmentTaskRequest::CreateActionsOnPlayerSegmentTaskRequest() :
    PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest{}
{
}

CreateActionsOnPlayerSegmentTaskRequest::CreateActionsOnPlayerSegmentTaskRequest(const CreateActionsOnPlayerSegmentTaskRequest& src) :
    PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_name{ src.m_name },
    m_parameter{ src.m_parameter },
    m_schedule{ src.m_schedule }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PlayFabAdminActionsOnPlayersInSegmentTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateActionsOnPlayerSegmentTaskRequest::CreateActionsOnPlayerSegmentTaskRequest(CreateActionsOnPlayerSegmentTaskRequest&& src) :
    PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_name{ std::move(src.m_name) },
    m_parameter{ std::move(src.m_parameter) },
    m_schedule{ std::move(src.m_schedule) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PlayFabAdminActionsOnPlayersInSegmentTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateActionsOnPlayerSegmentTaskRequest::CreateActionsOnPlayerSegmentTaskRequest(const PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest>(*this);
}

CreateCloudScriptTaskRequest::CreateCloudScriptTaskRequest() :
    PlayFabAdminCreateCloudScriptTaskRequest{}
{
}

CreateCloudScriptTaskRequest::CreateCloudScriptTaskRequest(const CreateCloudScriptTaskRequest& src) :
    PlayFabAdminCreateCloudScriptTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_name{ src.m_name },
    m_parameter{ src.m_parameter },
    m_schedule{ src.m_schedule }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PlayFabAdminCloudScriptTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateCloudScriptTaskRequest::CreateCloudScriptTaskRequest(CreateCloudScriptTaskRequest&& src) :
    PlayFabAdminCreateCloudScriptTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_name{ std::move(src.m_name) },
    m_parameter{ std::move(src.m_parameter) },
    m_schedule{ std::move(src.m_schedule) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PlayFabAdminCloudScriptTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateCloudScriptTaskRequest::CreateCloudScriptTaskRequest(const PlayFabAdminCreateCloudScriptTaskRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminCreateCloudScriptTaskRequest>(*this);
}

InsightsScalingTaskParameter::InsightsScalingTaskParameter() :
    PlayFabAdminInsightsScalingTaskParameter{}
{
}


InsightsScalingTaskParameter::InsightsScalingTaskParameter(const PlayFabAdminInsightsScalingTaskParameter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsScalingTaskParameter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Level", level);
}

JsonValue InsightsScalingTaskParameter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminInsightsScalingTaskParameter>(*this);
}

size_t InsightsScalingTaskParameter::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminInsightsScalingTaskParameter) };
    return serializedSize;
}

void InsightsScalingTaskParameter::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminInsightsScalingTaskParameter{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminInsightsScalingTaskParameter);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

CreateInsightsScheduledScalingTaskRequest::CreateInsightsScheduledScalingTaskRequest() :
    PlayFabAdminCreateInsightsScheduledScalingTaskRequest{}
{
}

CreateInsightsScheduledScalingTaskRequest::CreateInsightsScheduledScalingTaskRequest(const CreateInsightsScheduledScalingTaskRequest& src) :
    PlayFabAdminCreateInsightsScheduledScalingTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_name{ src.m_name },
    m_parameter{ src.m_parameter },
    m_schedule{ src.m_schedule }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PlayFabAdminInsightsScalingTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateInsightsScheduledScalingTaskRequest::CreateInsightsScheduledScalingTaskRequest(CreateInsightsScheduledScalingTaskRequest&& src) :
    PlayFabAdminCreateInsightsScheduledScalingTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_name{ std::move(src.m_name) },
    m_parameter{ std::move(src.m_parameter) },
    m_schedule{ std::move(src.m_schedule) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
    parameter = (PlayFabAdminInsightsScalingTaskParameter const*)&m_parameter;
    schedule = m_schedule.empty() ? nullptr : m_schedule.data();
}

CreateInsightsScheduledScalingTaskRequest::CreateInsightsScheduledScalingTaskRequest(const PlayFabAdminCreateInsightsScheduledScalingTaskRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminCreateInsightsScheduledScalingTaskRequest>(*this);
}

OpenIdIssuerInformation::OpenIdIssuerInformation() :
    PlayFabAdminOpenIdIssuerInformation{}
{
}

OpenIdIssuerInformation::OpenIdIssuerInformation(const OpenIdIssuerInformation& src) :
    PlayFabAdminOpenIdIssuerInformation{ src },
    m_authorizationUrl{ src.m_authorizationUrl },
    m_issuer{ src.m_issuer },
    m_jsonWebKeySet{ src.m_jsonWebKeySet },
    m_tokenUrl{ src.m_tokenUrl }
{
    authorizationUrl = m_authorizationUrl.empty() ? nullptr : m_authorizationUrl.data();
    issuer = m_issuer.empty() ? nullptr : m_issuer.data();
    jsonWebKeySet.stringValue = m_jsonWebKeySet.StringValue();
    tokenUrl = m_tokenUrl.empty() ? nullptr : m_tokenUrl.data();
}

OpenIdIssuerInformation::OpenIdIssuerInformation(OpenIdIssuerInformation&& src) :
    PlayFabAdminOpenIdIssuerInformation{ src },
    m_authorizationUrl{ std::move(src.m_authorizationUrl) },
    m_issuer{ std::move(src.m_issuer) },
    m_jsonWebKeySet{ std::move(src.m_jsonWebKeySet) },
    m_tokenUrl{ std::move(src.m_tokenUrl) }
{
    authorizationUrl = m_authorizationUrl.empty() ? nullptr : m_authorizationUrl.data();
    issuer = m_issuer.empty() ? nullptr : m_issuer.data();
    jsonWebKeySet.stringValue = m_jsonWebKeySet.StringValue();
    tokenUrl = m_tokenUrl.empty() ? nullptr : m_tokenUrl.data();
}

OpenIdIssuerInformation::OpenIdIssuerInformation(const PlayFabAdminOpenIdIssuerInformation& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void OpenIdIssuerInformation::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthorizationUrl", m_authorizationUrl, authorizationUrl);
    JsonUtils::ObjectGetMember(input, "Issuer", m_issuer, issuer);
    JsonUtils::ObjectGetMember(input, "JsonWebKeySet", m_jsonWebKeySet, jsonWebKeySet);
    JsonUtils::ObjectGetMember(input, "TokenUrl", m_tokenUrl, tokenUrl);
}

JsonValue OpenIdIssuerInformation::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminOpenIdIssuerInformation>(*this);
}

CreateOpenIdConnectionRequest::CreateOpenIdConnectionRequest() :
    PlayFabAdminCreateOpenIdConnectionRequest{}
{
}

CreateOpenIdConnectionRequest::CreateOpenIdConnectionRequest(const CreateOpenIdConnectionRequest& src) :
    PlayFabAdminCreateOpenIdConnectionRequest{ src },
    m_clientId{ src.m_clientId },
    m_clientSecret{ src.m_clientSecret },
    m_connectionId{ src.m_connectionId },
    m_ignoreNonce{ src.m_ignoreNonce },
    m_issuerDiscoveryUrl{ src.m_issuerDiscoveryUrl },
    m_issuerInformation{ src.m_issuerInformation }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    ignoreNonce = m_ignoreNonce ? m_ignoreNonce.operator->() : nullptr;
    issuerDiscoveryUrl = m_issuerDiscoveryUrl.empty() ? nullptr : m_issuerDiscoveryUrl.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

CreateOpenIdConnectionRequest::CreateOpenIdConnectionRequest(CreateOpenIdConnectionRequest&& src) :
    PlayFabAdminCreateOpenIdConnectionRequest{ src },
    m_clientId{ std::move(src.m_clientId) },
    m_clientSecret{ std::move(src.m_clientSecret) },
    m_connectionId{ std::move(src.m_connectionId) },
    m_ignoreNonce{ std::move(src.m_ignoreNonce) },
    m_issuerDiscoveryUrl{ std::move(src.m_issuerDiscoveryUrl) },
    m_issuerInformation{ std::move(src.m_issuerInformation) }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    ignoreNonce = m_ignoreNonce ? m_ignoreNonce.operator->() : nullptr;
    issuerDiscoveryUrl = m_issuerDiscoveryUrl.empty() ? nullptr : m_issuerDiscoveryUrl.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

CreateOpenIdConnectionRequest::CreateOpenIdConnectionRequest(const PlayFabAdminCreateOpenIdConnectionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateOpenIdConnectionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ClientId", m_clientId, clientId);
    JsonUtils::ObjectGetMember(input, "ClientSecret", m_clientSecret, clientSecret);
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "IgnoreNonce", m_ignoreNonce, ignoreNonce);
    JsonUtils::ObjectGetMember(input, "IssuerDiscoveryUrl", m_issuerDiscoveryUrl, issuerDiscoveryUrl);
    JsonUtils::ObjectGetMember(input, "IssuerInformation", m_issuerInformation, issuerInformation);
}

JsonValue CreateOpenIdConnectionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCreateOpenIdConnectionRequest>(*this);
}

CreatePlayerSharedSecretRequest::CreatePlayerSharedSecretRequest() :
    PlayFabAdminCreatePlayerSharedSecretRequest{}
{
}

CreatePlayerSharedSecretRequest::CreatePlayerSharedSecretRequest(const CreatePlayerSharedSecretRequest& src) :
    PlayFabAdminCreatePlayerSharedSecretRequest{ src },
    m_friendlyName{ src.m_friendlyName }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
}

CreatePlayerSharedSecretRequest::CreatePlayerSharedSecretRequest(CreatePlayerSharedSecretRequest&& src) :
    PlayFabAdminCreatePlayerSharedSecretRequest{ src },
    m_friendlyName{ std::move(src.m_friendlyName) }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
}

CreatePlayerSharedSecretRequest::CreatePlayerSharedSecretRequest(const PlayFabAdminCreatePlayerSharedSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreatePlayerSharedSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendlyName", m_friendlyName, friendlyName);
}

JsonValue CreatePlayerSharedSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCreatePlayerSharedSecretRequest>(*this);
}

size_t CreatePlayerSharedSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminCreatePlayerSharedSecretRequest) };
    serializedSize += (m_friendlyName.size() + 1);
    return serializedSize;
}

void CreatePlayerSharedSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminCreatePlayerSharedSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminCreatePlayerSharedSecretRequest);
    memcpy(stringBuffer, m_friendlyName.data(), m_friendlyName.size() + 1);
    serializedStruct->friendlyName = stringBuffer;
    stringBuffer += m_friendlyName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreatePlayerSharedSecretResult::CreatePlayerSharedSecretResult() :
    PlayFabAdminCreatePlayerSharedSecretResult{}
{
}

CreatePlayerSharedSecretResult::CreatePlayerSharedSecretResult(const CreatePlayerSharedSecretResult& src) :
    PlayFabAdminCreatePlayerSharedSecretResult{ src },
    m_secretKey{ src.m_secretKey }
{
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

CreatePlayerSharedSecretResult::CreatePlayerSharedSecretResult(CreatePlayerSharedSecretResult&& src) :
    PlayFabAdminCreatePlayerSharedSecretResult{ src },
    m_secretKey{ std::move(src.m_secretKey) }
{
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

CreatePlayerSharedSecretResult::CreatePlayerSharedSecretResult(const PlayFabAdminCreatePlayerSharedSecretResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreatePlayerSharedSecretResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
}

JsonValue CreatePlayerSharedSecretResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCreatePlayerSharedSecretResult>(*this);
}

size_t CreatePlayerSharedSecretResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminCreatePlayerSharedSecretResult) };
    serializedSize += (m_secretKey.size() + 1);
    return serializedSize;
}

void CreatePlayerSharedSecretResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminCreatePlayerSharedSecretResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminCreatePlayerSharedSecretResult);
    memcpy(stringBuffer, m_secretKey.data(), m_secretKey.size() + 1);
    serializedStruct->secretKey = stringBuffer;
    stringBuffer += m_secretKey.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreatePlayerStatisticDefinitionRequest::CreatePlayerStatisticDefinitionRequest() :
    PlayFabAdminCreatePlayerStatisticDefinitionRequest{}
{
}

CreatePlayerStatisticDefinitionRequest::CreatePlayerStatisticDefinitionRequest(const CreatePlayerStatisticDefinitionRequest& src) :
    PlayFabAdminCreatePlayerStatisticDefinitionRequest{ src },
    m_aggregationMethod{ src.m_aggregationMethod },
    m_customTags{ src.m_customTags },
    m_statisticName{ src.m_statisticName },
    m_versionChangeInterval{ src.m_versionChangeInterval }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

CreatePlayerStatisticDefinitionRequest::CreatePlayerStatisticDefinitionRequest(CreatePlayerStatisticDefinitionRequest&& src) :
    PlayFabAdminCreatePlayerStatisticDefinitionRequest{ src },
    m_aggregationMethod{ std::move(src.m_aggregationMethod) },
    m_customTags{ std::move(src.m_customTags) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_versionChangeInterval{ std::move(src.m_versionChangeInterval) }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

CreatePlayerStatisticDefinitionRequest::CreatePlayerStatisticDefinitionRequest(const PlayFabAdminCreatePlayerStatisticDefinitionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreatePlayerStatisticDefinitionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AggregationMethod", m_aggregationMethod, aggregationMethod);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "VersionChangeInterval", m_versionChangeInterval, versionChangeInterval);
}

JsonValue CreatePlayerStatisticDefinitionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCreatePlayerStatisticDefinitionRequest>(*this);
}

PlayerStatisticDefinition::PlayerStatisticDefinition() :
    PlayFabAdminPlayerStatisticDefinition{}
{
}

PlayerStatisticDefinition::PlayerStatisticDefinition(const PlayerStatisticDefinition& src) :
    PlayFabAdminPlayerStatisticDefinition{ src },
    m_aggregationMethod{ src.m_aggregationMethod },
    m_statisticName{ src.m_statisticName },
    m_versionChangeInterval{ src.m_versionChangeInterval }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

PlayerStatisticDefinition::PlayerStatisticDefinition(PlayerStatisticDefinition&& src) :
    PlayFabAdminPlayerStatisticDefinition{ src },
    m_aggregationMethod{ std::move(src.m_aggregationMethod) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_versionChangeInterval{ std::move(src.m_versionChangeInterval) }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

PlayerStatisticDefinition::PlayerStatisticDefinition(const PlayFabAdminPlayerStatisticDefinition& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerStatisticDefinition::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AggregationMethod", m_aggregationMethod, aggregationMethod);
    JsonUtils::ObjectGetMember(input, "CurrentVersion", currentVersion);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "VersionChangeInterval", m_versionChangeInterval, versionChangeInterval);
}

JsonValue PlayerStatisticDefinition::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPlayerStatisticDefinition>(*this);
}

CreatePlayerStatisticDefinitionResult::CreatePlayerStatisticDefinitionResult() :
    PlayFabAdminCreatePlayerStatisticDefinitionResult{}
{
}

CreatePlayerStatisticDefinitionResult::CreatePlayerStatisticDefinitionResult(const CreatePlayerStatisticDefinitionResult& src) :
    PlayFabAdminCreatePlayerStatisticDefinitionResult{ src },
    m_statistic{ src.m_statistic }
{
    statistic = m_statistic ? m_statistic.operator->() : nullptr;
}

CreatePlayerStatisticDefinitionResult::CreatePlayerStatisticDefinitionResult(CreatePlayerStatisticDefinitionResult&& src) :
    PlayFabAdminCreatePlayerStatisticDefinitionResult{ src },
    m_statistic{ std::move(src.m_statistic) }
{
    statistic = m_statistic ? m_statistic.operator->() : nullptr;
}

CreatePlayerStatisticDefinitionResult::CreatePlayerStatisticDefinitionResult(const PlayFabAdminCreatePlayerStatisticDefinitionResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreatePlayerStatisticDefinitionResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Statistic", m_statistic, statistic);
}

JsonValue CreatePlayerStatisticDefinitionResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCreatePlayerStatisticDefinitionResult>(*this);
}

DeletePlayerStatisticSegmentAction::DeletePlayerStatisticSegmentAction() :
    PlayFabAdminDeletePlayerStatisticSegmentAction{}
{
}

DeletePlayerStatisticSegmentAction::DeletePlayerStatisticSegmentAction(const DeletePlayerStatisticSegmentAction& src) :
    PlayFabAdminDeletePlayerStatisticSegmentAction{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

DeletePlayerStatisticSegmentAction::DeletePlayerStatisticSegmentAction(DeletePlayerStatisticSegmentAction&& src) :
    PlayFabAdminDeletePlayerStatisticSegmentAction{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

DeletePlayerStatisticSegmentAction::DeletePlayerStatisticSegmentAction(const PlayFabAdminDeletePlayerStatisticSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeletePlayerStatisticSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue DeletePlayerStatisticSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeletePlayerStatisticSegmentAction>(*this);
}

size_t DeletePlayerStatisticSegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminDeletePlayerStatisticSegmentAction) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void DeletePlayerStatisticSegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminDeletePlayerStatisticSegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminDeletePlayerStatisticSegmentAction);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EmailNotificationSegmentAction::EmailNotificationSegmentAction() :
    PlayFabAdminEmailNotificationSegmentAction{}
{
}

EmailNotificationSegmentAction::EmailNotificationSegmentAction(const EmailNotificationSegmentAction& src) :
    PlayFabAdminEmailNotificationSegmentAction{ src },
    m_emailTemplateId{ src.m_emailTemplateId },
    m_emailTemplateName{ src.m_emailTemplateName }
{
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    emailTemplateName = m_emailTemplateName.empty() ? nullptr : m_emailTemplateName.data();
}

EmailNotificationSegmentAction::EmailNotificationSegmentAction(EmailNotificationSegmentAction&& src) :
    PlayFabAdminEmailNotificationSegmentAction{ src },
    m_emailTemplateId{ std::move(src.m_emailTemplateId) },
    m_emailTemplateName{ std::move(src.m_emailTemplateName) }
{
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    emailTemplateName = m_emailTemplateName.empty() ? nullptr : m_emailTemplateName.data();
}

EmailNotificationSegmentAction::EmailNotificationSegmentAction(const PlayFabAdminEmailNotificationSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EmailNotificationSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
    JsonUtils::ObjectGetMember(input, "EmailTemplateName", m_emailTemplateName, emailTemplateName);
}

JsonValue EmailNotificationSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminEmailNotificationSegmentAction>(*this);
}

size_t EmailNotificationSegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminEmailNotificationSegmentAction) };
    serializedSize += (m_emailTemplateId.size() + 1);
    serializedSize += (m_emailTemplateName.size() + 1);
    return serializedSize;
}

void EmailNotificationSegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminEmailNotificationSegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminEmailNotificationSegmentAction);
    memcpy(stringBuffer, m_emailTemplateId.data(), m_emailTemplateId.size() + 1);
    serializedStruct->emailTemplateId = stringBuffer;
    stringBuffer += m_emailTemplateId.size() + 1;
    memcpy(stringBuffer, m_emailTemplateName.data(), m_emailTemplateName.size() + 1);
    serializedStruct->emailTemplateName = stringBuffer;
    stringBuffer += m_emailTemplateName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ExecuteAzureFunctionSegmentAction::ExecuteAzureFunctionSegmentAction() :
    PlayFabAdminExecuteAzureFunctionSegmentAction{}
{
}

ExecuteAzureFunctionSegmentAction::ExecuteAzureFunctionSegmentAction(const ExecuteAzureFunctionSegmentAction& src) :
    PlayFabAdminExecuteAzureFunctionSegmentAction{ src },
    m_azureFunction{ src.m_azureFunction },
    m_functionParameter{ src.m_functionParameter }
{
    azureFunction = m_azureFunction.empty() ? nullptr : m_azureFunction.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
}

ExecuteAzureFunctionSegmentAction::ExecuteAzureFunctionSegmentAction(ExecuteAzureFunctionSegmentAction&& src) :
    PlayFabAdminExecuteAzureFunctionSegmentAction{ src },
    m_azureFunction{ std::move(src.m_azureFunction) },
    m_functionParameter{ std::move(src.m_functionParameter) }
{
    azureFunction = m_azureFunction.empty() ? nullptr : m_azureFunction.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
}

ExecuteAzureFunctionSegmentAction::ExecuteAzureFunctionSegmentAction(const PlayFabAdminExecuteAzureFunctionSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteAzureFunctionSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AzureFunction", m_azureFunction, azureFunction);
    JsonUtils::ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
    JsonUtils::ObjectGetMember(input, "GenerateFunctionExecutedEvents", generateFunctionExecutedEvents);
}

JsonValue ExecuteAzureFunctionSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminExecuteAzureFunctionSegmentAction>(*this);
}

ExecuteCloudScriptSegmentAction::ExecuteCloudScriptSegmentAction() :
    PlayFabAdminExecuteCloudScriptSegmentAction{}
{
}

ExecuteCloudScriptSegmentAction::ExecuteCloudScriptSegmentAction(const ExecuteCloudScriptSegmentAction& src) :
    PlayFabAdminExecuteCloudScriptSegmentAction{ src },
    m_cloudScriptFunction{ src.m_cloudScriptFunction },
    m_functionParameter{ src.m_functionParameter },
    m_functionParameterJson{ src.m_functionParameterJson }
{
    cloudScriptFunction = m_cloudScriptFunction.empty() ? nullptr : m_cloudScriptFunction.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    functionParameterJson = m_functionParameterJson.empty() ? nullptr : m_functionParameterJson.data();
}

ExecuteCloudScriptSegmentAction::ExecuteCloudScriptSegmentAction(ExecuteCloudScriptSegmentAction&& src) :
    PlayFabAdminExecuteCloudScriptSegmentAction{ src },
    m_cloudScriptFunction{ std::move(src.m_cloudScriptFunction) },
    m_functionParameter{ std::move(src.m_functionParameter) },
    m_functionParameterJson{ std::move(src.m_functionParameterJson) }
{
    cloudScriptFunction = m_cloudScriptFunction.empty() ? nullptr : m_cloudScriptFunction.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    functionParameterJson = m_functionParameterJson.empty() ? nullptr : m_functionParameterJson.data();
}

ExecuteCloudScriptSegmentAction::ExecuteCloudScriptSegmentAction(const PlayFabAdminExecuteCloudScriptSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteCloudScriptSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CloudScriptFunction", m_cloudScriptFunction, cloudScriptFunction);
    JsonUtils::ObjectGetMember(input, "CloudScriptPublishResultsToPlayStream", cloudScriptPublishResultsToPlayStream);
    JsonUtils::ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
    JsonUtils::ObjectGetMember(input, "FunctionParameterJson", m_functionParameterJson, functionParameterJson);
}

JsonValue ExecuteCloudScriptSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminExecuteCloudScriptSegmentAction>(*this);
}

GrantItemSegmentAction::GrantItemSegmentAction() :
    PlayFabAdminGrantItemSegmentAction{}
{
}

GrantItemSegmentAction::GrantItemSegmentAction(const GrantItemSegmentAction& src) :
    PlayFabAdminGrantItemSegmentAction{ src },
    m_catelogId{ src.m_catelogId },
    m_itemId{ src.m_itemId }
{
    catelogId = m_catelogId.empty() ? nullptr : m_catelogId.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

GrantItemSegmentAction::GrantItemSegmentAction(GrantItemSegmentAction&& src) :
    PlayFabAdminGrantItemSegmentAction{ src },
    m_catelogId{ std::move(src.m_catelogId) },
    m_itemId{ std::move(src.m_itemId) }
{
    catelogId = m_catelogId.empty() ? nullptr : m_catelogId.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

GrantItemSegmentAction::GrantItemSegmentAction(const PlayFabAdminGrantItemSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatelogId", m_catelogId, catelogId);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "Quantity", quantity);
}

JsonValue GrantItemSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGrantItemSegmentAction>(*this);
}

size_t GrantItemSegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGrantItemSegmentAction) };
    serializedSize += (m_catelogId.size() + 1);
    serializedSize += (m_itemId.size() + 1);
    return serializedSize;
}

void GrantItemSegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGrantItemSegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGrantItemSegmentAction);
    memcpy(stringBuffer, m_catelogId.data(), m_catelogId.size() + 1);
    serializedStruct->catelogId = stringBuffer;
    stringBuffer += m_catelogId.size() + 1;
    memcpy(stringBuffer, m_itemId.data(), m_itemId.size() + 1);
    serializedStruct->itemId = stringBuffer;
    stringBuffer += m_itemId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GrantVirtualCurrencySegmentAction::GrantVirtualCurrencySegmentAction() :
    PlayFabAdminGrantVirtualCurrencySegmentAction{}
{
}

GrantVirtualCurrencySegmentAction::GrantVirtualCurrencySegmentAction(const GrantVirtualCurrencySegmentAction& src) :
    PlayFabAdminGrantVirtualCurrencySegmentAction{ src },
    m_currencyCode{ src.m_currencyCode }
{
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
}

GrantVirtualCurrencySegmentAction::GrantVirtualCurrencySegmentAction(GrantVirtualCurrencySegmentAction&& src) :
    PlayFabAdminGrantVirtualCurrencySegmentAction{ src },
    m_currencyCode{ std::move(src.m_currencyCode) }
{
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
}

GrantVirtualCurrencySegmentAction::GrantVirtualCurrencySegmentAction(const PlayFabAdminGrantVirtualCurrencySegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantVirtualCurrencySegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
}

JsonValue GrantVirtualCurrencySegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGrantVirtualCurrencySegmentAction>(*this);
}

size_t GrantVirtualCurrencySegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGrantVirtualCurrencySegmentAction) };
    serializedSize += (m_currencyCode.size() + 1);
    return serializedSize;
}

void GrantVirtualCurrencySegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGrantVirtualCurrencySegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGrantVirtualCurrencySegmentAction);
    memcpy(stringBuffer, m_currencyCode.data(), m_currencyCode.size() + 1);
    serializedStruct->currencyCode = stringBuffer;
    stringBuffer += m_currencyCode.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

IncrementPlayerStatisticSegmentAction::IncrementPlayerStatisticSegmentAction() :
    PlayFabAdminIncrementPlayerStatisticSegmentAction{}
{
}

IncrementPlayerStatisticSegmentAction::IncrementPlayerStatisticSegmentAction(const IncrementPlayerStatisticSegmentAction& src) :
    PlayFabAdminIncrementPlayerStatisticSegmentAction{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

IncrementPlayerStatisticSegmentAction::IncrementPlayerStatisticSegmentAction(IncrementPlayerStatisticSegmentAction&& src) :
    PlayFabAdminIncrementPlayerStatisticSegmentAction{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

IncrementPlayerStatisticSegmentAction::IncrementPlayerStatisticSegmentAction(const PlayFabAdminIncrementPlayerStatisticSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IncrementPlayerStatisticSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IncrementValue", incrementValue);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue IncrementPlayerStatisticSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminIncrementPlayerStatisticSegmentAction>(*this);
}

size_t IncrementPlayerStatisticSegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminIncrementPlayerStatisticSegmentAction) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void IncrementPlayerStatisticSegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminIncrementPlayerStatisticSegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminIncrementPlayerStatisticSegmentAction);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PushNotificationSegmentAction::PushNotificationSegmentAction() :
    PlayFabAdminPushNotificationSegmentAction{}
{
}

PushNotificationSegmentAction::PushNotificationSegmentAction(const PushNotificationSegmentAction& src) :
    PlayFabAdminPushNotificationSegmentAction{ src },
    m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

PushNotificationSegmentAction::PushNotificationSegmentAction(PushNotificationSegmentAction&& src) :
    PlayFabAdminPushNotificationSegmentAction{ src },
    m_pushNotificationTemplateId{ std::move(src.m_pushNotificationTemplateId) }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

PushNotificationSegmentAction::PushNotificationSegmentAction(const PlayFabAdminPushNotificationSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
}

JsonValue PushNotificationSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPushNotificationSegmentAction>(*this);
}

size_t PushNotificationSegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminPushNotificationSegmentAction) };
    serializedSize += (m_pushNotificationTemplateId.size() + 1);
    return serializedSize;
}

void PushNotificationSegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminPushNotificationSegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminPushNotificationSegmentAction);
    memcpy(stringBuffer, m_pushNotificationTemplateId.data(), m_pushNotificationTemplateId.size() + 1);
    serializedStruct->pushNotificationTemplateId = stringBuffer;
    stringBuffer += m_pushNotificationTemplateId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SegmentTrigger::SegmentTrigger() :
    PlayFabAdminSegmentTrigger{}
{
}

SegmentTrigger::SegmentTrigger(const SegmentTrigger& src) :
    PlayFabAdminSegmentTrigger{ src },
    m_banPlayerAction{ src.m_banPlayerAction },
    m_deletePlayerStatisticAction{ src.m_deletePlayerStatisticAction },
    m_emailNotificationAction{ src.m_emailNotificationAction },
    m_executeAzureFunctionAction{ src.m_executeAzureFunctionAction },
    m_executeCloudScriptAction{ src.m_executeCloudScriptAction },
    m_grantItemAction{ src.m_grantItemAction },
    m_grantVirtualCurrencyAction{ src.m_grantVirtualCurrencyAction },
    m_incrementPlayerStatisticAction{ src.m_incrementPlayerStatisticAction },
    m_pushNotificationAction{ src.m_pushNotificationAction }
{
    banPlayerAction = m_banPlayerAction ? m_banPlayerAction.operator->() : nullptr;
    deletePlayerStatisticAction = m_deletePlayerStatisticAction ? m_deletePlayerStatisticAction.operator->() : nullptr;
    emailNotificationAction = m_emailNotificationAction ? m_emailNotificationAction.operator->() : nullptr;
    executeAzureFunctionAction = m_executeAzureFunctionAction ? m_executeAzureFunctionAction.operator->() : nullptr;
    executeCloudScriptAction = m_executeCloudScriptAction ? m_executeCloudScriptAction.operator->() : nullptr;
    grantItemAction = m_grantItemAction ? m_grantItemAction.operator->() : nullptr;
    grantVirtualCurrencyAction = m_grantVirtualCurrencyAction ? m_grantVirtualCurrencyAction.operator->() : nullptr;
    incrementPlayerStatisticAction = m_incrementPlayerStatisticAction ? m_incrementPlayerStatisticAction.operator->() : nullptr;
    pushNotificationAction = m_pushNotificationAction ? m_pushNotificationAction.operator->() : nullptr;
}

SegmentTrigger::SegmentTrigger(SegmentTrigger&& src) :
    PlayFabAdminSegmentTrigger{ src },
    m_banPlayerAction{ std::move(src.m_banPlayerAction) },
    m_deletePlayerStatisticAction{ std::move(src.m_deletePlayerStatisticAction) },
    m_emailNotificationAction{ std::move(src.m_emailNotificationAction) },
    m_executeAzureFunctionAction{ std::move(src.m_executeAzureFunctionAction) },
    m_executeCloudScriptAction{ std::move(src.m_executeCloudScriptAction) },
    m_grantItemAction{ std::move(src.m_grantItemAction) },
    m_grantVirtualCurrencyAction{ std::move(src.m_grantVirtualCurrencyAction) },
    m_incrementPlayerStatisticAction{ std::move(src.m_incrementPlayerStatisticAction) },
    m_pushNotificationAction{ std::move(src.m_pushNotificationAction) }
{
    banPlayerAction = m_banPlayerAction ? m_banPlayerAction.operator->() : nullptr;
    deletePlayerStatisticAction = m_deletePlayerStatisticAction ? m_deletePlayerStatisticAction.operator->() : nullptr;
    emailNotificationAction = m_emailNotificationAction ? m_emailNotificationAction.operator->() : nullptr;
    executeAzureFunctionAction = m_executeAzureFunctionAction ? m_executeAzureFunctionAction.operator->() : nullptr;
    executeCloudScriptAction = m_executeCloudScriptAction ? m_executeCloudScriptAction.operator->() : nullptr;
    grantItemAction = m_grantItemAction ? m_grantItemAction.operator->() : nullptr;
    grantVirtualCurrencyAction = m_grantVirtualCurrencyAction ? m_grantVirtualCurrencyAction.operator->() : nullptr;
    incrementPlayerStatisticAction = m_incrementPlayerStatisticAction ? m_incrementPlayerStatisticAction.operator->() : nullptr;
    pushNotificationAction = m_pushNotificationAction ? m_pushNotificationAction.operator->() : nullptr;
}

SegmentTrigger::SegmentTrigger(const PlayFabAdminSegmentTrigger& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SegmentTrigger::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanPlayerAction", m_banPlayerAction, banPlayerAction);
    JsonUtils::ObjectGetMember(input, "DeletePlayerStatisticAction", m_deletePlayerStatisticAction, deletePlayerStatisticAction);
    JsonUtils::ObjectGetMember(input, "EmailNotificationAction", m_emailNotificationAction, emailNotificationAction);
    JsonUtils::ObjectGetMember(input, "ExecuteAzureFunctionAction", m_executeAzureFunctionAction, executeAzureFunctionAction);
    JsonUtils::ObjectGetMember(input, "ExecuteCloudScriptAction", m_executeCloudScriptAction, executeCloudScriptAction);
    JsonUtils::ObjectGetMember(input, "GrantItemAction", m_grantItemAction, grantItemAction);
    JsonUtils::ObjectGetMember(input, "GrantVirtualCurrencyAction", m_grantVirtualCurrencyAction, grantVirtualCurrencyAction);
    JsonUtils::ObjectGetMember(input, "IncrementPlayerStatisticAction", m_incrementPlayerStatisticAction, incrementPlayerStatisticAction);
    JsonUtils::ObjectGetMember(input, "PushNotificationAction", m_pushNotificationAction, pushNotificationAction);
}

JsonValue SegmentTrigger::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSegmentTrigger>(*this);
}

FirstLoginDateSegmentFilter::FirstLoginDateSegmentFilter() :
    PlayFabAdminFirstLoginDateSegmentFilter{}
{
}

FirstLoginDateSegmentFilter::FirstLoginDateSegmentFilter(const FirstLoginDateSegmentFilter& src) :
    PlayFabAdminFirstLoginDateSegmentFilter{ src },
    m_comparison{ src.m_comparison }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

FirstLoginDateSegmentFilter::FirstLoginDateSegmentFilter(FirstLoginDateSegmentFilter&& src) :
    PlayFabAdminFirstLoginDateSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

FirstLoginDateSegmentFilter::FirstLoginDateSegmentFilter(const PlayFabAdminFirstLoginDateSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FirstLoginDateSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "LogInDate", logInDate, true);
}

JsonValue FirstLoginDateSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminFirstLoginDateSegmentFilter>(*this);
}

FirstLoginTimespanSegmentFilter::FirstLoginTimespanSegmentFilter() :
    PlayFabAdminFirstLoginTimespanSegmentFilter{}
{
}

FirstLoginTimespanSegmentFilter::FirstLoginTimespanSegmentFilter(const FirstLoginTimespanSegmentFilter& src) :
    PlayFabAdminFirstLoginTimespanSegmentFilter{ src },
    m_comparison{ src.m_comparison }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

FirstLoginTimespanSegmentFilter::FirstLoginTimespanSegmentFilter(FirstLoginTimespanSegmentFilter&& src) :
    PlayFabAdminFirstLoginTimespanSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

FirstLoginTimespanSegmentFilter::FirstLoginTimespanSegmentFilter(const PlayFabAdminFirstLoginTimespanSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FirstLoginTimespanSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "DurationInMinutes", durationInMinutes);
}

JsonValue FirstLoginTimespanSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminFirstLoginTimespanSegmentFilter>(*this);
}

LastLoginDateSegmentFilter::LastLoginDateSegmentFilter() :
    PlayFabAdminLastLoginDateSegmentFilter{}
{
}

LastLoginDateSegmentFilter::LastLoginDateSegmentFilter(const LastLoginDateSegmentFilter& src) :
    PlayFabAdminLastLoginDateSegmentFilter{ src },
    m_comparison{ src.m_comparison }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

LastLoginDateSegmentFilter::LastLoginDateSegmentFilter(LastLoginDateSegmentFilter&& src) :
    PlayFabAdminLastLoginDateSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

LastLoginDateSegmentFilter::LastLoginDateSegmentFilter(const PlayFabAdminLastLoginDateSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LastLoginDateSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "LogInDate", logInDate, true);
}

JsonValue LastLoginDateSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminLastLoginDateSegmentFilter>(*this);
}

LastLoginTimespanSegmentFilter::LastLoginTimespanSegmentFilter() :
    PlayFabAdminLastLoginTimespanSegmentFilter{}
{
}

LastLoginTimespanSegmentFilter::LastLoginTimespanSegmentFilter(const LastLoginTimespanSegmentFilter& src) :
    PlayFabAdminLastLoginTimespanSegmentFilter{ src },
    m_comparison{ src.m_comparison }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

LastLoginTimespanSegmentFilter::LastLoginTimespanSegmentFilter(LastLoginTimespanSegmentFilter&& src) :
    PlayFabAdminLastLoginTimespanSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

LastLoginTimespanSegmentFilter::LastLoginTimespanSegmentFilter(const PlayFabAdminLastLoginTimespanSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LastLoginTimespanSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "DurationInMinutes", durationInMinutes);
}

JsonValue LastLoginTimespanSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminLastLoginTimespanSegmentFilter>(*this);
}

LinkedUserAccountSegmentFilter::LinkedUserAccountSegmentFilter() :
    PlayFabAdminLinkedUserAccountSegmentFilter{}
{
}

LinkedUserAccountSegmentFilter::LinkedUserAccountSegmentFilter(const LinkedUserAccountSegmentFilter& src) :
    PlayFabAdminLinkedUserAccountSegmentFilter{ src },
    m_loginProvider{ src.m_loginProvider }
{
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

LinkedUserAccountSegmentFilter::LinkedUserAccountSegmentFilter(LinkedUserAccountSegmentFilter&& src) :
    PlayFabAdminLinkedUserAccountSegmentFilter{ src },
    m_loginProvider{ std::move(src.m_loginProvider) }
{
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

LinkedUserAccountSegmentFilter::LinkedUserAccountSegmentFilter(const PlayFabAdminLinkedUserAccountSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkedUserAccountSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LoginProvider", m_loginProvider, loginProvider);
}

JsonValue LinkedUserAccountSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminLinkedUserAccountSegmentFilter>(*this);
}

LinkedUserAccountHasEmailSegmentFilter::LinkedUserAccountHasEmailSegmentFilter() :
    PlayFabAdminLinkedUserAccountHasEmailSegmentFilter{}
{
}

LinkedUserAccountHasEmailSegmentFilter::LinkedUserAccountHasEmailSegmentFilter(const LinkedUserAccountHasEmailSegmentFilter& src) :
    PlayFabAdminLinkedUserAccountHasEmailSegmentFilter{ src },
    m_comparison{ src.m_comparison },
    m_loginProvider{ src.m_loginProvider }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

LinkedUserAccountHasEmailSegmentFilter::LinkedUserAccountHasEmailSegmentFilter(LinkedUserAccountHasEmailSegmentFilter&& src) :
    PlayFabAdminLinkedUserAccountHasEmailSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) },
    m_loginProvider{ std::move(src.m_loginProvider) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

LinkedUserAccountHasEmailSegmentFilter::LinkedUserAccountHasEmailSegmentFilter(const PlayFabAdminLinkedUserAccountHasEmailSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkedUserAccountHasEmailSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "LoginProvider", m_loginProvider, loginProvider);
}

JsonValue LinkedUserAccountHasEmailSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminLinkedUserAccountHasEmailSegmentFilter>(*this);
}

LocationSegmentFilter::LocationSegmentFilter() :
    PlayFabAdminLocationSegmentFilter{}
{
}

LocationSegmentFilter::LocationSegmentFilter(const LocationSegmentFilter& src) :
    PlayFabAdminLocationSegmentFilter{ src },
    m_countryCode{ src.m_countryCode }
{
    countryCode = m_countryCode ? m_countryCode.operator->() : nullptr;
}

LocationSegmentFilter::LocationSegmentFilter(LocationSegmentFilter&& src) :
    PlayFabAdminLocationSegmentFilter{ src },
    m_countryCode{ std::move(src.m_countryCode) }
{
    countryCode = m_countryCode ? m_countryCode.operator->() : nullptr;
}

LocationSegmentFilter::LocationSegmentFilter(const PlayFabAdminLocationSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LocationSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CountryCode", m_countryCode, countryCode);
}

JsonValue LocationSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminLocationSegmentFilter>(*this);
}

PushNotificationSegmentFilter::PushNotificationSegmentFilter() :
    PlayFabAdminPushNotificationSegmentFilter{}
{
}

PushNotificationSegmentFilter::PushNotificationSegmentFilter(const PushNotificationSegmentFilter& src) :
    PlayFabAdminPushNotificationSegmentFilter{ src },
    m_pushNotificationDevicePlatform{ src.m_pushNotificationDevicePlatform }
{
    pushNotificationDevicePlatform = m_pushNotificationDevicePlatform ? m_pushNotificationDevicePlatform.operator->() : nullptr;
}

PushNotificationSegmentFilter::PushNotificationSegmentFilter(PushNotificationSegmentFilter&& src) :
    PlayFabAdminPushNotificationSegmentFilter{ src },
    m_pushNotificationDevicePlatform{ std::move(src.m_pushNotificationDevicePlatform) }
{
    pushNotificationDevicePlatform = m_pushNotificationDevicePlatform ? m_pushNotificationDevicePlatform.operator->() : nullptr;
}

PushNotificationSegmentFilter::PushNotificationSegmentFilter(const PlayFabAdminPushNotificationSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PushNotificationDevicePlatform", m_pushNotificationDevicePlatform, pushNotificationDevicePlatform);
}

JsonValue PushNotificationSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPushNotificationSegmentFilter>(*this);
}

StatisticSegmentFilter::StatisticSegmentFilter() :
    PlayFabAdminStatisticSegmentFilter{}
{
}

StatisticSegmentFilter::StatisticSegmentFilter(const StatisticSegmentFilter& src) :
    PlayFabAdminStatisticSegmentFilter{ src },
    m_comparison{ src.m_comparison },
    m_filterValue{ src.m_filterValue },
    m_name{ src.m_name },
    m_useCurrentVersion{ src.m_useCurrentVersion },
    m_version{ src.m_version }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    filterValue = m_filterValue.empty() ? nullptr : m_filterValue.data();
    name = m_name.empty() ? nullptr : m_name.data();
    useCurrentVersion = m_useCurrentVersion ? m_useCurrentVersion.operator->() : nullptr;
    version = m_version ? m_version.operator->() : nullptr;
}

StatisticSegmentFilter::StatisticSegmentFilter(StatisticSegmentFilter&& src) :
    PlayFabAdminStatisticSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) },
    m_filterValue{ std::move(src.m_filterValue) },
    m_name{ std::move(src.m_name) },
    m_useCurrentVersion{ std::move(src.m_useCurrentVersion) },
    m_version{ std::move(src.m_version) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    filterValue = m_filterValue.empty() ? nullptr : m_filterValue.data();
    name = m_name.empty() ? nullptr : m_name.data();
    useCurrentVersion = m_useCurrentVersion ? m_useCurrentVersion.operator->() : nullptr;
    version = m_version ? m_version.operator->() : nullptr;
}

StatisticSegmentFilter::StatisticSegmentFilter(const PlayFabAdminStatisticSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StatisticSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "FilterValue", m_filterValue, filterValue);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "UseCurrentVersion", m_useCurrentVersion, useCurrentVersion);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue StatisticSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminStatisticSegmentFilter>(*this);
}

TagSegmentFilter::TagSegmentFilter() :
    PlayFabAdminTagSegmentFilter{}
{
}

TagSegmentFilter::TagSegmentFilter(const TagSegmentFilter& src) :
    PlayFabAdminTagSegmentFilter{ src },
    m_comparison{ src.m_comparison },
    m_tagValue{ src.m_tagValue }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
}

TagSegmentFilter::TagSegmentFilter(TagSegmentFilter&& src) :
    PlayFabAdminTagSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) },
    m_tagValue{ std::move(src.m_tagValue) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
}

TagSegmentFilter::TagSegmentFilter(const PlayFabAdminTagSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TagSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "TagValue", m_tagValue, tagValue);
}

JsonValue TagSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminTagSegmentFilter>(*this);
}

TotalValueToDateInUSDSegmentFilter::TotalValueToDateInUSDSegmentFilter() :
    PlayFabAdminTotalValueToDateInUSDSegmentFilter{}
{
}

TotalValueToDateInUSDSegmentFilter::TotalValueToDateInUSDSegmentFilter(const TotalValueToDateInUSDSegmentFilter& src) :
    PlayFabAdminTotalValueToDateInUSDSegmentFilter{ src },
    m_amount{ src.m_amount },
    m_comparison{ src.m_comparison }
{
    amount = m_amount.empty() ? nullptr : m_amount.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

TotalValueToDateInUSDSegmentFilter::TotalValueToDateInUSDSegmentFilter(TotalValueToDateInUSDSegmentFilter&& src) :
    PlayFabAdminTotalValueToDateInUSDSegmentFilter{ src },
    m_amount{ std::move(src.m_amount) },
    m_comparison{ std::move(src.m_comparison) }
{
    amount = m_amount.empty() ? nullptr : m_amount.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

TotalValueToDateInUSDSegmentFilter::TotalValueToDateInUSDSegmentFilter(const PlayFabAdminTotalValueToDateInUSDSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TotalValueToDateInUSDSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", m_amount, amount);
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
}

JsonValue TotalValueToDateInUSDSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminTotalValueToDateInUSDSegmentFilter>(*this);
}

UserOriginationSegmentFilter::UserOriginationSegmentFilter() :
    PlayFabAdminUserOriginationSegmentFilter{}
{
}

UserOriginationSegmentFilter::UserOriginationSegmentFilter(const UserOriginationSegmentFilter& src) :
    PlayFabAdminUserOriginationSegmentFilter{ src },
    m_loginProvider{ src.m_loginProvider }
{
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

UserOriginationSegmentFilter::UserOriginationSegmentFilter(UserOriginationSegmentFilter&& src) :
    PlayFabAdminUserOriginationSegmentFilter{ src },
    m_loginProvider{ std::move(src.m_loginProvider) }
{
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

UserOriginationSegmentFilter::UserOriginationSegmentFilter(const PlayFabAdminUserOriginationSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserOriginationSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LoginProvider", m_loginProvider, loginProvider);
}

JsonValue UserOriginationSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUserOriginationSegmentFilter>(*this);
}

ValueToDateSegmentFilter::ValueToDateSegmentFilter() :
    PlayFabAdminValueToDateSegmentFilter{}
{
}

ValueToDateSegmentFilter::ValueToDateSegmentFilter(const ValueToDateSegmentFilter& src) :
    PlayFabAdminValueToDateSegmentFilter{ src },
    m_amount{ src.m_amount },
    m_comparison{ src.m_comparison },
    m_currency{ src.m_currency }
{
    amount = m_amount.empty() ? nullptr : m_amount.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    currency = m_currency ? m_currency.operator->() : nullptr;
}

ValueToDateSegmentFilter::ValueToDateSegmentFilter(ValueToDateSegmentFilter&& src) :
    PlayFabAdminValueToDateSegmentFilter{ src },
    m_amount{ std::move(src.m_amount) },
    m_comparison{ std::move(src.m_comparison) },
    m_currency{ std::move(src.m_currency) }
{
    amount = m_amount.empty() ? nullptr : m_amount.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    currency = m_currency ? m_currency.operator->() : nullptr;
}

ValueToDateSegmentFilter::ValueToDateSegmentFilter(const PlayFabAdminValueToDateSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValueToDateSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", m_amount, amount);
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "Currency", m_currency, currency);
}

JsonValue ValueToDateSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminValueToDateSegmentFilter>(*this);
}

VirtualCurrencyBalanceSegmentFilter::VirtualCurrencyBalanceSegmentFilter() :
    PlayFabAdminVirtualCurrencyBalanceSegmentFilter{}
{
}

VirtualCurrencyBalanceSegmentFilter::VirtualCurrencyBalanceSegmentFilter(const VirtualCurrencyBalanceSegmentFilter& src) :
    PlayFabAdminVirtualCurrencyBalanceSegmentFilter{ src },
    m_comparison{ src.m_comparison },
    m_currencyCode{ src.m_currencyCode }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
}

VirtualCurrencyBalanceSegmentFilter::VirtualCurrencyBalanceSegmentFilter(VirtualCurrencyBalanceSegmentFilter&& src) :
    PlayFabAdminVirtualCurrencyBalanceSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) },
    m_currencyCode{ std::move(src.m_currencyCode) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
}

VirtualCurrencyBalanceSegmentFilter::VirtualCurrencyBalanceSegmentFilter(const PlayFabAdminVirtualCurrencyBalanceSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void VirtualCurrencyBalanceSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
}

JsonValue VirtualCurrencyBalanceSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminVirtualCurrencyBalanceSegmentFilter>(*this);
}

SegmentAndDefinition::SegmentAndDefinition() :
    PlayFabAdminSegmentAndDefinition{}
{
}

SegmentAndDefinition::SegmentAndDefinition(const SegmentAndDefinition& src) :
    PlayFabAdminSegmentAndDefinition{ src },
    m_adCampaignFilter{ src.m_adCampaignFilter },
    m_firstLoginDateFilter{ src.m_firstLoginDateFilter },
    m_firstLoginFilter{ src.m_firstLoginFilter },
    m_lastLoginDateFilter{ src.m_lastLoginDateFilter },
    m_lastLoginFilter{ src.m_lastLoginFilter },
    m_linkedUserAccountFilter{ src.m_linkedUserAccountFilter },
    m_linkedUserAccountHasEmailFilter{ src.m_linkedUserAccountHasEmailFilter },
    m_locationFilter{ src.m_locationFilter },
    m_pushNotificationFilter{ src.m_pushNotificationFilter },
    m_statisticFilter{ src.m_statisticFilter },
    m_tagFilter{ src.m_tagFilter },
    m_totalValueToDateInUSDFilter{ src.m_totalValueToDateInUSDFilter },
    m_userOriginationFilter{ src.m_userOriginationFilter },
    m_valueToDateFilter{ src.m_valueToDateFilter },
    m_virtualCurrencyBalanceFilter{ src.m_virtualCurrencyBalanceFilter }
{
    adCampaignFilter = m_adCampaignFilter ? m_adCampaignFilter.operator->() : nullptr;
    firstLoginDateFilter = m_firstLoginDateFilter ? m_firstLoginDateFilter.operator->() : nullptr;
    firstLoginFilter = m_firstLoginFilter ? m_firstLoginFilter.operator->() : nullptr;
    lastLoginDateFilter = m_lastLoginDateFilter ? m_lastLoginDateFilter.operator->() : nullptr;
    lastLoginFilter = m_lastLoginFilter ? m_lastLoginFilter.operator->() : nullptr;
    linkedUserAccountFilter = m_linkedUserAccountFilter ? m_linkedUserAccountFilter.operator->() : nullptr;
    linkedUserAccountHasEmailFilter = m_linkedUserAccountHasEmailFilter ? m_linkedUserAccountHasEmailFilter.operator->() : nullptr;
    locationFilter = m_locationFilter ? m_locationFilter.operator->() : nullptr;
    pushNotificationFilter = m_pushNotificationFilter ? m_pushNotificationFilter.operator->() : nullptr;
    statisticFilter = m_statisticFilter ? m_statisticFilter.operator->() : nullptr;
    tagFilter = m_tagFilter ? m_tagFilter.operator->() : nullptr;
    totalValueToDateInUSDFilter = m_totalValueToDateInUSDFilter ? m_totalValueToDateInUSDFilter.operator->() : nullptr;
    userOriginationFilter = m_userOriginationFilter ? m_userOriginationFilter.operator->() : nullptr;
    valueToDateFilter = m_valueToDateFilter ? m_valueToDateFilter.operator->() : nullptr;
    virtualCurrencyBalanceFilter = m_virtualCurrencyBalanceFilter ? m_virtualCurrencyBalanceFilter.operator->() : nullptr;
}

SegmentAndDefinition::SegmentAndDefinition(SegmentAndDefinition&& src) :
    PlayFabAdminSegmentAndDefinition{ src },
    m_adCampaignFilter{ std::move(src.m_adCampaignFilter) },
    m_firstLoginDateFilter{ std::move(src.m_firstLoginDateFilter) },
    m_firstLoginFilter{ std::move(src.m_firstLoginFilter) },
    m_lastLoginDateFilter{ std::move(src.m_lastLoginDateFilter) },
    m_lastLoginFilter{ std::move(src.m_lastLoginFilter) },
    m_linkedUserAccountFilter{ std::move(src.m_linkedUserAccountFilter) },
    m_linkedUserAccountHasEmailFilter{ std::move(src.m_linkedUserAccountHasEmailFilter) },
    m_locationFilter{ std::move(src.m_locationFilter) },
    m_pushNotificationFilter{ std::move(src.m_pushNotificationFilter) },
    m_statisticFilter{ std::move(src.m_statisticFilter) },
    m_tagFilter{ std::move(src.m_tagFilter) },
    m_totalValueToDateInUSDFilter{ std::move(src.m_totalValueToDateInUSDFilter) },
    m_userOriginationFilter{ std::move(src.m_userOriginationFilter) },
    m_valueToDateFilter{ std::move(src.m_valueToDateFilter) },
    m_virtualCurrencyBalanceFilter{ std::move(src.m_virtualCurrencyBalanceFilter) }
{
    adCampaignFilter = m_adCampaignFilter ? m_adCampaignFilter.operator->() : nullptr;
    firstLoginDateFilter = m_firstLoginDateFilter ? m_firstLoginDateFilter.operator->() : nullptr;
    firstLoginFilter = m_firstLoginFilter ? m_firstLoginFilter.operator->() : nullptr;
    lastLoginDateFilter = m_lastLoginDateFilter ? m_lastLoginDateFilter.operator->() : nullptr;
    lastLoginFilter = m_lastLoginFilter ? m_lastLoginFilter.operator->() : nullptr;
    linkedUserAccountFilter = m_linkedUserAccountFilter ? m_linkedUserAccountFilter.operator->() : nullptr;
    linkedUserAccountHasEmailFilter = m_linkedUserAccountHasEmailFilter ? m_linkedUserAccountHasEmailFilter.operator->() : nullptr;
    locationFilter = m_locationFilter ? m_locationFilter.operator->() : nullptr;
    pushNotificationFilter = m_pushNotificationFilter ? m_pushNotificationFilter.operator->() : nullptr;
    statisticFilter = m_statisticFilter ? m_statisticFilter.operator->() : nullptr;
    tagFilter = m_tagFilter ? m_tagFilter.operator->() : nullptr;
    totalValueToDateInUSDFilter = m_totalValueToDateInUSDFilter ? m_totalValueToDateInUSDFilter.operator->() : nullptr;
    userOriginationFilter = m_userOriginationFilter ? m_userOriginationFilter.operator->() : nullptr;
    valueToDateFilter = m_valueToDateFilter ? m_valueToDateFilter.operator->() : nullptr;
    virtualCurrencyBalanceFilter = m_virtualCurrencyBalanceFilter ? m_virtualCurrencyBalanceFilter.operator->() : nullptr;
}

SegmentAndDefinition::SegmentAndDefinition(const PlayFabAdminSegmentAndDefinition& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SegmentAndDefinition::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdCampaignFilter", m_adCampaignFilter, adCampaignFilter);
    JsonUtils::ObjectGetMember(input, "FirstLoginDateFilter", m_firstLoginDateFilter, firstLoginDateFilter);
    JsonUtils::ObjectGetMember(input, "FirstLoginFilter", m_firstLoginFilter, firstLoginFilter);
    JsonUtils::ObjectGetMember(input, "LastLoginDateFilter", m_lastLoginDateFilter, lastLoginDateFilter);
    JsonUtils::ObjectGetMember(input, "LastLoginFilter", m_lastLoginFilter, lastLoginFilter);
    JsonUtils::ObjectGetMember(input, "LinkedUserAccountFilter", m_linkedUserAccountFilter, linkedUserAccountFilter);
    JsonUtils::ObjectGetMember(input, "LinkedUserAccountHasEmailFilter", m_linkedUserAccountHasEmailFilter, linkedUserAccountHasEmailFilter);
    JsonUtils::ObjectGetMember(input, "LocationFilter", m_locationFilter, locationFilter);
    JsonUtils::ObjectGetMember(input, "PushNotificationFilter", m_pushNotificationFilter, pushNotificationFilter);
    JsonUtils::ObjectGetMember(input, "StatisticFilter", m_statisticFilter, statisticFilter);
    JsonUtils::ObjectGetMember(input, "TagFilter", m_tagFilter, tagFilter);
    JsonUtils::ObjectGetMember(input, "TotalValueToDateInUSDFilter", m_totalValueToDateInUSDFilter, totalValueToDateInUSDFilter);
    JsonUtils::ObjectGetMember(input, "UserOriginationFilter", m_userOriginationFilter, userOriginationFilter);
    JsonUtils::ObjectGetMember(input, "ValueToDateFilter", m_valueToDateFilter, valueToDateFilter);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyBalanceFilter", m_virtualCurrencyBalanceFilter, virtualCurrencyBalanceFilter);
}

JsonValue SegmentAndDefinition::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSegmentAndDefinition>(*this);
}

SegmentOrDefinition::SegmentOrDefinition() :
    PlayFabAdminSegmentOrDefinition{}
{
}

SegmentOrDefinition::SegmentOrDefinition(const SegmentOrDefinition& src) :
    PlayFabAdminSegmentOrDefinition{ src },
    m_segmentAndDefinitions{ src.m_segmentAndDefinitions }
{
    segmentAndDefinitions = m_segmentAndDefinitions.Empty() ? nullptr : m_segmentAndDefinitions.Data();
}

SegmentOrDefinition::SegmentOrDefinition(SegmentOrDefinition&& src) :
    PlayFabAdminSegmentOrDefinition{ src },
    m_segmentAndDefinitions{ std::move(src.m_segmentAndDefinitions) }
{
    segmentAndDefinitions = m_segmentAndDefinitions.Empty() ? nullptr : m_segmentAndDefinitions.Data();
}

SegmentOrDefinition::SegmentOrDefinition(const PlayFabAdminSegmentOrDefinition& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SegmentOrDefinition::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SegmentAndDefinitions", m_segmentAndDefinitions, segmentAndDefinitions, segmentAndDefinitionsCount);
}

JsonValue SegmentOrDefinition::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSegmentOrDefinition>(*this);
}

SegmentModel::SegmentModel() :
    PlayFabAdminSegmentModel{}
{
}

SegmentModel::SegmentModel(const SegmentModel& src) :
    PlayFabAdminSegmentModel{ src },
    m_description{ src.m_description },
    m_enteredSegmentActions{ src.m_enteredSegmentActions },
    m_leftSegmentActions{ src.m_leftSegmentActions },
    m_name{ src.m_name },
    m_segmentId{ src.m_segmentId },
    m_segmentOrDefinitions{ src.m_segmentOrDefinitions }
{
    description = m_description.empty() ? nullptr : m_description.data();
    enteredSegmentActions = m_enteredSegmentActions.Empty() ? nullptr : m_enteredSegmentActions.Data();
    leftSegmentActions = m_leftSegmentActions.Empty() ? nullptr : m_leftSegmentActions.Data();
    name = m_name.empty() ? nullptr : m_name.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
    segmentOrDefinitions = m_segmentOrDefinitions.Empty() ? nullptr : m_segmentOrDefinitions.Data();
}

SegmentModel::SegmentModel(SegmentModel&& src) :
    PlayFabAdminSegmentModel{ src },
    m_description{ std::move(src.m_description) },
    m_enteredSegmentActions{ std::move(src.m_enteredSegmentActions) },
    m_leftSegmentActions{ std::move(src.m_leftSegmentActions) },
    m_name{ std::move(src.m_name) },
    m_segmentId{ std::move(src.m_segmentId) },
    m_segmentOrDefinitions{ std::move(src.m_segmentOrDefinitions) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    enteredSegmentActions = m_enteredSegmentActions.Empty() ? nullptr : m_enteredSegmentActions.Data();
    leftSegmentActions = m_leftSegmentActions.Empty() ? nullptr : m_leftSegmentActions.Data();
    name = m_name.empty() ? nullptr : m_name.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
    segmentOrDefinitions = m_segmentOrDefinitions.Empty() ? nullptr : m_segmentOrDefinitions.Data();
}

SegmentModel::SegmentModel(const PlayFabAdminSegmentModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SegmentModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "EnteredSegmentActions", m_enteredSegmentActions, enteredSegmentActions, enteredSegmentActionsCount);
    JsonUtils::ObjectGetMember(input, "LastUpdateTime", lastUpdateTime, true);
    JsonUtils::ObjectGetMember(input, "LeftSegmentActions", m_leftSegmentActions, leftSegmentActions, leftSegmentActionsCount);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
    JsonUtils::ObjectGetMember(input, "SegmentOrDefinitions", m_segmentOrDefinitions, segmentOrDefinitions, segmentOrDefinitionsCount);
}

JsonValue SegmentModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSegmentModel>(*this);
}

CreateSegmentRequest::CreateSegmentRequest() :
    PlayFabAdminCreateSegmentRequest{}
{
}

CreateSegmentRequest::CreateSegmentRequest(const CreateSegmentRequest& src) :
    PlayFabAdminCreateSegmentRequest{ src },
    m_segmentModel{ src.m_segmentModel }
{
    segmentModel = (PlayFabAdminSegmentModel const*)&m_segmentModel;
}

CreateSegmentRequest::CreateSegmentRequest(CreateSegmentRequest&& src) :
    PlayFabAdminCreateSegmentRequest{ src },
    m_segmentModel{ std::move(src.m_segmentModel) }
{
    segmentModel = (PlayFabAdminSegmentModel const*)&m_segmentModel;
}

CreateSegmentRequest::CreateSegmentRequest(const PlayFabAdminCreateSegmentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateSegmentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SegmentModel", m_segmentModel, segmentModel);
}

JsonValue CreateSegmentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCreateSegmentRequest>(*this);
}

CreateSegmentResponse::CreateSegmentResponse() :
    PlayFabAdminCreateSegmentResponse{}
{
}

CreateSegmentResponse::CreateSegmentResponse(const CreateSegmentResponse& src) :
    PlayFabAdminCreateSegmentResponse{ src },
    m_errorMessage{ src.m_errorMessage },
    m_segmentId{ src.m_segmentId }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

CreateSegmentResponse::CreateSegmentResponse(CreateSegmentResponse&& src) :
    PlayFabAdminCreateSegmentResponse{ src },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_segmentId{ std::move(src.m_segmentId) }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

CreateSegmentResponse::CreateSegmentResponse(const PlayFabAdminCreateSegmentResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateSegmentResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
}

JsonValue CreateSegmentResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCreateSegmentResponse>(*this);
}

size_t CreateSegmentResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminCreateSegmentResponse) };
    serializedSize += (m_errorMessage.size() + 1);
    serializedSize += (m_segmentId.size() + 1);
    return serializedSize;
}

void CreateSegmentResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminCreateSegmentResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminCreateSegmentResponse);
    memcpy(stringBuffer, m_errorMessage.data(), m_errorMessage.size() + 1);
    serializedStruct->errorMessage = stringBuffer;
    stringBuffer += m_errorMessage.size() + 1;
    memcpy(stringBuffer, m_segmentId.data(), m_segmentId.size() + 1);
    serializedStruct->segmentId = stringBuffer;
    stringBuffer += m_segmentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateTaskResult::CreateTaskResult() :
    PlayFabAdminCreateTaskResult{}
{
}

CreateTaskResult::CreateTaskResult(const CreateTaskResult& src) :
    PlayFabAdminCreateTaskResult{ src },
    m_taskId{ src.m_taskId }
{
    taskId = m_taskId.empty() ? nullptr : m_taskId.data();
}

CreateTaskResult::CreateTaskResult(CreateTaskResult&& src) :
    PlayFabAdminCreateTaskResult{ src },
    m_taskId{ std::move(src.m_taskId) }
{
    taskId = m_taskId.empty() ? nullptr : m_taskId.data();
}

CreateTaskResult::CreateTaskResult(const PlayFabAdminCreateTaskResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateTaskResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TaskId", m_taskId, taskId);
}

JsonValue CreateTaskResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminCreateTaskResult>(*this);
}

size_t CreateTaskResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminCreateTaskResult) };
    serializedSize += (m_taskId.size() + 1);
    return serializedSize;
}

void CreateTaskResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminCreateTaskResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminCreateTaskResult);
    memcpy(stringBuffer, m_taskId.data(), m_taskId.size() + 1);
    serializedStruct->taskId = stringBuffer;
    stringBuffer += m_taskId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteContentRequest::DeleteContentRequest() :
    PlayFabAdminDeleteContentRequest{}
{
}

DeleteContentRequest::DeleteContentRequest(const DeleteContentRequest& src) :
    PlayFabAdminDeleteContentRequest{ src },
    m_key{ src.m_key }
{
    key = m_key.empty() ? nullptr : m_key.data();
}

DeleteContentRequest::DeleteContentRequest(DeleteContentRequest&& src) :
    PlayFabAdminDeleteContentRequest{ src },
    m_key{ std::move(src.m_key) }
{
    key = m_key.empty() ? nullptr : m_key.data();
}

DeleteContentRequest::DeleteContentRequest(const PlayFabAdminDeleteContentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteContentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
}

JsonValue DeleteContentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeleteContentRequest>(*this);
}

size_t DeleteContentRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminDeleteContentRequest) };
    serializedSize += (m_key.size() + 1);
    return serializedSize;
}

void DeleteContentRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminDeleteContentRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminDeleteContentRequest);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteMasterPlayerAccountRequest::DeleteMasterPlayerAccountRequest() :
    PlayFabAdminDeleteMasterPlayerAccountRequest{}
{
}

DeleteMasterPlayerAccountRequest::DeleteMasterPlayerAccountRequest(const DeleteMasterPlayerAccountRequest& src) :
    PlayFabAdminDeleteMasterPlayerAccountRequest{ src },
    m_metaData{ src.m_metaData },
    m_playFabId{ src.m_playFabId }
{
    metaData = m_metaData.empty() ? nullptr : m_metaData.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeleteMasterPlayerAccountRequest::DeleteMasterPlayerAccountRequest(DeleteMasterPlayerAccountRequest&& src) :
    PlayFabAdminDeleteMasterPlayerAccountRequest{ src },
    m_metaData{ std::move(src.m_metaData) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    metaData = m_metaData.empty() ? nullptr : m_metaData.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeleteMasterPlayerAccountRequest::DeleteMasterPlayerAccountRequest(const PlayFabAdminDeleteMasterPlayerAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteMasterPlayerAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "MetaData", m_metaData, metaData);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue DeleteMasterPlayerAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeleteMasterPlayerAccountRequest>(*this);
}

size_t DeleteMasterPlayerAccountRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminDeleteMasterPlayerAccountRequest) };
    serializedSize += (m_metaData.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void DeleteMasterPlayerAccountRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminDeleteMasterPlayerAccountRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminDeleteMasterPlayerAccountRequest);
    memcpy(stringBuffer, m_metaData.data(), m_metaData.size() + 1);
    serializedStruct->metaData = stringBuffer;
    stringBuffer += m_metaData.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteMasterPlayerAccountResult::DeleteMasterPlayerAccountResult() :
    PlayFabAdminDeleteMasterPlayerAccountResult{}
{
}

DeleteMasterPlayerAccountResult::DeleteMasterPlayerAccountResult(const DeleteMasterPlayerAccountResult& src) :
    PlayFabAdminDeleteMasterPlayerAccountResult{ src },
    m_jobReceiptId{ src.m_jobReceiptId },
    m_titleIds{ src.m_titleIds }
{
    jobReceiptId = m_jobReceiptId.empty() ? nullptr : m_jobReceiptId.data();
    titleIds = m_titleIds.Empty() ? nullptr : m_titleIds.Data();
}

DeleteMasterPlayerAccountResult::DeleteMasterPlayerAccountResult(DeleteMasterPlayerAccountResult&& src) :
    PlayFabAdminDeleteMasterPlayerAccountResult{ src },
    m_jobReceiptId{ std::move(src.m_jobReceiptId) },
    m_titleIds{ std::move(src.m_titleIds) }
{
    jobReceiptId = m_jobReceiptId.empty() ? nullptr : m_jobReceiptId.data();
    titleIds = m_titleIds.Empty() ? nullptr : m_titleIds.Data();
}

DeleteMasterPlayerAccountResult::DeleteMasterPlayerAccountResult(const PlayFabAdminDeleteMasterPlayerAccountResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteMasterPlayerAccountResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "JobReceiptId", m_jobReceiptId, jobReceiptId);
    JsonUtils::ObjectGetMember(input, "TitleIds", m_titleIds, titleIds, titleIdsCount);
}

JsonValue DeleteMasterPlayerAccountResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeleteMasterPlayerAccountResult>(*this);
}

DeleteOpenIdConnectionRequest::DeleteOpenIdConnectionRequest() :
    PlayFabAdminDeleteOpenIdConnectionRequest{}
{
}

DeleteOpenIdConnectionRequest::DeleteOpenIdConnectionRequest(const DeleteOpenIdConnectionRequest& src) :
    PlayFabAdminDeleteOpenIdConnectionRequest{ src },
    m_connectionId{ src.m_connectionId }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
}

DeleteOpenIdConnectionRequest::DeleteOpenIdConnectionRequest(DeleteOpenIdConnectionRequest&& src) :
    PlayFabAdminDeleteOpenIdConnectionRequest{ src },
    m_connectionId{ std::move(src.m_connectionId) }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
}

DeleteOpenIdConnectionRequest::DeleteOpenIdConnectionRequest(const PlayFabAdminDeleteOpenIdConnectionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteOpenIdConnectionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
}

JsonValue DeleteOpenIdConnectionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeleteOpenIdConnectionRequest>(*this);
}

size_t DeleteOpenIdConnectionRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminDeleteOpenIdConnectionRequest) };
    serializedSize += (m_connectionId.size() + 1);
    return serializedSize;
}

void DeleteOpenIdConnectionRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminDeleteOpenIdConnectionRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminDeleteOpenIdConnectionRequest);
    memcpy(stringBuffer, m_connectionId.data(), m_connectionId.size() + 1);
    serializedStruct->connectionId = stringBuffer;
    stringBuffer += m_connectionId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeletePlayerRequest::DeletePlayerRequest() :
    PlayFabAdminDeletePlayerRequest{}
{
}

DeletePlayerRequest::DeletePlayerRequest(const DeletePlayerRequest& src) :
    PlayFabAdminDeletePlayerRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeletePlayerRequest::DeletePlayerRequest(DeletePlayerRequest&& src) :
    PlayFabAdminDeletePlayerRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeletePlayerRequest::DeletePlayerRequest(const PlayFabAdminDeletePlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeletePlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue DeletePlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeletePlayerRequest>(*this);
}

size_t DeletePlayerRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminDeletePlayerRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void DeletePlayerRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminDeletePlayerRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminDeletePlayerRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeletePlayerSharedSecretRequest::DeletePlayerSharedSecretRequest() :
    PlayFabAdminDeletePlayerSharedSecretRequest{}
{
}

DeletePlayerSharedSecretRequest::DeletePlayerSharedSecretRequest(const DeletePlayerSharedSecretRequest& src) :
    PlayFabAdminDeletePlayerSharedSecretRequest{ src },
    m_secretKey{ src.m_secretKey }
{
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

DeletePlayerSharedSecretRequest::DeletePlayerSharedSecretRequest(DeletePlayerSharedSecretRequest&& src) :
    PlayFabAdminDeletePlayerSharedSecretRequest{ src },
    m_secretKey{ std::move(src.m_secretKey) }
{
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

DeletePlayerSharedSecretRequest::DeletePlayerSharedSecretRequest(const PlayFabAdminDeletePlayerSharedSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeletePlayerSharedSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
}

JsonValue DeletePlayerSharedSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeletePlayerSharedSecretRequest>(*this);
}

size_t DeletePlayerSharedSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminDeletePlayerSharedSecretRequest) };
    serializedSize += (m_secretKey.size() + 1);
    return serializedSize;
}

void DeletePlayerSharedSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminDeletePlayerSharedSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminDeletePlayerSharedSecretRequest);
    memcpy(stringBuffer, m_secretKey.data(), m_secretKey.size() + 1);
    serializedStruct->secretKey = stringBuffer;
    stringBuffer += m_secretKey.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteSegmentRequest::DeleteSegmentRequest() :
    PlayFabAdminDeleteSegmentRequest{}
{
}

DeleteSegmentRequest::DeleteSegmentRequest(const DeleteSegmentRequest& src) :
    PlayFabAdminDeleteSegmentRequest{ src },
    m_segmentId{ src.m_segmentId }
{
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

DeleteSegmentRequest::DeleteSegmentRequest(DeleteSegmentRequest&& src) :
    PlayFabAdminDeleteSegmentRequest{ src },
    m_segmentId{ std::move(src.m_segmentId) }
{
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

DeleteSegmentRequest::DeleteSegmentRequest(const PlayFabAdminDeleteSegmentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteSegmentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
}

JsonValue DeleteSegmentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeleteSegmentRequest>(*this);
}

size_t DeleteSegmentRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminDeleteSegmentRequest) };
    serializedSize += (m_segmentId.size() + 1);
    return serializedSize;
}

void DeleteSegmentRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminDeleteSegmentRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminDeleteSegmentRequest);
    memcpy(stringBuffer, m_segmentId.data(), m_segmentId.size() + 1);
    serializedStruct->segmentId = stringBuffer;
    stringBuffer += m_segmentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteSegmentsResponse::DeleteSegmentsResponse() :
    PlayFabAdminDeleteSegmentsResponse{}
{
}

DeleteSegmentsResponse::DeleteSegmentsResponse(const DeleteSegmentsResponse& src) :
    PlayFabAdminDeleteSegmentsResponse{ src },
    m_errorMessage{ src.m_errorMessage }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
}

DeleteSegmentsResponse::DeleteSegmentsResponse(DeleteSegmentsResponse&& src) :
    PlayFabAdminDeleteSegmentsResponse{ src },
    m_errorMessage{ std::move(src.m_errorMessage) }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
}

DeleteSegmentsResponse::DeleteSegmentsResponse(const PlayFabAdminDeleteSegmentsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteSegmentsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
}

JsonValue DeleteSegmentsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeleteSegmentsResponse>(*this);
}

size_t DeleteSegmentsResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminDeleteSegmentsResponse) };
    serializedSize += (m_errorMessage.size() + 1);
    return serializedSize;
}

void DeleteSegmentsResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminDeleteSegmentsResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminDeleteSegmentsResponse);
    memcpy(stringBuffer, m_errorMessage.data(), m_errorMessage.size() + 1);
    serializedStruct->errorMessage = stringBuffer;
    stringBuffer += m_errorMessage.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteStoreRequest::DeleteStoreRequest() :
    PlayFabAdminDeleteStoreRequest{}
{
}

DeleteStoreRequest::DeleteStoreRequest(const DeleteStoreRequest& src) :
    PlayFabAdminDeleteStoreRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

DeleteStoreRequest::DeleteStoreRequest(DeleteStoreRequest&& src) :
    PlayFabAdminDeleteStoreRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

DeleteStoreRequest::DeleteStoreRequest(const PlayFabAdminDeleteStoreRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteStoreRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue DeleteStoreRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeleteStoreRequest>(*this);
}

DeleteTaskRequest::DeleteTaskRequest() :
    PlayFabAdminDeleteTaskRequest{}
{
}

DeleteTaskRequest::DeleteTaskRequest(const DeleteTaskRequest& src) :
    PlayFabAdminDeleteTaskRequest{ src },
    m_identifier{ src.m_identifier }
{
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

DeleteTaskRequest::DeleteTaskRequest(DeleteTaskRequest&& src) :
    PlayFabAdminDeleteTaskRequest{ src },
    m_identifier{ std::move(src.m_identifier) }
{
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

DeleteTaskRequest::DeleteTaskRequest(const PlayFabAdminDeleteTaskRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteTaskRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Identifier", m_identifier, identifier);
}

JsonValue DeleteTaskRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeleteTaskRequest>(*this);
}

DeleteTitleDataOverrideRequest::DeleteTitleDataOverrideRequest() :
    PlayFabAdminDeleteTitleDataOverrideRequest{}
{
}

DeleteTitleDataOverrideRequest::DeleteTitleDataOverrideRequest(const DeleteTitleDataOverrideRequest& src) :
    PlayFabAdminDeleteTitleDataOverrideRequest{ src },
    m_overrideLabel{ src.m_overrideLabel }
{
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

DeleteTitleDataOverrideRequest::DeleteTitleDataOverrideRequest(DeleteTitleDataOverrideRequest&& src) :
    PlayFabAdminDeleteTitleDataOverrideRequest{ src },
    m_overrideLabel{ std::move(src.m_overrideLabel) }
{
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

DeleteTitleDataOverrideRequest::DeleteTitleDataOverrideRequest(const PlayFabAdminDeleteTitleDataOverrideRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteTitleDataOverrideRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
}

JsonValue DeleteTitleDataOverrideRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminDeleteTitleDataOverrideRequest>(*this);
}

size_t DeleteTitleDataOverrideRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminDeleteTitleDataOverrideRequest) };
    serializedSize += (m_overrideLabel.size() + 1);
    return serializedSize;
}

void DeleteTitleDataOverrideRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminDeleteTitleDataOverrideRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminDeleteTitleDataOverrideRequest);
    memcpy(stringBuffer, m_overrideLabel.data(), m_overrideLabel.size() + 1);
    serializedStruct->overrideLabel = stringBuffer;
    stringBuffer += m_overrideLabel.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ExportMasterPlayerDataRequest::ExportMasterPlayerDataRequest() :
    PlayFabAdminExportMasterPlayerDataRequest{}
{
}

ExportMasterPlayerDataRequest::ExportMasterPlayerDataRequest(const ExportMasterPlayerDataRequest& src) :
    PlayFabAdminExportMasterPlayerDataRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ExportMasterPlayerDataRequest::ExportMasterPlayerDataRequest(ExportMasterPlayerDataRequest&& src) :
    PlayFabAdminExportMasterPlayerDataRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ExportMasterPlayerDataRequest::ExportMasterPlayerDataRequest(const PlayFabAdminExportMasterPlayerDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExportMasterPlayerDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ExportMasterPlayerDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminExportMasterPlayerDataRequest>(*this);
}

size_t ExportMasterPlayerDataRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminExportMasterPlayerDataRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void ExportMasterPlayerDataRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminExportMasterPlayerDataRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminExportMasterPlayerDataRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ExportMasterPlayerDataResult::ExportMasterPlayerDataResult() :
    PlayFabAdminExportMasterPlayerDataResult{}
{
}

ExportMasterPlayerDataResult::ExportMasterPlayerDataResult(const ExportMasterPlayerDataResult& src) :
    PlayFabAdminExportMasterPlayerDataResult{ src },
    m_jobReceiptId{ src.m_jobReceiptId }
{
    jobReceiptId = m_jobReceiptId.empty() ? nullptr : m_jobReceiptId.data();
}

ExportMasterPlayerDataResult::ExportMasterPlayerDataResult(ExportMasterPlayerDataResult&& src) :
    PlayFabAdminExportMasterPlayerDataResult{ src },
    m_jobReceiptId{ std::move(src.m_jobReceiptId) }
{
    jobReceiptId = m_jobReceiptId.empty() ? nullptr : m_jobReceiptId.data();
}

ExportMasterPlayerDataResult::ExportMasterPlayerDataResult(const PlayFabAdminExportMasterPlayerDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExportMasterPlayerDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "JobReceiptId", m_jobReceiptId, jobReceiptId);
}

JsonValue ExportMasterPlayerDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminExportMasterPlayerDataResult>(*this);
}

size_t ExportMasterPlayerDataResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminExportMasterPlayerDataResult) };
    serializedSize += (m_jobReceiptId.size() + 1);
    return serializedSize;
}

void ExportMasterPlayerDataResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminExportMasterPlayerDataResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminExportMasterPlayerDataResult);
    memcpy(stringBuffer, m_jobReceiptId.data(), m_jobReceiptId.size() + 1);
    serializedStruct->jobReceiptId = stringBuffer;
    stringBuffer += m_jobReceiptId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GameModeInfo::GameModeInfo() :
    PlayFabAdminGameModeInfo{}
{
}

GameModeInfo::GameModeInfo(const GameModeInfo& src) :
    PlayFabAdminGameModeInfo{ src },
    m_gamemode{ src.m_gamemode },
    m_startOpen{ src.m_startOpen }
{
    gamemode = m_gamemode.empty() ? nullptr : m_gamemode.data();
    startOpen = m_startOpen ? m_startOpen.operator->() : nullptr;
}

GameModeInfo::GameModeInfo(GameModeInfo&& src) :
    PlayFabAdminGameModeInfo{ src },
    m_gamemode{ std::move(src.m_gamemode) },
    m_startOpen{ std::move(src.m_startOpen) }
{
    gamemode = m_gamemode.empty() ? nullptr : m_gamemode.data();
    startOpen = m_startOpen ? m_startOpen.operator->() : nullptr;
}

GameModeInfo::GameModeInfo(const PlayFabAdminGameModeInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GameModeInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Gamemode", m_gamemode, gamemode);
    JsonUtils::ObjectGetMember(input, "MaxPlayerCount", maxPlayerCount);
    JsonUtils::ObjectGetMember(input, "MinPlayerCount", minPlayerCount);
    JsonUtils::ObjectGetMember(input, "StartOpen", m_startOpen, startOpen);
}

JsonValue GameModeInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGameModeInfo>(*this);
}

GetActionsOnPlayersInSegmentTaskInstanceResult::GetActionsOnPlayersInSegmentTaskInstanceResult() :
    PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult{}
{
}

GetActionsOnPlayersInSegmentTaskInstanceResult::GetActionsOnPlayersInSegmentTaskInstanceResult(const GetActionsOnPlayersInSegmentTaskInstanceResult& src) :
    PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult{ src },
    m_parameter{ src.m_parameter },
    m_summary{ src.m_summary }
{
    parameter = m_parameter ? m_parameter.operator->() : nullptr;
    summary = m_summary ? m_summary.operator->() : nullptr;
}

GetActionsOnPlayersInSegmentTaskInstanceResult::GetActionsOnPlayersInSegmentTaskInstanceResult(GetActionsOnPlayersInSegmentTaskInstanceResult&& src) :
    PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult{ src },
    m_parameter{ std::move(src.m_parameter) },
    m_summary{ std::move(src.m_summary) }
{
    parameter = m_parameter ? m_parameter.operator->() : nullptr;
    summary = m_summary ? m_summary.operator->() : nullptr;
}

GetActionsOnPlayersInSegmentTaskInstanceResult::GetActionsOnPlayersInSegmentTaskInstanceResult(const PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult& src)
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
    return JsonUtils::ToJson<PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult>(*this);
}

GetSegmentResult::GetSegmentResult() :
    PlayFabAdminGetSegmentResult{}
{
}

GetSegmentResult::GetSegmentResult(const GetSegmentResult& src) :
    PlayFabAdminGetSegmentResult{ src },
    m_aBTestParent{ src.m_aBTestParent },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    aBTestParent = m_aBTestParent.empty() ? nullptr : m_aBTestParent.data();
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GetSegmentResult::GetSegmentResult(GetSegmentResult&& src) :
    PlayFabAdminGetSegmentResult{ src },
    m_aBTestParent{ std::move(src.m_aBTestParent) },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    aBTestParent = m_aBTestParent.empty() ? nullptr : m_aBTestParent.data();
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GetSegmentResult::GetSegmentResult(const PlayFabAdminGetSegmentResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSegmentResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ABTestParent", m_aBTestParent, aBTestParent);
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue GetSegmentResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetSegmentResult>(*this);
}

size_t GetSegmentResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetSegmentResult) };
    serializedSize += (m_aBTestParent.size() + 1);
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void GetSegmentResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetSegmentResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetSegmentResult);
    memcpy(stringBuffer, m_aBTestParent.data(), m_aBTestParent.size() + 1);
    serializedStruct->aBTestParent = stringBuffer;
    stringBuffer += m_aBTestParent.size() + 1;
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetAllSegmentsResult::GetAllSegmentsResult() :
    PlayFabAdminGetAllSegmentsResult{}
{
}

GetAllSegmentsResult::GetAllSegmentsResult(const GetAllSegmentsResult& src) :
    PlayFabAdminGetAllSegmentsResult{ src },
    m_segments{ src.m_segments }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetAllSegmentsResult::GetAllSegmentsResult(GetAllSegmentsResult&& src) :
    PlayFabAdminGetAllSegmentsResult{ src },
    m_segments{ std::move(src.m_segments) }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetAllSegmentsResult::GetAllSegmentsResult(const PlayFabAdminGetAllSegmentsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAllSegmentsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
}

JsonValue GetAllSegmentsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetAllSegmentsResult>(*this);
}

GetCatalogItemsRequest::GetCatalogItemsRequest() :
    PlayFabAdminGetCatalogItemsRequest{}
{
}

GetCatalogItemsRequest::GetCatalogItemsRequest(const GetCatalogItemsRequest& src) :
    PlayFabAdminGetCatalogItemsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetCatalogItemsRequest::GetCatalogItemsRequest(GetCatalogItemsRequest&& src) :
    PlayFabAdminGetCatalogItemsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetCatalogItemsRequest::GetCatalogItemsRequest(const PlayFabAdminGetCatalogItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCatalogItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
}

JsonValue GetCatalogItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetCatalogItemsRequest>(*this);
}

size_t GetCatalogItemsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetCatalogItemsRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    return serializedSize;
}

void GetCatalogItemsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetCatalogItemsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetCatalogItemsRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetCatalogItemsResult::GetCatalogItemsResult() :
    PlayFabAdminGetCatalogItemsResult{}
{
}

GetCatalogItemsResult::GetCatalogItemsResult(const GetCatalogItemsResult& src) :
    PlayFabAdminGetCatalogItemsResult{ src },
    m_catalog{ src.m_catalog }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
}

GetCatalogItemsResult::GetCatalogItemsResult(GetCatalogItemsResult&& src) :
    PlayFabAdminGetCatalogItemsResult{ src },
    m_catalog{ std::move(src.m_catalog) }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
}

GetCatalogItemsResult::GetCatalogItemsResult(const PlayFabAdminGetCatalogItemsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCatalogItemsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Catalog", m_catalog, catalog, catalogCount);
}

JsonValue GetCatalogItemsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetCatalogItemsResult>(*this);
}

GetCloudScriptRevisionRequest::GetCloudScriptRevisionRequest() :
    PlayFabAdminGetCloudScriptRevisionRequest{}
{
}

GetCloudScriptRevisionRequest::GetCloudScriptRevisionRequest(const GetCloudScriptRevisionRequest& src) :
    PlayFabAdminGetCloudScriptRevisionRequest{ src },
    m_revision{ src.m_revision },
    m_version{ src.m_version }
{
    revision = m_revision ? m_revision.operator->() : nullptr;
    version = m_version ? m_version.operator->() : nullptr;
}

GetCloudScriptRevisionRequest::GetCloudScriptRevisionRequest(GetCloudScriptRevisionRequest&& src) :
    PlayFabAdminGetCloudScriptRevisionRequest{ src },
    m_revision{ std::move(src.m_revision) },
    m_version{ std::move(src.m_version) }
{
    revision = m_revision ? m_revision.operator->() : nullptr;
    version = m_version ? m_version.operator->() : nullptr;
}

GetCloudScriptRevisionRequest::GetCloudScriptRevisionRequest(const PlayFabAdminGetCloudScriptRevisionRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminGetCloudScriptRevisionRequest>(*this);
}

GetCloudScriptRevisionResult::GetCloudScriptRevisionResult() :
    PlayFabAdminGetCloudScriptRevisionResult{}
{
}

GetCloudScriptRevisionResult::GetCloudScriptRevisionResult(const GetCloudScriptRevisionResult& src) :
    PlayFabAdminGetCloudScriptRevisionResult{ src },
    m_files{ src.m_files }
{
    files = m_files.Empty() ? nullptr : m_files.Data();
}

GetCloudScriptRevisionResult::GetCloudScriptRevisionResult(GetCloudScriptRevisionResult&& src) :
    PlayFabAdminGetCloudScriptRevisionResult{ src },
    m_files{ std::move(src.m_files) }
{
    files = m_files.Empty() ? nullptr : m_files.Data();
}

GetCloudScriptRevisionResult::GetCloudScriptRevisionResult(const PlayFabAdminGetCloudScriptRevisionResult& src)
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
    return JsonUtils::ToJson<PlayFabAdminGetCloudScriptRevisionResult>(*this);
}

GetCloudScriptTaskInstanceResult::GetCloudScriptTaskInstanceResult() :
    PlayFabAdminGetCloudScriptTaskInstanceResult{}
{
}

GetCloudScriptTaskInstanceResult::GetCloudScriptTaskInstanceResult(const GetCloudScriptTaskInstanceResult& src) :
    PlayFabAdminGetCloudScriptTaskInstanceResult{ src },
    m_parameter{ src.m_parameter },
    m_summary{ src.m_summary }
{
    parameter = m_parameter ? m_parameter.operator->() : nullptr;
    summary = m_summary ? m_summary.operator->() : nullptr;
}

GetCloudScriptTaskInstanceResult::GetCloudScriptTaskInstanceResult(GetCloudScriptTaskInstanceResult&& src) :
    PlayFabAdminGetCloudScriptTaskInstanceResult{ src },
    m_parameter{ std::move(src.m_parameter) },
    m_summary{ std::move(src.m_summary) }
{
    parameter = m_parameter ? m_parameter.operator->() : nullptr;
    summary = m_summary ? m_summary.operator->() : nullptr;
}

GetCloudScriptTaskInstanceResult::GetCloudScriptTaskInstanceResult(const PlayFabAdminGetCloudScriptTaskInstanceResult& src)
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
    return JsonUtils::ToJson<PlayFabAdminGetCloudScriptTaskInstanceResult>(*this);
}

GetCloudScriptVersionsResult::GetCloudScriptVersionsResult() :
    PlayFabAdminGetCloudScriptVersionsResult{}
{
}

GetCloudScriptVersionsResult::GetCloudScriptVersionsResult(const GetCloudScriptVersionsResult& src) :
    PlayFabAdminGetCloudScriptVersionsResult{ src },
    m_versions{ src.m_versions }
{
    versions = m_versions.Empty() ? nullptr : m_versions.Data();
}

GetCloudScriptVersionsResult::GetCloudScriptVersionsResult(GetCloudScriptVersionsResult&& src) :
    PlayFabAdminGetCloudScriptVersionsResult{ src },
    m_versions{ std::move(src.m_versions) }
{
    versions = m_versions.Empty() ? nullptr : m_versions.Data();
}

GetCloudScriptVersionsResult::GetCloudScriptVersionsResult(const PlayFabAdminGetCloudScriptVersionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCloudScriptVersionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Versions", m_versions, versions, versionsCount);
}

JsonValue GetCloudScriptVersionsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetCloudScriptVersionsResult>(*this);
}

GetContentListRequest::GetContentListRequest() :
    PlayFabAdminGetContentListRequest{}
{
}

GetContentListRequest::GetContentListRequest(const GetContentListRequest& src) :
    PlayFabAdminGetContentListRequest{ src },
    m_prefix{ src.m_prefix }
{
    prefix = m_prefix.empty() ? nullptr : m_prefix.data();
}

GetContentListRequest::GetContentListRequest(GetContentListRequest&& src) :
    PlayFabAdminGetContentListRequest{ src },
    m_prefix{ std::move(src.m_prefix) }
{
    prefix = m_prefix.empty() ? nullptr : m_prefix.data();
}

GetContentListRequest::GetContentListRequest(const PlayFabAdminGetContentListRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentListRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Prefix", m_prefix, prefix);
}

JsonValue GetContentListRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetContentListRequest>(*this);
}

size_t GetContentListRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetContentListRequest) };
    serializedSize += (m_prefix.size() + 1);
    return serializedSize;
}

void GetContentListRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetContentListRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetContentListRequest);
    memcpy(stringBuffer, m_prefix.data(), m_prefix.size() + 1);
    serializedStruct->prefix = stringBuffer;
    stringBuffer += m_prefix.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetContentListResult::GetContentListResult() :
    PlayFabAdminGetContentListResult{}
{
}

GetContentListResult::GetContentListResult(const GetContentListResult& src) :
    PlayFabAdminGetContentListResult{ src },
    m_contents{ src.m_contents }
{
    contents = m_contents.Empty() ? nullptr : m_contents.Data();
}

GetContentListResult::GetContentListResult(GetContentListResult&& src) :
    PlayFabAdminGetContentListResult{ src },
    m_contents{ std::move(src.m_contents) }
{
    contents = m_contents.Empty() ? nullptr : m_contents.Data();
}

GetContentListResult::GetContentListResult(const PlayFabAdminGetContentListResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentListResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Contents", m_contents, contents, contentsCount);
    JsonUtils::ObjectGetMember(input, "ItemCount", itemCount);
    JsonUtils::ObjectGetMember(input, "TotalSize", totalSize);
}

JsonValue GetContentListResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetContentListResult>(*this);
}

GetContentUploadUrlRequest::GetContentUploadUrlRequest() :
    PlayFabAdminGetContentUploadUrlRequest{}
{
}

GetContentUploadUrlRequest::GetContentUploadUrlRequest(const GetContentUploadUrlRequest& src) :
    PlayFabAdminGetContentUploadUrlRequest{ src },
    m_contentType{ src.m_contentType },
    m_key{ src.m_key }
{
    contentType = m_contentType.empty() ? nullptr : m_contentType.data();
    key = m_key.empty() ? nullptr : m_key.data();
}

GetContentUploadUrlRequest::GetContentUploadUrlRequest(GetContentUploadUrlRequest&& src) :
    PlayFabAdminGetContentUploadUrlRequest{ src },
    m_contentType{ std::move(src.m_contentType) },
    m_key{ std::move(src.m_key) }
{
    contentType = m_contentType.empty() ? nullptr : m_contentType.data();
    key = m_key.empty() ? nullptr : m_key.data();
}

GetContentUploadUrlRequest::GetContentUploadUrlRequest(const PlayFabAdminGetContentUploadUrlRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentUploadUrlRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ContentType", m_contentType, contentType);
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
}

JsonValue GetContentUploadUrlRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetContentUploadUrlRequest>(*this);
}

size_t GetContentUploadUrlRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetContentUploadUrlRequest) };
    serializedSize += (m_contentType.size() + 1);
    serializedSize += (m_key.size() + 1);
    return serializedSize;
}

void GetContentUploadUrlRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetContentUploadUrlRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetContentUploadUrlRequest);
    memcpy(stringBuffer, m_contentType.data(), m_contentType.size() + 1);
    serializedStruct->contentType = stringBuffer;
    stringBuffer += m_contentType.size() + 1;
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetContentUploadUrlResult::GetContentUploadUrlResult() :
    PlayFabAdminGetContentUploadUrlResult{}
{
}

GetContentUploadUrlResult::GetContentUploadUrlResult(const GetContentUploadUrlResult& src) :
    PlayFabAdminGetContentUploadUrlResult{ src },
    m_uRL{ src.m_uRL }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetContentUploadUrlResult::GetContentUploadUrlResult(GetContentUploadUrlResult&& src) :
    PlayFabAdminGetContentUploadUrlResult{ src },
    m_uRL{ std::move(src.m_uRL) }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetContentUploadUrlResult::GetContentUploadUrlResult(const PlayFabAdminGetContentUploadUrlResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentUploadUrlResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "URL", m_uRL, uRL);
}

JsonValue GetContentUploadUrlResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetContentUploadUrlResult>(*this);
}

size_t GetContentUploadUrlResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetContentUploadUrlResult) };
    serializedSize += (m_uRL.size() + 1);
    return serializedSize;
}

void GetContentUploadUrlResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetContentUploadUrlResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetContentUploadUrlResult);
    memcpy(stringBuffer, m_uRL.data(), m_uRL.size() + 1);
    serializedStruct->uRL = stringBuffer;
    stringBuffer += m_uRL.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetDataReportRequest::GetDataReportRequest() :
    PlayFabAdminGetDataReportRequest{}
{
}

GetDataReportRequest::GetDataReportRequest(const GetDataReportRequest& src) :
    PlayFabAdminGetDataReportRequest{ src },
    m_reportName{ src.m_reportName }
{
    reportName = m_reportName.empty() ? nullptr : m_reportName.data();
}

GetDataReportRequest::GetDataReportRequest(GetDataReportRequest&& src) :
    PlayFabAdminGetDataReportRequest{ src },
    m_reportName{ std::move(src.m_reportName) }
{
    reportName = m_reportName.empty() ? nullptr : m_reportName.data();
}

GetDataReportRequest::GetDataReportRequest(const PlayFabAdminGetDataReportRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetDataReportRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Day", day);
    JsonUtils::ObjectGetMember(input, "Month", month);
    JsonUtils::ObjectGetMember(input, "ReportName", m_reportName, reportName);
    JsonUtils::ObjectGetMember(input, "Year", year);
}

JsonValue GetDataReportRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetDataReportRequest>(*this);
}

size_t GetDataReportRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetDataReportRequest) };
    serializedSize += (m_reportName.size() + 1);
    return serializedSize;
}

void GetDataReportRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetDataReportRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetDataReportRequest);
    memcpy(stringBuffer, m_reportName.data(), m_reportName.size() + 1);
    serializedStruct->reportName = stringBuffer;
    stringBuffer += m_reportName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetDataReportResult::GetDataReportResult() :
    PlayFabAdminGetDataReportResult{}
{
}

GetDataReportResult::GetDataReportResult(const GetDataReportResult& src) :
    PlayFabAdminGetDataReportResult{ src },
    m_downloadUrl{ src.m_downloadUrl }
{
    downloadUrl = m_downloadUrl.empty() ? nullptr : m_downloadUrl.data();
}

GetDataReportResult::GetDataReportResult(GetDataReportResult&& src) :
    PlayFabAdminGetDataReportResult{ src },
    m_downloadUrl{ std::move(src.m_downloadUrl) }
{
    downloadUrl = m_downloadUrl.empty() ? nullptr : m_downloadUrl.data();
}

GetDataReportResult::GetDataReportResult(const PlayFabAdminGetDataReportResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetDataReportResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DownloadUrl", m_downloadUrl, downloadUrl);
}

JsonValue GetDataReportResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetDataReportResult>(*this);
}

size_t GetDataReportResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetDataReportResult) };
    serializedSize += (m_downloadUrl.size() + 1);
    return serializedSize;
}

void GetDataReportResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetDataReportResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetDataReportResult);
    memcpy(stringBuffer, m_downloadUrl.data(), m_downloadUrl.size() + 1);
    serializedStruct->downloadUrl = stringBuffer;
    stringBuffer += m_downloadUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetMatchmakerGameInfoRequest::GetMatchmakerGameInfoRequest() :
    PlayFabAdminGetMatchmakerGameInfoRequest{}
{
}

GetMatchmakerGameInfoRequest::GetMatchmakerGameInfoRequest(const GetMatchmakerGameInfoRequest& src) :
    PlayFabAdminGetMatchmakerGameInfoRequest{ src },
    m_lobbyId{ src.m_lobbyId }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

GetMatchmakerGameInfoRequest::GetMatchmakerGameInfoRequest(GetMatchmakerGameInfoRequest&& src) :
    PlayFabAdminGetMatchmakerGameInfoRequest{ src },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

GetMatchmakerGameInfoRequest::GetMatchmakerGameInfoRequest(const PlayFabAdminGetMatchmakerGameInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakerGameInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
}

JsonValue GetMatchmakerGameInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetMatchmakerGameInfoRequest>(*this);
}

size_t GetMatchmakerGameInfoRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetMatchmakerGameInfoRequest) };
    serializedSize += (m_lobbyId.size() + 1);
    return serializedSize;
}

void GetMatchmakerGameInfoRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetMatchmakerGameInfoRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetMatchmakerGameInfoRequest);
    memcpy(stringBuffer, m_lobbyId.data(), m_lobbyId.size() + 1);
    serializedStruct->lobbyId = stringBuffer;
    stringBuffer += m_lobbyId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetMatchmakerGameInfoResult::GetMatchmakerGameInfoResult() :
    PlayFabAdminGetMatchmakerGameInfoResult{}
{
}

GetMatchmakerGameInfoResult::GetMatchmakerGameInfoResult(const GetMatchmakerGameInfoResult& src) :
    PlayFabAdminGetMatchmakerGameInfoResult{ src },
    m_buildVersion{ src.m_buildVersion },
    m_endTime{ src.m_endTime },
    m_lobbyId{ src.m_lobbyId },
    m_mode{ src.m_mode },
    m_players{ src.m_players },
    m_region{ src.m_region },
    m_serverIPV4Address{ src.m_serverIPV4Address },
    m_serverIPV6Address{ src.m_serverIPV6Address },
    m_serverPublicDNSName{ src.m_serverPublicDNSName },
    m_titleId{ src.m_titleId }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    endTime = m_endTime ? m_endTime.operator->() : nullptr;
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    mode = m_mode.empty() ? nullptr : m_mode.data();
    players = m_players.Empty() ? nullptr : m_players.Data();
    region = m_region ? m_region.operator->() : nullptr;
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GetMatchmakerGameInfoResult::GetMatchmakerGameInfoResult(GetMatchmakerGameInfoResult&& src) :
    PlayFabAdminGetMatchmakerGameInfoResult{ src },
    m_buildVersion{ std::move(src.m_buildVersion) },
    m_endTime{ std::move(src.m_endTime) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_mode{ std::move(src.m_mode) },
    m_players{ std::move(src.m_players) },
    m_region{ std::move(src.m_region) },
    m_serverIPV4Address{ std::move(src.m_serverIPV4Address) },
    m_serverIPV6Address{ std::move(src.m_serverIPV6Address) },
    m_serverPublicDNSName{ std::move(src.m_serverPublicDNSName) },
    m_titleId{ std::move(src.m_titleId) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    endTime = m_endTime ? m_endTime.operator->() : nullptr;
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    mode = m_mode.empty() ? nullptr : m_mode.data();
    players = m_players.Empty() ? nullptr : m_players.Data();
    region = m_region ? m_region.operator->() : nullptr;
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GetMatchmakerGameInfoResult::GetMatchmakerGameInfoResult(const PlayFabAdminGetMatchmakerGameInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakerGameInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
    JsonUtils::ObjectGetMember(input, "EndTime", m_endTime, endTime, true);
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
    JsonUtils::ObjectGetMember(input, "Mode", m_mode, mode);
    JsonUtils::ObjectGetMember(input, "Players", m_players, players, playersCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
    JsonUtils::ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
    JsonUtils::ObjectGetMember(input, "ServerPort", serverPort);
    JsonUtils::ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
    JsonUtils::ObjectGetMember(input, "StartTime", startTime, true);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue GetMatchmakerGameInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetMatchmakerGameInfoResult>(*this);
}

GetMatchmakerGameModesRequest::GetMatchmakerGameModesRequest() :
    PlayFabAdminGetMatchmakerGameModesRequest{}
{
}

GetMatchmakerGameModesRequest::GetMatchmakerGameModesRequest(const GetMatchmakerGameModesRequest& src) :
    PlayFabAdminGetMatchmakerGameModesRequest{ src },
    m_buildVersion{ src.m_buildVersion }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
}

GetMatchmakerGameModesRequest::GetMatchmakerGameModesRequest(GetMatchmakerGameModesRequest&& src) :
    PlayFabAdminGetMatchmakerGameModesRequest{ src },
    m_buildVersion{ std::move(src.m_buildVersion) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
}

GetMatchmakerGameModesRequest::GetMatchmakerGameModesRequest(const PlayFabAdminGetMatchmakerGameModesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakerGameModesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
}

JsonValue GetMatchmakerGameModesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetMatchmakerGameModesRequest>(*this);
}

size_t GetMatchmakerGameModesRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetMatchmakerGameModesRequest) };
    serializedSize += (m_buildVersion.size() + 1);
    return serializedSize;
}

void GetMatchmakerGameModesRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetMatchmakerGameModesRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetMatchmakerGameModesRequest);
    memcpy(stringBuffer, m_buildVersion.data(), m_buildVersion.size() + 1);
    serializedStruct->buildVersion = stringBuffer;
    stringBuffer += m_buildVersion.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetMatchmakerGameModesResult::GetMatchmakerGameModesResult() :
    PlayFabAdminGetMatchmakerGameModesResult{}
{
}

GetMatchmakerGameModesResult::GetMatchmakerGameModesResult(const GetMatchmakerGameModesResult& src) :
    PlayFabAdminGetMatchmakerGameModesResult{ src },
    m_gameModes{ src.m_gameModes }
{
    gameModes = m_gameModes.Empty() ? nullptr : m_gameModes.Data();
}

GetMatchmakerGameModesResult::GetMatchmakerGameModesResult(GetMatchmakerGameModesResult&& src) :
    PlayFabAdminGetMatchmakerGameModesResult{ src },
    m_gameModes{ std::move(src.m_gameModes) }
{
    gameModes = m_gameModes.Empty() ? nullptr : m_gameModes.Data();
}

GetMatchmakerGameModesResult::GetMatchmakerGameModesResult(const PlayFabAdminGetMatchmakerGameModesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakerGameModesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameModes", m_gameModes, gameModes, gameModesCount);
}

JsonValue GetMatchmakerGameModesResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetMatchmakerGameModesResult>(*this);
}

GetPlayedTitleListRequest::GetPlayedTitleListRequest() :
    PlayFabAdminGetPlayedTitleListRequest{}
{
}

GetPlayedTitleListRequest::GetPlayedTitleListRequest(const GetPlayedTitleListRequest& src) :
    PlayFabAdminGetPlayedTitleListRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayedTitleListRequest::GetPlayedTitleListRequest(GetPlayedTitleListRequest&& src) :
    PlayFabAdminGetPlayedTitleListRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayedTitleListRequest::GetPlayedTitleListRequest(const PlayFabAdminGetPlayedTitleListRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayedTitleListRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayedTitleListRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayedTitleListRequest>(*this);
}

size_t GetPlayedTitleListRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetPlayedTitleListRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GetPlayedTitleListRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetPlayedTitleListRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetPlayedTitleListRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayedTitleListResult::GetPlayedTitleListResult() :
    PlayFabAdminGetPlayedTitleListResult{}
{
}

GetPlayedTitleListResult::GetPlayedTitleListResult(const GetPlayedTitleListResult& src) :
    PlayFabAdminGetPlayedTitleListResult{ src },
    m_titleIds{ src.m_titleIds }
{
    titleIds = m_titleIds.Empty() ? nullptr : m_titleIds.Data();
}

GetPlayedTitleListResult::GetPlayedTitleListResult(GetPlayedTitleListResult&& src) :
    PlayFabAdminGetPlayedTitleListResult{ src },
    m_titleIds{ std::move(src.m_titleIds) }
{
    titleIds = m_titleIds.Empty() ? nullptr : m_titleIds.Data();
}

GetPlayedTitleListResult::GetPlayedTitleListResult(const PlayFabAdminGetPlayedTitleListResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayedTitleListResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TitleIds", m_titleIds, titleIds, titleIdsCount);
}

JsonValue GetPlayedTitleListResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayedTitleListResult>(*this);
}

GetPlayerIdFromAuthTokenRequest::GetPlayerIdFromAuthTokenRequest() :
    PlayFabAdminGetPlayerIdFromAuthTokenRequest{}
{
}

GetPlayerIdFromAuthTokenRequest::GetPlayerIdFromAuthTokenRequest(const GetPlayerIdFromAuthTokenRequest& src) :
    PlayFabAdminGetPlayerIdFromAuthTokenRequest{ src },
    m_token{ src.m_token }
{
    token = m_token.empty() ? nullptr : m_token.data();
}

GetPlayerIdFromAuthTokenRequest::GetPlayerIdFromAuthTokenRequest(GetPlayerIdFromAuthTokenRequest&& src) :
    PlayFabAdminGetPlayerIdFromAuthTokenRequest{ src },
    m_token{ std::move(src.m_token) }
{
    token = m_token.empty() ? nullptr : m_token.data();
}

GetPlayerIdFromAuthTokenRequest::GetPlayerIdFromAuthTokenRequest(const PlayFabAdminGetPlayerIdFromAuthTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerIdFromAuthTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Token", m_token, token);
    JsonUtils::ObjectGetMember(input, "TokenType", tokenType);
}

JsonValue GetPlayerIdFromAuthTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerIdFromAuthTokenRequest>(*this);
}

size_t GetPlayerIdFromAuthTokenRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetPlayerIdFromAuthTokenRequest) };
    serializedSize += (m_token.size() + 1);
    return serializedSize;
}

void GetPlayerIdFromAuthTokenRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetPlayerIdFromAuthTokenRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetPlayerIdFromAuthTokenRequest);
    memcpy(stringBuffer, m_token.data(), m_token.size() + 1);
    serializedStruct->token = stringBuffer;
    stringBuffer += m_token.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerIdFromAuthTokenResult::GetPlayerIdFromAuthTokenResult() :
    PlayFabAdminGetPlayerIdFromAuthTokenResult{}
{
}

GetPlayerIdFromAuthTokenResult::GetPlayerIdFromAuthTokenResult(const GetPlayerIdFromAuthTokenResult& src) :
    PlayFabAdminGetPlayerIdFromAuthTokenResult{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerIdFromAuthTokenResult::GetPlayerIdFromAuthTokenResult(GetPlayerIdFromAuthTokenResult&& src) :
    PlayFabAdminGetPlayerIdFromAuthTokenResult{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerIdFromAuthTokenResult::GetPlayerIdFromAuthTokenResult(const PlayFabAdminGetPlayerIdFromAuthTokenResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerIdFromAuthTokenResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayerIdFromAuthTokenResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerIdFromAuthTokenResult>(*this);
}

size_t GetPlayerIdFromAuthTokenResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetPlayerIdFromAuthTokenResult) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GetPlayerIdFromAuthTokenResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetPlayerIdFromAuthTokenResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetPlayerIdFromAuthTokenResult);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PlayerProfileViewConstraints::PlayerProfileViewConstraints() :
    PlayFabAdminPlayerProfileViewConstraints{}
{
}


PlayerProfileViewConstraints::PlayerProfileViewConstraints(const PlayFabAdminPlayerProfileViewConstraints& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerProfileViewConstraints::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ShowAvatarUrl", showAvatarUrl);
    JsonUtils::ObjectGetMember(input, "ShowBannedUntil", showBannedUntil);
    JsonUtils::ObjectGetMember(input, "ShowCampaignAttributions", showCampaignAttributions);
    JsonUtils::ObjectGetMember(input, "ShowContactEmailAddresses", showContactEmailAddresses);
    JsonUtils::ObjectGetMember(input, "ShowCreated", showCreated);
    JsonUtils::ObjectGetMember(input, "ShowDisplayName", showDisplayName);
    JsonUtils::ObjectGetMember(input, "ShowExperimentVariants", showExperimentVariants);
    JsonUtils::ObjectGetMember(input, "ShowLastLogin", showLastLogin);
    JsonUtils::ObjectGetMember(input, "ShowLinkedAccounts", showLinkedAccounts);
    JsonUtils::ObjectGetMember(input, "ShowLocations", showLocations);
    JsonUtils::ObjectGetMember(input, "ShowMemberships", showMemberships);
    JsonUtils::ObjectGetMember(input, "ShowOrigination", showOrigination);
    JsonUtils::ObjectGetMember(input, "ShowPushNotificationRegistrations", showPushNotificationRegistrations);
    JsonUtils::ObjectGetMember(input, "ShowStatistics", showStatistics);
    JsonUtils::ObjectGetMember(input, "ShowTags", showTags);
    JsonUtils::ObjectGetMember(input, "ShowTotalValueToDateInUsd", showTotalValueToDateInUsd);
    JsonUtils::ObjectGetMember(input, "ShowValuesToDate", showValuesToDate);
}

JsonValue PlayerProfileViewConstraints::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPlayerProfileViewConstraints>(*this);
}

size_t PlayerProfileViewConstraints::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminPlayerProfileViewConstraints) };
    return serializedSize;
}

void PlayerProfileViewConstraints::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminPlayerProfileViewConstraints{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminPlayerProfileViewConstraints);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerProfileRequest::GetPlayerProfileRequest() :
    PlayFabAdminGetPlayerProfileRequest{}
{
}

GetPlayerProfileRequest::GetPlayerProfileRequest(const GetPlayerProfileRequest& src) :
    PlayFabAdminGetPlayerProfileRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
}

GetPlayerProfileRequest::GetPlayerProfileRequest(GetPlayerProfileRequest&& src) :
    PlayFabAdminGetPlayerProfileRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
}

GetPlayerProfileRequest::GetPlayerProfileRequest(const PlayFabAdminGetPlayerProfileRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerProfileRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
}

JsonValue GetPlayerProfileRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerProfileRequest>(*this);
}

GetPlayerProfileResult::GetPlayerProfileResult() :
    PlayFabAdminGetPlayerProfileResult{}
{
}

GetPlayerProfileResult::GetPlayerProfileResult(const GetPlayerProfileResult& src) :
    PlayFabAdminGetPlayerProfileResult{ src },
    m_playerProfile{ src.m_playerProfile }
{
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
}

GetPlayerProfileResult::GetPlayerProfileResult(GetPlayerProfileResult&& src) :
    PlayFabAdminGetPlayerProfileResult{ src },
    m_playerProfile{ std::move(src.m_playerProfile) }
{
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
}

GetPlayerProfileResult::GetPlayerProfileResult(const PlayFabAdminGetPlayerProfileResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerProfileResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
}

JsonValue GetPlayerProfileResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerProfileResult>(*this);
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult() :
    PlayFabAdminGetPlayerSegmentsResult{}
{
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src) :
    PlayFabAdminGetPlayerSegmentsResult{ src },
    m_segments{ src.m_segments }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(GetPlayerSegmentsResult&& src) :
    PlayFabAdminGetPlayerSegmentsResult{ src },
    m_segments{ std::move(src.m_segments) }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(const PlayFabAdminGetPlayerSegmentsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerSegmentsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
}

JsonValue GetPlayerSegmentsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerSegmentsResult>(*this);
}

SharedSecret::SharedSecret() :
    PlayFabAdminSharedSecret{}
{
}

SharedSecret::SharedSecret(const SharedSecret& src) :
    PlayFabAdminSharedSecret{ src },
    m_friendlyName{ src.m_friendlyName },
    m_secretKey{ src.m_secretKey }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

SharedSecret::SharedSecret(SharedSecret&& src) :
    PlayFabAdminSharedSecret{ src },
    m_friendlyName{ std::move(src.m_friendlyName) },
    m_secretKey{ std::move(src.m_secretKey) }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

SharedSecret::SharedSecret(const PlayFabAdminSharedSecret& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SharedSecret::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Disabled", disabled);
    JsonUtils::ObjectGetMember(input, "FriendlyName", m_friendlyName, friendlyName);
    JsonUtils::ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
}

JsonValue SharedSecret::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSharedSecret>(*this);
}

size_t SharedSecret::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminSharedSecret) };
    serializedSize += (m_friendlyName.size() + 1);
    serializedSize += (m_secretKey.size() + 1);
    return serializedSize;
}

void SharedSecret::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminSharedSecret{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminSharedSecret);
    memcpy(stringBuffer, m_friendlyName.data(), m_friendlyName.size() + 1);
    serializedStruct->friendlyName = stringBuffer;
    stringBuffer += m_friendlyName.size() + 1;
    memcpy(stringBuffer, m_secretKey.data(), m_secretKey.size() + 1);
    serializedStruct->secretKey = stringBuffer;
    stringBuffer += m_secretKey.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerSharedSecretsResult::GetPlayerSharedSecretsResult() :
    PlayFabAdminGetPlayerSharedSecretsResult{}
{
}

GetPlayerSharedSecretsResult::GetPlayerSharedSecretsResult(const GetPlayerSharedSecretsResult& src) :
    PlayFabAdminGetPlayerSharedSecretsResult{ src },
    m_sharedSecrets{ src.m_sharedSecrets }
{
    sharedSecrets = m_sharedSecrets.Empty() ? nullptr : m_sharedSecrets.Data();
}

GetPlayerSharedSecretsResult::GetPlayerSharedSecretsResult(GetPlayerSharedSecretsResult&& src) :
    PlayFabAdminGetPlayerSharedSecretsResult{ src },
    m_sharedSecrets{ std::move(src.m_sharedSecrets) }
{
    sharedSecrets = m_sharedSecrets.Empty() ? nullptr : m_sharedSecrets.Data();
}

GetPlayerSharedSecretsResult::GetPlayerSharedSecretsResult(const PlayFabAdminGetPlayerSharedSecretsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerSharedSecretsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SharedSecrets", m_sharedSecrets, sharedSecrets, sharedSecretsCount);
}

JsonValue GetPlayerSharedSecretsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerSharedSecretsResult>(*this);
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest() :
    PlayFabAdminGetPlayersInSegmentRequest{}
{
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest(const GetPlayersInSegmentRequest& src) :
    PlayFabAdminGetPlayersInSegmentRequest{ src },
    m_continuationToken{ src.m_continuationToken },
    m_customTags{ src.m_customTags },
    m_maxBatchSize{ src.m_maxBatchSize },
    m_secondsToLive{ src.m_secondsToLive },
    m_segmentId{ src.m_segmentId }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxBatchSize = m_maxBatchSize ? m_maxBatchSize.operator->() : nullptr;
    secondsToLive = m_secondsToLive ? m_secondsToLive.operator->() : nullptr;
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest(GetPlayersInSegmentRequest&& src) :
    PlayFabAdminGetPlayersInSegmentRequest{ src },
    m_continuationToken{ std::move(src.m_continuationToken) },
    m_customTags{ std::move(src.m_customTags) },
    m_maxBatchSize{ std::move(src.m_maxBatchSize) },
    m_secondsToLive{ std::move(src.m_secondsToLive) },
    m_segmentId{ std::move(src.m_segmentId) }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxBatchSize = m_maxBatchSize ? m_maxBatchSize.operator->() : nullptr;
    secondsToLive = m_secondsToLive ? m_secondsToLive.operator->() : nullptr;
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest(const PlayFabAdminGetPlayersInSegmentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayersInSegmentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ContinuationToken", m_continuationToken, continuationToken);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MaxBatchSize", m_maxBatchSize, maxBatchSize);
    JsonUtils::ObjectGetMember(input, "SecondsToLive", m_secondsToLive, secondsToLive);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
}

JsonValue GetPlayersInSegmentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayersInSegmentRequest>(*this);
}

PlayerLinkedAccount::PlayerLinkedAccount() :
    PlayFabAdminPlayerLinkedAccount{}
{
}

PlayerLinkedAccount::PlayerLinkedAccount(const PlayerLinkedAccount& src) :
    PlayFabAdminPlayerLinkedAccount{ src },
    m_email{ src.m_email },
    m_platform{ src.m_platform },
    m_platformUserId{ src.m_platformUserId },
    m_username{ src.m_username }
{
    email = m_email.empty() ? nullptr : m_email.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
    platformUserId = m_platformUserId.empty() ? nullptr : m_platformUserId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

PlayerLinkedAccount::PlayerLinkedAccount(PlayerLinkedAccount&& src) :
    PlayFabAdminPlayerLinkedAccount{ src },
    m_email{ std::move(src.m_email) },
    m_platform{ std::move(src.m_platform) },
    m_platformUserId{ std::move(src.m_platformUserId) },
    m_username{ std::move(src.m_username) }
{
    email = m_email.empty() ? nullptr : m_email.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
    platformUserId = m_platformUserId.empty() ? nullptr : m_platformUserId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

PlayerLinkedAccount::PlayerLinkedAccount(const PlayFabAdminPlayerLinkedAccount& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerLinkedAccount::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
    JsonUtils::ObjectGetMember(input, "PlatformUserId", m_platformUserId, platformUserId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue PlayerLinkedAccount::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPlayerLinkedAccount>(*this);
}

PlayerLocation::PlayerLocation() :
    PlayFabAdminPlayerLocation{}
{
}

PlayerLocation::PlayerLocation(const PlayerLocation& src) :
    PlayFabAdminPlayerLocation{ src },
    m_city{ src.m_city },
    m_latitude{ src.m_latitude },
    m_longitude{ src.m_longitude }
{
    city = m_city.empty() ? nullptr : m_city.data();
    latitude = m_latitude ? m_latitude.operator->() : nullptr;
    longitude = m_longitude ? m_longitude.operator->() : nullptr;
}

PlayerLocation::PlayerLocation(PlayerLocation&& src) :
    PlayFabAdminPlayerLocation{ src },
    m_city{ std::move(src.m_city) },
    m_latitude{ std::move(src.m_latitude) },
    m_longitude{ std::move(src.m_longitude) }
{
    city = m_city.empty() ? nullptr : m_city.data();
    latitude = m_latitude ? m_latitude.operator->() : nullptr;
    longitude = m_longitude ? m_longitude.operator->() : nullptr;
}

PlayerLocation::PlayerLocation(const PlayFabAdminPlayerLocation& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerLocation::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "City", m_city, city);
    JsonUtils::ObjectGetMember(input, "ContinentCode", continentCode);
    JsonUtils::ObjectGetMember(input, "CountryCode", countryCode);
    JsonUtils::ObjectGetMember(input, "Latitude", m_latitude, latitude);
    JsonUtils::ObjectGetMember(input, "Longitude", m_longitude, longitude);
}

JsonValue PlayerLocation::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPlayerLocation>(*this);
}

PlayerStatistic::PlayerStatistic() :
    PlayFabAdminPlayerStatistic{}
{
}

PlayerStatistic::PlayerStatistic(const PlayerStatistic& src) :
    PlayFabAdminPlayerStatistic{ src },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

PlayerStatistic::PlayerStatistic(PlayerStatistic&& src) :
    PlayFabAdminPlayerStatistic{ src },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

PlayerStatistic::PlayerStatistic(const PlayFabAdminPlayerStatistic& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerStatistic::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "StatisticValue", statisticValue);
    JsonUtils::ObjectGetMember(input, "StatisticVersion", statisticVersion);
}

JsonValue PlayerStatistic::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPlayerStatistic>(*this);
}

size_t PlayerStatistic::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminPlayerStatistic) };
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void PlayerStatistic::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminPlayerStatistic{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminPlayerStatistic);
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PushNotificationRegistration::PushNotificationRegistration() :
    PlayFabAdminPushNotificationRegistration{}
{
}

PushNotificationRegistration::PushNotificationRegistration(const PushNotificationRegistration& src) :
    PlayFabAdminPushNotificationRegistration{ src },
    m_notificationEndpointARN{ src.m_notificationEndpointARN },
    m_platform{ src.m_platform }
{
    notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
}

PushNotificationRegistration::PushNotificationRegistration(PushNotificationRegistration&& src) :
    PlayFabAdminPushNotificationRegistration{ src },
    m_notificationEndpointARN{ std::move(src.m_notificationEndpointARN) },
    m_platform{ std::move(src.m_platform) }
{
    notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
}

PushNotificationRegistration::PushNotificationRegistration(const PlayFabAdminPushNotificationRegistration& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationRegistration::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NotificationEndpointARN", m_notificationEndpointARN, notificationEndpointARN);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
}

JsonValue PushNotificationRegistration::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPushNotificationRegistration>(*this);
}

PlayerProfile::PlayerProfile() :
    PlayFabAdminPlayerProfile{}
{
}

PlayerProfile::PlayerProfile(const PlayerProfile& src) :
    PlayFabAdminPlayerProfile{ src },
    m_adCampaignAttributions{ src.m_adCampaignAttributions },
    m_avatarUrl{ src.m_avatarUrl },
    m_bannedUntil{ src.m_bannedUntil },
    m_contactEmailAddresses{ src.m_contactEmailAddresses },
    m_created{ src.m_created },
    m_displayName{ src.m_displayName },
    m_lastLogin{ src.m_lastLogin },
    m_linkedAccounts{ src.m_linkedAccounts },
    m_locations{ src.m_locations },
    m_origination{ src.m_origination },
    m_playerExperimentVariants{ src.m_playerExperimentVariants },
    m_playerId{ src.m_playerId },
    m_playerStatistics{ src.m_playerStatistics },
    m_publisherId{ src.m_publisherId },
    m_pushNotificationRegistrations{ src.m_pushNotificationRegistrations },
    m_statistics{ src.m_statistics },
    m_tags{ src.m_tags },
    m_titleId{ src.m_titleId },
    m_totalValueToDateInUSD{ src.m_totalValueToDateInUSD },
    m_valuesToDate{ src.m_valuesToDate },
    m_virtualCurrencyBalances{ src.m_virtualCurrencyBalances }
{
    adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
    contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
    created = m_created ? m_created.operator->() : nullptr;
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
    locations = m_locations.Empty() ? nullptr : m_locations.Data();
    origination = m_origination ? m_origination.operator->() : nullptr;
    playerExperimentVariants = m_playerExperimentVariants.Empty() ? nullptr : m_playerExperimentVariants.Data();
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
    publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
    pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
    valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
    virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
}

PlayerProfile::PlayerProfile(PlayerProfile&& src) :
    PlayFabAdminPlayerProfile{ src },
    m_adCampaignAttributions{ std::move(src.m_adCampaignAttributions) },
    m_avatarUrl{ std::move(src.m_avatarUrl) },
    m_bannedUntil{ std::move(src.m_bannedUntil) },
    m_contactEmailAddresses{ std::move(src.m_contactEmailAddresses) },
    m_created{ std::move(src.m_created) },
    m_displayName{ std::move(src.m_displayName) },
    m_lastLogin{ std::move(src.m_lastLogin) },
    m_linkedAccounts{ std::move(src.m_linkedAccounts) },
    m_locations{ std::move(src.m_locations) },
    m_origination{ std::move(src.m_origination) },
    m_playerExperimentVariants{ std::move(src.m_playerExperimentVariants) },
    m_playerId{ std::move(src.m_playerId) },
    m_playerStatistics{ std::move(src.m_playerStatistics) },
    m_publisherId{ std::move(src.m_publisherId) },
    m_pushNotificationRegistrations{ std::move(src.m_pushNotificationRegistrations) },
    m_statistics{ std::move(src.m_statistics) },
    m_tags{ std::move(src.m_tags) },
    m_titleId{ std::move(src.m_titleId) },
    m_totalValueToDateInUSD{ std::move(src.m_totalValueToDateInUSD) },
    m_valuesToDate{ std::move(src.m_valuesToDate) },
    m_virtualCurrencyBalances{ std::move(src.m_virtualCurrencyBalances) }
{
    adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
    contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
    created = m_created ? m_created.operator->() : nullptr;
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
    locations = m_locations.Empty() ? nullptr : m_locations.Data();
    origination = m_origination ? m_origination.operator->() : nullptr;
    playerExperimentVariants = m_playerExperimentVariants.Empty() ? nullptr : m_playerExperimentVariants.Data();
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
    publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
    pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
    valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
    virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
}

PlayerProfile::PlayerProfile(const PlayFabAdminPlayerProfile& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerProfile::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdCampaignAttributions", m_adCampaignAttributions, adCampaignAttributions, adCampaignAttributionsCount);
    JsonUtils::ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
    JsonUtils::ObjectGetMember(input, "BannedUntil", m_bannedUntil, bannedUntil, true);
    JsonUtils::ObjectGetMember(input, "ContactEmailAddresses", m_contactEmailAddresses, contactEmailAddresses, contactEmailAddressesCount);
    JsonUtils::ObjectGetMember(input, "Created", m_created, created, true);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "LastLogin", m_lastLogin, lastLogin, true);
    JsonUtils::ObjectGetMember(input, "LinkedAccounts", m_linkedAccounts, linkedAccounts, linkedAccountsCount);
    JsonUtils::ObjectGetMember(input, "Locations", m_locations, locations, locationsCount);
    JsonUtils::ObjectGetMember(input, "Origination", m_origination, origination);
    JsonUtils::ObjectGetMember(input, "PlayerExperimentVariants", m_playerExperimentVariants, playerExperimentVariants, playerExperimentVariantsCount);
    JsonUtils::ObjectGetMember(input, "PlayerId", m_playerId, playerId);
    JsonUtils::ObjectGetMember(input, "PlayerStatistics", m_playerStatistics, playerStatistics, playerStatisticsCount);
    JsonUtils::ObjectGetMember(input, "PublisherId", m_publisherId, publisherId);
    JsonUtils::ObjectGetMember(input, "PushNotificationRegistrations", m_pushNotificationRegistrations, pushNotificationRegistrations, pushNotificationRegistrationsCount);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "TotalValueToDateInUSD", m_totalValueToDateInUSD, totalValueToDateInUSD);
    JsonUtils::ObjectGetMember(input, "ValuesToDate", m_valuesToDate, valuesToDate, valuesToDateCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyBalances", m_virtualCurrencyBalances, virtualCurrencyBalances, virtualCurrencyBalancesCount);
}

JsonValue PlayerProfile::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPlayerProfile>(*this);
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult() :
    PlayFabAdminGetPlayersInSegmentResult{}
{
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult(const GetPlayersInSegmentResult& src) :
    PlayFabAdminGetPlayersInSegmentResult{ src },
    m_continuationToken{ src.m_continuationToken },
    m_playerProfiles{ src.m_playerProfiles }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    playerProfiles = m_playerProfiles.Empty() ? nullptr : m_playerProfiles.Data();
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult(GetPlayersInSegmentResult&& src) :
    PlayFabAdminGetPlayersInSegmentResult{ src },
    m_continuationToken{ std::move(src.m_continuationToken) },
    m_playerProfiles{ std::move(src.m_playerProfiles) }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    playerProfiles = m_playerProfiles.Empty() ? nullptr : m_playerProfiles.Data();
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult(const PlayFabAdminGetPlayersInSegmentResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayersInSegmentResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ContinuationToken", m_continuationToken, continuationToken);
    JsonUtils::ObjectGetMember(input, "PlayerProfiles", m_playerProfiles, playerProfiles, playerProfilesCount);
    JsonUtils::ObjectGetMember(input, "ProfilesInSegment", profilesInSegment);
}

JsonValue GetPlayersInSegmentResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayersInSegmentResult>(*this);
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest() :
    PlayFabAdminGetPlayersSegmentsRequest{}
{
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest(const GetPlayersSegmentsRequest& src) :
    PlayFabAdminGetPlayersSegmentsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest(GetPlayersSegmentsRequest&& src) :
    PlayFabAdminGetPlayersSegmentsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest(const PlayFabAdminGetPlayersSegmentsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayersSegmentsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayersSegmentsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayersSegmentsRequest>(*this);
}

GetPlayerStatisticDefinitionsResult::GetPlayerStatisticDefinitionsResult() :
    PlayFabAdminGetPlayerStatisticDefinitionsResult{}
{
}

GetPlayerStatisticDefinitionsResult::GetPlayerStatisticDefinitionsResult(const GetPlayerStatisticDefinitionsResult& src) :
    PlayFabAdminGetPlayerStatisticDefinitionsResult{ src },
    m_statistics{ src.m_statistics }
{
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

GetPlayerStatisticDefinitionsResult::GetPlayerStatisticDefinitionsResult(GetPlayerStatisticDefinitionsResult&& src) :
    PlayFabAdminGetPlayerStatisticDefinitionsResult{ src },
    m_statistics{ std::move(src.m_statistics) }
{
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

GetPlayerStatisticDefinitionsResult::GetPlayerStatisticDefinitionsResult(const PlayFabAdminGetPlayerStatisticDefinitionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticDefinitionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
}

JsonValue GetPlayerStatisticDefinitionsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerStatisticDefinitionsResult>(*this);
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest() :
    PlayFabAdminGetPlayerStatisticVersionsRequest{}
{
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src) :
    PlayFabAdminGetPlayerStatisticVersionsRequest{ src },
    m_customTags{ src.m_customTags },
    m_statisticName{ src.m_statisticName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(GetPlayerStatisticVersionsRequest&& src) :
    PlayFabAdminGetPlayerStatisticVersionsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(const PlayFabAdminGetPlayerStatisticVersionsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticVersionsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue GetPlayerStatisticVersionsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerStatisticVersionsRequest>(*this);
}

PlayerStatisticVersion::PlayerStatisticVersion() :
    PlayFabAdminPlayerStatisticVersion{}
{
}

PlayerStatisticVersion::PlayerStatisticVersion(const PlayerStatisticVersion& src) :
    PlayFabAdminPlayerStatisticVersion{ src },
    m_archiveDownloadUrl{ src.m_archiveDownloadUrl },
    m_deactivationTime{ src.m_deactivationTime },
    m_scheduledActivationTime{ src.m_scheduledActivationTime },
    m_scheduledDeactivationTime{ src.m_scheduledDeactivationTime },
    m_statisticName{ src.m_statisticName },
    m_status{ src.m_status }
{
    archiveDownloadUrl = m_archiveDownloadUrl.empty() ? nullptr : m_archiveDownloadUrl.data();
    deactivationTime = m_deactivationTime ? m_deactivationTime.operator->() : nullptr;
    scheduledActivationTime = m_scheduledActivationTime ? m_scheduledActivationTime.operator->() : nullptr;
    scheduledDeactivationTime = m_scheduledDeactivationTime ? m_scheduledDeactivationTime.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    status = m_status ? m_status.operator->() : nullptr;
}

PlayerStatisticVersion::PlayerStatisticVersion(PlayerStatisticVersion&& src) :
    PlayFabAdminPlayerStatisticVersion{ src },
    m_archiveDownloadUrl{ std::move(src.m_archiveDownloadUrl) },
    m_deactivationTime{ std::move(src.m_deactivationTime) },
    m_scheduledActivationTime{ std::move(src.m_scheduledActivationTime) },
    m_scheduledDeactivationTime{ std::move(src.m_scheduledDeactivationTime) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_status{ std::move(src.m_status) }
{
    archiveDownloadUrl = m_archiveDownloadUrl.empty() ? nullptr : m_archiveDownloadUrl.data();
    deactivationTime = m_deactivationTime ? m_deactivationTime.operator->() : nullptr;
    scheduledActivationTime = m_scheduledActivationTime ? m_scheduledActivationTime.operator->() : nullptr;
    scheduledDeactivationTime = m_scheduledDeactivationTime ? m_scheduledDeactivationTime.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    status = m_status ? m_status.operator->() : nullptr;
}

PlayerStatisticVersion::PlayerStatisticVersion(const PlayFabAdminPlayerStatisticVersion& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerStatisticVersion::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ActivationTime", activationTime, true);
    JsonUtils::ObjectGetMember(input, "ArchiveDownloadUrl", m_archiveDownloadUrl, archiveDownloadUrl);
    JsonUtils::ObjectGetMember(input, "DeactivationTime", m_deactivationTime, deactivationTime, true);
    JsonUtils::ObjectGetMember(input, "ScheduledActivationTime", m_scheduledActivationTime, scheduledActivationTime, true);
    JsonUtils::ObjectGetMember(input, "ScheduledDeactivationTime", m_scheduledDeactivationTime, scheduledDeactivationTime, true);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue PlayerStatisticVersion::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPlayerStatisticVersion>(*this);
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult() :
    PlayFabAdminGetPlayerStatisticVersionsResult{}
{
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src) :
    PlayFabAdminGetPlayerStatisticVersionsResult{ src },
    m_statisticVersions{ src.m_statisticVersions }
{
    statisticVersions = m_statisticVersions.Empty() ? nullptr : m_statisticVersions.Data();
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(GetPlayerStatisticVersionsResult&& src) :
    PlayFabAdminGetPlayerStatisticVersionsResult{ src },
    m_statisticVersions{ std::move(src.m_statisticVersions) }
{
    statisticVersions = m_statisticVersions.Empty() ? nullptr : m_statisticVersions.Data();
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(const PlayFabAdminGetPlayerStatisticVersionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticVersionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticVersions", m_statisticVersions, statisticVersions, statisticVersionsCount);
}

JsonValue GetPlayerStatisticVersionsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerStatisticVersionsResult>(*this);
}

GetPlayerTagsRequest::GetPlayerTagsRequest() :
    PlayFabAdminGetPlayerTagsRequest{}
{
}

GetPlayerTagsRequest::GetPlayerTagsRequest(const GetPlayerTagsRequest& src) :
    PlayFabAdminGetPlayerTagsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playfabNamespace{ src.m_playfabNamespace },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playfabNamespace = m_playfabNamespace.empty() ? nullptr : m_playfabNamespace.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerTagsRequest::GetPlayerTagsRequest(GetPlayerTagsRequest&& src) :
    PlayFabAdminGetPlayerTagsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playfabNamespace{ std::move(src.m_playfabNamespace) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playfabNamespace = m_playfabNamespace.empty() ? nullptr : m_playfabNamespace.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerTagsRequest::GetPlayerTagsRequest(const PlayFabAdminGetPlayerTagsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerTagsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Namespace", m_playfabNamespace, playfabNamespace);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayerTagsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerTagsRequest>(*this);
}

GetPlayerTagsResult::GetPlayerTagsResult() :
    PlayFabAdminGetPlayerTagsResult{}
{
}

GetPlayerTagsResult::GetPlayerTagsResult(const GetPlayerTagsResult& src) :
    PlayFabAdminGetPlayerTagsResult{ src },
    m_playFabId{ src.m_playFabId },
    m_tags{ src.m_tags }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

GetPlayerTagsResult::GetPlayerTagsResult(GetPlayerTagsResult&& src) :
    PlayFabAdminGetPlayerTagsResult{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tags{ std::move(src.m_tags) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

GetPlayerTagsResult::GetPlayerTagsResult(const PlayFabAdminGetPlayerTagsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerTagsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue GetPlayerTagsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPlayerTagsResult>(*this);
}

GetPolicyRequest::GetPolicyRequest() :
    PlayFabAdminGetPolicyRequest{}
{
}

GetPolicyRequest::GetPolicyRequest(const GetPolicyRequest& src) :
    PlayFabAdminGetPolicyRequest{ src },
    m_policyName{ src.m_policyName }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
}

GetPolicyRequest::GetPolicyRequest(GetPolicyRequest&& src) :
    PlayFabAdminGetPolicyRequest{ src },
    m_policyName{ std::move(src.m_policyName) }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
}

GetPolicyRequest::GetPolicyRequest(const PlayFabAdminGetPolicyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPolicyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PolicyName", m_policyName, policyName);
}

JsonValue GetPolicyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPolicyRequest>(*this);
}

size_t GetPolicyRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetPolicyRequest) };
    serializedSize += (m_policyName.size() + 1);
    return serializedSize;
}

void GetPolicyRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetPolicyRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetPolicyRequest);
    memcpy(stringBuffer, m_policyName.data(), m_policyName.size() + 1);
    serializedStruct->policyName = stringBuffer;
    stringBuffer += m_policyName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PermissionStatement::PermissionStatement() :
    PlayFabAdminPermissionStatement{}
{
}

PermissionStatement::PermissionStatement(const PermissionStatement& src) :
    PlayFabAdminPermissionStatement{ src },
    m_action{ src.m_action },
    m_apiConditions{ src.m_apiConditions },
    m_comment{ src.m_comment },
    m_principal{ src.m_principal },
    m_resource{ src.m_resource }
{
    action = m_action.empty() ? nullptr : m_action.data();
    apiConditions = m_apiConditions ? m_apiConditions.operator->() : nullptr;
    comment = m_comment.empty() ? nullptr : m_comment.data();
    principal = m_principal.empty() ? nullptr : m_principal.data();
    resource = m_resource.empty() ? nullptr : m_resource.data();
}

PermissionStatement::PermissionStatement(PermissionStatement&& src) :
    PlayFabAdminPermissionStatement{ src },
    m_action{ std::move(src.m_action) },
    m_apiConditions{ std::move(src.m_apiConditions) },
    m_comment{ std::move(src.m_comment) },
    m_principal{ std::move(src.m_principal) },
    m_resource{ std::move(src.m_resource) }
{
    action = m_action.empty() ? nullptr : m_action.data();
    apiConditions = m_apiConditions ? m_apiConditions.operator->() : nullptr;
    comment = m_comment.empty() ? nullptr : m_comment.data();
    principal = m_principal.empty() ? nullptr : m_principal.data();
    resource = m_resource.empty() ? nullptr : m_resource.data();
}

PermissionStatement::PermissionStatement(const PlayFabAdminPermissionStatement& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PermissionStatement::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Action", m_action, action);
    JsonUtils::ObjectGetMember(input, "ApiConditions", m_apiConditions, apiConditions);
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "Effect", effect);
    JsonUtils::ObjectGetMember(input, "Principal", m_principal, principal);
    JsonUtils::ObjectGetMember(input, "Resource", m_resource, resource);
}

JsonValue PermissionStatement::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminPermissionStatement>(*this);
}

GetPolicyResponse::GetPolicyResponse() :
    PlayFabAdminGetPolicyResponse{}
{
}

GetPolicyResponse::GetPolicyResponse(const GetPolicyResponse& src) :
    PlayFabAdminGetPolicyResponse{ src },
    m_policyName{ src.m_policyName },
    m_statements{ src.m_statements }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

GetPolicyResponse::GetPolicyResponse(GetPolicyResponse&& src) :
    PlayFabAdminGetPolicyResponse{ src },
    m_policyName{ std::move(src.m_policyName) },
    m_statements{ std::move(src.m_statements) }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

GetPolicyResponse::GetPolicyResponse(const PlayFabAdminGetPolicyResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPolicyResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PolicyName", m_policyName, policyName);
    JsonUtils::ObjectGetMember(input, "PolicyVersion", policyVersion);
    JsonUtils::ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
}

JsonValue GetPolicyResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPolicyResponse>(*this);
}

GetPublisherDataRequest::GetPublisherDataRequest() :
    PlayFabAdminGetPublisherDataRequest{}
{
}

GetPublisherDataRequest::GetPublisherDataRequest(const GetPublisherDataRequest& src) :
    PlayFabAdminGetPublisherDataRequest{ src },
    m_keys{ src.m_keys }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
}

GetPublisherDataRequest::GetPublisherDataRequest(GetPublisherDataRequest&& src) :
    PlayFabAdminGetPublisherDataRequest{ src },
    m_keys{ std::move(src.m_keys) }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
}

GetPublisherDataRequest::GetPublisherDataRequest(const PlayFabAdminGetPublisherDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPublisherDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
}

JsonValue GetPublisherDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPublisherDataRequest>(*this);
}

GetPublisherDataResult::GetPublisherDataResult() :
    PlayFabAdminGetPublisherDataResult{}
{
}

GetPublisherDataResult::GetPublisherDataResult(const GetPublisherDataResult& src) :
    PlayFabAdminGetPublisherDataResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPublisherDataResult::GetPublisherDataResult(GetPublisherDataResult&& src) :
    PlayFabAdminGetPublisherDataResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPublisherDataResult::GetPublisherDataResult(const PlayFabAdminGetPublisherDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPublisherDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPublisherDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetPublisherDataResult>(*this);
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest() :
    PlayFabAdminGetRandomResultTablesRequest{}
{
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src) :
    PlayFabAdminGetRandomResultTablesRequest{ src },
    m_catalogVersion{ src.m_catalogVersion }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(GetRandomResultTablesRequest&& src) :
    PlayFabAdminGetRandomResultTablesRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(const PlayFabAdminGetRandomResultTablesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetRandomResultTablesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
}

JsonValue GetRandomResultTablesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetRandomResultTablesRequest>(*this);
}

size_t GetRandomResultTablesRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetRandomResultTablesRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    return serializedSize;
}

void GetRandomResultTablesRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetRandomResultTablesRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetRandomResultTablesRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ResultTableNode::ResultTableNode() :
    PlayFabAdminResultTableNode{}
{
}

ResultTableNode::ResultTableNode(const ResultTableNode& src) :
    PlayFabAdminResultTableNode{ src },
    m_resultItem{ src.m_resultItem }
{
    resultItem = m_resultItem.empty() ? nullptr : m_resultItem.data();
}

ResultTableNode::ResultTableNode(ResultTableNode&& src) :
    PlayFabAdminResultTableNode{ src },
    m_resultItem{ std::move(src.m_resultItem) }
{
    resultItem = m_resultItem.empty() ? nullptr : m_resultItem.data();
}

ResultTableNode::ResultTableNode(const PlayFabAdminResultTableNode& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResultTableNode::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ResultItem", m_resultItem, resultItem);
    JsonUtils::ObjectGetMember(input, "ResultItemType", resultItemType);
    JsonUtils::ObjectGetMember(input, "Weight", weight);
}

JsonValue ResultTableNode::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminResultTableNode>(*this);
}

size_t ResultTableNode::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminResultTableNode) };
    serializedSize += (m_resultItem.size() + 1);
    return serializedSize;
}

void ResultTableNode::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminResultTableNode{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminResultTableNode);
    memcpy(stringBuffer, m_resultItem.data(), m_resultItem.size() + 1);
    serializedStruct->resultItem = stringBuffer;
    stringBuffer += m_resultItem.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RandomResultTableListing::RandomResultTableListing() :
    PlayFabAdminRandomResultTableListing{}
{
}

RandomResultTableListing::RandomResultTableListing(const RandomResultTableListing& src) :
    PlayFabAdminRandomResultTableListing{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_nodes{ src.m_nodes },
    m_tableId{ src.m_tableId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

RandomResultTableListing::RandomResultTableListing(RandomResultTableListing&& src) :
    PlayFabAdminRandomResultTableListing{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_nodes{ std::move(src.m_nodes) },
    m_tableId{ std::move(src.m_tableId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

RandomResultTableListing::RandomResultTableListing(const PlayFabAdminRandomResultTableListing& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RandomResultTableListing::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "Nodes", m_nodes, nodes, nodesCount);
    JsonUtils::ObjectGetMember(input, "TableId", m_tableId, tableId);
}

JsonValue RandomResultTableListing::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRandomResultTableListing>(*this);
}

GetRandomResultTablesResult::GetRandomResultTablesResult() :
    PlayFabAdminGetRandomResultTablesResult{}
{
}

GetRandomResultTablesResult::GetRandomResultTablesResult(const GetRandomResultTablesResult& src) :
    PlayFabAdminGetRandomResultTablesResult{ src },
    m_tables{ src.m_tables }
{
    tables = m_tables.Empty() ? nullptr : m_tables.Data();
}

GetRandomResultTablesResult::GetRandomResultTablesResult(GetRandomResultTablesResult&& src) :
    PlayFabAdminGetRandomResultTablesResult{ src },
    m_tables{ std::move(src.m_tables) }
{
    tables = m_tables.Empty() ? nullptr : m_tables.Data();
}

GetRandomResultTablesResult::GetRandomResultTablesResult(const PlayFabAdminGetRandomResultTablesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetRandomResultTablesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Tables", m_tables, tables, tablesCount);
}

JsonValue GetRandomResultTablesResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetRandomResultTablesResult>(*this);
}

GetSegmentsRequest::GetSegmentsRequest() :
    PlayFabAdminGetSegmentsRequest{}
{
}

GetSegmentsRequest::GetSegmentsRequest(const GetSegmentsRequest& src) :
    PlayFabAdminGetSegmentsRequest{ src },
    m_segmentIds{ src.m_segmentIds }
{
    segmentIds = m_segmentIds.Empty() ? nullptr : m_segmentIds.Data();
}

GetSegmentsRequest::GetSegmentsRequest(GetSegmentsRequest&& src) :
    PlayFabAdminGetSegmentsRequest{ src },
    m_segmentIds{ std::move(src.m_segmentIds) }
{
    segmentIds = m_segmentIds.Empty() ? nullptr : m_segmentIds.Data();
}

GetSegmentsRequest::GetSegmentsRequest(const PlayFabAdminGetSegmentsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSegmentsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SegmentIds", m_segmentIds, segmentIds, segmentIdsCount);
}

JsonValue GetSegmentsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetSegmentsRequest>(*this);
}

GetSegmentsResponse::GetSegmentsResponse() :
    PlayFabAdminGetSegmentsResponse{}
{
}

GetSegmentsResponse::GetSegmentsResponse(const GetSegmentsResponse& src) :
    PlayFabAdminGetSegmentsResponse{ src },
    m_errorMessage{ src.m_errorMessage },
    m_segments{ src.m_segments }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetSegmentsResponse::GetSegmentsResponse(GetSegmentsResponse&& src) :
    PlayFabAdminGetSegmentsResponse{ src },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_segments{ std::move(src.m_segments) }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetSegmentsResponse::GetSegmentsResponse(const PlayFabAdminGetSegmentsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSegmentsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
    JsonUtils::ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
}

JsonValue GetSegmentsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetSegmentsResponse>(*this);
}

GetServerBuildInfoRequest::GetServerBuildInfoRequest() :
    PlayFabAdminGetServerBuildInfoRequest{}
{
}

GetServerBuildInfoRequest::GetServerBuildInfoRequest(const GetServerBuildInfoRequest& src) :
    PlayFabAdminGetServerBuildInfoRequest{ src },
    m_buildId{ src.m_buildId }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

GetServerBuildInfoRequest::GetServerBuildInfoRequest(GetServerBuildInfoRequest&& src) :
    PlayFabAdminGetServerBuildInfoRequest{ src },
    m_buildId{ std::move(src.m_buildId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

GetServerBuildInfoRequest::GetServerBuildInfoRequest(const PlayFabAdminGetServerBuildInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBuildInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
}

JsonValue GetServerBuildInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetServerBuildInfoRequest>(*this);
}

size_t GetServerBuildInfoRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetServerBuildInfoRequest) };
    serializedSize += (m_buildId.size() + 1);
    return serializedSize;
}

void GetServerBuildInfoRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetServerBuildInfoRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetServerBuildInfoRequest);
    memcpy(stringBuffer, m_buildId.data(), m_buildId.size() + 1);
    serializedStruct->buildId = stringBuffer;
    stringBuffer += m_buildId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetServerBuildInfoResult::GetServerBuildInfoResult() :
    PlayFabAdminGetServerBuildInfoResult{}
{
}

GetServerBuildInfoResult::GetServerBuildInfoResult(const GetServerBuildInfoResult& src) :
    PlayFabAdminGetServerBuildInfoResult{ src },
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
    PlayFabAdminGetServerBuildInfoResult{ src },
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

GetServerBuildInfoResult::GetServerBuildInfoResult(const PlayFabAdminGetServerBuildInfoResult& src)
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
    return JsonUtils::ToJson<PlayFabAdminGetServerBuildInfoResult>(*this);
}

GetServerBuildUploadURLRequest::GetServerBuildUploadURLRequest() :
    PlayFabAdminGetServerBuildUploadURLRequest{}
{
}

GetServerBuildUploadURLRequest::GetServerBuildUploadURLRequest(const GetServerBuildUploadURLRequest& src) :
    PlayFabAdminGetServerBuildUploadURLRequest{ src },
    m_buildId{ src.m_buildId }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

GetServerBuildUploadURLRequest::GetServerBuildUploadURLRequest(GetServerBuildUploadURLRequest&& src) :
    PlayFabAdminGetServerBuildUploadURLRequest{ src },
    m_buildId{ std::move(src.m_buildId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

GetServerBuildUploadURLRequest::GetServerBuildUploadURLRequest(const PlayFabAdminGetServerBuildUploadURLRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBuildUploadURLRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
}

JsonValue GetServerBuildUploadURLRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetServerBuildUploadURLRequest>(*this);
}

size_t GetServerBuildUploadURLRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetServerBuildUploadURLRequest) };
    serializedSize += (m_buildId.size() + 1);
    return serializedSize;
}

void GetServerBuildUploadURLRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetServerBuildUploadURLRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetServerBuildUploadURLRequest);
    memcpy(stringBuffer, m_buildId.data(), m_buildId.size() + 1);
    serializedStruct->buildId = stringBuffer;
    stringBuffer += m_buildId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetServerBuildUploadURLResult::GetServerBuildUploadURLResult() :
    PlayFabAdminGetServerBuildUploadURLResult{}
{
}

GetServerBuildUploadURLResult::GetServerBuildUploadURLResult(const GetServerBuildUploadURLResult& src) :
    PlayFabAdminGetServerBuildUploadURLResult{ src },
    m_uRL{ src.m_uRL }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetServerBuildUploadURLResult::GetServerBuildUploadURLResult(GetServerBuildUploadURLResult&& src) :
    PlayFabAdminGetServerBuildUploadURLResult{ src },
    m_uRL{ std::move(src.m_uRL) }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetServerBuildUploadURLResult::GetServerBuildUploadURLResult(const PlayFabAdminGetServerBuildUploadURLResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBuildUploadURLResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "URL", m_uRL, uRL);
}

JsonValue GetServerBuildUploadURLResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetServerBuildUploadURLResult>(*this);
}

size_t GetServerBuildUploadURLResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetServerBuildUploadURLResult) };
    serializedSize += (m_uRL.size() + 1);
    return serializedSize;
}

void GetServerBuildUploadURLResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetServerBuildUploadURLResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetServerBuildUploadURLResult);
    memcpy(stringBuffer, m_uRL.data(), m_uRL.size() + 1);
    serializedStruct->uRL = stringBuffer;
    stringBuffer += m_uRL.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetStoreItemsRequest::GetStoreItemsRequest() :
    PlayFabAdminGetStoreItemsRequest{}
{
}

GetStoreItemsRequest::GetStoreItemsRequest(const GetStoreItemsRequest& src) :
    PlayFabAdminGetStoreItemsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsRequest::GetStoreItemsRequest(GetStoreItemsRequest&& src) :
    PlayFabAdminGetStoreItemsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsRequest::GetStoreItemsRequest(const PlayFabAdminGetStoreItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetStoreItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue GetStoreItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetStoreItemsRequest>(*this);
}

size_t GetStoreItemsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetStoreItemsRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    serializedSize += (m_storeId.size() + 1);
    return serializedSize;
}

void GetStoreItemsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetStoreItemsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetStoreItemsRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    memcpy(stringBuffer, m_storeId.data(), m_storeId.size() + 1);
    serializedStruct->storeId = stringBuffer;
    stringBuffer += m_storeId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

StoreMarketingModel::StoreMarketingModel() :
    PlayFabAdminStoreMarketingModel{}
{
}

StoreMarketingModel::StoreMarketingModel(const StoreMarketingModel& src) :
    PlayFabAdminStoreMarketingModel{ src },
    m_description{ src.m_description },
    m_displayName{ src.m_displayName },
    m_metadata{ src.m_metadata }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    metadata.stringValue = m_metadata.StringValue();
}

StoreMarketingModel::StoreMarketingModel(StoreMarketingModel&& src) :
    PlayFabAdminStoreMarketingModel{ src },
    m_description{ std::move(src.m_description) },
    m_displayName{ std::move(src.m_displayName) },
    m_metadata{ std::move(src.m_metadata) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    metadata.stringValue = m_metadata.StringValue();
}

StoreMarketingModel::StoreMarketingModel(const PlayFabAdminStoreMarketingModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StoreMarketingModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata);
}

JsonValue StoreMarketingModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminStoreMarketingModel>(*this);
}

StoreItem::StoreItem() :
    PlayFabAdminStoreItem{}
{
}

StoreItem::StoreItem(const StoreItem& src) :
    PlayFabAdminStoreItem{ src },
    m_customData{ src.m_customData },
    m_displayPosition{ src.m_displayPosition },
    m_itemId{ src.m_itemId },
    m_realCurrencyPrices{ src.m_realCurrencyPrices },
    m_virtualCurrencyPrices{ src.m_virtualCurrencyPrices }
{
    customData.stringValue = m_customData.StringValue();
    displayPosition = m_displayPosition ? m_displayPosition.operator->() : nullptr;
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

StoreItem::StoreItem(StoreItem&& src) :
    PlayFabAdminStoreItem{ src },
    m_customData{ std::move(src.m_customData) },
    m_displayPosition{ std::move(src.m_displayPosition) },
    m_itemId{ std::move(src.m_itemId) },
    m_realCurrencyPrices{ std::move(src.m_realCurrencyPrices) },
    m_virtualCurrencyPrices{ std::move(src.m_virtualCurrencyPrices) }
{
    customData.stringValue = m_customData.StringValue();
    displayPosition = m_displayPosition ? m_displayPosition.operator->() : nullptr;
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

StoreItem::StoreItem(const PlayFabAdminStoreItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StoreItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData);
    JsonUtils::ObjectGetMember(input, "DisplayPosition", m_displayPosition, displayPosition);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
}

JsonValue StoreItem::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminStoreItem>(*this);
}

GetStoreItemsResult::GetStoreItemsResult() :
    PlayFabAdminGetStoreItemsResult{}
{
}

GetStoreItemsResult::GetStoreItemsResult(const GetStoreItemsResult& src) :
    PlayFabAdminGetStoreItemsResult{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_marketingData{ src.m_marketingData },
    m_source{ src.m_source },
    m_store{ src.m_store },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    marketingData = m_marketingData ? m_marketingData.operator->() : nullptr;
    source = m_source ? m_source.operator->() : nullptr;
    store = m_store.Empty() ? nullptr : m_store.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsResult::GetStoreItemsResult(GetStoreItemsResult&& src) :
    PlayFabAdminGetStoreItemsResult{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_marketingData{ std::move(src.m_marketingData) },
    m_source{ std::move(src.m_source) },
    m_store{ std::move(src.m_store) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    marketingData = m_marketingData ? m_marketingData.operator->() : nullptr;
    source = m_source ? m_source.operator->() : nullptr;
    store = m_store.Empty() ? nullptr : m_store.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsResult::GetStoreItemsResult(const PlayFabAdminGetStoreItemsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetStoreItemsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "MarketingData", m_marketingData, marketingData);
    JsonUtils::ObjectGetMember(input, "Source", m_source, source);
    JsonUtils::ObjectGetMember(input, "Store", m_store, store, storeCount);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue GetStoreItemsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetStoreItemsResult>(*this);
}

GetTaskInstanceRequest::GetTaskInstanceRequest() :
    PlayFabAdminGetTaskInstanceRequest{}
{
}

GetTaskInstanceRequest::GetTaskInstanceRequest(const GetTaskInstanceRequest& src) :
    PlayFabAdminGetTaskInstanceRequest{ src },
    m_taskInstanceId{ src.m_taskInstanceId }
{
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

GetTaskInstanceRequest::GetTaskInstanceRequest(GetTaskInstanceRequest&& src) :
    PlayFabAdminGetTaskInstanceRequest{ src },
    m_taskInstanceId{ std::move(src.m_taskInstanceId) }
{
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

GetTaskInstanceRequest::GetTaskInstanceRequest(const PlayFabAdminGetTaskInstanceRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTaskInstanceRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
}

JsonValue GetTaskInstanceRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetTaskInstanceRequest>(*this);
}

size_t GetTaskInstanceRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetTaskInstanceRequest) };
    serializedSize += (m_taskInstanceId.size() + 1);
    return serializedSize;
}

void GetTaskInstanceRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetTaskInstanceRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetTaskInstanceRequest);
    memcpy(stringBuffer, m_taskInstanceId.data(), m_taskInstanceId.size() + 1);
    serializedStruct->taskInstanceId = stringBuffer;
    stringBuffer += m_taskInstanceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetTaskInstancesRequest::GetTaskInstancesRequest() :
    PlayFabAdminGetTaskInstancesRequest{}
{
}

GetTaskInstancesRequest::GetTaskInstancesRequest(const GetTaskInstancesRequest& src) :
    PlayFabAdminGetTaskInstancesRequest{ src },
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
    PlayFabAdminGetTaskInstancesRequest{ src },
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

GetTaskInstancesRequest::GetTaskInstancesRequest(const PlayFabAdminGetTaskInstancesRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminGetTaskInstancesRequest>(*this);
}

TaskInstanceBasicSummary::TaskInstanceBasicSummary() :
    PlayFabAdminTaskInstanceBasicSummary{}
{
}

TaskInstanceBasicSummary::TaskInstanceBasicSummary(const TaskInstanceBasicSummary& src) :
    PlayFabAdminTaskInstanceBasicSummary{ src },
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
    PlayFabAdminTaskInstanceBasicSummary{ src },
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

TaskInstanceBasicSummary::TaskInstanceBasicSummary(const PlayFabAdminTaskInstanceBasicSummary& src)
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
    return JsonUtils::ToJson<PlayFabAdminTaskInstanceBasicSummary>(*this);
}

GetTaskInstancesResult::GetTaskInstancesResult() :
    PlayFabAdminGetTaskInstancesResult{}
{
}

GetTaskInstancesResult::GetTaskInstancesResult(const GetTaskInstancesResult& src) :
    PlayFabAdminGetTaskInstancesResult{ src },
    m_summaries{ src.m_summaries }
{
    summaries = m_summaries.Empty() ? nullptr : m_summaries.Data();
}

GetTaskInstancesResult::GetTaskInstancesResult(GetTaskInstancesResult&& src) :
    PlayFabAdminGetTaskInstancesResult{ src },
    m_summaries{ std::move(src.m_summaries) }
{
    summaries = m_summaries.Empty() ? nullptr : m_summaries.Data();
}

GetTaskInstancesResult::GetTaskInstancesResult(const PlayFabAdminGetTaskInstancesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTaskInstancesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Summaries", m_summaries, summaries, summariesCount);
}

JsonValue GetTaskInstancesResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetTaskInstancesResult>(*this);
}

GetTasksRequest::GetTasksRequest() :
    PlayFabAdminGetTasksRequest{}
{
}

GetTasksRequest::GetTasksRequest(const GetTasksRequest& src) :
    PlayFabAdminGetTasksRequest{ src },
    m_identifier{ src.m_identifier }
{
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

GetTasksRequest::GetTasksRequest(GetTasksRequest&& src) :
    PlayFabAdminGetTasksRequest{ src },
    m_identifier{ std::move(src.m_identifier) }
{
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

GetTasksRequest::GetTasksRequest(const PlayFabAdminGetTasksRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTasksRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Identifier", m_identifier, identifier);
}

JsonValue GetTasksRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetTasksRequest>(*this);
}

ScheduledTask::ScheduledTask() :
    PlayFabAdminScheduledTask{}
{
}

ScheduledTask::ScheduledTask(const ScheduledTask& src) :
    PlayFabAdminScheduledTask{ src },
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
    PlayFabAdminScheduledTask{ src },
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

ScheduledTask::ScheduledTask(const PlayFabAdminScheduledTask& src)
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
    return JsonUtils::ToJson<PlayFabAdminScheduledTask>(*this);
}

GetTasksResult::GetTasksResult() :
    PlayFabAdminGetTasksResult{}
{
}

GetTasksResult::GetTasksResult(const GetTasksResult& src) :
    PlayFabAdminGetTasksResult{ src },
    m_tasks{ src.m_tasks }
{
    tasks = m_tasks.Empty() ? nullptr : m_tasks.Data();
}

GetTasksResult::GetTasksResult(GetTasksResult&& src) :
    PlayFabAdminGetTasksResult{ src },
    m_tasks{ std::move(src.m_tasks) }
{
    tasks = m_tasks.Empty() ? nullptr : m_tasks.Data();
}

GetTasksResult::GetTasksResult(const PlayFabAdminGetTasksResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTasksResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Tasks", m_tasks, tasks, tasksCount);
}

JsonValue GetTasksResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetTasksResult>(*this);
}

GetTitleDataRequest::GetTitleDataRequest() :
    PlayFabAdminGetTitleDataRequest{}
{
}

GetTitleDataRequest::GetTitleDataRequest(const GetTitleDataRequest& src) :
    PlayFabAdminGetTitleDataRequest{ src },
    m_keys{ src.m_keys },
    m_overrideLabel{ src.m_overrideLabel }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

GetTitleDataRequest::GetTitleDataRequest(GetTitleDataRequest&& src) :
    PlayFabAdminGetTitleDataRequest{ src },
    m_keys{ std::move(src.m_keys) },
    m_overrideLabel{ std::move(src.m_overrideLabel) }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

GetTitleDataRequest::GetTitleDataRequest(const PlayFabAdminGetTitleDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
    JsonUtils::ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
}

JsonValue GetTitleDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetTitleDataRequest>(*this);
}

GetTitleDataResult::GetTitleDataResult() :
    PlayFabAdminGetTitleDataResult{}
{
}

GetTitleDataResult::GetTitleDataResult(const GetTitleDataResult& src) :
    PlayFabAdminGetTitleDataResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetTitleDataResult::GetTitleDataResult(GetTitleDataResult&& src) :
    PlayFabAdminGetTitleDataResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetTitleDataResult::GetTitleDataResult(const PlayFabAdminGetTitleDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetTitleDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetTitleDataResult>(*this);
}

GetUserBansRequest::GetUserBansRequest() :
    PlayFabAdminGetUserBansRequest{}
{
}

GetUserBansRequest::GetUserBansRequest(const GetUserBansRequest& src) :
    PlayFabAdminGetUserBansRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserBansRequest::GetUserBansRequest(GetUserBansRequest&& src) :
    PlayFabAdminGetUserBansRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserBansRequest::GetUserBansRequest(const PlayFabAdminGetUserBansRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserBansRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserBansRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetUserBansRequest>(*this);
}

size_t GetUserBansRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminGetUserBansRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GetUserBansRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminGetUserBansRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminGetUserBansRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetUserBansResult::GetUserBansResult() :
    PlayFabAdminGetUserBansResult{}
{
}

GetUserBansResult::GetUserBansResult(const GetUserBansResult& src) :
    PlayFabAdminGetUserBansResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

GetUserBansResult::GetUserBansResult(GetUserBansResult&& src) :
    PlayFabAdminGetUserBansResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

GetUserBansResult::GetUserBansResult(const PlayFabAdminGetUserBansResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserBansResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue GetUserBansResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetUserBansResult>(*this);
}

GetUserDataRequest::GetUserDataRequest() :
    PlayFabAdminGetUserDataRequest{}
{
}

GetUserDataRequest::GetUserDataRequest(const GetUserDataRequest& src) :
    PlayFabAdminGetUserDataRequest{ src },
    m_ifChangedFromDataVersion{ src.m_ifChangedFromDataVersion },
    m_keys{ src.m_keys },
    m_playFabId{ src.m_playFabId }
{
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataRequest::GetUserDataRequest(GetUserDataRequest&& src) :
    PlayFabAdminGetUserDataRequest{ src },
    m_ifChangedFromDataVersion{ std::move(src.m_ifChangedFromDataVersion) },
    m_keys{ std::move(src.m_keys) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataRequest::GetUserDataRequest(const PlayFabAdminGetUserDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IfChangedFromDataVersion", m_ifChangedFromDataVersion, ifChangedFromDataVersion);
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetUserDataRequest>(*this);
}

GetUserDataResult::GetUserDataResult() :
    PlayFabAdminGetUserDataResult{}
{
}

GetUserDataResult::GetUserDataResult(const GetUserDataResult& src) :
    PlayFabAdminGetUserDataResult{ src },
    m_data{ src.m_data },
    m_playFabId{ src.m_playFabId }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataResult::GetUserDataResult(GetUserDataResult&& src) :
    PlayFabAdminGetUserDataResult{ src },
    m_data{ std::move(src.m_data) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataResult::GetUserDataResult(const PlayFabAdminGetUserDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetUserDataResult>(*this);
}

GetUserInventoryRequest::GetUserInventoryRequest() :
    PlayFabAdminGetUserInventoryRequest{}
{
}

GetUserInventoryRequest::GetUserInventoryRequest(const GetUserInventoryRequest& src) :
    PlayFabAdminGetUserInventoryRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserInventoryRequest::GetUserInventoryRequest(GetUserInventoryRequest&& src) :
    PlayFabAdminGetUserInventoryRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserInventoryRequest::GetUserInventoryRequest(const PlayFabAdminGetUserInventoryRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserInventoryRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserInventoryRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetUserInventoryRequest>(*this);
}

GetUserInventoryResult::GetUserInventoryResult() :
    PlayFabAdminGetUserInventoryResult{}
{
}

GetUserInventoryResult::GetUserInventoryResult(const GetUserInventoryResult& src) :
    PlayFabAdminGetUserInventoryResult{ src },
    m_inventory{ src.m_inventory },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

GetUserInventoryResult::GetUserInventoryResult(GetUserInventoryResult&& src) :
    PlayFabAdminGetUserInventoryResult{ src },
    m_inventory{ std::move(src.m_inventory) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

GetUserInventoryResult::GetUserInventoryResult(const PlayFabAdminGetUserInventoryResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserInventoryResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue GetUserInventoryResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGetUserInventoryResult>(*this);
}

GrantedItemInstance::GrantedItemInstance() :
    PlayFabAdminGrantedItemInstance{}
{
}

GrantedItemInstance::GrantedItemInstance(const GrantedItemInstance& src) :
    PlayFabAdminGrantedItemInstance{ src },
    m_annotation{ src.m_annotation },
    m_bundleContents{ src.m_bundleContents },
    m_bundleParent{ src.m_bundleParent },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customData{ src.m_customData },
    m_displayName{ src.m_displayName },
    m_expiration{ src.m_expiration },
    m_itemClass{ src.m_itemClass },
    m_itemId{ src.m_itemId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId },
    m_purchaseDate{ src.m_purchaseDate },
    m_remainingUses{ src.m_remainingUses },
    m_unitCurrency{ src.m_unitCurrency },
    m_usesIncrementedBy{ src.m_usesIncrementedBy }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
    bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customData = m_customData.Empty() ? nullptr : m_customData.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    expiration = m_expiration ? m_expiration.operator->() : nullptr;
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
    remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
    unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
    usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
}

GrantedItemInstance::GrantedItemInstance(GrantedItemInstance&& src) :
    PlayFabAdminGrantedItemInstance{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_bundleContents{ std::move(src.m_bundleContents) },
    m_bundleParent{ std::move(src.m_bundleParent) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customData{ std::move(src.m_customData) },
    m_displayName{ std::move(src.m_displayName) },
    m_expiration{ std::move(src.m_expiration) },
    m_itemClass{ std::move(src.m_itemClass) },
    m_itemId{ std::move(src.m_itemId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_purchaseDate{ std::move(src.m_purchaseDate) },
    m_remainingUses{ std::move(src.m_remainingUses) },
    m_unitCurrency{ std::move(src.m_unitCurrency) },
    m_usesIncrementedBy{ std::move(src.m_usesIncrementedBy) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
    bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customData = m_customData.Empty() ? nullptr : m_customData.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    expiration = m_expiration ? m_expiration.operator->() : nullptr;
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
    remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
    unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
    usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
}

GrantedItemInstance::GrantedItemInstance(const PlayFabAdminGrantedItemInstance& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantedItemInstance::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "BundleContents", m_bundleContents, bundleContents, bundleContentsCount);
    JsonUtils::ObjectGetMember(input, "BundleParent", m_bundleParent, bundleParent);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData, customDataCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Expiration", m_expiration, expiration, true);
    JsonUtils::ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "PurchaseDate", m_purchaseDate, purchaseDate, true);
    JsonUtils::ObjectGetMember(input, "RemainingUses", m_remainingUses, remainingUses);
    JsonUtils::ObjectGetMember(input, "Result", result);
    JsonUtils::ObjectGetMember(input, "UnitCurrency", m_unitCurrency, unitCurrency);
    JsonUtils::ObjectGetMember(input, "UnitPrice", unitPrice);
    JsonUtils::ObjectGetMember(input, "UsesIncrementedBy", m_usesIncrementedBy, usesIncrementedBy);
}

JsonValue GrantedItemInstance::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGrantedItemInstance>(*this);
}

ItemGrant::ItemGrant() :
    PlayFabAdminItemGrant{}
{
}

ItemGrant::ItemGrant(const ItemGrant& src) :
    PlayFabAdminItemGrant{ src },
    m_annotation{ src.m_annotation },
    m_characterId{ src.m_characterId },
    m_data{ src.m_data },
    m_itemId{ src.m_itemId },
    m_keysToRemove{ src.m_keysToRemove },
    m_playFabId{ src.m_playFabId }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ItemGrant::ItemGrant(ItemGrant&& src) :
    PlayFabAdminItemGrant{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_characterId{ std::move(src.m_characterId) },
    m_data{ std::move(src.m_data) },
    m_itemId{ std::move(src.m_itemId) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ItemGrant::ItemGrant(const PlayFabAdminItemGrant& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ItemGrant::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ItemGrant::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminItemGrant>(*this);
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest() :
    PlayFabAdminGrantItemsToUsersRequest{}
{
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest(const GrantItemsToUsersRequest& src) :
    PlayFabAdminGrantItemsToUsersRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_itemGrants{ src.m_itemGrants }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemGrants = m_itemGrants.Empty() ? nullptr : m_itemGrants.Data();
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest(GrantItemsToUsersRequest&& src) :
    PlayFabAdminGrantItemsToUsersRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemGrants{ std::move(src.m_itemGrants) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemGrants = m_itemGrants.Empty() ? nullptr : m_itemGrants.Data();
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest(const PlayFabAdminGrantItemsToUsersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToUsersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemGrants", m_itemGrants, itemGrants, itemGrantsCount);
}

JsonValue GrantItemsToUsersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGrantItemsToUsersRequest>(*this);
}

GrantItemsToUsersResult::GrantItemsToUsersResult() :
    PlayFabAdminGrantItemsToUsersResult{}
{
}

GrantItemsToUsersResult::GrantItemsToUsersResult(const GrantItemsToUsersResult& src) :
    PlayFabAdminGrantItemsToUsersResult{ src },
    m_itemGrantResults{ src.m_itemGrantResults }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToUsersResult::GrantItemsToUsersResult(GrantItemsToUsersResult&& src) :
    PlayFabAdminGrantItemsToUsersResult{ src },
    m_itemGrantResults{ std::move(src.m_itemGrantResults) }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToUsersResult::GrantItemsToUsersResult(const PlayFabAdminGrantItemsToUsersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToUsersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
}

JsonValue GrantItemsToUsersResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminGrantItemsToUsersResult>(*this);
}

IncrementLimitedEditionItemAvailabilityRequest::IncrementLimitedEditionItemAvailabilityRequest() :
    PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest{}
{
}

IncrementLimitedEditionItemAvailabilityRequest::IncrementLimitedEditionItemAvailabilityRequest(const IncrementLimitedEditionItemAvailabilityRequest& src) :
    PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_itemId{ src.m_itemId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

IncrementLimitedEditionItemAvailabilityRequest::IncrementLimitedEditionItemAvailabilityRequest(IncrementLimitedEditionItemAvailabilityRequest&& src) :
    PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemId{ std::move(src.m_itemId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

IncrementLimitedEditionItemAvailabilityRequest::IncrementLimitedEditionItemAvailabilityRequest(const PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IncrementLimitedEditionItemAvailabilityRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
}

JsonValue IncrementLimitedEditionItemAvailabilityRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest>(*this);
}

IncrementPlayerStatisticVersionRequest::IncrementPlayerStatisticVersionRequest() :
    PlayFabAdminIncrementPlayerStatisticVersionRequest{}
{
}

IncrementPlayerStatisticVersionRequest::IncrementPlayerStatisticVersionRequest(const IncrementPlayerStatisticVersionRequest& src) :
    PlayFabAdminIncrementPlayerStatisticVersionRequest{ src },
    m_customTags{ src.m_customTags },
    m_statisticName{ src.m_statisticName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

IncrementPlayerStatisticVersionRequest::IncrementPlayerStatisticVersionRequest(IncrementPlayerStatisticVersionRequest&& src) :
    PlayFabAdminIncrementPlayerStatisticVersionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

IncrementPlayerStatisticVersionRequest::IncrementPlayerStatisticVersionRequest(const PlayFabAdminIncrementPlayerStatisticVersionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IncrementPlayerStatisticVersionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue IncrementPlayerStatisticVersionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminIncrementPlayerStatisticVersionRequest>(*this);
}

IncrementPlayerStatisticVersionResult::IncrementPlayerStatisticVersionResult() :
    PlayFabAdminIncrementPlayerStatisticVersionResult{}
{
}

IncrementPlayerStatisticVersionResult::IncrementPlayerStatisticVersionResult(const IncrementPlayerStatisticVersionResult& src) :
    PlayFabAdminIncrementPlayerStatisticVersionResult{ src },
    m_statisticVersion{ src.m_statisticVersion }
{
    statisticVersion = m_statisticVersion ? m_statisticVersion.operator->() : nullptr;
}

IncrementPlayerStatisticVersionResult::IncrementPlayerStatisticVersionResult(IncrementPlayerStatisticVersionResult&& src) :
    PlayFabAdminIncrementPlayerStatisticVersionResult{ src },
    m_statisticVersion{ std::move(src.m_statisticVersion) }
{
    statisticVersion = m_statisticVersion ? m_statisticVersion.operator->() : nullptr;
}

IncrementPlayerStatisticVersionResult::IncrementPlayerStatisticVersionResult(const PlayFabAdminIncrementPlayerStatisticVersionResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IncrementPlayerStatisticVersionResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticVersion", m_statisticVersion, statisticVersion);
}

JsonValue IncrementPlayerStatisticVersionResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminIncrementPlayerStatisticVersionResult>(*this);
}

ListBuildsResult::ListBuildsResult() :
    PlayFabAdminListBuildsResult{}
{
}

ListBuildsResult::ListBuildsResult(const ListBuildsResult& src) :
    PlayFabAdminListBuildsResult{ src },
    m_builds{ src.m_builds }
{
    builds = m_builds.Empty() ? nullptr : m_builds.Data();
}

ListBuildsResult::ListBuildsResult(ListBuildsResult&& src) :
    PlayFabAdminListBuildsResult{ src },
    m_builds{ std::move(src.m_builds) }
{
    builds = m_builds.Empty() ? nullptr : m_builds.Data();
}

ListBuildsResult::ListBuildsResult(const PlayFabAdminListBuildsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListBuildsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Builds", m_builds, builds, buildsCount);
}

JsonValue ListBuildsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminListBuildsResult>(*this);
}

OpenIdConnection::OpenIdConnection() :
    PlayFabAdminOpenIdConnection{}
{
}

OpenIdConnection::OpenIdConnection(const OpenIdConnection& src) :
    PlayFabAdminOpenIdConnection{ src },
    m_clientId{ src.m_clientId },
    m_clientSecret{ src.m_clientSecret },
    m_connectionId{ src.m_connectionId },
    m_issuerInformation{ src.m_issuerInformation }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

OpenIdConnection::OpenIdConnection(OpenIdConnection&& src) :
    PlayFabAdminOpenIdConnection{ src },
    m_clientId{ std::move(src.m_clientId) },
    m_clientSecret{ std::move(src.m_clientSecret) },
    m_connectionId{ std::move(src.m_connectionId) },
    m_issuerInformation{ std::move(src.m_issuerInformation) }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

OpenIdConnection::OpenIdConnection(const PlayFabAdminOpenIdConnection& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void OpenIdConnection::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ClientId", m_clientId, clientId);
    JsonUtils::ObjectGetMember(input, "ClientSecret", m_clientSecret, clientSecret);
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "DiscoverConfiguration", discoverConfiguration);
    JsonUtils::ObjectGetMember(input, "IssuerInformation", m_issuerInformation, issuerInformation);
}

JsonValue OpenIdConnection::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminOpenIdConnection>(*this);
}

ListOpenIdConnectionResponse::ListOpenIdConnectionResponse() :
    PlayFabAdminListOpenIdConnectionResponse{}
{
}

ListOpenIdConnectionResponse::ListOpenIdConnectionResponse(const ListOpenIdConnectionResponse& src) :
    PlayFabAdminListOpenIdConnectionResponse{ src },
    m_connections{ src.m_connections }
{
    connections = m_connections.Empty() ? nullptr : m_connections.Data();
}

ListOpenIdConnectionResponse::ListOpenIdConnectionResponse(ListOpenIdConnectionResponse&& src) :
    PlayFabAdminListOpenIdConnectionResponse{ src },
    m_connections{ std::move(src.m_connections) }
{
    connections = m_connections.Empty() ? nullptr : m_connections.Data();
}

ListOpenIdConnectionResponse::ListOpenIdConnectionResponse(const PlayFabAdminListOpenIdConnectionResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListOpenIdConnectionResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Connections", m_connections, connections, connectionsCount);
}

JsonValue ListOpenIdConnectionResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminListOpenIdConnectionResponse>(*this);
}

ListVirtualCurrencyTypesResult::ListVirtualCurrencyTypesResult() :
    PlayFabAdminListVirtualCurrencyTypesResult{}
{
}

ListVirtualCurrencyTypesResult::ListVirtualCurrencyTypesResult(const ListVirtualCurrencyTypesResult& src) :
    PlayFabAdminListVirtualCurrencyTypesResult{ src },
    m_virtualCurrencies{ src.m_virtualCurrencies }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

ListVirtualCurrencyTypesResult::ListVirtualCurrencyTypesResult(ListVirtualCurrencyTypesResult&& src) :
    PlayFabAdminListVirtualCurrencyTypesResult{ src },
    m_virtualCurrencies{ std::move(src.m_virtualCurrencies) }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

ListVirtualCurrencyTypesResult::ListVirtualCurrencyTypesResult(const PlayFabAdminListVirtualCurrencyTypesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListVirtualCurrencyTypesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "VirtualCurrencies", m_virtualCurrencies, virtualCurrencies, virtualCurrenciesCount);
}

JsonValue ListVirtualCurrencyTypesResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminListVirtualCurrencyTypesResult>(*this);
}

LookupUserAccountInfoRequest::LookupUserAccountInfoRequest() :
    PlayFabAdminLookupUserAccountInfoRequest{}
{
}

LookupUserAccountInfoRequest::LookupUserAccountInfoRequest(const LookupUserAccountInfoRequest& src) :
    PlayFabAdminLookupUserAccountInfoRequest{ src },
    m_email{ src.m_email },
    m_playFabId{ src.m_playFabId },
    m_titleDisplayName{ src.m_titleDisplayName },
    m_username{ src.m_username }
{
    email = m_email.empty() ? nullptr : m_email.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LookupUserAccountInfoRequest::LookupUserAccountInfoRequest(LookupUserAccountInfoRequest&& src) :
    PlayFabAdminLookupUserAccountInfoRequest{ src },
    m_email{ std::move(src.m_email) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_titleDisplayName{ std::move(src.m_titleDisplayName) },
    m_username{ std::move(src.m_username) }
{
    email = m_email.empty() ? nullptr : m_email.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LookupUserAccountInfoRequest::LookupUserAccountInfoRequest(const PlayFabAdminLookupUserAccountInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LookupUserAccountInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TitleDisplayName", m_titleDisplayName, titleDisplayName);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue LookupUserAccountInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminLookupUserAccountInfoRequest>(*this);
}

size_t LookupUserAccountInfoRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminLookupUserAccountInfoRequest) };
    serializedSize += (m_email.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_titleDisplayName.size() + 1);
    serializedSize += (m_username.size() + 1);
    return serializedSize;
}

void LookupUserAccountInfoRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminLookupUserAccountInfoRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminLookupUserAccountInfoRequest);
    memcpy(stringBuffer, m_email.data(), m_email.size() + 1);
    serializedStruct->email = stringBuffer;
    stringBuffer += m_email.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_titleDisplayName.data(), m_titleDisplayName.size() + 1);
    serializedStruct->titleDisplayName = stringBuffer;
    stringBuffer += m_titleDisplayName.size() + 1;
    memcpy(stringBuffer, m_username.data(), m_username.size() + 1);
    serializedStruct->username = stringBuffer;
    stringBuffer += m_username.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

LookupUserAccountInfoResult::LookupUserAccountInfoResult() :
    PlayFabAdminLookupUserAccountInfoResult{}
{
}

LookupUserAccountInfoResult::LookupUserAccountInfoResult(const LookupUserAccountInfoResult& src) :
    PlayFabAdminLookupUserAccountInfoResult{ src },
    m_userInfo{ src.m_userInfo }
{
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

LookupUserAccountInfoResult::LookupUserAccountInfoResult(LookupUserAccountInfoResult&& src) :
    PlayFabAdminLookupUserAccountInfoResult{ src },
    m_userInfo{ std::move(src.m_userInfo) }
{
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

LookupUserAccountInfoResult::LookupUserAccountInfoResult(const PlayFabAdminLookupUserAccountInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LookupUserAccountInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
}

JsonValue LookupUserAccountInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminLookupUserAccountInfoResult>(*this);
}

ModifyMatchmakerGameModesRequest::ModifyMatchmakerGameModesRequest() :
    PlayFabAdminModifyMatchmakerGameModesRequest{}
{
}

ModifyMatchmakerGameModesRequest::ModifyMatchmakerGameModesRequest(const ModifyMatchmakerGameModesRequest& src) :
    PlayFabAdminModifyMatchmakerGameModesRequest{ src },
    m_buildVersion{ src.m_buildVersion },
    m_gameModes{ src.m_gameModes }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    gameModes = m_gameModes.Empty() ? nullptr : m_gameModes.Data();
}

ModifyMatchmakerGameModesRequest::ModifyMatchmakerGameModesRequest(ModifyMatchmakerGameModesRequest&& src) :
    PlayFabAdminModifyMatchmakerGameModesRequest{ src },
    m_buildVersion{ std::move(src.m_buildVersion) },
    m_gameModes{ std::move(src.m_gameModes) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    gameModes = m_gameModes.Empty() ? nullptr : m_gameModes.Data();
}

ModifyMatchmakerGameModesRequest::ModifyMatchmakerGameModesRequest(const PlayFabAdminModifyMatchmakerGameModesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyMatchmakerGameModesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
    JsonUtils::ObjectGetMember(input, "GameModes", m_gameModes, gameModes, gameModesCount);
}

JsonValue ModifyMatchmakerGameModesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminModifyMatchmakerGameModesRequest>(*this);
}

ModifyServerBuildRequest::ModifyServerBuildRequest() :
    PlayFabAdminModifyServerBuildRequest{}
{
}

ModifyServerBuildRequest::ModifyServerBuildRequest(const ModifyServerBuildRequest& src) :
    PlayFabAdminModifyServerBuildRequest{ src },
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
    PlayFabAdminModifyServerBuildRequest{ src },
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

ModifyServerBuildRequest::ModifyServerBuildRequest(const PlayFabAdminModifyServerBuildRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminModifyServerBuildRequest>(*this);
}

ModifyServerBuildResult::ModifyServerBuildResult() :
    PlayFabAdminModifyServerBuildResult{}
{
}

ModifyServerBuildResult::ModifyServerBuildResult(const ModifyServerBuildResult& src) :
    PlayFabAdminModifyServerBuildResult{ src },
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
    PlayFabAdminModifyServerBuildResult{ src },
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

ModifyServerBuildResult::ModifyServerBuildResult(const PlayFabAdminModifyServerBuildResult& src)
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
    return JsonUtils::ToJson<PlayFabAdminModifyServerBuildResult>(*this);
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult() :
    PlayFabAdminModifyUserVirtualCurrencyResult{}
{
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src) :
    PlayFabAdminModifyUserVirtualCurrencyResult{ src },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(ModifyUserVirtualCurrencyResult&& src) :
    PlayFabAdminModifyUserVirtualCurrencyResult{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(const PlayFabAdminModifyUserVirtualCurrencyResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyUserVirtualCurrencyResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Balance", balance);
    JsonUtils::ObjectGetMember(input, "BalanceChange", balanceChange);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue ModifyUserVirtualCurrencyResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminModifyUserVirtualCurrencyResult>(*this);
}

size_t ModifyUserVirtualCurrencyResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminModifyUserVirtualCurrencyResult) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_virtualCurrency.size() + 1);
    return serializedSize;
}

void ModifyUserVirtualCurrencyResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminModifyUserVirtualCurrencyResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminModifyUserVirtualCurrencyResult);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_virtualCurrency.data(), m_virtualCurrency.size() + 1);
    serializedStruct->virtualCurrency = stringBuffer;
    stringBuffer += m_virtualCurrency.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RandomResultTable::RandomResultTable() :
    PlayFabAdminRandomResultTable{}
{
}

RandomResultTable::RandomResultTable(const RandomResultTable& src) :
    PlayFabAdminRandomResultTable{ src },
    m_nodes{ src.m_nodes },
    m_tableId{ src.m_tableId }
{
    nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

RandomResultTable::RandomResultTable(RandomResultTable&& src) :
    PlayFabAdminRandomResultTable{ src },
    m_nodes{ std::move(src.m_nodes) },
    m_tableId{ std::move(src.m_tableId) }
{
    nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

RandomResultTable::RandomResultTable(const PlayFabAdminRandomResultTable& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RandomResultTable::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Nodes", m_nodes, nodes, nodesCount);
    JsonUtils::ObjectGetMember(input, "TableId", m_tableId, tableId);
}

JsonValue RandomResultTable::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRandomResultTable>(*this);
}

RefundPurchaseRequest::RefundPurchaseRequest() :
    PlayFabAdminRefundPurchaseRequest{}
{
}

RefundPurchaseRequest::RefundPurchaseRequest(const RefundPurchaseRequest& src) :
    PlayFabAdminRefundPurchaseRequest{ src },
    m_orderId{ src.m_orderId },
    m_playFabId{ src.m_playFabId },
    m_reason{ src.m_reason }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

RefundPurchaseRequest::RefundPurchaseRequest(RefundPurchaseRequest&& src) :
    PlayFabAdminRefundPurchaseRequest{ src },
    m_orderId{ std::move(src.m_orderId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_reason{ std::move(src.m_reason) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

RefundPurchaseRequest::RefundPurchaseRequest(const PlayFabAdminRefundPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RefundPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue RefundPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRefundPurchaseRequest>(*this);
}

size_t RefundPurchaseRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminRefundPurchaseRequest) };
    serializedSize += (m_orderId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_reason.size() + 1);
    return serializedSize;
}

void RefundPurchaseRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminRefundPurchaseRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminRefundPurchaseRequest);
    memcpy(stringBuffer, m_orderId.data(), m_orderId.size() + 1);
    serializedStruct->orderId = stringBuffer;
    stringBuffer += m_orderId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_reason.data(), m_reason.size() + 1);
    serializedStruct->reason = stringBuffer;
    stringBuffer += m_reason.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RefundPurchaseResponse::RefundPurchaseResponse() :
    PlayFabAdminRefundPurchaseResponse{}
{
}

RefundPurchaseResponse::RefundPurchaseResponse(const RefundPurchaseResponse& src) :
    PlayFabAdminRefundPurchaseResponse{ src },
    m_purchaseStatus{ src.m_purchaseStatus }
{
    purchaseStatus = m_purchaseStatus.empty() ? nullptr : m_purchaseStatus.data();
}

RefundPurchaseResponse::RefundPurchaseResponse(RefundPurchaseResponse&& src) :
    PlayFabAdminRefundPurchaseResponse{ src },
    m_purchaseStatus{ std::move(src.m_purchaseStatus) }
{
    purchaseStatus = m_purchaseStatus.empty() ? nullptr : m_purchaseStatus.data();
}

RefundPurchaseResponse::RefundPurchaseResponse(const PlayFabAdminRefundPurchaseResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RefundPurchaseResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PurchaseStatus", m_purchaseStatus, purchaseStatus);
}

JsonValue RefundPurchaseResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRefundPurchaseResponse>(*this);
}

size_t RefundPurchaseResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminRefundPurchaseResponse) };
    serializedSize += (m_purchaseStatus.size() + 1);
    return serializedSize;
}

void RefundPurchaseResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminRefundPurchaseResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminRefundPurchaseResponse);
    memcpy(stringBuffer, m_purchaseStatus.data(), m_purchaseStatus.size() + 1);
    serializedStruct->purchaseStatus = stringBuffer;
    stringBuffer += m_purchaseStatus.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RemovePlayerTagRequest::RemovePlayerTagRequest() :
    PlayFabAdminRemovePlayerTagRequest{}
{
}

RemovePlayerTagRequest::RemovePlayerTagRequest(const RemovePlayerTagRequest& src) :
    PlayFabAdminRemovePlayerTagRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_tagName{ src.m_tagName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

RemovePlayerTagRequest::RemovePlayerTagRequest(RemovePlayerTagRequest&& src) :
    PlayFabAdminRemovePlayerTagRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tagName{ std::move(src.m_tagName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

RemovePlayerTagRequest::RemovePlayerTagRequest(const PlayFabAdminRemovePlayerTagRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemovePlayerTagRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TagName", m_tagName, tagName);
}

JsonValue RemovePlayerTagRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRemovePlayerTagRequest>(*this);
}

RemoveServerBuildRequest::RemoveServerBuildRequest() :
    PlayFabAdminRemoveServerBuildRequest{}
{
}

RemoveServerBuildRequest::RemoveServerBuildRequest(const RemoveServerBuildRequest& src) :
    PlayFabAdminRemoveServerBuildRequest{ src },
    m_buildId{ src.m_buildId }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

RemoveServerBuildRequest::RemoveServerBuildRequest(RemoveServerBuildRequest&& src) :
    PlayFabAdminRemoveServerBuildRequest{ src },
    m_buildId{ std::move(src.m_buildId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
}

RemoveServerBuildRequest::RemoveServerBuildRequest(const PlayFabAdminRemoveServerBuildRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveServerBuildRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
}

JsonValue RemoveServerBuildRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRemoveServerBuildRequest>(*this);
}

size_t RemoveServerBuildRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminRemoveServerBuildRequest) };
    serializedSize += (m_buildId.size() + 1);
    return serializedSize;
}

void RemoveServerBuildRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminRemoveServerBuildRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminRemoveServerBuildRequest);
    memcpy(stringBuffer, m_buildId.data(), m_buildId.size() + 1);
    serializedStruct->buildId = stringBuffer;
    stringBuffer += m_buildId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RemoveVirtualCurrencyTypesRequest::RemoveVirtualCurrencyTypesRequest() :
    PlayFabAdminRemoveVirtualCurrencyTypesRequest{}
{
}

RemoveVirtualCurrencyTypesRequest::RemoveVirtualCurrencyTypesRequest(const RemoveVirtualCurrencyTypesRequest& src) :
    PlayFabAdminRemoveVirtualCurrencyTypesRequest{ src },
    m_virtualCurrencies{ src.m_virtualCurrencies }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

RemoveVirtualCurrencyTypesRequest::RemoveVirtualCurrencyTypesRequest(RemoveVirtualCurrencyTypesRequest&& src) :
    PlayFabAdminRemoveVirtualCurrencyTypesRequest{ src },
    m_virtualCurrencies{ std::move(src.m_virtualCurrencies) }
{
    virtualCurrencies = m_virtualCurrencies.Empty() ? nullptr : m_virtualCurrencies.Data();
}

RemoveVirtualCurrencyTypesRequest::RemoveVirtualCurrencyTypesRequest(const PlayFabAdminRemoveVirtualCurrencyTypesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveVirtualCurrencyTypesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "VirtualCurrencies", m_virtualCurrencies, virtualCurrencies, virtualCurrenciesCount);
}

JsonValue RemoveVirtualCurrencyTypesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRemoveVirtualCurrencyTypesRequest>(*this);
}

ResetCharacterStatisticsRequest::ResetCharacterStatisticsRequest() :
    PlayFabAdminResetCharacterStatisticsRequest{}
{
}

ResetCharacterStatisticsRequest::ResetCharacterStatisticsRequest(const ResetCharacterStatisticsRequest& src) :
    PlayFabAdminResetCharacterStatisticsRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ResetCharacterStatisticsRequest::ResetCharacterStatisticsRequest(ResetCharacterStatisticsRequest&& src) :
    PlayFabAdminResetCharacterStatisticsRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ResetCharacterStatisticsRequest::ResetCharacterStatisticsRequest(const PlayFabAdminResetCharacterStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResetCharacterStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ResetCharacterStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminResetCharacterStatisticsRequest>(*this);
}

ResetPasswordRequest::ResetPasswordRequest() :
    PlayFabAdminResetPasswordRequest{}
{
}

ResetPasswordRequest::ResetPasswordRequest(const ResetPasswordRequest& src) :
    PlayFabAdminResetPasswordRequest{ src },
    m_customTags{ src.m_customTags },
    m_password{ src.m_password },
    m_token{ src.m_token }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    password = m_password.empty() ? nullptr : m_password.data();
    token = m_token.empty() ? nullptr : m_token.data();
}

ResetPasswordRequest::ResetPasswordRequest(ResetPasswordRequest&& src) :
    PlayFabAdminResetPasswordRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_password{ std::move(src.m_password) },
    m_token{ std::move(src.m_token) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    password = m_password.empty() ? nullptr : m_password.data();
    token = m_token.empty() ? nullptr : m_token.data();
}

ResetPasswordRequest::ResetPasswordRequest(const PlayFabAdminResetPasswordRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResetPasswordRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "Token", m_token, token);
}

JsonValue ResetPasswordRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminResetPasswordRequest>(*this);
}

ResetUserStatisticsRequest::ResetUserStatisticsRequest() :
    PlayFabAdminResetUserStatisticsRequest{}
{
}

ResetUserStatisticsRequest::ResetUserStatisticsRequest(const ResetUserStatisticsRequest& src) :
    PlayFabAdminResetUserStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ResetUserStatisticsRequest::ResetUserStatisticsRequest(ResetUserStatisticsRequest&& src) :
    PlayFabAdminResetUserStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ResetUserStatisticsRequest::ResetUserStatisticsRequest(const PlayFabAdminResetUserStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResetUserStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ResetUserStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminResetUserStatisticsRequest>(*this);
}

ResolvePurchaseDisputeRequest::ResolvePurchaseDisputeRequest() :
    PlayFabAdminResolvePurchaseDisputeRequest{}
{
}

ResolvePurchaseDisputeRequest::ResolvePurchaseDisputeRequest(const ResolvePurchaseDisputeRequest& src) :
    PlayFabAdminResolvePurchaseDisputeRequest{ src },
    m_orderId{ src.m_orderId },
    m_playFabId{ src.m_playFabId },
    m_reason{ src.m_reason }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

ResolvePurchaseDisputeRequest::ResolvePurchaseDisputeRequest(ResolvePurchaseDisputeRequest&& src) :
    PlayFabAdminResolvePurchaseDisputeRequest{ src },
    m_orderId{ std::move(src.m_orderId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_reason{ std::move(src.m_reason) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

ResolvePurchaseDisputeRequest::ResolvePurchaseDisputeRequest(const PlayFabAdminResolvePurchaseDisputeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResolvePurchaseDisputeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "Outcome", outcome);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue ResolvePurchaseDisputeRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminResolvePurchaseDisputeRequest>(*this);
}

size_t ResolvePurchaseDisputeRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminResolvePurchaseDisputeRequest) };
    serializedSize += (m_orderId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_reason.size() + 1);
    return serializedSize;
}

void ResolvePurchaseDisputeRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminResolvePurchaseDisputeRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminResolvePurchaseDisputeRequest);
    memcpy(stringBuffer, m_orderId.data(), m_orderId.size() + 1);
    serializedStruct->orderId = stringBuffer;
    stringBuffer += m_orderId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_reason.data(), m_reason.size() + 1);
    serializedStruct->reason = stringBuffer;
    stringBuffer += m_reason.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ResolvePurchaseDisputeResponse::ResolvePurchaseDisputeResponse() :
    PlayFabAdminResolvePurchaseDisputeResponse{}
{
}

ResolvePurchaseDisputeResponse::ResolvePurchaseDisputeResponse(const ResolvePurchaseDisputeResponse& src) :
    PlayFabAdminResolvePurchaseDisputeResponse{ src },
    m_purchaseStatus{ src.m_purchaseStatus }
{
    purchaseStatus = m_purchaseStatus.empty() ? nullptr : m_purchaseStatus.data();
}

ResolvePurchaseDisputeResponse::ResolvePurchaseDisputeResponse(ResolvePurchaseDisputeResponse&& src) :
    PlayFabAdminResolvePurchaseDisputeResponse{ src },
    m_purchaseStatus{ std::move(src.m_purchaseStatus) }
{
    purchaseStatus = m_purchaseStatus.empty() ? nullptr : m_purchaseStatus.data();
}

ResolvePurchaseDisputeResponse::ResolvePurchaseDisputeResponse(const PlayFabAdminResolvePurchaseDisputeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResolvePurchaseDisputeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PurchaseStatus", m_purchaseStatus, purchaseStatus);
}

JsonValue ResolvePurchaseDisputeResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminResolvePurchaseDisputeResponse>(*this);
}

size_t ResolvePurchaseDisputeResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminResolvePurchaseDisputeResponse) };
    serializedSize += (m_purchaseStatus.size() + 1);
    return serializedSize;
}

void ResolvePurchaseDisputeResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminResolvePurchaseDisputeResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminResolvePurchaseDisputeResponse);
    memcpy(stringBuffer, m_purchaseStatus.data(), m_purchaseStatus.size() + 1);
    serializedStruct->purchaseStatus = stringBuffer;
    stringBuffer += m_purchaseStatus.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest() :
    PlayFabAdminRevokeAllBansForUserRequest{}
{
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest(const RevokeAllBansForUserRequest& src) :
    PlayFabAdminRevokeAllBansForUserRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest(RevokeAllBansForUserRequest&& src) :
    PlayFabAdminRevokeAllBansForUserRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest(const PlayFabAdminRevokeAllBansForUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeAllBansForUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RevokeAllBansForUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRevokeAllBansForUserRequest>(*this);
}

size_t RevokeAllBansForUserRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminRevokeAllBansForUserRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void RevokeAllBansForUserRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminRevokeAllBansForUserRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminRevokeAllBansForUserRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult() :
    PlayFabAdminRevokeAllBansForUserResult{}
{
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult(const RevokeAllBansForUserResult& src) :
    PlayFabAdminRevokeAllBansForUserResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult(RevokeAllBansForUserResult&& src) :
    PlayFabAdminRevokeAllBansForUserResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult(const PlayFabAdminRevokeAllBansForUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeAllBansForUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue RevokeAllBansForUserResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRevokeAllBansForUserResult>(*this);
}

RevokeBansRequest::RevokeBansRequest() :
    PlayFabAdminRevokeBansRequest{}
{
}

RevokeBansRequest::RevokeBansRequest(const RevokeBansRequest& src) :
    PlayFabAdminRevokeBansRequest{ src },
    m_banIds{ src.m_banIds }
{
    banIds = m_banIds.Empty() ? nullptr : m_banIds.Data();
}

RevokeBansRequest::RevokeBansRequest(RevokeBansRequest&& src) :
    PlayFabAdminRevokeBansRequest{ src },
    m_banIds{ std::move(src.m_banIds) }
{
    banIds = m_banIds.Empty() ? nullptr : m_banIds.Data();
}

RevokeBansRequest::RevokeBansRequest(const PlayFabAdminRevokeBansRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeBansRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanIds", m_banIds, banIds, banIdsCount);
}

JsonValue RevokeBansRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRevokeBansRequest>(*this);
}

RevokeBansResult::RevokeBansResult() :
    PlayFabAdminRevokeBansResult{}
{
}

RevokeBansResult::RevokeBansResult(const RevokeBansResult& src) :
    PlayFabAdminRevokeBansResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeBansResult::RevokeBansResult(RevokeBansResult&& src) :
    PlayFabAdminRevokeBansResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeBansResult::RevokeBansResult(const PlayFabAdminRevokeBansResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeBansResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue RevokeBansResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRevokeBansResult>(*this);
}

RevokeInventoryItem::RevokeInventoryItem() :
    PlayFabAdminRevokeInventoryItem{}
{
}

RevokeInventoryItem::RevokeInventoryItem(const RevokeInventoryItem& src) :
    PlayFabAdminRevokeInventoryItem{ src },
    m_characterId{ src.m_characterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItem::RevokeInventoryItem(RevokeInventoryItem&& src) :
    PlayFabAdminRevokeInventoryItem{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItem::RevokeInventoryItem(const PlayFabAdminRevokeInventoryItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RevokeInventoryItem::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRevokeInventoryItem>(*this);
}

size_t RevokeInventoryItem::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminRevokeInventoryItem) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void RevokeInventoryItem::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminRevokeInventoryItem{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminRevokeInventoryItem);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest() :
    PlayFabAdminRevokeInventoryItemRequest{}
{
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src) :
    PlayFabAdminRevokeInventoryItemRequest{ src },
    m_characterId{ src.m_characterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest(RevokeInventoryItemRequest&& src) :
    PlayFabAdminRevokeInventoryItemRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest(const PlayFabAdminRevokeInventoryItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RevokeInventoryItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRevokeInventoryItemRequest>(*this);
}

size_t RevokeInventoryItemRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminRevokeInventoryItemRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void RevokeInventoryItemRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminRevokeInventoryItemRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminRevokeInventoryItemRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest() :
    PlayFabAdminRevokeInventoryItemsRequest{}
{
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest(const RevokeInventoryItemsRequest& src) :
    PlayFabAdminRevokeInventoryItemsRequest{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest(RevokeInventoryItemsRequest&& src) :
    PlayFabAdminRevokeInventoryItemsRequest{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest(const PlayFabAdminRevokeInventoryItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue RevokeInventoryItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRevokeInventoryItemsRequest>(*this);
}

RevokeItemError::RevokeItemError() :
    PlayFabAdminRevokeItemError{}
{
}

RevokeItemError::RevokeItemError(const RevokeItemError& src) :
    PlayFabAdminRevokeItemError{ src },
    m_error{ src.m_error },
    m_item{ src.m_item }
{
    error = m_error ? m_error.operator->() : nullptr;
    item = m_item ? m_item.operator->() : nullptr;
}

RevokeItemError::RevokeItemError(RevokeItemError&& src) :
    PlayFabAdminRevokeItemError{ src },
    m_error{ std::move(src.m_error) },
    m_item{ std::move(src.m_item) }
{
    error = m_error ? m_error.operator->() : nullptr;
    item = m_item ? m_item.operator->() : nullptr;
}

RevokeItemError::RevokeItemError(const PlayFabAdminRevokeItemError& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeItemError::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "Item", m_item, item);
}

JsonValue RevokeItemError::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRevokeItemError>(*this);
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult() :
    PlayFabAdminRevokeInventoryItemsResult{}
{
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult(const RevokeInventoryItemsResult& src) :
    PlayFabAdminRevokeInventoryItemsResult{ src },
    m_errors{ src.m_errors }
{
    errors = m_errors.Empty() ? nullptr : m_errors.Data();
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult(RevokeInventoryItemsResult&& src) :
    PlayFabAdminRevokeInventoryItemsResult{ src },
    m_errors{ std::move(src.m_errors) }
{
    errors = m_errors.Empty() ? nullptr : m_errors.Data();
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult(const PlayFabAdminRevokeInventoryItemsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItemsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Errors", m_errors, errors, errorsCount);
}

JsonValue RevokeInventoryItemsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRevokeInventoryItemsResult>(*this);
}

RunTaskRequest::RunTaskRequest() :
    PlayFabAdminRunTaskRequest{}
{
}

RunTaskRequest::RunTaskRequest(const RunTaskRequest& src) :
    PlayFabAdminRunTaskRequest{ src },
    m_customTags{ src.m_customTags },
    m_identifier{ src.m_identifier }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

RunTaskRequest::RunTaskRequest(RunTaskRequest&& src) :
    PlayFabAdminRunTaskRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_identifier{ std::move(src.m_identifier) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

RunTaskRequest::RunTaskRequest(const PlayFabAdminRunTaskRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminRunTaskRequest>(*this);
}

RunTaskResult::RunTaskResult() :
    PlayFabAdminRunTaskResult{}
{
}

RunTaskResult::RunTaskResult(const RunTaskResult& src) :
    PlayFabAdminRunTaskResult{ src },
    m_taskInstanceId{ src.m_taskInstanceId }
{
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

RunTaskResult::RunTaskResult(RunTaskResult&& src) :
    PlayFabAdminRunTaskResult{ src },
    m_taskInstanceId{ std::move(src.m_taskInstanceId) }
{
    taskInstanceId = m_taskInstanceId.empty() ? nullptr : m_taskInstanceId.data();
}

RunTaskResult::RunTaskResult(const PlayFabAdminRunTaskResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RunTaskResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TaskInstanceId", m_taskInstanceId, taskInstanceId);
}

JsonValue RunTaskResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminRunTaskResult>(*this);
}

size_t RunTaskResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminRunTaskResult) };
    serializedSize += (m_taskInstanceId.size() + 1);
    return serializedSize;
}

void RunTaskResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminRunTaskResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminRunTaskResult);
    memcpy(stringBuffer, m_taskInstanceId.data(), m_taskInstanceId.size() + 1);
    serializedStruct->taskInstanceId = stringBuffer;
    stringBuffer += m_taskInstanceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SendAccountRecoveryEmailRequest::SendAccountRecoveryEmailRequest() :
    PlayFabAdminSendAccountRecoveryEmailRequest{}
{
}

SendAccountRecoveryEmailRequest::SendAccountRecoveryEmailRequest(const SendAccountRecoveryEmailRequest& src) :
    PlayFabAdminSendAccountRecoveryEmailRequest{ src },
    m_customTags{ src.m_customTags },
    m_email{ src.m_email },
    m_emailTemplateId{ src.m_emailTemplateId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
}

SendAccountRecoveryEmailRequest::SendAccountRecoveryEmailRequest(SendAccountRecoveryEmailRequest&& src) :
    PlayFabAdminSendAccountRecoveryEmailRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_email{ std::move(src.m_email) },
    m_emailTemplateId{ std::move(src.m_emailTemplateId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
}

SendAccountRecoveryEmailRequest::SendAccountRecoveryEmailRequest(const PlayFabAdminSendAccountRecoveryEmailRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SendAccountRecoveryEmailRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
}

JsonValue SendAccountRecoveryEmailRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSendAccountRecoveryEmailRequest>(*this);
}

SetPlayerSecretRequest::SetPlayerSecretRequest() :
    PlayFabAdminSetPlayerSecretRequest{}
{
}

SetPlayerSecretRequest::SetPlayerSecretRequest(const SetPlayerSecretRequest& src) :
    PlayFabAdminSetPlayerSecretRequest{ src },
    m_playerSecret{ src.m_playerSecret },
    m_playFabId{ src.m_playFabId }
{
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

SetPlayerSecretRequest::SetPlayerSecretRequest(SetPlayerSecretRequest&& src) :
    PlayFabAdminSetPlayerSecretRequest{ src },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

SetPlayerSecretRequest::SetPlayerSecretRequest(const PlayFabAdminSetPlayerSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetPlayerSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue SetPlayerSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSetPlayerSecretRequest>(*this);
}

size_t SetPlayerSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminSetPlayerSecretRequest) };
    serializedSize += (m_playerSecret.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void SetPlayerSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminSetPlayerSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminSetPlayerSecretRequest);
    memcpy(stringBuffer, m_playerSecret.data(), m_playerSecret.size() + 1);
    serializedStruct->playerSecret = stringBuffer;
    stringBuffer += m_playerSecret.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetPublishedRevisionRequest::SetPublishedRevisionRequest() :
    PlayFabAdminSetPublishedRevisionRequest{}
{
}

SetPublishedRevisionRequest::SetPublishedRevisionRequest(const SetPublishedRevisionRequest& src) :
    PlayFabAdminSetPublishedRevisionRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

SetPublishedRevisionRequest::SetPublishedRevisionRequest(SetPublishedRevisionRequest&& src) :
    PlayFabAdminSetPublishedRevisionRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

SetPublishedRevisionRequest::SetPublishedRevisionRequest(const PlayFabAdminSetPublishedRevisionRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminSetPublishedRevisionRequest>(*this);
}

SetPublisherDataRequest::SetPublisherDataRequest() :
    PlayFabAdminSetPublisherDataRequest{}
{
}

SetPublisherDataRequest::SetPublisherDataRequest(const SetPublisherDataRequest& src) :
    PlayFabAdminSetPublisherDataRequest{ src },
    m_key{ src.m_key },
    m_value{ src.m_value }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetPublisherDataRequest::SetPublisherDataRequest(SetPublisherDataRequest&& src) :
    PlayFabAdminSetPublisherDataRequest{ src },
    m_key{ std::move(src.m_key) },
    m_value{ std::move(src.m_value) }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetPublisherDataRequest::SetPublisherDataRequest(const PlayFabAdminSetPublisherDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetPublisherDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue SetPublisherDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSetPublisherDataRequest>(*this);
}

size_t SetPublisherDataRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminSetPublisherDataRequest) };
    serializedSize += (m_key.size() + 1);
    serializedSize += (m_value.size() + 1);
    return serializedSize;
}

void SetPublisherDataRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminSetPublisherDataRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminSetPublisherDataRequest);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
    serializedStruct->value = stringBuffer;
    stringBuffer += m_value.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

TitleDataKeyValue::TitleDataKeyValue() :
    PlayFabAdminTitleDataKeyValue{}
{
}

TitleDataKeyValue::TitleDataKeyValue(const TitleDataKeyValue& src) :
    PlayFabAdminTitleDataKeyValue{ src },
    m_key{ src.m_key },
    m_value{ src.m_value }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

TitleDataKeyValue::TitleDataKeyValue(TitleDataKeyValue&& src) :
    PlayFabAdminTitleDataKeyValue{ src },
    m_key{ std::move(src.m_key) },
    m_value{ std::move(src.m_value) }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

TitleDataKeyValue::TitleDataKeyValue(const PlayFabAdminTitleDataKeyValue& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TitleDataKeyValue::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue TitleDataKeyValue::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminTitleDataKeyValue>(*this);
}

size_t TitleDataKeyValue::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminTitleDataKeyValue) };
    serializedSize += (m_key.size() + 1);
    serializedSize += (m_value.size() + 1);
    return serializedSize;
}

void TitleDataKeyValue::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminTitleDataKeyValue{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminTitleDataKeyValue);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
    serializedStruct->value = stringBuffer;
    stringBuffer += m_value.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetTitleDataAndOverridesRequest::SetTitleDataAndOverridesRequest() :
    PlayFabAdminSetTitleDataAndOverridesRequest{}
{
}

SetTitleDataAndOverridesRequest::SetTitleDataAndOverridesRequest(const SetTitleDataAndOverridesRequest& src) :
    PlayFabAdminSetTitleDataAndOverridesRequest{ src },
    m_keyValues{ src.m_keyValues },
    m_overrideLabel{ src.m_overrideLabel }
{
    keyValues = m_keyValues.Empty() ? nullptr : m_keyValues.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

SetTitleDataAndOverridesRequest::SetTitleDataAndOverridesRequest(SetTitleDataAndOverridesRequest&& src) :
    PlayFabAdminSetTitleDataAndOverridesRequest{ src },
    m_keyValues{ std::move(src.m_keyValues) },
    m_overrideLabel{ std::move(src.m_overrideLabel) }
{
    keyValues = m_keyValues.Empty() ? nullptr : m_keyValues.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

SetTitleDataAndOverridesRequest::SetTitleDataAndOverridesRequest(const PlayFabAdminSetTitleDataAndOverridesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetTitleDataAndOverridesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "KeyValues", m_keyValues, keyValues, keyValuesCount);
    JsonUtils::ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
}

JsonValue SetTitleDataAndOverridesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSetTitleDataAndOverridesRequest>(*this);
}

SetTitleDataRequest::SetTitleDataRequest() :
    PlayFabAdminSetTitleDataRequest{}
{
}

SetTitleDataRequest::SetTitleDataRequest(const SetTitleDataRequest& src) :
    PlayFabAdminSetTitleDataRequest{ src },
    m_key{ src.m_key },
    m_value{ src.m_value }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetTitleDataRequest::SetTitleDataRequest(SetTitleDataRequest&& src) :
    PlayFabAdminSetTitleDataRequest{ src },
    m_key{ std::move(src.m_key) },
    m_value{ std::move(src.m_value) }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetTitleDataRequest::SetTitleDataRequest(const PlayFabAdminSetTitleDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetTitleDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue SetTitleDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSetTitleDataRequest>(*this);
}

size_t SetTitleDataRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminSetTitleDataRequest) };
    serializedSize += (m_key.size() + 1);
    serializedSize += (m_value.size() + 1);
    return serializedSize;
}

void SetTitleDataRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminSetTitleDataRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminSetTitleDataRequest);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
    serializedStruct->value = stringBuffer;
    stringBuffer += m_value.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetupPushNotificationRequest::SetupPushNotificationRequest() :
    PlayFabAdminSetupPushNotificationRequest{}
{
}

SetupPushNotificationRequest::SetupPushNotificationRequest(const SetupPushNotificationRequest& src) :
    PlayFabAdminSetupPushNotificationRequest{ src },
    m_credential{ src.m_credential },
    m_key{ src.m_key },
    m_name{ src.m_name }
{
    credential = m_credential.empty() ? nullptr : m_credential.data();
    key = m_key.empty() ? nullptr : m_key.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

SetupPushNotificationRequest::SetupPushNotificationRequest(SetupPushNotificationRequest&& src) :
    PlayFabAdminSetupPushNotificationRequest{ src },
    m_credential{ std::move(src.m_credential) },
    m_key{ std::move(src.m_key) },
    m_name{ std::move(src.m_name) }
{
    credential = m_credential.empty() ? nullptr : m_credential.data();
    key = m_key.empty() ? nullptr : m_key.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

SetupPushNotificationRequest::SetupPushNotificationRequest(const PlayFabAdminSetupPushNotificationRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetupPushNotificationRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Credential", m_credential, credential);
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "OverwriteOldARN", overwriteOldARN);
    JsonUtils::ObjectGetMember(input, "Platform", platform);
}

JsonValue SetupPushNotificationRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSetupPushNotificationRequest>(*this);
}

size_t SetupPushNotificationRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminSetupPushNotificationRequest) };
    serializedSize += (m_credential.size() + 1);
    serializedSize += (m_key.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void SetupPushNotificationRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminSetupPushNotificationRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminSetupPushNotificationRequest);
    memcpy(stringBuffer, m_credential.data(), m_credential.size() + 1);
    serializedStruct->credential = stringBuffer;
    stringBuffer += m_credential.size() + 1;
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetupPushNotificationResult::SetupPushNotificationResult() :
    PlayFabAdminSetupPushNotificationResult{}
{
}

SetupPushNotificationResult::SetupPushNotificationResult(const SetupPushNotificationResult& src) :
    PlayFabAdminSetupPushNotificationResult{ src },
    m_aRN{ src.m_aRN }
{
    aRN = m_aRN.empty() ? nullptr : m_aRN.data();
}

SetupPushNotificationResult::SetupPushNotificationResult(SetupPushNotificationResult&& src) :
    PlayFabAdminSetupPushNotificationResult{ src },
    m_aRN{ std::move(src.m_aRN) }
{
    aRN = m_aRN.empty() ? nullptr : m_aRN.data();
}

SetupPushNotificationResult::SetupPushNotificationResult(const PlayFabAdminSetupPushNotificationResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetupPushNotificationResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ARN", m_aRN, aRN);
}

JsonValue SetupPushNotificationResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSetupPushNotificationResult>(*this);
}

size_t SetupPushNotificationResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminSetupPushNotificationResult) };
    serializedSize += (m_aRN.size() + 1);
    return serializedSize;
}

void SetupPushNotificationResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminSetupPushNotificationResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminSetupPushNotificationResult);
    memcpy(stringBuffer, m_aRN.data(), m_aRN.size() + 1);
    serializedStruct->aRN = stringBuffer;
    stringBuffer += m_aRN.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest() :
    PlayFabAdminSubtractUserVirtualCurrencyRequest{}
{
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src) :
    PlayFabAdminSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest(SubtractUserVirtualCurrencyRequest&& src) :
    PlayFabAdminSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest(const PlayFabAdminSubtractUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SubtractUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue SubtractUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminSubtractUserVirtualCurrencyRequest>(*this);
}

UpdateBanRequest::UpdateBanRequest() :
    PlayFabAdminUpdateBanRequest{}
{
}

UpdateBanRequest::UpdateBanRequest(const UpdateBanRequest& src) :
    PlayFabAdminUpdateBanRequest{ src },
    m_active{ src.m_active },
    m_banId{ src.m_banId },
    m_expires{ src.m_expires },
    m_IPAddress{ src.m_IPAddress },
    m_MACAddress{ src.m_MACAddress },
    m_permanent{ src.m_permanent },
    m_reason{ src.m_reason }
{
    active = m_active ? m_active.operator->() : nullptr;
    banId = m_banId.empty() ? nullptr : m_banId.data();
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    permanent = m_permanent ? m_permanent.operator->() : nullptr;
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

UpdateBanRequest::UpdateBanRequest(UpdateBanRequest&& src) :
    PlayFabAdminUpdateBanRequest{ src },
    m_active{ std::move(src.m_active) },
    m_banId{ std::move(src.m_banId) },
    m_expires{ std::move(src.m_expires) },
    m_IPAddress{ std::move(src.m_IPAddress) },
    m_MACAddress{ std::move(src.m_MACAddress) },
    m_permanent{ std::move(src.m_permanent) },
    m_reason{ std::move(src.m_reason) }
{
    active = m_active ? m_active.operator->() : nullptr;
    banId = m_banId.empty() ? nullptr : m_banId.data();
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    permanent = m_permanent ? m_permanent.operator->() : nullptr;
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

UpdateBanRequest::UpdateBanRequest(const PlayFabAdminUpdateBanRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBanRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Active", m_active, active);
    JsonUtils::ObjectGetMember(input, "BanId", m_banId, banId);
    JsonUtils::ObjectGetMember(input, "Expires", m_expires, expires, true);
    JsonUtils::ObjectGetMember(input, "IPAddress", m_IPAddress, IPAddress);
    JsonUtils::ObjectGetMember(input, "MACAddress", m_MACAddress, MACAddress);
    JsonUtils::ObjectGetMember(input, "Permanent", m_permanent, permanent);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue UpdateBanRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateBanRequest>(*this);
}

UpdateBansRequest::UpdateBansRequest() :
    PlayFabAdminUpdateBansRequest{}
{
}

UpdateBansRequest::UpdateBansRequest(const UpdateBansRequest& src) :
    PlayFabAdminUpdateBansRequest{ src },
    m_bans{ src.m_bans }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
}

UpdateBansRequest::UpdateBansRequest(UpdateBansRequest&& src) :
    PlayFabAdminUpdateBansRequest{ src },
    m_bans{ std::move(src.m_bans) }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
}

UpdateBansRequest::UpdateBansRequest(const PlayFabAdminUpdateBansRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBansRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Bans", m_bans, bans, bansCount);
}

JsonValue UpdateBansRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateBansRequest>(*this);
}

UpdateBansResult::UpdateBansResult() :
    PlayFabAdminUpdateBansResult{}
{
}

UpdateBansResult::UpdateBansResult(const UpdateBansResult& src) :
    PlayFabAdminUpdateBansResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

UpdateBansResult::UpdateBansResult(UpdateBansResult&& src) :
    PlayFabAdminUpdateBansResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

UpdateBansResult::UpdateBansResult(const PlayFabAdminUpdateBansResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBansResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue UpdateBansResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateBansResult>(*this);
}

UpdateCatalogItemsRequest::UpdateCatalogItemsRequest() :
    PlayFabAdminUpdateCatalogItemsRequest{}
{
}

UpdateCatalogItemsRequest::UpdateCatalogItemsRequest(const UpdateCatalogItemsRequest& src) :
    PlayFabAdminUpdateCatalogItemsRequest{ src },
    m_catalog{ src.m_catalog },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_setAsDefaultCatalog{ src.m_setAsDefaultCatalog }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    setAsDefaultCatalog = m_setAsDefaultCatalog ? m_setAsDefaultCatalog.operator->() : nullptr;
}

UpdateCatalogItemsRequest::UpdateCatalogItemsRequest(UpdateCatalogItemsRequest&& src) :
    PlayFabAdminUpdateCatalogItemsRequest{ src },
    m_catalog{ std::move(src.m_catalog) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_setAsDefaultCatalog{ std::move(src.m_setAsDefaultCatalog) }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    setAsDefaultCatalog = m_setAsDefaultCatalog ? m_setAsDefaultCatalog.operator->() : nullptr;
}

UpdateCatalogItemsRequest::UpdateCatalogItemsRequest(const PlayFabAdminUpdateCatalogItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateCatalogItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Catalog", m_catalog, catalog, catalogCount);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "SetAsDefaultCatalog", m_setAsDefaultCatalog, setAsDefaultCatalog);
}

JsonValue UpdateCatalogItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateCatalogItemsRequest>(*this);
}

UpdateCloudScriptRequest::UpdateCloudScriptRequest() :
    PlayFabAdminUpdateCloudScriptRequest{}
{
}

UpdateCloudScriptRequest::UpdateCloudScriptRequest(const UpdateCloudScriptRequest& src) :
    PlayFabAdminUpdateCloudScriptRequest{ src },
    m_customTags{ src.m_customTags },
    m_developerPlayFabId{ src.m_developerPlayFabId },
    m_files{ src.m_files }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    developerPlayFabId = m_developerPlayFabId.empty() ? nullptr : m_developerPlayFabId.data();
    files = m_files.Empty() ? nullptr : m_files.Data();
}

UpdateCloudScriptRequest::UpdateCloudScriptRequest(UpdateCloudScriptRequest&& src) :
    PlayFabAdminUpdateCloudScriptRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_developerPlayFabId{ std::move(src.m_developerPlayFabId) },
    m_files{ std::move(src.m_files) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    developerPlayFabId = m_developerPlayFabId.empty() ? nullptr : m_developerPlayFabId.data();
    files = m_files.Empty() ? nullptr : m_files.Data();
}

UpdateCloudScriptRequest::UpdateCloudScriptRequest(const PlayFabAdminUpdateCloudScriptRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminUpdateCloudScriptRequest>(*this);
}

UpdateCloudScriptResult::UpdateCloudScriptResult() :
    PlayFabAdminUpdateCloudScriptResult{}
{
}


UpdateCloudScriptResult::UpdateCloudScriptResult(const PlayFabAdminUpdateCloudScriptResult& src)
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
    return JsonUtils::ToJson<PlayFabAdminUpdateCloudScriptResult>(*this);
}

size_t UpdateCloudScriptResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminUpdateCloudScriptResult) };
    return serializedSize;
}

void UpdateCloudScriptResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminUpdateCloudScriptResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminUpdateCloudScriptResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

UpdateOpenIdConnectionRequest::UpdateOpenIdConnectionRequest() :
    PlayFabAdminUpdateOpenIdConnectionRequest{}
{
}

UpdateOpenIdConnectionRequest::UpdateOpenIdConnectionRequest(const UpdateOpenIdConnectionRequest& src) :
    PlayFabAdminUpdateOpenIdConnectionRequest{ src },
    m_clientId{ src.m_clientId },
    m_clientSecret{ src.m_clientSecret },
    m_connectionId{ src.m_connectionId },
    m_issuerDiscoveryUrl{ src.m_issuerDiscoveryUrl },
    m_issuerInformation{ src.m_issuerInformation }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuerDiscoveryUrl = m_issuerDiscoveryUrl.empty() ? nullptr : m_issuerDiscoveryUrl.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

UpdateOpenIdConnectionRequest::UpdateOpenIdConnectionRequest(UpdateOpenIdConnectionRequest&& src) :
    PlayFabAdminUpdateOpenIdConnectionRequest{ src },
    m_clientId{ std::move(src.m_clientId) },
    m_clientSecret{ std::move(src.m_clientSecret) },
    m_connectionId{ std::move(src.m_connectionId) },
    m_issuerDiscoveryUrl{ std::move(src.m_issuerDiscoveryUrl) },
    m_issuerInformation{ std::move(src.m_issuerInformation) }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuerDiscoveryUrl = m_issuerDiscoveryUrl.empty() ? nullptr : m_issuerDiscoveryUrl.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

UpdateOpenIdConnectionRequest::UpdateOpenIdConnectionRequest(const PlayFabAdminUpdateOpenIdConnectionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateOpenIdConnectionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ClientId", m_clientId, clientId);
    JsonUtils::ObjectGetMember(input, "ClientSecret", m_clientSecret, clientSecret);
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "IssuerDiscoveryUrl", m_issuerDiscoveryUrl, issuerDiscoveryUrl);
    JsonUtils::ObjectGetMember(input, "IssuerInformation", m_issuerInformation, issuerInformation);
}

JsonValue UpdateOpenIdConnectionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateOpenIdConnectionRequest>(*this);
}

UpdatePlayerSharedSecretRequest::UpdatePlayerSharedSecretRequest() :
    PlayFabAdminUpdatePlayerSharedSecretRequest{}
{
}

UpdatePlayerSharedSecretRequest::UpdatePlayerSharedSecretRequest(const UpdatePlayerSharedSecretRequest& src) :
    PlayFabAdminUpdatePlayerSharedSecretRequest{ src },
    m_friendlyName{ src.m_friendlyName },
    m_secretKey{ src.m_secretKey }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

UpdatePlayerSharedSecretRequest::UpdatePlayerSharedSecretRequest(UpdatePlayerSharedSecretRequest&& src) :
    PlayFabAdminUpdatePlayerSharedSecretRequest{ src },
    m_friendlyName{ std::move(src.m_friendlyName) },
    m_secretKey{ std::move(src.m_secretKey) }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

UpdatePlayerSharedSecretRequest::UpdatePlayerSharedSecretRequest(const PlayFabAdminUpdatePlayerSharedSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePlayerSharedSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Disabled", disabled);
    JsonUtils::ObjectGetMember(input, "FriendlyName", m_friendlyName, friendlyName);
    JsonUtils::ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
}

JsonValue UpdatePlayerSharedSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdatePlayerSharedSecretRequest>(*this);
}

size_t UpdatePlayerSharedSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminUpdatePlayerSharedSecretRequest) };
    serializedSize += (m_friendlyName.size() + 1);
    serializedSize += (m_secretKey.size() + 1);
    return serializedSize;
}

void UpdatePlayerSharedSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminUpdatePlayerSharedSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminUpdatePlayerSharedSecretRequest);
    memcpy(stringBuffer, m_friendlyName.data(), m_friendlyName.size() + 1);
    serializedStruct->friendlyName = stringBuffer;
    stringBuffer += m_friendlyName.size() + 1;
    memcpy(stringBuffer, m_secretKey.data(), m_secretKey.size() + 1);
    serializedStruct->secretKey = stringBuffer;
    stringBuffer += m_secretKey.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UpdatePlayerStatisticDefinitionRequest::UpdatePlayerStatisticDefinitionRequest() :
    PlayFabAdminUpdatePlayerStatisticDefinitionRequest{}
{
}

UpdatePlayerStatisticDefinitionRequest::UpdatePlayerStatisticDefinitionRequest(const UpdatePlayerStatisticDefinitionRequest& src) :
    PlayFabAdminUpdatePlayerStatisticDefinitionRequest{ src },
    m_aggregationMethod{ src.m_aggregationMethod },
    m_statisticName{ src.m_statisticName },
    m_versionChangeInterval{ src.m_versionChangeInterval }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

UpdatePlayerStatisticDefinitionRequest::UpdatePlayerStatisticDefinitionRequest(UpdatePlayerStatisticDefinitionRequest&& src) :
    PlayFabAdminUpdatePlayerStatisticDefinitionRequest{ src },
    m_aggregationMethod{ std::move(src.m_aggregationMethod) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_versionChangeInterval{ std::move(src.m_versionChangeInterval) }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

UpdatePlayerStatisticDefinitionRequest::UpdatePlayerStatisticDefinitionRequest(const PlayFabAdminUpdatePlayerStatisticDefinitionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePlayerStatisticDefinitionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AggregationMethod", m_aggregationMethod, aggregationMethod);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "VersionChangeInterval", m_versionChangeInterval, versionChangeInterval);
}

JsonValue UpdatePlayerStatisticDefinitionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdatePlayerStatisticDefinitionRequest>(*this);
}

UpdatePlayerStatisticDefinitionResult::UpdatePlayerStatisticDefinitionResult() :
    PlayFabAdminUpdatePlayerStatisticDefinitionResult{}
{
}

UpdatePlayerStatisticDefinitionResult::UpdatePlayerStatisticDefinitionResult(const UpdatePlayerStatisticDefinitionResult& src) :
    PlayFabAdminUpdatePlayerStatisticDefinitionResult{ src },
    m_statistic{ src.m_statistic }
{
    statistic = m_statistic ? m_statistic.operator->() : nullptr;
}

UpdatePlayerStatisticDefinitionResult::UpdatePlayerStatisticDefinitionResult(UpdatePlayerStatisticDefinitionResult&& src) :
    PlayFabAdminUpdatePlayerStatisticDefinitionResult{ src },
    m_statistic{ std::move(src.m_statistic) }
{
    statistic = m_statistic ? m_statistic.operator->() : nullptr;
}

UpdatePlayerStatisticDefinitionResult::UpdatePlayerStatisticDefinitionResult(const PlayFabAdminUpdatePlayerStatisticDefinitionResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePlayerStatisticDefinitionResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Statistic", m_statistic, statistic);
}

JsonValue UpdatePlayerStatisticDefinitionResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdatePlayerStatisticDefinitionResult>(*this);
}

UpdatePolicyRequest::UpdatePolicyRequest() :
    PlayFabAdminUpdatePolicyRequest{}
{
}

UpdatePolicyRequest::UpdatePolicyRequest(const UpdatePolicyRequest& src) :
    PlayFabAdminUpdatePolicyRequest{ src },
    m_policyName{ src.m_policyName },
    m_statements{ src.m_statements }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

UpdatePolicyRequest::UpdatePolicyRequest(UpdatePolicyRequest&& src) :
    PlayFabAdminUpdatePolicyRequest{ src },
    m_policyName{ std::move(src.m_policyName) },
    m_statements{ std::move(src.m_statements) }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

UpdatePolicyRequest::UpdatePolicyRequest(const PlayFabAdminUpdatePolicyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePolicyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OverwritePolicy", overwritePolicy);
    JsonUtils::ObjectGetMember(input, "PolicyName", m_policyName, policyName);
    JsonUtils::ObjectGetMember(input, "PolicyVersion", policyVersion);
    JsonUtils::ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
}

JsonValue UpdatePolicyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdatePolicyRequest>(*this);
}

UpdatePolicyResponse::UpdatePolicyResponse() :
    PlayFabAdminUpdatePolicyResponse{}
{
}

UpdatePolicyResponse::UpdatePolicyResponse(const UpdatePolicyResponse& src) :
    PlayFabAdminUpdatePolicyResponse{ src },
    m_policyName{ src.m_policyName },
    m_statements{ src.m_statements }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

UpdatePolicyResponse::UpdatePolicyResponse(UpdatePolicyResponse&& src) :
    PlayFabAdminUpdatePolicyResponse{ src },
    m_policyName{ std::move(src.m_policyName) },
    m_statements{ std::move(src.m_statements) }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

UpdatePolicyResponse::UpdatePolicyResponse(const PlayFabAdminUpdatePolicyResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePolicyResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PolicyName", m_policyName, policyName);
    JsonUtils::ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
}

JsonValue UpdatePolicyResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdatePolicyResponse>(*this);
}

UpdateRandomResultTablesRequest::UpdateRandomResultTablesRequest() :
    PlayFabAdminUpdateRandomResultTablesRequest{}
{
}

UpdateRandomResultTablesRequest::UpdateRandomResultTablesRequest(const UpdateRandomResultTablesRequest& src) :
    PlayFabAdminUpdateRandomResultTablesRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_tables{ src.m_tables }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    tables = m_tables.Empty() ? nullptr : m_tables.Data();
}

UpdateRandomResultTablesRequest::UpdateRandomResultTablesRequest(UpdateRandomResultTablesRequest&& src) :
    PlayFabAdminUpdateRandomResultTablesRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_tables{ std::move(src.m_tables) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    tables = m_tables.Empty() ? nullptr : m_tables.Data();
}

UpdateRandomResultTablesRequest::UpdateRandomResultTablesRequest(const PlayFabAdminUpdateRandomResultTablesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateRandomResultTablesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Tables", m_tables, tables, tablesCount);
}

JsonValue UpdateRandomResultTablesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateRandomResultTablesRequest>(*this);
}

UpdateSegmentRequest::UpdateSegmentRequest() :
    PlayFabAdminUpdateSegmentRequest{}
{
}

UpdateSegmentRequest::UpdateSegmentRequest(const UpdateSegmentRequest& src) :
    PlayFabAdminUpdateSegmentRequest{ src },
    m_segmentModel{ src.m_segmentModel }
{
    segmentModel = (PlayFabAdminSegmentModel const*)&m_segmentModel;
}

UpdateSegmentRequest::UpdateSegmentRequest(UpdateSegmentRequest&& src) :
    PlayFabAdminUpdateSegmentRequest{ src },
    m_segmentModel{ std::move(src.m_segmentModel) }
{
    segmentModel = (PlayFabAdminSegmentModel const*)&m_segmentModel;
}

UpdateSegmentRequest::UpdateSegmentRequest(const PlayFabAdminUpdateSegmentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateSegmentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SegmentModel", m_segmentModel, segmentModel);
}

JsonValue UpdateSegmentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateSegmentRequest>(*this);
}

UpdateSegmentResponse::UpdateSegmentResponse() :
    PlayFabAdminUpdateSegmentResponse{}
{
}

UpdateSegmentResponse::UpdateSegmentResponse(const UpdateSegmentResponse& src) :
    PlayFabAdminUpdateSegmentResponse{ src },
    m_errorMessage{ src.m_errorMessage },
    m_segmentId{ src.m_segmentId }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

UpdateSegmentResponse::UpdateSegmentResponse(UpdateSegmentResponse&& src) :
    PlayFabAdminUpdateSegmentResponse{ src },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_segmentId{ std::move(src.m_segmentId) }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

UpdateSegmentResponse::UpdateSegmentResponse(const PlayFabAdminUpdateSegmentResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateSegmentResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
}

JsonValue UpdateSegmentResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateSegmentResponse>(*this);
}

size_t UpdateSegmentResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminUpdateSegmentResponse) };
    serializedSize += (m_errorMessage.size() + 1);
    serializedSize += (m_segmentId.size() + 1);
    return serializedSize;
}

void UpdateSegmentResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminUpdateSegmentResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminUpdateSegmentResponse);
    memcpy(stringBuffer, m_errorMessage.data(), m_errorMessage.size() + 1);
    serializedStruct->errorMessage = stringBuffer;
    stringBuffer += m_errorMessage.size() + 1;
    memcpy(stringBuffer, m_segmentId.data(), m_segmentId.size() + 1);
    serializedStruct->segmentId = stringBuffer;
    stringBuffer += m_segmentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UpdateStoreItemsRequest::UpdateStoreItemsRequest() :
    PlayFabAdminUpdateStoreItemsRequest{}
{
}

UpdateStoreItemsRequest::UpdateStoreItemsRequest(const UpdateStoreItemsRequest& src) :
    PlayFabAdminUpdateStoreItemsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_marketingData{ src.m_marketingData },
    m_store{ src.m_store },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketingData = m_marketingData ? m_marketingData.operator->() : nullptr;
    store = m_store.Empty() ? nullptr : m_store.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

UpdateStoreItemsRequest::UpdateStoreItemsRequest(UpdateStoreItemsRequest&& src) :
    PlayFabAdminUpdateStoreItemsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_marketingData{ std::move(src.m_marketingData) },
    m_store{ std::move(src.m_store) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketingData = m_marketingData ? m_marketingData.operator->() : nullptr;
    store = m_store.Empty() ? nullptr : m_store.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

UpdateStoreItemsRequest::UpdateStoreItemsRequest(const PlayFabAdminUpdateStoreItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateStoreItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MarketingData", m_marketingData, marketingData);
    JsonUtils::ObjectGetMember(input, "Store", m_store, store, storeCount);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue UpdateStoreItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateStoreItemsRequest>(*this);
}

UpdateTaskRequest::UpdateTaskRequest() :
    PlayFabAdminUpdateTaskRequest{}
{
}

UpdateTaskRequest::UpdateTaskRequest(const UpdateTaskRequest& src) :
    PlayFabAdminUpdateTaskRequest{ src },
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
    PlayFabAdminUpdateTaskRequest{ src },
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

UpdateTaskRequest::UpdateTaskRequest(const PlayFabAdminUpdateTaskRequest& src)
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
    return JsonUtils::ToJson<PlayFabAdminUpdateTaskRequest>(*this);
}

UpdateUserDataRequest::UpdateUserDataRequest() :
    PlayFabAdminUpdateUserDataRequest{}
{
}

UpdateUserDataRequest::UpdateUserDataRequest(const UpdateUserDataRequest& src) :
    PlayFabAdminUpdateUserDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserDataRequest::UpdateUserDataRequest(UpdateUserDataRequest&& src) :
    PlayFabAdminUpdateUserDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserDataRequest::UpdateUserDataRequest(const PlayFabAdminUpdateUserDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateUserDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateUserDataRequest>(*this);
}

UpdateUserDataResult::UpdateUserDataResult() :
    PlayFabAdminUpdateUserDataResult{}
{
}


UpdateUserDataResult::UpdateUserDataResult(const PlayFabAdminUpdateUserDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue UpdateUserDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateUserDataResult>(*this);
}

size_t UpdateUserDataResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminUpdateUserDataResult) };
    return serializedSize;
}

void UpdateUserDataResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminUpdateUserDataResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminUpdateUserDataResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest() :
    PlayFabAdminUpdateUserInternalDataRequest{}
{
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest(const UpdateUserInternalDataRequest& src) :
    PlayFabAdminUpdateUserInternalDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest(UpdateUserInternalDataRequest&& src) :
    PlayFabAdminUpdateUserInternalDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest(const PlayFabAdminUpdateUserInternalDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserInternalDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateUserInternalDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateUserInternalDataRequest>(*this);
}

UpdateUserTitleDisplayNameRequest::UpdateUserTitleDisplayNameRequest() :
    PlayFabAdminUpdateUserTitleDisplayNameRequest{}
{
}

UpdateUserTitleDisplayNameRequest::UpdateUserTitleDisplayNameRequest(const UpdateUserTitleDisplayNameRequest& src) :
    PlayFabAdminUpdateUserTitleDisplayNameRequest{ src },
    m_customTags{ src.m_customTags },
    m_displayName{ src.m_displayName },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserTitleDisplayNameRequest::UpdateUserTitleDisplayNameRequest(UpdateUserTitleDisplayNameRequest&& src) :
    PlayFabAdminUpdateUserTitleDisplayNameRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_displayName{ std::move(src.m_displayName) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserTitleDisplayNameRequest::UpdateUserTitleDisplayNameRequest(const PlayFabAdminUpdateUserTitleDisplayNameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserTitleDisplayNameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateUserTitleDisplayNameRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateUserTitleDisplayNameRequest>(*this);
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult() :
    PlayFabAdminUpdateUserTitleDisplayNameResult{}
{
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src) :
    PlayFabAdminUpdateUserTitleDisplayNameResult{ src },
    m_displayName{ src.m_displayName }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult(UpdateUserTitleDisplayNameResult&& src) :
    PlayFabAdminUpdateUserTitleDisplayNameResult{ src },
    m_displayName{ std::move(src.m_displayName) }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult(const PlayFabAdminUpdateUserTitleDisplayNameResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserTitleDisplayNameResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
}

JsonValue UpdateUserTitleDisplayNameResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabAdminUpdateUserTitleDisplayNameResult>(*this);
}

size_t UpdateUserTitleDisplayNameResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabAdminUpdateUserTitleDisplayNameResult) };
    serializedSize += (m_displayName.size() + 1);
    return serializedSize;
}

void UpdateUserTitleDisplayNameResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabAdminUpdateUserTitleDisplayNameResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabAdminUpdateUserTitleDisplayNameResult);
    memcpy(stringBuffer, m_displayName.data(), m_displayName.size() + 1);
    serializedStruct->displayName = stringBuffer;
    stringBuffer += m_displayName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

} // namespace AdminModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabAdminAbortTaskInstanceRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminActionsOnPlayersInSegmentTaskParameter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActionId", input.actionId);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminNameIdentifier& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminActionsOnPlayersInSegmentTaskSummary& input)
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
inline JsonValue ToJson<>(const PlayFabAdminAdCampaignAttribution& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
    JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminAdCampaignSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
    JsonUtils::ObjectAddMember(output, "CampaignSource", input.campaignSource);
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminAddLocalizedNewsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Language", input.language);
    JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
    JsonUtils::ObjectAddMember(output, "Title", input.title);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminAddNewsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    JsonUtils::ObjectAddMember(output, "Title", input.title);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminAddNewsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminAddPlayerTagRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TagName", input.tagName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminAddServerBuildRequest& input)
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
inline JsonValue ToJson<>(const PlayFabAdminAddServerBuildResult& input)
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
inline JsonValue ToJson<>(const PlayFabAdminAddUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminVirtualCurrencyData& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "InitialDeposit", input.initialDeposit);
    JsonUtils::ObjectAddMember(output, "RechargeMax", input.rechargeMax);
    JsonUtils::ObjectAddMember(output, "RechargeRate", input.rechargeRate);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminAddVirtualCurrencyTypesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "VirtualCurrencies", input.virtualCurrencies, input.virtualCurrenciesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminApiCondition& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "HasSignatureOrEncryption", input.hasSignatureOrEncryption);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminBanInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Active", input.active);
    JsonUtils::ObjectAddMember(output, "BanId", input.banId);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminBanPlayerSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanHours", input.banHours);
    JsonUtils::ObjectAddMember(output, "ReasonForBan", input.reasonForBan);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminBanRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DurationInHours", input.durationInHours);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminBanUsersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Bans", input.bans, input.bansCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminBanUsersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCatalogItemBundleInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BundledItems", input.bundledItems, input.bundledItemsCount);
    JsonUtils::ObjectAddMember(output, "BundledResultTables", input.bundledResultTables, input.bundledResultTablesCount);
    JsonUtils::ObjectAddMember(output, "BundledVirtualCurrencies", input.bundledVirtualCurrencies, input.bundledVirtualCurrenciesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCatalogItemConsumableInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "UsageCount", input.usageCount);
    JsonUtils::ObjectAddMember(output, "UsagePeriod", input.usagePeriod);
    JsonUtils::ObjectAddMember(output, "UsagePeriodGroup", input.usagePeriodGroup);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCatalogItemContainerInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemContents", input.itemContents, input.itemContentsCount);
    JsonUtils::ObjectAddMember(output, "KeyItemId", input.keyItemId);
    JsonUtils::ObjectAddMember(output, "ResultTableContents", input.resultTableContents, input.resultTableContentsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyContents", input.virtualCurrencyContents, input.virtualCurrencyContentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCatalogItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Bundle", input.bundle);
    JsonUtils::ObjectAddMember(output, "CanBecomeCharacter", input.canBecomeCharacter);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "Consumable", input.consumable);
    JsonUtils::ObjectAddMember(output, "Container", input.container);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "InitialLimitedEditionCount", input.initialLimitedEditionCount);
    JsonUtils::ObjectAddMember(output, "IsLimitedEdition", input.isLimitedEdition);
    JsonUtils::ObjectAddMember(output, "IsStackable", input.isStackable);
    JsonUtils::ObjectAddMember(output, "IsTradable", input.isTradable);
    JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "ItemImageUrl", input.itemImageUrl);
    JsonUtils::ObjectAddMember(output, "RealCurrencyPrices", input.realCurrencyPrices, input.realCurrencyPricesCount);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyPrices", input.virtualCurrencyPrices, input.virtualCurrencyPricesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCheckLimitedEditionItemAvailabilityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCheckLimitedEditionItemAvailabilityResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCloudScriptFile& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FileContents", input.fileContents);
    JsonUtils::ObjectAddMember(output, "Filename", input.filename);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCloudScriptTaskParameter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Argument", input.argument);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminScriptExecutionError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminLogStatement& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data);
    JsonUtils::ObjectAddMember(output, "Level", input.level);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminExecuteCloudScriptResult& input)
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
inline JsonValue ToJson<>(const PlayFabAdminCloudScriptTaskSummary& input)
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
inline JsonValue ToJson<>(const PlayFabAdminCloudScriptVersionStatus& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LatestRevision", input.latestRevision);
    JsonUtils::ObjectAddMember(output, "PublishedRevision", input.publishedRevision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminContactEmailInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminContentInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "LastModified", input.lastModified, true);
    JsonUtils::ObjectAddMember(output, "Size", input.size);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest& input)
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
inline JsonValue ToJson<>(const PlayFabAdminCreateCloudScriptTaskRequest& input)
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
inline JsonValue ToJson<>(const PlayFabAdminInsightsScalingTaskParameter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Level", input.level);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCreateInsightsScheduledScalingTaskRequest& input)
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
inline JsonValue ToJson<>(const PlayFabAdminOpenIdIssuerInformation& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthorizationUrl", input.authorizationUrl);
    JsonUtils::ObjectAddMember(output, "Issuer", input.issuer);
    JsonUtils::ObjectAddMember(output, "JsonWebKeySet", input.jsonWebKeySet);
    JsonUtils::ObjectAddMember(output, "TokenUrl", input.tokenUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCreateOpenIdConnectionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ClientId", input.clientId);
    JsonUtils::ObjectAddMember(output, "ClientSecret", input.clientSecret);
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "IgnoreNonce", input.ignoreNonce);
    JsonUtils::ObjectAddMember(output, "IssuerDiscoveryUrl", input.issuerDiscoveryUrl);
    JsonUtils::ObjectAddMember(output, "IssuerInformation", input.issuerInformation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCreatePlayerSharedSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendlyName", input.friendlyName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCreatePlayerSharedSecretResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCreatePlayerStatisticDefinitionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AggregationMethod", input.aggregationMethod);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "VersionChangeInterval", input.versionChangeInterval);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPlayerStatisticDefinition& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AggregationMethod", input.aggregationMethod);
    JsonUtils::ObjectAddMember(output, "CurrentVersion", input.currentVersion);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "VersionChangeInterval", input.versionChangeInterval);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCreatePlayerStatisticDefinitionResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Statistic", input.statistic);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerStatisticSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminEmailNotificationSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "EmailTemplateName", input.emailTemplateName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminExecuteAzureFunctionSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AzureFunction", input.azureFunction);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GenerateFunctionExecutedEvents", input.generateFunctionExecutedEvents);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminExecuteCloudScriptSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CloudScriptFunction", input.cloudScriptFunction);
    JsonUtils::ObjectAddMember(output, "CloudScriptPublishResultsToPlayStream", input.cloudScriptPublishResultsToPlayStream);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "FunctionParameterJson", input.functionParameterJson);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGrantItemSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatelogId", input.catelogId);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "Quantity", input.quantity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGrantVirtualCurrencySegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminIncrementPlayerStatisticSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IncrementValue", input.incrementValue);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPushNotificationSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSegmentTrigger& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanPlayerAction", input.banPlayerAction);
    JsonUtils::ObjectAddMember(output, "DeletePlayerStatisticAction", input.deletePlayerStatisticAction);
    JsonUtils::ObjectAddMember(output, "EmailNotificationAction", input.emailNotificationAction);
    JsonUtils::ObjectAddMember(output, "ExecuteAzureFunctionAction", input.executeAzureFunctionAction);
    JsonUtils::ObjectAddMember(output, "ExecuteCloudScriptAction", input.executeCloudScriptAction);
    JsonUtils::ObjectAddMember(output, "GrantItemAction", input.grantItemAction);
    JsonUtils::ObjectAddMember(output, "GrantVirtualCurrencyAction", input.grantVirtualCurrencyAction);
    JsonUtils::ObjectAddMember(output, "IncrementPlayerStatisticAction", input.incrementPlayerStatisticAction);
    JsonUtils::ObjectAddMember(output, "PushNotificationAction", input.pushNotificationAction);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminFirstLoginDateSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "LogInDate", input.logInDate, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminFirstLoginTimespanSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "DurationInMinutes", input.durationInMinutes);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminLastLoginDateSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "LogInDate", input.logInDate, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminLastLoginTimespanSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "DurationInMinutes", input.durationInMinutes);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminLinkedUserAccountSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LoginProvider", input.loginProvider);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminLinkedUserAccountHasEmailSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "LoginProvider", input.loginProvider);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminLocationSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CountryCode", input.countryCode);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPushNotificationSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PushNotificationDevicePlatform", input.pushNotificationDevicePlatform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminStatisticSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "FilterValue", input.filterValue);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "UseCurrentVersion", input.useCurrentVersion);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminTagSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "TagValue", input.tagValue);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminTotalValueToDateInUSDSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUserOriginationSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LoginProvider", input.loginProvider);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminValueToDateSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "Currency", input.currency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminVirtualCurrencyBalanceSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSegmentAndDefinition& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdCampaignFilter", input.adCampaignFilter);
    JsonUtils::ObjectAddMember(output, "FirstLoginDateFilter", input.firstLoginDateFilter);
    JsonUtils::ObjectAddMember(output, "FirstLoginFilter", input.firstLoginFilter);
    JsonUtils::ObjectAddMember(output, "LastLoginDateFilter", input.lastLoginDateFilter);
    JsonUtils::ObjectAddMember(output, "LastLoginFilter", input.lastLoginFilter);
    JsonUtils::ObjectAddMember(output, "LinkedUserAccountFilter", input.linkedUserAccountFilter);
    JsonUtils::ObjectAddMember(output, "LinkedUserAccountHasEmailFilter", input.linkedUserAccountHasEmailFilter);
    JsonUtils::ObjectAddMember(output, "LocationFilter", input.locationFilter);
    JsonUtils::ObjectAddMember(output, "PushNotificationFilter", input.pushNotificationFilter);
    JsonUtils::ObjectAddMember(output, "StatisticFilter", input.statisticFilter);
    JsonUtils::ObjectAddMember(output, "TagFilter", input.tagFilter);
    JsonUtils::ObjectAddMember(output, "TotalValueToDateInUSDFilter", input.totalValueToDateInUSDFilter);
    JsonUtils::ObjectAddMember(output, "UserOriginationFilter", input.userOriginationFilter);
    JsonUtils::ObjectAddMember(output, "ValueToDateFilter", input.valueToDateFilter);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyBalanceFilter", input.virtualCurrencyBalanceFilter);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSegmentOrDefinition& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SegmentAndDefinitions", input.segmentAndDefinitions, input.segmentAndDefinitionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSegmentModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "EnteredSegmentActions", input.enteredSegmentActions, input.enteredSegmentActionsCount);
    JsonUtils::ObjectAddMember(output, "LastUpdateTime", input.lastUpdateTime, true);
    JsonUtils::ObjectAddMember(output, "LeftSegmentActions", input.leftSegmentActions, input.leftSegmentActionsCount);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    JsonUtils::ObjectAddMember(output, "SegmentOrDefinitions", input.segmentOrDefinitions, input.segmentOrDefinitionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCreateSegmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SegmentModel", input.segmentModel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCreateSegmentResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminCreateTaskResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TaskId", input.taskId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeleteContentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeleteMasterPlayerAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "MetaData", input.metaData);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeleteMasterPlayerAccountResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "JobReceiptId", input.jobReceiptId);
    JsonUtils::ObjectAddMember(output, "TitleIds", input.titleIds, input.titleIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeleteOpenIdConnectionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerSharedSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeleteSegmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeleteSegmentsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeleteStoreRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeleteTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminDeleteTitleDataOverrideRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminExportMasterPlayerDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminExportMasterPlayerDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "JobReceiptId", input.jobReceiptId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGameModeInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Gamemode", input.gamemode);
    JsonUtils::ObjectAddMember(output, "MaxPlayerCount", input.maxPlayerCount);
    JsonUtils::ObjectAddMember(output, "MinPlayerCount", input.minPlayerCount);
    JsonUtils::ObjectAddMember(output, "StartOpen", input.startOpen);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
    JsonUtils::ObjectAddMember(output, "Summary", input.summary);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetSegmentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ABTestParent", input.aBTestParent);
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetAllSegmentsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetCatalogItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetCatalogItemsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Catalog", input.catalog, input.catalogCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptRevisionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptRevisionResult& input)
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
inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptTaskInstanceResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Parameter", input.parameter);
    JsonUtils::ObjectAddMember(output, "Summary", input.summary);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptVersionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Versions", input.versions, input.versionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetContentListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Prefix", input.prefix);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetContentListResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Contents", input.contents, input.contentsCount);
    JsonUtils::ObjectAddMember(output, "ItemCount", input.itemCount);
    JsonUtils::ObjectAddMember(output, "TotalSize", input.totalSize);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetContentUploadUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ContentType", input.contentType);
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetContentUploadUrlResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "URL", input.uRL);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetDataReportRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Day", input.day);
    JsonUtils::ObjectAddMember(output, "Month", input.month);
    JsonUtils::ObjectAddMember(output, "ReportName", input.reportName);
    JsonUtils::ObjectAddMember(output, "Year", input.year);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetDataReportResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DownloadUrl", input.downloadUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    JsonUtils::ObjectAddMember(output, "EndTime", input.endTime, true);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "Mode", input.mode);
    JsonUtils::ObjectAddMember(output, "Players", input.players, input.playersCount);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
    JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
    JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
    JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
    JsonUtils::ObjectAddMember(output, "StartTime", input.startTime, true);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameModesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameModesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameModes", input.gameModes, input.gameModesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayedTitleListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayedTitleListResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TitleIds", input.titleIds, input.titleIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerIdFromAuthTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Token", input.token);
    JsonUtils::ObjectAddMember(output, "TokenType", input.tokenType);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerIdFromAuthTokenResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPlayerProfileViewConstraints& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ShowAvatarUrl", input.showAvatarUrl);
    JsonUtils::ObjectAddMember(output, "ShowBannedUntil", input.showBannedUntil);
    JsonUtils::ObjectAddMember(output, "ShowCampaignAttributions", input.showCampaignAttributions);
    JsonUtils::ObjectAddMember(output, "ShowContactEmailAddresses", input.showContactEmailAddresses);
    JsonUtils::ObjectAddMember(output, "ShowCreated", input.showCreated);
    JsonUtils::ObjectAddMember(output, "ShowDisplayName", input.showDisplayName);
    JsonUtils::ObjectAddMember(output, "ShowExperimentVariants", input.showExperimentVariants);
    JsonUtils::ObjectAddMember(output, "ShowLastLogin", input.showLastLogin);
    JsonUtils::ObjectAddMember(output, "ShowLinkedAccounts", input.showLinkedAccounts);
    JsonUtils::ObjectAddMember(output, "ShowLocations", input.showLocations);
    JsonUtils::ObjectAddMember(output, "ShowMemberships", input.showMemberships);
    JsonUtils::ObjectAddMember(output, "ShowOrigination", input.showOrigination);
    JsonUtils::ObjectAddMember(output, "ShowPushNotificationRegistrations", input.showPushNotificationRegistrations);
    JsonUtils::ObjectAddMember(output, "ShowStatistics", input.showStatistics);
    JsonUtils::ObjectAddMember(output, "ShowTags", input.showTags);
    JsonUtils::ObjectAddMember(output, "ShowTotalValueToDateInUsd", input.showTotalValueToDateInUsd);
    JsonUtils::ObjectAddMember(output, "ShowValuesToDate", input.showValuesToDate);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerProfileRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerProfileResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerSegmentsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSharedSecret& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Disabled", input.disabled);
    JsonUtils::ObjectAddMember(output, "FriendlyName", input.friendlyName);
    JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerSharedSecretsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SharedSecrets", input.sharedSecrets, input.sharedSecretsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayersInSegmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ContinuationToken", input.continuationToken);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MaxBatchSize", input.maxBatchSize);
    JsonUtils::ObjectAddMember(output, "SecondsToLive", input.secondsToLive);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPlayerLinkedAccount& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    JsonUtils::ObjectAddMember(output, "PlatformUserId", input.platformUserId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPlayerLocation& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "City", input.city);
    JsonUtils::ObjectAddMember(output, "ContinentCode", input.continentCode);
    JsonUtils::ObjectAddMember(output, "CountryCode", input.countryCode);
    JsonUtils::ObjectAddMember(output, "Latitude", input.latitude);
    JsonUtils::ObjectAddMember(output, "Longitude", input.longitude);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPlayerStatistic& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "StatisticValue", input.statisticValue);
    JsonUtils::ObjectAddMember(output, "StatisticVersion", input.statisticVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPushNotificationRegistration& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPlayerProfile& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdCampaignAttributions", input.adCampaignAttributions, input.adCampaignAttributionsCount);
    JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
    JsonUtils::ObjectAddMember(output, "BannedUntil", input.bannedUntil, true);
    JsonUtils::ObjectAddMember(output, "ContactEmailAddresses", input.contactEmailAddresses, input.contactEmailAddressesCount);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "LastLogin", input.lastLogin, true);
    JsonUtils::ObjectAddMember(output, "LinkedAccounts", input.linkedAccounts, input.linkedAccountsCount);
    JsonUtils::ObjectAddMember(output, "Locations", input.locations, input.locationsCount);
    JsonUtils::ObjectAddMember(output, "Origination", input.origination);
    JsonUtils::ObjectAddMember(output, "PlayerExperimentVariants", input.playerExperimentVariants, input.playerExperimentVariantsCount);
    JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
    JsonUtils::ObjectAddMember(output, "PlayerStatistics", input.playerStatistics, input.playerStatisticsCount);
    JsonUtils::ObjectAddMember(output, "PublisherId", input.publisherId);
    JsonUtils::ObjectAddMember(output, "PushNotificationRegistrations", input.pushNotificationRegistrations, input.pushNotificationRegistrationsCount);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TotalValueToDateInUSD", input.totalValueToDateInUSD);
    JsonUtils::ObjectAddMember(output, "ValuesToDate", input.valuesToDate, input.valuesToDateCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyBalances", input.virtualCurrencyBalances, input.virtualCurrencyBalancesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayersInSegmentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ContinuationToken", input.continuationToken);
    JsonUtils::ObjectAddMember(output, "PlayerProfiles", input.playerProfiles, input.playerProfilesCount);
    JsonUtils::ObjectAddMember(output, "ProfilesInSegment", input.profilesInSegment);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayersSegmentsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerStatisticDefinitionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerStatisticVersionsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPlayerStatisticVersion& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActivationTime", input.activationTime, true);
    JsonUtils::ObjectAddMember(output, "ArchiveDownloadUrl", input.archiveDownloadUrl);
    JsonUtils::ObjectAddMember(output, "DeactivationTime", input.deactivationTime, true);
    JsonUtils::ObjectAddMember(output, "ScheduledActivationTime", input.scheduledActivationTime, true);
    JsonUtils::ObjectAddMember(output, "ScheduledDeactivationTime", input.scheduledDeactivationTime, true);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerStatisticVersionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticVersions", input.statisticVersions, input.statisticVersionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Namespace", input.playfabNamespace);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPlayerTagsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminPermissionStatement& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Action", input.action);
    JsonUtils::ObjectAddMember(output, "ApiConditions", input.apiConditions);
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "Effect", input.effect);
    JsonUtils::ObjectAddMember(output, "Principal", input.principal);
    JsonUtils::ObjectAddMember(output, "Resource", input.resource);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPolicyResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
    JsonUtils::ObjectAddMember(output, "PolicyVersion", input.policyVersion);
    JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPublisherDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetPublisherDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetRandomResultTablesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminResultTableNode& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ResultItem", input.resultItem);
    JsonUtils::ObjectAddMember(output, "ResultItemType", input.resultItemType);
    JsonUtils::ObjectAddMember(output, "Weight", input.weight);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRandomResultTableListing& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "Nodes", input.nodes, input.nodesCount);
    JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetRandomResultTablesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Tables", input.tables, input.tablesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetSegmentsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SegmentIds", input.segmentIds, input.segmentIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetSegmentsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildInfoResult& input)
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
inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildUploadURLRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildUploadURLResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "URL", input.uRL);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetStoreItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminStoreMarketingModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminStoreItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
    JsonUtils::ObjectAddMember(output, "DisplayPosition", input.displayPosition);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "RealCurrencyPrices", input.realCurrencyPrices, input.realCurrencyPricesCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyPrices", input.virtualCurrencyPrices, input.virtualCurrencyPricesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetStoreItemsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "MarketingData", input.marketingData);
    JsonUtils::ObjectAddMember(output, "Source", input.source);
    JsonUtils::ObjectAddMember(output, "Store", input.store, input.storeCount);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetTaskInstanceRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetTaskInstancesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StartedAtRangeFrom", input.startedAtRangeFrom, true);
    JsonUtils::ObjectAddMember(output, "StartedAtRangeTo", input.startedAtRangeTo, true);
    JsonUtils::ObjectAddMember(output, "StatusFilter", input.statusFilter);
    JsonUtils::ObjectAddMember(output, "TaskIdentifier", input.taskIdentifier);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminTaskInstanceBasicSummary& input)
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
inline JsonValue ToJson<>(const PlayFabAdminGetTaskInstancesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Summaries", input.summaries, input.summariesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetTasksRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminScheduledTask& input)
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
inline JsonValue ToJson<>(const PlayFabAdminGetTasksResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Tasks", input.tasks, input.tasksCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetTitleDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetTitleDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetUserBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetUserBansResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetUserDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetUserDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetUserInventoryRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGetUserInventoryResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGrantedItemInstance& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "BundleContents", input.bundleContents, input.bundleContentsCount);
    JsonUtils::ObjectAddMember(output, "BundleParent", input.bundleParent);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData, input.customDataCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Expiration", input.expiration, true);
    JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
    JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
    JsonUtils::ObjectAddMember(output, "Result", input.result);
    JsonUtils::ObjectAddMember(output, "UnitCurrency", input.unitCurrency);
    JsonUtils::ObjectAddMember(output, "UnitPrice", input.unitPrice);
    JsonUtils::ObjectAddMember(output, "UsesIncrementedBy", input.usesIncrementedBy);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminItemGrant& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGrantItemsToUsersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemGrants", input.itemGrants, input.itemGrantsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminGrantItemsToUsersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminIncrementPlayerStatisticVersionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminIncrementPlayerStatisticVersionResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticVersion", input.statisticVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminListBuildsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Builds", input.builds, input.buildsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminOpenIdConnection& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ClientId", input.clientId);
    JsonUtils::ObjectAddMember(output, "ClientSecret", input.clientSecret);
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "DiscoverConfiguration", input.discoverConfiguration);
    JsonUtils::ObjectAddMember(output, "IssuerInformation", input.issuerInformation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminListOpenIdConnectionResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Connections", input.connections, input.connectionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminListVirtualCurrencyTypesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "VirtualCurrencies", input.virtualCurrencies, input.virtualCurrenciesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminLookupUserAccountInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminLookupUserAccountInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminModifyMatchmakerGameModesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    JsonUtils::ObjectAddMember(output, "GameModes", input.gameModes, input.gameModesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminModifyServerBuildRequest& input)
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
inline JsonValue ToJson<>(const PlayFabAdminModifyServerBuildResult& input)
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
inline JsonValue ToJson<>(const PlayFabAdminModifyUserVirtualCurrencyResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Balance", input.balance);
    JsonUtils::ObjectAddMember(output, "BalanceChange", input.balanceChange);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRandomResultTable& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Nodes", input.nodes, input.nodesCount);
    JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRefundPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRefundPurchaseResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PurchaseStatus", input.purchaseStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRemovePlayerTagRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TagName", input.tagName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRemoveServerBuildRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRemoveVirtualCurrencyTypesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "VirtualCurrencies", input.virtualCurrencies, input.virtualCurrenciesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminResetCharacterStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminResetPasswordRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "Token", input.token);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminResetUserStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminResolvePurchaseDisputeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "Outcome", input.outcome);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminResolvePurchaseDisputeResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PurchaseStatus", input.purchaseStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRevokeAllBansForUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRevokeAllBansForUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRevokeBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanIds", input.banIds, input.banIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRevokeBansResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRevokeItemError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Item", input.item);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItemsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Errors", input.errors, input.errorsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRunTaskRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminRunTaskResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TaskInstanceId", input.taskInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSendAccountRecoveryEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSetPlayerSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSetPublishedRevisionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSetPublisherDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminTitleDataKeyValue& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSetTitleDataAndOverridesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "KeyValues", input.keyValues, input.keyValuesCount);
    JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSetTitleDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSetupPushNotificationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Credential", input.credential);
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "OverwriteOldARN", input.overwriteOldARN);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSetupPushNotificationResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ARN", input.aRN);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminSubtractUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateBanRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Active", input.active);
    JsonUtils::ObjectAddMember(output, "BanId", input.banId);
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "Permanent", input.permanent);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Bans", input.bans, input.bansCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateBansResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateCatalogItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Catalog", input.catalog, input.catalogCount);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "SetAsDefaultCatalog", input.setAsDefaultCatalog);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateCloudScriptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeveloperPlayFabId", input.developerPlayFabId);
    JsonUtils::ObjectAddMember(output, "Files", input.files, input.filesCount);
    JsonUtils::ObjectAddMember(output, "Publish", input.publish);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateCloudScriptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateOpenIdConnectionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ClientId", input.clientId);
    JsonUtils::ObjectAddMember(output, "ClientSecret", input.clientSecret);
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "IssuerDiscoveryUrl", input.issuerDiscoveryUrl);
    JsonUtils::ObjectAddMember(output, "IssuerInformation", input.issuerInformation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdatePlayerSharedSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Disabled", input.disabled);
    JsonUtils::ObjectAddMember(output, "FriendlyName", input.friendlyName);
    JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdatePlayerStatisticDefinitionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AggregationMethod", input.aggregationMethod);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "VersionChangeInterval", input.versionChangeInterval);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdatePlayerStatisticDefinitionResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Statistic", input.statistic);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdatePolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OverwritePolicy", input.overwritePolicy);
    JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
    JsonUtils::ObjectAddMember(output, "PolicyVersion", input.policyVersion);
    JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdatePolicyResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
    JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateRandomResultTablesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Tables", input.tables, input.tablesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateSegmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SegmentModel", input.segmentModel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateSegmentResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateStoreItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MarketingData", input.marketingData);
    JsonUtils::ObjectAddMember(output, "Store", input.store, input.storeCount);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateTaskRequest& input)
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

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateUserDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateUserDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateUserInternalDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateUserTitleDisplayNameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabAdminUpdateUserTitleDisplayNameResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
