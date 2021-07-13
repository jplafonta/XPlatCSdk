#pragma once

#include <playfab/PlayFabExperimentationDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace ExperimentationModels
{

// Experimentation Classes
struct CreateExclusionGroupRequest : public PlayFabExperimentationCreateExclusionGroupRequest, public BaseModel
{
    CreateExclusionGroupRequest();
    CreateExclusionGroupRequest(const CreateExclusionGroupRequest& src);
    CreateExclusionGroupRequest(CreateExclusionGroupRequest&& src);
    CreateExclusionGroupRequest(const PlayFabExperimentationCreateExclusionGroupRequest& src);
    CreateExclusionGroupRequest& operator=(const CreateExclusionGroupRequest&) = delete;
    ~CreateExclusionGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_description;
    String m_name;
};

struct CreateExclusionGroupResult : public PlayFabExperimentationCreateExclusionGroupResult, public SerializableModel, public ApiResult
{
    CreateExclusionGroupResult();
    CreateExclusionGroupResult(const CreateExclusionGroupResult& src);
    CreateExclusionGroupResult(CreateExclusionGroupResult&& src);
    CreateExclusionGroupResult(const PlayFabExperimentationCreateExclusionGroupResult& src);
    CreateExclusionGroupResult& operator=(const CreateExclusionGroupResult&) = delete;
    ~CreateExclusionGroupResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_exclusionGroupId;
};

struct Variant : public PlayFabExperimentationVariant, public BaseModel
{
    Variant();
    Variant(const Variant& src);
    Variant(Variant&& src);
    Variant(const PlayFabExperimentationVariant& src);
    Variant& operator=(const Variant&) = delete;
    ~Variant() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    String m_id;
    String m_name;
    String m_titleDataOverrideLabel;
    PointerArrayModel<PlayFabVariable, Variable> m_variables;
};

struct CreateExperimentRequest : public PlayFabExperimentationCreateExperimentRequest, public BaseModel
{
    CreateExperimentRequest();
    CreateExperimentRequest(const CreateExperimentRequest& src);
    CreateExperimentRequest(CreateExperimentRequest&& src);
    CreateExperimentRequest(const PlayFabExperimentationCreateExperimentRequest& src);
    CreateExperimentRequest& operator=(const CreateExperimentRequest&) = delete;
    ~CreateExperimentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_description;
    StdExtra::optional<time_t> m_endDate;
    String m_exclusionGroupId;
    StdExtra::optional<uint32_t> m_exclusionGroupTrafficAllocation;
    StdExtra::optional<PlayFabExperimentationExperimentType> m_experimentType;
    String m_name;
    String m_segmentId;
    PointerArrayModel<char, String> m_titlePlayerAccountTestIds;
    PointerArrayModel<PlayFabExperimentationVariant, Variant> m_variants;
};

struct CreateExperimentResult : public PlayFabExperimentationCreateExperimentResult, public SerializableModel, public ApiResult
{
    CreateExperimentResult();
    CreateExperimentResult(const CreateExperimentResult& src);
    CreateExperimentResult(CreateExperimentResult&& src);
    CreateExperimentResult(const PlayFabExperimentationCreateExperimentResult& src);
    CreateExperimentResult& operator=(const CreateExperimentResult&) = delete;
    ~CreateExperimentResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_experimentId;
};

struct DeleteExclusionGroupRequest : public PlayFabExperimentationDeleteExclusionGroupRequest, public BaseModel
{
    DeleteExclusionGroupRequest();
    DeleteExclusionGroupRequest(const DeleteExclusionGroupRequest& src);
    DeleteExclusionGroupRequest(DeleteExclusionGroupRequest&& src);
    DeleteExclusionGroupRequest(const PlayFabExperimentationDeleteExclusionGroupRequest& src);
    DeleteExclusionGroupRequest& operator=(const DeleteExclusionGroupRequest&) = delete;
    ~DeleteExclusionGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_exclusionGroupId;
};

struct DeleteExperimentRequest : public PlayFabExperimentationDeleteExperimentRequest, public BaseModel
{
    DeleteExperimentRequest();
    DeleteExperimentRequest(const DeleteExperimentRequest& src);
    DeleteExperimentRequest(DeleteExperimentRequest&& src);
    DeleteExperimentRequest(const PlayFabExperimentationDeleteExperimentRequest& src);
    DeleteExperimentRequest& operator=(const DeleteExperimentRequest&) = delete;
    ~DeleteExperimentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_experimentId;
};

struct ExclusionGroupTrafficAllocation : public PlayFabExperimentationExclusionGroupTrafficAllocation, public SerializableModel
{
    ExclusionGroupTrafficAllocation();
    ExclusionGroupTrafficAllocation(const ExclusionGroupTrafficAllocation& src);
    ExclusionGroupTrafficAllocation(ExclusionGroupTrafficAllocation&& src);
    ExclusionGroupTrafficAllocation(const PlayFabExperimentationExclusionGroupTrafficAllocation& src);
    ExclusionGroupTrafficAllocation& operator=(const ExclusionGroupTrafficAllocation&) = delete;
    ~ExclusionGroupTrafficAllocation() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_experimentId;
};

struct Experiment : public PlayFabExperimentationExperiment, public BaseModel
{
    Experiment();
    Experiment(const Experiment& src);
    Experiment(Experiment&& src);
    Experiment(const PlayFabExperimentationExperiment& src);
    Experiment& operator=(const Experiment&) = delete;
    ~Experiment() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    StdExtra::optional<time_t> m_endDate;
    String m_exclusionGroupId;
    StdExtra::optional<uint32_t> m_exclusionGroupTrafficAllocation;
    StdExtra::optional<PlayFabExperimentationExperimentType> m_experimentType;
    String m_id;
    String m_name;
    String m_segmentId;
    StdExtra::optional<PlayFabExperimentationExperimentState> m_state;
    PointerArrayModel<char, String> m_titlePlayerAccountTestIds;
    PointerArrayModel<PlayFabExperimentationVariant, Variant> m_variants;
};

struct ExperimentExclusionGroup : public PlayFabExperimentationExperimentExclusionGroup, public SerializableModel
{
    ExperimentExclusionGroup();
    ExperimentExclusionGroup(const ExperimentExclusionGroup& src);
    ExperimentExclusionGroup(ExperimentExclusionGroup&& src);
    ExperimentExclusionGroup(const PlayFabExperimentationExperimentExclusionGroup& src);
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

struct GetExclusionGroupsRequest : public PlayFabExperimentationGetExclusionGroupsRequest, public BaseModel
{
    GetExclusionGroupsRequest();
    GetExclusionGroupsRequest(const GetExclusionGroupsRequest& src);
    GetExclusionGroupsRequest(GetExclusionGroupsRequest&& src);
    GetExclusionGroupsRequest(const PlayFabExperimentationGetExclusionGroupsRequest& src);
    GetExclusionGroupsRequest& operator=(const GetExclusionGroupsRequest&) = delete;
    ~GetExclusionGroupsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct GetExclusionGroupsResult : public PlayFabExperimentationGetExclusionGroupsResult, public BaseModel, public ApiResult
{
    GetExclusionGroupsResult();
    GetExclusionGroupsResult(const GetExclusionGroupsResult& src);
    GetExclusionGroupsResult(GetExclusionGroupsResult&& src);
    GetExclusionGroupsResult(const PlayFabExperimentationGetExclusionGroupsResult& src);
    GetExclusionGroupsResult& operator=(const GetExclusionGroupsResult&) = delete;
    ~GetExclusionGroupsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabExperimentationExperimentExclusionGroup, ExperimentExclusionGroup> m_exclusionGroups;
};

struct GetExclusionGroupTrafficRequest : public PlayFabExperimentationGetExclusionGroupTrafficRequest, public BaseModel
{
    GetExclusionGroupTrafficRequest();
    GetExclusionGroupTrafficRequest(const GetExclusionGroupTrafficRequest& src);
    GetExclusionGroupTrafficRequest(GetExclusionGroupTrafficRequest&& src);
    GetExclusionGroupTrafficRequest(const PlayFabExperimentationGetExclusionGroupTrafficRequest& src);
    GetExclusionGroupTrafficRequest& operator=(const GetExclusionGroupTrafficRequest&) = delete;
    ~GetExclusionGroupTrafficRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_exclusionGroupId;
};

struct GetExclusionGroupTrafficResult : public PlayFabExperimentationGetExclusionGroupTrafficResult, public BaseModel, public ApiResult
{
    GetExclusionGroupTrafficResult();
    GetExclusionGroupTrafficResult(const GetExclusionGroupTrafficResult& src);
    GetExclusionGroupTrafficResult(GetExclusionGroupTrafficResult&& src);
    GetExclusionGroupTrafficResult(const PlayFabExperimentationGetExclusionGroupTrafficResult& src);
    GetExclusionGroupTrafficResult& operator=(const GetExclusionGroupTrafficResult&) = delete;
    ~GetExclusionGroupTrafficResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabExperimentationExclusionGroupTrafficAllocation, ExclusionGroupTrafficAllocation> m_trafficAllocations;
};

struct GetExperimentsRequest : public PlayFabExperimentationGetExperimentsRequest, public BaseModel
{
    GetExperimentsRequest();
    GetExperimentsRequest(const GetExperimentsRequest& src);
    GetExperimentsRequest(GetExperimentsRequest&& src);
    GetExperimentsRequest(const PlayFabExperimentationGetExperimentsRequest& src);
    GetExperimentsRequest& operator=(const GetExperimentsRequest&) = delete;
    ~GetExperimentsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct GetExperimentsResult : public PlayFabExperimentationGetExperimentsResult, public BaseModel, public ApiResult
{
    GetExperimentsResult();
    GetExperimentsResult(const GetExperimentsResult& src);
    GetExperimentsResult(GetExperimentsResult&& src);
    GetExperimentsResult(const PlayFabExperimentationGetExperimentsResult& src);
    GetExperimentsResult& operator=(const GetExperimentsResult&) = delete;
    ~GetExperimentsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabExperimentationExperiment, Experiment> m_experiments;
};

struct GetLatestScorecardRequest : public PlayFabExperimentationGetLatestScorecardRequest, public BaseModel
{
    GetLatestScorecardRequest();
    GetLatestScorecardRequest(const GetLatestScorecardRequest& src);
    GetLatestScorecardRequest(GetLatestScorecardRequest&& src);
    GetLatestScorecardRequest(const PlayFabExperimentationGetLatestScorecardRequest& src);
    GetLatestScorecardRequest& operator=(const GetLatestScorecardRequest&) = delete;
    ~GetLatestScorecardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_experimentId;
};

struct MetricData : public PlayFabExperimentationMetricData, public SerializableModel
{
    MetricData();
    MetricData(const MetricData& src);
    MetricData(MetricData&& src);
    MetricData(const PlayFabExperimentationMetricData& src);
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

struct ScorecardDataRow : public PlayFabExperimentationScorecardDataRow, public BaseModel
{
    ScorecardDataRow();
    ScorecardDataRow(const ScorecardDataRow& src);
    ScorecardDataRow(ScorecardDataRow&& src);
    ScorecardDataRow(const PlayFabExperimentationScorecardDataRow& src);
    ScorecardDataRow& operator=(const ScorecardDataRow&) = delete;
    ~ScorecardDataRow() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabExperimentationMetricDataDictionaryEntry, MetricData> m_metricDataRows;
    String m_variantName;
};

struct Scorecard : public PlayFabExperimentationScorecard, public BaseModel
{
    Scorecard();
    Scorecard(const Scorecard& src);
    Scorecard(Scorecard&& src);
    Scorecard(const PlayFabExperimentationScorecard& src);
    Scorecard& operator=(const Scorecard&) = delete;
    ~Scorecard() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_dateGenerated;
    String m_duration;
    String m_experimentId;
    String m_experimentName;
    StdExtra::optional<PlayFabExperimentationAnalysisTaskState> m_latestJobStatus;
    PointerArrayModel<PlayFabExperimentationScorecardDataRow, ScorecardDataRow> m_scorecardDataRows;
};

struct GetLatestScorecardResult : public PlayFabExperimentationGetLatestScorecardResult, public BaseModel, public ApiResult
{
    GetLatestScorecardResult();
    GetLatestScorecardResult(const GetLatestScorecardResult& src);
    GetLatestScorecardResult(GetLatestScorecardResult&& src);
    GetLatestScorecardResult(const PlayFabExperimentationGetLatestScorecardResult& src);
    GetLatestScorecardResult& operator=(const GetLatestScorecardResult&) = delete;
    ~GetLatestScorecardResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<Scorecard> m_scorecard;
};

struct GetTreatmentAssignmentRequest : public PlayFabExperimentationGetTreatmentAssignmentRequest, public BaseModel
{
    GetTreatmentAssignmentRequest();
    GetTreatmentAssignmentRequest(const GetTreatmentAssignmentRequest& src);
    GetTreatmentAssignmentRequest(GetTreatmentAssignmentRequest&& src);
    GetTreatmentAssignmentRequest(const PlayFabExperimentationGetTreatmentAssignmentRequest& src);
    GetTreatmentAssignmentRequest& operator=(const GetTreatmentAssignmentRequest&) = delete;
    ~GetTreatmentAssignmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
};

struct GetTreatmentAssignmentResult : public PlayFabExperimentationGetTreatmentAssignmentResult, public BaseModel, public ApiResult
{
    GetTreatmentAssignmentResult();
    GetTreatmentAssignmentResult(const GetTreatmentAssignmentResult& src);
    GetTreatmentAssignmentResult(GetTreatmentAssignmentResult&& src);
    GetTreatmentAssignmentResult(const PlayFabExperimentationGetTreatmentAssignmentResult& src);
    GetTreatmentAssignmentResult& operator=(const GetTreatmentAssignmentResult&) = delete;
    ~GetTreatmentAssignmentResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TreatmentAssignment> m_treatmentAssignment;
};

struct StartExperimentRequest : public PlayFabExperimentationStartExperimentRequest, public BaseModel
{
    StartExperimentRequest();
    StartExperimentRequest(const StartExperimentRequest& src);
    StartExperimentRequest(StartExperimentRequest&& src);
    StartExperimentRequest(const PlayFabExperimentationStartExperimentRequest& src);
    StartExperimentRequest& operator=(const StartExperimentRequest&) = delete;
    ~StartExperimentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_experimentId;
};

struct StopExperimentRequest : public PlayFabExperimentationStopExperimentRequest, public BaseModel
{
    StopExperimentRequest();
    StopExperimentRequest(const StopExperimentRequest& src);
    StopExperimentRequest(StopExperimentRequest&& src);
    StopExperimentRequest(const PlayFabExperimentationStopExperimentRequest& src);
    StopExperimentRequest& operator=(const StopExperimentRequest&) = delete;
    ~StopExperimentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_experimentId;
};

struct UpdateExclusionGroupRequest : public PlayFabExperimentationUpdateExclusionGroupRequest, public BaseModel
{
    UpdateExclusionGroupRequest();
    UpdateExclusionGroupRequest(const UpdateExclusionGroupRequest& src);
    UpdateExclusionGroupRequest(UpdateExclusionGroupRequest&& src);
    UpdateExclusionGroupRequest(const PlayFabExperimentationUpdateExclusionGroupRequest& src);
    UpdateExclusionGroupRequest& operator=(const UpdateExclusionGroupRequest&) = delete;
    ~UpdateExclusionGroupRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_description;
    String m_exclusionGroupId;
    String m_name;
};

struct UpdateExperimentRequest : public PlayFabExperimentationUpdateExperimentRequest, public BaseModel
{
    UpdateExperimentRequest();
    UpdateExperimentRequest(const UpdateExperimentRequest& src);
    UpdateExperimentRequest(UpdateExperimentRequest&& src);
    UpdateExperimentRequest(const PlayFabExperimentationUpdateExperimentRequest& src);
    UpdateExperimentRequest& operator=(const UpdateExperimentRequest&) = delete;
    ~UpdateExperimentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_description;
    StdExtra::optional<time_t> m_endDate;
    String m_exclusionGroupId;
    StdExtra::optional<uint32_t> m_exclusionGroupTrafficAllocation;
    StdExtra::optional<PlayFabExperimentationExperimentType> m_experimentType;
    String m_id;
    String m_name;
    String m_segmentId;
    PointerArrayModel<char, String> m_titlePlayerAccountTestIds;
    PointerArrayModel<PlayFabExperimentationVariant, Variant> m_variants;
};

} // namespace ExperimentationModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabExperimentationCreateExclusionGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationCreateExclusionGroupResult& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationVariant& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationCreateExperimentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationCreateExperimentResult& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationDeleteExclusionGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationDeleteExperimentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationExclusionGroupTrafficAllocation& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationExperiment& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationExperimentExclusionGroup& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationGetExclusionGroupsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationGetExclusionGroupsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationGetExclusionGroupTrafficRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationGetExclusionGroupTrafficResult& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationGetExperimentsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationGetExperimentsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationGetLatestScorecardRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationMetricData& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationScorecardDataRow& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationScorecard& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationGetLatestScorecardResult& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationGetTreatmentAssignmentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationGetTreatmentAssignmentResult& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationStartExperimentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationStopExperimentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationUpdateExclusionGroupRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabExperimentationUpdateExperimentRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabExperimentationAnalysisTaskState>
{
    static constexpr PlayFabExperimentationAnalysisTaskState maxValue = PlayFabExperimentationAnalysisTaskState::Canceled;
};

template<> struct EnumRange<PlayFabExperimentationExperimentState>
{
    static constexpr PlayFabExperimentationExperimentState maxValue = PlayFabExperimentationExperimentState::Deleted;
};

template<> struct EnumRange<PlayFabExperimentationExperimentType>
{
    static constexpr PlayFabExperimentationExperimentType maxValue = PlayFabExperimentationExperimentType::Snapshot;
};

} // namespace PlayFab
