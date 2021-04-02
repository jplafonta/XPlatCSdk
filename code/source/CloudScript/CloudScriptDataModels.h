#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <playfab/PlayFabCloudScriptDataModels_c.h>
#include "BaseModel.h"
#include "JsonUtils.h"

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptAdCampaignAttributionModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
            JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptContactEmailInfoModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptEntityKey& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptScriptExecutionError& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Error", input.error);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptLogStatement& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Data", input.data);
            JsonUtils::ObjectAddMember(output, "Level", input.level);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteCloudScriptResult& input)
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
        inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteEntityCloudScriptRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
            JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
            JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
            JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteFunctionRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
            JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptFunctionExecutionError& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Error", input.error);
            JsonUtils::ObjectAddMember(output, "Message", input.message);
            JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptExecuteFunctionResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Error", input.error);
            JsonUtils::ObjectAddMember(output, "ExecutionTimeMilliseconds", input.executionTimeMilliseconds);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
            JsonUtils::ObjectAddMember(output, "FunctionResultTooLarge", input.functionResultTooLarge);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptFunctionModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FunctionAddress", input.functionAddress);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            JsonUtils::ObjectAddMember(output, "TriggerType", input.triggerType);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptHttpFunctionModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            JsonUtils::ObjectAddMember(output, "FunctionUrl", input.functionUrl);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptLinkedPlatformAccountModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Email", input.email);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            JsonUtils::ObjectAddMember(output, "PlatformUserId", input.platformUserId);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptListFunctionsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptListFunctionsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Functions", input.functions, input.functionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptListHttpFunctionsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Functions", input.functions, input.functionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptQueuedFunctionModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConnectionString", input.connectionString);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptListQueuedFunctionsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Functions", input.functions, input.functionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptLocationModel& input)
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
        inline JsonValue ToJson<>(const PlayFabCloudScriptSubscriptionModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Expiration", input.expiration, true);
            JsonUtils::ObjectAddMember(output, "InitialSubscriptionTime", input.initialSubscriptionTime, true);
            JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
            JsonUtils::ObjectAddMember(output, "Status", input.status);
            JsonUtils::ObjectAddMember(output, "SubscriptionId", input.subscriptionId);
            JsonUtils::ObjectAddMember(output, "SubscriptionItemId", input.subscriptionItemId);
            JsonUtils::ObjectAddMember(output, "SubscriptionProvider", input.subscriptionProvider);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptMembershipModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
            JsonUtils::ObjectAddMember(output, "MembershipExpiration", input.membershipExpiration, true);
            JsonUtils::ObjectAddMember(output, "MembershipId", input.membershipId);
            JsonUtils::ObjectAddMember(output, "OverrideExpiration", input.overrideExpiration, true);
            JsonUtils::ObjectAddMember(output, "Subscriptions", input.subscriptions, input.subscriptionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptNameIdentifier& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptPushNotificationRegistrationModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
            JsonUtils::ObjectAddMember(output, "Platform", input.platform);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptStatisticModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptTagModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TagValue", input.tagValue);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptValueToDateModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Currency", input.currency);
            JsonUtils::ObjectAddMember(output, "TotalValue", input.totalValue);
            JsonUtils::ObjectAddMember(output, "TotalValueAsDecimal", input.totalValueAsDecimal);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptPlayerProfileModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AdCampaignAttributions", input.adCampaignAttributions, input.adCampaignAttributionsCount);
            JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
            JsonUtils::ObjectAddMember(output, "BannedUntil", input.bannedUntil, true);
            JsonUtils::ObjectAddMember(output, "ContactEmailAddresses", input.contactEmailAddresses, input.contactEmailAddressesCount);
            JsonUtils::ObjectAddMember(output, "Created", input.created, true);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "ExperimentVariants", input.experimentVariants, input.experimentVariantsCount);
            JsonUtils::ObjectAddMember(output, "LastLogin", input.lastLogin, true);
            JsonUtils::ObjectAddMember(output, "LinkedAccounts", input.linkedAccounts, input.linkedAccountsCount);
            JsonUtils::ObjectAddMember(output, "Locations", input.locations, input.locationsCount);
            JsonUtils::ObjectAddMember(output, "Memberships", input.memberships, input.membershipsCount);
            JsonUtils::ObjectAddMember(output, "Origination", input.origination);
            JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
            JsonUtils::ObjectAddMember(output, "PublisherId", input.publisherId);
            JsonUtils::ObjectAddMember(output, "PushNotificationRegistrations", input.pushNotificationRegistrations, input.pushNotificationRegistrationsCount);
            JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            JsonUtils::ObjectAddMember(output, "TotalValueToDateInUSD", input.totalValueToDateInUSD);
            JsonUtils::ObjectAddMember(output, "ValuesToDate", input.valuesToDate, input.valuesToDateCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptPlayStreamEventEnvelopeModel& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "EntityId", input.entityId);
            JsonUtils::ObjectAddMember(output, "EntityType", input.entityType);
            JsonUtils::ObjectAddMember(output, "EventData", input.eventData);
            JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
            JsonUtils::ObjectAddMember(output, "EventNamespace", input.eventNamespace);
            JsonUtils::ObjectAddMember(output, "EventSettings", input.eventSettings);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
            JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
            JsonUtils::ObjectAddMember(output, "PlayStreamEventEnvelope", input.playStreamEventEnvelope);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
            JsonUtils::ObjectAddMember(output, "ScheduledTaskId", input.scheduledTaskId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptRegisterHttpFunctionRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            JsonUtils::ObjectAddMember(output, "FunctionUrl", input.functionUrl);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptRegisterQueuedFunctionRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConnectionString", input.connectionString);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabCloudScriptUnregisterFunctionRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
            return output;
        }

    }

    namespace CloudScriptModels
    {
        // CloudScript Classes
        struct AdCampaignAttributionModel : public PlayFabCloudScriptAdCampaignAttributionModel, public BaseModel
        {
            AdCampaignAttributionModel() : PlayFabCloudScriptAdCampaignAttributionModel{}
            {
            }

            AdCampaignAttributionModel(const AdCampaignAttributionModel& src) :
                PlayFabCloudScriptAdCampaignAttributionModel{ src },
                m_campaignId{ src.m_campaignId },
                m_platform{ src.m_platform }
            {
                campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
                platform = m_platform.empty() ? nullptr : m_platform.data();
            }

            ~AdCampaignAttributionModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AttributedAt", attributedAt, true);
                JsonUtils:: ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptAdCampaignAttributionModel>(*this);
            }

        private:
            String m_campaignId;
            String m_platform;
        };

        struct ContactEmailInfoModel : public PlayFabCloudScriptContactEmailInfoModel, public BaseModel
        {
            ContactEmailInfoModel() : PlayFabCloudScriptContactEmailInfoModel{}
            {
            }

            ContactEmailInfoModel(const ContactEmailInfoModel& src) :
                PlayFabCloudScriptContactEmailInfoModel{ src },
                m_emailAddress{ src.m_emailAddress },
                m_name{ src.m_name },
                m_verificationStatus{ src.m_verificationStatus }
            {
                emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
                name = m_name.empty() ? nullptr : m_name.data();
                verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
            }

            ~ContactEmailInfoModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "VerificationStatus", m_verificationStatus, verificationStatus);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptContactEmailInfoModel>(*this);
            }

        private:
            String m_emailAddress;
            String m_name;
            StdExtra::optional<PlayFabCloudScriptEmailVerificationStatus> m_verificationStatus;
        };

        struct EntityKey : public PlayFabCloudScriptEntityKey, public BaseModel
        {
            EntityKey() : PlayFabCloudScriptEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabCloudScriptEntityKey{ src },
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
                return JsonUtils::ToJson<PlayFabCloudScriptEntityKey>(*this);
            }

        private:
            String m_id;
            String m_type;
        };

        struct ScriptExecutionError : public PlayFabCloudScriptScriptExecutionError, public BaseModel
        {
            ScriptExecutionError() : PlayFabCloudScriptScriptExecutionError{}
            {
            }

            ScriptExecutionError(const ScriptExecutionError& src) :
                PlayFabCloudScriptScriptExecutionError{ src },
                m_error{ src.m_error },
                m_message{ src.m_message },
                m_stackTrace{ src.m_stackTrace }
            {
                error = m_error.empty() ? nullptr : m_error.data();
                message = m_message.empty() ? nullptr : m_message.data();
                stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
            }

            ~ScriptExecutionError() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Error", m_error, error);
                JsonUtils:: ObjectGetMember(input, "Message", m_message, message);
                JsonUtils:: ObjectGetMember(input, "StackTrace", m_stackTrace, stackTrace);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptScriptExecutionError>(*this);
            }

        private:
            String m_error;
            String m_message;
            String m_stackTrace;
        };

        struct LogStatement : public PlayFabCloudScriptLogStatement, public BaseModel
        {
            LogStatement() : PlayFabCloudScriptLogStatement{}
            {
            }

            LogStatement(const LogStatement& src) :
                PlayFabCloudScriptLogStatement{ src },
                m_data{ src.m_data },
                m_level{ src.m_level },
                m_message{ src.m_message }
            {
                data.stringValue = m_data.StringValue();
                level = m_level.empty() ? nullptr : m_level.data();
                message = m_message.empty() ? nullptr : m_message.data();
            }

            ~LogStatement() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Data", m_data, data);
                JsonUtils:: ObjectGetMember(input, "Level", m_level, level);
                JsonUtils:: ObjectGetMember(input, "Message", m_message, message);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptLogStatement>(*this);
            }

        private:
            JsonObject m_data;
            String m_level;
            String m_message;
        };

        struct ExecuteCloudScriptResult : public PlayFabCloudScriptExecuteCloudScriptResult, public BaseResult
        {
            ExecuteCloudScriptResult() : PlayFabCloudScriptExecuteCloudScriptResult{}
            {
            }

            ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src) :
                PlayFabCloudScriptExecuteCloudScriptResult{ src },
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

            ~ExecuteCloudScriptResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "APIRequestsIssued", aPIRequestsIssued);
                JsonUtils:: ObjectGetMember(input, "Error", m_error, error);
                JsonUtils:: ObjectGetMember(input, "ExecutionTimeSeconds", executionTimeSeconds);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
                JsonUtils:: ObjectGetMember(input, "FunctionResultTooLarge", m_functionResultTooLarge, functionResultTooLarge);
                JsonUtils:: ObjectGetMember(input, "HttpRequestsIssued", httpRequestsIssued);
                JsonUtils:: ObjectGetMember(input, "Logs", m_logs, logs, logsCount);
                JsonUtils:: ObjectGetMember(input, "LogsTooLarge", m_logsTooLarge, logsTooLarge);
                JsonUtils:: ObjectGetMember(input, "MemoryConsumedBytes", memoryConsumedBytes);
                JsonUtils:: ObjectGetMember(input, "ProcessorTimeSeconds", processorTimeSeconds);
                JsonUtils:: ObjectGetMember(input, "Revision", revision);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptExecuteCloudScriptResult>(*this);
            }

        private:
            StdExtra::optional<ScriptExecutionError> m_error;
            String m_functionName;
            JsonObject m_functionResult;
            StdExtra::optional<bool> m_functionResultTooLarge;
            PointerArray<PlayFabCloudScriptLogStatement, LogStatement> m_logs;
            StdExtra::optional<bool> m_logsTooLarge;
        };

        struct ExecuteEntityCloudScriptRequest : public PlayFabCloudScriptExecuteEntityCloudScriptRequest, public BaseRequest
        {
            ExecuteEntityCloudScriptRequest() : PlayFabCloudScriptExecuteEntityCloudScriptRequest{}
            {
            }

            ExecuteEntityCloudScriptRequest(const ExecuteEntityCloudScriptRequest& src) :
                PlayFabCloudScriptExecuteEntityCloudScriptRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_functionName{ src.m_functionName },
                m_functionParameter{ src.m_functionParameter },
                m_generatePlayStreamEvent{ src.m_generatePlayStreamEvent },
                m_revisionSelection{ src.m_revisionSelection },
                m_specificRevision{ src.m_specificRevision }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
                functionParameter.stringValue = m_functionParameter.StringValue();
                generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
                revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
                specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
            }

            ~ExecuteEntityCloudScriptRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
                JsonUtils:: ObjectGetMember(input, "GeneratePlayStreamEvent", m_generatePlayStreamEvent, generatePlayStreamEvent);
                JsonUtils:: ObjectGetMember(input, "RevisionSelection", m_revisionSelection, revisionSelection);
                JsonUtils:: ObjectGetMember(input, "SpecificRevision", m_specificRevision, specificRevision);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptExecuteEntityCloudScriptRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
            String m_functionName;
            JsonObject m_functionParameter;
            StdExtra::optional<bool> m_generatePlayStreamEvent;
            StdExtra::optional<PlayFabCloudScriptCloudScriptRevisionOption> m_revisionSelection;
            StdExtra::optional<int32_t> m_specificRevision;
        };

        struct ExecuteFunctionRequest : public PlayFabCloudScriptExecuteFunctionRequest, public BaseRequest
        {
            ExecuteFunctionRequest() : PlayFabCloudScriptExecuteFunctionRequest{}
            {
            }

            ExecuteFunctionRequest(const ExecuteFunctionRequest& src) :
                PlayFabCloudScriptExecuteFunctionRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_functionName{ src.m_functionName },
                m_functionParameter{ src.m_functionParameter },
                m_generatePlayStreamEvent{ src.m_generatePlayStreamEvent }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
                functionParameter.stringValue = m_functionParameter.StringValue();
                generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
            }

            ~ExecuteFunctionRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
                JsonUtils:: ObjectGetMember(input, "GeneratePlayStreamEvent", m_generatePlayStreamEvent, generatePlayStreamEvent);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptExecuteFunctionRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
            String m_functionName;
            JsonObject m_functionParameter;
            StdExtra::optional<bool> m_generatePlayStreamEvent;
        };

        struct FunctionExecutionError : public PlayFabCloudScriptFunctionExecutionError, public BaseModel
        {
            FunctionExecutionError() : PlayFabCloudScriptFunctionExecutionError{}
            {
            }

            FunctionExecutionError(const FunctionExecutionError& src) :
                PlayFabCloudScriptFunctionExecutionError{ src },
                m_error{ src.m_error },
                m_message{ src.m_message },
                m_stackTrace{ src.m_stackTrace }
            {
                error = m_error.empty() ? nullptr : m_error.data();
                message = m_message.empty() ? nullptr : m_message.data();
                stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
            }

            ~FunctionExecutionError() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Error", m_error, error);
                JsonUtils:: ObjectGetMember(input, "Message", m_message, message);
                JsonUtils:: ObjectGetMember(input, "StackTrace", m_stackTrace, stackTrace);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptFunctionExecutionError>(*this);
            }

        private:
            String m_error;
            String m_message;
            String m_stackTrace;
        };

        struct ExecuteFunctionResult : public PlayFabCloudScriptExecuteFunctionResult, public BaseResult
        {
            ExecuteFunctionResult() : PlayFabCloudScriptExecuteFunctionResult{}
            {
            }

            ExecuteFunctionResult(const ExecuteFunctionResult& src) :
                PlayFabCloudScriptExecuteFunctionResult{ src },
                m_error{ src.m_error },
                m_functionName{ src.m_functionName },
                m_functionResult{ src.m_functionResult },
                m_functionResultTooLarge{ src.m_functionResultTooLarge }
            {
                error = m_error ? m_error.operator->() : nullptr;
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
                functionResult.stringValue = m_functionResult.StringValue();
                functionResultTooLarge = m_functionResultTooLarge ? m_functionResultTooLarge.operator->() : nullptr;
            }

            ~ExecuteFunctionResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Error", m_error, error);
                JsonUtils:: ObjectGetMember(input, "ExecutionTimeMilliseconds", executionTimeMilliseconds);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
                JsonUtils:: ObjectGetMember(input, "FunctionResultTooLarge", m_functionResultTooLarge, functionResultTooLarge);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptExecuteFunctionResult>(*this);
            }

        private:
            StdExtra::optional<FunctionExecutionError> m_error;
            String m_functionName;
            JsonObject m_functionResult;
            StdExtra::optional<bool> m_functionResultTooLarge;
        };

        struct FunctionModel : public PlayFabCloudScriptFunctionModel, public BaseModel
        {
            FunctionModel() : PlayFabCloudScriptFunctionModel{}
            {
            }

            FunctionModel(const FunctionModel& src) :
                PlayFabCloudScriptFunctionModel{ src },
                m_functionAddress{ src.m_functionAddress },
                m_functionName{ src.m_functionName },
                m_triggerType{ src.m_triggerType }
            {
                functionAddress = m_functionAddress.empty() ? nullptr : m_functionAddress.data();
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
                triggerType = m_triggerType.empty() ? nullptr : m_triggerType.data();
            }

            ~FunctionModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FunctionAddress", m_functionAddress, functionAddress);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "TriggerType", m_triggerType, triggerType);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptFunctionModel>(*this);
            }

        private:
            String m_functionAddress;
            String m_functionName;
            String m_triggerType;
        };

        struct HttpFunctionModel : public PlayFabCloudScriptHttpFunctionModel, public BaseModel
        {
            HttpFunctionModel() : PlayFabCloudScriptHttpFunctionModel{}
            {
            }

            HttpFunctionModel(const HttpFunctionModel& src) :
                PlayFabCloudScriptHttpFunctionModel{ src },
                m_functionName{ src.m_functionName },
                m_functionUrl{ src.m_functionUrl }
            {
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
                functionUrl = m_functionUrl.empty() ? nullptr : m_functionUrl.data();
            }

            ~HttpFunctionModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "FunctionUrl", m_functionUrl, functionUrl);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptHttpFunctionModel>(*this);
            }

        private:
            String m_functionName;
            String m_functionUrl;
        };

        struct LinkedPlatformAccountModel : public PlayFabCloudScriptLinkedPlatformAccountModel, public BaseModel
        {
            LinkedPlatformAccountModel() : PlayFabCloudScriptLinkedPlatformAccountModel{}
            {
            }

            LinkedPlatformAccountModel(const LinkedPlatformAccountModel& src) :
                PlayFabCloudScriptLinkedPlatformAccountModel{ src },
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

            ~LinkedPlatformAccountModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Email", m_email, email);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
                JsonUtils:: ObjectGetMember(input, "PlatformUserId", m_platformUserId, platformUserId);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptLinkedPlatformAccountModel>(*this);
            }

        private:
            String m_email;
            StdExtra::optional<PlayFabCloudScriptLoginIdentityProvider> m_platform;
            String m_platformUserId;
            String m_username;
        };

        struct ListFunctionsRequest : public PlayFabCloudScriptListFunctionsRequest, public BaseRequest
        {
            ListFunctionsRequest() : PlayFabCloudScriptListFunctionsRequest{}
            {
            }

            ListFunctionsRequest(const ListFunctionsRequest& src) :
                PlayFabCloudScriptListFunctionsRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~ListFunctionsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptListFunctionsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct ListFunctionsResult : public PlayFabCloudScriptListFunctionsResult, public BaseResult
        {
            ListFunctionsResult() : PlayFabCloudScriptListFunctionsResult{}
            {
            }

            ListFunctionsResult(const ListFunctionsResult& src) :
                PlayFabCloudScriptListFunctionsResult{ src },
                m_functions{ src.m_functions }
            {
                functions = m_functions.Empty() ? nullptr : m_functions.Data();
            }

            ~ListFunctionsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Functions", m_functions, functions, functionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptListFunctionsResult>(*this);
            }

        private:
            PointerArray<PlayFabCloudScriptFunctionModel, FunctionModel> m_functions;
        };

        struct ListHttpFunctionsResult : public PlayFabCloudScriptListHttpFunctionsResult, public BaseResult
        {
            ListHttpFunctionsResult() : PlayFabCloudScriptListHttpFunctionsResult{}
            {
            }

            ListHttpFunctionsResult(const ListHttpFunctionsResult& src) :
                PlayFabCloudScriptListHttpFunctionsResult{ src },
                m_functions{ src.m_functions }
            {
                functions = m_functions.Empty() ? nullptr : m_functions.Data();
            }

            ~ListHttpFunctionsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Functions", m_functions, functions, functionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptListHttpFunctionsResult>(*this);
            }

        private:
            PointerArray<PlayFabCloudScriptHttpFunctionModel, HttpFunctionModel> m_functions;
        };

        struct QueuedFunctionModel : public PlayFabCloudScriptQueuedFunctionModel, public BaseModel
        {
            QueuedFunctionModel() : PlayFabCloudScriptQueuedFunctionModel{}
            {
            }

            QueuedFunctionModel(const QueuedFunctionModel& src) :
                PlayFabCloudScriptQueuedFunctionModel{ src },
                m_connectionString{ src.m_connectionString },
                m_functionName{ src.m_functionName },
                m_queueName{ src.m_queueName }
            {
                connectionString = m_connectionString.empty() ? nullptr : m_connectionString.data();
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
            }

            ~QueuedFunctionModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ConnectionString", m_connectionString, connectionString);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptQueuedFunctionModel>(*this);
            }

        private:
            String m_connectionString;
            String m_functionName;
            String m_queueName;
        };

        struct ListQueuedFunctionsResult : public PlayFabCloudScriptListQueuedFunctionsResult, public BaseResult
        {
            ListQueuedFunctionsResult() : PlayFabCloudScriptListQueuedFunctionsResult{}
            {
            }

            ListQueuedFunctionsResult(const ListQueuedFunctionsResult& src) :
                PlayFabCloudScriptListQueuedFunctionsResult{ src },
                m_functions{ src.m_functions }
            {
                functions = m_functions.Empty() ? nullptr : m_functions.Data();
            }

            ~ListQueuedFunctionsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Functions", m_functions, functions, functionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptListQueuedFunctionsResult>(*this);
            }

        private:
            PointerArray<PlayFabCloudScriptQueuedFunctionModel, QueuedFunctionModel> m_functions;
        };

        struct LocationModel : public PlayFabCloudScriptLocationModel, public BaseModel
        {
            LocationModel() : PlayFabCloudScriptLocationModel{}
            {
            }

            LocationModel(const LocationModel& src) :
                PlayFabCloudScriptLocationModel{ src },
                m_city{ src.m_city },
                m_continentCode{ src.m_continentCode },
                m_countryCode{ src.m_countryCode },
                m_latitude{ src.m_latitude },
                m_longitude{ src.m_longitude }
            {
                city = m_city.empty() ? nullptr : m_city.data();
                continentCode = m_continentCode ? m_continentCode.operator->() : nullptr;
                countryCode = m_countryCode ? m_countryCode.operator->() : nullptr;
                latitude = m_latitude ? m_latitude.operator->() : nullptr;
                longitude = m_longitude ? m_longitude.operator->() : nullptr;
            }

            ~LocationModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "City", m_city, city);
                JsonUtils:: ObjectGetMember(input, "ContinentCode", m_continentCode, continentCode);
                JsonUtils:: ObjectGetMember(input, "CountryCode", m_countryCode, countryCode);
                JsonUtils:: ObjectGetMember(input, "Latitude", m_latitude, latitude);
                JsonUtils:: ObjectGetMember(input, "Longitude", m_longitude, longitude);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptLocationModel>(*this);
            }

        private:
            String m_city;
            StdExtra::optional<PlayFabCloudScriptContinentCode> m_continentCode;
            StdExtra::optional<PlayFabCloudScriptCountryCode> m_countryCode;
            StdExtra::optional<double> m_latitude;
            StdExtra::optional<double> m_longitude;
        };

        struct SubscriptionModel : public PlayFabCloudScriptSubscriptionModel, public BaseModel
        {
            SubscriptionModel() : PlayFabCloudScriptSubscriptionModel{}
            {
            }

            SubscriptionModel(const SubscriptionModel& src) :
                PlayFabCloudScriptSubscriptionModel{ src },
                m_status{ src.m_status },
                m_subscriptionId{ src.m_subscriptionId },
                m_subscriptionItemId{ src.m_subscriptionItemId },
                m_subscriptionProvider{ src.m_subscriptionProvider }
            {
                status = m_status ? m_status.operator->() : nullptr;
                subscriptionId = m_subscriptionId.empty() ? nullptr : m_subscriptionId.data();
                subscriptionItemId = m_subscriptionItemId.empty() ? nullptr : m_subscriptionItemId.data();
                subscriptionProvider = m_subscriptionProvider.empty() ? nullptr : m_subscriptionProvider.data();
            }

            ~SubscriptionModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Expiration", expiration, true);
                JsonUtils:: ObjectGetMember(input, "InitialSubscriptionTime", initialSubscriptionTime, true);
                JsonUtils:: ObjectGetMember(input, "IsActive", isActive);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "SubscriptionId", m_subscriptionId, subscriptionId);
                JsonUtils:: ObjectGetMember(input, "SubscriptionItemId", m_subscriptionItemId, subscriptionItemId);
                JsonUtils:: ObjectGetMember(input, "SubscriptionProvider", m_subscriptionProvider, subscriptionProvider);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptSubscriptionModel>(*this);
            }

        private:
            StdExtra::optional<PlayFabCloudScriptSubscriptionProviderStatus> m_status;
            String m_subscriptionId;
            String m_subscriptionItemId;
            String m_subscriptionProvider;
        };

        struct MembershipModel : public PlayFabCloudScriptMembershipModel, public BaseModel
        {
            MembershipModel() : PlayFabCloudScriptMembershipModel{}
            {
            }

            MembershipModel(const MembershipModel& src) :
                PlayFabCloudScriptMembershipModel{ src },
                m_membershipId{ src.m_membershipId },
                m_overrideExpiration{ src.m_overrideExpiration },
                m_subscriptions{ src.m_subscriptions }
            {
                membershipId = m_membershipId.empty() ? nullptr : m_membershipId.data();
                overrideExpiration = m_overrideExpiration ? m_overrideExpiration.operator->() : nullptr;
                subscriptions = m_subscriptions.Empty() ? nullptr : m_subscriptions.Data();
            }

            ~MembershipModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "IsActive", isActive);
                JsonUtils:: ObjectGetMember(input, "MembershipExpiration", membershipExpiration, true);
                JsonUtils:: ObjectGetMember(input, "MembershipId", m_membershipId, membershipId);
                JsonUtils:: ObjectGetMember(input, "OverrideExpiration", m_overrideExpiration, overrideExpiration, true);
                JsonUtils:: ObjectGetMember(input, "Subscriptions", m_subscriptions, subscriptions, subscriptionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptMembershipModel>(*this);
            }

        private:
            String m_membershipId;
            StdExtra::optional<time_t> m_overrideExpiration;
            PointerArray<PlayFabCloudScriptSubscriptionModel, SubscriptionModel> m_subscriptions;
        };

        struct NameIdentifier : public PlayFabCloudScriptNameIdentifier, public BaseModel
        {
            NameIdentifier() : PlayFabCloudScriptNameIdentifier{}
            {
            }

            NameIdentifier(const NameIdentifier& src) :
                PlayFabCloudScriptNameIdentifier{ src },
                m_id{ src.m_id },
                m_name{ src.m_name }
            {
                id = m_id.empty() ? nullptr : m_id.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~NameIdentifier() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptNameIdentifier>(*this);
            }

        private:
            String m_id;
            String m_name;
        };

        struct PushNotificationRegistrationModel : public PlayFabCloudScriptPushNotificationRegistrationModel, public BaseModel
        {
            PushNotificationRegistrationModel() : PlayFabCloudScriptPushNotificationRegistrationModel{}
            {
            }

            PushNotificationRegistrationModel(const PushNotificationRegistrationModel& src) :
                PlayFabCloudScriptPushNotificationRegistrationModel{ src },
                m_notificationEndpointARN{ src.m_notificationEndpointARN },
                m_platform{ src.m_platform }
            {
                notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
                platform = m_platform ? m_platform.operator->() : nullptr;
            }

            ~PushNotificationRegistrationModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "NotificationEndpointARN", m_notificationEndpointARN, notificationEndpointARN);
                JsonUtils:: ObjectGetMember(input, "Platform", m_platform, platform);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptPushNotificationRegistrationModel>(*this);
            }

        private:
            String m_notificationEndpointARN;
            StdExtra::optional<PlayFabCloudScriptPushNotificationPlatform> m_platform;
        };

        struct StatisticModel : public PlayFabCloudScriptStatisticModel, public BaseModel
        {
            StatisticModel() : PlayFabCloudScriptStatisticModel{}
            {
            }

            StatisticModel(const StatisticModel& src) :
                PlayFabCloudScriptStatisticModel{ src },
                m_name{ src.m_name }
            {
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~StatisticModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Value", value);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptStatisticModel>(*this);
            }

        private:
            String m_name;
        };

        struct TagModel : public PlayFabCloudScriptTagModel, public BaseModel
        {
            TagModel() : PlayFabCloudScriptTagModel{}
            {
            }

            TagModel(const TagModel& src) :
                PlayFabCloudScriptTagModel{ src },
                m_tagValue{ src.m_tagValue }
            {
                tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
            }

            ~TagModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "TagValue", m_tagValue, tagValue);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptTagModel>(*this);
            }

        private:
            String m_tagValue;
        };

        struct ValueToDateModel : public PlayFabCloudScriptValueToDateModel, public BaseModel
        {
            ValueToDateModel() : PlayFabCloudScriptValueToDateModel{}
            {
            }

            ValueToDateModel(const ValueToDateModel& src) :
                PlayFabCloudScriptValueToDateModel{ src },
                m_currency{ src.m_currency },
                m_totalValueAsDecimal{ src.m_totalValueAsDecimal }
            {
                currency = m_currency.empty() ? nullptr : m_currency.data();
                totalValueAsDecimal = m_totalValueAsDecimal.empty() ? nullptr : m_totalValueAsDecimal.data();
            }

            ~ValueToDateModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Currency", m_currency, currency);
                JsonUtils:: ObjectGetMember(input, "TotalValue", totalValue);
                JsonUtils:: ObjectGetMember(input, "TotalValueAsDecimal", m_totalValueAsDecimal, totalValueAsDecimal);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptValueToDateModel>(*this);
            }

        private:
            String m_currency;
            String m_totalValueAsDecimal;
        };

        struct PlayerProfileModel : public PlayFabCloudScriptPlayerProfileModel, public BaseModel
        {
            PlayerProfileModel() : PlayFabCloudScriptPlayerProfileModel{}
            {
            }

            PlayerProfileModel(const PlayerProfileModel& src) :
                PlayFabCloudScriptPlayerProfileModel{ src },
                m_adCampaignAttributions{ src.m_adCampaignAttributions },
                m_avatarUrl{ src.m_avatarUrl },
                m_bannedUntil{ src.m_bannedUntil },
                m_contactEmailAddresses{ src.m_contactEmailAddresses },
                m_created{ src.m_created },
                m_displayName{ src.m_displayName },
                m_experimentVariants{ src.m_experimentVariants },
                m_lastLogin{ src.m_lastLogin },
                m_linkedAccounts{ src.m_linkedAccounts },
                m_locations{ src.m_locations },
                m_memberships{ src.m_memberships },
                m_origination{ src.m_origination },
                m_playerId{ src.m_playerId },
                m_publisherId{ src.m_publisherId },
                m_pushNotificationRegistrations{ src.m_pushNotificationRegistrations },
                m_statistics{ src.m_statistics },
                m_tags{ src.m_tags },
                m_titleId{ src.m_titleId },
                m_totalValueToDateInUSD{ src.m_totalValueToDateInUSD },
                m_valuesToDate{ src.m_valuesToDate }
            {
                adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
                avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
                bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
                contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
                created = m_created ? m_created.operator->() : nullptr;
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                experimentVariants = m_experimentVariants.Empty() ? nullptr : m_experimentVariants.Data();
                lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
                linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
                locations = m_locations.Empty() ? nullptr : m_locations.Data();
                memberships = m_memberships.Empty() ? nullptr : m_memberships.Data();
                origination = m_origination ? m_origination.operator->() : nullptr;
                playerId = m_playerId.empty() ? nullptr : m_playerId.data();
                publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
                pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
                statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
                tags = m_tags.Empty() ? nullptr : m_tags.Data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
                totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
                valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
            }

            ~PlayerProfileModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AdCampaignAttributions", m_adCampaignAttributions, adCampaignAttributions, adCampaignAttributionsCount);
                JsonUtils:: ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
                JsonUtils:: ObjectGetMember(input, "BannedUntil", m_bannedUntil, bannedUntil, true);
                JsonUtils:: ObjectGetMember(input, "ContactEmailAddresses", m_contactEmailAddresses, contactEmailAddresses, contactEmailAddressesCount);
                JsonUtils:: ObjectGetMember(input, "Created", m_created, created, true);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "ExperimentVariants", m_experimentVariants, experimentVariants, experimentVariantsCount);
                JsonUtils:: ObjectGetMember(input, "LastLogin", m_lastLogin, lastLogin, true);
                JsonUtils:: ObjectGetMember(input, "LinkedAccounts", m_linkedAccounts, linkedAccounts, linkedAccountsCount);
                JsonUtils:: ObjectGetMember(input, "Locations", m_locations, locations, locationsCount);
                JsonUtils:: ObjectGetMember(input, "Memberships", m_memberships, memberships, membershipsCount);
                JsonUtils:: ObjectGetMember(input, "Origination", m_origination, origination);
                JsonUtils:: ObjectGetMember(input, "PlayerId", m_playerId, playerId);
                JsonUtils:: ObjectGetMember(input, "PublisherId", m_publisherId, publisherId);
                JsonUtils:: ObjectGetMember(input, "PushNotificationRegistrations", m_pushNotificationRegistrations, pushNotificationRegistrations, pushNotificationRegistrationsCount);
                JsonUtils:: ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
                JsonUtils:: ObjectGetMember(input, "TotalValueToDateInUSD", m_totalValueToDateInUSD, totalValueToDateInUSD);
                JsonUtils:: ObjectGetMember(input, "ValuesToDate", m_valuesToDate, valuesToDate, valuesToDateCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptPlayerProfileModel>(*this);
            }

        private:
            PointerArray<PlayFabCloudScriptAdCampaignAttributionModel, AdCampaignAttributionModel> m_adCampaignAttributions;
            String m_avatarUrl;
            StdExtra::optional<time_t> m_bannedUntil;
            PointerArray<PlayFabCloudScriptContactEmailInfoModel, ContactEmailInfoModel> m_contactEmailAddresses;
            StdExtra::optional<time_t> m_created;
            String m_displayName;
            PointerArray<const char, String> m_experimentVariants;
            StdExtra::optional<time_t> m_lastLogin;
            PointerArray<PlayFabCloudScriptLinkedPlatformAccountModel, LinkedPlatformAccountModel> m_linkedAccounts;
            PointerArray<PlayFabCloudScriptLocationModel, LocationModel> m_locations;
            PointerArray<PlayFabCloudScriptMembershipModel, MembershipModel> m_memberships;
            StdExtra::optional<PlayFabCloudScriptLoginIdentityProvider> m_origination;
            String m_playerId;
            String m_publisherId;
            PointerArray<PlayFabCloudScriptPushNotificationRegistrationModel, PushNotificationRegistrationModel> m_pushNotificationRegistrations;
            PointerArray<PlayFabCloudScriptStatisticModel, StatisticModel> m_statistics;
            PointerArray<PlayFabCloudScriptTagModel, TagModel> m_tags;
            String m_titleId;
            StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
            PointerArray<PlayFabCloudScriptValueToDateModel, ValueToDateModel> m_valuesToDate;
        };

        struct PlayStreamEventEnvelopeModel : public PlayFabCloudScriptPlayStreamEventEnvelopeModel, public BaseModel
        {
            PlayStreamEventEnvelopeModel() : PlayFabCloudScriptPlayStreamEventEnvelopeModel{}
            {
            }

            PlayStreamEventEnvelopeModel(const PlayStreamEventEnvelopeModel& src) :
                PlayFabCloudScriptPlayStreamEventEnvelopeModel{ src },
                m_entityId{ src.m_entityId },
                m_entityType{ src.m_entityType },
                m_eventData{ src.m_eventData },
                m_eventName{ src.m_eventName },
                m_eventNamespace{ src.m_eventNamespace },
                m_eventSettings{ src.m_eventSettings }
            {
                entityId = m_entityId.empty() ? nullptr : m_entityId.data();
                entityType = m_entityType.empty() ? nullptr : m_entityType.data();
                eventData = m_eventData.empty() ? nullptr : m_eventData.data();
                eventName = m_eventName.empty() ? nullptr : m_eventName.data();
                eventNamespace = m_eventNamespace.empty() ? nullptr : m_eventNamespace.data();
                eventSettings = m_eventSettings.empty() ? nullptr : m_eventSettings.data();
            }

            ~PlayStreamEventEnvelopeModel() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "EntityId", m_entityId, entityId);
                JsonUtils:: ObjectGetMember(input, "EntityType", m_entityType, entityType);
                JsonUtils:: ObjectGetMember(input, "EventData", m_eventData, eventData);
                JsonUtils:: ObjectGetMember(input, "EventName", m_eventName, eventName);
                JsonUtils:: ObjectGetMember(input, "EventNamespace", m_eventNamespace, eventNamespace);
                JsonUtils:: ObjectGetMember(input, "EventSettings", m_eventSettings, eventSettings);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptPlayStreamEventEnvelopeModel>(*this);
            }

        private:
            String m_entityId;
            String m_entityType;
            String m_eventData;
            String m_eventName;
            String m_eventNamespace;
            String m_eventSettings;
        };

        struct PostFunctionResultForEntityTriggeredActionRequest : public PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest, public BaseRequest
        {
            PostFunctionResultForEntityTriggeredActionRequest() : PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest{}
            {
            }

            PostFunctionResultForEntityTriggeredActionRequest(const PostFunctionResultForEntityTriggeredActionRequest& src) :
                PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_functionResult{ src.m_functionResult }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabCloudScriptEntityKey*)&m_entity;
                functionResult = (PlayFabCloudScriptExecuteFunctionResult*)&m_functionResult;
            }

            ~PostFunctionResultForEntityTriggeredActionRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            ExecuteFunctionResult m_functionResult;
        };

        struct PostFunctionResultForFunctionExecutionRequest : public PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest, public BaseRequest
        {
            PostFunctionResultForFunctionExecutionRequest() : PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest{}
            {
            }

            PostFunctionResultForFunctionExecutionRequest(const PostFunctionResultForFunctionExecutionRequest& src) :
                PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_functionResult{ src.m_functionResult }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabCloudScriptEntityKey*)&m_entity;
                functionResult = (PlayFabCloudScriptExecuteFunctionResult*)&m_functionResult;
            }

            ~PostFunctionResultForFunctionExecutionRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            ExecuteFunctionResult m_functionResult;
        };

        struct PostFunctionResultForPlayerTriggeredActionRequest : public PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest, public BaseRequest
        {
            PostFunctionResultForPlayerTriggeredActionRequest() : PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest{}
            {
            }

            PostFunctionResultForPlayerTriggeredActionRequest(const PostFunctionResultForPlayerTriggeredActionRequest& src) :
                PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_functionResult{ src.m_functionResult },
                m_playerProfile{ src.m_playerProfile },
                m_playStreamEventEnvelope{ src.m_playStreamEventEnvelope }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
                functionResult = (PlayFabCloudScriptExecuteFunctionResult*)&m_functionResult;
                playerProfile = (PlayFabCloudScriptPlayerProfileModel*)&m_playerProfile;
                playStreamEventEnvelope = m_playStreamEventEnvelope ? m_playStreamEventEnvelope.operator->() : nullptr;
            }

            ~PostFunctionResultForPlayerTriggeredActionRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
                JsonUtils:: ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
                JsonUtils:: ObjectGetMember(input, "PlayStreamEventEnvelope", m_playStreamEventEnvelope, playStreamEventEnvelope);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
            ExecuteFunctionResult m_functionResult;
            PlayerProfileModel m_playerProfile;
            StdExtra::optional<PlayStreamEventEnvelopeModel> m_playStreamEventEnvelope;
        };

        struct PostFunctionResultForScheduledTaskRequest : public PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest, public BaseRequest
        {
            PostFunctionResultForScheduledTaskRequest() : PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest{}
            {
            }

            PostFunctionResultForScheduledTaskRequest(const PostFunctionResultForScheduledTaskRequest& src) :
                PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_functionResult{ src.m_functionResult },
                m_scheduledTaskId{ src.m_scheduledTaskId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabCloudScriptEntityKey*)&m_entity;
                functionResult = (PlayFabCloudScriptExecuteFunctionResult*)&m_functionResult;
                scheduledTaskId = (PlayFabCloudScriptNameIdentifier*)&m_scheduledTaskId;
            }

            ~PostFunctionResultForScheduledTaskRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
                JsonUtils:: ObjectGetMember(input, "ScheduledTaskId", m_scheduledTaskId, scheduledTaskId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            ExecuteFunctionResult m_functionResult;
            NameIdentifier m_scheduledTaskId;
        };

        struct RegisterHttpFunctionRequest : public PlayFabCloudScriptRegisterHttpFunctionRequest, public BaseRequest
        {
            RegisterHttpFunctionRequest() : PlayFabCloudScriptRegisterHttpFunctionRequest{}
            {
            }

            RegisterHttpFunctionRequest(const RegisterHttpFunctionRequest& src) :
                PlayFabCloudScriptRegisterHttpFunctionRequest{ src },
                m_customTags{ src.m_customTags },
                m_functionName{ src.m_functionName },
                m_functionUrl{ src.m_functionUrl }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
                functionUrl = m_functionUrl.empty() ? nullptr : m_functionUrl.data();
            }

            ~RegisterHttpFunctionRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "FunctionUrl", m_functionUrl, functionUrl);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptRegisterHttpFunctionRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_functionName;
            String m_functionUrl;
        };

        struct RegisterQueuedFunctionRequest : public PlayFabCloudScriptRegisterQueuedFunctionRequest, public BaseRequest
        {
            RegisterQueuedFunctionRequest() : PlayFabCloudScriptRegisterQueuedFunctionRequest{}
            {
            }

            RegisterQueuedFunctionRequest(const RegisterQueuedFunctionRequest& src) :
                PlayFabCloudScriptRegisterQueuedFunctionRequest{ src },
                m_connectionString{ src.m_connectionString },
                m_customTags{ src.m_customTags },
                m_functionName{ src.m_functionName },
                m_queueName{ src.m_queueName }
            {
                connectionString = m_connectionString.empty() ? nullptr : m_connectionString.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
            }

            ~RegisterQueuedFunctionRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ConnectionString", m_connectionString, connectionString);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptRegisterQueuedFunctionRequest>(*this);
            }

        private:
            String m_connectionString;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_functionName;
            String m_queueName;
        };

        struct UnregisterFunctionRequest : public PlayFabCloudScriptUnregisterFunctionRequest, public BaseRequest
        {
            UnregisterFunctionRequest() : PlayFabCloudScriptUnregisterFunctionRequest{}
            {
            }

            UnregisterFunctionRequest(const UnregisterFunctionRequest& src) :
                PlayFabCloudScriptUnregisterFunctionRequest{ src },
                m_customTags{ src.m_customTags },
                m_functionName{ src.m_functionName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                functionName = m_functionName.empty() ? nullptr : m_functionName.data();
            }

            ~UnregisterFunctionRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "FunctionName", m_functionName, functionName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabCloudScriptUnregisterFunctionRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_functionName;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
    template<> struct EnumRange<PlayFabCloudScriptCloudScriptRevisionOption>
    {
        static constexpr PlayFabCloudScriptCloudScriptRevisionOption maxValue = PlayFabCloudScriptCloudScriptRevisionOption::Specific;
    };

    template<> struct EnumRange<PlayFabCloudScriptContinentCode>
    {
        static constexpr PlayFabCloudScriptContinentCode maxValue = PlayFabCloudScriptContinentCode::SA;
    };

    template<> struct EnumRange<PlayFabCloudScriptCountryCode>
    {
        static constexpr PlayFabCloudScriptCountryCode maxValue = PlayFabCloudScriptCountryCode::ZW;
    };

    template<> struct EnumRange<PlayFabCloudScriptEmailVerificationStatus>
    {
        static constexpr PlayFabCloudScriptEmailVerificationStatus maxValue = PlayFabCloudScriptEmailVerificationStatus::Confirmed;
    };

    template<> struct EnumRange<PlayFabCloudScriptLoginIdentityProvider>
    {
        static constexpr PlayFabCloudScriptLoginIdentityProvider maxValue = PlayFabCloudScriptLoginIdentityProvider::NintendoSwitchAccount;
    };

    template<> struct EnumRange<PlayFabCloudScriptPushNotificationPlatform>
    {
        static constexpr PlayFabCloudScriptPushNotificationPlatform maxValue = PlayFabCloudScriptPushNotificationPlatform::GoogleCloudMessaging;
    };

    template<> struct EnumRange<PlayFabCloudScriptSubscriptionProviderStatus>
    {
        static constexpr PlayFabCloudScriptSubscriptionProviderStatus maxValue = PlayFabCloudScriptSubscriptionProviderStatus::PaymentPending;
    };

    template<> struct EnumRange<PlayFabCloudScriptTriggerType>
    {
        static constexpr PlayFabCloudScriptTriggerType maxValue = PlayFabCloudScriptTriggerType::Queue;
    };

}

#endif
