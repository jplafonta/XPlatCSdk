#pragma once

#include <playfab/PFExperimentationDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace ExperimentationModels
{

// Experimentation Classes
struct CreateExclusionGroupRequest : public PFExperimentationCreateExclusionGroupRequest, public BaseModel
{
    CreateExclusionGroupRequest();
    CreateExclusionGroupRequest(const CreateExclusionGroupRequest& src);
    CreateExclusionGroupRequest(CreateExclusionGroupRequest&& src);
    CreateExclusionGroupRequest(const PFExperimentationCreateExclusionGroupRequest& src);
    CreateExclusionGroupRequest& operator=(const CreateExclusionGroupRequest&) = delete;
    ~CreateExclusionGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_description;
    String m_name;
};

struct CreateExclusionGroupResult : public PFExperimentationCreateExclusionGroupResult, public SerializableModel, public ApiResult
{
    CreateExclusionGroupResult();
    CreateExclusionGroupResult(const CreateExclusionGroupResult& src);
    CreateExclusionGroupResult(CreateExclusionGroupResult&& src);
    CreateExclusionGroupResult(const PFExperimentationCreateExclusionGroupResult& src);
    CreateExclusionGroupResult& operator=(const CreateExclusionGroupResult&) = delete;
    ~CreateExclusionGroupResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_exclusionGroupId;
};

struct Variant : public PFExperimentationVariant, public BaseModel
{
    Variant();
    Variant(const Variant& src);
    Variant(Variant&& src);
    Variant(const PFExperimentationVariant& src);
    Variant& operator=(const Variant&) = delete;
    ~Variant() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    String m_id;
    String m_name;
    String m_titleDataOverrideLabel;
    PointerArrayModel<PFVariable, Variable> m_variables;
};

struct CreateExperimentRequest : public PFExperimentationCreateExperimentRequest, public BaseModel
{
    CreateExperimentRequest();
    CreateExperimentRequest(const CreateExperimentRequest& src);
    CreateExperimentRequest(CreateExperimentRequest&& src);
    CreateExperimentRequest(const PFExperimentationCreateExperimentRequest& src);
    CreateExperimentRequest& operator=(const CreateExperimentRequest&) = delete;
    ~CreateExperimentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_description;
    StdExtra::optional<time_t> m_endDate;
    String m_exclusionGroupId;
    StdExtra::optional<uint32_t> m_exclusionGroupTrafficAllocation;
    StdExtra::optional<PFExperimentationExperimentType> m_experimentType;
    String m_name;
    String m_segmentId;
    PointerArrayModel<char, String> m_titlePlayerAccountTestIds;
    PointerArrayModel<PFExperimentationVariant, Variant> m_variants;
};

struct CreateExperimentResult : public PFExperimentationCreateExperimentResult, public SerializableModel, public ApiResult
{
    CreateExperimentResult();
    CreateExperimentResult(const CreateExperimentResult& src);
    CreateExperimentResult(CreateExperimentResult&& src);
    CreateExperimentResult(const PFExperimentationCreateExperimentResult& src);
    CreateExperimentResult& operator=(const CreateExperimentResult&) = delete;
    ~CreateExperimentResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_experimentId;
};

struct DeleteExclusionGroupRequest : public PFExperimentationDeleteExclusionGroupRequest, public BaseModel
{
    DeleteExclusionGroupRequest();
    DeleteExclusionGroupRequest(const DeleteExclusionGroupRequest& src);
    DeleteExclusionGroupRequest(DeleteExclusionGroupRequest&& src);
    DeleteExclusionGroupRequest(const PFExperimentationDeleteExclusionGroupRequest& src);
    DeleteExclusionGroupRequest& operator=(const DeleteExclusionGroupRequest&) = delete;
    ~DeleteExclusionGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_exclusionGroupId;
};

struct DeleteExperimentRequest : public PFExperimentationDeleteExperimentRequest, public BaseModel
{
    DeleteExperimentRequest();
    DeleteExperimentRequest(const DeleteExperimentRequest& src);
    DeleteExperimentRequest(DeleteExperimentRequest&& src);
    DeleteExperimentRequest(const PFExperimentationDeleteExperimentRequest& src);
    DeleteExperimentRequest& operator=(const DeleteExperimentRequest&) = delete;
    ~DeleteExperimentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_experimentId;
};

struct GetExclusionGroupsRequest : public PFExperimentationGetExclusionGroupsRequest, public BaseModel
{
    GetExclusionGroupsRequest();
    GetExclusionGroupsRequest(const GetExclusionGroupsRequest& src);
    GetExclusionGroupsRequest(GetExclusionGroupsRequest&& src);
    GetExclusionGroupsRequest(const PFExperimentationGetExclusionGroupsRequest& src);
    GetExclusionGroupsRequest& operator=(const GetExclusionGroupsRequest&) = delete;
    ~GetExclusionGroupsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct ExperimentExclusionGroup : public PFExperimentationExperimentExclusionGroup, public SerializableModel
{
    ExperimentExclusionGroup();
    ExperimentExclusionGroup(const ExperimentExclusionGroup& src);
    ExperimentExclusionGroup(ExperimentExclusionGroup&& src);
    ExperimentExclusionGroup(const PFExperimentationExperimentExclusionGroup& src);
    ExperimentExclusionGroup& operator=(const ExperimentExclusionGroup&) = delete;
    ~ExperimentExclusionGroup() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_description;
    String m_exclusionGroupId;
    String m_name;
};

struct GetExclusionGroupsResult : public PFExperimentationGetExclusionGroupsResult, public BaseModel, public ApiResult
{
    GetExclusionGroupsResult();
    GetExclusionGroupsResult(const GetExclusionGroupsResult& src);
    GetExclusionGroupsResult(GetExclusionGroupsResult&& src);
    GetExclusionGroupsResult(const PFExperimentationGetExclusionGroupsResult& src);
    GetExclusionGroupsResult& operator=(const GetExclusionGroupsResult&) = delete;
    ~GetExclusionGroupsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFExperimentationExperimentExclusionGroup, ExperimentExclusionGroup> m_exclusionGroups;
};

struct GetExclusionGroupTrafficRequest : public PFExperimentationGetExclusionGroupTrafficRequest, public BaseModel
{
    GetExclusionGroupTrafficRequest();
    GetExclusionGroupTrafficRequest(const GetExclusionGroupTrafficRequest& src);
    GetExclusionGroupTrafficRequest(GetExclusionGroupTrafficRequest&& src);
    GetExclusionGroupTrafficRequest(const PFExperimentationGetExclusionGroupTrafficRequest& src);
    GetExclusionGroupTrafficRequest& operator=(const GetExclusionGroupTrafficRequest&) = delete;
    ~GetExclusionGroupTrafficRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_exclusionGroupId;
};

struct ExclusionGroupTrafficAllocation : public PFExperimentationExclusionGroupTrafficAllocation, public SerializableModel
{
    ExclusionGroupTrafficAllocation();
    ExclusionGroupTrafficAllocation(const ExclusionGroupTrafficAllocation& src);
    ExclusionGroupTrafficAllocation(ExclusionGroupTrafficAllocation&& src);
    ExclusionGroupTrafficAllocation(const PFExperimentationExclusionGroupTrafficAllocation& src);
    ExclusionGroupTrafficAllocation& operator=(const ExclusionGroupTrafficAllocation&) = delete;
    ~ExclusionGroupTrafficAllocation() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_experimentId;
};

struct GetExclusionGroupTrafficResult : public PFExperimentationGetExclusionGroupTrafficResult, public BaseModel, public ApiResult
{
    GetExclusionGroupTrafficResult();
    GetExclusionGroupTrafficResult(const GetExclusionGroupTrafficResult& src);
    GetExclusionGroupTrafficResult(GetExclusionGroupTrafficResult&& src);
    GetExclusionGroupTrafficResult(const PFExperimentationGetExclusionGroupTrafficResult& src);
    GetExclusionGroupTrafficResult& operator=(const GetExclusionGroupTrafficResult&) = delete;
    ~GetExclusionGroupTrafficResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFExperimentationExclusionGroupTrafficAllocation, ExclusionGroupTrafficAllocation> m_trafficAllocations;
};

struct GetExperimentsRequest : public PFExperimentationGetExperimentsRequest, public BaseModel
{
    GetExperimentsRequest();
    GetExperimentsRequest(const GetExperimentsRequest& src);
    GetExperimentsRequest(GetExperimentsRequest&& src);
    GetExperimentsRequest(const PFExperimentationGetExperimentsRequest& src);
    GetExperimentsRequest& operator=(const GetExperimentsRequest&) = delete;
    ~GetExperimentsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct Experiment : public PFExperimentationExperiment, public BaseModel
{
    Experiment();
    Experiment(const Experiment& src);
    Experiment(Experiment&& src);
    Experiment(const PFExperimentationExperiment& src);
    Experiment& operator=(const Experiment&) = delete;
    ~Experiment() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    StdExtra::optional<time_t> m_endDate;
    String m_exclusionGroupId;
    StdExtra::optional<uint32_t> m_exclusionGroupTrafficAllocation;
    StdExtra::optional<PFExperimentationExperimentType> m_experimentType;
    String m_id;
    String m_name;
    String m_segmentId;
    StdExtra::optional<PFExperimentationExperimentState> m_state;
    PointerArrayModel<char, String> m_titlePlayerAccountTestIds;
    PointerArrayModel<PFExperimentationVariant, Variant> m_variants;
};

struct GetExperimentsResult : public PFExperimentationGetExperimentsResult, public BaseModel, public ApiResult
{
    GetExperimentsResult();
    GetExperimentsResult(const GetExperimentsResult& src);
    GetExperimentsResult(GetExperimentsResult&& src);
    GetExperimentsResult(const PFExperimentationGetExperimentsResult& src);
    GetExperimentsResult& operator=(const GetExperimentsResult&) = delete;
    ~GetExperimentsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFExperimentationExperiment, Experiment> m_experiments;
};

struct GetLatestScorecardRequest : public PFExperimentationGetLatestScorecardRequest, public BaseModel
{
    GetLatestScorecardRequest();
    GetLatestScorecardRequest(const GetLatestScorecardRequest& src);
    GetLatestScorecardRequest(GetLatestScorecardRequest&& src);
    GetLatestScorecardRequest(const PFExperimentationGetLatestScorecardRequest& src);
    GetLatestScorecardRequest& operator=(const GetLatestScorecardRequest&) = delete;
    ~GetLatestScorecardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_experimentId;
};

struct MetricData : public PFExperimentationMetricData, public SerializableModel
{
    MetricData();
    MetricData(const MetricData& src);
    MetricData(MetricData&& src);
    MetricData(const PFExperimentationMetricData& src);
    MetricData& operator=(const MetricData&) = delete;
    ~MetricData() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_internalName;
    String m_movement;
    String m_name;
    String m_statSigLevel;
};

struct ScorecardDataRow : public PFExperimentationScorecardDataRow, public BaseModel
{
    ScorecardDataRow();
    ScorecardDataRow(const ScorecardDataRow& src);
    ScorecardDataRow(ScorecardDataRow&& src);
    ScorecardDataRow(const PFExperimentationScorecardDataRow& src);
    ScorecardDataRow& operator=(const ScorecardDataRow&) = delete;
    ~ScorecardDataRow() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFExperimentationMetricDataDictionaryEntry, MetricData> m_metricDataRows;
    String m_variantName;
};

struct Scorecard : public PFExperimentationScorecard, public BaseModel
{
    Scorecard();
    Scorecard(const Scorecard& src);
    Scorecard(Scorecard&& src);
    Scorecard(const PFExperimentationScorecard& src);
    Scorecard& operator=(const Scorecard&) = delete;
    ~Scorecard() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_dateGenerated;
    String m_duration;
    String m_experimentId;
    String m_experimentName;
    StdExtra::optional<PFExperimentationAnalysisTaskState> m_latestJobStatus;
    PointerArrayModel<PFExperimentationScorecardDataRow, ScorecardDataRow> m_scorecardDataRows;
};

struct GetLatestScorecardResult : public PFExperimentationGetLatestScorecardResult, public BaseModel, public ApiResult
{
    GetLatestScorecardResult();
    GetLatestScorecardResult(const GetLatestScorecardResult& src);
    GetLatestScorecardResult(GetLatestScorecardResult&& src);
    GetLatestScorecardResult(const PFExperimentationGetLatestScorecardResult& src);
    GetLatestScorecardResult& operator=(const GetLatestScorecardResult&) = delete;
    ~GetLatestScorecardResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<Scorecard> m_scorecard;
};

struct GetTreatmentAssignmentRequest : public PFExperimentationGetTreatmentAssignmentRequest, public BaseModel
{
    GetTreatmentAssignmentRequest();
    GetTreatmentAssignmentRequest(const GetTreatmentAssignmentRequest& src);
    GetTreatmentAssignmentRequest(GetTreatmentAssignmentRequest&& src);
    GetTreatmentAssignmentRequest(const PFExperimentationGetTreatmentAssignmentRequest& src);
    GetTreatmentAssignmentRequest& operator=(const GetTreatmentAssignmentRequest&) = delete;
    ~GetTreatmentAssignmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
};

struct GetTreatmentAssignmentResult : public PFExperimentationGetTreatmentAssignmentResult, public BaseModel, public ApiResult
{
    GetTreatmentAssignmentResult();
    GetTreatmentAssignmentResult(const GetTreatmentAssignmentResult& src);
    GetTreatmentAssignmentResult(GetTreatmentAssignmentResult&& src);
    GetTreatmentAssignmentResult(const PFExperimentationGetTreatmentAssignmentResult& src);
    GetTreatmentAssignmentResult& operator=(const GetTreatmentAssignmentResult&) = delete;
    ~GetTreatmentAssignmentResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TreatmentAssignment> m_treatmentAssignment;
};

struct StartExperimentRequest : public PFExperimentationStartExperimentRequest, public BaseModel
{
    StartExperimentRequest();
    StartExperimentRequest(const StartExperimentRequest& src);
    StartExperimentRequest(StartExperimentRequest&& src);
    StartExperimentRequest(const PFExperimentationStartExperimentRequest& src);
    StartExperimentRequest& operator=(const StartExperimentRequest&) = delete;
    ~StartExperimentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_experimentId;
};

struct StopExperimentRequest : public PFExperimentationStopExperimentRequest, public BaseModel
{
    StopExperimentRequest();
    StopExperimentRequest(const StopExperimentRequest& src);
    StopExperimentRequest(StopExperimentRequest&& src);
    StopExperimentRequest(const PFExperimentationStopExperimentRequest& src);
    StopExperimentRequest& operator=(const StopExperimentRequest&) = delete;
    ~StopExperimentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_experimentId;
};

struct UpdateExclusionGroupRequest : public PFExperimentationUpdateExclusionGroupRequest, public BaseModel
{
    UpdateExclusionGroupRequest();
    UpdateExclusionGroupRequest(const UpdateExclusionGroupRequest& src);
    UpdateExclusionGroupRequest(UpdateExclusionGroupRequest&& src);
    UpdateExclusionGroupRequest(const PFExperimentationUpdateExclusionGroupRequest& src);
    UpdateExclusionGroupRequest& operator=(const UpdateExclusionGroupRequest&) = delete;
    ~UpdateExclusionGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_description;
    String m_exclusionGroupId;
    String m_name;
};

struct UpdateExperimentRequest : public PFExperimentationUpdateExperimentRequest, public BaseModel
{
    UpdateExperimentRequest();
    UpdateExperimentRequest(const UpdateExperimentRequest& src);
    UpdateExperimentRequest(UpdateExperimentRequest&& src);
    UpdateExperimentRequest(const PFExperimentationUpdateExperimentRequest& src);
    UpdateExperimentRequest& operator=(const UpdateExperimentRequest&) = delete;
    ~UpdateExperimentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_description;
    StdExtra::optional<time_t> m_endDate;
    String m_exclusionGroupId;
    StdExtra::optional<uint32_t> m_exclusionGroupTrafficAllocation;
    StdExtra::optional<PFExperimentationExperimentType> m_experimentType;
    String m_id;
    String m_name;
    String m_segmentId;
    PointerArrayModel<char, String> m_titlePlayerAccountTestIds;
    PointerArrayModel<PFExperimentationVariant, Variant> m_variants;
};

} // namespace ExperimentationModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFExperimentationCreateExclusionGroupRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationCreateExclusionGroupResult& input);
template<> inline JsonValue ToJson<>(const PFExperimentationVariant& input);
template<> inline JsonValue ToJson<>(const PFExperimentationCreateExperimentRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationCreateExperimentResult& input);
template<> inline JsonValue ToJson<>(const PFExperimentationDeleteExclusionGroupRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationDeleteExperimentRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationGetExclusionGroupsRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationExperimentExclusionGroup& input);
template<> inline JsonValue ToJson<>(const PFExperimentationGetExclusionGroupsResult& input);
template<> inline JsonValue ToJson<>(const PFExperimentationGetExclusionGroupTrafficRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationExclusionGroupTrafficAllocation& input);
template<> inline JsonValue ToJson<>(const PFExperimentationGetExclusionGroupTrafficResult& input);
template<> inline JsonValue ToJson<>(const PFExperimentationGetExperimentsRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationExperiment& input);
template<> inline JsonValue ToJson<>(const PFExperimentationGetExperimentsResult& input);
template<> inline JsonValue ToJson<>(const PFExperimentationGetLatestScorecardRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationMetricData& input);
template<> inline JsonValue ToJson<>(const PFExperimentationScorecardDataRow& input);
template<> inline JsonValue ToJson<>(const PFExperimentationScorecard& input);
template<> inline JsonValue ToJson<>(const PFExperimentationGetLatestScorecardResult& input);
template<> inline JsonValue ToJson<>(const PFExperimentationGetTreatmentAssignmentRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationGetTreatmentAssignmentResult& input);
template<> inline JsonValue ToJson<>(const PFExperimentationStartExperimentRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationStopExperimentRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationUpdateExclusionGroupRequest& input);
template<> inline JsonValue ToJson<>(const PFExperimentationUpdateExperimentRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
