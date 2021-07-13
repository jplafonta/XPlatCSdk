// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabSharedDataModels.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// AnalysisTaskState enum.
/// </summary>
enum class PlayFabExperimentationAnalysisTaskState : uint32_t
{
    Waiting,
    ReadyForSubmission,
    SubmittingToPipeline,
    Running,
    Completed,
    Failed,
    Canceled
};

/// <summary>
/// ExperimentState enum.
/// </summary>
enum class PlayFabExperimentationExperimentState : uint32_t
{
    New,
    Started,
    Stopped,
    Deleted
};

/// <summary>
/// ExperimentType enum.
/// </summary>
enum class PlayFabExperimentationExperimentType : uint32_t
{
    Active,
    Snapshot
};

/// <summary>
/// PlayFabExperimentationCreateExclusionGroupRequest data model. Given a title entity token and exclusion
/// group details, will create a new exclusion group for the title. Request object for PlayFabExperimentationCreateExclusionGroupAsync.
/// </summary>
typedef struct PlayFabExperimentationCreateExclusionGroupRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Description of the exclusion group.
    /// </summary>
    const char* description;

    /// <summary>
    /// Friendly name of the exclusion group.
    /// </summary>
    const char* name;

} PlayFabExperimentationCreateExclusionGroupRequest;

/// <summary>
/// PlayFabExperimentationCreateExclusionGroupResult data model. Result payload for PlayFabExperimentationCreateExclusionGroupAsync.
/// </summary>
typedef struct PlayFabExperimentationCreateExclusionGroupResult
{
    /// <summary>
    /// (Optional) Identifier of the exclusion group.
    /// </summary>
    const char* exclusionGroupId;

} PlayFabExperimentationCreateExclusionGroupResult;

/// <summary>
/// PlayFabExperimentationVariant data model.
/// </summary>
typedef struct PlayFabExperimentationVariant
{
    /// <summary>
    /// (Optional) Description of the variant.
    /// </summary>
    const char* description;

    /// <summary>
    /// (Optional) Id of the variant.
    /// </summary>
    const char* id;

    /// <summary>
    /// Specifies if variant is control for experiment.
    /// </summary>
    bool isControl;

    /// <summary>
    /// Name of the variant.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Id of the TitleDataOverride to use with this variant.
    /// </summary>
    const char* titleDataOverrideLabel;

    /// <summary>
    /// Percentage of target audience traffic that will see this variant.
    /// </summary>
    uint32_t trafficPercentage;

    /// <summary>
    /// (Optional) Variables returned by this variant.
    /// </summary>
    PlayFabVariable const* const* variables;

    /// <summary>
    /// Count of variables
    /// </summary>
    uint32_t variablesCount;

} PlayFabExperimentationVariant;

/// <summary>
/// PlayFabExperimentationCreateExperimentRequest data model. Given a title entity token and experiment
/// details, will create a new experiment for the title. Request object for PlayFabExperimentationCreateExperimentAsync.
/// </summary>
typedef struct PlayFabExperimentationCreateExperimentRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Description of the experiment.
    /// </summary>
    const char* description;

    /// <summary>
    /// (Optional) When experiment should end.
    /// </summary>
    time_t const* endDate;

    /// <summary>
    /// (Optional) Id of the exclusion group.
    /// </summary>
    const char* exclusionGroupId;

    /// <summary>
    /// (Optional) Percentage of exclusion group traffic that will see this experiment.
    /// </summary>
    uint32_t const* exclusionGroupTrafficAllocation;

    /// <summary>
    /// (Optional) Type of experiment.
    /// </summary>
    PlayFabExperimentationExperimentType const* experimentType;

    /// <summary>
    /// Friendly name of the experiment.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Id of the segment to which this experiment applies. Defaults to the 'All Players'
    /// segment.
    /// </summary>
    const char* segmentId;

    /// <summary>
    /// When experiment should start.
    /// </summary>
    time_t startDate;

    /// <summary>
    /// (Optional) List of title player account IDs that automatically receive treatments in the experiment,
    /// but are not included when calculating experiment metrics.
    /// </summary>
    const char* const* titlePlayerAccountTestIds;

    /// <summary>
    /// Count of titlePlayerAccountTestIds
    /// </summary>
    uint32_t titlePlayerAccountTestIdsCount;

    /// <summary>
    /// List of variants for the experiment.
    /// </summary>
    PlayFabExperimentationVariant const* const* variants;

    /// <summary>
    /// Count of variants
    /// </summary>
    uint32_t variantsCount;

} PlayFabExperimentationCreateExperimentRequest;

/// <summary>
/// PlayFabExperimentationCreateExperimentResult data model. Result payload for PlayFabExperimentationCreateExperimentAsync.
/// </summary>
typedef struct PlayFabExperimentationCreateExperimentResult
{
    /// <summary>
    /// (Optional) The ID of the new experiment.
    /// </summary>
    const char* experimentId;

} PlayFabExperimentationCreateExperimentResult;

/// <summary>
/// PlayFabExperimentationDeleteExclusionGroupRequest data model. Given an entity token and an exclusion
/// group ID this API deletes the exclusion group. Request object for PlayFabExperimentationDeleteExclusionGroupAsync.
/// </summary>
typedef struct PlayFabExperimentationDeleteExclusionGroupRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The ID of the exclusion group to delete.
    /// </summary>
    const char* exclusionGroupId;

} PlayFabExperimentationDeleteExclusionGroupRequest;

/// <summary>
/// PlayFabExperimentationDeleteExperimentRequest data model. Given an entity token and an experiment
/// ID this API deletes the experiment. A running experiment must be stopped before it can be deleted.
/// Request object for PlayFabExperimentationDeleteExperimentAsync.
/// </summary>
typedef struct PlayFabExperimentationDeleteExperimentRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The ID of the experiment to delete.
    /// </summary>
    const char* experimentId;

} PlayFabExperimentationDeleteExperimentRequest;

/// <summary>
/// PlayFabExperimentationExclusionGroupTrafficAllocation data model.
/// </summary>
typedef struct PlayFabExperimentationExclusionGroupTrafficAllocation
{
    /// <summary>
    /// (Optional) Id of the experiment.
    /// </summary>
    const char* experimentId;

    /// <summary>
    /// Percentage of exclusion group traffic that will see this experiment.
    /// </summary>
    uint32_t trafficAllocation;

} PlayFabExperimentationExclusionGroupTrafficAllocation;

/// <summary>
/// PlayFabExperimentationExperiment data model.
/// </summary>
typedef struct PlayFabExperimentationExperiment
{
    /// <summary>
    /// (Optional) Description of the experiment.
    /// </summary>
    const char* description;

    /// <summary>
    /// (Optional) When experiment should end/was ended.
    /// </summary>
    time_t const* endDate;

    /// <summary>
    /// (Optional) Id of the exclusion group for this experiment.
    /// </summary>
    const char* exclusionGroupId;

    /// <summary>
    /// (Optional) Percentage of exclusion group traffic that will see this experiment.
    /// </summary>
    uint32_t const* exclusionGroupTrafficAllocation;

    /// <summary>
    /// (Optional) Type of experiment.
    /// </summary>
    PlayFabExperimentationExperimentType const* experimentType;

    /// <summary>
    /// (Optional) Id of the experiment.
    /// </summary>
    const char* id;

    /// <summary>
    /// (Optional) Friendly name of the experiment.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Id of the segment to which this experiment applies. Defaults to the 'All Players'
    /// segment.
    /// </summary>
    const char* segmentId;

    /// <summary>
    /// When experiment should start/was started.
    /// </summary>
    time_t startDate;

    /// <summary>
    /// (Optional) State experiment is currently in.
    /// </summary>
    PlayFabExperimentationExperimentState const* state;

    /// <summary>
    /// (Optional) List of title player account IDs that automatically receive treatments in the experiment,
    /// but are not included when calculating experiment metrics.
    /// </summary>
    const char* const* titlePlayerAccountTestIds;

    /// <summary>
    /// Count of titlePlayerAccountTestIds
    /// </summary>
    uint32_t titlePlayerAccountTestIdsCount;

    /// <summary>
    /// (Optional) List of variants for the experiment.
    /// </summary>
    PlayFabExperimentationVariant const* const* variants;

    /// <summary>
    /// Count of variants
    /// </summary>
    uint32_t variantsCount;

} PlayFabExperimentationExperiment;

/// <summary>
/// PlayFabExperimentationExperimentExclusionGroup data model.
/// </summary>
typedef struct PlayFabExperimentationExperimentExclusionGroup
{
    /// <summary>
    /// (Optional) Description of the exclusion group.
    /// </summary>
    const char* description;

    /// <summary>
    /// (Optional) Id of the exclusion group.
    /// </summary>
    const char* exclusionGroupId;

    /// <summary>
    /// (Optional) Friendly name of the exclusion group.
    /// </summary>
    const char* name;

} PlayFabExperimentationExperimentExclusionGroup;

/// <summary>
/// PlayFabExperimentationGetExclusionGroupsRequest data model. Given a title entity token will return
/// the list of all exclusion groups for a title. Request object for PlayFabExperimentationGetExclusionGroupsAsync.
/// </summary>
typedef struct PlayFabExperimentationGetExclusionGroupsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabExperimentationGetExclusionGroupsRequest;

/// <summary>
/// PlayFabExperimentationGetExclusionGroupsResult data model. Result payload for PlayFabExperimentationGetExclusionGroupsAsync.
/// </summary>
typedef struct PlayFabExperimentationGetExclusionGroupsResult
{
    /// <summary>
    /// (Optional) List of exclusion groups for the title.
    /// </summary>
    PlayFabExperimentationExperimentExclusionGroup const* const* exclusionGroups;

    /// <summary>
    /// Count of exclusionGroups
    /// </summary>
    uint32_t exclusionGroupsCount;

} PlayFabExperimentationGetExclusionGroupsResult;

/// <summary>
/// PlayFabExperimentationGetExclusionGroupTrafficRequest data model. Given a title entity token and
/// an exclusion group ID, will return the list of traffic allocations for the exclusion group. Request
/// object for PlayFabExperimentationGetExclusionGroupTrafficAsync.
/// </summary>
typedef struct PlayFabExperimentationGetExclusionGroupTrafficRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The ID of the exclusion group.
    /// </summary>
    const char* exclusionGroupId;

} PlayFabExperimentationGetExclusionGroupTrafficRequest;

/// <summary>
/// PlayFabExperimentationGetExclusionGroupTrafficResult data model. Result payload for PlayFabExperimentationGetExclusionGroupTrafficAsync.
/// </summary>
typedef struct PlayFabExperimentationGetExclusionGroupTrafficResult
{
    /// <summary>
    /// (Optional) List of traffic allocations for the exclusion group.
    /// </summary>
    PlayFabExperimentationExclusionGroupTrafficAllocation const* const* trafficAllocations;

    /// <summary>
    /// Count of trafficAllocations
    /// </summary>
    uint32_t trafficAllocationsCount;

} PlayFabExperimentationGetExclusionGroupTrafficResult;

/// <summary>
/// PlayFabExperimentationGetExperimentsRequest data model. Given a title entity token will return the
/// list of all experiments for a title, including scheduled, started, stopped or completed experiments.
/// Request object for PlayFabExperimentationGetExperimentsAsync.
/// </summary>
typedef struct PlayFabExperimentationGetExperimentsRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabExperimentationGetExperimentsRequest;

/// <summary>
/// PlayFabExperimentationGetExperimentsResult data model. Result payload for PlayFabExperimentationGetExperimentsAsync.
/// </summary>
typedef struct PlayFabExperimentationGetExperimentsResult
{
    /// <summary>
    /// (Optional) List of experiments for the title.
    /// </summary>
    PlayFabExperimentationExperiment const* const* experiments;

    /// <summary>
    /// Count of experiments
    /// </summary>
    uint32_t experimentsCount;

} PlayFabExperimentationGetExperimentsResult;

/// <summary>
/// PlayFabExperimentationGetLatestScorecardRequest data model. Given a title entity token and experiment
/// details, will return the latest available scorecard. Request object for PlayFabExperimentationGetLatestScorecardAsync.
/// </summary>
typedef struct PlayFabExperimentationGetLatestScorecardRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The ID of the experiment.
    /// </summary>
    const char* experimentId;

} PlayFabExperimentationGetLatestScorecardRequest;

/// <summary>
/// PlayFabExperimentationMetricData data model.
/// </summary>
typedef struct PlayFabExperimentationMetricData
{
    /// <summary>
    /// The upper bound of the confidence interval for the relative delta (Delta.RelativeValue).
    /// </summary>
    double confidenceIntervalEnd;

    /// <summary>
    /// The lower bound of the confidence interval for the relative delta (Delta.RelativeValue).
    /// </summary>
    double confidenceIntervalStart;

    /// <summary>
    /// The absolute delta between TreatmentStats.Average and ControlStats.Average.
    /// </summary>
    float deltaAbsoluteChange;

    /// <summary>
    /// The relative delta ratio between TreatmentStats.Average and ControlStats.Average.
    /// </summary>
    float deltaRelativeChange;

    /// <summary>
    /// (Optional) The machine name of the metric.
    /// </summary>
    const char* internalName;

    /// <summary>
    /// (Optional) Indicates if a movement was detected on that metric.
    /// </summary>
    const char* movement;

    /// <summary>
    /// (Optional) The readable name of the metric.
    /// </summary>
    const char* name;

    /// <summary>
    /// The expectation that a movement is real.
    /// </summary>
    float pMove;

    /// <summary>
    /// The p-value resulting from the statistical test run for this metric.
    /// </summary>
    float pValue;

    /// <summary>
    /// The threshold for observing sample ratio mismatch.
    /// </summary>
    float pValueThreshold;

    /// <summary>
    /// (Optional) Indicates if the movement is statistically significant.
    /// </summary>
    const char* statSigLevel;

    /// <summary>
    /// Observed standard deviation value of the metric.
    /// </summary>
    float stdDev;

    /// <summary>
    /// Observed average value of the metric.
    /// </summary>
    float value;

} PlayFabExperimentationMetricData;

/// <summary>
/// PlayFabExperimentationScorecardDataRow data model.
/// </summary>
typedef struct PlayFabExperimentationScorecardDataRow
{
    /// <summary>
    /// Represents whether the variant is control or not.
    /// </summary>
    bool isControl;

    /// <summary>
    /// (Optional) Data of the analysis with the internal name of the metric as the key and an object
    /// of metric data as value.
    /// </summary>
    struct PlayFabExperimentationMetricDataDictionaryEntry const* metricDataRows;

    /// <summary>
    /// Count of metricDataRows
    /// </summary>
    uint32_t metricDataRowsCount;

    /// <summary>
    /// Represents the player count in the variant.
    /// </summary>
    uint32_t playerCount;

    /// <summary>
    /// (Optional) Name of the variant of analysis.
    /// </summary>
    const char* variantName;

} PlayFabExperimentationScorecardDataRow;

/// <summary>
/// PlayFabExperimentationScorecard data model.
/// </summary>
typedef struct PlayFabExperimentationScorecard
{
    /// <summary>
    /// (Optional) Represents the date the scorecard was generated.
    /// </summary>
    const char* dateGenerated;

    /// <summary>
    /// (Optional) Represents the duration of scorecard analysis.
    /// </summary>
    const char* duration;

    /// <summary>
    /// Represents the number of events processed for the generation of this scorecard.
    /// </summary>
    double eventsProcessed;

    /// <summary>
    /// (Optional) Id of the experiment.
    /// </summary>
    const char* experimentId;

    /// <summary>
    /// (Optional) Friendly name of the experiment.
    /// </summary>
    const char* experimentName;

    /// <summary>
    /// (Optional) Represents the latest compute job status.
    /// </summary>
    PlayFabExperimentationAnalysisTaskState const* latestJobStatus;

    /// <summary>
    /// Represents the presence of a sample ratio mismatch in the scorecard data.
    /// </summary>
    bool sampleRatioMismatch;

    /// <summary>
    /// (Optional) Scorecard containing list of analysis.
    /// </summary>
    PlayFabExperimentationScorecardDataRow const* const* scorecardDataRows;

    /// <summary>
    /// Count of scorecardDataRows
    /// </summary>
    uint32_t scorecardDataRowsCount;

} PlayFabExperimentationScorecard;

/// <summary>
/// PlayFabExperimentationGetLatestScorecardResult data model. Result payload for PlayFabExperimentationGetLatestScorecardAsync.
/// </summary>
typedef struct PlayFabExperimentationGetLatestScorecardResult
{
    /// <summary>
    /// (Optional) Scorecard for the experiment of the title.
    /// </summary>
    PlayFabExperimentationScorecard const* scorecard;

} PlayFabExperimentationGetLatestScorecardResult;

/// <summary>
/// PlayFabExperimentationGetTreatmentAssignmentRequest data model. Given a title player or a title entity
/// token, returns the treatment variants and variables assigned to the entity across all running experiments.
/// Request object for PlayFabExperimentationGetTreatmentAssignmentAsync.
/// </summary>
typedef struct PlayFabExperimentationGetTreatmentAssignmentRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PlayFabEntityKey const* entity;

} PlayFabExperimentationGetTreatmentAssignmentRequest;

/// <summary>
/// PlayFabExperimentationGetTreatmentAssignmentResult data model. Result payload for PlayFabExperimentationGetTreatmentAssignmentAsync.
/// </summary>
typedef struct PlayFabExperimentationGetTreatmentAssignmentResult
{
    /// <summary>
    /// (Optional) Treatment assignment for the entity.
    /// </summary>
    PlayFabTreatmentAssignment const* treatmentAssignment;

} PlayFabExperimentationGetTreatmentAssignmentResult;

/// <summary>
/// PlayFabExperimentationStartExperimentRequest data model. Given a title entity token and an experiment
/// ID, this API starts the experiment. Request object for PlayFabExperimentationStartExperimentAsync.
/// </summary>
typedef struct PlayFabExperimentationStartExperimentRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The ID of the experiment to start.
    /// </summary>
    const char* experimentId;

} PlayFabExperimentationStartExperimentRequest;

/// <summary>
/// PlayFabExperimentationStopExperimentRequest data model. Given a title entity token and an experiment
/// ID, this API stops the experiment if it is running. Request object for PlayFabExperimentationStopExperimentAsync.
/// </summary>
typedef struct PlayFabExperimentationStopExperimentRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// The ID of the experiment to stop.
    /// </summary>
    const char* experimentId;

} PlayFabExperimentationStopExperimentRequest;

/// <summary>
/// PlayFabExperimentationUpdateExclusionGroupRequest data model. Given an entity token and exclusion
/// group details this API updates the exclusion group. Request object for PlayFabExperimentationUpdateExclusionGroupAsync.
/// </summary>
typedef struct PlayFabExperimentationUpdateExclusionGroupRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Description of the exclusion group.
    /// </summary>
    const char* description;

    /// <summary>
    /// The ID of the exclusion group to update.
    /// </summary>
    const char* exclusionGroupId;

    /// <summary>
    /// Friendly name of the exclusion group.
    /// </summary>
    const char* name;

} PlayFabExperimentationUpdateExclusionGroupRequest;

/// <summary>
/// PlayFabExperimentationUpdateExperimentRequest data model. Given a title entity token and experiment
/// details, this API updates the experiment. If an experiment is already running, only the description
/// and duration properties can be updated. Request object for PlayFabExperimentationUpdateExperimentAsync.
/// </summary>
typedef struct PlayFabExperimentationUpdateExperimentRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Description of the experiment.
    /// </summary>
    const char* description;

    /// <summary>
    /// (Optional) When experiment should end.
    /// </summary>
    time_t const* endDate;

    /// <summary>
    /// (Optional) Id of the exclusion group.
    /// </summary>
    const char* exclusionGroupId;

    /// <summary>
    /// (Optional) Percentage of exclusion group traffic that will see this experiment.
    /// </summary>
    uint32_t const* exclusionGroupTrafficAllocation;

    /// <summary>
    /// (Optional) Type of experiment.
    /// </summary>
    PlayFabExperimentationExperimentType const* experimentType;

    /// <summary>
    /// Id of the experiment.
    /// </summary>
    const char* id;

    /// <summary>
    /// Friendly name of the experiment.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Id of the segment to which this experiment applies. Defaults to the 'All Players'
    /// segment.
    /// </summary>
    const char* segmentId;

    /// <summary>
    /// When experiment should start.
    /// </summary>
    time_t startDate;

    /// <summary>
    /// (Optional) List of title player account IDs that automatically receive treatments in the experiment,
    /// but are not included when calculating experiment metrics.
    /// </summary>
    const char* const* titlePlayerAccountTestIds;

    /// <summary>
    /// Count of titlePlayerAccountTestIds
    /// </summary>
    uint32_t titlePlayerAccountTestIdsCount;

    /// <summary>
    /// List of variants for the experiment.
    /// </summary>
    PlayFabExperimentationVariant const* const* variants;

    /// <summary>
    /// Count of variants
    /// </summary>
    uint32_t variantsCount;

} PlayFabExperimentationUpdateExperimentRequest;

/// <summary>
/// Dictionary entry for an associative array with PlayFabExperimentationMetricData values.
/// </summary>
typedef struct PlayFabExperimentationMetricDataDictionaryEntry
{
    const char* key;
    PlayFabExperimentationMetricData* value;
} PlayFabExperimentationMetricDataDictionaryEntry;

#pragma pop_macro("IN")

}
