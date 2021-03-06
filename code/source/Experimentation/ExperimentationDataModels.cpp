#include "stdafx.h"
#include "ExperimentationDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace ExperimentationModels
{

CreateExclusionGroupRequest::CreateExclusionGroupRequest() :
    PFExperimentationCreateExclusionGroupRequest{}
{
}

CreateExclusionGroupRequest::CreateExclusionGroupRequest(const CreateExclusionGroupRequest& src) :
    PFExperimentationCreateExclusionGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_description{ src.m_description },
    m_name{ src.m_name }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

CreateExclusionGroupRequest::CreateExclusionGroupRequest(CreateExclusionGroupRequest&& src) :
    PFExperimentationCreateExclusionGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_description{ std::move(src.m_description) },
    m_name{ std::move(src.m_name) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    description = m_description.empty() ? nullptr : m_description.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

CreateExclusionGroupRequest::CreateExclusionGroupRequest(const PFExperimentationCreateExclusionGroupRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationCreateExclusionGroupRequest>(*this);
}

CreateExclusionGroupResult::CreateExclusionGroupResult() :
    PFExperimentationCreateExclusionGroupResult{}
{
}

CreateExclusionGroupResult::CreateExclusionGroupResult(const CreateExclusionGroupResult& src) :
    PFExperimentationCreateExclusionGroupResult{ src },
    m_exclusionGroupId{ src.m_exclusionGroupId }
{
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

CreateExclusionGroupResult::CreateExclusionGroupResult(CreateExclusionGroupResult&& src) :
    PFExperimentationCreateExclusionGroupResult{ src },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) }
{
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

CreateExclusionGroupResult::CreateExclusionGroupResult(const PFExperimentationCreateExclusionGroupResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateExclusionGroupResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
}

JsonValue CreateExclusionGroupResult::ToJson() const
{
    return JsonUtils::ToJson<PFExperimentationCreateExclusionGroupResult>(*this);
}

size_t CreateExclusionGroupResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFExperimentationCreateExclusionGroupResult) };
    serializedSize += (m_exclusionGroupId.size() + 1);
    return serializedSize;
}

void CreateExclusionGroupResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFExperimentationCreateExclusionGroupResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFExperimentationCreateExclusionGroupResult);
    memcpy(stringBuffer, m_exclusionGroupId.data(), m_exclusionGroupId.size() + 1);
    serializedStruct->exclusionGroupId = stringBuffer;
    stringBuffer += m_exclusionGroupId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

Variant::Variant() :
    PFExperimentationVariant{}
{
}

Variant::Variant(const Variant& src) :
    PFExperimentationVariant{ src },
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
    PFExperimentationVariant{ src },
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

Variant::Variant(const PFExperimentationVariant& src)
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
    return JsonUtils::ToJson<PFExperimentationVariant>(*this);
}

CreateExperimentRequest::CreateExperimentRequest() :
    PFExperimentationCreateExperimentRequest{}
{
}

CreateExperimentRequest::CreateExperimentRequest(const CreateExperimentRequest& src) :
    PFExperimentationCreateExperimentRequest{ src },
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
    PFExperimentationCreateExperimentRequest{ src },
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

CreateExperimentRequest::CreateExperimentRequest(const PFExperimentationCreateExperimentRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationCreateExperimentRequest>(*this);
}

CreateExperimentResult::CreateExperimentResult() :
    PFExperimentationCreateExperimentResult{}
{
}

CreateExperimentResult::CreateExperimentResult(const CreateExperimentResult& src) :
    PFExperimentationCreateExperimentResult{ src },
    m_experimentId{ src.m_experimentId }
{
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

CreateExperimentResult::CreateExperimentResult(CreateExperimentResult&& src) :
    PFExperimentationCreateExperimentResult{ src },
    m_experimentId{ std::move(src.m_experimentId) }
{
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

CreateExperimentResult::CreateExperimentResult(const PFExperimentationCreateExperimentResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateExperimentResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
}

JsonValue CreateExperimentResult::ToJson() const
{
    return JsonUtils::ToJson<PFExperimentationCreateExperimentResult>(*this);
}

size_t CreateExperimentResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFExperimentationCreateExperimentResult) };
    serializedSize += (m_experimentId.size() + 1);
    return serializedSize;
}

void CreateExperimentResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFExperimentationCreateExperimentResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFExperimentationCreateExperimentResult);
    memcpy(stringBuffer, m_experimentId.data(), m_experimentId.size() + 1);
    serializedStruct->experimentId = stringBuffer;
    stringBuffer += m_experimentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteExclusionGroupRequest::DeleteExclusionGroupRequest() :
    PFExperimentationDeleteExclusionGroupRequest{}
{
}

DeleteExclusionGroupRequest::DeleteExclusionGroupRequest(const DeleteExclusionGroupRequest& src) :
    PFExperimentationDeleteExclusionGroupRequest{ src },
    m_customTags{ src.m_customTags },
    m_exclusionGroupId{ src.m_exclusionGroupId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

DeleteExclusionGroupRequest::DeleteExclusionGroupRequest(DeleteExclusionGroupRequest&& src) :
    PFExperimentationDeleteExclusionGroupRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

DeleteExclusionGroupRequest::DeleteExclusionGroupRequest(const PFExperimentationDeleteExclusionGroupRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationDeleteExclusionGroupRequest>(*this);
}

DeleteExperimentRequest::DeleteExperimentRequest() :
    PFExperimentationDeleteExperimentRequest{}
{
}

DeleteExperimentRequest::DeleteExperimentRequest(const DeleteExperimentRequest& src) :
    PFExperimentationDeleteExperimentRequest{ src },
    m_customTags{ src.m_customTags },
    m_experimentId{ src.m_experimentId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

DeleteExperimentRequest::DeleteExperimentRequest(DeleteExperimentRequest&& src) :
    PFExperimentationDeleteExperimentRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_experimentId{ std::move(src.m_experimentId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

DeleteExperimentRequest::DeleteExperimentRequest(const PFExperimentationDeleteExperimentRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationDeleteExperimentRequest>(*this);
}

GetExclusionGroupsRequest::GetExclusionGroupsRequest() :
    PFExperimentationGetExclusionGroupsRequest{}
{
}

GetExclusionGroupsRequest::GetExclusionGroupsRequest(const GetExclusionGroupsRequest& src) :
    PFExperimentationGetExclusionGroupsRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetExclusionGroupsRequest::GetExclusionGroupsRequest(GetExclusionGroupsRequest&& src) :
    PFExperimentationGetExclusionGroupsRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetExclusionGroupsRequest::GetExclusionGroupsRequest(const PFExperimentationGetExclusionGroupsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExclusionGroupsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetExclusionGroupsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFExperimentationGetExclusionGroupsRequest>(*this);
}

ExperimentExclusionGroup::ExperimentExclusionGroup() :
    PFExperimentationExperimentExclusionGroup{}
{
}

ExperimentExclusionGroup::ExperimentExclusionGroup(const ExperimentExclusionGroup& src) :
    PFExperimentationExperimentExclusionGroup{ src },
    m_description{ src.m_description },
    m_exclusionGroupId{ src.m_exclusionGroupId },
    m_name{ src.m_name }
{
    description = m_description.empty() ? nullptr : m_description.data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

ExperimentExclusionGroup::ExperimentExclusionGroup(ExperimentExclusionGroup&& src) :
    PFExperimentationExperimentExclusionGroup{ src },
    m_description{ std::move(src.m_description) },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) },
    m_name{ std::move(src.m_name) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

ExperimentExclusionGroup::ExperimentExclusionGroup(const PFExperimentationExperimentExclusionGroup& src)
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
    return JsonUtils::ToJson<PFExperimentationExperimentExclusionGroup>(*this);
}

size_t ExperimentExclusionGroup::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFExperimentationExperimentExclusionGroup) };
    serializedSize += (m_description.size() + 1);
    serializedSize += (m_exclusionGroupId.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void ExperimentExclusionGroup::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFExperimentationExperimentExclusionGroup{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFExperimentationExperimentExclusionGroup);
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

GetExclusionGroupsResult::GetExclusionGroupsResult() :
    PFExperimentationGetExclusionGroupsResult{}
{
}

GetExclusionGroupsResult::GetExclusionGroupsResult(const GetExclusionGroupsResult& src) :
    PFExperimentationGetExclusionGroupsResult{ src },
    m_exclusionGroups{ src.m_exclusionGroups }
{
    exclusionGroups = m_exclusionGroups.Empty() ? nullptr : m_exclusionGroups.Data();
}

GetExclusionGroupsResult::GetExclusionGroupsResult(GetExclusionGroupsResult&& src) :
    PFExperimentationGetExclusionGroupsResult{ src },
    m_exclusionGroups{ std::move(src.m_exclusionGroups) }
{
    exclusionGroups = m_exclusionGroups.Empty() ? nullptr : m_exclusionGroups.Data();
}

GetExclusionGroupsResult::GetExclusionGroupsResult(const PFExperimentationGetExclusionGroupsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExclusionGroupsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ExclusionGroups", m_exclusionGroups, exclusionGroups, exclusionGroupsCount);
}

JsonValue GetExclusionGroupsResult::ToJson() const
{
    return JsonUtils::ToJson<PFExperimentationGetExclusionGroupsResult>(*this);
}

GetExclusionGroupTrafficRequest::GetExclusionGroupTrafficRequest() :
    PFExperimentationGetExclusionGroupTrafficRequest{}
{
}

GetExclusionGroupTrafficRequest::GetExclusionGroupTrafficRequest(const GetExclusionGroupTrafficRequest& src) :
    PFExperimentationGetExclusionGroupTrafficRequest{ src },
    m_customTags{ src.m_customTags },
    m_exclusionGroupId{ src.m_exclusionGroupId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

GetExclusionGroupTrafficRequest::GetExclusionGroupTrafficRequest(GetExclusionGroupTrafficRequest&& src) :
    PFExperimentationGetExclusionGroupTrafficRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_exclusionGroupId{ std::move(src.m_exclusionGroupId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
}

GetExclusionGroupTrafficRequest::GetExclusionGroupTrafficRequest(const PFExperimentationGetExclusionGroupTrafficRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationGetExclusionGroupTrafficRequest>(*this);
}

ExclusionGroupTrafficAllocation::ExclusionGroupTrafficAllocation() :
    PFExperimentationExclusionGroupTrafficAllocation{}
{
}

ExclusionGroupTrafficAllocation::ExclusionGroupTrafficAllocation(const ExclusionGroupTrafficAllocation& src) :
    PFExperimentationExclusionGroupTrafficAllocation{ src },
    m_experimentId{ src.m_experimentId }
{
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

ExclusionGroupTrafficAllocation::ExclusionGroupTrafficAllocation(ExclusionGroupTrafficAllocation&& src) :
    PFExperimentationExclusionGroupTrafficAllocation{ src },
    m_experimentId{ std::move(src.m_experimentId) }
{
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

ExclusionGroupTrafficAllocation::ExclusionGroupTrafficAllocation(const PFExperimentationExclusionGroupTrafficAllocation& src)
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
    return JsonUtils::ToJson<PFExperimentationExclusionGroupTrafficAllocation>(*this);
}

size_t ExclusionGroupTrafficAllocation::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFExperimentationExclusionGroupTrafficAllocation) };
    serializedSize += (m_experimentId.size() + 1);
    return serializedSize;
}

void ExclusionGroupTrafficAllocation::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFExperimentationExclusionGroupTrafficAllocation{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFExperimentationExclusionGroupTrafficAllocation);
    memcpy(stringBuffer, m_experimentId.data(), m_experimentId.size() + 1);
    serializedStruct->experimentId = stringBuffer;
    stringBuffer += m_experimentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetExclusionGroupTrafficResult::GetExclusionGroupTrafficResult() :
    PFExperimentationGetExclusionGroupTrafficResult{}
{
}

GetExclusionGroupTrafficResult::GetExclusionGroupTrafficResult(const GetExclusionGroupTrafficResult& src) :
    PFExperimentationGetExclusionGroupTrafficResult{ src },
    m_trafficAllocations{ src.m_trafficAllocations }
{
    trafficAllocations = m_trafficAllocations.Empty() ? nullptr : m_trafficAllocations.Data();
}

GetExclusionGroupTrafficResult::GetExclusionGroupTrafficResult(GetExclusionGroupTrafficResult&& src) :
    PFExperimentationGetExclusionGroupTrafficResult{ src },
    m_trafficAllocations{ std::move(src.m_trafficAllocations) }
{
    trafficAllocations = m_trafficAllocations.Empty() ? nullptr : m_trafficAllocations.Data();
}

GetExclusionGroupTrafficResult::GetExclusionGroupTrafficResult(const PFExperimentationGetExclusionGroupTrafficResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExclusionGroupTrafficResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TrafficAllocations", m_trafficAllocations, trafficAllocations, trafficAllocationsCount);
}

JsonValue GetExclusionGroupTrafficResult::ToJson() const
{
    return JsonUtils::ToJson<PFExperimentationGetExclusionGroupTrafficResult>(*this);
}

GetExperimentsRequest::GetExperimentsRequest() :
    PFExperimentationGetExperimentsRequest{}
{
}

GetExperimentsRequest::GetExperimentsRequest(const GetExperimentsRequest& src) :
    PFExperimentationGetExperimentsRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetExperimentsRequest::GetExperimentsRequest(GetExperimentsRequest&& src) :
    PFExperimentationGetExperimentsRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetExperimentsRequest::GetExperimentsRequest(const PFExperimentationGetExperimentsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExperimentsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetExperimentsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFExperimentationGetExperimentsRequest>(*this);
}

Experiment::Experiment() :
    PFExperimentationExperiment{}
{
}

Experiment::Experiment(const Experiment& src) :
    PFExperimentationExperiment{ src },
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
    PFExperimentationExperiment{ src },
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

Experiment::Experiment(const PFExperimentationExperiment& src)
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
    return JsonUtils::ToJson<PFExperimentationExperiment>(*this);
}

GetExperimentsResult::GetExperimentsResult() :
    PFExperimentationGetExperimentsResult{}
{
}

GetExperimentsResult::GetExperimentsResult(const GetExperimentsResult& src) :
    PFExperimentationGetExperimentsResult{ src },
    m_experiments{ src.m_experiments }
{
    experiments = m_experiments.Empty() ? nullptr : m_experiments.Data();
}

GetExperimentsResult::GetExperimentsResult(GetExperimentsResult&& src) :
    PFExperimentationGetExperimentsResult{ src },
    m_experiments{ std::move(src.m_experiments) }
{
    experiments = m_experiments.Empty() ? nullptr : m_experiments.Data();
}

GetExperimentsResult::GetExperimentsResult(const PFExperimentationGetExperimentsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetExperimentsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Experiments", m_experiments, experiments, experimentsCount);
}

JsonValue GetExperimentsResult::ToJson() const
{
    return JsonUtils::ToJson<PFExperimentationGetExperimentsResult>(*this);
}

GetLatestScorecardRequest::GetLatestScorecardRequest() :
    PFExperimentationGetLatestScorecardRequest{}
{
}

GetLatestScorecardRequest::GetLatestScorecardRequest(const GetLatestScorecardRequest& src) :
    PFExperimentationGetLatestScorecardRequest{ src },
    m_customTags{ src.m_customTags },
    m_experimentId{ src.m_experimentId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

GetLatestScorecardRequest::GetLatestScorecardRequest(GetLatestScorecardRequest&& src) :
    PFExperimentationGetLatestScorecardRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_experimentId{ std::move(src.m_experimentId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

GetLatestScorecardRequest::GetLatestScorecardRequest(const PFExperimentationGetLatestScorecardRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationGetLatestScorecardRequest>(*this);
}

MetricData::MetricData() :
    PFExperimentationMetricData{}
{
}

MetricData::MetricData(const MetricData& src) :
    PFExperimentationMetricData{ src },
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
    PFExperimentationMetricData{ src },
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

MetricData::MetricData(const PFExperimentationMetricData& src)
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
    return JsonUtils::ToJson<PFExperimentationMetricData>(*this);
}

size_t MetricData::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFExperimentationMetricData) };
    serializedSize += (m_internalName.size() + 1);
    serializedSize += (m_movement.size() + 1);
    serializedSize += (m_name.size() + 1);
    serializedSize += (m_statSigLevel.size() + 1);
    return serializedSize;
}

void MetricData::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFExperimentationMetricData{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFExperimentationMetricData);
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
    PFExperimentationScorecardDataRow{}
{
}

ScorecardDataRow::ScorecardDataRow(const ScorecardDataRow& src) :
    PFExperimentationScorecardDataRow{ src },
    m_metricDataRows{ src.m_metricDataRows },
    m_variantName{ src.m_variantName }
{
    metricDataRows = m_metricDataRows.Empty() ? nullptr : m_metricDataRows.Data();
    variantName = m_variantName.empty() ? nullptr : m_variantName.data();
}

ScorecardDataRow::ScorecardDataRow(ScorecardDataRow&& src) :
    PFExperimentationScorecardDataRow{ src },
    m_metricDataRows{ std::move(src.m_metricDataRows) },
    m_variantName{ std::move(src.m_variantName) }
{
    metricDataRows = m_metricDataRows.Empty() ? nullptr : m_metricDataRows.Data();
    variantName = m_variantName.empty() ? nullptr : m_variantName.data();
}

ScorecardDataRow::ScorecardDataRow(const PFExperimentationScorecardDataRow& src)
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
    return JsonUtils::ToJson<PFExperimentationScorecardDataRow>(*this);
}

Scorecard::Scorecard() :
    PFExperimentationScorecard{}
{
}

Scorecard::Scorecard(const Scorecard& src) :
    PFExperimentationScorecard{ src },
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
    PFExperimentationScorecard{ src },
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

Scorecard::Scorecard(const PFExperimentationScorecard& src)
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
    return JsonUtils::ToJson<PFExperimentationScorecard>(*this);
}

GetLatestScorecardResult::GetLatestScorecardResult() :
    PFExperimentationGetLatestScorecardResult{}
{
}

GetLatestScorecardResult::GetLatestScorecardResult(const GetLatestScorecardResult& src) :
    PFExperimentationGetLatestScorecardResult{ src },
    m_scorecard{ src.m_scorecard }
{
    scorecard = m_scorecard ? m_scorecard.operator->() : nullptr;
}

GetLatestScorecardResult::GetLatestScorecardResult(GetLatestScorecardResult&& src) :
    PFExperimentationGetLatestScorecardResult{ src },
    m_scorecard{ std::move(src.m_scorecard) }
{
    scorecard = m_scorecard ? m_scorecard.operator->() : nullptr;
}

GetLatestScorecardResult::GetLatestScorecardResult(const PFExperimentationGetLatestScorecardResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLatestScorecardResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Scorecard", m_scorecard, scorecard);
}

JsonValue GetLatestScorecardResult::ToJson() const
{
    return JsonUtils::ToJson<PFExperimentationGetLatestScorecardResult>(*this);
}

GetTreatmentAssignmentRequest::GetTreatmentAssignmentRequest() :
    PFExperimentationGetTreatmentAssignmentRequest{}
{
}

GetTreatmentAssignmentRequest::GetTreatmentAssignmentRequest(const GetTreatmentAssignmentRequest& src) :
    PFExperimentationGetTreatmentAssignmentRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetTreatmentAssignmentRequest::GetTreatmentAssignmentRequest(GetTreatmentAssignmentRequest&& src) :
    PFExperimentationGetTreatmentAssignmentRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetTreatmentAssignmentRequest::GetTreatmentAssignmentRequest(const PFExperimentationGetTreatmentAssignmentRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationGetTreatmentAssignmentRequest>(*this);
}

GetTreatmentAssignmentResult::GetTreatmentAssignmentResult() :
    PFExperimentationGetTreatmentAssignmentResult{}
{
}

GetTreatmentAssignmentResult::GetTreatmentAssignmentResult(const GetTreatmentAssignmentResult& src) :
    PFExperimentationGetTreatmentAssignmentResult{ src },
    m_treatmentAssignment{ src.m_treatmentAssignment }
{
    treatmentAssignment = m_treatmentAssignment ? m_treatmentAssignment.operator->() : nullptr;
}

GetTreatmentAssignmentResult::GetTreatmentAssignmentResult(GetTreatmentAssignmentResult&& src) :
    PFExperimentationGetTreatmentAssignmentResult{ src },
    m_treatmentAssignment{ std::move(src.m_treatmentAssignment) }
{
    treatmentAssignment = m_treatmentAssignment ? m_treatmentAssignment.operator->() : nullptr;
}

GetTreatmentAssignmentResult::GetTreatmentAssignmentResult(const PFExperimentationGetTreatmentAssignmentResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTreatmentAssignmentResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TreatmentAssignment", m_treatmentAssignment, treatmentAssignment);
}

JsonValue GetTreatmentAssignmentResult::ToJson() const
{
    return JsonUtils::ToJson<PFExperimentationGetTreatmentAssignmentResult>(*this);
}

StartExperimentRequest::StartExperimentRequest() :
    PFExperimentationStartExperimentRequest{}
{
}

StartExperimentRequest::StartExperimentRequest(const StartExperimentRequest& src) :
    PFExperimentationStartExperimentRequest{ src },
    m_customTags{ src.m_customTags },
    m_experimentId{ src.m_experimentId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

StartExperimentRequest::StartExperimentRequest(StartExperimentRequest&& src) :
    PFExperimentationStartExperimentRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_experimentId{ std::move(src.m_experimentId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

StartExperimentRequest::StartExperimentRequest(const PFExperimentationStartExperimentRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationStartExperimentRequest>(*this);
}

StopExperimentRequest::StopExperimentRequest() :
    PFExperimentationStopExperimentRequest{}
{
}

StopExperimentRequest::StopExperimentRequest(const StopExperimentRequest& src) :
    PFExperimentationStopExperimentRequest{ src },
    m_customTags{ src.m_customTags },
    m_experimentId{ src.m_experimentId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

StopExperimentRequest::StopExperimentRequest(StopExperimentRequest&& src) :
    PFExperimentationStopExperimentRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_experimentId{ std::move(src.m_experimentId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
}

StopExperimentRequest::StopExperimentRequest(const PFExperimentationStopExperimentRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationStopExperimentRequest>(*this);
}

UpdateExclusionGroupRequest::UpdateExclusionGroupRequest() :
    PFExperimentationUpdateExclusionGroupRequest{}
{
}

UpdateExclusionGroupRequest::UpdateExclusionGroupRequest(const UpdateExclusionGroupRequest& src) :
    PFExperimentationUpdateExclusionGroupRequest{ src },
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
    PFExperimentationUpdateExclusionGroupRequest{ src },
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

UpdateExclusionGroupRequest::UpdateExclusionGroupRequest(const PFExperimentationUpdateExclusionGroupRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationUpdateExclusionGroupRequest>(*this);
}

UpdateExperimentRequest::UpdateExperimentRequest() :
    PFExperimentationUpdateExperimentRequest{}
{
}

UpdateExperimentRequest::UpdateExperimentRequest(const UpdateExperimentRequest& src) :
    PFExperimentationUpdateExperimentRequest{ src },
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
    PFExperimentationUpdateExperimentRequest{ src },
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

UpdateExperimentRequest::UpdateExperimentRequest(const PFExperimentationUpdateExperimentRequest& src)
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
    return JsonUtils::ToJson<PFExperimentationUpdateExperimentRequest>(*this);
}

} // namespace ExperimentationModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFExperimentationCreateExclusionGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationCreateExclusionGroupResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationVariant& input)
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
inline JsonValue ToJson<>(const PFExperimentationCreateExperimentRequest& input)
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
inline JsonValue ToJson<>(const PFExperimentationCreateExperimentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationDeleteExclusionGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationDeleteExperimentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationGetExclusionGroupsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationExperimentExclusionGroup& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationGetExclusionGroupsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ExclusionGroups", input.exclusionGroups, input.exclusionGroupsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationGetExclusionGroupTrafficRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationExclusionGroupTrafficAllocation& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    JsonUtils::ObjectAddMember(output, "TrafficAllocation", input.trafficAllocation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationGetExclusionGroupTrafficResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TrafficAllocations", input.trafficAllocations, input.trafficAllocationsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationGetExperimentsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationExperiment& input)
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
inline JsonValue ToJson<>(const PFExperimentationGetExperimentsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Experiments", input.experiments, input.experimentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationGetLatestScorecardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationMetricData& input)
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
inline JsonValue ToJson<>(const PFExperimentationScorecardDataRow& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsControl", input.isControl);
    JsonUtils::ObjectAddMember(output, "MetricDataRows", input.metricDataRows, input.metricDataRowsCount);
    JsonUtils::ObjectAddMember(output, "PlayerCount", input.playerCount);
    JsonUtils::ObjectAddMember(output, "VariantName", input.variantName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationScorecard& input)
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
inline JsonValue ToJson<>(const PFExperimentationGetLatestScorecardResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Scorecard", input.scorecard);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationGetTreatmentAssignmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationGetTreatmentAssignmentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TreatmentAssignment", input.treatmentAssignment);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationStartExperimentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationStopExperimentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExperimentId", input.experimentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationUpdateExclusionGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "ExclusionGroupId", input.exclusionGroupId);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExperimentationUpdateExperimentRequest& input)
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
