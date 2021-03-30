#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <playfab/PlayFabInsightsDataModels_c.h>
#include <BaseModel.h>
#include <JsonUtils.h>

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsEmptyRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsPerformanceLevel& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ActiveEventExports", input.activeEventExports);
            JsonUtils::ObjectAddMember(output, "CacheSizeMB", input.cacheSizeMB);
            JsonUtils::ObjectAddMember(output, "Concurrency", input.concurrency);
            JsonUtils::ObjectAddMember(output, "CreditsPerMinute", input.creditsPerMinute);
            JsonUtils::ObjectAddMember(output, "EventsPerSecond", input.eventsPerSecond);
            JsonUtils::ObjectAddMember(output, "Level", input.level);
            JsonUtils::ObjectAddMember(output, "MaxMemoryPerQueryMB", input.maxMemoryPerQueryMB);
            JsonUtils::ObjectAddMember(output, "VirtualCpuCores", input.virtualCpuCores);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetLimitsResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DefaultPerformanceLevel", input.defaultPerformanceLevel);
            JsonUtils::ObjectAddMember(output, "DefaultStorageRetentionDays", input.defaultStorageRetentionDays);
            JsonUtils::ObjectAddMember(output, "StorageMaxRetentionDays", input.storageMaxRetentionDays);
            JsonUtils::ObjectAddMember(output, "StorageMinRetentionDays", input.storageMinRetentionDays);
            JsonUtils::ObjectAddMember(output, "SubMeters", input.subMeters, input.subMetersCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetOperationStatusResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            JsonUtils::ObjectAddMember(output, "OperationCompletedTime", input.operationCompletedTime, true);
            JsonUtils::ObjectAddMember(output, "OperationId", input.operationId);
            JsonUtils::ObjectAddMember(output, "OperationLastUpdated", input.operationLastUpdated, true);
            JsonUtils::ObjectAddMember(output, "OperationStartedTime", input.operationStartedTime, true);
            JsonUtils::ObjectAddMember(output, "OperationType", input.operationType);
            JsonUtils::ObjectAddMember(output, "OperationValue", input.operationValue);
            JsonUtils::ObjectAddMember(output, "Status", input.status);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetDetailsResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DataUsageMb", input.dataUsageMb);
            JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
            JsonUtils::ObjectAddMember(output, "Limits", input.limits);
            JsonUtils::ObjectAddMember(output, "PendingOperations", input.pendingOperations, input.pendingOperationsCount);
            JsonUtils::ObjectAddMember(output, "PerformanceLevel", input.performanceLevel);
            JsonUtils::ObjectAddMember(output, "RetentionDays", input.retentionDays);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetOperationStatusRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "OperationId", input.operationId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetPendingOperationsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "OperationType", input.operationType);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetPendingOperationsResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PendingOperations", input.pendingOperations, input.pendingOperationsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsOperationResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            JsonUtils::ObjectAddMember(output, "OperationId", input.operationId);
            JsonUtils::ObjectAddMember(output, "OperationType", input.operationType);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsSetPerformanceRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PerformanceLevel", input.performanceLevel);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabInsightsInsightsSetStorageRetentionRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "RetentionDays", input.retentionDays);
            return output;
        }

    }

    namespace InsightsModels
    {
        // Insights Classes
        struct InsightsEmptyRequest : public PlayFabInsightsInsightsEmptyRequest, public BaseRequest
        {
            InsightsEmptyRequest() : PlayFabInsightsInsightsEmptyRequest{}
            {
            }

            InsightsEmptyRequest(const InsightsEmptyRequest& src) :
                PlayFabInsightsInsightsEmptyRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~InsightsEmptyRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsEmptyRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct InsightsPerformanceLevel : public PlayFabInsightsInsightsPerformanceLevel, public BaseModel
        {
            InsightsPerformanceLevel() : PlayFabInsightsInsightsPerformanceLevel{}
            {
            }

            InsightsPerformanceLevel(const InsightsPerformanceLevel&) = default;

            ~InsightsPerformanceLevel() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ActiveEventExports", activeEventExports);
                JsonUtils:: ObjectGetMember(input, "CacheSizeMB", cacheSizeMB);
                JsonUtils:: ObjectGetMember(input, "Concurrency", concurrency);
                JsonUtils:: ObjectGetMember(input, "CreditsPerMinute", creditsPerMinute);
                JsonUtils:: ObjectGetMember(input, "EventsPerSecond", eventsPerSecond);
                JsonUtils:: ObjectGetMember(input, "Level", level);
                JsonUtils:: ObjectGetMember(input, "MaxMemoryPerQueryMB", maxMemoryPerQueryMB);
                JsonUtils:: ObjectGetMember(input, "VirtualCpuCores", virtualCpuCores);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsPerformanceLevel>(*this);
            }

        private:








        };

        struct InsightsGetLimitsResponse : public PlayFabInsightsInsightsGetLimitsResponse, public BaseResult
        {
            InsightsGetLimitsResponse() : PlayFabInsightsInsightsGetLimitsResponse{}
            {
            }

            InsightsGetLimitsResponse(const InsightsGetLimitsResponse& src) :
                PlayFabInsightsInsightsGetLimitsResponse{ src },
                m_subMeters{ src.m_subMeters }
            {

                subMeters = m_subMeters.Empty() ? nullptr : m_subMeters.Data();
            }

            ~InsightsGetLimitsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "DefaultPerformanceLevel", defaultPerformanceLevel);
                JsonUtils:: ObjectGetMember(input, "DefaultStorageRetentionDays", defaultStorageRetentionDays);
                JsonUtils:: ObjectGetMember(input, "StorageMaxRetentionDays", storageMaxRetentionDays);
                JsonUtils:: ObjectGetMember(input, "StorageMinRetentionDays", storageMinRetentionDays);
                JsonUtils:: ObjectGetMember(input, "SubMeters", m_subMeters, subMeters, subMetersCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsGetLimitsResponse>(*this);
            }

        private:




            PointerArray<PlayFabInsightsInsightsPerformanceLevel, InsightsPerformanceLevel> m_subMeters;
        };

        struct InsightsGetOperationStatusResponse : public PlayFabInsightsInsightsGetOperationStatusResponse, public BaseResult
        {
            InsightsGetOperationStatusResponse() : PlayFabInsightsInsightsGetOperationStatusResponse{}
            {
            }

            InsightsGetOperationStatusResponse(const InsightsGetOperationStatusResponse& src) :
                PlayFabInsightsInsightsGetOperationStatusResponse{ src },
                m_message{ src.m_message },
                m_operationId{ src.m_operationId },
                m_operationType{ src.m_operationType },
                m_status{ src.m_status }
            {

                message = m_message.empty() ? nullptr : m_message.data();
                operationId = m_operationId.empty() ? nullptr : m_operationId.data();
                operationType = m_operationType.empty() ? nullptr : m_operationType.data();
                status = m_status.empty() ? nullptr : m_status.data();
            }

            ~InsightsGetOperationStatusResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Message", m_message, message);
                JsonUtils:: ObjectGetMember(input, "OperationCompletedTime", operationCompletedTime, true);
                JsonUtils:: ObjectGetMember(input, "OperationId", m_operationId, operationId);
                JsonUtils:: ObjectGetMember(input, "OperationLastUpdated", operationLastUpdated, true);
                JsonUtils:: ObjectGetMember(input, "OperationStartedTime", operationStartedTime, true);
                JsonUtils:: ObjectGetMember(input, "OperationType", m_operationType, operationType);
                JsonUtils:: ObjectGetMember(input, "OperationValue", operationValue);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsGetOperationStatusResponse>(*this);
            }

        private:
            String m_message;

            String m_operationId;


            String m_operationType;

            String m_status;
        };

        struct InsightsGetDetailsResponse : public PlayFabInsightsInsightsGetDetailsResponse, public BaseResult
        {
            InsightsGetDetailsResponse() : PlayFabInsightsInsightsGetDetailsResponse{}
            {
            }

            InsightsGetDetailsResponse(const InsightsGetDetailsResponse& src) :
                PlayFabInsightsInsightsGetDetailsResponse{ src },
                m_errorMessage{ src.m_errorMessage },
                m_limits{ src.m_limits },
                m_pendingOperations{ src.m_pendingOperations }
            {

                errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
                limits = m_limits ? m_limits.operator->() : nullptr;
                pendingOperations = m_pendingOperations.Empty() ? nullptr : m_pendingOperations.Data();
            }

            ~InsightsGetDetailsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "DataUsageMb", dataUsageMb);
                JsonUtils:: ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
                JsonUtils:: ObjectGetMember(input, "Limits", m_limits, limits);
                JsonUtils:: ObjectGetMember(input, "PendingOperations", m_pendingOperations, pendingOperations, pendingOperationsCount);
                JsonUtils:: ObjectGetMember(input, "PerformanceLevel", performanceLevel);
                JsonUtils:: ObjectGetMember(input, "RetentionDays", retentionDays);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsGetDetailsResponse>(*this);
            }

        private:

            String m_errorMessage;
            StdExtra::optional<InsightsGetLimitsResponse> m_limits;
            PointerArray<PlayFabInsightsInsightsGetOperationStatusResponse, InsightsGetOperationStatusResponse> m_pendingOperations;


        };

        struct InsightsGetOperationStatusRequest : public PlayFabInsightsInsightsGetOperationStatusRequest, public BaseRequest
        {
            InsightsGetOperationStatusRequest() : PlayFabInsightsInsightsGetOperationStatusRequest{}
            {
            }

            InsightsGetOperationStatusRequest(const InsightsGetOperationStatusRequest& src) :
                PlayFabInsightsInsightsGetOperationStatusRequest{ src },
                m_customTags{ src.m_customTags },
                m_operationId{ src.m_operationId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                operationId = m_operationId.empty() ? nullptr : m_operationId.data();
            }

            ~InsightsGetOperationStatusRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "OperationId", m_operationId, operationId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsGetOperationStatusRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_operationId;
        };

        struct InsightsGetPendingOperationsRequest : public PlayFabInsightsInsightsGetPendingOperationsRequest, public BaseRequest
        {
            InsightsGetPendingOperationsRequest() : PlayFabInsightsInsightsGetPendingOperationsRequest{}
            {
            }

            InsightsGetPendingOperationsRequest(const InsightsGetPendingOperationsRequest& src) :
                PlayFabInsightsInsightsGetPendingOperationsRequest{ src },
                m_customTags{ src.m_customTags },
                m_operationType{ src.m_operationType }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                operationType = m_operationType.empty() ? nullptr : m_operationType.data();
            }

            ~InsightsGetPendingOperationsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "OperationType", m_operationType, operationType);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsGetPendingOperationsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_operationType;
        };

        struct InsightsGetPendingOperationsResponse : public PlayFabInsightsInsightsGetPendingOperationsResponse, public BaseResult
        {
            InsightsGetPendingOperationsResponse() : PlayFabInsightsInsightsGetPendingOperationsResponse{}
            {
            }

            InsightsGetPendingOperationsResponse(const InsightsGetPendingOperationsResponse& src) :
                PlayFabInsightsInsightsGetPendingOperationsResponse{ src },
                m_pendingOperations{ src.m_pendingOperations }
            {

                pendingOperations = m_pendingOperations.Empty() ? nullptr : m_pendingOperations.Data();
            }

            ~InsightsGetPendingOperationsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "PendingOperations", m_pendingOperations, pendingOperations, pendingOperationsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsGetPendingOperationsResponse>(*this);
            }

        private:
            PointerArray<PlayFabInsightsInsightsGetOperationStatusResponse, InsightsGetOperationStatusResponse> m_pendingOperations;
        };

        struct InsightsOperationResponse : public PlayFabInsightsInsightsOperationResponse, public BaseResult
        {
            InsightsOperationResponse() : PlayFabInsightsInsightsOperationResponse{}
            {
            }

            InsightsOperationResponse(const InsightsOperationResponse& src) :
                PlayFabInsightsInsightsOperationResponse{ src },
                m_message{ src.m_message },
                m_operationId{ src.m_operationId },
                m_operationType{ src.m_operationType }
            {

                message = m_message.empty() ? nullptr : m_message.data();
                operationId = m_operationId.empty() ? nullptr : m_operationId.data();
                operationType = m_operationType.empty() ? nullptr : m_operationType.data();
            }

            ~InsightsOperationResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Message", m_message, message);
                JsonUtils:: ObjectGetMember(input, "OperationId", m_operationId, operationId);
                JsonUtils:: ObjectGetMember(input, "OperationType", m_operationType, operationType);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsOperationResponse>(*this);
            }

        private:
            String m_message;
            String m_operationId;
            String m_operationType;
        };

        struct InsightsSetPerformanceRequest : public PlayFabInsightsInsightsSetPerformanceRequest, public BaseRequest
        {
            InsightsSetPerformanceRequest() : PlayFabInsightsInsightsSetPerformanceRequest{}
            {
            }

            InsightsSetPerformanceRequest(const InsightsSetPerformanceRequest& src) :
                PlayFabInsightsInsightsSetPerformanceRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~InsightsSetPerformanceRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PerformanceLevel", performanceLevel);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsSetPerformanceRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;

        };

        struct InsightsSetStorageRetentionRequest : public PlayFabInsightsInsightsSetStorageRetentionRequest, public BaseRequest
        {
            InsightsSetStorageRetentionRequest() : PlayFabInsightsInsightsSetStorageRetentionRequest{}
            {
            }

            InsightsSetStorageRetentionRequest(const InsightsSetStorageRetentionRequest& src) :
                PlayFabInsightsInsightsSetStorageRetentionRequest{ src },
                m_customTags{ src.m_customTags }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~InsightsSetStorageRetentionRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "RetentionDays", retentionDays);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabInsightsInsightsSetStorageRetentionRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;

        };

    }

    // EnumRange definitions used for Enum (de)serialization 
}

#endif
