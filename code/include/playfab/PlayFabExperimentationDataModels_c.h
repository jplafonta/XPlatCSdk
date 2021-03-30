#pragma once

#include <playfab/PlayFabBaseModel_c.h>

#pragma push_macro("IN")
#undef IN

// Experimentation enums
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

enum class PlayFabExperimentationExperimentState : uint32_t
{
    New,
    Started,
    Stopped,
    Deleted
};

enum class PlayFabExperimentationExperimentType : uint32_t
{
    Active,
    Snapshot
};


// Experimentation structs
typedef struct PlayFabExperimentationCreateExclusionGroupRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* description;
    const char* name;

} PlayFabExperimentationCreateExclusionGroupRequest;

typedef struct PlayFabExperimentationCreateExclusionGroupResult
{
    const char* exclusionGroupId;

} PlayFabExperimentationCreateExclusionGroupResult;

typedef struct PlayFabExperimentationVariable
{
    const char* name;
    const char* value;

} PlayFabExperimentationVariable;

typedef struct PlayFabExperimentationVariant
{
    const char* description;
    const char* id;
    bool isControl;
    const char* name;
    const char* titleDataOverrideLabel;
    uint32_t trafficPercentage;
    PF_ARRAY PlayFabExperimentationVariable** variables;
    PF_COLLECTION_COUNT uint32_t variablesCount;

} PlayFabExperimentationVariant;

typedef struct PlayFabExperimentationCreateExperimentRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* description;
    PF_OPTIONAL time_t* endDate;
    const char* exclusionGroupId;
    PF_OPTIONAL uint32_t* exclusionGroupTrafficAllocation;
    PF_OPTIONAL PlayFabExperimentationExperimentType* experimentType;
    const char* name;
    const char* segmentId;
    time_t startDate;
    PF_ARRAY const char** titlePlayerAccountTestIds;
    PF_COLLECTION_COUNT uint32_t titlePlayerAccountTestIdsCount;
    PF_ARRAY PlayFabExperimentationVariant** variants;
    PF_COLLECTION_COUNT uint32_t variantsCount;

} PlayFabExperimentationCreateExperimentRequest;

typedef struct PlayFabExperimentationCreateExperimentResult
{
    const char* experimentId;

} PlayFabExperimentationCreateExperimentResult;

typedef struct PlayFabExperimentationDeleteExclusionGroupRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* exclusionGroupId;

} PlayFabExperimentationDeleteExclusionGroupRequest;

typedef struct PlayFabExperimentationDeleteExperimentRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* experimentId;

} PlayFabExperimentationDeleteExperimentRequest;

typedef struct PlayFabExperimentationEmptyResponse
{

} PlayFabExperimentationEmptyResponse;

typedef struct PlayFabExperimentationEntityKey
{
    const char* id;
    const char* type;

} PlayFabExperimentationEntityKey;

typedef struct PlayFabExperimentationExclusionGroupTrafficAllocation
{
    const char* experimentId;
    uint32_t trafficAllocation;

} PlayFabExperimentationExclusionGroupTrafficAllocation;

typedef struct PlayFabExperimentationExperiment
{
    const char* description;
    PF_OPTIONAL time_t* endDate;
    const char* exclusionGroupId;
    PF_OPTIONAL uint32_t* exclusionGroupTrafficAllocation;
    PF_OPTIONAL PlayFabExperimentationExperimentType* experimentType;
    const char* id;
    const char* name;
    const char* segmentId;
    time_t startDate;
    PF_OPTIONAL PlayFabExperimentationExperimentState* state;
    PF_ARRAY const char** titlePlayerAccountTestIds;
    PF_COLLECTION_COUNT uint32_t titlePlayerAccountTestIdsCount;
    PF_ARRAY PlayFabExperimentationVariant** variants;
    PF_COLLECTION_COUNT uint32_t variantsCount;

} PlayFabExperimentationExperiment;

typedef struct PlayFabExperimentationExperimentExclusionGroup
{
    const char* description;
    const char* exclusionGroupId;
    const char* name;

} PlayFabExperimentationExperimentExclusionGroup;

typedef struct PlayFabExperimentationGetExclusionGroupsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;

} PlayFabExperimentationGetExclusionGroupsRequest;

typedef struct PlayFabExperimentationGetExclusionGroupsResult
{
    PF_ARRAY PlayFabExperimentationExperimentExclusionGroup** exclusionGroups;
    PF_COLLECTION_COUNT uint32_t exclusionGroupsCount;

} PlayFabExperimentationGetExclusionGroupsResult;

typedef struct PlayFabExperimentationGetExclusionGroupTrafficRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* exclusionGroupId;

} PlayFabExperimentationGetExclusionGroupTrafficRequest;

typedef struct PlayFabExperimentationGetExclusionGroupTrafficResult
{
    PF_ARRAY PlayFabExperimentationExclusionGroupTrafficAllocation** trafficAllocations;
    PF_COLLECTION_COUNT uint32_t trafficAllocationsCount;

} PlayFabExperimentationGetExclusionGroupTrafficResult;

typedef struct PlayFabExperimentationGetExperimentsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;

} PlayFabExperimentationGetExperimentsRequest;

typedef struct PlayFabExperimentationGetExperimentsResult
{
    PF_ARRAY PlayFabExperimentationExperiment** experiments;
    PF_COLLECTION_COUNT uint32_t experimentsCount;

} PlayFabExperimentationGetExperimentsResult;

typedef struct PlayFabExperimentationGetLatestScorecardRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* experimentId;

} PlayFabExperimentationGetLatestScorecardRequest;

typedef struct PlayFabExperimentationMetricData
{
    double confidenceIntervalEnd;
    double confidenceIntervalStart;
    float deltaAbsoluteChange;
    float deltaRelativeChange;
    const char* internalName;
    const char* movement;
    const char* name;
    float pMove;
    float pValue;
    float pValueThreshold;
    const char* statSigLevel;
    float stdDev;
    float value;

} PlayFabExperimentationMetricData;

typedef struct PlayFabExperimentationScorecardDataRow
{
    bool isControl;
    PF_MAP struct PlayFabExperimentationMetricDataDictionaryEntry* metricDataRows;
    PF_COLLECTION_COUNT uint32_t metricDataRowsCount;
    uint32_t playerCount;
    const char* variantName;

} PlayFabExperimentationScorecardDataRow;

typedef struct PlayFabExperimentationScorecard
{
    const char* dateGenerated;
    const char* duration;
    double eventsProcessed;
    const char* experimentId;
    const char* experimentName;
    PF_OPTIONAL PlayFabExperimentationAnalysisTaskState* latestJobStatus;
    bool sampleRatioMismatch;
    PF_ARRAY PlayFabExperimentationScorecardDataRow** scorecardDataRows;
    PF_COLLECTION_COUNT uint32_t scorecardDataRowsCount;

} PlayFabExperimentationScorecard;

typedef struct PlayFabExperimentationGetLatestScorecardResult
{
    PF_OPTIONAL PlayFabExperimentationScorecard* scorecard;

} PlayFabExperimentationGetLatestScorecardResult;

typedef struct PlayFabExperimentationGetTreatmentAssignmentRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabExperimentationEntityKey* entity;

} PlayFabExperimentationGetTreatmentAssignmentRequest;

typedef struct PlayFabExperimentationTreatmentAssignment
{
    PF_ARRAY PlayFabExperimentationVariable** variables;
    PF_COLLECTION_COUNT uint32_t variablesCount;
    PF_ARRAY const char** variants;
    PF_COLLECTION_COUNT uint32_t variantsCount;

} PlayFabExperimentationTreatmentAssignment;

typedef struct PlayFabExperimentationGetTreatmentAssignmentResult
{
    PF_OPTIONAL PlayFabExperimentationTreatmentAssignment* treatmentAssignment;

} PlayFabExperimentationGetTreatmentAssignmentResult;

typedef struct PlayFabExperimentationStartExperimentRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* experimentId;

} PlayFabExperimentationStartExperimentRequest;

typedef struct PlayFabExperimentationStopExperimentRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* experimentId;

} PlayFabExperimentationStopExperimentRequest;

typedef struct PlayFabExperimentationUpdateExclusionGroupRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* description;
    const char* exclusionGroupId;
    const char* name;

} PlayFabExperimentationUpdateExclusionGroupRequest;

typedef struct PlayFabExperimentationUpdateExperimentRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* description;
    PF_OPTIONAL time_t* endDate;
    const char* exclusionGroupId;
    PF_OPTIONAL uint32_t* exclusionGroupTrafficAllocation;
    PF_OPTIONAL PlayFabExperimentationExperimentType* experimentType;
    const char* id;
    const char* name;
    const char* segmentId;
    time_t startDate;
    PF_ARRAY const char** titlePlayerAccountTestIds;
    PF_COLLECTION_COUNT uint32_t titlePlayerAccountTestIdsCount;
    PF_ARRAY PlayFabExperimentationVariant** variants;
    PF_COLLECTION_COUNT uint32_t variantsCount;

} PlayFabExperimentationUpdateExperimentRequest;


// Experimentation dictionary entry structs
typedef struct PlayFabExperimentationMetricDataDictionaryEntry
{
    const char* key;
    PlayFabExperimentationMetricData* value;
} PlayFabExperimentationMetricDataDictionaryEntry;


#pragma pop_macro("IN")
