#include "stdafx.h"
#include "ExperimentationDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace ExperimentationModels
{

CreateExclusionGroupRequest::CreateExclusionGroupRequest() :
    PlayFabExperimentationCreateExclusionGroupRequest{}
{
}

CreateExclusionGroupRequest::CreateExclusionGroupRequest(const CreateExclusionGroupRequest& src) :
    PlayFabExperimentationCreateExclusionGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_name{ src.m_name }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

CreateExclusionGroupRequest::CreateExclusionGroupRequest(CreateExclusionGroupRequest&& src) :
    PlayFabExperimentationCreateExclusionGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_name{ std::move(src.m_name) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

CreateExclusionGroupRequest::CreateExclusionGroupRequest(const PlayFabExperimentationCreateExclusionGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateExclusionGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue CreateExclusionGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationCreateExclusionGroupRequest>(*this);
}

CreateExclusionGroupResult::CreateExclusionGroupResult() :
    PlayFabExperimentationCreateExclusionGroupResult{}
{
}

CreateExclusionGroupResult::CreateExclusionGroupResult(const CreateExclusionGroupResult& src) :
    PlayFabExperimentationCreateExclusionGroupResult{ src },
    m_exclusionGroupId{ src.m_exclusionGroupId }
{
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

CreateExclusionGroupResult::CreateExclusionGroupResult(CreateExclusionGroupResult&& src) :
    PlayFabExperimentationCreateExclusionGroupResult{ src },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) }
{
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

CreateExclusionGroupResult::CreateExclusionGroupResult(const PlayFabExperimentationCreateExclusionGroupResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateExclusionGroupResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
}

JsonValue CreateExclusionGroupResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationCreateExclusionGroupResult>(*this);
}

size_t CreateExclusionGroupResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabExperimentationCreateExclusionGroupResult) };
    serializedSize += (m_exclusionGroupId.size() + 1);
    return serializedSize;
}

void CreateExclusionGroupResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabExperimentationCreateExclusionGroupResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationCreateExclusionGroupResult);
    memcpy(stringBuffer, m_exclusionGroupId.data(), m_exclusionGroupId.size() + 1);
    serializedStruct->exclusionGroupId = stringBuffer;
    stringBuffer += m_exclusionGroupId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

Variant::Variant() :
    PlayFabExperimentationVariant{}
{
}

Variant::Variant(const Variant& src) :
    PlayFabExperimentationVariant{ src },
    m_description{ src.m_description },
    m_id{ src.m_id },
    m_name{ src.m_name },
    m_titleDataOverrideLabel{ src.m_titleDataOverrideLabel },
    m_variables{ src.m_variables }
{
    description = m_description.empty() ? nullptr : m_description.data();
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
    titleDataOverrideLabel = m_titleDataOverrideLabel.empty() ? nullptr : m_titleDataOverrideLabel.data();
    variables = m_variables.Empty() ? nullptr : m_variables.Data();
}

Variant::Variant(Variant&& src) :
    PlayFabExperimentationVariant{ src },
    m_description{ std::move(src.m_description) },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) },
    m_titleDataOverrideLabel{ std::move(src.m_titleDataOverrideLabel) },
    m_variables{ std::move(src.m_variables) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
    titleDataOverrideLabel = m_titleDataOverrideLabel.empty() ? nullptr : m_titleDataOverrideLabel.data();
    variables = m_variables.Empty() ? nullptr : m_variables.Data();
}

Variant::Variant(const PlayFabExperimentationVariant& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Variant::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "IsControl", isControl);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "TitleDataOverrideLabel", m_titleDataOverrideLabel, titleDataOverrideLabel);
    JsonUtils::ObjectGetMember(input, "TrafficPercentage", trafficPercentage);
    JsonUtils::ObjectGetMember(input, "Variables", m_variables, variables, variablesCount);
}

JsonValue Variant::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationVariant>(*this);
}

CreateExperimentRequest::CreateExperimentRequest() :
    PlayFabExperimentationCreateExperimentRequest{}
{
}

CreateExperimentRequest::CreateExperimentRequest(const CreateExperimentRequest& src) :
    PlayFabExperimentationCreateExperimentRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_endDate{ src.m_endDate },
    m_exclusionGroupId{ src.m_exclusionGroupId },
    m_exclusionGroupTrafficAllocation{ src.m_exclusionGroupTrafficAllocation },
    m_experimentType{ src.m_experimentType },
    m_name{ src.m_name },
    m_segmentId{ src.m_segmentId },
    m_titlePlayerAccountTestIds{ src.m_titlePlayerAccountTestIds },
    m_variants{ src.m_variants }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    endDate = m_endDate ? m_endDate.operator->() : nullptr;
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    exclusionGroupTrafficAllocation = m_exclusionGroupTrafficAllocation ? m_exclusionGroupTrafficAllocation.operator->() : nullptr;
    experimentType = m_experimentType ? m_experimentType.operator->() : nullptr;
    name = m_name.empty() ? nullptr : m_name.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
    titlePlayerAccountTestIds = m_titlePlayerAccountTestIds.Empty() ? nullptr : m_titlePlayerAccountTestIds.Data();
    variants = m_variants.Empty() ? nullptr : m_variants.Data();
}

CreateExperimentRequest::CreateExperimentRequest(CreateExperimentRequest&& src) :
    PlayFabExperimentationCreateExperimentRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_endDate{ std::move(src.m_endDate) },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) },
    m_exclusionGroupTrafficAllocation{ std::move(src.m_exclusionGroupTrafficAllocation) },
    m_experimentType{ std::move(src.m_experimentType) },
    m_name{ std::move(src.m_name) },
    m_segmentId{ std::move(src.m_segmentId) },
    m_titlePlayerAccountTestIds{ std::move(src.m_titlePlayerAccountTestIds) },
    m_variants{ std::move(src.m_variants) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    endDate = m_endDate ? m_endDate.operator->() : nullptr;
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    exclusionGroupTrafficAllocation = m_exclusionGroupTrafficAllocation ? m_exclusionGroupTrafficAllocation.operator->() : nullptr;
    experimentType = m_experimentType ? m_experimentType.operator->() : nullptr;
    name = m_name.empty() ? nullptr : m_name.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
    titlePlayerAccountTestIds = m_titlePlayerAccountTestIds.Empty() ? nullptr : m_titlePlayerAccountTestIds.Data();
    variants = m_variants.Empty() ? nullptr : m_variants.Data();
}

CreateExperimentRequest::CreateExperimentRequest(const PlayFabExperimentationCreateExperimentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateExperimentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "EndDate", m_endDate, endDate, true);
    JsonUtils::ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
    JsonUtils::ObjectGetMember(input, "ExclusionGroupTrafficAllocation", m_exclusionGroupTrafficAllocation, exclusionGroupTrafficAllocation);
    JsonUtils::ObjectGetMember(input, "ExperimentType", m_experimentType, experimentType);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
    JsonUtils::ObjectGetMember(input, "StartDate", startDate, true);
    JsonUtils::ObjectGetMember(input, "TitlePlayerAccountTestIds", m_titlePlayerAccountTestIds, titlePlayerAccountTestIds, titlePlayerAccountTestIdsCount);
    JsonUtils::ObjectGetMember(input, "Variants", m_variants, variants, variantsCount);
}

JsonValue CreateExperimentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationCreateExperimentRequest>(*this);
}

CreateExperimentResult::CreateExperimentResult() :
    PlayFabExperimentationCreateExperimentResult{}
{
}

CreateExperimentResult::CreateExperimentResult(const CreateExperimentResult& src) :
    PlayFabExperimentationCreateExperimentResult{ src },
    m_experimentId{ src.m_experimentId }
{
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

CreateExperimentResult::CreateExperimentResult(CreateExperimentResult&& src) :
    PlayFabExperimentationCreateExperimentResult{ src },
    m_experimentId{ std::move(src.m_experimentId) }
{
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

CreateExperimentResult::CreateExperimentResult(const PlayFabExperimentationCreateExperimentResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateExperimentResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
}

JsonValue CreateExperimentResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationCreateExperimentResult>(*this);
}

size_t CreateExperimentResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabExperimentationCreateExperimentResult) };
    serializedSize += (m_experimentId.size() + 1);
    return serializedSize;
}

void CreateExperimentResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabExperimentationCreateExperimentResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationCreateExperimentResult);
    memcpy(stringBuffer, m_experimentId.data(), m_experimentId.size() + 1);
    serializedStruct->experimentId = stringBuffer;
    stringBuffer += m_experimentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteExclusionGroupRequest::DeleteExclusionGroupRequest() :
    PlayFabExperimentationDeleteExclusionGroupRequest{}
{
}

DeleteExclusionGroupRequest::DeleteExclusionGroupRequest(const DeleteExclusionGroupRequest& src) :
    PlayFabExperimentationDeleteExclusionGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_exclusionGroupId{ src.m_exclusionGroupId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

DeleteExclusionGroupRequest::DeleteExclusionGroupRequest(DeleteExclusionGroupRequest&& src) :
    PlayFabExperimentationDeleteExclusionGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

DeleteExclusionGroupRequest::DeleteExclusionGroupRequest(const PlayFabExperimentationDeleteExclusionGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteExclusionGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
}

JsonValue DeleteExclusionGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationDeleteExclusionGroupRequest>(*this);
}

DeleteExperimentRequest::DeleteExperimentRequest() :
    PlayFabExperimentationDeleteExperimentRequest{}
{
}

DeleteExperimentRequest::DeleteExperimentRequest(const DeleteExperimentRequest& src) :
    PlayFabExperimentationDeleteExperimentRequest{ src },
    m_customTags{ src.m_customTags },
    m_experimentId{ src.m_experimentId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

DeleteExperimentRequest::DeleteExperimentRequest(DeleteExperimentRequest&& src) :
    PlayFabExperimentationDeleteExperimentRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_experimentId{ std::move(src.m_experimentId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

DeleteExperimentRequest::DeleteExperimentRequest(const PlayFabExperimentationDeleteExperimentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteExperimentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
}

JsonValue DeleteExperimentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationDeleteExperimentRequest>(*this);
}

ExclusionGroupTrafficAllocation::ExclusionGroupTrafficAllocation() :
    PlayFabExperimentationExclusionGroupTrafficAllocation{}
{
}

ExclusionGroupTrafficAllocation::ExclusionGroupTrafficAllocation(const ExclusionGroupTrafficAllocation& src) :
    PlayFabExperimentationExclusionGroupTrafficAllocation{ src },
    m_experimentId{ src.m_experimentId }
{
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

ExclusionGroupTrafficAllocation::ExclusionGroupTrafficAllocation(ExclusionGroupTrafficAllocation&& src) :
    PlayFabExperimentationExclusionGroupTrafficAllocation{ src },
    m_experimentId{ std::move(src.m_experimentId) }
{
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

ExclusionGroupTrafficAllocation::ExclusionGroupTrafficAllocation(const PlayFabExperimentationExclusionGroupTrafficAllocation& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExclusionGroupTrafficAllocation::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
    JsonUtils::ObjectGetMember(input, "TrafficAllocation", trafficAllocation);
}

JsonValue ExclusionGroupTrafficAllocation::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationExclusionGroupTrafficAllocation>(*this);
}

size_t ExclusionGroupTrafficAllocation::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabExperimentationExclusionGroupTrafficAllocation) };
    serializedSize += (m_experimentId.size() + 1);
    return serializedSize;
}

void ExclusionGroupTrafficAllocation::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabExperimentationExclusionGroupTrafficAllocation{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationExclusionGroupTrafficAllocation);
    memcpy(stringBuffer, m_experimentId.data(), m_experimentId.size() + 1);
    serializedStruct->experimentId = stringBuffer;
    stringBuffer += m_experimentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

Experiment::Experiment() :
    PlayFabExperimentationExperiment{}
{
}

Experiment::Experiment(const Experiment& src) :
    PlayFabExperimentationExperiment{ src },
    m_description{ src.m_description },
    m_endDate{ src.m_endDate },
    m_exclusionGroupId{ src.m_exclusionGroupId },
    m_exclusionGroupTrafficAllocation{ src.m_exclusionGroupTrafficAllocation },
    m_experimentType{ src.m_experimentType },
    m_id{ src.m_id },
    m_name{ src.m_name },
    m_segmentId{ src.m_segmentId },
    m_state{ src.m_state },
    m_titlePlayerAccountTestIds{ src.m_titlePlayerAccountTestIds },
    m_variants{ src.m_variants }
{
    description = m_description.empty() ? nullptr : m_description.data();
    endDate = m_endDate ? m_endDate.operator->() : nullptr;
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    exclusionGroupTrafficAllocation = m_exclusionGroupTrafficAllocation ? m_exclusionGroupTrafficAllocation.operator->() : nullptr;
    experimentType = m_experimentType ? m_experimentType.operator->() : nullptr;
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
    state = m_state ? m_state.operator->() : nullptr;
    titlePlayerAccountTestIds = m_titlePlayerAccountTestIds.Empty() ? nullptr : m_titlePlayerAccountTestIds.Data();
    variants = m_variants.Empty() ? nullptr : m_variants.Data();
}

Experiment::Experiment(Experiment&& src) :
    PlayFabExperimentationExperiment{ src },
    m_description{ std::move(src.m_description) },
    m_endDate{ std::move(src.m_endDate) },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) },
    m_exclusionGroupTrafficAllocation{ std::move(src.m_exclusionGroupTrafficAllocation) },
    m_experimentType{ std::move(src.m_experimentType) },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) },
    m_segmentId{ std::move(src.m_segmentId) },
    m_state{ std::move(src.m_state) },
    m_titlePlayerAccountTestIds{ std::move(src.m_titlePlayerAccountTestIds) },
    m_variants{ std::move(src.m_variants) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    endDate = m_endDate ? m_endDate.operator->() : nullptr;
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    exclusionGroupTrafficAllocation = m_exclusionGroupTrafficAllocation ? m_exclusionGroupTrafficAllocation.operator->() : nullptr;
    experimentType = m_experimentType ? m_experimentType.operator->() : nullptr;
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
    state = m_state ? m_state.operator->() : nullptr;
    titlePlayerAccountTestIds = m_titlePlayerAccountTestIds.Empty() ? nullptr : m_titlePlayerAccountTestIds.Data();
    variants = m_variants.Empty() ? nullptr : m_variants.Data();
}

Experiment::Experiment(const PlayFabExperimentationExperiment& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Experiment::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "EndDate", m_endDate, endDate, true);
    JsonUtils::ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
    JsonUtils::ObjectGetMember(input, "ExclusionGroupTrafficAllocation", m_exclusionGroupTrafficAllocation, exclusionGroupTrafficAllocation);
    JsonUtils::ObjectGetMember(input, "ExperimentType", m_experimentType, experimentType);
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
    JsonUtils::ObjectGetMember(input, "StartDate", startDate, true);
    JsonUtils::ObjectGetMember(input, "State", m_state, state);
    JsonUtils::ObjectGetMember(input, "TitlePlayerAccountTestIds", m_titlePlayerAccountTestIds, titlePlayerAccountTestIds, titlePlayerAccountTestIdsCount);
    JsonUtils::ObjectGetMember(input, "Variants", m_variants, variants, variantsCount);
}

JsonValue Experiment::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationExperiment>(*this);
}

ExperimentExclusionGroup::ExperimentExclusionGroup() :
    PlayFabExperimentationExperimentExclusionGroup{}
{
}

ExperimentExclusionGroup::ExperimentExclusionGroup(const ExperimentExclusionGroup& src) :
    PlayFabExperimentationExperimentExclusionGroup{ src },
    m_description{ src.m_description },
    m_exclusionGroupId{ src.m_exclusionGroupId },
    m_name{ src.m_name }
{
    description = m_description.empty() ? nullptr : m_description.data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

ExperimentExclusionGroup::ExperimentExclusionGroup(ExperimentExclusionGroup&& src) :
    PlayFabExperimentationExperimentExclusionGroup{ src },
    m_description{ std::move(src.m_description) },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) },
    m_name{ std::move(src.m_name) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

ExperimentExclusionGroup::ExperimentExclusionGroup(const PlayFabExperimentationExperimentExclusionGroup& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExperimentExclusionGroup::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue ExperimentExclusionGroup::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationExperimentExclusionGroup>(*this);
}

size_t ExperimentExclusionGroup::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabExperimentationExperimentExclusionGroup) };
    serializedSize += (m_description.size() + 1);
    serializedSize += (m_exclusionGroupId.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void ExperimentExclusionGroup::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabExperimentationExperimentExclusionGroup{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationExperimentExclusionGroup);
    memcpy(stringBuffer, m_description.data(), m_description.size() + 1);
    serializedStruct->description = stringBuffer;
    stringBuffer += m_description.size() + 1;
    memcpy(stringBuffer, m_exclusionGroupId.data(), m_exclusionGroupId.size() + 1);
    serializedStruct->exclusionGroupId = stringBuffer;
    stringBuffer += m_exclusionGroupId.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetExclusionGroupsRequest::GetExclusionGroupsRequest() :
    PlayFabExperimentationGetExclusionGroupsRequest{}
{
}

GetExclusionGroupsRequest::GetExclusionGroupsRequest(const GetExclusionGroupsRequest& src) :
    PlayFabExperimentationGetExclusionGroupsRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetExclusionGroupsRequest::GetExclusionGroupsRequest(GetExclusionGroupsRequest&& src) :
    PlayFabExperimentationGetExclusionGroupsRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetExclusionGroupsRequest::GetExclusionGroupsRequest(const PlayFabExperimentationGetExclusionGroupsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExclusionGroupsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetExclusionGroupsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationGetExclusionGroupsRequest>(*this);
}

GetExclusionGroupsResult::GetExclusionGroupsResult() :
    PlayFabExperimentationGetExclusionGroupsResult{}
{
}

GetExclusionGroupsResult::GetExclusionGroupsResult(const GetExclusionGroupsResult& src) :
    PlayFabExperimentationGetExclusionGroupsResult{ src },
    m_exclusionGroups{ src.m_exclusionGroups }
{
    exclusionGroups = m_exclusionGroups.Empty() ? nullptr : m_exclusionGroups.Data();
}

GetExclusionGroupsResult::GetExclusionGroupsResult(GetExclusionGroupsResult&& src) :
    PlayFabExperimentationGetExclusionGroupsResult{ src },
    m_exclusionGroups{ std::move(src.m_exclusionGroups) }
{
    exclusionGroups = m_exclusionGroups.Empty() ? nullptr : m_exclusionGroups.Data();
}

GetExclusionGroupsResult::GetExclusionGroupsResult(const PlayFabExperimentationGetExclusionGroupsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExclusionGroupsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ExclusionGroups", m_exclusionGroups, exclusionGroups, exclusionGroupsCount);
}

JsonValue GetExclusionGroupsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationGetExclusionGroupsResult>(*this);
}

GetExclusionGroupTrafficRequest::GetExclusionGroupTrafficRequest() :
    PlayFabExperimentationGetExclusionGroupTrafficRequest{}
{
}

GetExclusionGroupTrafficRequest::GetExclusionGroupTrafficRequest(const GetExclusionGroupTrafficRequest& src) :
    PlayFabExperimentationGetExclusionGroupTrafficRequest{ src },
    m_customTags{ src.m_customTags },
    m_exclusionGroupId{ src.m_exclusionGroupId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

GetExclusionGroupTrafficRequest::GetExclusionGroupTrafficRequest(GetExclusionGroupTrafficRequest&& src) :
    PlayFabExperimentationGetExclusionGroupTrafficRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

GetExclusionGroupTrafficRequest::GetExclusionGroupTrafficRequest(const PlayFabExperimentationGetExclusionGroupTrafficRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExclusionGroupTrafficRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
}

JsonValue GetExclusionGroupTrafficRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationGetExclusionGroupTrafficRequest>(*this);
}

GetExclusionGroupTrafficResult::GetExclusionGroupTrafficResult() :
    PlayFabExperimentationGetExclusionGroupTrafficResult{}
{
}

GetExclusionGroupTrafficResult::GetExclusionGroupTrafficResult(const GetExclusionGroupTrafficResult& src) :
    PlayFabExperimentationGetExclusionGroupTrafficResult{ src },
    m_trafficAllocations{ src.m_trafficAllocations }
{
    trafficAllocations = m_trafficAllocations.Empty() ? nullptr : m_trafficAllocations.Data();
}

GetExclusionGroupTrafficResult::GetExclusionGroupTrafficResult(GetExclusionGroupTrafficResult&& src) :
    PlayFabExperimentationGetExclusionGroupTrafficResult{ src },
    m_trafficAllocations{ std::move(src.m_trafficAllocations) }
{
    trafficAllocations = m_trafficAllocations.Empty() ? nullptr : m_trafficAllocations.Data();
}

GetExclusionGroupTrafficResult::GetExclusionGroupTrafficResult(const PlayFabExperimentationGetExclusionGroupTrafficResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExclusionGroupTrafficResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TrafficAllocations", m_trafficAllocations, trafficAllocations, trafficAllocationsCount);
}

JsonValue GetExclusionGroupTrafficResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationGetExclusionGroupTrafficResult>(*this);
}

GetExperimentsRequest::GetExperimentsRequest() :
    PlayFabExperimentationGetExperimentsRequest{}
{
}

GetExperimentsRequest::GetExperimentsRequest(const GetExperimentsRequest& src) :
    PlayFabExperimentationGetExperimentsRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetExperimentsRequest::GetExperimentsRequest(GetExperimentsRequest&& src) :
    PlayFabExperimentationGetExperimentsRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetExperimentsRequest::GetExperimentsRequest(const PlayFabExperimentationGetExperimentsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExperimentsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetExperimentsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationGetExperimentsRequest>(*this);
}

GetExperimentsResult::GetExperimentsResult() :
    PlayFabExperimentationGetExperimentsResult{}
{
}

GetExperimentsResult::GetExperimentsResult(const GetExperimentsResult& src) :
    PlayFabExperimentationGetExperimentsResult{ src },
    m_experiments{ src.m_experiments }
{
    experiments = m_experiments.Empty() ? nullptr : m_experiments.Data();
}

GetExperimentsResult::GetExperimentsResult(GetExperimentsResult&& src) :
    PlayFabExperimentationGetExperimentsResult{ src },
    m_experiments{ std::move(src.m_experiments) }
{
    experiments = m_experiments.Empty() ? nullptr : m_experiments.Data();
}

GetExperimentsResult::GetExperimentsResult(const PlayFabExperimentationGetExperimentsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExperimentsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Experiments", m_experiments, experiments, experimentsCount);
}

JsonValue GetExperimentsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationGetExperimentsResult>(*this);
}

GetLatestScorecardRequest::GetLatestScorecardRequest() :
    PlayFabExperimentationGetLatestScorecardRequest{}
{
}

GetLatestScorecardRequest::GetLatestScorecardRequest(const GetLatestScorecardRequest& src) :
    PlayFabExperimentationGetLatestScorecardRequest{ src },
    m_customTags{ src.m_customTags },
    m_experimentId{ src.m_experimentId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

GetLatestScorecardRequest::GetLatestScorecardRequest(GetLatestScorecardRequest&& src) :
    PlayFabExperimentationGetLatestScorecardRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_experimentId{ std::move(src.m_experimentId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

GetLatestScorecardRequest::GetLatestScorecardRequest(const PlayFabExperimentationGetLatestScorecardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLatestScorecardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
}

JsonValue GetLatestScorecardRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationGetLatestScorecardRequest>(*this);
}

MetricData::MetricData() :
    PlayFabExperimentationMetricData{}
{
}

MetricData::MetricData(const MetricData& src) :
    PlayFabExperimentationMetricData{ src },
    m_internalName{ src.m_internalName },
    m_movement{ src.m_movement },
    m_name{ src.m_name },
    m_statSigLevel{ src.m_statSigLevel }
{
    internalName = m_internalName.empty() ? nullptr : m_internalName.data();
    movement = m_movement.empty() ? nullptr : m_movement.data();
    name = m_name.empty() ? nullptr : m_name.data();
    statSigLevel = m_statSigLevel.empty() ? nullptr : m_statSigLevel.data();
}

MetricData::MetricData(MetricData&& src) :
    PlayFabExperimentationMetricData{ src },
    m_internalName{ std::move(src.m_internalName) },
    m_movement{ std::move(src.m_movement) },
    m_name{ std::move(src.m_name) },
    m_statSigLevel{ std::move(src.m_statSigLevel) }
{
    internalName = m_internalName.empty() ? nullptr : m_internalName.data();
    movement = m_movement.empty() ? nullptr : m_movement.data();
    name = m_name.empty() ? nullptr : m_name.data();
    statSigLevel = m_statSigLevel.empty() ? nullptr : m_statSigLevel.data();
}

MetricData::MetricData(const PlayFabExperimentationMetricData& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MetricData::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConfidenceIntervalEnd", confidenceIntervalEnd);
    JsonUtils::ObjectGetMember(input, "ConfidenceIntervalStart", confidenceIntervalStart);
    JsonUtils::ObjectGetMember(input, "DeltaAbsoluteChange", deltaAbsoluteChange);
    JsonUtils::ObjectGetMember(input, "DeltaRelativeChange", deltaRelativeChange);
    JsonUtils::ObjectGetMember(input, "InternalName", m_internalName, internalName);
    JsonUtils::ObjectGetMember(input, "Movement", m_movement, movement);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "PMove", pMove);
    JsonUtils::ObjectGetMember(input, "PValue", pValue);
    JsonUtils::ObjectGetMember(input, "PValueThreshold", pValueThreshold);
    JsonUtils::ObjectGetMember(input, "StatSigLevel", m_statSigLevel, statSigLevel);
    JsonUtils::ObjectGetMember(input, "StdDev", stdDev);
    JsonUtils::ObjectGetMember(input, "Value", value);
}

JsonValue MetricData::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationMetricData>(*this);
}

size_t MetricData::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabExperimentationMetricData) };
    serializedSize += (m_internalName.size() + 1);
    serializedSize += (m_movement.size() + 1);
    serializedSize += (m_name.size() + 1);
    serializedSize += (m_statSigLevel.size() + 1);
    return serializedSize;
}

void MetricData::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabExperimentationMetricData{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationMetricData);
    memcpy(stringBuffer, m_internalName.data(), m_internalName.size() + 1);
    serializedStruct->internalName = stringBuffer;
    stringBuffer += m_internalName.size() + 1;
    memcpy(stringBuffer, m_movement.data(), m_movement.size() + 1);
    serializedStruct->movement = stringBuffer;
    stringBuffer += m_movement.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    memcpy(stringBuffer, m_statSigLevel.data(), m_statSigLevel.size() + 1);
    serializedStruct->statSigLevel = stringBuffer;
    stringBuffer += m_statSigLevel.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ScorecardDataRow::ScorecardDataRow() :
    PlayFabExperimentationScorecardDataRow{}
{
}

ScorecardDataRow::ScorecardDataRow(const ScorecardDataRow& src) :
    PlayFabExperimentationScorecardDataRow{ src },
    m_metricDataRows{ src.m_metricDataRows },
    m_variantName{ src.m_variantName }
{
    metricDataRows = m_metricDataRows.Empty() ? nullptr : m_metricDataRows.Data();
    variantName = m_variantName.empty() ? nullptr : m_variantName.data();
}

ScorecardDataRow::ScorecardDataRow(ScorecardDataRow&& src) :
    PlayFabExperimentationScorecardDataRow{ src },
    m_metricDataRows{ std::move(src.m_metricDataRows) },
    m_variantName{ std::move(src.m_variantName) }
{
    metricDataRows = m_metricDataRows.Empty() ? nullptr : m_metricDataRows.Data();
    variantName = m_variantName.empty() ? nullptr : m_variantName.data();
}

ScorecardDataRow::ScorecardDataRow(const PlayFabExperimentationScorecardDataRow& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ScorecardDataRow::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsControl", isControl);
    JsonUtils::ObjectGetMember(input, "MetricDataRows", m_metricDataRows, metricDataRows, metricDataRowsCount);
    JsonUtils::ObjectGetMember(input, "PlayerCount", playerCount);
    JsonUtils::ObjectGetMember(input, "VariantName", m_variantName, variantName);
}

JsonValue ScorecardDataRow::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationScorecardDataRow>(*this);
}

Scorecard::Scorecard() :
    PlayFabExperimentationScorecard{}
{
}

Scorecard::Scorecard(const Scorecard& src) :
    PlayFabExperimentationScorecard{ src },
    m_dateGenerated{ src.m_dateGenerated },
    m_duration{ src.m_duration },
    m_experimentId{ src.m_experimentId },
    m_experimentName{ src.m_experimentName },
    m_latestJobStatus{ src.m_latestJobStatus },
    m_scorecardDataRows{ src.m_scorecardDataRows }
{
    dateGenerated = m_dateGenerated.empty() ? nullptr : m_dateGenerated.data();
    duration = m_duration.empty() ? nullptr : m_duration.data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
    experimentName = m_experimentName.empty() ? nullptr : m_experimentName.data();
    latestJobStatus = m_latestJobStatus ? m_latestJobStatus.operator->() : nullptr;
    scorecardDataRows = m_scorecardDataRows.Empty() ? nullptr : m_scorecardDataRows.Data();
}

Scorecard::Scorecard(Scorecard&& src) :
    PlayFabExperimentationScorecard{ src },
    m_dateGenerated{ std::move(src.m_dateGenerated) },
    m_duration{ std::move(src.m_duration) },
    m_experimentId{ std::move(src.m_experimentId) },
    m_experimentName{ std::move(src.m_experimentName) },
    m_latestJobStatus{ std::move(src.m_latestJobStatus) },
    m_scorecardDataRows{ std::move(src.m_scorecardDataRows) }
{
    dateGenerated = m_dateGenerated.empty() ? nullptr : m_dateGenerated.data();
    duration = m_duration.empty() ? nullptr : m_duration.data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
    experimentName = m_experimentName.empty() ? nullptr : m_experimentName.data();
    latestJobStatus = m_latestJobStatus ? m_latestJobStatus.operator->() : nullptr;
    scorecardDataRows = m_scorecardDataRows.Empty() ? nullptr : m_scorecardDataRows.Data();
}

Scorecard::Scorecard(const PlayFabExperimentationScorecard& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Scorecard::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DateGenerated", m_dateGenerated, dateGenerated);
    JsonUtils::ObjectGetMember(input, "Duration", m_duration, duration);
    JsonUtils::ObjectGetMember(input, "EventsProcessed", eventsProcessed);
    JsonUtils::ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
    JsonUtils::ObjectGetMember(input, "ExperimentName", m_experimentName, experimentName);
    JsonUtils::ObjectGetMember(input, "LatestJobStatus", m_latestJobStatus, latestJobStatus);
    JsonUtils::ObjectGetMember(input, "SampleRatioMismatch", sampleRatioMismatch);
    JsonUtils::ObjectGetMember(input, "ScorecardDataRows", m_scorecardDataRows, scorecardDataRows, scorecardDataRowsCount);
}

JsonValue Scorecard::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationScorecard>(*this);
}

GetLatestScorecardResult::GetLatestScorecardResult() :
    PlayFabExperimentationGetLatestScorecardResult{}
{
}

GetLatestScorecardResult::GetLatestScorecardResult(const GetLatestScorecardResult& src) :
    PlayFabExperimentationGetLatestScorecardResult{ src },
    m_scorecard{ src.m_scorecard }
{
    scorecard = m_scorecard ? m_scorecard.operator->() : nullptr;
}

GetLatestScorecardResult::GetLatestScorecardResult(GetLatestScorecardResult&& src) :
    PlayFabExperimentationGetLatestScorecardResult{ src },
    m_scorecard{ std::move(src.m_scorecard) }
{
    scorecard = m_scorecard ? m_scorecard.operator->() : nullptr;
}

GetLatestScorecardResult::GetLatestScorecardResult(const PlayFabExperimentationGetLatestScorecardResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLatestScorecardResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Scorecard", m_scorecard, scorecard);
}

JsonValue GetLatestScorecardResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationGetLatestScorecardResult>(*this);
}

GetTreatmentAssignmentRequest::GetTreatmentAssignmentRequest() :
    PlayFabExperimentationGetTreatmentAssignmentRequest{}
{
}

GetTreatmentAssignmentRequest::GetTreatmentAssignmentRequest(const GetTreatmentAssignmentRequest& src) :
    PlayFabExperimentationGetTreatmentAssignmentRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetTreatmentAssignmentRequest::GetTreatmentAssignmentRequest(GetTreatmentAssignmentRequest&& src) :
    PlayFabExperimentationGetTreatmentAssignmentRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetTreatmentAssignmentRequest::GetTreatmentAssignmentRequest(const PlayFabExperimentationGetTreatmentAssignmentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTreatmentAssignmentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
}

JsonValue GetTreatmentAssignmentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationGetTreatmentAssignmentRequest>(*this);
}

GetTreatmentAssignmentResult::GetTreatmentAssignmentResult() :
    PlayFabExperimentationGetTreatmentAssignmentResult{}
{
}

GetTreatmentAssignmentResult::GetTreatmentAssignmentResult(const GetTreatmentAssignmentResult& src) :
    PlayFabExperimentationGetTreatmentAssignmentResult{ src },
    m_treatmentAssignment{ src.m_treatmentAssignment }
{
    treatmentAssignment = m_treatmentAssignment ? m_treatmentAssignment.operator->() : nullptr;
}

GetTreatmentAssignmentResult::GetTreatmentAssignmentResult(GetTreatmentAssignmentResult&& src) :
    PlayFabExperimentationGetTreatmentAssignmentResult{ src },
    m_treatmentAssignment{ std::move(src.m_treatmentAssignment) }
{
    treatmentAssignment = m_treatmentAssignment ? m_treatmentAssignment.operator->() : nullptr;
}

GetTreatmentAssignmentResult::GetTreatmentAssignmentResult(const PlayFabExperimentationGetTreatmentAssignmentResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTreatmentAssignmentResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TreatmentAssignment", m_treatmentAssignment, treatmentAssignment);
}

JsonValue GetTreatmentAssignmentResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationGetTreatmentAssignmentResult>(*this);
}

StartExperimentRequest::StartExperimentRequest() :
    PlayFabExperimentationStartExperimentRequest{}
{
}

StartExperimentRequest::StartExperimentRequest(const StartExperimentRequest& src) :
    PlayFabExperimentationStartExperimentRequest{ src },
    m_customTags{ src.m_customTags },
    m_experimentId{ src.m_experimentId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

StartExperimentRequest::StartExperimentRequest(StartExperimentRequest&& src) :
    PlayFabExperimentationStartExperimentRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_experimentId{ std::move(src.m_experimentId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

StartExperimentRequest::StartExperimentRequest(const PlayFabExperimentationStartExperimentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StartExperimentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
}

JsonValue StartExperimentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationStartExperimentRequest>(*this);
}

StopExperimentRequest::StopExperimentRequest() :
    PlayFabExperimentationStopExperimentRequest{}
{
}

StopExperimentRequest::StopExperimentRequest(const StopExperimentRequest& src) :
    PlayFabExperimentationStopExperimentRequest{ src },
    m_customTags{ src.m_customTags },
    m_experimentId{ src.m_experimentId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

StopExperimentRequest::StopExperimentRequest(StopExperimentRequest&& src) :
    PlayFabExperimentationStopExperimentRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_experimentId{ std::move(src.m_experimentId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

StopExperimentRequest::StopExperimentRequest(const PlayFabExperimentationStopExperimentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StopExperimentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
}

JsonValue StopExperimentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationStopExperimentRequest>(*this);
}

UpdateExclusionGroupRequest::UpdateExclusionGroupRequest() :
    PlayFabExperimentationUpdateExclusionGroupRequest{}
{
}

UpdateExclusionGroupRequest::UpdateExclusionGroupRequest(const UpdateExclusionGroupRequest& src) :
    PlayFabExperimentationUpdateExclusionGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_exclusionGroupId{ src.m_exclusionGroupId },
    m_name{ src.m_name }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

UpdateExclusionGroupRequest::UpdateExclusionGroupRequest(UpdateExclusionGroupRequest&& src) :
    PlayFabExperimentationUpdateExclusionGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) },
    m_name{ std::move(src.m_name) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

UpdateExclusionGroupRequest::UpdateExclusionGroupRequest(const PlayFabExperimentationUpdateExclusionGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateExclusionGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue UpdateExclusionGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationUpdateExclusionGroupRequest>(*this);
}

UpdateExperimentRequest::UpdateExperimentRequest() :
    PlayFabExperimentationUpdateExperimentRequest{}
{
}

UpdateExperimentRequest::UpdateExperimentRequest(const UpdateExperimentRequest& src) :
    PlayFabExperimentationUpdateExperimentRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_endDate{ src.m_endDate },
    m_exclusionGroupId{ src.m_exclusionGroupId },
    m_exclusionGroupTrafficAllocation{ src.m_exclusionGroupTrafficAllocation },
    m_experimentType{ src.m_experimentType },
    m_id{ src.m_id },
    m_name{ src.m_name },
    m_segmentId{ src.m_segmentId },
    m_titlePlayerAccountTestIds{ src.m_titlePlayerAccountTestIds },
    m_variants{ src.m_variants }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    endDate = m_endDate ? m_endDate.operator->() : nullptr;
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    exclusionGroupTrafficAllocation = m_exclusionGroupTrafficAllocation ? m_exclusionGroupTrafficAllocation.operator->() : nullptr;
    experimentType = m_experimentType ? m_experimentType.operator->() : nullptr;
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
    titlePlayerAccountTestIds = m_titlePlayerAccountTestIds.Empty() ? nullptr : m_titlePlayerAccountTestIds.Data();
    variants = m_variants.Empty() ? nullptr : m_variants.Data();
}

UpdateExperimentRequest::UpdateExperimentRequest(UpdateExperimentRequest&& src) :
    PlayFabExperimentationUpdateExperimentRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_endDate{ std::move(src.m_endDate) },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) },
    m_exclusionGroupTrafficAllocation{ std::move(src.m_exclusionGroupTrafficAllocation) },
    m_experimentType{ std::move(src.m_experimentType) },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) },
    m_segmentId{ std::move(src.m_segmentId) },
    m_titlePlayerAccountTestIds{ std::move(src.m_titlePlayerAccountTestIds) },
    m_variants{ std::move(src.m_variants) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    endDate = m_endDate ? m_endDate.operator->() : nullptr;
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    exclusionGroupTrafficAllocation = m_exclusionGroupTrafficAllocation ? m_exclusionGroupTrafficAllocation.operator->() : nullptr;
    experimentType = m_experimentType ? m_experimentType.operator->() : nullptr;
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
    titlePlayerAccountTestIds = m_titlePlayerAccountTestIds.Empty() ? nullptr : m_titlePlayerAccountTestIds.Data();
    variants = m_variants.Empty() ? nullptr : m_variants.Data();
}

UpdateExperimentRequest::UpdateExperimentRequest(const PlayFabExperimentationUpdateExperimentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateExperimentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "EndDate", m_endDate, endDate, true);
    JsonUtils::ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
    JsonUtils::ObjectGetMember(input, "ExclusionGroupTrafficAllocation", m_exclusionGroupTrafficAllocation, exclusionGroupTrafficAllocation);
    JsonUtils::ObjectGetMember(input, "ExperimentType", m_experimentType, experimentType);
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
    JsonUtils::ObjectGetMember(input, "StartDate", startDate, true);
    JsonUtils::ObjectGetMember(input, "TitlePlayerAccountTestIds", m_titlePlayerAccountTestIds, titlePlayerAccountTestIds, titlePlayerAccountTestIdsCount);
    JsonUtils::ObjectGetMember(input, "Variants", m_variants, variants, variantsCount);
}

JsonValue UpdateExperimentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabExperimentationUpdateExperimentRequest>(*this);
}

} // namespace ExperimentationModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationCreateExclusionGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationCreateExclusionGroupResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationVariant& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "IsControl", input.isControl);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "TitleDataOverrideLabel", input.titleDataOverrideLabel);
    JsonUtils::ObjectAddMember(output, "TrafficPercentage", input.trafficPercentage);
    JsonUtils::ObjectAddMember(output, "Variables", input.variables, input.variablesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationCreateExperimentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "EndDate", input.endDate, true);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupTrafficAllocation", input.exclusionGroupTrafficAllocation);
    JsonUtils::ObjectAddMember(output, "ExperimentType", input.experimentType);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    JsonUtils::ObjectAddMember(output, "StartDate", input.startDate, true);
    JsonUtils::ObjectAddMember(output, "TitlePlayerAccountTestIds", input.titlePlayerAccountTestIds, input.titlePlayerAccountTestIdsCount);
    JsonUtils::ObjectAddMember(output, "Variants", input.variants, input.variantsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationCreateExperimentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationDeleteExclusionGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationDeleteExperimentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationExclusionGroupTrafficAllocation& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    JsonUtils::ObjectAddMember(output, "TrafficAllocation", input.trafficAllocation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationExperiment& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "EndDate", input.endDate, true);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupTrafficAllocation", input.exclusionGroupTrafficAllocation);
    JsonUtils::ObjectAddMember(output, "ExperimentType", input.experimentType);
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    JsonUtils::ObjectAddMember(output, "StartDate", input.startDate, true);
    JsonUtils::ObjectAddMember(output, "State", input.state);
    JsonUtils::ObjectAddMember(output, "TitlePlayerAccountTestIds", input.titlePlayerAccountTestIds, input.titlePlayerAccountTestIdsCount);
    JsonUtils::ObjectAddMember(output, "Variants", input.variants, input.variantsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationExperimentExclusionGroup& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationGetExclusionGroupsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationGetExclusionGroupsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ExclusionGroups", input.exclusionGroups, input.exclusionGroupsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationGetExclusionGroupTrafficRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationGetExclusionGroupTrafficResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TrafficAllocations", input.trafficAllocations, input.trafficAllocationsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationGetExperimentsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationGetExperimentsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Experiments", input.experiments, input.experimentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationGetLatestScorecardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationMetricData& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConfidenceIntervalEnd", input.confidenceIntervalEnd);
    JsonUtils::ObjectAddMember(output, "ConfidenceIntervalStart", input.confidenceIntervalStart);
    JsonUtils::ObjectAddMember(output, "DeltaAbsoluteChange", input.deltaAbsoluteChange);
    JsonUtils::ObjectAddMember(output, "DeltaRelativeChange", input.deltaRelativeChange);
    JsonUtils::ObjectAddMember(output, "InternalName", input.internalName);
    JsonUtils::ObjectAddMember(output, "Movement", input.movement);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "PMove", input.pMove);
    JsonUtils::ObjectAddMember(output, "PValue", input.pValue);
    JsonUtils::ObjectAddMember(output, "PValueThreshold", input.pValueThreshold);
    JsonUtils::ObjectAddMember(output, "StatSigLevel", input.statSigLevel);
    JsonUtils::ObjectAddMember(output, "StdDev", input.stdDev);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationScorecardDataRow& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsControl", input.isControl);
    JsonUtils::ObjectAddMember(output, "MetricDataRows", input.metricDataRows, input.metricDataRowsCount);
    JsonUtils::ObjectAddMember(output, "PlayerCount", input.playerCount);
    JsonUtils::ObjectAddMember(output, "VariantName", input.variantName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationScorecard& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DateGenerated", input.dateGenerated);
    JsonUtils::ObjectAddMember(output, "Duration", input.duration);
    JsonUtils::ObjectAddMember(output, "EventsProcessed", input.eventsProcessed);
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    JsonUtils::ObjectAddMember(output, "ExperimentName", input.experimentName);
    JsonUtils::ObjectAddMember(output, "LatestJobStatus", input.latestJobStatus);
    JsonUtils::ObjectAddMember(output, "SampleRatioMismatch", input.sampleRatioMismatch);
    JsonUtils::ObjectAddMember(output, "ScorecardDataRows", input.scorecardDataRows, input.scorecardDataRowsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationGetLatestScorecardResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Scorecard", input.scorecard);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationGetTreatmentAssignmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationGetTreatmentAssignmentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TreatmentAssignment", input.treatmentAssignment);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationStartExperimentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationStopExperimentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationUpdateExclusionGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabExperimentationUpdateExperimentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "EndDate", input.endDate, true);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupTrafficAllocation", input.exclusionGroupTrafficAllocation);
    JsonUtils::ObjectAddMember(output, "ExperimentType", input.experimentType);
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    JsonUtils::ObjectAddMember(output, "StartDate", input.startDate, true);
    JsonUtils::ObjectAddMember(output, "TitlePlayerAccountTestIds", input.titlePlayerAccountTestIds, input.titlePlayerAccountTestIdsCount);
    JsonUtils::ObjectAddMember(output, "Variants", input.variants, input.variantsCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
