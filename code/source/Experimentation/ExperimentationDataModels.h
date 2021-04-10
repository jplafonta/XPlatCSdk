#pragma once

#include <playfab/PlayFabExperimentationDataModels.h>
#include "BaseModel.h"
#include "JsonUtils.h"

namespace PlayFab
{
    namespace JsonUtils
    {

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
        inline JsonValue ToJson<>(const PlayFabExperimentationVariable& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
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
        inline JsonValue ToJson<>(const PlayFabExperimentationEntityKey& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
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
        inline JsonValue ToJson<>(const PlayFabExperimentationTreatmentAssignment& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Variables", input.variables, input.variablesCount);
            JsonUtils::ObjectAddMember(output, "Variants", input.variants, input.variantsCount);
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

    }

    namespace ExperimentationModels
    {
        // Experimentation Classes
        struct CreateExclusionGroupRequest : public PlayFabExperimentationCreateExclusionGroupRequest, public BaseModel
        {
            CreateExclusionGroupRequest() : PlayFabExperimentationCreateExclusionGroupRequest{}
            {
            }

            CreateExclusionGroupRequest(const CreateExclusionGroupRequest& src) :
                PlayFabExperimentationCreateExclusionGroupRequest{ src },
                m_customTags{ src.m_customTags },
                m_description{ src.m_description },
                m_name{ src.m_name }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                description = m_description.empty() ? nullptr : m_description.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~CreateExclusionGroupRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationCreateExclusionGroupRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_description;
            String m_name;
        };

        struct CreateExclusionGroupResult : public PlayFabExperimentationCreateExclusionGroupResult, public SerializableModel
        {
            CreateExclusionGroupResult() : PlayFabExperimentationCreateExclusionGroupResult{}
            {
            }

            CreateExclusionGroupResult(const CreateExclusionGroupResult& src) :
                PlayFabExperimentationCreateExclusionGroupResult{ src },
                m_exclusionGroupId{ src.m_exclusionGroupId }
            {
                exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
            }

            ~CreateExclusionGroupResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationCreateExclusionGroupResult>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabExperimentationCreateExclusionGroupResult) };
                serializedSize += (m_exclusionGroupId.size() + 1);
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabExperimentationCreateExclusionGroupResult{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationCreateExclusionGroupResult);
        
                memcpy(stringBuffer, m_exclusionGroupId.data(), m_exclusionGroupId.size() + 1);
                stringBuffer +=  m_exclusionGroupId.size() + 1; 
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
            String m_exclusionGroupId;
        };

        struct Variable : public PlayFabExperimentationVariable, public SerializableModel
        {
            Variable() : PlayFabExperimentationVariable{}
            {
            }

            Variable(const Variable& src) :
                PlayFabExperimentationVariable{ src },
                m_name{ src.m_name },
                m_value{ src.m_value }
            {
                name = m_name.empty() ? nullptr : m_name.data();
                value = m_value.empty() ? nullptr : m_value.data();
            }

            ~Variable() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationVariable>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabExperimentationVariable) };
                serializedSize += (m_name.size() + 1);
                serializedSize += (m_value.size() + 1);
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabExperimentationVariable{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationVariable);
        
                memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
                stringBuffer +=  m_name.size() + 1; 
                memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
                stringBuffer +=  m_value.size() + 1; 
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
            String m_name;
            String m_value;
        };

        struct Variant : public PlayFabExperimentationVariant, public BaseModel
        {
            Variant() : PlayFabExperimentationVariant{}
            {
            }

            Variant(const Variant& src) :
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

            ~Variant() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "IsControl", isControl);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "TitleDataOverrideLabel", m_titleDataOverrideLabel, titleDataOverrideLabel);
                JsonUtils:: ObjectGetMember(input, "TrafficPercentage", trafficPercentage);
                JsonUtils:: ObjectGetMember(input, "Variables", m_variables, variables, variablesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationVariant>(*this);
            }
    
        private:
            String m_description;
            String m_id;
            String m_name;
            String m_titleDataOverrideLabel;
            PointerArray<PlayFabExperimentationVariable, Variable> m_variables;
        };

        struct CreateExperimentRequest : public PlayFabExperimentationCreateExperimentRequest, public BaseModel
        {
            CreateExperimentRequest() : PlayFabExperimentationCreateExperimentRequest{}
            {
            }

            CreateExperimentRequest(const CreateExperimentRequest& src) :
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

            ~CreateExperimentRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "EndDate", m_endDate, endDate, true);
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupTrafficAllocation", m_exclusionGroupTrafficAllocation, exclusionGroupTrafficAllocation);
                JsonUtils:: ObjectGetMember(input, "ExperimentType", m_experimentType, experimentType);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
                JsonUtils:: ObjectGetMember(input, "StartDate", startDate, true);
                JsonUtils:: ObjectGetMember(input, "TitlePlayerAccountTestIds", m_titlePlayerAccountTestIds, titlePlayerAccountTestIds, titlePlayerAccountTestIdsCount);
                JsonUtils:: ObjectGetMember(input, "Variants", m_variants, variants, variantsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationCreateExperimentRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_description;
            StdExtra::optional<time_t> m_endDate;
            String m_exclusionGroupId;
            StdExtra::optional<uint32_t> m_exclusionGroupTrafficAllocation;
            StdExtra::optional<PlayFabExperimentationExperimentType> m_experimentType;
            String m_name;
            String m_segmentId;
            PointerArray<const char, String> m_titlePlayerAccountTestIds;
            PointerArray<PlayFabExperimentationVariant, Variant> m_variants;
        };

        struct CreateExperimentResult : public PlayFabExperimentationCreateExperimentResult, public SerializableModel
        {
            CreateExperimentResult() : PlayFabExperimentationCreateExperimentResult{}
            {
            }

            CreateExperimentResult(const CreateExperimentResult& src) :
                PlayFabExperimentationCreateExperimentResult{ src },
                m_experimentId{ src.m_experimentId }
            {
                experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
            }

            ~CreateExperimentResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationCreateExperimentResult>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabExperimentationCreateExperimentResult) };
                serializedSize += (m_experimentId.size() + 1);
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabExperimentationCreateExperimentResult{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationCreateExperimentResult);
        
                memcpy(stringBuffer, m_experimentId.data(), m_experimentId.size() + 1);
                stringBuffer +=  m_experimentId.size() + 1; 
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
            String m_experimentId;
        };

        struct DeleteExclusionGroupRequest : public PlayFabExperimentationDeleteExclusionGroupRequest, public BaseModel
        {
            DeleteExclusionGroupRequest() : PlayFabExperimentationDeleteExclusionGroupRequest{}
            {
            }

            DeleteExclusionGroupRequest(const DeleteExclusionGroupRequest& src) :
                PlayFabExperimentationDeleteExclusionGroupRequest{ src },
                m_customTags{ src.m_customTags },
                m_exclusionGroupId{ src.m_exclusionGroupId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
            }

            ~DeleteExclusionGroupRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationDeleteExclusionGroupRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_exclusionGroupId;
        };

        struct DeleteExperimentRequest : public PlayFabExperimentationDeleteExperimentRequest, public BaseModel
        {
            DeleteExperimentRequest() : PlayFabExperimentationDeleteExperimentRequest{}
            {
            }

            DeleteExperimentRequest(const DeleteExperimentRequest& src) :
                PlayFabExperimentationDeleteExperimentRequest{ src },
                m_customTags{ src.m_customTags },
                m_experimentId{ src.m_experimentId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
            }

            ~DeleteExperimentRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationDeleteExperimentRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_experimentId;
        };

        struct EntityKey : public PlayFabExperimentationEntityKey, public SerializableModel
        {
            EntityKey() : PlayFabExperimentationEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabExperimentationEntityKey{ src },
                m_id{ src.m_id },
                m_type{ src.m_type }
            {
                id = m_id.empty() ? nullptr : m_id.data();
                type = m_type.empty() ? nullptr : m_type.data();
            }

            ~EntityKey() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Type", m_type, type);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationEntityKey>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabExperimentationEntityKey) };
                serializedSize += (m_id.size() + 1);
                serializedSize += (m_type.size() + 1);
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabExperimentationEntityKey{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationEntityKey);
        
                memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
                stringBuffer +=  m_id.size() + 1; 
                memcpy(stringBuffer, m_type.data(), m_type.size() + 1);
                stringBuffer +=  m_type.size() + 1; 
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
            String m_id;
            String m_type;
        };

        struct ExclusionGroupTrafficAllocation : public PlayFabExperimentationExclusionGroupTrafficAllocation, public SerializableModel
        {
            ExclusionGroupTrafficAllocation() : PlayFabExperimentationExclusionGroupTrafficAllocation{}
            {
            }

            ExclusionGroupTrafficAllocation(const ExclusionGroupTrafficAllocation& src) :
                PlayFabExperimentationExclusionGroupTrafficAllocation{ src },
                m_experimentId{ src.m_experimentId }
            {
                experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
            }

            ~ExclusionGroupTrafficAllocation() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
                JsonUtils:: ObjectGetMember(input, "TrafficAllocation", trafficAllocation);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationExclusionGroupTrafficAllocation>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabExperimentationExclusionGroupTrafficAllocation) };
                serializedSize += (m_experimentId.size() + 1);
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabExperimentationExclusionGroupTrafficAllocation{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationExclusionGroupTrafficAllocation);
        
                memcpy(stringBuffer, m_experimentId.data(), m_experimentId.size() + 1);
                stringBuffer +=  m_experimentId.size() + 1; 
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
            String m_experimentId;
        };

        struct Experiment : public PlayFabExperimentationExperiment, public BaseModel
        {
            Experiment() : PlayFabExperimentationExperiment{}
            {
            }

            Experiment(const Experiment& src) :
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

            ~Experiment() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "EndDate", m_endDate, endDate, true);
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupTrafficAllocation", m_exclusionGroupTrafficAllocation, exclusionGroupTrafficAllocation);
                JsonUtils:: ObjectGetMember(input, "ExperimentType", m_experimentType, experimentType);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
                JsonUtils:: ObjectGetMember(input, "StartDate", startDate, true);
                JsonUtils:: ObjectGetMember(input, "State", m_state, state);
                JsonUtils:: ObjectGetMember(input, "TitlePlayerAccountTestIds", m_titlePlayerAccountTestIds, titlePlayerAccountTestIds, titlePlayerAccountTestIdsCount);
                JsonUtils:: ObjectGetMember(input, "Variants", m_variants, variants, variantsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationExperiment>(*this);
            }
    
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
            PointerArray<const char, String> m_titlePlayerAccountTestIds;
            PointerArray<PlayFabExperimentationVariant, Variant> m_variants;
        };

        struct ExperimentExclusionGroup : public PlayFabExperimentationExperimentExclusionGroup, public SerializableModel
        {
            ExperimentExclusionGroup() : PlayFabExperimentationExperimentExclusionGroup{}
            {
            }

            ExperimentExclusionGroup(const ExperimentExclusionGroup& src) :
                PlayFabExperimentationExperimentExclusionGroup{ src },
                m_description{ src.m_description },
                m_exclusionGroupId{ src.m_exclusionGroupId },
                m_name{ src.m_name }
            {
                description = m_description.empty() ? nullptr : m_description.data();
                exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~ExperimentExclusionGroup() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationExperimentExclusionGroup>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabExperimentationExperimentExclusionGroup) };
                serializedSize += (m_description.size() + 1);
                serializedSize += (m_exclusionGroupId.size() + 1);
                serializedSize += (m_name.size() + 1);
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabExperimentationExperimentExclusionGroup{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationExperimentExclusionGroup);
        
                memcpy(stringBuffer, m_description.data(), m_description.size() + 1);
                stringBuffer +=  m_description.size() + 1; 
                memcpy(stringBuffer, m_exclusionGroupId.data(), m_exclusionGroupId.size() + 1);
                stringBuffer +=  m_exclusionGroupId.size() + 1; 
                memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
                stringBuffer +=  m_name.size() + 1; 
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
            String m_description;
            String m_exclusionGroupId;
            String m_name;
        };

        struct GetExclusionGroupsRequest : public PlayFabExperimentationGetExclusionGroupsRequest, public BaseModel
        {
            GetExclusionGroupsRequest() : PlayFabExperimentationGetExclusionGroupsRequest{}
            {
            }

            GetExclusionGroupsRequest(const GetExclusionGroupsRequest& src) :
                PlayFabExperimentationGetExclusionGroupsRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetExclusionGroupsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationGetExclusionGroupsRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct GetExclusionGroupsResult : public PlayFabExperimentationGetExclusionGroupsResult, public BaseModel
        {
            GetExclusionGroupsResult() : PlayFabExperimentationGetExclusionGroupsResult{}
            {
            }

            GetExclusionGroupsResult(const GetExclusionGroupsResult& src) :
                PlayFabExperimentationGetExclusionGroupsResult{ src },
                m_exclusionGroups{ src.m_exclusionGroups }
            {
                exclusionGroups = m_exclusionGroups.Empty() ? nullptr : m_exclusionGroups.Data();
            }

            ~GetExclusionGroupsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ExclusionGroups", m_exclusionGroups, exclusionGroups, exclusionGroupsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationGetExclusionGroupsResult>(*this);
            }
    
        private:
            PointerArray<PlayFabExperimentationExperimentExclusionGroup, ExperimentExclusionGroup> m_exclusionGroups;
        };

        struct GetExclusionGroupTrafficRequest : public PlayFabExperimentationGetExclusionGroupTrafficRequest, public BaseModel
        {
            GetExclusionGroupTrafficRequest() : PlayFabExperimentationGetExclusionGroupTrafficRequest{}
            {
            }

            GetExclusionGroupTrafficRequest(const GetExclusionGroupTrafficRequest& src) :
                PlayFabExperimentationGetExclusionGroupTrafficRequest{ src },
                m_customTags{ src.m_customTags },
                m_exclusionGroupId{ src.m_exclusionGroupId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                exclusionGroupId = m_exclusionGroupId.empty() ? nullptr : m_exclusionGroupId.data();
            }

            ~GetExclusionGroupTrafficRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationGetExclusionGroupTrafficRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_exclusionGroupId;
        };

        struct GetExclusionGroupTrafficResult : public PlayFabExperimentationGetExclusionGroupTrafficResult, public BaseModel
        {
            GetExclusionGroupTrafficResult() : PlayFabExperimentationGetExclusionGroupTrafficResult{}
            {
            }

            GetExclusionGroupTrafficResult(const GetExclusionGroupTrafficResult& src) :
                PlayFabExperimentationGetExclusionGroupTrafficResult{ src },
                m_trafficAllocations{ src.m_trafficAllocations }
            {
                trafficAllocations = m_trafficAllocations.Empty() ? nullptr : m_trafficAllocations.Data();
            }

            ~GetExclusionGroupTrafficResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "TrafficAllocations", m_trafficAllocations, trafficAllocations, trafficAllocationsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationGetExclusionGroupTrafficResult>(*this);
            }
    
        private:
            PointerArray<PlayFabExperimentationExclusionGroupTrafficAllocation, ExclusionGroupTrafficAllocation> m_trafficAllocations;
        };

        struct GetExperimentsRequest : public PlayFabExperimentationGetExperimentsRequest, public BaseModel
        {
            GetExperimentsRequest() : PlayFabExperimentationGetExperimentsRequest{}
            {
            }

            GetExperimentsRequest(const GetExperimentsRequest& src) :
                PlayFabExperimentationGetExperimentsRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetExperimentsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationGetExperimentsRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct GetExperimentsResult : public PlayFabExperimentationGetExperimentsResult, public BaseModel
        {
            GetExperimentsResult() : PlayFabExperimentationGetExperimentsResult{}
            {
            }

            GetExperimentsResult(const GetExperimentsResult& src) :
                PlayFabExperimentationGetExperimentsResult{ src },
                m_experiments{ src.m_experiments }
            {
                experiments = m_experiments.Empty() ? nullptr : m_experiments.Data();
            }

            ~GetExperimentsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Experiments", m_experiments, experiments, experimentsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationGetExperimentsResult>(*this);
            }
    
        private:
            PointerArray<PlayFabExperimentationExperiment, Experiment> m_experiments;
        };

        struct GetLatestScorecardRequest : public PlayFabExperimentationGetLatestScorecardRequest, public BaseModel
        {
            GetLatestScorecardRequest() : PlayFabExperimentationGetLatestScorecardRequest{}
            {
            }

            GetLatestScorecardRequest(const GetLatestScorecardRequest& src) :
                PlayFabExperimentationGetLatestScorecardRequest{ src },
                m_customTags{ src.m_customTags },
                m_experimentId{ src.m_experimentId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
            }

            ~GetLatestScorecardRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationGetLatestScorecardRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_experimentId;
        };

        struct MetricData : public PlayFabExperimentationMetricData, public SerializableModel
        {
            MetricData() : PlayFabExperimentationMetricData{}
            {
            }

            MetricData(const MetricData& src) :
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

            ~MetricData() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ConfidenceIntervalEnd", confidenceIntervalEnd);
                JsonUtils:: ObjectGetMember(input, "ConfidenceIntervalStart", confidenceIntervalStart);
                JsonUtils:: ObjectGetMember(input, "DeltaAbsoluteChange", deltaAbsoluteChange);
                JsonUtils:: ObjectGetMember(input, "DeltaRelativeChange", deltaRelativeChange);
                JsonUtils:: ObjectGetMember(input, "InternalName", m_internalName, internalName);
                JsonUtils:: ObjectGetMember(input, "Movement", m_movement, movement);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "PMove", pMove);
                JsonUtils:: ObjectGetMember(input, "PValue", pValue);
                JsonUtils:: ObjectGetMember(input, "PValueThreshold", pValueThreshold);
                JsonUtils:: ObjectGetMember(input, "StatSigLevel", m_statSigLevel, statSigLevel);
                JsonUtils:: ObjectGetMember(input, "StdDev", stdDev);
                JsonUtils:: ObjectGetMember(input, "Value", value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationMetricData>(*this);
            }
    
            size_t SerializedSize() const override
            {
                size_t serializedSize{ sizeof(PlayFabExperimentationMetricData) };
                serializedSize += (m_internalName.size() + 1);
                serializedSize += (m_movement.size() + 1);
                serializedSize += (m_name.size() + 1);
                serializedSize += (m_statSigLevel.size() + 1);
                return serializedSize;
            }

            void Serialize(void* buffer, size_t bufferSize) const override
            {
                new (buffer) PlayFabExperimentationMetricData{ *this };
                char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabExperimentationMetricData);
        
                memcpy(stringBuffer, m_internalName.data(), m_internalName.size() + 1);
                stringBuffer +=  m_internalName.size() + 1; 
                memcpy(stringBuffer, m_movement.data(), m_movement.size() + 1);
                stringBuffer +=  m_movement.size() + 1; 
                memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
                stringBuffer +=  m_name.size() + 1; 
                memcpy(stringBuffer, m_statSigLevel.data(), m_statSigLevel.size() + 1);
                stringBuffer +=  m_statSigLevel.size() + 1; 
                assert(stringBuffer - bufferSize == buffer);
            }
    
        private:
            String m_internalName;
            String m_movement;
            String m_name;
            String m_statSigLevel;
        };

        struct ScorecardDataRow : public PlayFabExperimentationScorecardDataRow, public BaseModel
        {
            ScorecardDataRow() : PlayFabExperimentationScorecardDataRow{}
            {
            }

            ScorecardDataRow(const ScorecardDataRow& src) :
                PlayFabExperimentationScorecardDataRow{ src },
                m_metricDataRows{ src.m_metricDataRows },
                m_variantName{ src.m_variantName }
            {
                metricDataRows = m_metricDataRows.Empty() ? nullptr : m_metricDataRows.Data();
                variantName = m_variantName.empty() ? nullptr : m_variantName.data();
            }

            ~ScorecardDataRow() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "IsControl", isControl);
                JsonUtils:: ObjectGetMember(input, "MetricDataRows", m_metricDataRows, metricDataRows, metricDataRowsCount);
                JsonUtils:: ObjectGetMember(input, "PlayerCount", playerCount);
                JsonUtils:: ObjectGetMember(input, "VariantName", m_variantName, variantName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationScorecardDataRow>(*this);
            }
    
        private:
            AssociativeArray<PlayFabExperimentationMetricDataDictionaryEntry, MetricData> m_metricDataRows;
            String m_variantName;
        };

        struct Scorecard : public PlayFabExperimentationScorecard, public BaseModel
        {
            Scorecard() : PlayFabExperimentationScorecard{}
            {
            }

            Scorecard(const Scorecard& src) :
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

            ~Scorecard() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DateGenerated", m_dateGenerated, dateGenerated);
                JsonUtils:: ObjectGetMember(input, "Duration", m_duration, duration);
                JsonUtils:: ObjectGetMember(input, "EventsProcessed", eventsProcessed);
                JsonUtils:: ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
                JsonUtils:: ObjectGetMember(input, "ExperimentName", m_experimentName, experimentName);
                JsonUtils:: ObjectGetMember(input, "LatestJobStatus", m_latestJobStatus, latestJobStatus);
                JsonUtils:: ObjectGetMember(input, "SampleRatioMismatch", sampleRatioMismatch);
                JsonUtils:: ObjectGetMember(input, "ScorecardDataRows", m_scorecardDataRows, scorecardDataRows, scorecardDataRowsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationScorecard>(*this);
            }
    
        private:
            String m_dateGenerated;
            String m_duration;
            String m_experimentId;
            String m_experimentName;
            StdExtra::optional<PlayFabExperimentationAnalysisTaskState> m_latestJobStatus;
            PointerArray<PlayFabExperimentationScorecardDataRow, ScorecardDataRow> m_scorecardDataRows;
        };

        struct GetLatestScorecardResult : public PlayFabExperimentationGetLatestScorecardResult, public BaseModel
        {
            GetLatestScorecardResult() : PlayFabExperimentationGetLatestScorecardResult{}
            {
            }

            GetLatestScorecardResult(const GetLatestScorecardResult& src) :
                PlayFabExperimentationGetLatestScorecardResult{ src },
                m_scorecard{ src.m_scorecard }
            {
                scorecard = m_scorecard ? m_scorecard.operator->() : nullptr;
            }

            ~GetLatestScorecardResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Scorecard", m_scorecard, scorecard);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationGetLatestScorecardResult>(*this);
            }
    
        private:
            StdExtra::optional<Scorecard> m_scorecard;
        };

        struct GetTreatmentAssignmentRequest : public PlayFabExperimentationGetTreatmentAssignmentRequest, public BaseModel
        {
            GetTreatmentAssignmentRequest() : PlayFabExperimentationGetTreatmentAssignmentRequest{}
            {
            }

            GetTreatmentAssignmentRequest(const GetTreatmentAssignmentRequest& src) :
                PlayFabExperimentationGetTreatmentAssignmentRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
            }

            ~GetTreatmentAssignmentRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationGetTreatmentAssignmentRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
        };

        struct TreatmentAssignment : public PlayFabExperimentationTreatmentAssignment, public BaseModel
        {
            TreatmentAssignment() : PlayFabExperimentationTreatmentAssignment{}
            {
            }

            TreatmentAssignment(const TreatmentAssignment& src) :
                PlayFabExperimentationTreatmentAssignment{ src },
                m_variables{ src.m_variables },
                m_variants{ src.m_variants }
            {
                variables = m_variables.Empty() ? nullptr : m_variables.Data();
                variants = m_variants.Empty() ? nullptr : m_variants.Data();
            }

            ~TreatmentAssignment() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Variables", m_variables, variables, variablesCount);
                JsonUtils:: ObjectGetMember(input, "Variants", m_variants, variants, variantsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationTreatmentAssignment>(*this);
            }
    
        private:
            PointerArray<PlayFabExperimentationVariable, Variable> m_variables;
            PointerArray<const char, String> m_variants;
        };

        struct GetTreatmentAssignmentResult : public PlayFabExperimentationGetTreatmentAssignmentResult, public BaseModel
        {
            GetTreatmentAssignmentResult() : PlayFabExperimentationGetTreatmentAssignmentResult{}
            {
            }

            GetTreatmentAssignmentResult(const GetTreatmentAssignmentResult& src) :
                PlayFabExperimentationGetTreatmentAssignmentResult{ src },
                m_treatmentAssignment{ src.m_treatmentAssignment }
            {
                treatmentAssignment = m_treatmentAssignment ? m_treatmentAssignment.operator->() : nullptr;
            }

            ~GetTreatmentAssignmentResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "TreatmentAssignment", m_treatmentAssignment, treatmentAssignment);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationGetTreatmentAssignmentResult>(*this);
            }
    
        private:
            StdExtra::optional<TreatmentAssignment> m_treatmentAssignment;
        };

        struct StartExperimentRequest : public PlayFabExperimentationStartExperimentRequest, public BaseModel
        {
            StartExperimentRequest() : PlayFabExperimentationStartExperimentRequest{}
            {
            }

            StartExperimentRequest(const StartExperimentRequest& src) :
                PlayFabExperimentationStartExperimentRequest{ src },
                m_customTags{ src.m_customTags },
                m_experimentId{ src.m_experimentId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
            }

            ~StartExperimentRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationStartExperimentRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_experimentId;
        };

        struct StopExperimentRequest : public PlayFabExperimentationStopExperimentRequest, public BaseModel
        {
            StopExperimentRequest() : PlayFabExperimentationStopExperimentRequest{}
            {
            }

            StopExperimentRequest(const StopExperimentRequest& src) :
                PlayFabExperimentationStopExperimentRequest{ src },
                m_customTags{ src.m_customTags },
                m_experimentId{ src.m_experimentId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                experimentId = m_experimentId.empty() ? nullptr : m_experimentId.data();
            }

            ~StopExperimentRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExperimentId", m_experimentId, experimentId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationStopExperimentRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_experimentId;
        };

        struct UpdateExclusionGroupRequest : public PlayFabExperimentationUpdateExclusionGroupRequest, public BaseModel
        {
            UpdateExclusionGroupRequest() : PlayFabExperimentationUpdateExclusionGroupRequest{}
            {
            }

            UpdateExclusionGroupRequest(const UpdateExclusionGroupRequest& src) :
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

            ~UpdateExclusionGroupRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationUpdateExclusionGroupRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_description;
            String m_exclusionGroupId;
            String m_name;
        };

        struct UpdateExperimentRequest : public PlayFabExperimentationUpdateExperimentRequest, public BaseModel
        {
            UpdateExperimentRequest() : PlayFabExperimentationUpdateExperimentRequest{}
            {
            }

            UpdateExperimentRequest(const UpdateExperimentRequest& src) :
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

            ~UpdateExperimentRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "EndDate", m_endDate, endDate, true);
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupId", m_exclusionGroupId, exclusionGroupId);
                JsonUtils:: ObjectGetMember(input, "ExclusionGroupTrafficAllocation", m_exclusionGroupTrafficAllocation, exclusionGroupTrafficAllocation);
                JsonUtils:: ObjectGetMember(input, "ExperimentType", m_experimentType, experimentType);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
                JsonUtils:: ObjectGetMember(input, "StartDate", startDate, true);
                JsonUtils:: ObjectGetMember(input, "TitlePlayerAccountTestIds", m_titlePlayerAccountTestIds, titlePlayerAccountTestIds, titlePlayerAccountTestIdsCount);
                JsonUtils:: ObjectGetMember(input, "Variants", m_variants, variants, variantsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabExperimentationUpdateExperimentRequest>(*this);
            }
    
        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_description;
            StdExtra::optional<time_t> m_endDate;
            String m_exclusionGroupId;
            StdExtra::optional<uint32_t> m_exclusionGroupTrafficAllocation;
            StdExtra::optional<PlayFabExperimentationExperimentType> m_experimentType;
            String m_id;
            String m_name;
            String m_segmentId;
            PointerArray<const char, String> m_titlePlayerAccountTestIds;
            PointerArray<PlayFabExperimentationVariant, Variant> m_variants;
        };

    }

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


}
